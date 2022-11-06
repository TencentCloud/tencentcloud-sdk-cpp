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

#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkFlowRealtimeStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

DescribeStreamLinkFlowRealtimeStatusRequest::DescribeStreamLinkFlowRealtimeStatusRequest() :
    m_flowIdHasBeenSet(false),
    m_inputIdsHasBeenSet(false),
    m_outputIdsHasBeenSet(false)
{
}

string DescribeStreamLinkFlowRealtimeStatusRequest::ToJsonString() const
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

    if (m_inputIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_inputIds.begin(); itr != m_inputIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_outputIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_outputIds.begin(); itr != m_outputIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeStreamLinkFlowRealtimeStatusRequest::GetFlowId() const
{
    return m_flowId;
}

void DescribeStreamLinkFlowRealtimeStatusRequest::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool DescribeStreamLinkFlowRealtimeStatusRequest::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

vector<string> DescribeStreamLinkFlowRealtimeStatusRequest::GetInputIds() const
{
    return m_inputIds;
}

void DescribeStreamLinkFlowRealtimeStatusRequest::SetInputIds(const vector<string>& _inputIds)
{
    m_inputIds = _inputIds;
    m_inputIdsHasBeenSet = true;
}

bool DescribeStreamLinkFlowRealtimeStatusRequest::InputIdsHasBeenSet() const
{
    return m_inputIdsHasBeenSet;
}

vector<string> DescribeStreamLinkFlowRealtimeStatusRequest::GetOutputIds() const
{
    return m_outputIds;
}

void DescribeStreamLinkFlowRealtimeStatusRequest::SetOutputIds(const vector<string>& _outputIds)
{
    m_outputIds = _outputIds;
    m_outputIdsHasBeenSet = true;
}

bool DescribeStreamLinkFlowRealtimeStatusRequest::OutputIdsHasBeenSet() const
{
    return m_outputIdsHasBeenSet;
}


