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

#include <tencentcloud/ccc/v20200210/model/DescribeCompanyListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

DescribeCompanyListRequest::DescribeCompanyListRequest() :
    m_pageSizeHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_companyNameHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_applyIDHasBeenSet(false)
{
}

string DescribeCompanyListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_companyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_companyName.begin(); itr != m_companyName.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_state.begin(); itr != m_state.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_applyIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_applyID.begin(); itr != m_applyID.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeCompanyListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeCompanyListRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeCompanyListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DescribeCompanyListRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeCompanyListRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeCompanyListRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

vector<string> DescribeCompanyListRequest::GetCompanyName() const
{
    return m_companyName;
}

void DescribeCompanyListRequest::SetCompanyName(const vector<string>& _companyName)
{
    m_companyName = _companyName;
    m_companyNameHasBeenSet = true;
}

bool DescribeCompanyListRequest::CompanyNameHasBeenSet() const
{
    return m_companyNameHasBeenSet;
}

vector<int64_t> DescribeCompanyListRequest::GetState() const
{
    return m_state;
}

void DescribeCompanyListRequest::SetState(const vector<int64_t>& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool DescribeCompanyListRequest::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

vector<int64_t> DescribeCompanyListRequest::GetApplyID() const
{
    return m_applyID;
}

void DescribeCompanyListRequest::SetApplyID(const vector<int64_t>& _applyID)
{
    m_applyID = _applyID;
    m_applyIDHasBeenSet = true;
}

bool DescribeCompanyListRequest::ApplyIDHasBeenSet() const
{
    return m_applyIDHasBeenSet;
}


