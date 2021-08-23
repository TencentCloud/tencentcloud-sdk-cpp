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

#include <tencentcloud/dayu/v20180709/model/DDoSPolicyPortLimit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

DDoSPolicyPortLimit::DDoSPolicyPortLimit() :
    m_protocolHasBeenSet(false),
    m_dPortStartHasBeenSet(false),
    m_dPortEndHasBeenSet(false),
    m_sPortStartHasBeenSet(false),
    m_sPortEndHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_kindHasBeenSet(false)
{
}

CoreInternalOutcome DDoSPolicyPortLimit::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyPortLimit.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("DPortStart") && !value["DPortStart"].IsNull())
    {
        if (!value["DPortStart"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyPortLimit.DPortStart` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dPortStart = value["DPortStart"].GetUint64();
        m_dPortStartHasBeenSet = true;
    }

    if (value.HasMember("DPortEnd") && !value["DPortEnd"].IsNull())
    {
        if (!value["DPortEnd"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyPortLimit.DPortEnd` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dPortEnd = value["DPortEnd"].GetUint64();
        m_dPortEndHasBeenSet = true;
    }

    if (value.HasMember("SPortStart") && !value["SPortStart"].IsNull())
    {
        if (!value["SPortStart"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyPortLimit.SPortStart` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sPortStart = value["SPortStart"].GetUint64();
        m_sPortStartHasBeenSet = true;
    }

    if (value.HasMember("SPortEnd") && !value["SPortEnd"].IsNull())
    {
        if (!value["SPortEnd"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyPortLimit.SPortEnd` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sPortEnd = value["SPortEnd"].GetUint64();
        m_sPortEndHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyPortLimit.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyPortLimit.Kind` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_kind = value["Kind"].GetUint64();
        m_kindHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DDoSPolicyPortLimit::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_dPortStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DPortStart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dPortStart, allocator);
    }

    if (m_dPortEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DPortEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dPortEnd, allocator);
    }

    if (m_sPortStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SPortStart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sPortStart, allocator);
    }

    if (m_sPortEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SPortEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sPortEnd, allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kind, allocator);
    }

}


string DDoSPolicyPortLimit::GetProtocol() const
{
    return m_protocol;
}

void DDoSPolicyPortLimit::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool DDoSPolicyPortLimit::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

uint64_t DDoSPolicyPortLimit::GetDPortStart() const
{
    return m_dPortStart;
}

void DDoSPolicyPortLimit::SetDPortStart(const uint64_t& _dPortStart)
{
    m_dPortStart = _dPortStart;
    m_dPortStartHasBeenSet = true;
}

bool DDoSPolicyPortLimit::DPortStartHasBeenSet() const
{
    return m_dPortStartHasBeenSet;
}

uint64_t DDoSPolicyPortLimit::GetDPortEnd() const
{
    return m_dPortEnd;
}

void DDoSPolicyPortLimit::SetDPortEnd(const uint64_t& _dPortEnd)
{
    m_dPortEnd = _dPortEnd;
    m_dPortEndHasBeenSet = true;
}

bool DDoSPolicyPortLimit::DPortEndHasBeenSet() const
{
    return m_dPortEndHasBeenSet;
}

uint64_t DDoSPolicyPortLimit::GetSPortStart() const
{
    return m_sPortStart;
}

void DDoSPolicyPortLimit::SetSPortStart(const uint64_t& _sPortStart)
{
    m_sPortStart = _sPortStart;
    m_sPortStartHasBeenSet = true;
}

bool DDoSPolicyPortLimit::SPortStartHasBeenSet() const
{
    return m_sPortStartHasBeenSet;
}

uint64_t DDoSPolicyPortLimit::GetSPortEnd() const
{
    return m_sPortEnd;
}

void DDoSPolicyPortLimit::SetSPortEnd(const uint64_t& _sPortEnd)
{
    m_sPortEnd = _sPortEnd;
    m_sPortEndHasBeenSet = true;
}

bool DDoSPolicyPortLimit::SPortEndHasBeenSet() const
{
    return m_sPortEndHasBeenSet;
}

string DDoSPolicyPortLimit::GetAction() const
{
    return m_action;
}

void DDoSPolicyPortLimit::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool DDoSPolicyPortLimit::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

uint64_t DDoSPolicyPortLimit::GetKind() const
{
    return m_kind;
}

void DDoSPolicyPortLimit::SetKind(const uint64_t& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool DDoSPolicyPortLimit::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

