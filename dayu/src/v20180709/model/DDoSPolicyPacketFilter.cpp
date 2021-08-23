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

#include <tencentcloud/dayu/v20180709/model/DDoSPolicyPacketFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

DDoSPolicyPacketFilter::DDoSPolicyPacketFilter() :
    m_protocolHasBeenSet(false),
    m_sportStartHasBeenSet(false),
    m_sportEndHasBeenSet(false),
    m_dportStartHasBeenSet(false),
    m_dportEndHasBeenSet(false),
    m_pktlenMinHasBeenSet(false),
    m_pktlenMaxHasBeenSet(false),
    m_matchBeginHasBeenSet(false),
    m_matchTypeHasBeenSet(false),
    m_strHasBeenSet(false),
    m_depthHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_isNotHasBeenSet(false),
    m_actionHasBeenSet(false)
{
}

CoreInternalOutcome DDoSPolicyPacketFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyPacketFilter.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("SportStart") && !value["SportStart"].IsNull())
    {
        if (!value["SportStart"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyPacketFilter.SportStart` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sportStart = value["SportStart"].GetUint64();
        m_sportStartHasBeenSet = true;
    }

    if (value.HasMember("SportEnd") && !value["SportEnd"].IsNull())
    {
        if (!value["SportEnd"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyPacketFilter.SportEnd` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sportEnd = value["SportEnd"].GetUint64();
        m_sportEndHasBeenSet = true;
    }

    if (value.HasMember("DportStart") && !value["DportStart"].IsNull())
    {
        if (!value["DportStart"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyPacketFilter.DportStart` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dportStart = value["DportStart"].GetUint64();
        m_dportStartHasBeenSet = true;
    }

    if (value.HasMember("DportEnd") && !value["DportEnd"].IsNull())
    {
        if (!value["DportEnd"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyPacketFilter.DportEnd` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dportEnd = value["DportEnd"].GetUint64();
        m_dportEndHasBeenSet = true;
    }

    if (value.HasMember("PktlenMin") && !value["PktlenMin"].IsNull())
    {
        if (!value["PktlenMin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyPacketFilter.PktlenMin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pktlenMin = value["PktlenMin"].GetUint64();
        m_pktlenMinHasBeenSet = true;
    }

    if (value.HasMember("PktlenMax") && !value["PktlenMax"].IsNull())
    {
        if (!value["PktlenMax"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyPacketFilter.PktlenMax` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pktlenMax = value["PktlenMax"].GetUint64();
        m_pktlenMaxHasBeenSet = true;
    }

    if (value.HasMember("MatchBegin") && !value["MatchBegin"].IsNull())
    {
        if (!value["MatchBegin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyPacketFilter.MatchBegin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchBegin = string(value["MatchBegin"].GetString());
        m_matchBeginHasBeenSet = true;
    }

    if (value.HasMember("MatchType") && !value["MatchType"].IsNull())
    {
        if (!value["MatchType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyPacketFilter.MatchType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchType = string(value["MatchType"].GetString());
        m_matchTypeHasBeenSet = true;
    }

    if (value.HasMember("Str") && !value["Str"].IsNull())
    {
        if (!value["Str"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyPacketFilter.Str` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_str = string(value["Str"].GetString());
        m_strHasBeenSet = true;
    }

    if (value.HasMember("Depth") && !value["Depth"].IsNull())
    {
        if (!value["Depth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyPacketFilter.Depth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_depth = value["Depth"].GetUint64();
        m_depthHasBeenSet = true;
    }

    if (value.HasMember("Offset") && !value["Offset"].IsNull())
    {
        if (!value["Offset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyPacketFilter.Offset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_offset = value["Offset"].GetUint64();
        m_offsetHasBeenSet = true;
    }

    if (value.HasMember("IsNot") && !value["IsNot"].IsNull())
    {
        if (!value["IsNot"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyPacketFilter.IsNot` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isNot = value["IsNot"].GetUint64();
        m_isNotHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSPolicyPacketFilter.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DDoSPolicyPacketFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_sportStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SportStart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sportStart, allocator);
    }

    if (m_sportEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SportEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sportEnd, allocator);
    }

    if (m_dportStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DportStart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dportStart, allocator);
    }

    if (m_dportEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DportEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dportEnd, allocator);
    }

    if (m_pktlenMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PktlenMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pktlenMin, allocator);
    }

    if (m_pktlenMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PktlenMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pktlenMax, allocator);
    }

    if (m_matchBeginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchBegin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchBegin.c_str(), allocator).Move(), allocator);
    }

    if (m_matchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchType.c_str(), allocator).Move(), allocator);
    }

    if (m_strHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Str";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_str.c_str(), allocator).Move(), allocator);
    }

    if (m_depthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Depth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_depth, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offset, allocator);
    }

    if (m_isNotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNot, allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

}


string DDoSPolicyPacketFilter::GetProtocol() const
{
    return m_protocol;
}

void DDoSPolicyPacketFilter::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool DDoSPolicyPacketFilter::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

uint64_t DDoSPolicyPacketFilter::GetSportStart() const
{
    return m_sportStart;
}

void DDoSPolicyPacketFilter::SetSportStart(const uint64_t& _sportStart)
{
    m_sportStart = _sportStart;
    m_sportStartHasBeenSet = true;
}

bool DDoSPolicyPacketFilter::SportStartHasBeenSet() const
{
    return m_sportStartHasBeenSet;
}

uint64_t DDoSPolicyPacketFilter::GetSportEnd() const
{
    return m_sportEnd;
}

void DDoSPolicyPacketFilter::SetSportEnd(const uint64_t& _sportEnd)
{
    m_sportEnd = _sportEnd;
    m_sportEndHasBeenSet = true;
}

bool DDoSPolicyPacketFilter::SportEndHasBeenSet() const
{
    return m_sportEndHasBeenSet;
}

uint64_t DDoSPolicyPacketFilter::GetDportStart() const
{
    return m_dportStart;
}

void DDoSPolicyPacketFilter::SetDportStart(const uint64_t& _dportStart)
{
    m_dportStart = _dportStart;
    m_dportStartHasBeenSet = true;
}

bool DDoSPolicyPacketFilter::DportStartHasBeenSet() const
{
    return m_dportStartHasBeenSet;
}

uint64_t DDoSPolicyPacketFilter::GetDportEnd() const
{
    return m_dportEnd;
}

void DDoSPolicyPacketFilter::SetDportEnd(const uint64_t& _dportEnd)
{
    m_dportEnd = _dportEnd;
    m_dportEndHasBeenSet = true;
}

bool DDoSPolicyPacketFilter::DportEndHasBeenSet() const
{
    return m_dportEndHasBeenSet;
}

uint64_t DDoSPolicyPacketFilter::GetPktlenMin() const
{
    return m_pktlenMin;
}

void DDoSPolicyPacketFilter::SetPktlenMin(const uint64_t& _pktlenMin)
{
    m_pktlenMin = _pktlenMin;
    m_pktlenMinHasBeenSet = true;
}

bool DDoSPolicyPacketFilter::PktlenMinHasBeenSet() const
{
    return m_pktlenMinHasBeenSet;
}

uint64_t DDoSPolicyPacketFilter::GetPktlenMax() const
{
    return m_pktlenMax;
}

void DDoSPolicyPacketFilter::SetPktlenMax(const uint64_t& _pktlenMax)
{
    m_pktlenMax = _pktlenMax;
    m_pktlenMaxHasBeenSet = true;
}

bool DDoSPolicyPacketFilter::PktlenMaxHasBeenSet() const
{
    return m_pktlenMaxHasBeenSet;
}

string DDoSPolicyPacketFilter::GetMatchBegin() const
{
    return m_matchBegin;
}

void DDoSPolicyPacketFilter::SetMatchBegin(const string& _matchBegin)
{
    m_matchBegin = _matchBegin;
    m_matchBeginHasBeenSet = true;
}

bool DDoSPolicyPacketFilter::MatchBeginHasBeenSet() const
{
    return m_matchBeginHasBeenSet;
}

string DDoSPolicyPacketFilter::GetMatchType() const
{
    return m_matchType;
}

void DDoSPolicyPacketFilter::SetMatchType(const string& _matchType)
{
    m_matchType = _matchType;
    m_matchTypeHasBeenSet = true;
}

bool DDoSPolicyPacketFilter::MatchTypeHasBeenSet() const
{
    return m_matchTypeHasBeenSet;
}

string DDoSPolicyPacketFilter::GetStr() const
{
    return m_str;
}

void DDoSPolicyPacketFilter::SetStr(const string& _str)
{
    m_str = _str;
    m_strHasBeenSet = true;
}

bool DDoSPolicyPacketFilter::StrHasBeenSet() const
{
    return m_strHasBeenSet;
}

uint64_t DDoSPolicyPacketFilter::GetDepth() const
{
    return m_depth;
}

void DDoSPolicyPacketFilter::SetDepth(const uint64_t& _depth)
{
    m_depth = _depth;
    m_depthHasBeenSet = true;
}

bool DDoSPolicyPacketFilter::DepthHasBeenSet() const
{
    return m_depthHasBeenSet;
}

uint64_t DDoSPolicyPacketFilter::GetOffset() const
{
    return m_offset;
}

void DDoSPolicyPacketFilter::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DDoSPolicyPacketFilter::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DDoSPolicyPacketFilter::GetIsNot() const
{
    return m_isNot;
}

void DDoSPolicyPacketFilter::SetIsNot(const uint64_t& _isNot)
{
    m_isNot = _isNot;
    m_isNotHasBeenSet = true;
}

bool DDoSPolicyPacketFilter::IsNotHasBeenSet() const
{
    return m_isNotHasBeenSet;
}

string DDoSPolicyPacketFilter::GetAction() const
{
    return m_action;
}

void DDoSPolicyPacketFilter::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool DDoSPolicyPacketFilter::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

