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

#include <tencentcloud/cfw/v20190904/model/BlockIgnoreRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

BlockIgnoreRule::BlockIgnoreRule() :
    m_ruleTypeHasBeenSet(false),
    m_iocHasBeenSet(false),
    m_iocNameHasBeenSet(false),
    m_iocInfoHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_iPHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_eventNameHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_directionListHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_ignoreReasonHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_uniqueIdHasBeenSet(false),
    m_matchTimesHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_lastHitTimeHasBeenSet(false),
    m_customRuleHasBeenSet(false),
    m_fwTypeHasBeenSet(false)
{
}

CoreInternalOutcome BlockIgnoreRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockIgnoreRule.RuleType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = value["RuleType"].GetInt64();
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("Ioc") && !value["Ioc"].IsNull())
    {
        if (!value["Ioc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockIgnoreRule.Ioc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ioc = string(value["Ioc"].GetString());
        m_iocHasBeenSet = true;
    }

    if (value.HasMember("IocName") && !value["IocName"].IsNull())
    {
        if (!value["IocName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockIgnoreRule.IocName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iocName = string(value["IocName"].GetString());
        m_iocNameHasBeenSet = true;
    }

    if (value.HasMember("IocInfo") && !value["IocInfo"].IsNull())
    {
        if (!value["IocInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockIgnoreRule.IocInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iocInfo = string(value["IocInfo"].GetString());
        m_iocInfoHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockIgnoreRule.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("IP") && !value["IP"].IsNull())
    {
        if (!value["IP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockIgnoreRule.IP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iP = string(value["IP"].GetString());
        m_iPHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockIgnoreRule.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("EventName") && !value["EventName"].IsNull())
    {
        if (!value["EventName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockIgnoreRule.EventName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventName = string(value["EventName"].GetString());
        m_eventNameHasBeenSet = true;
    }

    if (value.HasMember("Direction") && !value["Direction"].IsNull())
    {
        if (!value["Direction"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockIgnoreRule.Direction` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_direction = value["Direction"].GetInt64();
        m_directionHasBeenSet = true;
    }

    if (value.HasMember("DirectionList") && !value["DirectionList"].IsNull())
    {
        if (!value["DirectionList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockIgnoreRule.DirectionList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directionList = string(value["DirectionList"].GetString());
        m_directionListHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockIgnoreRule.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockIgnoreRule.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockIgnoreRule.Action` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_action = value["Action"].GetInt64();
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockIgnoreRule.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockIgnoreRule.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("IgnoreReason") && !value["IgnoreReason"].IsNull())
    {
        if (!value["IgnoreReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockIgnoreRule.IgnoreReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ignoreReason = string(value["IgnoreReason"].GetString());
        m_ignoreReasonHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockIgnoreRule.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("UniqueId") && !value["UniqueId"].IsNull())
    {
        if (!value["UniqueId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockIgnoreRule.UniqueId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqueId = string(value["UniqueId"].GetString());
        m_uniqueIdHasBeenSet = true;
    }

    if (value.HasMember("MatchTimes") && !value["MatchTimes"].IsNull())
    {
        if (!value["MatchTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockIgnoreRule.MatchTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_matchTimes = value["MatchTimes"].GetInt64();
        m_matchTimesHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockIgnoreRule.Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(value["Country"].GetString());
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockIgnoreRule.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("LastHitTime") && !value["LastHitTime"].IsNull())
    {
        if (!value["LastHitTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockIgnoreRule.LastHitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastHitTime = string(value["LastHitTime"].GetString());
        m_lastHitTimeHasBeenSet = true;
    }

    if (value.HasMember("CustomRule") && !value["CustomRule"].IsNull())
    {
        if (!value["CustomRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BlockIgnoreRule.CustomRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_customRule.Deserialize(value["CustomRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_customRuleHasBeenSet = true;
    }

    if (value.HasMember("FwType") && !value["FwType"].IsNull())
    {
        if (!value["FwType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockIgnoreRule.FwType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fwType = value["FwType"].GetInt64();
        m_fwTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BlockIgnoreRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleType, allocator);
    }

    if (m_iocHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ioc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ioc.c_str(), allocator).Move(), allocator);
    }

    if (m_iocNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IocName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iocName.c_str(), allocator).Move(), allocator);
    }

    if (m_iocInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IocInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iocInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_iPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iP.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_eventNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventName.c_str(), allocator).Move(), allocator);
    }

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_direction, allocator);
    }

    if (m_directionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectionList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_directionList.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_action, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_ignoreReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ignoreReason.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqueIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqueId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqueId.c_str(), allocator).Move(), allocator);
    }

    if (m_matchTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_matchTimes, allocator);
    }

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_country.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_lastHitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastHitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastHitTime.c_str(), allocator).Move(), allocator);
    }

    if (m_customRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customRule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fwTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fwType, allocator);
    }

}


int64_t BlockIgnoreRule::GetRuleType() const
{
    return m_ruleType;
}

void BlockIgnoreRule::SetRuleType(const int64_t& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool BlockIgnoreRule::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

string BlockIgnoreRule::GetIoc() const
{
    return m_ioc;
}

void BlockIgnoreRule::SetIoc(const string& _ioc)
{
    m_ioc = _ioc;
    m_iocHasBeenSet = true;
}

bool BlockIgnoreRule::IocHasBeenSet() const
{
    return m_iocHasBeenSet;
}

string BlockIgnoreRule::GetIocName() const
{
    return m_iocName;
}

void BlockIgnoreRule::SetIocName(const string& _iocName)
{
    m_iocName = _iocName;
    m_iocNameHasBeenSet = true;
}

bool BlockIgnoreRule::IocNameHasBeenSet() const
{
    return m_iocNameHasBeenSet;
}

string BlockIgnoreRule::GetIocInfo() const
{
    return m_iocInfo;
}

void BlockIgnoreRule::SetIocInfo(const string& _iocInfo)
{
    m_iocInfo = _iocInfo;
    m_iocInfoHasBeenSet = true;
}

bool BlockIgnoreRule::IocInfoHasBeenSet() const
{
    return m_iocInfoHasBeenSet;
}

string BlockIgnoreRule::GetDomain() const
{
    return m_domain;
}

void BlockIgnoreRule::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool BlockIgnoreRule::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string BlockIgnoreRule::GetIP() const
{
    return m_iP;
}

void BlockIgnoreRule::SetIP(const string& _iP)
{
    m_iP = _iP;
    m_iPHasBeenSet = true;
}

bool BlockIgnoreRule::IPHasBeenSet() const
{
    return m_iPHasBeenSet;
}

string BlockIgnoreRule::GetLevel() const
{
    return m_level;
}

void BlockIgnoreRule::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool BlockIgnoreRule::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string BlockIgnoreRule::GetEventName() const
{
    return m_eventName;
}

void BlockIgnoreRule::SetEventName(const string& _eventName)
{
    m_eventName = _eventName;
    m_eventNameHasBeenSet = true;
}

bool BlockIgnoreRule::EventNameHasBeenSet() const
{
    return m_eventNameHasBeenSet;
}

int64_t BlockIgnoreRule::GetDirection() const
{
    return m_direction;
}

void BlockIgnoreRule::SetDirection(const int64_t& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool BlockIgnoreRule::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

string BlockIgnoreRule::GetDirectionList() const
{
    return m_directionList;
}

void BlockIgnoreRule::SetDirectionList(const string& _directionList)
{
    m_directionList = _directionList;
    m_directionListHasBeenSet = true;
}

bool BlockIgnoreRule::DirectionListHasBeenSet() const
{
    return m_directionListHasBeenSet;
}

string BlockIgnoreRule::GetProtocol() const
{
    return m_protocol;
}

void BlockIgnoreRule::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool BlockIgnoreRule::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string BlockIgnoreRule::GetAddress() const
{
    return m_address;
}

void BlockIgnoreRule::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool BlockIgnoreRule::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

int64_t BlockIgnoreRule::GetAction() const
{
    return m_action;
}

void BlockIgnoreRule::SetAction(const int64_t& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool BlockIgnoreRule::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string BlockIgnoreRule::GetStartTime() const
{
    return m_startTime;
}

void BlockIgnoreRule::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool BlockIgnoreRule::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string BlockIgnoreRule::GetEndTime() const
{
    return m_endTime;
}

void BlockIgnoreRule::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool BlockIgnoreRule::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string BlockIgnoreRule::GetIgnoreReason() const
{
    return m_ignoreReason;
}

void BlockIgnoreRule::SetIgnoreReason(const string& _ignoreReason)
{
    m_ignoreReason = _ignoreReason;
    m_ignoreReasonHasBeenSet = true;
}

bool BlockIgnoreRule::IgnoreReasonHasBeenSet() const
{
    return m_ignoreReasonHasBeenSet;
}

string BlockIgnoreRule::GetSource() const
{
    return m_source;
}

void BlockIgnoreRule::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool BlockIgnoreRule::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string BlockIgnoreRule::GetUniqueId() const
{
    return m_uniqueId;
}

void BlockIgnoreRule::SetUniqueId(const string& _uniqueId)
{
    m_uniqueId = _uniqueId;
    m_uniqueIdHasBeenSet = true;
}

bool BlockIgnoreRule::UniqueIdHasBeenSet() const
{
    return m_uniqueIdHasBeenSet;
}

int64_t BlockIgnoreRule::GetMatchTimes() const
{
    return m_matchTimes;
}

void BlockIgnoreRule::SetMatchTimes(const int64_t& _matchTimes)
{
    m_matchTimes = _matchTimes;
    m_matchTimesHasBeenSet = true;
}

bool BlockIgnoreRule::MatchTimesHasBeenSet() const
{
    return m_matchTimesHasBeenSet;
}

string BlockIgnoreRule::GetCountry() const
{
    return m_country;
}

void BlockIgnoreRule::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool BlockIgnoreRule::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string BlockIgnoreRule::GetComment() const
{
    return m_comment;
}

void BlockIgnoreRule::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool BlockIgnoreRule::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string BlockIgnoreRule::GetLastHitTime() const
{
    return m_lastHitTime;
}

void BlockIgnoreRule::SetLastHitTime(const string& _lastHitTime)
{
    m_lastHitTime = _lastHitTime;
    m_lastHitTimeHasBeenSet = true;
}

bool BlockIgnoreRule::LastHitTimeHasBeenSet() const
{
    return m_lastHitTimeHasBeenSet;
}

CustomWhiteRule BlockIgnoreRule::GetCustomRule() const
{
    return m_customRule;
}

void BlockIgnoreRule::SetCustomRule(const CustomWhiteRule& _customRule)
{
    m_customRule = _customRule;
    m_customRuleHasBeenSet = true;
}

bool BlockIgnoreRule::CustomRuleHasBeenSet() const
{
    return m_customRuleHasBeenSet;
}

int64_t BlockIgnoreRule::GetFwType() const
{
    return m_fwType;
}

void BlockIgnoreRule::SetFwType(const int64_t& _fwType)
{
    m_fwType = _fwType;
    m_fwTypeHasBeenSet = true;
}

bool BlockIgnoreRule::FwTypeHasBeenSet() const
{
    return m_fwTypeHasBeenSet;
}

