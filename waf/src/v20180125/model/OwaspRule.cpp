/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/waf/v20180125/model/OwaspRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

OwaspRule::OwaspRule() :
    m_ruleIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_vulLevelHasBeenSet(false),
    m_cveIDHasBeenSet(false),
    m_typeIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_lockedHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

CoreInternalOutcome OwaspRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OwaspRule.RuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetUint64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OwaspRule.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OwaspRule.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OwaspRule.Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("VulLevel") && !value["VulLevel"].IsNull())
    {
        if (!value["VulLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OwaspRule.VulLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vulLevel = value["VulLevel"].GetInt64();
        m_vulLevelHasBeenSet = true;
    }

    if (value.HasMember("CveID") && !value["CveID"].IsNull())
    {
        if (!value["CveID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OwaspRule.CveID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cveID = string(value["CveID"].GetString());
        m_cveIDHasBeenSet = true;
    }

    if (value.HasMember("TypeId") && !value["TypeId"].IsNull())
    {
        if (!value["TypeId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OwaspRule.TypeId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_typeId = value["TypeId"].GetUint64();
        m_typeIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OwaspRule.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OwaspRule.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("Locked") && !value["Locked"].IsNull())
    {
        if (!value["Locked"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OwaspRule.Locked` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_locked = value["Locked"].GetInt64();
        m_lockedHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OwaspRule.Reason` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reason = value["Reason"].GetInt64();
        m_reasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OwaspRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_vulLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulLevel, allocator);
    }

    if (m_cveIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CveID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cveID.c_str(), allocator).Move(), allocator);
    }

    if (m_typeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_typeId, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lockedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Locked";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_locked, allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reason, allocator);
    }

}


uint64_t OwaspRule::GetRuleId() const
{
    return m_ruleId;
}

void OwaspRule::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool OwaspRule::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string OwaspRule::GetDescription() const
{
    return m_description;
}

void OwaspRule::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool OwaspRule::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t OwaspRule::GetStatus() const
{
    return m_status;
}

void OwaspRule::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool OwaspRule::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t OwaspRule::GetLevel() const
{
    return m_level;
}

void OwaspRule::SetLevel(const int64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool OwaspRule::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

int64_t OwaspRule::GetVulLevel() const
{
    return m_vulLevel;
}

void OwaspRule::SetVulLevel(const int64_t& _vulLevel)
{
    m_vulLevel = _vulLevel;
    m_vulLevelHasBeenSet = true;
}

bool OwaspRule::VulLevelHasBeenSet() const
{
    return m_vulLevelHasBeenSet;
}

string OwaspRule::GetCveID() const
{
    return m_cveID;
}

void OwaspRule::SetCveID(const string& _cveID)
{
    m_cveID = _cveID;
    m_cveIDHasBeenSet = true;
}

bool OwaspRule::CveIDHasBeenSet() const
{
    return m_cveIDHasBeenSet;
}

uint64_t OwaspRule::GetTypeId() const
{
    return m_typeId;
}

void OwaspRule::SetTypeId(const uint64_t& _typeId)
{
    m_typeId = _typeId;
    m_typeIdHasBeenSet = true;
}

bool OwaspRule::TypeIdHasBeenSet() const
{
    return m_typeIdHasBeenSet;
}

string OwaspRule::GetCreateTime() const
{
    return m_createTime;
}

void OwaspRule::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool OwaspRule::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string OwaspRule::GetModifyTime() const
{
    return m_modifyTime;
}

void OwaspRule::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool OwaspRule::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

int64_t OwaspRule::GetLocked() const
{
    return m_locked;
}

void OwaspRule::SetLocked(const int64_t& _locked)
{
    m_locked = _locked;
    m_lockedHasBeenSet = true;
}

bool OwaspRule::LockedHasBeenSet() const
{
    return m_lockedHasBeenSet;
}

int64_t OwaspRule::GetReason() const
{
    return m_reason;
}

void OwaspRule::SetReason(const int64_t& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool OwaspRule::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

