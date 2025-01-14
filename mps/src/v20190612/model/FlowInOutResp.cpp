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

#include <tencentcloud/mps/v20190612/model/FlowInOutResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

FlowInOutResp::FlowInOutResp() :
    m_flowIdHasBeenSet(false),
    m_flowNameHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_flowRegionHasBeenSet(false),
    m_outputRegionHasBeenSet(false),
    m_eventNameHasBeenSet(false),
    m_inputNameHasBeenSet(false),
    m_outputNameHasBeenSet(false),
    m_inOutIdHasBeenSet(false),
    m_inOutTypeHasBeenSet(false)
{
}

CoreInternalOutcome FlowInOutResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FlowId") && !value["FlowId"].IsNull())
    {
        if (!value["FlowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowInOutResp.FlowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = string(value["FlowId"].GetString());
        m_flowIdHasBeenSet = true;
    }

    if (value.HasMember("FlowName") && !value["FlowName"].IsNull())
    {
        if (!value["FlowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowInOutResp.FlowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowName = string(value["FlowName"].GetString());
        m_flowNameHasBeenSet = true;
    }

    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowInOutResp.EventId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = string(value["EventId"].GetString());
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("FlowRegion") && !value["FlowRegion"].IsNull())
    {
        if (!value["FlowRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowInOutResp.FlowRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowRegion = string(value["FlowRegion"].GetString());
        m_flowRegionHasBeenSet = true;
    }

    if (value.HasMember("OutputRegion") && !value["OutputRegion"].IsNull())
    {
        if (!value["OutputRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowInOutResp.OutputRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputRegion = string(value["OutputRegion"].GetString());
        m_outputRegionHasBeenSet = true;
    }

    if (value.HasMember("EventName") && !value["EventName"].IsNull())
    {
        if (!value["EventName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowInOutResp.EventName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventName = string(value["EventName"].GetString());
        m_eventNameHasBeenSet = true;
    }

    if (value.HasMember("InputName") && !value["InputName"].IsNull())
    {
        if (!value["InputName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowInOutResp.InputName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputName = string(value["InputName"].GetString());
        m_inputNameHasBeenSet = true;
    }

    if (value.HasMember("OutputName") && !value["OutputName"].IsNull())
    {
        if (!value["OutputName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowInOutResp.OutputName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputName = string(value["OutputName"].GetString());
        m_outputNameHasBeenSet = true;
    }

    if (value.HasMember("InOutId") && !value["InOutId"].IsNull())
    {
        if (!value["InOutId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowInOutResp.InOutId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inOutId = string(value["InOutId"].GetString());
        m_inOutIdHasBeenSet = true;
    }

    if (value.HasMember("InOutType") && !value["InOutType"].IsNull())
    {
        if (!value["InOutType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowInOutResp.InOutType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inOutType = string(value["InOutType"].GetString());
        m_inOutTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowInOutResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

    if (m_flowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowName.c_str(), allocator).Move(), allocator);
    }

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventId.c_str(), allocator).Move(), allocator);
    }

    if (m_flowRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_outputRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_eventNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventName.c_str(), allocator).Move(), allocator);
    }

    if (m_inputNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputName.c_str(), allocator).Move(), allocator);
    }

    if (m_outputNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputName.c_str(), allocator).Move(), allocator);
    }

    if (m_inOutIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InOutId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inOutId.c_str(), allocator).Move(), allocator);
    }

    if (m_inOutTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InOutType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inOutType.c_str(), allocator).Move(), allocator);
    }

}


string FlowInOutResp::GetFlowId() const
{
    return m_flowId;
}

void FlowInOutResp::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool FlowInOutResp::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

string FlowInOutResp::GetFlowName() const
{
    return m_flowName;
}

void FlowInOutResp::SetFlowName(const string& _flowName)
{
    m_flowName = _flowName;
    m_flowNameHasBeenSet = true;
}

bool FlowInOutResp::FlowNameHasBeenSet() const
{
    return m_flowNameHasBeenSet;
}

string FlowInOutResp::GetEventId() const
{
    return m_eventId;
}

void FlowInOutResp::SetEventId(const string& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool FlowInOutResp::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string FlowInOutResp::GetFlowRegion() const
{
    return m_flowRegion;
}

void FlowInOutResp::SetFlowRegion(const string& _flowRegion)
{
    m_flowRegion = _flowRegion;
    m_flowRegionHasBeenSet = true;
}

bool FlowInOutResp::FlowRegionHasBeenSet() const
{
    return m_flowRegionHasBeenSet;
}

string FlowInOutResp::GetOutputRegion() const
{
    return m_outputRegion;
}

void FlowInOutResp::SetOutputRegion(const string& _outputRegion)
{
    m_outputRegion = _outputRegion;
    m_outputRegionHasBeenSet = true;
}

bool FlowInOutResp::OutputRegionHasBeenSet() const
{
    return m_outputRegionHasBeenSet;
}

string FlowInOutResp::GetEventName() const
{
    return m_eventName;
}

void FlowInOutResp::SetEventName(const string& _eventName)
{
    m_eventName = _eventName;
    m_eventNameHasBeenSet = true;
}

bool FlowInOutResp::EventNameHasBeenSet() const
{
    return m_eventNameHasBeenSet;
}

string FlowInOutResp::GetInputName() const
{
    return m_inputName;
}

void FlowInOutResp::SetInputName(const string& _inputName)
{
    m_inputName = _inputName;
    m_inputNameHasBeenSet = true;
}

bool FlowInOutResp::InputNameHasBeenSet() const
{
    return m_inputNameHasBeenSet;
}

string FlowInOutResp::GetOutputName() const
{
    return m_outputName;
}

void FlowInOutResp::SetOutputName(const string& _outputName)
{
    m_outputName = _outputName;
    m_outputNameHasBeenSet = true;
}

bool FlowInOutResp::OutputNameHasBeenSet() const
{
    return m_outputNameHasBeenSet;
}

string FlowInOutResp::GetInOutId() const
{
    return m_inOutId;
}

void FlowInOutResp::SetInOutId(const string& _inOutId)
{
    m_inOutId = _inOutId;
    m_inOutIdHasBeenSet = true;
}

bool FlowInOutResp::InOutIdHasBeenSet() const
{
    return m_inOutIdHasBeenSet;
}

string FlowInOutResp::GetInOutType() const
{
    return m_inOutType;
}

void FlowInOutResp::SetInOutType(const string& _inOutType)
{
    m_inOutType = _inOutType;
    m_inOutTypeHasBeenSet = true;
}

bool FlowInOutResp::InOutTypeHasBeenSet() const
{
    return m_inOutTypeHasBeenSet;
}

