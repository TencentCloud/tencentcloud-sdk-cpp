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

#include <tencentcloud/antiddos/v20200309/model/AclConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

AclConfig::AclConfig() :
    m_forwardProtocolHasBeenSet(false),
    m_dPortStartHasBeenSet(false),
    m_dPortEndHasBeenSet(false),
    m_sPortStartHasBeenSet(false),
    m_sPortEndHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_priorityHasBeenSet(false)
{
}

CoreInternalOutcome AclConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ForwardProtocol") && !value["ForwardProtocol"].IsNull())
    {
        if (!value["ForwardProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AclConfig.ForwardProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_forwardProtocol = string(value["ForwardProtocol"].GetString());
        m_forwardProtocolHasBeenSet = true;
    }

    if (value.HasMember("DPortStart") && !value["DPortStart"].IsNull())
    {
        if (!value["DPortStart"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AclConfig.DPortStart` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dPortStart = value["DPortStart"].GetUint64();
        m_dPortStartHasBeenSet = true;
    }

    if (value.HasMember("DPortEnd") && !value["DPortEnd"].IsNull())
    {
        if (!value["DPortEnd"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AclConfig.DPortEnd` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dPortEnd = value["DPortEnd"].GetUint64();
        m_dPortEndHasBeenSet = true;
    }

    if (value.HasMember("SPortStart") && !value["SPortStart"].IsNull())
    {
        if (!value["SPortStart"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AclConfig.SPortStart` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sPortStart = value["SPortStart"].GetUint64();
        m_sPortStartHasBeenSet = true;
    }

    if (value.HasMember("SPortEnd") && !value["SPortEnd"].IsNull())
    {
        if (!value["SPortEnd"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AclConfig.SPortEnd` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sPortEnd = value["SPortEnd"].GetUint64();
        m_sPortEndHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AclConfig.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AclConfig.Priority` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetUint64();
        m_priorityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AclConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_forwardProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_forwardProtocol.c_str(), allocator).Move(), allocator);
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

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

}


string AclConfig::GetForwardProtocol() const
{
    return m_forwardProtocol;
}

void AclConfig::SetForwardProtocol(const string& _forwardProtocol)
{
    m_forwardProtocol = _forwardProtocol;
    m_forwardProtocolHasBeenSet = true;
}

bool AclConfig::ForwardProtocolHasBeenSet() const
{
    return m_forwardProtocolHasBeenSet;
}

uint64_t AclConfig::GetDPortStart() const
{
    return m_dPortStart;
}

void AclConfig::SetDPortStart(const uint64_t& _dPortStart)
{
    m_dPortStart = _dPortStart;
    m_dPortStartHasBeenSet = true;
}

bool AclConfig::DPortStartHasBeenSet() const
{
    return m_dPortStartHasBeenSet;
}

uint64_t AclConfig::GetDPortEnd() const
{
    return m_dPortEnd;
}

void AclConfig::SetDPortEnd(const uint64_t& _dPortEnd)
{
    m_dPortEnd = _dPortEnd;
    m_dPortEndHasBeenSet = true;
}

bool AclConfig::DPortEndHasBeenSet() const
{
    return m_dPortEndHasBeenSet;
}

uint64_t AclConfig::GetSPortStart() const
{
    return m_sPortStart;
}

void AclConfig::SetSPortStart(const uint64_t& _sPortStart)
{
    m_sPortStart = _sPortStart;
    m_sPortStartHasBeenSet = true;
}

bool AclConfig::SPortStartHasBeenSet() const
{
    return m_sPortStartHasBeenSet;
}

uint64_t AclConfig::GetSPortEnd() const
{
    return m_sPortEnd;
}

void AclConfig::SetSPortEnd(const uint64_t& _sPortEnd)
{
    m_sPortEnd = _sPortEnd;
    m_sPortEndHasBeenSet = true;
}

bool AclConfig::SPortEndHasBeenSet() const
{
    return m_sPortEndHasBeenSet;
}

string AclConfig::GetAction() const
{
    return m_action;
}

void AclConfig::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool AclConfig::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

uint64_t AclConfig::GetPriority() const
{
    return m_priority;
}

void AclConfig::SetPriority(const uint64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool AclConfig::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

