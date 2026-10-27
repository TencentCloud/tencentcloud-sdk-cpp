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

#include <tencentcloud/cvd/v20201104/model/DescribeInvocationDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvd::V20201104::Model;
using namespace std;

DescribeInvocationDetailRequest::DescribeInvocationDetailRequest() :
    m_instanceIdHasBeenSet(false),
    m_invokeIdHasBeenSet(false),
    m_outputLinesOffsetHasBeenSet(false),
    m_outputLinesLimitHasBeenSet(false),
    m_mergeOutputLinesHasBeenSet(false)
{
}

string DescribeInvocationDetailRequest::ToJsonString() const
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

    if (m_invokeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_invokeId.c_str(), allocator).Move(), allocator);
    }

    if (m_outputLinesOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputLinesOffset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_outputLinesOffset, allocator);
    }

    if (m_outputLinesLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputLinesLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_outputLinesLimit, allocator);
    }

    if (m_mergeOutputLinesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MergeOutputLines";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mergeOutputLines, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeInvocationDetailRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeInvocationDetailRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeInvocationDetailRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeInvocationDetailRequest::GetInvokeId() const
{
    return m_invokeId;
}

void DescribeInvocationDetailRequest::SetInvokeId(const string& _invokeId)
{
    m_invokeId = _invokeId;
    m_invokeIdHasBeenSet = true;
}

bool DescribeInvocationDetailRequest::InvokeIdHasBeenSet() const
{
    return m_invokeIdHasBeenSet;
}

uint64_t DescribeInvocationDetailRequest::GetOutputLinesOffset() const
{
    return m_outputLinesOffset;
}

void DescribeInvocationDetailRequest::SetOutputLinesOffset(const uint64_t& _outputLinesOffset)
{
    m_outputLinesOffset = _outputLinesOffset;
    m_outputLinesOffsetHasBeenSet = true;
}

bool DescribeInvocationDetailRequest::OutputLinesOffsetHasBeenSet() const
{
    return m_outputLinesOffsetHasBeenSet;
}

uint64_t DescribeInvocationDetailRequest::GetOutputLinesLimit() const
{
    return m_outputLinesLimit;
}

void DescribeInvocationDetailRequest::SetOutputLinesLimit(const uint64_t& _outputLinesLimit)
{
    m_outputLinesLimit = _outputLinesLimit;
    m_outputLinesLimitHasBeenSet = true;
}

bool DescribeInvocationDetailRequest::OutputLinesLimitHasBeenSet() const
{
    return m_outputLinesLimitHasBeenSet;
}

bool DescribeInvocationDetailRequest::GetMergeOutputLines() const
{
    return m_mergeOutputLines;
}

void DescribeInvocationDetailRequest::SetMergeOutputLines(const bool& _mergeOutputLines)
{
    m_mergeOutputLines = _mergeOutputLines;
    m_mergeOutputLinesHasBeenSet = true;
}

bool DescribeInvocationDetailRequest::MergeOutputLinesHasBeenSet() const
{
    return m_mergeOutputLinesHasBeenSet;
}


