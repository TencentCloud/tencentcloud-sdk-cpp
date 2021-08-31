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

#include <tencentcloud/cwp/v20180228/model/BaselineRuleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

BaselineRuleInfo::BaselineRuleInfo() :
    m_ruleNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_fixMessageHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_lastScanAtHasBeenSet(false),
    m_ruleRemarkHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_eventIdHasBeenSet(false)
{
}

CoreInternalOutcome BaselineRuleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineRuleInfo.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineRuleInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("FixMessage") && !value["FixMessage"].IsNull())
    {
        if (!value["FixMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineRuleInfo.FixMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fixMessage = string(value["FixMessage"].GetString());
        m_fixMessageHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineRuleInfo.Level` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetUint64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineRuleInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineRuleInfo.RuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetUint64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("LastScanAt") && !value["LastScanAt"].IsNull())
    {
        if (!value["LastScanAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineRuleInfo.LastScanAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanAt = string(value["LastScanAt"].GetString());
        m_lastScanAtHasBeenSet = true;
    }

    if (value.HasMember("RuleRemark") && !value["RuleRemark"].IsNull())
    {
        if (!value["RuleRemark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineRuleInfo.RuleRemark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleRemark = string(value["RuleRemark"].GetString());
        m_ruleRemarkHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineRuleInfo.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineRuleInfo.EventId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = value["EventId"].GetUint64();
        m_eventIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineRuleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_fixMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fixMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_lastScanAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastScanAt.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleRemark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleRemark.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventId, allocator);
    }

}


string BaselineRuleInfo::GetRuleName() const
{
    return m_ruleName;
}

void BaselineRuleInfo::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool BaselineRuleInfo::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string BaselineRuleInfo::GetDescription() const
{
    return m_description;
}

void BaselineRuleInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool BaselineRuleInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string BaselineRuleInfo::GetFixMessage() const
{
    return m_fixMessage;
}

void BaselineRuleInfo::SetFixMessage(const string& _fixMessage)
{
    m_fixMessage = _fixMessage;
    m_fixMessageHasBeenSet = true;
}

bool BaselineRuleInfo::FixMessageHasBeenSet() const
{
    return m_fixMessageHasBeenSet;
}

uint64_t BaselineRuleInfo::GetLevel() const
{
    return m_level;
}

void BaselineRuleInfo::SetLevel(const uint64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool BaselineRuleInfo::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

uint64_t BaselineRuleInfo::GetStatus() const
{
    return m_status;
}

void BaselineRuleInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BaselineRuleInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t BaselineRuleInfo::GetRuleId() const
{
    return m_ruleId;
}

void BaselineRuleInfo::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool BaselineRuleInfo::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string BaselineRuleInfo::GetLastScanAt() const
{
    return m_lastScanAt;
}

void BaselineRuleInfo::SetLastScanAt(const string& _lastScanAt)
{
    m_lastScanAt = _lastScanAt;
    m_lastScanAtHasBeenSet = true;
}

bool BaselineRuleInfo::LastScanAtHasBeenSet() const
{
    return m_lastScanAtHasBeenSet;
}

string BaselineRuleInfo::GetRuleRemark() const
{
    return m_ruleRemark;
}

void BaselineRuleInfo::SetRuleRemark(const string& _ruleRemark)
{
    m_ruleRemark = _ruleRemark;
    m_ruleRemarkHasBeenSet = true;
}

bool BaselineRuleInfo::RuleRemarkHasBeenSet() const
{
    return m_ruleRemarkHasBeenSet;
}

string BaselineRuleInfo::GetUuid() const
{
    return m_uuid;
}

void BaselineRuleInfo::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool BaselineRuleInfo::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

uint64_t BaselineRuleInfo::GetEventId() const
{
    return m_eventId;
}

void BaselineRuleInfo::SetEventId(const uint64_t& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool BaselineRuleInfo::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

