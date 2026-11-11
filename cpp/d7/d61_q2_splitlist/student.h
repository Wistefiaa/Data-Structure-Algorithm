void splitList(list<T>& list1, list<T>& list2) {
    // กรณี *this เป็น list ว่าง ไม่ต้องย้ายข้อมูลใดๆ
    if (mSize == 0) return;

    // คำนวณจำนวนข้อมูลที่จะย้ายไปยัง list1 (ครึ่งแรก ปัดขึ้น) และ list2 (ครึ่งหลัง)
    size_t n1 = (mSize + 1) / 2;
    size_t n2 = mSize - n1;

    // หา pointer หัวและท้ายของครึ่งแรก [first1 ... last1]
    node *first1 = mHeader->next;
    node *last1 = first1;
    for (size_t i = 1; i < n1; i++) {
        last1 = last1->next;
    }

    // หา pointer หัวและท้ายของครึ่งหลัง [first2 ... last2]
    node *first2 = last1->next;
    node *last2 = mHeader->prev;

    // ปรับ *this ให้เป็น list ว่าง
    mHeader->next = mHeader;
    mHeader->prev = mHeader;
    mSize = 0;

    // นำช่วง [first1 ... last1] ไปต่อท้าย list1 (n1 >= 1 เสมอเมื่อ mSize > 0)
    list1.mHeader->prev->next = first1;
    first1->prev = list1.mHeader->prev;
    last1->next = list1.mHeader;
    list1.mHeader->prev = last1;
    list1.mSize += n1;

    // นำช่วง [first2 ... last2] ไปต่อท้าย list2 (ทำเมื่อมีข้อมูลครึ่งหลัง)
    if (n2 > 0) {
        list2.mHeader->prev->next = first2;
        first2->prev = list2.mHeader->prev;
        last2->next = list2.mHeader;
        list2.mHeader->prev = last2;
        list2.mSize += n2;
    }
}