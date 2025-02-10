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

#include <tencentcloud/bh/v20230418/model/DescribeAclsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

DescribeAclsRequest::DescribeAclsRequest() :
    m_idSetHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_exactHasBeenSet(false),
    m_authorizedUserIdSetHasBeenSet(false),
    m_authorizedDeviceIdSetHasBeenSet(false),
    m_authorizedAppAssetIdSetHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_departmentIdHasBeenSet(false),
    m_exactAccountHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string DescribeAclsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_idSet.begin(); itr != m_idSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_exactHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exact";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_exact, allocator);
    }

    if (m_authorizedUserIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizedUserIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_authorizedUserIdSet.begin(); itr != m_authorizedUserIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_authorizedDeviceIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizedDeviceIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_authorizedDeviceIdSet.begin(); itr != m_authorizedDeviceIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_authorizedAppAssetIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizedAppAssetIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_authorizedAppAssetIdSet.begin(); itr != m_authorizedAppAssetIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_departmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DepartmentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_departmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_exactAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExactAccount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_exactAccount, allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<uint64_t> DescribeAclsRequest::GetIdSet() const
{
    return m_idSet;
}

void DescribeAclsRequest::SetIdSet(const vector<uint64_t>& _idSet)
{
    m_idSet = _idSet;
    m_idSetHasBeenSet = true;
}

bool DescribeAclsRequest::IdSetHasBeenSet() const
{
    return m_idSetHasBeenSet;
}

string DescribeAclsRequest::GetName() const
{
    return m_name;
}

void DescribeAclsRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeAclsRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t DescribeAclsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAclsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAclsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeAclsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAclsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAclsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

bool DescribeAclsRequest::GetExact() const
{
    return m_exact;
}

void DescribeAclsRequest::SetExact(const bool& _exact)
{
    m_exact = _exact;
    m_exactHasBeenSet = true;
}

bool DescribeAclsRequest::ExactHasBeenSet() const
{
    return m_exactHasBeenSet;
}

vector<uint64_t> DescribeAclsRequest::GetAuthorizedUserIdSet() const
{
    return m_authorizedUserIdSet;
}

void DescribeAclsRequest::SetAuthorizedUserIdSet(const vector<uint64_t>& _authorizedUserIdSet)
{
    m_authorizedUserIdSet = _authorizedUserIdSet;
    m_authorizedUserIdSetHasBeenSet = true;
}

bool DescribeAclsRequest::AuthorizedUserIdSetHasBeenSet() const
{
    return m_authorizedUserIdSetHasBeenSet;
}

vector<uint64_t> DescribeAclsRequest::GetAuthorizedDeviceIdSet() const
{
    return m_authorizedDeviceIdSet;
}

void DescribeAclsRequest::SetAuthorizedDeviceIdSet(const vector<uint64_t>& _authorizedDeviceIdSet)
{
    m_authorizedDeviceIdSet = _authorizedDeviceIdSet;
    m_authorizedDeviceIdSetHasBeenSet = true;
}

bool DescribeAclsRequest::AuthorizedDeviceIdSetHasBeenSet() const
{
    return m_authorizedDeviceIdSetHasBeenSet;
}

vector<uint64_t> DescribeAclsRequest::GetAuthorizedAppAssetIdSet() const
{
    return m_authorizedAppAssetIdSet;
}

void DescribeAclsRequest::SetAuthorizedAppAssetIdSet(const vector<uint64_t>& _authorizedAppAssetIdSet)
{
    m_authorizedAppAssetIdSet = _authorizedAppAssetIdSet;
    m_authorizedAppAssetIdSetHasBeenSet = true;
}

bool DescribeAclsRequest::AuthorizedAppAssetIdSetHasBeenSet() const
{
    return m_authorizedAppAssetIdSetHasBeenSet;
}

uint64_t DescribeAclsRequest::GetStatus() const
{
    return m_status;
}

void DescribeAclsRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeAclsRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeAclsRequest::GetDepartmentId() const
{
    return m_departmentId;
}

void DescribeAclsRequest::SetDepartmentId(const string& _departmentId)
{
    m_departmentId = _departmentId;
    m_departmentIdHasBeenSet = true;
}

bool DescribeAclsRequest::DepartmentIdHasBeenSet() const
{
    return m_departmentIdHasBeenSet;
}

bool DescribeAclsRequest::GetExactAccount() const
{
    return m_exactAccount;
}

void DescribeAclsRequest::SetExactAccount(const bool& _exactAccount)
{
    m_exactAccount = _exactAccount;
    m_exactAccountHasBeenSet = true;
}

bool DescribeAclsRequest::ExactAccountHasBeenSet() const
{
    return m_exactAccountHasBeenSet;
}

vector<Filter> DescribeAclsRequest::GetFilters() const
{
    return m_filters;
}

void DescribeAclsRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeAclsRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


