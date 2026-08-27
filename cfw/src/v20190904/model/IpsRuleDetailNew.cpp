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

#include <tencentcloud/cfw/v20190904/model/IpsRuleDetailNew.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

IpsRuleDetailNew::IpsRuleDetailNew() :
    m_ruleIDHasBeenSet(false),
    m_eventNameHasBeenSet(false),
    m_eventNameDescHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_idHasBeenSet(false),
    m_vulTargetHasBeenSet(false),
    m_cveHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_defaultActionHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_fwTypeHasBeenSet(false)
{
}

CoreInternalOutcome IpsRuleDetailNew::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleID") && !value["RuleID"].IsNull())
    {
        if (!value["RuleID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpsRuleDetailNew.RuleID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleID = string(value["RuleID"].GetString());
        m_ruleIDHasBeenSet = true;
    }

    if (value.HasMember("EventName") && !value["EventName"].IsNull())
    {
        if (!value["EventName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpsRuleDetailNew.EventName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventName = string(value["EventName"].GetString());
        m_eventNameHasBeenSet = true;
    }

    if (value.HasMember("EventNameDesc") && !value["EventNameDesc"].IsNull())
    {
        if (!value["EventNameDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpsRuleDetailNew.EventNameDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventNameDesc = string(value["EventNameDesc"].GetString());
        m_eventNameDescHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpsRuleDetailNew.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpsRuleDetailNew.Confidence` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = string(value["Confidence"].GetString());
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IpsRuleDetailNew.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("VulTarget") && !value["VulTarget"].IsNull())
    {
        if (!value["VulTarget"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpsRuleDetailNew.VulTarget` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulTarget = string(value["VulTarget"].GetString());
        m_vulTargetHasBeenSet = true;
    }

    if (value.HasMember("Cve") && !value["Cve"].IsNull())
    {
        if (!value["Cve"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpsRuleDetailNew.Cve` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cve = string(value["Cve"].GetString());
        m_cveHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IpsRuleDetailNew.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IpsRuleDetailNew.Action` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_action = value["Action"].GetInt64();
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("DefaultAction") && !value["DefaultAction"].IsNull())
    {
        if (!value["DefaultAction"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IpsRuleDetailNew.DefaultAction` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultAction = value["DefaultAction"].GetInt64();
        m_defaultActionHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IpsRuleDetailNew.RuleType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = value["RuleType"].GetInt64();
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpsRuleDetailNew.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("FwType") && !value["FwType"].IsNull())
    {
        if (!value["FwType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IpsRuleDetailNew.FwType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fwType = value["FwType"].GetInt64();
        m_fwTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IpsRuleDetailNew::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleID.c_str(), allocator).Move(), allocator);
    }

    if (m_eventNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventName.c_str(), allocator).Move(), allocator);
    }

    if (m_eventNameDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventNameDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventNameDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_confidence.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_vulTargetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulTarget";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulTarget.c_str(), allocator).Move(), allocator);
    }

    if (m_cveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cve";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cve.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_action, allocator);
    }

    if (m_defaultActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultAction, allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleType, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_fwTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fwType, allocator);
    }

}


string IpsRuleDetailNew::GetRuleID() const
{
    return m_ruleID;
}

void IpsRuleDetailNew::SetRuleID(const string& _ruleID)
{
    m_ruleID = _ruleID;
    m_ruleIDHasBeenSet = true;
}

bool IpsRuleDetailNew::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}

string IpsRuleDetailNew::GetEventName() const
{
    return m_eventName;
}

void IpsRuleDetailNew::SetEventName(const string& _eventName)
{
    m_eventName = _eventName;
    m_eventNameHasBeenSet = true;
}

bool IpsRuleDetailNew::EventNameHasBeenSet() const
{
    return m_eventNameHasBeenSet;
}

string IpsRuleDetailNew::GetEventNameDesc() const
{
    return m_eventNameDesc;
}

void IpsRuleDetailNew::SetEventNameDesc(const string& _eventNameDesc)
{
    m_eventNameDesc = _eventNameDesc;
    m_eventNameDescHasBeenSet = true;
}

bool IpsRuleDetailNew::EventNameDescHasBeenSet() const
{
    return m_eventNameDescHasBeenSet;
}

string IpsRuleDetailNew::GetCategory() const
{
    return m_category;
}

void IpsRuleDetailNew::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool IpsRuleDetailNew::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string IpsRuleDetailNew::GetConfidence() const
{
    return m_confidence;
}

void IpsRuleDetailNew::SetConfidence(const string& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool IpsRuleDetailNew::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

int64_t IpsRuleDetailNew::GetId() const
{
    return m_id;
}

void IpsRuleDetailNew::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool IpsRuleDetailNew::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string IpsRuleDetailNew::GetVulTarget() const
{
    return m_vulTarget;
}

void IpsRuleDetailNew::SetVulTarget(const string& _vulTarget)
{
    m_vulTarget = _vulTarget;
    m_vulTargetHasBeenSet = true;
}

bool IpsRuleDetailNew::VulTargetHasBeenSet() const
{
    return m_vulTargetHasBeenSet;
}

string IpsRuleDetailNew::GetCve() const
{
    return m_cve;
}

void IpsRuleDetailNew::SetCve(const string& _cve)
{
    m_cve = _cve;
    m_cveHasBeenSet = true;
}

bool IpsRuleDetailNew::CveHasBeenSet() const
{
    return m_cveHasBeenSet;
}

int64_t IpsRuleDetailNew::GetStatus() const
{
    return m_status;
}

void IpsRuleDetailNew::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool IpsRuleDetailNew::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t IpsRuleDetailNew::GetAction() const
{
    return m_action;
}

void IpsRuleDetailNew::SetAction(const int64_t& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool IpsRuleDetailNew::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

int64_t IpsRuleDetailNew::GetDefaultAction() const
{
    return m_defaultAction;
}

void IpsRuleDetailNew::SetDefaultAction(const int64_t& _defaultAction)
{
    m_defaultAction = _defaultAction;
    m_defaultActionHasBeenSet = true;
}

bool IpsRuleDetailNew::DefaultActionHasBeenSet() const
{
    return m_defaultActionHasBeenSet;
}

int64_t IpsRuleDetailNew::GetRuleType() const
{
    return m_ruleType;
}

void IpsRuleDetailNew::SetRuleType(const int64_t& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool IpsRuleDetailNew::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

string IpsRuleDetailNew::GetLevel() const
{
    return m_level;
}

void IpsRuleDetailNew::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool IpsRuleDetailNew::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

int64_t IpsRuleDetailNew::GetFwType() const
{
    return m_fwType;
}

void IpsRuleDetailNew::SetFwType(const int64_t& _fwType)
{
    m_fwType = _fwType;
    m_fwTypeHasBeenSet = true;
}

bool IpsRuleDetailNew::FwTypeHasBeenSet() const
{
    return m_fwTypeHasBeenSet;
}

