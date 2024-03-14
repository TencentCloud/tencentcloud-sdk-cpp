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

#include <tencentcloud/emr/v20190103/model/DescribeImpalaQueriesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DescribeImpalaQueriesRequest::DescribeImpalaQueriesRequest() :
    m_instanceIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_endTimeGteHasBeenSet(false),
    m_endTimeLteHasBeenSet(false)
{
}

string DescribeImpalaQueriesRequest::ToJsonString() const
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

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
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

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_state.begin(); itr != m_state.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_endTimeGteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimeGte";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTimeGte, allocator);
    }

    if (m_endTimeLteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimeLte";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTimeLte, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeImpalaQueriesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeImpalaQueriesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeImpalaQueriesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DescribeImpalaQueriesRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeImpalaQueriesRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeImpalaQueriesRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeImpalaQueriesRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeImpalaQueriesRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeImpalaQueriesRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeImpalaQueriesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeImpalaQueriesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeImpalaQueriesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeImpalaQueriesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeImpalaQueriesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeImpalaQueriesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<string> DescribeImpalaQueriesRequest::GetState() const
{
    return m_state;
}

void DescribeImpalaQueriesRequest::SetState(const vector<string>& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool DescribeImpalaQueriesRequest::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

uint64_t DescribeImpalaQueriesRequest::GetEndTimeGte() const
{
    return m_endTimeGte;
}

void DescribeImpalaQueriesRequest::SetEndTimeGte(const uint64_t& _endTimeGte)
{
    m_endTimeGte = _endTimeGte;
    m_endTimeGteHasBeenSet = true;
}

bool DescribeImpalaQueriesRequest::EndTimeGteHasBeenSet() const
{
    return m_endTimeGteHasBeenSet;
}

uint64_t DescribeImpalaQueriesRequest::GetEndTimeLte() const
{
    return m_endTimeLte;
}

void DescribeImpalaQueriesRequest::SetEndTimeLte(const uint64_t& _endTimeLte)
{
    m_endTimeLte = _endTimeLte;
    m_endTimeLteHasBeenSet = true;
}

bool DescribeImpalaQueriesRequest::EndTimeLteHasBeenSet() const
{
    return m_endTimeLteHasBeenSet;
}


