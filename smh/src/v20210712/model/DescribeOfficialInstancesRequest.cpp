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

#include <tencentcloud/smh/v20210712/model/DescribeOfficialInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Smh::V20210712::Model;
using namespace std;

DescribeOfficialInstancesRequest::DescribeOfficialInstancesRequest() :
    m_superAdminAccountHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderByTypeHasBeenSet(false),
    m_autoRenewHasBeenSet(false),
    m_bindPhoneHasBeenSet(false)
{
}

string DescribeOfficialInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_superAdminAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuperAdminAccount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_superAdminAccount, allocator);
    }

    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_orderByTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderByType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderByType.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenew";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenew, allocator);
    }

    if (m_bindPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindPhone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bindPhone, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool DescribeOfficialInstancesRequest::GetSuperAdminAccount() const
{
    return m_superAdminAccount;
}

void DescribeOfficialInstancesRequest::SetSuperAdminAccount(const bool& _superAdminAccount)
{
    m_superAdminAccount = _superAdminAccount;
    m_superAdminAccountHasBeenSet = true;
}

bool DescribeOfficialInstancesRequest::SuperAdminAccountHasBeenSet() const
{
    return m_superAdminAccountHasBeenSet;
}

vector<string> DescribeOfficialInstancesRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void DescribeOfficialInstancesRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool DescribeOfficialInstancesRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

uint64_t DescribeOfficialInstancesRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeOfficialInstancesRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeOfficialInstancesRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t DescribeOfficialInstancesRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeOfficialInstancesRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeOfficialInstancesRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeOfficialInstancesRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeOfficialInstancesRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeOfficialInstancesRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

string DescribeOfficialInstancesRequest::GetOrderByType() const
{
    return m_orderByType;
}

void DescribeOfficialInstancesRequest::SetOrderByType(const string& _orderByType)
{
    m_orderByType = _orderByType;
    m_orderByTypeHasBeenSet = true;
}

bool DescribeOfficialInstancesRequest::OrderByTypeHasBeenSet() const
{
    return m_orderByTypeHasBeenSet;
}

uint64_t DescribeOfficialInstancesRequest::GetAutoRenew() const
{
    return m_autoRenew;
}

void DescribeOfficialInstancesRequest::SetAutoRenew(const uint64_t& _autoRenew)
{
    m_autoRenew = _autoRenew;
    m_autoRenewHasBeenSet = true;
}

bool DescribeOfficialInstancesRequest::AutoRenewHasBeenSet() const
{
    return m_autoRenewHasBeenSet;
}

bool DescribeOfficialInstancesRequest::GetBindPhone() const
{
    return m_bindPhone;
}

void DescribeOfficialInstancesRequest::SetBindPhone(const bool& _bindPhone)
{
    m_bindPhone = _bindPhone;
    m_bindPhoneHasBeenSet = true;
}

bool DescribeOfficialInstancesRequest::BindPhoneHasBeenSet() const
{
    return m_bindPhoneHasBeenSet;
}


