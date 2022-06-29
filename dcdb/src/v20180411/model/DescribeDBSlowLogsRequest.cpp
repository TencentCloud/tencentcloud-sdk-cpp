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

#include <tencentcloud/dcdb/v20180411/model/DescribeDBSlowLogsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

DescribeDBSlowLogsRequest::DescribeDBSlowLogsRequest() :
    m_instanceIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_shardIdHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_dbHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderByTypeHasBeenSet(false),
    m_slaveHasBeenSet(false)
{
}

string DescribeDBSlowLogsRequest::ToJsonString() const
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

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_shardIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_shardId.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dbHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Db";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_db.c_str(), allocator).Move(), allocator);
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

    if (m_slaveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Slave";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_slave, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDBSlowLogsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeDBSlowLogsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeDBSlowLogsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t DescribeDBSlowLogsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDBSlowLogsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDBSlowLogsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeDBSlowLogsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDBSlowLogsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDBSlowLogsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeDBSlowLogsRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeDBSlowLogsRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeDBSlowLogsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeDBSlowLogsRequest::GetShardId() const
{
    return m_shardId;
}

void DescribeDBSlowLogsRequest::SetShardId(const string& _shardId)
{
    m_shardId = _shardId;
    m_shardIdHasBeenSet = true;
}

bool DescribeDBSlowLogsRequest::ShardIdHasBeenSet() const
{
    return m_shardIdHasBeenSet;
}

string DescribeDBSlowLogsRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeDBSlowLogsRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeDBSlowLogsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeDBSlowLogsRequest::GetDb() const
{
    return m_db;
}

void DescribeDBSlowLogsRequest::SetDb(const string& _db)
{
    m_db = _db;
    m_dbHasBeenSet = true;
}

bool DescribeDBSlowLogsRequest::DbHasBeenSet() const
{
    return m_dbHasBeenSet;
}

string DescribeDBSlowLogsRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeDBSlowLogsRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeDBSlowLogsRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

string DescribeDBSlowLogsRequest::GetOrderByType() const
{
    return m_orderByType;
}

void DescribeDBSlowLogsRequest::SetOrderByType(const string& _orderByType)
{
    m_orderByType = _orderByType;
    m_orderByTypeHasBeenSet = true;
}

bool DescribeDBSlowLogsRequest::OrderByTypeHasBeenSet() const
{
    return m_orderByTypeHasBeenSet;
}

int64_t DescribeDBSlowLogsRequest::GetSlave() const
{
    return m_slave;
}

void DescribeDBSlowLogsRequest::SetSlave(const int64_t& _slave)
{
    m_slave = _slave;
    m_slaveHasBeenSet = true;
}

bool DescribeDBSlowLogsRequest::SlaveHasBeenSet() const
{
    return m_slaveHasBeenSet;
}


