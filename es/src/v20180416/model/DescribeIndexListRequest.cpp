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

#include <tencentcloud/es/v20180416/model/DescribeIndexListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

DescribeIndexListRequest::DescribeIndexListRequest() :
    m_indexTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_indexNameHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_indexStatusListHasBeenSet(false),
    m_orderHasBeenSet(false)
{
}

string DescribeIndexListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_indexTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_indexType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_indexNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_indexName.c_str(), allocator).Move(), allocator);
    }

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
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

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_indexStatusListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexStatusList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_indexStatusList.begin(); itr != m_indexStatusList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeIndexListRequest::GetIndexType() const
{
    return m_indexType;
}

void DescribeIndexListRequest::SetIndexType(const string& _indexType)
{
    m_indexType = _indexType;
    m_indexTypeHasBeenSet = true;
}

bool DescribeIndexListRequest::IndexTypeHasBeenSet() const
{
    return m_indexTypeHasBeenSet;
}

string DescribeIndexListRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeIndexListRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeIndexListRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeIndexListRequest::GetIndexName() const
{
    return m_indexName;
}

void DescribeIndexListRequest::SetIndexName(const string& _indexName)
{
    m_indexName = _indexName;
    m_indexNameHasBeenSet = true;
}

bool DescribeIndexListRequest::IndexNameHasBeenSet() const
{
    return m_indexNameHasBeenSet;
}

string DescribeIndexListRequest::GetUsername() const
{
    return m_username;
}

void DescribeIndexListRequest::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool DescribeIndexListRequest::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string DescribeIndexListRequest::GetPassword() const
{
    return m_password;
}

void DescribeIndexListRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool DescribeIndexListRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

int64_t DescribeIndexListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeIndexListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeIndexListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeIndexListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeIndexListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeIndexListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeIndexListRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeIndexListRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeIndexListRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

vector<string> DescribeIndexListRequest::GetIndexStatusList() const
{
    return m_indexStatusList;
}

void DescribeIndexListRequest::SetIndexStatusList(const vector<string>& _indexStatusList)
{
    m_indexStatusList = _indexStatusList;
    m_indexStatusListHasBeenSet = true;
}

bool DescribeIndexListRequest::IndexStatusListHasBeenSet() const
{
    return m_indexStatusListHasBeenSet;
}

string DescribeIndexListRequest::GetOrder() const
{
    return m_order;
}

void DescribeIndexListRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeIndexListRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}


