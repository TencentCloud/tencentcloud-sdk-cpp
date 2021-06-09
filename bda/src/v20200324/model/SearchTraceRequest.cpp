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

#include <tencentcloud/bda/v20200324/model/SearchTraceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bda::V20200324::Model;
using namespace std;

SearchTraceRequest::SearchTraceRequest() :
    m_groupIdHasBeenSet(false),
    m_traceHasBeenSet(false),
    m_maxPersonNumHasBeenSet(false),
    m_traceMatchThresholdHasBeenSet(false)
{
}

string SearchTraceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_traceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_trace.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_maxPersonNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxPersonNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxPersonNum, allocator);
    }

    if (m_traceMatchThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceMatchThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_traceMatchThreshold, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SearchTraceRequest::GetGroupId() const
{
    return m_groupId;
}

void SearchTraceRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool SearchTraceRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

Trace SearchTraceRequest::GetTrace() const
{
    return m_trace;
}

void SearchTraceRequest::SetTrace(const Trace& _trace)
{
    m_trace = _trace;
    m_traceHasBeenSet = true;
}

bool SearchTraceRequest::TraceHasBeenSet() const
{
    return m_traceHasBeenSet;
}

uint64_t SearchTraceRequest::GetMaxPersonNum() const
{
    return m_maxPersonNum;
}

void SearchTraceRequest::SetMaxPersonNum(const uint64_t& _maxPersonNum)
{
    m_maxPersonNum = _maxPersonNum;
    m_maxPersonNumHasBeenSet = true;
}

bool SearchTraceRequest::MaxPersonNumHasBeenSet() const
{
    return m_maxPersonNumHasBeenSet;
}

double SearchTraceRequest::GetTraceMatchThreshold() const
{
    return m_traceMatchThreshold;
}

void SearchTraceRequest::SetTraceMatchThreshold(const double& _traceMatchThreshold)
{
    m_traceMatchThreshold = _traceMatchThreshold;
    m_traceMatchThresholdHasBeenSet = true;
}

bool SearchTraceRequest::TraceMatchThresholdHasBeenSet() const
{
    return m_traceMatchThresholdHasBeenSet;
}


