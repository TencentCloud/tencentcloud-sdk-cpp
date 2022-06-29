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

#include <tencentcloud/teo/v20220106/model/DDoSFeaturesFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

DDoSFeaturesFilter::DDoSFeaturesFilter() :
    m_actionHasBeenSet(false),
    m_depthHasBeenSet(false),
    m_depth2HasBeenSet(false),
    m_dportEndHasBeenSet(false),
    m_dportStartHasBeenSet(false),
    m_isNotHasBeenSet(false),
    m_isNot2HasBeenSet(false),
    m_matchLogicHasBeenSet(false),
    m_matchTypeHasBeenSet(false),
    m_matchType2HasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_offset2HasBeenSet(false),
    m_packetMaxHasBeenSet(false),
    m_packetMinHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_sportEndHasBeenSet(false),
    m_sportStartHasBeenSet(false),
    m_strHasBeenSet(false),
    m_str2HasBeenSet(false),
    m_matchBeginHasBeenSet(false),
    m_matchBegin2HasBeenSet(false)
{
}

CoreInternalOutcome DDoSFeaturesFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSFeaturesFilter.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("Depth") && !value["Depth"].IsNull())
    {
        if (!value["Depth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSFeaturesFilter.Depth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_depth = value["Depth"].GetInt64();
        m_depthHasBeenSet = true;
    }

    if (value.HasMember("Depth2") && !value["Depth2"].IsNull())
    {
        if (!value["Depth2"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSFeaturesFilter.Depth2` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_depth2 = value["Depth2"].GetInt64();
        m_depth2HasBeenSet = true;
    }

    if (value.HasMember("DportEnd") && !value["DportEnd"].IsNull())
    {
        if (!value["DportEnd"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSFeaturesFilter.DportEnd` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dportEnd = value["DportEnd"].GetInt64();
        m_dportEndHasBeenSet = true;
    }

    if (value.HasMember("DportStart") && !value["DportStart"].IsNull())
    {
        if (!value["DportStart"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSFeaturesFilter.DportStart` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dportStart = value["DportStart"].GetInt64();
        m_dportStartHasBeenSet = true;
    }

    if (value.HasMember("IsNot") && !value["IsNot"].IsNull())
    {
        if (!value["IsNot"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSFeaturesFilter.IsNot` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isNot = value["IsNot"].GetInt64();
        m_isNotHasBeenSet = true;
    }

    if (value.HasMember("IsNot2") && !value["IsNot2"].IsNull())
    {
        if (!value["IsNot2"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSFeaturesFilter.IsNot2` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isNot2 = value["IsNot2"].GetInt64();
        m_isNot2HasBeenSet = true;
    }

    if (value.HasMember("MatchLogic") && !value["MatchLogic"].IsNull())
    {
        if (!value["MatchLogic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSFeaturesFilter.MatchLogic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchLogic = string(value["MatchLogic"].GetString());
        m_matchLogicHasBeenSet = true;
    }

    if (value.HasMember("MatchType") && !value["MatchType"].IsNull())
    {
        if (!value["MatchType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSFeaturesFilter.MatchType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchType = string(value["MatchType"].GetString());
        m_matchTypeHasBeenSet = true;
    }

    if (value.HasMember("MatchType2") && !value["MatchType2"].IsNull())
    {
        if (!value["MatchType2"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSFeaturesFilter.MatchType2` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchType2 = string(value["MatchType2"].GetString());
        m_matchType2HasBeenSet = true;
    }

    if (value.HasMember("Offset") && !value["Offset"].IsNull())
    {
        if (!value["Offset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSFeaturesFilter.Offset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_offset = value["Offset"].GetInt64();
        m_offsetHasBeenSet = true;
    }

    if (value.HasMember("Offset2") && !value["Offset2"].IsNull())
    {
        if (!value["Offset2"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSFeaturesFilter.Offset2` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_offset2 = value["Offset2"].GetInt64();
        m_offset2HasBeenSet = true;
    }

    if (value.HasMember("PacketMax") && !value["PacketMax"].IsNull())
    {
        if (!value["PacketMax"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSFeaturesFilter.PacketMax` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_packetMax = value["PacketMax"].GetInt64();
        m_packetMaxHasBeenSet = true;
    }

    if (value.HasMember("PacketMin") && !value["PacketMin"].IsNull())
    {
        if (!value["PacketMin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSFeaturesFilter.PacketMin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_packetMin = value["PacketMin"].GetInt64();
        m_packetMinHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSFeaturesFilter.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("SportEnd") && !value["SportEnd"].IsNull())
    {
        if (!value["SportEnd"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSFeaturesFilter.SportEnd` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sportEnd = value["SportEnd"].GetInt64();
        m_sportEndHasBeenSet = true;
    }

    if (value.HasMember("SportStart") && !value["SportStart"].IsNull())
    {
        if (!value["SportStart"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSFeaturesFilter.SportStart` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sportStart = value["SportStart"].GetInt64();
        m_sportStartHasBeenSet = true;
    }

    if (value.HasMember("Str") && !value["Str"].IsNull())
    {
        if (!value["Str"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSFeaturesFilter.Str` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_str = string(value["Str"].GetString());
        m_strHasBeenSet = true;
    }

    if (value.HasMember("Str2") && !value["Str2"].IsNull())
    {
        if (!value["Str2"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSFeaturesFilter.Str2` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_str2 = string(value["Str2"].GetString());
        m_str2HasBeenSet = true;
    }

    if (value.HasMember("MatchBegin") && !value["MatchBegin"].IsNull())
    {
        if (!value["MatchBegin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSFeaturesFilter.MatchBegin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchBegin = string(value["MatchBegin"].GetString());
        m_matchBeginHasBeenSet = true;
    }

    if (value.HasMember("MatchBegin2") && !value["MatchBegin2"].IsNull())
    {
        if (!value["MatchBegin2"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSFeaturesFilter.MatchBegin2` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchBegin2 = string(value["MatchBegin2"].GetString());
        m_matchBegin2HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DDoSFeaturesFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_depthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Depth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_depth, allocator);
    }

    if (m_depth2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Depth2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_depth2, allocator);
    }

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

    if (m_isNotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNot, allocator);
    }

    if (m_isNot2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNot2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNot2, allocator);
    }

    if (m_matchLogicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchLogic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchLogic.c_str(), allocator).Move(), allocator);
    }

    if (m_matchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchType.c_str(), allocator).Move(), allocator);
    }

    if (m_matchType2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchType2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchType2.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offset, allocator);
    }

    if (m_offset2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offset2, allocator);
    }

    if (m_packetMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PacketMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packetMax, allocator);
    }

    if (m_packetMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PacketMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packetMin, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
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

    if (m_strHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Str";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_str.c_str(), allocator).Move(), allocator);
    }

    if (m_str2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Str2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_str2.c_str(), allocator).Move(), allocator);
    }

    if (m_matchBeginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchBegin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchBegin.c_str(), allocator).Move(), allocator);
    }

    if (m_matchBegin2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchBegin2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchBegin2.c_str(), allocator).Move(), allocator);
    }

}


string DDoSFeaturesFilter::GetAction() const
{
    return m_action;
}

void DDoSFeaturesFilter::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool DDoSFeaturesFilter::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

int64_t DDoSFeaturesFilter::GetDepth() const
{
    return m_depth;
}

void DDoSFeaturesFilter::SetDepth(const int64_t& _depth)
{
    m_depth = _depth;
    m_depthHasBeenSet = true;
}

bool DDoSFeaturesFilter::DepthHasBeenSet() const
{
    return m_depthHasBeenSet;
}

int64_t DDoSFeaturesFilter::GetDepth2() const
{
    return m_depth2;
}

void DDoSFeaturesFilter::SetDepth2(const int64_t& _depth2)
{
    m_depth2 = _depth2;
    m_depth2HasBeenSet = true;
}

bool DDoSFeaturesFilter::Depth2HasBeenSet() const
{
    return m_depth2HasBeenSet;
}

int64_t DDoSFeaturesFilter::GetDportEnd() const
{
    return m_dportEnd;
}

void DDoSFeaturesFilter::SetDportEnd(const int64_t& _dportEnd)
{
    m_dportEnd = _dportEnd;
    m_dportEndHasBeenSet = true;
}

bool DDoSFeaturesFilter::DportEndHasBeenSet() const
{
    return m_dportEndHasBeenSet;
}

int64_t DDoSFeaturesFilter::GetDportStart() const
{
    return m_dportStart;
}

void DDoSFeaturesFilter::SetDportStart(const int64_t& _dportStart)
{
    m_dportStart = _dportStart;
    m_dportStartHasBeenSet = true;
}

bool DDoSFeaturesFilter::DportStartHasBeenSet() const
{
    return m_dportStartHasBeenSet;
}

int64_t DDoSFeaturesFilter::GetIsNot() const
{
    return m_isNot;
}

void DDoSFeaturesFilter::SetIsNot(const int64_t& _isNot)
{
    m_isNot = _isNot;
    m_isNotHasBeenSet = true;
}

bool DDoSFeaturesFilter::IsNotHasBeenSet() const
{
    return m_isNotHasBeenSet;
}

int64_t DDoSFeaturesFilter::GetIsNot2() const
{
    return m_isNot2;
}

void DDoSFeaturesFilter::SetIsNot2(const int64_t& _isNot2)
{
    m_isNot2 = _isNot2;
    m_isNot2HasBeenSet = true;
}

bool DDoSFeaturesFilter::IsNot2HasBeenSet() const
{
    return m_isNot2HasBeenSet;
}

string DDoSFeaturesFilter::GetMatchLogic() const
{
    return m_matchLogic;
}

void DDoSFeaturesFilter::SetMatchLogic(const string& _matchLogic)
{
    m_matchLogic = _matchLogic;
    m_matchLogicHasBeenSet = true;
}

bool DDoSFeaturesFilter::MatchLogicHasBeenSet() const
{
    return m_matchLogicHasBeenSet;
}

string DDoSFeaturesFilter::GetMatchType() const
{
    return m_matchType;
}

void DDoSFeaturesFilter::SetMatchType(const string& _matchType)
{
    m_matchType = _matchType;
    m_matchTypeHasBeenSet = true;
}

bool DDoSFeaturesFilter::MatchTypeHasBeenSet() const
{
    return m_matchTypeHasBeenSet;
}

string DDoSFeaturesFilter::GetMatchType2() const
{
    return m_matchType2;
}

void DDoSFeaturesFilter::SetMatchType2(const string& _matchType2)
{
    m_matchType2 = _matchType2;
    m_matchType2HasBeenSet = true;
}

bool DDoSFeaturesFilter::MatchType2HasBeenSet() const
{
    return m_matchType2HasBeenSet;
}

int64_t DDoSFeaturesFilter::GetOffset() const
{
    return m_offset;
}

void DDoSFeaturesFilter::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DDoSFeaturesFilter::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DDoSFeaturesFilter::GetOffset2() const
{
    return m_offset2;
}

void DDoSFeaturesFilter::SetOffset2(const int64_t& _offset2)
{
    m_offset2 = _offset2;
    m_offset2HasBeenSet = true;
}

bool DDoSFeaturesFilter::Offset2HasBeenSet() const
{
    return m_offset2HasBeenSet;
}

int64_t DDoSFeaturesFilter::GetPacketMax() const
{
    return m_packetMax;
}

void DDoSFeaturesFilter::SetPacketMax(const int64_t& _packetMax)
{
    m_packetMax = _packetMax;
    m_packetMaxHasBeenSet = true;
}

bool DDoSFeaturesFilter::PacketMaxHasBeenSet() const
{
    return m_packetMaxHasBeenSet;
}

int64_t DDoSFeaturesFilter::GetPacketMin() const
{
    return m_packetMin;
}

void DDoSFeaturesFilter::SetPacketMin(const int64_t& _packetMin)
{
    m_packetMin = _packetMin;
    m_packetMinHasBeenSet = true;
}

bool DDoSFeaturesFilter::PacketMinHasBeenSet() const
{
    return m_packetMinHasBeenSet;
}

string DDoSFeaturesFilter::GetProtocol() const
{
    return m_protocol;
}

void DDoSFeaturesFilter::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool DDoSFeaturesFilter::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

int64_t DDoSFeaturesFilter::GetSportEnd() const
{
    return m_sportEnd;
}

void DDoSFeaturesFilter::SetSportEnd(const int64_t& _sportEnd)
{
    m_sportEnd = _sportEnd;
    m_sportEndHasBeenSet = true;
}

bool DDoSFeaturesFilter::SportEndHasBeenSet() const
{
    return m_sportEndHasBeenSet;
}

int64_t DDoSFeaturesFilter::GetSportStart() const
{
    return m_sportStart;
}

void DDoSFeaturesFilter::SetSportStart(const int64_t& _sportStart)
{
    m_sportStart = _sportStart;
    m_sportStartHasBeenSet = true;
}

bool DDoSFeaturesFilter::SportStartHasBeenSet() const
{
    return m_sportStartHasBeenSet;
}

string DDoSFeaturesFilter::GetStr() const
{
    return m_str;
}

void DDoSFeaturesFilter::SetStr(const string& _str)
{
    m_str = _str;
    m_strHasBeenSet = true;
}

bool DDoSFeaturesFilter::StrHasBeenSet() const
{
    return m_strHasBeenSet;
}

string DDoSFeaturesFilter::GetStr2() const
{
    return m_str2;
}

void DDoSFeaturesFilter::SetStr2(const string& _str2)
{
    m_str2 = _str2;
    m_str2HasBeenSet = true;
}

bool DDoSFeaturesFilter::Str2HasBeenSet() const
{
    return m_str2HasBeenSet;
}

string DDoSFeaturesFilter::GetMatchBegin() const
{
    return m_matchBegin;
}

void DDoSFeaturesFilter::SetMatchBegin(const string& _matchBegin)
{
    m_matchBegin = _matchBegin;
    m_matchBeginHasBeenSet = true;
}

bool DDoSFeaturesFilter::MatchBeginHasBeenSet() const
{
    return m_matchBeginHasBeenSet;
}

string DDoSFeaturesFilter::GetMatchBegin2() const
{
    return m_matchBegin2;
}

void DDoSFeaturesFilter::SetMatchBegin2(const string& _matchBegin2)
{
    m_matchBegin2 = _matchBegin2;
    m_matchBegin2HasBeenSet = true;
}

bool DDoSFeaturesFilter::MatchBegin2HasBeenSet() const
{
    return m_matchBegin2HasBeenSet;
}

