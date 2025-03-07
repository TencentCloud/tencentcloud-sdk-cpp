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

#include <tencentcloud/emr/v20190103/model/InsightResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

InsightResult::InsightResult() :
    m_iDHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_ruleIDHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_ruleExplainHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_scheduleTaskExecIDHasBeenSet(false),
    m_scheduleFlowNameHasBeenSet(false),
    m_scheduleTaskNameHasBeenSet(false),
    m_jobConfHasBeenSet(false),
    m_contextHasBeenSet(false)
{
}

CoreInternalOutcome InsightResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InsightResult.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InsightResult.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("RuleID") && !value["RuleID"].IsNull())
    {
        if (!value["RuleID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InsightResult.RuleID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleID = string(value["RuleID"].GetString());
        m_ruleIDHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InsightResult.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("RuleExplain") && !value["RuleExplain"].IsNull())
    {
        if (!value["RuleExplain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InsightResult.RuleExplain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleExplain = string(value["RuleExplain"].GetString());
        m_ruleExplainHasBeenSet = true;
    }

    if (value.HasMember("Detail") && !value["Detail"].IsNull())
    {
        if (!value["Detail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InsightResult.Detail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detail = string(value["Detail"].GetString());
        m_detailHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InsightResult.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InsightResult.Value` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_value = value["Value"].GetInt64();
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("ScheduleTaskExecID") && !value["ScheduleTaskExecID"].IsNull())
    {
        if (!value["ScheduleTaskExecID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InsightResult.ScheduleTaskExecID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleTaskExecID = string(value["ScheduleTaskExecID"].GetString());
        m_scheduleTaskExecIDHasBeenSet = true;
    }

    if (value.HasMember("ScheduleFlowName") && !value["ScheduleFlowName"].IsNull())
    {
        if (!value["ScheduleFlowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InsightResult.ScheduleFlowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleFlowName = string(value["ScheduleFlowName"].GetString());
        m_scheduleFlowNameHasBeenSet = true;
    }

    if (value.HasMember("ScheduleTaskName") && !value["ScheduleTaskName"].IsNull())
    {
        if (!value["ScheduleTaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InsightResult.ScheduleTaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleTaskName = string(value["ScheduleTaskName"].GetString());
        m_scheduleTaskNameHasBeenSet = true;
    }

    if (value.HasMember("JobConf") && !value["JobConf"].IsNull())
    {
        if (!value["JobConf"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InsightResult.JobConf` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobConf = string(value["JobConf"].GetString());
        m_jobConfHasBeenSet = true;
    }

    if (value.HasMember("Context") && !value["Context"].IsNull())
    {
        if (!value["Context"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InsightResult.Context` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_context = string(value["Context"].GetString());
        m_contextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InsightResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleID.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleExplainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleExplain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleExplain.c_str(), allocator).Move(), allocator);
    }

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detail.c_str(), allocator).Move(), allocator);
    }

    if (m_suggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_value, allocator);
    }

    if (m_scheduleTaskExecIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleTaskExecID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduleTaskExecID.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleFlowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleFlowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduleFlowName.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleTaskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleTaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduleTaskName.c_str(), allocator).Move(), allocator);
    }

    if (m_jobConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobConf.c_str(), allocator).Move(), allocator);
    }

    if (m_contextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Context";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_context.c_str(), allocator).Move(), allocator);
    }

}


string InsightResult::GetID() const
{
    return m_iD;
}

void InsightResult::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool InsightResult::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string InsightResult::GetType() const
{
    return m_type;
}

void InsightResult::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool InsightResult::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string InsightResult::GetRuleID() const
{
    return m_ruleID;
}

void InsightResult::SetRuleID(const string& _ruleID)
{
    m_ruleID = _ruleID;
    m_ruleIDHasBeenSet = true;
}

bool InsightResult::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}

string InsightResult::GetRuleName() const
{
    return m_ruleName;
}

void InsightResult::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool InsightResult::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string InsightResult::GetRuleExplain() const
{
    return m_ruleExplain;
}

void InsightResult::SetRuleExplain(const string& _ruleExplain)
{
    m_ruleExplain = _ruleExplain;
    m_ruleExplainHasBeenSet = true;
}

bool InsightResult::RuleExplainHasBeenSet() const
{
    return m_ruleExplainHasBeenSet;
}

string InsightResult::GetDetail() const
{
    return m_detail;
}

void InsightResult::SetDetail(const string& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool InsightResult::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

string InsightResult::GetSuggestion() const
{
    return m_suggestion;
}

void InsightResult::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool InsightResult::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

int64_t InsightResult::GetValue() const
{
    return m_value;
}

void InsightResult::SetValue(const int64_t& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool InsightResult::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string InsightResult::GetScheduleTaskExecID() const
{
    return m_scheduleTaskExecID;
}

void InsightResult::SetScheduleTaskExecID(const string& _scheduleTaskExecID)
{
    m_scheduleTaskExecID = _scheduleTaskExecID;
    m_scheduleTaskExecIDHasBeenSet = true;
}

bool InsightResult::ScheduleTaskExecIDHasBeenSet() const
{
    return m_scheduleTaskExecIDHasBeenSet;
}

string InsightResult::GetScheduleFlowName() const
{
    return m_scheduleFlowName;
}

void InsightResult::SetScheduleFlowName(const string& _scheduleFlowName)
{
    m_scheduleFlowName = _scheduleFlowName;
    m_scheduleFlowNameHasBeenSet = true;
}

bool InsightResult::ScheduleFlowNameHasBeenSet() const
{
    return m_scheduleFlowNameHasBeenSet;
}

string InsightResult::GetScheduleTaskName() const
{
    return m_scheduleTaskName;
}

void InsightResult::SetScheduleTaskName(const string& _scheduleTaskName)
{
    m_scheduleTaskName = _scheduleTaskName;
    m_scheduleTaskNameHasBeenSet = true;
}

bool InsightResult::ScheduleTaskNameHasBeenSet() const
{
    return m_scheduleTaskNameHasBeenSet;
}

string InsightResult::GetJobConf() const
{
    return m_jobConf;
}

void InsightResult::SetJobConf(const string& _jobConf)
{
    m_jobConf = _jobConf;
    m_jobConfHasBeenSet = true;
}

bool InsightResult::JobConfHasBeenSet() const
{
    return m_jobConfHasBeenSet;
}

string InsightResult::GetContext() const
{
    return m_context;
}

void InsightResult::SetContext(const string& _context)
{
    m_context = _context;
    m_contextHasBeenSet = true;
}

bool InsightResult::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}

