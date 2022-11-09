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

#include <tencentcloud/antiddos/v20200309/model/PacketFilterConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

PacketFilterConfig::PacketFilterConfig() :
    m_protocolHasBeenSet(false),
    m_sportStartHasBeenSet(false),
    m_sportEndHasBeenSet(false),
    m_dportStartHasBeenSet(false),
    m_dportEndHasBeenSet(false),
    m_pktlenMinHasBeenSet(false),
    m_pktlenMaxHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_matchBeginHasBeenSet(false),
    m_matchTypeHasBeenSet(false),
    m_strHasBeenSet(false),
    m_depthHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_isNotHasBeenSet(false),
    m_matchLogicHasBeenSet(false),
    m_matchBegin2HasBeenSet(false),
    m_matchType2HasBeenSet(false),
    m_str2HasBeenSet(false),
    m_depth2HasBeenSet(false),
    m_offset2HasBeenSet(false),
    m_isNot2HasBeenSet(false),
    m_idHasBeenSet(false),
    m_pktLenGTHasBeenSet(false)
{
}

CoreInternalOutcome PacketFilterConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PacketFilterConfig.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("SportStart") && !value["SportStart"].IsNull())
    {
        if (!value["SportStart"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PacketFilterConfig.SportStart` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sportStart = value["SportStart"].GetInt64();
        m_sportStartHasBeenSet = true;
    }

    if (value.HasMember("SportEnd") && !value["SportEnd"].IsNull())
    {
        if (!value["SportEnd"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PacketFilterConfig.SportEnd` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sportEnd = value["SportEnd"].GetInt64();
        m_sportEndHasBeenSet = true;
    }

    if (value.HasMember("DportStart") && !value["DportStart"].IsNull())
    {
        if (!value["DportStart"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PacketFilterConfig.DportStart` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dportStart = value["DportStart"].GetInt64();
        m_dportStartHasBeenSet = true;
    }

    if (value.HasMember("DportEnd") && !value["DportEnd"].IsNull())
    {
        if (!value["DportEnd"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PacketFilterConfig.DportEnd` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dportEnd = value["DportEnd"].GetInt64();
        m_dportEndHasBeenSet = true;
    }

    if (value.HasMember("PktlenMin") && !value["PktlenMin"].IsNull())
    {
        if (!value["PktlenMin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PacketFilterConfig.PktlenMin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pktlenMin = value["PktlenMin"].GetInt64();
        m_pktlenMinHasBeenSet = true;
    }

    if (value.HasMember("PktlenMax") && !value["PktlenMax"].IsNull())
    {
        if (!value["PktlenMax"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PacketFilterConfig.PktlenMax` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pktlenMax = value["PktlenMax"].GetInt64();
        m_pktlenMaxHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PacketFilterConfig.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("MatchBegin") && !value["MatchBegin"].IsNull())
    {
        if (!value["MatchBegin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PacketFilterConfig.MatchBegin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchBegin = string(value["MatchBegin"].GetString());
        m_matchBeginHasBeenSet = true;
    }

    if (value.HasMember("MatchType") && !value["MatchType"].IsNull())
    {
        if (!value["MatchType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PacketFilterConfig.MatchType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchType = string(value["MatchType"].GetString());
        m_matchTypeHasBeenSet = true;
    }

    if (value.HasMember("Str") && !value["Str"].IsNull())
    {
        if (!value["Str"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PacketFilterConfig.Str` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_str = string(value["Str"].GetString());
        m_strHasBeenSet = true;
    }

    if (value.HasMember("Depth") && !value["Depth"].IsNull())
    {
        if (!value["Depth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PacketFilterConfig.Depth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_depth = value["Depth"].GetInt64();
        m_depthHasBeenSet = true;
    }

    if (value.HasMember("Offset") && !value["Offset"].IsNull())
    {
        if (!value["Offset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PacketFilterConfig.Offset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_offset = value["Offset"].GetInt64();
        m_offsetHasBeenSet = true;
    }

    if (value.HasMember("IsNot") && !value["IsNot"].IsNull())
    {
        if (!value["IsNot"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PacketFilterConfig.IsNot` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isNot = value["IsNot"].GetInt64();
        m_isNotHasBeenSet = true;
    }

    if (value.HasMember("MatchLogic") && !value["MatchLogic"].IsNull())
    {
        if (!value["MatchLogic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PacketFilterConfig.MatchLogic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchLogic = string(value["MatchLogic"].GetString());
        m_matchLogicHasBeenSet = true;
    }

    if (value.HasMember("MatchBegin2") && !value["MatchBegin2"].IsNull())
    {
        if (!value["MatchBegin2"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PacketFilterConfig.MatchBegin2` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchBegin2 = string(value["MatchBegin2"].GetString());
        m_matchBegin2HasBeenSet = true;
    }

    if (value.HasMember("MatchType2") && !value["MatchType2"].IsNull())
    {
        if (!value["MatchType2"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PacketFilterConfig.MatchType2` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchType2 = string(value["MatchType2"].GetString());
        m_matchType2HasBeenSet = true;
    }

    if (value.HasMember("Str2") && !value["Str2"].IsNull())
    {
        if (!value["Str2"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PacketFilterConfig.Str2` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_str2 = string(value["Str2"].GetString());
        m_str2HasBeenSet = true;
    }

    if (value.HasMember("Depth2") && !value["Depth2"].IsNull())
    {
        if (!value["Depth2"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PacketFilterConfig.Depth2` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_depth2 = value["Depth2"].GetInt64();
        m_depth2HasBeenSet = true;
    }

    if (value.HasMember("Offset2") && !value["Offset2"].IsNull())
    {
        if (!value["Offset2"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PacketFilterConfig.Offset2` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_offset2 = value["Offset2"].GetInt64();
        m_offset2HasBeenSet = true;
    }

    if (value.HasMember("IsNot2") && !value["IsNot2"].IsNull())
    {
        if (!value["IsNot2"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PacketFilterConfig.IsNot2` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isNot2 = value["IsNot2"].GetInt64();
        m_isNot2HasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PacketFilterConfig.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("PktLenGT") && !value["PktLenGT"].IsNull())
    {
        if (!value["PktLenGT"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PacketFilterConfig.PktLenGT` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pktLenGT = value["PktLenGT"].GetInt64();
        m_pktLenGTHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PacketFilterConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
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

    if (m_matchLogicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchLogic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchLogic.c_str(), allocator).Move(), allocator);
    }

    if (m_matchBegin2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchBegin2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchBegin2.c_str(), allocator).Move(), allocator);
    }

    if (m_matchType2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchType2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchType2.c_str(), allocator).Move(), allocator);
    }

    if (m_str2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Str2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_str2.c_str(), allocator).Move(), allocator);
    }

    if (m_depth2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Depth2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_depth2, allocator);
    }

    if (m_offset2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offset2, allocator);
    }

    if (m_isNot2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNot2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNot2, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_pktLenGTHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PktLenGT";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pktLenGT, allocator);
    }

}


string PacketFilterConfig::GetProtocol() const
{
    return m_protocol;
}

void PacketFilterConfig::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool PacketFilterConfig::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

int64_t PacketFilterConfig::GetSportStart() const
{
    return m_sportStart;
}

void PacketFilterConfig::SetSportStart(const int64_t& _sportStart)
{
    m_sportStart = _sportStart;
    m_sportStartHasBeenSet = true;
}

bool PacketFilterConfig::SportStartHasBeenSet() const
{
    return m_sportStartHasBeenSet;
}

int64_t PacketFilterConfig::GetSportEnd() const
{
    return m_sportEnd;
}

void PacketFilterConfig::SetSportEnd(const int64_t& _sportEnd)
{
    m_sportEnd = _sportEnd;
    m_sportEndHasBeenSet = true;
}

bool PacketFilterConfig::SportEndHasBeenSet() const
{
    return m_sportEndHasBeenSet;
}

int64_t PacketFilterConfig::GetDportStart() const
{
    return m_dportStart;
}

void PacketFilterConfig::SetDportStart(const int64_t& _dportStart)
{
    m_dportStart = _dportStart;
    m_dportStartHasBeenSet = true;
}

bool PacketFilterConfig::DportStartHasBeenSet() const
{
    return m_dportStartHasBeenSet;
}

int64_t PacketFilterConfig::GetDportEnd() const
{
    return m_dportEnd;
}

void PacketFilterConfig::SetDportEnd(const int64_t& _dportEnd)
{
    m_dportEnd = _dportEnd;
    m_dportEndHasBeenSet = true;
}

bool PacketFilterConfig::DportEndHasBeenSet() const
{
    return m_dportEndHasBeenSet;
}

int64_t PacketFilterConfig::GetPktlenMin() const
{
    return m_pktlenMin;
}

void PacketFilterConfig::SetPktlenMin(const int64_t& _pktlenMin)
{
    m_pktlenMin = _pktlenMin;
    m_pktlenMinHasBeenSet = true;
}

bool PacketFilterConfig::PktlenMinHasBeenSet() const
{
    return m_pktlenMinHasBeenSet;
}

int64_t PacketFilterConfig::GetPktlenMax() const
{
    return m_pktlenMax;
}

void PacketFilterConfig::SetPktlenMax(const int64_t& _pktlenMax)
{
    m_pktlenMax = _pktlenMax;
    m_pktlenMaxHasBeenSet = true;
}

bool PacketFilterConfig::PktlenMaxHasBeenSet() const
{
    return m_pktlenMaxHasBeenSet;
}

string PacketFilterConfig::GetAction() const
{
    return m_action;
}

void PacketFilterConfig::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool PacketFilterConfig::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string PacketFilterConfig::GetMatchBegin() const
{
    return m_matchBegin;
}

void PacketFilterConfig::SetMatchBegin(const string& _matchBegin)
{
    m_matchBegin = _matchBegin;
    m_matchBeginHasBeenSet = true;
}

bool PacketFilterConfig::MatchBeginHasBeenSet() const
{
    return m_matchBeginHasBeenSet;
}

string PacketFilterConfig::GetMatchType() const
{
    return m_matchType;
}

void PacketFilterConfig::SetMatchType(const string& _matchType)
{
    m_matchType = _matchType;
    m_matchTypeHasBeenSet = true;
}

bool PacketFilterConfig::MatchTypeHasBeenSet() const
{
    return m_matchTypeHasBeenSet;
}

string PacketFilterConfig::GetStr() const
{
    return m_str;
}

void PacketFilterConfig::SetStr(const string& _str)
{
    m_str = _str;
    m_strHasBeenSet = true;
}

bool PacketFilterConfig::StrHasBeenSet() const
{
    return m_strHasBeenSet;
}

int64_t PacketFilterConfig::GetDepth() const
{
    return m_depth;
}

void PacketFilterConfig::SetDepth(const int64_t& _depth)
{
    m_depth = _depth;
    m_depthHasBeenSet = true;
}

bool PacketFilterConfig::DepthHasBeenSet() const
{
    return m_depthHasBeenSet;
}

int64_t PacketFilterConfig::GetOffset() const
{
    return m_offset;
}

void PacketFilterConfig::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool PacketFilterConfig::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t PacketFilterConfig::GetIsNot() const
{
    return m_isNot;
}

void PacketFilterConfig::SetIsNot(const int64_t& _isNot)
{
    m_isNot = _isNot;
    m_isNotHasBeenSet = true;
}

bool PacketFilterConfig::IsNotHasBeenSet() const
{
    return m_isNotHasBeenSet;
}

string PacketFilterConfig::GetMatchLogic() const
{
    return m_matchLogic;
}

void PacketFilterConfig::SetMatchLogic(const string& _matchLogic)
{
    m_matchLogic = _matchLogic;
    m_matchLogicHasBeenSet = true;
}

bool PacketFilterConfig::MatchLogicHasBeenSet() const
{
    return m_matchLogicHasBeenSet;
}

string PacketFilterConfig::GetMatchBegin2() const
{
    return m_matchBegin2;
}

void PacketFilterConfig::SetMatchBegin2(const string& _matchBegin2)
{
    m_matchBegin2 = _matchBegin2;
    m_matchBegin2HasBeenSet = true;
}

bool PacketFilterConfig::MatchBegin2HasBeenSet() const
{
    return m_matchBegin2HasBeenSet;
}

string PacketFilterConfig::GetMatchType2() const
{
    return m_matchType2;
}

void PacketFilterConfig::SetMatchType2(const string& _matchType2)
{
    m_matchType2 = _matchType2;
    m_matchType2HasBeenSet = true;
}

bool PacketFilterConfig::MatchType2HasBeenSet() const
{
    return m_matchType2HasBeenSet;
}

string PacketFilterConfig::GetStr2() const
{
    return m_str2;
}

void PacketFilterConfig::SetStr2(const string& _str2)
{
    m_str2 = _str2;
    m_str2HasBeenSet = true;
}

bool PacketFilterConfig::Str2HasBeenSet() const
{
    return m_str2HasBeenSet;
}

int64_t PacketFilterConfig::GetDepth2() const
{
    return m_depth2;
}

void PacketFilterConfig::SetDepth2(const int64_t& _depth2)
{
    m_depth2 = _depth2;
    m_depth2HasBeenSet = true;
}

bool PacketFilterConfig::Depth2HasBeenSet() const
{
    return m_depth2HasBeenSet;
}

int64_t PacketFilterConfig::GetOffset2() const
{
    return m_offset2;
}

void PacketFilterConfig::SetOffset2(const int64_t& _offset2)
{
    m_offset2 = _offset2;
    m_offset2HasBeenSet = true;
}

bool PacketFilterConfig::Offset2HasBeenSet() const
{
    return m_offset2HasBeenSet;
}

int64_t PacketFilterConfig::GetIsNot2() const
{
    return m_isNot2;
}

void PacketFilterConfig::SetIsNot2(const int64_t& _isNot2)
{
    m_isNot2 = _isNot2;
    m_isNot2HasBeenSet = true;
}

bool PacketFilterConfig::IsNot2HasBeenSet() const
{
    return m_isNot2HasBeenSet;
}

string PacketFilterConfig::GetId() const
{
    return m_id;
}

void PacketFilterConfig::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool PacketFilterConfig::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t PacketFilterConfig::GetPktLenGT() const
{
    return m_pktLenGT;
}

void PacketFilterConfig::SetPktLenGT(const int64_t& _pktLenGT)
{
    m_pktLenGT = _pktLenGT;
    m_pktLenGTHasBeenSet = true;
}

bool PacketFilterConfig::PktLenGTHasBeenSet() const
{
    return m_pktLenGTHasBeenSet;
}

