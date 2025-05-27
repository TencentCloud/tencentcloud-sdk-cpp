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

#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkFlowStatisticsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

DescribeStreamLinkFlowStatisticsRequest::DescribeStreamLinkFlowStatisticsRequest() :
    m_flowIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_inputOutputIdHasBeenSet(false),
    m_pipelineHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_remoteIpHasBeenSet(false)
{
}

string DescribeStreamLinkFlowStatisticsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_inputOutputIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputOutputId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inputOutputId.c_str(), allocator).Move(), allocator);
    }

    if (m_pipelineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pipeline";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pipeline.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_period.c_str(), allocator).Move(), allocator);
    }

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

    if (m_remoteIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remoteIp.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeStreamLinkFlowStatisticsRequest::GetFlowId() const
{
    return m_flowId;
}

void DescribeStreamLinkFlowStatisticsRequest::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool DescribeStreamLinkFlowStatisticsRequest::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

string DescribeStreamLinkFlowStatisticsRequest::GetType() const
{
    return m_type;
}

void DescribeStreamLinkFlowStatisticsRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeStreamLinkFlowStatisticsRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeStreamLinkFlowStatisticsRequest::GetInputOutputId() const
{
    return m_inputOutputId;
}

void DescribeStreamLinkFlowStatisticsRequest::SetInputOutputId(const string& _inputOutputId)
{
    m_inputOutputId = _inputOutputId;
    m_inputOutputIdHasBeenSet = true;
}

bool DescribeStreamLinkFlowStatisticsRequest::InputOutputIdHasBeenSet() const
{
    return m_inputOutputIdHasBeenSet;
}

string DescribeStreamLinkFlowStatisticsRequest::GetPipeline() const
{
    return m_pipeline;
}

void DescribeStreamLinkFlowStatisticsRequest::SetPipeline(const string& _pipeline)
{
    m_pipeline = _pipeline;
    m_pipelineHasBeenSet = true;
}

bool DescribeStreamLinkFlowStatisticsRequest::PipelineHasBeenSet() const
{
    return m_pipelineHasBeenSet;
}

string DescribeStreamLinkFlowStatisticsRequest::GetPeriod() const
{
    return m_period;
}

void DescribeStreamLinkFlowStatisticsRequest::SetPeriod(const string& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool DescribeStreamLinkFlowStatisticsRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string DescribeStreamLinkFlowStatisticsRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeStreamLinkFlowStatisticsRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeStreamLinkFlowStatisticsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeStreamLinkFlowStatisticsRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeStreamLinkFlowStatisticsRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeStreamLinkFlowStatisticsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeStreamLinkFlowStatisticsRequest::GetRemoteIp() const
{
    return m_remoteIp;
}

void DescribeStreamLinkFlowStatisticsRequest::SetRemoteIp(const string& _remoteIp)
{
    m_remoteIp = _remoteIp;
    m_remoteIpHasBeenSet = true;
}

bool DescribeStreamLinkFlowStatisticsRequest::RemoteIpHasBeenSet() const
{
    return m_remoteIpHasBeenSet;
}


