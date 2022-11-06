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

#include <tencentcloud/mps/v20190612/model/FlowLogInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

FlowLogInfo::FlowLogInfo() :
    m_timestampHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_inputOutputIdHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_eventCodeHasBeenSet(false),
    m_eventMessageHasBeenSet(false),
    m_remoteIpHasBeenSet(false),
    m_remotePortHasBeenSet(false),
    m_pipelineHasBeenSet(false),
    m_inputOutputNameHasBeenSet(false)
{
}

CoreInternalOutcome FlowLogInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowLogInfo.Timestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetInt64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowLogInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("InputOutputId") && !value["InputOutputId"].IsNull())
    {
        if (!value["InputOutputId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowLogInfo.InputOutputId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputOutputId = string(value["InputOutputId"].GetString());
        m_inputOutputIdHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowLogInfo.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("EventCode") && !value["EventCode"].IsNull())
    {
        if (!value["EventCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowLogInfo.EventCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventCode = string(value["EventCode"].GetString());
        m_eventCodeHasBeenSet = true;
    }

    if (value.HasMember("EventMessage") && !value["EventMessage"].IsNull())
    {
        if (!value["EventMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowLogInfo.EventMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventMessage = string(value["EventMessage"].GetString());
        m_eventMessageHasBeenSet = true;
    }

    if (value.HasMember("RemoteIp") && !value["RemoteIp"].IsNull())
    {
        if (!value["RemoteIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowLogInfo.RemoteIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remoteIp = string(value["RemoteIp"].GetString());
        m_remoteIpHasBeenSet = true;
    }

    if (value.HasMember("RemotePort") && !value["RemotePort"].IsNull())
    {
        if (!value["RemotePort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowLogInfo.RemotePort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remotePort = string(value["RemotePort"].GetString());
        m_remotePortHasBeenSet = true;
    }

    if (value.HasMember("Pipeline") && !value["Pipeline"].IsNull())
    {
        if (!value["Pipeline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowLogInfo.Pipeline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pipeline = string(value["Pipeline"].GetString());
        m_pipelineHasBeenSet = true;
    }

    if (value.HasMember("InputOutputName") && !value["InputOutputName"].IsNull())
    {
        if (!value["InputOutputName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowLogInfo.InputOutputName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputOutputName = string(value["InputOutputName"].GetString());
        m_inputOutputNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowLogInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_inputOutputIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputOutputId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputOutputId.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_eventCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventCode.c_str(), allocator).Move(), allocator);
    }

    if (m_eventMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_remoteIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remoteIp.c_str(), allocator).Move(), allocator);
    }

    if (m_remotePortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemotePort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remotePort.c_str(), allocator).Move(), allocator);
    }

    if (m_pipelineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pipeline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pipeline.c_str(), allocator).Move(), allocator);
    }

    if (m_inputOutputNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputOutputName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputOutputName.c_str(), allocator).Move(), allocator);
    }

}


int64_t FlowLogInfo::GetTimestamp() const
{
    return m_timestamp;
}

void FlowLogInfo::SetTimestamp(const int64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool FlowLogInfo::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string FlowLogInfo::GetType() const
{
    return m_type;
}

void FlowLogInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool FlowLogInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string FlowLogInfo::GetInputOutputId() const
{
    return m_inputOutputId;
}

void FlowLogInfo::SetInputOutputId(const string& _inputOutputId)
{
    m_inputOutputId = _inputOutputId;
    m_inputOutputIdHasBeenSet = true;
}

bool FlowLogInfo::InputOutputIdHasBeenSet() const
{
    return m_inputOutputIdHasBeenSet;
}

string FlowLogInfo::GetProtocol() const
{
    return m_protocol;
}

void FlowLogInfo::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool FlowLogInfo::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string FlowLogInfo::GetEventCode() const
{
    return m_eventCode;
}

void FlowLogInfo::SetEventCode(const string& _eventCode)
{
    m_eventCode = _eventCode;
    m_eventCodeHasBeenSet = true;
}

bool FlowLogInfo::EventCodeHasBeenSet() const
{
    return m_eventCodeHasBeenSet;
}

string FlowLogInfo::GetEventMessage() const
{
    return m_eventMessage;
}

void FlowLogInfo::SetEventMessage(const string& _eventMessage)
{
    m_eventMessage = _eventMessage;
    m_eventMessageHasBeenSet = true;
}

bool FlowLogInfo::EventMessageHasBeenSet() const
{
    return m_eventMessageHasBeenSet;
}

string FlowLogInfo::GetRemoteIp() const
{
    return m_remoteIp;
}

void FlowLogInfo::SetRemoteIp(const string& _remoteIp)
{
    m_remoteIp = _remoteIp;
    m_remoteIpHasBeenSet = true;
}

bool FlowLogInfo::RemoteIpHasBeenSet() const
{
    return m_remoteIpHasBeenSet;
}

string FlowLogInfo::GetRemotePort() const
{
    return m_remotePort;
}

void FlowLogInfo::SetRemotePort(const string& _remotePort)
{
    m_remotePort = _remotePort;
    m_remotePortHasBeenSet = true;
}

bool FlowLogInfo::RemotePortHasBeenSet() const
{
    return m_remotePortHasBeenSet;
}

string FlowLogInfo::GetPipeline() const
{
    return m_pipeline;
}

void FlowLogInfo::SetPipeline(const string& _pipeline)
{
    m_pipeline = _pipeline;
    m_pipelineHasBeenSet = true;
}

bool FlowLogInfo::PipelineHasBeenSet() const
{
    return m_pipelineHasBeenSet;
}

string FlowLogInfo::GetInputOutputName() const
{
    return m_inputOutputName;
}

void FlowLogInfo::SetInputOutputName(const string& _inputOutputName)
{
    m_inputOutputName = _inputOutputName;
    m_inputOutputNameHasBeenSet = true;
}

bool FlowLogInfo::InputOutputNameHasBeenSet() const
{
    return m_inputOutputNameHasBeenSet;
}

