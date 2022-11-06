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

#include <tencentcloud/mps/v20190612/model/FlowRealtimeStatusItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

FlowRealtimeStatusItem::FlowRealtimeStatusItem() :
    m_typeHasBeenSet(false),
    m_inputIdHasBeenSet(false),
    m_outputIdHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_commonStatusHasBeenSet(false),
    m_sRTStatusHasBeenSet(false),
    m_rTMPStatusHasBeenSet(false),
    m_connectServerIPHasBeenSet(false),
    m_rTPStatusHasBeenSet(false)
{
}

CoreInternalOutcome FlowRealtimeStatusItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowRealtimeStatusItem.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("InputId") && !value["InputId"].IsNull())
    {
        if (!value["InputId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowRealtimeStatusItem.InputId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputId = string(value["InputId"].GetString());
        m_inputIdHasBeenSet = true;
    }

    if (value.HasMember("OutputId") && !value["OutputId"].IsNull())
    {
        if (!value["OutputId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowRealtimeStatusItem.OutputId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputId = string(value["OutputId"].GetString());
        m_outputIdHasBeenSet = true;
    }

    if (value.HasMember("FlowId") && !value["FlowId"].IsNull())
    {
        if (!value["FlowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowRealtimeStatusItem.FlowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = string(value["FlowId"].GetString());
        m_flowIdHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowRealtimeStatusItem.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("CommonStatus") && !value["CommonStatus"].IsNull())
    {
        if (!value["CommonStatus"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FlowRealtimeStatusItem.CommonStatus` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_commonStatus.Deserialize(value["CommonStatus"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_commonStatusHasBeenSet = true;
    }

    if (value.HasMember("SRTStatus") && !value["SRTStatus"].IsNull())
    {
        if (!value["SRTStatus"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FlowRealtimeStatusItem.SRTStatus` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sRTStatus.Deserialize(value["SRTStatus"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sRTStatusHasBeenSet = true;
    }

    if (value.HasMember("RTMPStatus") && !value["RTMPStatus"].IsNull())
    {
        if (!value["RTMPStatus"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FlowRealtimeStatusItem.RTMPStatus` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rTMPStatus.Deserialize(value["RTMPStatus"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rTMPStatusHasBeenSet = true;
    }

    if (value.HasMember("ConnectServerIP") && !value["ConnectServerIP"].IsNull())
    {
        if (!value["ConnectServerIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowRealtimeStatusItem.ConnectServerIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectServerIP = string(value["ConnectServerIP"].GetString());
        m_connectServerIPHasBeenSet = true;
    }

    if (value.HasMember("RTPStatus") && !value["RTPStatus"].IsNull())
    {
        if (!value["RTPStatus"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FlowRealtimeStatusItem.RTPStatus` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rTPStatus.Deserialize(value["RTPStatus"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rTPStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowRealtimeStatusItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_inputIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputId.c_str(), allocator).Move(), allocator);
    }

    if (m_outputIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputId.c_str(), allocator).Move(), allocator);
    }

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_commonStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommonStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_commonStatus.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sRTStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SRTStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sRTStatus.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rTMPStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RTMPStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rTMPStatus.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_connectServerIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectServerIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectServerIP.c_str(), allocator).Move(), allocator);
    }

    if (m_rTPStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RTPStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rTPStatus.ToJsonObject(value[key.c_str()], allocator);
    }

}


string FlowRealtimeStatusItem::GetType() const
{
    return m_type;
}

void FlowRealtimeStatusItem::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool FlowRealtimeStatusItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string FlowRealtimeStatusItem::GetInputId() const
{
    return m_inputId;
}

void FlowRealtimeStatusItem::SetInputId(const string& _inputId)
{
    m_inputId = _inputId;
    m_inputIdHasBeenSet = true;
}

bool FlowRealtimeStatusItem::InputIdHasBeenSet() const
{
    return m_inputIdHasBeenSet;
}

string FlowRealtimeStatusItem::GetOutputId() const
{
    return m_outputId;
}

void FlowRealtimeStatusItem::SetOutputId(const string& _outputId)
{
    m_outputId = _outputId;
    m_outputIdHasBeenSet = true;
}

bool FlowRealtimeStatusItem::OutputIdHasBeenSet() const
{
    return m_outputIdHasBeenSet;
}

string FlowRealtimeStatusItem::GetFlowId() const
{
    return m_flowId;
}

void FlowRealtimeStatusItem::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool FlowRealtimeStatusItem::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

string FlowRealtimeStatusItem::GetProtocol() const
{
    return m_protocol;
}

void FlowRealtimeStatusItem::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool FlowRealtimeStatusItem::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

FlowRealtimeStatusCommon FlowRealtimeStatusItem::GetCommonStatus() const
{
    return m_commonStatus;
}

void FlowRealtimeStatusItem::SetCommonStatus(const FlowRealtimeStatusCommon& _commonStatus)
{
    m_commonStatus = _commonStatus;
    m_commonStatusHasBeenSet = true;
}

bool FlowRealtimeStatusItem::CommonStatusHasBeenSet() const
{
    return m_commonStatusHasBeenSet;
}

FlowRealtimeStatusSRT FlowRealtimeStatusItem::GetSRTStatus() const
{
    return m_sRTStatus;
}

void FlowRealtimeStatusItem::SetSRTStatus(const FlowRealtimeStatusSRT& _sRTStatus)
{
    m_sRTStatus = _sRTStatus;
    m_sRTStatusHasBeenSet = true;
}

bool FlowRealtimeStatusItem::SRTStatusHasBeenSet() const
{
    return m_sRTStatusHasBeenSet;
}

FlowRealtimeStatusRTMP FlowRealtimeStatusItem::GetRTMPStatus() const
{
    return m_rTMPStatus;
}

void FlowRealtimeStatusItem::SetRTMPStatus(const FlowRealtimeStatusRTMP& _rTMPStatus)
{
    m_rTMPStatus = _rTMPStatus;
    m_rTMPStatusHasBeenSet = true;
}

bool FlowRealtimeStatusItem::RTMPStatusHasBeenSet() const
{
    return m_rTMPStatusHasBeenSet;
}

string FlowRealtimeStatusItem::GetConnectServerIP() const
{
    return m_connectServerIP;
}

void FlowRealtimeStatusItem::SetConnectServerIP(const string& _connectServerIP)
{
    m_connectServerIP = _connectServerIP;
    m_connectServerIPHasBeenSet = true;
}

bool FlowRealtimeStatusItem::ConnectServerIPHasBeenSet() const
{
    return m_connectServerIPHasBeenSet;
}

FlowRealtimeStatusRTP FlowRealtimeStatusItem::GetRTPStatus() const
{
    return m_rTPStatus;
}

void FlowRealtimeStatusItem::SetRTPStatus(const FlowRealtimeStatusRTP& _rTPStatus)
{
    m_rTPStatus = _rTPStatus;
    m_rTPStatusHasBeenSet = true;
}

bool FlowRealtimeStatusItem::RTPStatusHasBeenSet() const
{
    return m_rTPStatusHasBeenSet;
}

