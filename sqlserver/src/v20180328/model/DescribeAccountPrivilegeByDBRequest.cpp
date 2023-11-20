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

#include <tencentcloud/sqlserver/v20180328/model/DescribeAccountPrivilegeByDBRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

DescribeAccountPrivilegeByDBRequest::DescribeAccountPrivilegeByDBRequest() :
    m_instanceIdHasBeenSet(false),
    m_dBNameHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeAccountPrivilegeByDBRequest::ToJsonString() const
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

    if (m_dBNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBName.c_str(), allocator).Move(), allocator);
    }

    if (m_accountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountName.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAccountPrivilegeByDBRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeAccountPrivilegeByDBRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeAccountPrivilegeByDBRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeAccountPrivilegeByDBRequest::GetDBName() const
{
    return m_dBName;
}

void DescribeAccountPrivilegeByDBRequest::SetDBName(const string& _dBName)
{
    m_dBName = _dBName;
    m_dBNameHasBeenSet = true;
}

bool DescribeAccountPrivilegeByDBRequest::DBNameHasBeenSet() const
{
    return m_dBNameHasBeenSet;
}

string DescribeAccountPrivilegeByDBRequest::GetAccountName() const
{
    return m_accountName;
}

void DescribeAccountPrivilegeByDBRequest::SetAccountName(const string& _accountName)
{
    m_accountName = _accountName;
    m_accountNameHasBeenSet = true;
}

bool DescribeAccountPrivilegeByDBRequest::AccountNameHasBeenSet() const
{
    return m_accountNameHasBeenSet;
}

int64_t DescribeAccountPrivilegeByDBRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAccountPrivilegeByDBRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAccountPrivilegeByDBRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeAccountPrivilegeByDBRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAccountPrivilegeByDBRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAccountPrivilegeByDBRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


