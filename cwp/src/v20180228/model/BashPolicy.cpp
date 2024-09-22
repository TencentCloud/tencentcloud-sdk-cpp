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

#include <tencentcloud/cwp/v20180228/model/BashPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

BashPolicy::BashPolicy() :
    m_nameHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_whiteHasBeenSet(false),
    m_bashActionHasBeenSet(false),
    m_ruleHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_descriptHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_dealOldEventsHasBeenSet(false),
    m_quuidsHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_uuidsHasBeenSet(false),
    m_rulesHasBeenSet(false)
{
}

CoreInternalOutcome BashPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashPolicy.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BashPolicy.Enable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetInt64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("White") && !value["White"].IsNull())
    {
        if (!value["White"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BashPolicy.White` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_white = value["White"].GetInt64();
        m_whiteHasBeenSet = true;
    }

    if (value.HasMember("BashAction") && !value["BashAction"].IsNull())
    {
        if (!value["BashAction"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BashPolicy.BashAction` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bashAction = value["BashAction"].GetInt64();
        m_bashActionHasBeenSet = true;
    }

    if (value.HasMember("Rule") && !value["Rule"].IsNull())
    {
        if (!value["Rule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashPolicy.Rule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rule = string(value["Rule"].GetString());
        m_ruleHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BashPolicy.Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BashPolicy.Scope` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scope = value["Scope"].GetInt64();
        m_scopeHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BashPolicy.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Descript") && !value["Descript"].IsNull())
    {
        if (!value["Descript"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashPolicy.Descript` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_descript = string(value["Descript"].GetString());
        m_descriptHasBeenSet = true;
    }

    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BashPolicy.EventId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = value["EventId"].GetInt64();
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("DealOldEvents") && !value["DealOldEvents"].IsNull())
    {
        if (!value["DealOldEvents"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BashPolicy.DealOldEvents` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dealOldEvents = value["DealOldEvents"].GetInt64();
        m_dealOldEventsHasBeenSet = true;
    }

    if (value.HasMember("Quuids") && !value["Quuids"].IsNull())
    {
        if (!value["Quuids"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BashPolicy.Quuids` is not array type"));

        const rapidjson::Value &tmpValue = value["Quuids"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_quuids.push_back((*itr).GetString());
        }
        m_quuidsHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BashPolicy.Category` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_category = value["Category"].GetInt64();
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashPolicy.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashPolicy.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("Uuids") && !value["Uuids"].IsNull())
    {
        if (!value["Uuids"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BashPolicy.Uuids` is not array type"));

        const rapidjson::Value &tmpValue = value["Uuids"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_uuids.push_back((*itr).GetString());
        }
        m_uuidsHasBeenSet = true;
    }

    if (value.HasMember("Rules") && !value["Rules"].IsNull())
    {
        if (!value["Rules"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BashPolicy.Rules` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rules.Deserialize(value["Rules"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rulesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BashPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_whiteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "White";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_white, allocator);
    }

    if (m_bashActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BashAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bashAction, allocator);
    }

    if (m_ruleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rule.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scope, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_descriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Descript";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_descript.c_str(), allocator).Move(), allocator);
    }

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventId, allocator);
    }

    if (m_dealOldEventsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealOldEvents";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dealOldEvents, allocator);
    }

    if (m_quuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuids";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_quuids.begin(); itr != m_quuids.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_category, allocator);
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

    if (m_uuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuids";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_uuids.begin(); itr != m_uuids.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_rulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rules.ToJsonObject(value[key.c_str()], allocator);
    }

}


string BashPolicy::GetName() const
{
    return m_name;
}

void BashPolicy::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BashPolicy::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t BashPolicy::GetEnable() const
{
    return m_enable;
}

void BashPolicy::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool BashPolicy::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

int64_t BashPolicy::GetWhite() const
{
    return m_white;
}

void BashPolicy::SetWhite(const int64_t& _white)
{
    m_white = _white;
    m_whiteHasBeenSet = true;
}

bool BashPolicy::WhiteHasBeenSet() const
{
    return m_whiteHasBeenSet;
}

int64_t BashPolicy::GetBashAction() const
{
    return m_bashAction;
}

void BashPolicy::SetBashAction(const int64_t& _bashAction)
{
    m_bashAction = _bashAction;
    m_bashActionHasBeenSet = true;
}

bool BashPolicy::BashActionHasBeenSet() const
{
    return m_bashActionHasBeenSet;
}

string BashPolicy::GetRule() const
{
    return m_rule;
}

void BashPolicy::SetRule(const string& _rule)
{
    m_rule = _rule;
    m_ruleHasBeenSet = true;
}

bool BashPolicy::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}

int64_t BashPolicy::GetLevel() const
{
    return m_level;
}

void BashPolicy::SetLevel(const int64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool BashPolicy::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

int64_t BashPolicy::GetScope() const
{
    return m_scope;
}

void BashPolicy::SetScope(const int64_t& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool BashPolicy::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

int64_t BashPolicy::GetId() const
{
    return m_id;
}

void BashPolicy::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool BashPolicy::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string BashPolicy::GetDescript() const
{
    return m_descript;
}

void BashPolicy::SetDescript(const string& _descript)
{
    m_descript = _descript;
    m_descriptHasBeenSet = true;
}

bool BashPolicy::DescriptHasBeenSet() const
{
    return m_descriptHasBeenSet;
}

int64_t BashPolicy::GetEventId() const
{
    return m_eventId;
}

void BashPolicy::SetEventId(const int64_t& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool BashPolicy::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

int64_t BashPolicy::GetDealOldEvents() const
{
    return m_dealOldEvents;
}

void BashPolicy::SetDealOldEvents(const int64_t& _dealOldEvents)
{
    m_dealOldEvents = _dealOldEvents;
    m_dealOldEventsHasBeenSet = true;
}

bool BashPolicy::DealOldEventsHasBeenSet() const
{
    return m_dealOldEventsHasBeenSet;
}

vector<string> BashPolicy::GetQuuids() const
{
    return m_quuids;
}

void BashPolicy::SetQuuids(const vector<string>& _quuids)
{
    m_quuids = _quuids;
    m_quuidsHasBeenSet = true;
}

bool BashPolicy::QuuidsHasBeenSet() const
{
    return m_quuidsHasBeenSet;
}

int64_t BashPolicy::GetCategory() const
{
    return m_category;
}

void BashPolicy::SetCategory(const int64_t& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool BashPolicy::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string BashPolicy::GetCreateTime() const
{
    return m_createTime;
}

void BashPolicy::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BashPolicy::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string BashPolicy::GetModifyTime() const
{
    return m_modifyTime;
}

void BashPolicy::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool BashPolicy::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

vector<string> BashPolicy::GetUuids() const
{
    return m_uuids;
}

void BashPolicy::SetUuids(const vector<string>& _uuids)
{
    m_uuids = _uuids;
    m_uuidsHasBeenSet = true;
}

bool BashPolicy::UuidsHasBeenSet() const
{
    return m_uuidsHasBeenSet;
}

PolicyRules BashPolicy::GetRules() const
{
    return m_rules;
}

void BashPolicy::SetRules(const PolicyRules& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool BashPolicy::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}

