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

#include <tencentcloud/waf/v20180125/model/BotIdDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

BotIdDetail::BotIdDetail() :
    m_ruleIdHasBeenSet(false),
    m_botIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_botIdTypeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_insertTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_influenceHasBeenSet(false),
    m_redirectHasBeenSet(false),
    m_hasEventHasBeenSet(false)
{
}

CoreInternalOutcome BotIdDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotIdDetail.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("BotId") && !value["BotId"].IsNull())
    {
        if (!value["BotId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotIdDetail.BotId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_botId = string(value["BotId"].GetString());
        m_botIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BotIdDetail.Status` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetBool();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotIdDetail.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotIdDetail.Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("BotIdType") && !value["BotIdType"].IsNull())
    {
        if (!value["BotIdType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotIdDetail.BotIdType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_botIdType = string(value["BotIdType"].GetString());
        m_botIdTypeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotIdDetail.ModifyTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = value["ModifyTime"].GetInt64();
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("InsertTime") && !value["InsertTime"].IsNull())
    {
        if (!value["InsertTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotIdDetail.InsertTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_insertTime = value["InsertTime"].GetInt64();
        m_insertTimeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotIdDetail.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Influence") && !value["Influence"].IsNull())
    {
        if (!value["Influence"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotIdDetail.Influence` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_influence = string(value["Influence"].GetString());
        m_influenceHasBeenSet = true;
    }

    if (value.HasMember("Redirect") && !value["Redirect"].IsNull())
    {
        if (!value["Redirect"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotIdDetail.Redirect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_redirect = string(value["Redirect"].GetString());
        m_redirectHasBeenSet = true;
    }

    if (value.HasMember("HasEvent") && !value["HasEvent"].IsNull())
    {
        if (!value["HasEvent"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BotIdDetail.HasEvent` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasEvent = value["HasEvent"].GetBool();
        m_hasEventHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BotIdDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_botIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_botId.c_str(), allocator).Move(), allocator);
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
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_botIdTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotIdType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_botIdType.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modifyTime, allocator);
    }

    if (m_insertTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsertTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_insertTime, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_influenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Influence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_influence.c_str(), allocator).Move(), allocator);
    }

    if (m_redirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Redirect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_redirect.c_str(), allocator).Move(), allocator);
    }

    if (m_hasEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasEvent, allocator);
    }

}


string BotIdDetail::GetRuleId() const
{
    return m_ruleId;
}

void BotIdDetail::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool BotIdDetail::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string BotIdDetail::GetBotId() const
{
    return m_botId;
}

void BotIdDetail::SetBotId(const string& _botId)
{
    m_botId = _botId;
    m_botIdHasBeenSet = true;
}

bool BotIdDetail::BotIdHasBeenSet() const
{
    return m_botIdHasBeenSet;
}

bool BotIdDetail::GetStatus() const
{
    return m_status;
}

void BotIdDetail::SetStatus(const bool& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BotIdDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string BotIdDetail::GetAction() const
{
    return m_action;
}

void BotIdDetail::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool BotIdDetail::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

int64_t BotIdDetail::GetLevel() const
{
    return m_level;
}

void BotIdDetail::SetLevel(const int64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool BotIdDetail::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string BotIdDetail::GetBotIdType() const
{
    return m_botIdType;
}

void BotIdDetail::SetBotIdType(const string& _botIdType)
{
    m_botIdType = _botIdType;
    m_botIdTypeHasBeenSet = true;
}

bool BotIdDetail::BotIdTypeHasBeenSet() const
{
    return m_botIdTypeHasBeenSet;
}

int64_t BotIdDetail::GetModifyTime() const
{
    return m_modifyTime;
}

void BotIdDetail::SetModifyTime(const int64_t& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool BotIdDetail::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

int64_t BotIdDetail::GetInsertTime() const
{
    return m_insertTime;
}

void BotIdDetail::SetInsertTime(const int64_t& _insertTime)
{
    m_insertTime = _insertTime;
    m_insertTimeHasBeenSet = true;
}

bool BotIdDetail::InsertTimeHasBeenSet() const
{
    return m_insertTimeHasBeenSet;
}

string BotIdDetail::GetDescription() const
{
    return m_description;
}

void BotIdDetail::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool BotIdDetail::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string BotIdDetail::GetInfluence() const
{
    return m_influence;
}

void BotIdDetail::SetInfluence(const string& _influence)
{
    m_influence = _influence;
    m_influenceHasBeenSet = true;
}

bool BotIdDetail::InfluenceHasBeenSet() const
{
    return m_influenceHasBeenSet;
}

string BotIdDetail::GetRedirect() const
{
    return m_redirect;
}

void BotIdDetail::SetRedirect(const string& _redirect)
{
    m_redirect = _redirect;
    m_redirectHasBeenSet = true;
}

bool BotIdDetail::RedirectHasBeenSet() const
{
    return m_redirectHasBeenSet;
}

bool BotIdDetail::GetHasEvent() const
{
    return m_hasEvent;
}

void BotIdDetail::SetHasEvent(const bool& _hasEvent)
{
    m_hasEvent = _hasEvent;
    m_hasEventHasBeenSet = true;
}

bool BotIdDetail::HasEventHasBeenSet() const
{
    return m_hasEventHasBeenSet;
}

