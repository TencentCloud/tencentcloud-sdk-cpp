/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/domain/v20180808/model/DescribePreReleaseListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

DescribePreReleaseListRequest::DescribePreReleaseListRequest() :
    m_keywordsHasBeenSet(false),
    m_domainStartHasBeenSet(false),
    m_domainEndHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_priceStartHasBeenSet(false),
    m_priceEndHasBeenSet(false),
    m_lengthStartHasBeenSet(false),
    m_lengthEndHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_suffixHasBeenSet(false),
    m_classOneHasBeenSet(false),
    m_classTwoHasBeenSet(false),
    m_classThreeHasBeenSet(false),
    m_classFourHasBeenSet(false),
    m_filterStartHasBeenSet(false),
    m_filterEndHasBeenSet(false),
    m_filterWordsHasBeenSet(false),
    m_transTypeHasBeenSet(false),
    m_isTopHasBeenSet(false),
    m_endTimeSortHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

string DescribePreReleaseListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_keywordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keywords";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keywords.c_str(), allocator).Move(), allocator);
    }

    if (m_domainStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_domainStart, allocator);
    }

    if (m_domainEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_domainEnd, allocator);
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sort, allocator);
    }

    if (m_priceStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PriceStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_priceStart, allocator);
    }

    if (m_priceEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PriceEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_priceEnd, allocator);
    }

    if (m_lengthStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LengthStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_lengthStart, allocator);
    }

    if (m_lengthEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LengthEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_lengthEnd, allocator);
    }

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_suffixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suffix";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_suffix.begin(); itr != m_suffix.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_classOneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassOne";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_classOne, allocator);
    }

    if (m_classTwoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassTwo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_classTwo.begin(); itr != m_classTwo.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_classThreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassThree";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_classThree.begin(); itr != m_classThree.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_classFourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassFour";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_classFour.begin(); itr != m_classFour.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_filterStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filterStart, allocator);
    }

    if (m_filterEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filterEnd, allocator);
    }

    if (m_filterWordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterWords";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterWords.c_str(), allocator).Move(), allocator);
    }

    if (m_transTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_transType, allocator);
    }

    if (m_isTopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsTop";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isTop, allocator);
    }

    if (m_endTimeSortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimeSort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTimeSort.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribePreReleaseListRequest::GetKeywords() const
{
    return m_keywords;
}

void DescribePreReleaseListRequest::SetKeywords(const string& _keywords)
{
    m_keywords = _keywords;
    m_keywordsHasBeenSet = true;
}

bool DescribePreReleaseListRequest::KeywordsHasBeenSet() const
{
    return m_keywordsHasBeenSet;
}

bool DescribePreReleaseListRequest::GetDomainStart() const
{
    return m_domainStart;
}

void DescribePreReleaseListRequest::SetDomainStart(const bool& _domainStart)
{
    m_domainStart = _domainStart;
    m_domainStartHasBeenSet = true;
}

bool DescribePreReleaseListRequest::DomainStartHasBeenSet() const
{
    return m_domainStartHasBeenSet;
}

bool DescribePreReleaseListRequest::GetDomainEnd() const
{
    return m_domainEnd;
}

void DescribePreReleaseListRequest::SetDomainEnd(const bool& _domainEnd)
{
    m_domainEnd = _domainEnd;
    m_domainEndHasBeenSet = true;
}

bool DescribePreReleaseListRequest::DomainEndHasBeenSet() const
{
    return m_domainEndHasBeenSet;
}

int64_t DescribePreReleaseListRequest::GetSort() const
{
    return m_sort;
}

void DescribePreReleaseListRequest::SetSort(const int64_t& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool DescribePreReleaseListRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

double DescribePreReleaseListRequest::GetPriceStart() const
{
    return m_priceStart;
}

void DescribePreReleaseListRequest::SetPriceStart(const double& _priceStart)
{
    m_priceStart = _priceStart;
    m_priceStartHasBeenSet = true;
}

bool DescribePreReleaseListRequest::PriceStartHasBeenSet() const
{
    return m_priceStartHasBeenSet;
}

double DescribePreReleaseListRequest::GetPriceEnd() const
{
    return m_priceEnd;
}

void DescribePreReleaseListRequest::SetPriceEnd(const double& _priceEnd)
{
    m_priceEnd = _priceEnd;
    m_priceEndHasBeenSet = true;
}

bool DescribePreReleaseListRequest::PriceEndHasBeenSet() const
{
    return m_priceEndHasBeenSet;
}

int64_t DescribePreReleaseListRequest::GetLengthStart() const
{
    return m_lengthStart;
}

void DescribePreReleaseListRequest::SetLengthStart(const int64_t& _lengthStart)
{
    m_lengthStart = _lengthStart;
    m_lengthStartHasBeenSet = true;
}

bool DescribePreReleaseListRequest::LengthStartHasBeenSet() const
{
    return m_lengthStartHasBeenSet;
}

int64_t DescribePreReleaseListRequest::GetLengthEnd() const
{
    return m_lengthEnd;
}

void DescribePreReleaseListRequest::SetLengthEnd(const int64_t& _lengthEnd)
{
    m_lengthEnd = _lengthEnd;
    m_lengthEndHasBeenSet = true;
}

bool DescribePreReleaseListRequest::LengthEndHasBeenSet() const
{
    return m_lengthEndHasBeenSet;
}

int64_t DescribePreReleaseListRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribePreReleaseListRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribePreReleaseListRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t DescribePreReleaseListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribePreReleaseListRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribePreReleaseListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

vector<int64_t> DescribePreReleaseListRequest::GetSuffix() const
{
    return m_suffix;
}

void DescribePreReleaseListRequest::SetSuffix(const vector<int64_t>& _suffix)
{
    m_suffix = _suffix;
    m_suffixHasBeenSet = true;
}

bool DescribePreReleaseListRequest::SuffixHasBeenSet() const
{
    return m_suffixHasBeenSet;
}

int64_t DescribePreReleaseListRequest::GetClassOne() const
{
    return m_classOne;
}

void DescribePreReleaseListRequest::SetClassOne(const int64_t& _classOne)
{
    m_classOne = _classOne;
    m_classOneHasBeenSet = true;
}

bool DescribePreReleaseListRequest::ClassOneHasBeenSet() const
{
    return m_classOneHasBeenSet;
}

vector<int64_t> DescribePreReleaseListRequest::GetClassTwo() const
{
    return m_classTwo;
}

void DescribePreReleaseListRequest::SetClassTwo(const vector<int64_t>& _classTwo)
{
    m_classTwo = _classTwo;
    m_classTwoHasBeenSet = true;
}

bool DescribePreReleaseListRequest::ClassTwoHasBeenSet() const
{
    return m_classTwoHasBeenSet;
}

vector<int64_t> DescribePreReleaseListRequest::GetClassThree() const
{
    return m_classThree;
}

void DescribePreReleaseListRequest::SetClassThree(const vector<int64_t>& _classThree)
{
    m_classThree = _classThree;
    m_classThreeHasBeenSet = true;
}

bool DescribePreReleaseListRequest::ClassThreeHasBeenSet() const
{
    return m_classThreeHasBeenSet;
}

vector<int64_t> DescribePreReleaseListRequest::GetClassFour() const
{
    return m_classFour;
}

void DescribePreReleaseListRequest::SetClassFour(const vector<int64_t>& _classFour)
{
    m_classFour = _classFour;
    m_classFourHasBeenSet = true;
}

bool DescribePreReleaseListRequest::ClassFourHasBeenSet() const
{
    return m_classFourHasBeenSet;
}

bool DescribePreReleaseListRequest::GetFilterStart() const
{
    return m_filterStart;
}

void DescribePreReleaseListRequest::SetFilterStart(const bool& _filterStart)
{
    m_filterStart = _filterStart;
    m_filterStartHasBeenSet = true;
}

bool DescribePreReleaseListRequest::FilterStartHasBeenSet() const
{
    return m_filterStartHasBeenSet;
}

bool DescribePreReleaseListRequest::GetFilterEnd() const
{
    return m_filterEnd;
}

void DescribePreReleaseListRequest::SetFilterEnd(const bool& _filterEnd)
{
    m_filterEnd = _filterEnd;
    m_filterEndHasBeenSet = true;
}

bool DescribePreReleaseListRequest::FilterEndHasBeenSet() const
{
    return m_filterEndHasBeenSet;
}

string DescribePreReleaseListRequest::GetFilterWords() const
{
    return m_filterWords;
}

void DescribePreReleaseListRequest::SetFilterWords(const string& _filterWords)
{
    m_filterWords = _filterWords;
    m_filterWordsHasBeenSet = true;
}

bool DescribePreReleaseListRequest::FilterWordsHasBeenSet() const
{
    return m_filterWordsHasBeenSet;
}

int64_t DescribePreReleaseListRequest::GetTransType() const
{
    return m_transType;
}

void DescribePreReleaseListRequest::SetTransType(const int64_t& _transType)
{
    m_transType = _transType;
    m_transTypeHasBeenSet = true;
}

bool DescribePreReleaseListRequest::TransTypeHasBeenSet() const
{
    return m_transTypeHasBeenSet;
}

bool DescribePreReleaseListRequest::GetIsTop() const
{
    return m_isTop;
}

void DescribePreReleaseListRequest::SetIsTop(const bool& _isTop)
{
    m_isTop = _isTop;
    m_isTopHasBeenSet = true;
}

bool DescribePreReleaseListRequest::IsTopHasBeenSet() const
{
    return m_isTopHasBeenSet;
}

string DescribePreReleaseListRequest::GetEndTimeSort() const
{
    return m_endTimeSort;
}

void DescribePreReleaseListRequest::SetEndTimeSort(const string& _endTimeSort)
{
    m_endTimeSort = _endTimeSort;
    m_endTimeSortHasBeenSet = true;
}

bool DescribePreReleaseListRequest::EndTimeSortHasBeenSet() const
{
    return m_endTimeSortHasBeenSet;
}

string DescribePreReleaseListRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribePreReleaseListRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribePreReleaseListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}


