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

#include <tencentcloud/dbbrain/v20210527/model/DescribeDBAuditLogTopSqlsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DescribeDBAuditLogTopSqlsRequest::DescribeDBAuditLogTopSqlsRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_productHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderByDirectionHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_hostsHasBeenSet(false),
    m_sqlCodesHasBeenSet(false),
    m_sqlSampleHasBeenSet(false),
    m_usersHasBeenSet(false)
{
}

string DescribeDBAuditLogTopSqlsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_orderByDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderByDirection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderByDirection.c_str(), allocator).Move(), allocator);
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

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hosts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hosts.begin(); itr != m_hosts.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sqlCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlCodes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sqlCodes.begin(); itr != m_sqlCodes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sqlSampleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlSample";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sqlSample.c_str(), allocator).Move(), allocator);
    }

    if (m_usersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Users";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_users.begin(); itr != m_users.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDBAuditLogTopSqlsRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeDBAuditLogTopSqlsRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeDBAuditLogTopSqlsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeDBAuditLogTopSqlsRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeDBAuditLogTopSqlsRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeDBAuditLogTopSqlsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeDBAuditLogTopSqlsRequest::GetProduct() const
{
    return m_product;
}

void DescribeDBAuditLogTopSqlsRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool DescribeDBAuditLogTopSqlsRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string DescribeDBAuditLogTopSqlsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeDBAuditLogTopSqlsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeDBAuditLogTopSqlsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeDBAuditLogTopSqlsRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeDBAuditLogTopSqlsRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeDBAuditLogTopSqlsRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

string DescribeDBAuditLogTopSqlsRequest::GetOrderByDirection() const
{
    return m_orderByDirection;
}

void DescribeDBAuditLogTopSqlsRequest::SetOrderByDirection(const string& _orderByDirection)
{
    m_orderByDirection = _orderByDirection;
    m_orderByDirectionHasBeenSet = true;
}

bool DescribeDBAuditLogTopSqlsRequest::OrderByDirectionHasBeenSet() const
{
    return m_orderByDirectionHasBeenSet;
}

int64_t DescribeDBAuditLogTopSqlsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDBAuditLogTopSqlsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDBAuditLogTopSqlsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeDBAuditLogTopSqlsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDBAuditLogTopSqlsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDBAuditLogTopSqlsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeDBAuditLogTopSqlsRequest::GetTableName() const
{
    return m_tableName;
}

void DescribeDBAuditLogTopSqlsRequest::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool DescribeDBAuditLogTopSqlsRequest::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

vector<string> DescribeDBAuditLogTopSqlsRequest::GetHosts() const
{
    return m_hosts;
}

void DescribeDBAuditLogTopSqlsRequest::SetHosts(const vector<string>& _hosts)
{
    m_hosts = _hosts;
    m_hostsHasBeenSet = true;
}

bool DescribeDBAuditLogTopSqlsRequest::HostsHasBeenSet() const
{
    return m_hostsHasBeenSet;
}

vector<string> DescribeDBAuditLogTopSqlsRequest::GetSqlCodes() const
{
    return m_sqlCodes;
}

void DescribeDBAuditLogTopSqlsRequest::SetSqlCodes(const vector<string>& _sqlCodes)
{
    m_sqlCodes = _sqlCodes;
    m_sqlCodesHasBeenSet = true;
}

bool DescribeDBAuditLogTopSqlsRequest::SqlCodesHasBeenSet() const
{
    return m_sqlCodesHasBeenSet;
}

string DescribeDBAuditLogTopSqlsRequest::GetSqlSample() const
{
    return m_sqlSample;
}

void DescribeDBAuditLogTopSqlsRequest::SetSqlSample(const string& _sqlSample)
{
    m_sqlSample = _sqlSample;
    m_sqlSampleHasBeenSet = true;
}

bool DescribeDBAuditLogTopSqlsRequest::SqlSampleHasBeenSet() const
{
    return m_sqlSampleHasBeenSet;
}

vector<string> DescribeDBAuditLogTopSqlsRequest::GetUsers() const
{
    return m_users;
}

void DescribeDBAuditLogTopSqlsRequest::SetUsers(const vector<string>& _users)
{
    m_users = _users;
    m_usersHasBeenSet = true;
}

bool DescribeDBAuditLogTopSqlsRequest::UsersHasBeenSet() const
{
    return m_usersHasBeenSet;
}


