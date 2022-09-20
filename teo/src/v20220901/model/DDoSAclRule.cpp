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

#include <tencentcloud/teo/v20220901/model/DDoSAclRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

DDoSAclRule::DDoSAclRule() :
    m_dportEndHasBeenSet(false),
    m_dportStartHasBeenSet(false),
    m_sportEndHasBeenSet(false),
    m_sportStartHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_actionHasBeenSet(false)
{
}

CoreInternalOutcome DDoSAclRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DportEnd") && !value["DportEnd"].IsNull())
    {
        if (!value["DportEnd"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAclRule.DportEnd` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dportEnd = value["DportEnd"].GetInt64();
        m_dportEndHasBeenSet = true;
    }

    if (value.HasMember("DportStart") && !value["DportStart"].IsNull())
    {
        if (!value["DportStart"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAclRule.DportStart` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dportStart = value["DportStart"].GetInt64();
        m_dportStartHasBeenSet = true;
    }

    if (value.HasMember("SportEnd") && !value["SportEnd"].IsNull())
    {
        if (!value["SportEnd"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAclRule.SportEnd` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sportEnd = value["SportEnd"].GetInt64();
        m_sportEndHasBeenSet = true;
    }

    if (value.HasMember("SportStart") && !value["SportStart"].IsNull())
    {
        if (!value["SportStart"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAclRule.SportStart` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sportStart = value["SportStart"].GetInt64();
        m_sportStartHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAclRule.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAclRule.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DDoSAclRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dportEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DportEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dportEnd, allocator);
    }

    if (m_dportStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DportStart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dportStart, allocator);
    }

    if (m_sportEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SportEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sportEnd, allocator);
    }

    if (m_sportStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SportStart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sportStart, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

}


int64_t DDoSAclRule::GetDportEnd() const
{
    return m_dportEnd;
}

void DDoSAclRule::SetDportEnd(const int64_t& _dportEnd)
{
    m_dportEnd = _dportEnd;
    m_dportEndHasBeenSet = true;
}

bool DDoSAclRule::DportEndHasBeenSet() const
{
    return m_dportEndHasBeenSet;
}

int64_t DDoSAclRule::GetDportStart() const
{
    return m_dportStart;
}

void DDoSAclRule::SetDportStart(const int64_t& _dportStart)
{
    m_dportStart = _dportStart;
    m_dportStartHasBeenSet = true;
}

bool DDoSAclRule::DportStartHasBeenSet() const
{
    return m_dportStartHasBeenSet;
}

int64_t DDoSAclRule::GetSportEnd() const
{
    return m_sportEnd;
}

void DDoSAclRule::SetSportEnd(const int64_t& _sportEnd)
{
    m_sportEnd = _sportEnd;
    m_sportEndHasBeenSet = true;
}

bool DDoSAclRule::SportEndHasBeenSet() const
{
    return m_sportEndHasBeenSet;
}

int64_t DDoSAclRule::GetSportStart() const
{
    return m_sportStart;
}

void DDoSAclRule::SetSportStart(const int64_t& _sportStart)
{
    m_sportStart = _sportStart;
    m_sportStartHasBeenSet = true;
}

bool DDoSAclRule::SportStartHasBeenSet() const
{
    return m_sportStartHasBeenSet;
}

string DDoSAclRule::GetProtocol() const
{
    return m_protocol;
}

void DDoSAclRule::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool DDoSAclRule::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string DDoSAclRule::GetAction() const
{
    return m_action;
}

void DDoSAclRule::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool DDoSAclRule::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

