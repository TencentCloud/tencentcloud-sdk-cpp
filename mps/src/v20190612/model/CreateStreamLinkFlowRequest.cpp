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

#include <tencentcloud/mps/v20190612/model/CreateStreamLinkFlowRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

CreateStreamLinkFlowRequest::CreateStreamLinkFlowRequest() :
    m_flowNameHasBeenSet(false),
    m_maxBandwidthHasBeenSet(false),
    m_inputGroupHasBeenSet(false),
    m_eventIdHasBeenSet(false)
{
}

string CreateStreamLinkFlowRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_flowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowName.c_str(), allocator).Move(), allocator);
    }

    if (m_maxBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBandwidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxBandwidth, allocator);
    }

    if (m_inputGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inputGroup.begin(); itr != m_inputGroup.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateStreamLinkFlowRequest::GetFlowName() const
{
    return m_flowName;
}

void CreateStreamLinkFlowRequest::SetFlowName(const string& _flowName)
{
    m_flowName = _flowName;
    m_flowNameHasBeenSet = true;
}

bool CreateStreamLinkFlowRequest::FlowNameHasBeenSet() const
{
    return m_flowNameHasBeenSet;
}

int64_t CreateStreamLinkFlowRequest::GetMaxBandwidth() const
{
    return m_maxBandwidth;
}

void CreateStreamLinkFlowRequest::SetMaxBandwidth(const int64_t& _maxBandwidth)
{
    m_maxBandwidth = _maxBandwidth;
    m_maxBandwidthHasBeenSet = true;
}

bool CreateStreamLinkFlowRequest::MaxBandwidthHasBeenSet() const
{
    return m_maxBandwidthHasBeenSet;
}

vector<CreateInput> CreateStreamLinkFlowRequest::GetInputGroup() const
{
    return m_inputGroup;
}

void CreateStreamLinkFlowRequest::SetInputGroup(const vector<CreateInput>& _inputGroup)
{
    m_inputGroup = _inputGroup;
    m_inputGroupHasBeenSet = true;
}

bool CreateStreamLinkFlowRequest::InputGroupHasBeenSet() const
{
    return m_inputGroupHasBeenSet;
}

string CreateStreamLinkFlowRequest::GetEventId() const
{
    return m_eventId;
}

void CreateStreamLinkFlowRequest::SetEventId(const string& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool CreateStreamLinkFlowRequest::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}


