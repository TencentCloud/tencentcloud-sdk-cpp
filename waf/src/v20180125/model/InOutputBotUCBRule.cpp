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

#include <tencentcloud/waf/v20180125/model/InOutputBotUCBRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

InOutputBotUCBRule::InOutputBotUCBRule() :
    m_domainHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ruleHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_onOffHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_priorHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_idHasBeenSet(false),
    m_sceneIdHasBeenSet(false),
    m_validTimeHasBeenSet(false),
    m_appidHasBeenSet(false),
    m_additionArgHasBeenSet(false),
    m_descHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_preDefineHasBeenSet(false),
    m_jobTypeHasBeenSet(false),
    m_jobDateTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_validStatusHasBeenSet(false),
    m_blockPageIdHasBeenSet(false),
    m_actionListHasBeenSet(false),
    m_delayTimeHasBeenSet(false)
{
}

CoreInternalOutcome InOutputBotUCBRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InOutputBotUCBRule.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InOutputBotUCBRule.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Rule") && !value["Rule"].IsNull())
    {
        if (!value["Rule"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InOutputBotUCBRule.Rule` is not array type"));

        const rapidjson::Value &tmpValue = value["Rule"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InOutputUCBRuleEntry item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rule.push_back(item);
        }
        m_ruleHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InOutputBotUCBRule.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("OnOff") && !value["OnOff"].IsNull())
    {
        if (!value["OnOff"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InOutputBotUCBRule.OnOff` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_onOff = string(value["OnOff"].GetString());
        m_onOffHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InOutputBotUCBRule.RuleType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = value["RuleType"].GetInt64();
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("Prior") && !value["Prior"].IsNull())
    {
        if (!value["Prior"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InOutputBotUCBRule.Prior` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_prior = value["Prior"].GetInt64();
        m_priorHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InOutputBotUCBRule.Timestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetInt64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InOutputBotUCBRule.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InOutputBotUCBRule.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("SceneId") && !value["SceneId"].IsNull())
    {
        if (!value["SceneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InOutputBotUCBRule.SceneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sceneId = string(value["SceneId"].GetString());
        m_sceneIdHasBeenSet = true;
    }

    if (value.HasMember("ValidTime") && !value["ValidTime"].IsNull())
    {
        if (!value["ValidTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InOutputBotUCBRule.ValidTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_validTime = value["ValidTime"].GetInt64();
        m_validTimeHasBeenSet = true;
    }

    if (value.HasMember("Appid") && !value["Appid"].IsNull())
    {
        if (!value["Appid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InOutputBotUCBRule.Appid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appid = value["Appid"].GetUint64();
        m_appidHasBeenSet = true;
    }

    if (value.HasMember("AdditionArg") && !value["AdditionArg"].IsNull())
    {
        if (!value["AdditionArg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InOutputBotUCBRule.AdditionArg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_additionArg = string(value["AdditionArg"].GetString());
        m_additionArgHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InOutputBotUCBRule.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InOutputBotUCBRule.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("PreDefine") && !value["PreDefine"].IsNull())
    {
        if (!value["PreDefine"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InOutputBotUCBRule.PreDefine` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_preDefine = value["PreDefine"].GetBool();
        m_preDefineHasBeenSet = true;
    }

    if (value.HasMember("JobType") && !value["JobType"].IsNull())
    {
        if (!value["JobType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InOutputBotUCBRule.JobType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobType = string(value["JobType"].GetString());
        m_jobTypeHasBeenSet = true;
    }

    if (value.HasMember("JobDateTime") && !value["JobDateTime"].IsNull())
    {
        if (!value["JobDateTime"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InOutputBotUCBRule.JobDateTime` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_jobDateTime.Deserialize(value["JobDateTime"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_jobDateTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InOutputBotUCBRule.ExpireTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetUint64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("ValidStatus") && !value["ValidStatus"].IsNull())
    {
        if (!value["ValidStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InOutputBotUCBRule.ValidStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_validStatus = value["ValidStatus"].GetInt64();
        m_validStatusHasBeenSet = true;
    }

    if (value.HasMember("BlockPageId") && !value["BlockPageId"].IsNull())
    {
        if (!value["BlockPageId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InOutputBotUCBRule.BlockPageId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_blockPageId = value["BlockPageId"].GetUint64();
        m_blockPageIdHasBeenSet = true;
    }

    if (value.HasMember("ActionList") && !value["ActionList"].IsNull())
    {
        if (!value["ActionList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InOutputBotUCBRule.ActionList` is not array type"));

        const rapidjson::Value &tmpValue = value["ActionList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UCBActionProportion item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_actionList.push_back(item);
        }
        m_actionListHasBeenSet = true;
    }

    if (value.HasMember("DelayTime") && !value["DelayTime"].IsNull())
    {
        if (!value["DelayTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InOutputBotUCBRule.DelayTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_delayTime = value["DelayTime"].GetInt64();
        m_delayTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InOutputBotUCBRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rule.begin(); itr != m_rule.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_onOffHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnOff";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_onOff.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleType, allocator);
    }

    if (m_priorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prior";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_prior, allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sceneId.c_str(), allocator).Move(), allocator);
    }

    if (m_validTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_validTime, allocator);
    }

    if (m_appidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Appid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appid, allocator);
    }

    if (m_additionArgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdditionArg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_additionArg.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_preDefineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreDefine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_preDefine, allocator);
    }

    if (m_jobTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobType.c_str(), allocator).Move(), allocator);
    }

    if (m_jobDateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobDateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_jobDateTime.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_validStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_validStatus, allocator);
    }

    if (m_blockPageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockPageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockPageId, allocator);
    }

    if (m_actionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_actionList.begin(); itr != m_actionList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_delayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_delayTime, allocator);
    }

}


string InOutputBotUCBRule::GetDomain() const
{
    return m_domain;
}

void InOutputBotUCBRule::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool InOutputBotUCBRule::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string InOutputBotUCBRule::GetName() const
{
    return m_name;
}

void InOutputBotUCBRule::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool InOutputBotUCBRule::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<InOutputUCBRuleEntry> InOutputBotUCBRule::GetRule() const
{
    return m_rule;
}

void InOutputBotUCBRule::SetRule(const vector<InOutputUCBRuleEntry>& _rule)
{
    m_rule = _rule;
    m_ruleHasBeenSet = true;
}

bool InOutputBotUCBRule::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}

string InOutputBotUCBRule::GetAction() const
{
    return m_action;
}

void InOutputBotUCBRule::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool InOutputBotUCBRule::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string InOutputBotUCBRule::GetOnOff() const
{
    return m_onOff;
}

void InOutputBotUCBRule::SetOnOff(const string& _onOff)
{
    m_onOff = _onOff;
    m_onOffHasBeenSet = true;
}

bool InOutputBotUCBRule::OnOffHasBeenSet() const
{
    return m_onOffHasBeenSet;
}

int64_t InOutputBotUCBRule::GetRuleType() const
{
    return m_ruleType;
}

void InOutputBotUCBRule::SetRuleType(const int64_t& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool InOutputBotUCBRule::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

int64_t InOutputBotUCBRule::GetPrior() const
{
    return m_prior;
}

void InOutputBotUCBRule::SetPrior(const int64_t& _prior)
{
    m_prior = _prior;
    m_priorHasBeenSet = true;
}

bool InOutputBotUCBRule::PriorHasBeenSet() const
{
    return m_priorHasBeenSet;
}

int64_t InOutputBotUCBRule::GetTimestamp() const
{
    return m_timestamp;
}

void InOutputBotUCBRule::SetTimestamp(const int64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool InOutputBotUCBRule::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string InOutputBotUCBRule::GetLabel() const
{
    return m_label;
}

void InOutputBotUCBRule::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool InOutputBotUCBRule::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string InOutputBotUCBRule::GetId() const
{
    return m_id;
}

void InOutputBotUCBRule::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool InOutputBotUCBRule::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string InOutputBotUCBRule::GetSceneId() const
{
    return m_sceneId;
}

void InOutputBotUCBRule::SetSceneId(const string& _sceneId)
{
    m_sceneId = _sceneId;
    m_sceneIdHasBeenSet = true;
}

bool InOutputBotUCBRule::SceneIdHasBeenSet() const
{
    return m_sceneIdHasBeenSet;
}

int64_t InOutputBotUCBRule::GetValidTime() const
{
    return m_validTime;
}

void InOutputBotUCBRule::SetValidTime(const int64_t& _validTime)
{
    m_validTime = _validTime;
    m_validTimeHasBeenSet = true;
}

bool InOutputBotUCBRule::ValidTimeHasBeenSet() const
{
    return m_validTimeHasBeenSet;
}

uint64_t InOutputBotUCBRule::GetAppid() const
{
    return m_appid;
}

void InOutputBotUCBRule::SetAppid(const uint64_t& _appid)
{
    m_appid = _appid;
    m_appidHasBeenSet = true;
}

bool InOutputBotUCBRule::AppidHasBeenSet() const
{
    return m_appidHasBeenSet;
}

string InOutputBotUCBRule::GetAdditionArg() const
{
    return m_additionArg;
}

void InOutputBotUCBRule::SetAdditionArg(const string& _additionArg)
{
    m_additionArg = _additionArg;
    m_additionArgHasBeenSet = true;
}

bool InOutputBotUCBRule::AdditionArgHasBeenSet() const
{
    return m_additionArgHasBeenSet;
}

string InOutputBotUCBRule::GetDesc() const
{
    return m_desc;
}

void InOutputBotUCBRule::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool InOutputBotUCBRule::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string InOutputBotUCBRule::GetRuleId() const
{
    return m_ruleId;
}

void InOutputBotUCBRule::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool InOutputBotUCBRule::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

bool InOutputBotUCBRule::GetPreDefine() const
{
    return m_preDefine;
}

void InOutputBotUCBRule::SetPreDefine(const bool& _preDefine)
{
    m_preDefine = _preDefine;
    m_preDefineHasBeenSet = true;
}

bool InOutputBotUCBRule::PreDefineHasBeenSet() const
{
    return m_preDefineHasBeenSet;
}

string InOutputBotUCBRule::GetJobType() const
{
    return m_jobType;
}

void InOutputBotUCBRule::SetJobType(const string& _jobType)
{
    m_jobType = _jobType;
    m_jobTypeHasBeenSet = true;
}

bool InOutputBotUCBRule::JobTypeHasBeenSet() const
{
    return m_jobTypeHasBeenSet;
}

JobDateTime InOutputBotUCBRule::GetJobDateTime() const
{
    return m_jobDateTime;
}

void InOutputBotUCBRule::SetJobDateTime(const JobDateTime& _jobDateTime)
{
    m_jobDateTime = _jobDateTime;
    m_jobDateTimeHasBeenSet = true;
}

bool InOutputBotUCBRule::JobDateTimeHasBeenSet() const
{
    return m_jobDateTimeHasBeenSet;
}

uint64_t InOutputBotUCBRule::GetExpireTime() const
{
    return m_expireTime;
}

void InOutputBotUCBRule::SetExpireTime(const uint64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool InOutputBotUCBRule::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

int64_t InOutputBotUCBRule::GetValidStatus() const
{
    return m_validStatus;
}

void InOutputBotUCBRule::SetValidStatus(const int64_t& _validStatus)
{
    m_validStatus = _validStatus;
    m_validStatusHasBeenSet = true;
}

bool InOutputBotUCBRule::ValidStatusHasBeenSet() const
{
    return m_validStatusHasBeenSet;
}

uint64_t InOutputBotUCBRule::GetBlockPageId() const
{
    return m_blockPageId;
}

void InOutputBotUCBRule::SetBlockPageId(const uint64_t& _blockPageId)
{
    m_blockPageId = _blockPageId;
    m_blockPageIdHasBeenSet = true;
}

bool InOutputBotUCBRule::BlockPageIdHasBeenSet() const
{
    return m_blockPageIdHasBeenSet;
}

vector<UCBActionProportion> InOutputBotUCBRule::GetActionList() const
{
    return m_actionList;
}

void InOutputBotUCBRule::SetActionList(const vector<UCBActionProportion>& _actionList)
{
    m_actionList = _actionList;
    m_actionListHasBeenSet = true;
}

bool InOutputBotUCBRule::ActionListHasBeenSet() const
{
    return m_actionListHasBeenSet;
}

int64_t InOutputBotUCBRule::GetDelayTime() const
{
    return m_delayTime;
}

void InOutputBotUCBRule::SetDelayTime(const int64_t& _delayTime)
{
    m_delayTime = _delayTime;
    m_delayTimeHasBeenSet = true;
}

bool InOutputBotUCBRule::DelayTimeHasBeenSet() const
{
    return m_delayTimeHasBeenSet;
}

