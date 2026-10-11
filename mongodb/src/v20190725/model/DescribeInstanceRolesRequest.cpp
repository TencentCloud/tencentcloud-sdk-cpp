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

#include <tencentcloud/mongodb/v20190725/model/DescribeInstanceRolesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

DescribeInstanceRolesRequest::DescribeInstanceRolesRequest() :
    m_instanceIdHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_roleTypeHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_searchKeyHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeInstanceRolesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Database";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_database.c_str(), allocator).Move(), allocator);
    }

    if (m_roleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_roleType.begin(); itr != m_roleType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_roleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roleName.c_str(), allocator).Move(), allocator);
    }

    if (m_searchKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchKey.c_str(), allocator).Move(), allocator);
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_orderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderType.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeInstanceRolesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeInstanceRolesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeInstanceRolesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeInstanceRolesRequest::GetDatabase() const
{
    return m_database;
}

void DescribeInstanceRolesRequest::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool DescribeInstanceRolesRequest::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

vector<string> DescribeInstanceRolesRequest::GetRoleType() const
{
    return m_roleType;
}

void DescribeInstanceRolesRequest::SetRoleType(const vector<string>& _roleType)
{
    m_roleType = _roleType;
    m_roleTypeHasBeenSet = true;
}

bool DescribeInstanceRolesRequest::RoleTypeHasBeenSet() const
{
    return m_roleTypeHasBeenSet;
}

string DescribeInstanceRolesRequest::GetRoleName() const
{
    return m_roleName;
}

void DescribeInstanceRolesRequest::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool DescribeInstanceRolesRequest::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

string DescribeInstanceRolesRequest::GetSearchKey() const
{
    return m_searchKey;
}

void DescribeInstanceRolesRequest::SetSearchKey(const string& _searchKey)
{
    m_searchKey = _searchKey;
    m_searchKeyHasBeenSet = true;
}

bool DescribeInstanceRolesRequest::SearchKeyHasBeenSet() const
{
    return m_searchKeyHasBeenSet;
}

string DescribeInstanceRolesRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeInstanceRolesRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeInstanceRolesRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

string DescribeInstanceRolesRequest::GetOrderType() const
{
    return m_orderType;
}

void DescribeInstanceRolesRequest::SetOrderType(const string& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool DescribeInstanceRolesRequest::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

int64_t DescribeInstanceRolesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeInstanceRolesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeInstanceRolesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeInstanceRolesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeInstanceRolesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeInstanceRolesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


