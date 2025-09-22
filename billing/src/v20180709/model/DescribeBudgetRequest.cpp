/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/billing/v20180709/model/DescribeBudgetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

DescribeBudgetRequest::DescribeBudgetRequest() :
    m_pageNoHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_budgetIdHasBeenSet(false),
    m_budgetNameHasBeenSet(false),
    m_budgetStatusHasBeenSet(false),
    m_cycleTypesHasBeenSet(false)
{
}

string DescribeBudgetRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pageNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNo, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_budgetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BudgetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_budgetId.c_str(), allocator).Move(), allocator);
    }

    if (m_budgetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BudgetName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_budgetName.c_str(), allocator).Move(), allocator);
    }

    if (m_budgetStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BudgetStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_budgetStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cycleTypes.begin(); itr != m_cycleTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeBudgetRequest::GetPageNo() const
{
    return m_pageNo;
}

void DescribeBudgetRequest::SetPageNo(const int64_t& _pageNo)
{
    m_pageNo = _pageNo;
    m_pageNoHasBeenSet = true;
}

bool DescribeBudgetRequest::PageNoHasBeenSet() const
{
    return m_pageNoHasBeenSet;
}

int64_t DescribeBudgetRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeBudgetRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeBudgetRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeBudgetRequest::GetBudgetId() const
{
    return m_budgetId;
}

void DescribeBudgetRequest::SetBudgetId(const string& _budgetId)
{
    m_budgetId = _budgetId;
    m_budgetIdHasBeenSet = true;
}

bool DescribeBudgetRequest::BudgetIdHasBeenSet() const
{
    return m_budgetIdHasBeenSet;
}

string DescribeBudgetRequest::GetBudgetName() const
{
    return m_budgetName;
}

void DescribeBudgetRequest::SetBudgetName(const string& _budgetName)
{
    m_budgetName = _budgetName;
    m_budgetNameHasBeenSet = true;
}

bool DescribeBudgetRequest::BudgetNameHasBeenSet() const
{
    return m_budgetNameHasBeenSet;
}

string DescribeBudgetRequest::GetBudgetStatus() const
{
    return m_budgetStatus;
}

void DescribeBudgetRequest::SetBudgetStatus(const string& _budgetStatus)
{
    m_budgetStatus = _budgetStatus;
    m_budgetStatusHasBeenSet = true;
}

bool DescribeBudgetRequest::BudgetStatusHasBeenSet() const
{
    return m_budgetStatusHasBeenSet;
}

vector<string> DescribeBudgetRequest::GetCycleTypes() const
{
    return m_cycleTypes;
}

void DescribeBudgetRequest::SetCycleTypes(const vector<string>& _cycleTypes)
{
    m_cycleTypes = _cycleTypes;
    m_cycleTypesHasBeenSet = true;
}

bool DescribeBudgetRequest::CycleTypesHasBeenSet() const
{
    return m_cycleTypesHasBeenSet;
}


