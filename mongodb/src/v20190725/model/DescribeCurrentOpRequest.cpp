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

#include <tencentcloud/mongodb/v20190725/model/DescribeCurrentOpRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

DescribeCurrentOpRequest::DescribeCurrentOpRequest() :
    m_instanceIdHasBeenSet(false),
    m_nsHasBeenSet(false),
    m_millisecondRunningHasBeenSet(false),
    m_opHasBeenSet(false),
    m_replicaSetNameHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderByTypeHasBeenSet(false)
{
}

string DescribeCurrentOpRequest::ToJsonString() const
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

    if (m_nsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ns";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ns.c_str(), allocator).Move(), allocator);
    }

    if (m_millisecondRunningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MillisecondRunning";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_millisecondRunning, allocator);
    }

    if (m_opHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Op";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_op.c_str(), allocator).Move(), allocator);
    }

    if (m_replicaSetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicaSetName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_replicaSetName.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCurrentOpRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeCurrentOpRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeCurrentOpRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeCurrentOpRequest::GetNs() const
{
    return m_ns;
}

void DescribeCurrentOpRequest::SetNs(const string& _ns)
{
    m_ns = _ns;
    m_nsHasBeenSet = true;
}

bool DescribeCurrentOpRequest::NsHasBeenSet() const
{
    return m_nsHasBeenSet;
}

uint64_t DescribeCurrentOpRequest::GetMillisecondRunning() const
{
    return m_millisecondRunning;
}

void DescribeCurrentOpRequest::SetMillisecondRunning(const uint64_t& _millisecondRunning)
{
    m_millisecondRunning = _millisecondRunning;
    m_millisecondRunningHasBeenSet = true;
}

bool DescribeCurrentOpRequest::MillisecondRunningHasBeenSet() const
{
    return m_millisecondRunningHasBeenSet;
}

string DescribeCurrentOpRequest::GetOp() const
{
    return m_op;
}

void DescribeCurrentOpRequest::SetOp(const string& _op)
{
    m_op = _op;
    m_opHasBeenSet = true;
}

bool DescribeCurrentOpRequest::OpHasBeenSet() const
{
    return m_opHasBeenSet;
}

string DescribeCurrentOpRequest::GetReplicaSetName() const
{
    return m_replicaSetName;
}

void DescribeCurrentOpRequest::SetReplicaSetName(const string& _replicaSetName)
{
    m_replicaSetName = _replicaSetName;
    m_replicaSetNameHasBeenSet = true;
}

bool DescribeCurrentOpRequest::ReplicaSetNameHasBeenSet() const
{
    return m_replicaSetNameHasBeenSet;
}

string DescribeCurrentOpRequest::GetState() const
{
    return m_state;
}

void DescribeCurrentOpRequest::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool DescribeCurrentOpRequest::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

uint64_t DescribeCurrentOpRequest::GetLimit() const
{
    return m_limit;
}

void DescribeCurrentOpRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCurrentOpRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeCurrentOpRequest::GetOffset() const
{
    return m_offset;
}

void DescribeCurrentOpRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCurrentOpRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeCurrentOpRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeCurrentOpRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeCurrentOpRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

string DescribeCurrentOpRequest::GetOrderByType() const
{
    return m_orderByType;
}

void DescribeCurrentOpRequest::SetOrderByType(const string& _orderByType)
{
    m_orderByType = _orderByType;
    m_orderByTypeHasBeenSet = true;
}

bool DescribeCurrentOpRequest::OrderByTypeHasBeenSet() const
{
    return m_orderByTypeHasBeenSet;
}


