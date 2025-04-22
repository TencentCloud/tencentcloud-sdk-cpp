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

#include <tencentcloud/cls/v20201016/model/AlarmInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

AlarmInfo::AlarmInfo() :
    m_nameHasBeenSet(false),
    m_alarmTargetsHasBeenSet(false),
    m_monitorTimeHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_triggerCountHasBeenSet(false),
    m_alarmPeriodHasBeenSet(false),
    m_alarmNoticeIdsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_alarmIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_messageTemplateHasBeenSet(false),
    m_callBackHasBeenSet(false),
    m_analysisHasBeenSet(false),
    m_groupTriggerStatusHasBeenSet(false),
    m_groupTriggerConditionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_monitorObjectTypeHasBeenSet(false),
    m_alarmLevelHasBeenSet(false),
    m_classificationsHasBeenSet(false),
    m_multiConditionsHasBeenSet(false)
{
}

CoreInternalOutcome AlarmInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("AlarmTargets") && !value["AlarmTargets"].IsNull())
    {
        if (!value["AlarmTargets"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.AlarmTargets` is not array type"));

        const rapidjson::Value &tmpValue = value["AlarmTargets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AlarmTargetInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_alarmTargets.push_back(item);
        }
        m_alarmTargetsHasBeenSet = true;
    }

    if (value.HasMember("MonitorTime") && !value["MonitorTime"].IsNull())
    {
        if (!value["MonitorTime"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.MonitorTime` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_monitorTime.Deserialize(value["MonitorTime"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_monitorTimeHasBeenSet = true;
    }

    if (value.HasMember("Condition") && !value["Condition"].IsNull())
    {
        if (!value["Condition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.Condition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_condition = string(value["Condition"].GetString());
        m_conditionHasBeenSet = true;
    }

    if (value.HasMember("TriggerCount") && !value["TriggerCount"].IsNull())
    {
        if (!value["TriggerCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.TriggerCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_triggerCount = value["TriggerCount"].GetInt64();
        m_triggerCountHasBeenSet = true;
    }

    if (value.HasMember("AlarmPeriod") && !value["AlarmPeriod"].IsNull())
    {
        if (!value["AlarmPeriod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.AlarmPeriod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmPeriod = value["AlarmPeriod"].GetInt64();
        m_alarmPeriodHasBeenSet = true;
    }

    if (value.HasMember("AlarmNoticeIds") && !value["AlarmNoticeIds"].IsNull())
    {
        if (!value["AlarmNoticeIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.AlarmNoticeIds` is not array type"));

        const rapidjson::Value &tmpValue = value["AlarmNoticeIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_alarmNoticeIds.push_back((*itr).GetString());
        }
        m_alarmNoticeIdsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.Status` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetBool();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AlarmId") && !value["AlarmId"].IsNull())
    {
        if (!value["AlarmId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.AlarmId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmId = string(value["AlarmId"].GetString());
        m_alarmIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("MessageTemplate") && !value["MessageTemplate"].IsNull())
    {
        if (!value["MessageTemplate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.MessageTemplate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_messageTemplate = string(value["MessageTemplate"].GetString());
        m_messageTemplateHasBeenSet = true;
    }

    if (value.HasMember("CallBack") && !value["CallBack"].IsNull())
    {
        if (!value["CallBack"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.CallBack` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_callBack.Deserialize(value["CallBack"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_callBackHasBeenSet = true;
    }

    if (value.HasMember("Analysis") && !value["Analysis"].IsNull())
    {
        if (!value["Analysis"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.Analysis` is not array type"));

        const rapidjson::Value &tmpValue = value["Analysis"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AnalysisDimensional item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_analysis.push_back(item);
        }
        m_analysisHasBeenSet = true;
    }

    if (value.HasMember("GroupTriggerStatus") && !value["GroupTriggerStatus"].IsNull())
    {
        if (!value["GroupTriggerStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.GroupTriggerStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_groupTriggerStatus = value["GroupTriggerStatus"].GetBool();
        m_groupTriggerStatusHasBeenSet = true;
    }

    if (value.HasMember("GroupTriggerCondition") && !value["GroupTriggerCondition"].IsNull())
    {
        if (!value["GroupTriggerCondition"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.GroupTriggerCondition` is not array type"));

        const rapidjson::Value &tmpValue = value["GroupTriggerCondition"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_groupTriggerCondition.push_back((*itr).GetString());
        }
        m_groupTriggerConditionHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("MonitorObjectType") && !value["MonitorObjectType"].IsNull())
    {
        if (!value["MonitorObjectType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.MonitorObjectType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_monitorObjectType = value["MonitorObjectType"].GetUint64();
        m_monitorObjectTypeHasBeenSet = true;
    }

    if (value.HasMember("AlarmLevel") && !value["AlarmLevel"].IsNull())
    {
        if (!value["AlarmLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.AlarmLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmLevel = value["AlarmLevel"].GetUint64();
        m_alarmLevelHasBeenSet = true;
    }

    if (value.HasMember("Classifications") && !value["Classifications"].IsNull())
    {
        if (!value["Classifications"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.Classifications` is not array type"));

        const rapidjson::Value &tmpValue = value["Classifications"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AlarmClassification item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_classifications.push_back(item);
        }
        m_classificationsHasBeenSet = true;
    }

    if (value.HasMember("MultiConditions") && !value["MultiConditions"].IsNull())
    {
        if (!value["MultiConditions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.MultiConditions` is not array type"));

        const rapidjson::Value &tmpValue = value["MultiConditions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MultiCondition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_multiConditions.push_back(item);
        }
        m_multiConditionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmTargetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmTargets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_alarmTargets.begin(); itr != m_alarmTargets.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_monitorTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_monitorTime.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_condition.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_triggerCount, allocator);
    }

    if (m_alarmPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmPeriod, allocator);
    }

    if (m_alarmNoticeIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmNoticeIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_alarmNoticeIds.begin(); itr != m_alarmNoticeIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_alarmIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_messageTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_messageTemplate.c_str(), allocator).Move(), allocator);
    }

    if (m_callBackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallBack";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_callBack.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_analysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Analysis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_analysis.begin(); itr != m_analysis.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_groupTriggerStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupTriggerStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupTriggerStatus, allocator);
    }

    if (m_groupTriggerConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupTriggerCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupTriggerCondition.begin(); itr != m_groupTriggerCondition.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_monitorObjectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorObjectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monitorObjectType, allocator);
    }

    if (m_alarmLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmLevel, allocator);
    }

    if (m_classificationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Classifications";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_classifications.begin(); itr != m_classifications.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_multiConditionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiConditions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_multiConditions.begin(); itr != m_multiConditions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AlarmInfo::GetName() const
{
    return m_name;
}

void AlarmInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AlarmInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<AlarmTargetInfo> AlarmInfo::GetAlarmTargets() const
{
    return m_alarmTargets;
}

void AlarmInfo::SetAlarmTargets(const vector<AlarmTargetInfo>& _alarmTargets)
{
    m_alarmTargets = _alarmTargets;
    m_alarmTargetsHasBeenSet = true;
}

bool AlarmInfo::AlarmTargetsHasBeenSet() const
{
    return m_alarmTargetsHasBeenSet;
}

MonitorTime AlarmInfo::GetMonitorTime() const
{
    return m_monitorTime;
}

void AlarmInfo::SetMonitorTime(const MonitorTime& _monitorTime)
{
    m_monitorTime = _monitorTime;
    m_monitorTimeHasBeenSet = true;
}

bool AlarmInfo::MonitorTimeHasBeenSet() const
{
    return m_monitorTimeHasBeenSet;
}

string AlarmInfo::GetCondition() const
{
    return m_condition;
}

void AlarmInfo::SetCondition(const string& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool AlarmInfo::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

int64_t AlarmInfo::GetTriggerCount() const
{
    return m_triggerCount;
}

void AlarmInfo::SetTriggerCount(const int64_t& _triggerCount)
{
    m_triggerCount = _triggerCount;
    m_triggerCountHasBeenSet = true;
}

bool AlarmInfo::TriggerCountHasBeenSet() const
{
    return m_triggerCountHasBeenSet;
}

int64_t AlarmInfo::GetAlarmPeriod() const
{
    return m_alarmPeriod;
}

void AlarmInfo::SetAlarmPeriod(const int64_t& _alarmPeriod)
{
    m_alarmPeriod = _alarmPeriod;
    m_alarmPeriodHasBeenSet = true;
}

bool AlarmInfo::AlarmPeriodHasBeenSet() const
{
    return m_alarmPeriodHasBeenSet;
}

vector<string> AlarmInfo::GetAlarmNoticeIds() const
{
    return m_alarmNoticeIds;
}

void AlarmInfo::SetAlarmNoticeIds(const vector<string>& _alarmNoticeIds)
{
    m_alarmNoticeIds = _alarmNoticeIds;
    m_alarmNoticeIdsHasBeenSet = true;
}

bool AlarmInfo::AlarmNoticeIdsHasBeenSet() const
{
    return m_alarmNoticeIdsHasBeenSet;
}

bool AlarmInfo::GetStatus() const
{
    return m_status;
}

void AlarmInfo::SetStatus(const bool& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AlarmInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AlarmInfo::GetAlarmId() const
{
    return m_alarmId;
}

void AlarmInfo::SetAlarmId(const string& _alarmId)
{
    m_alarmId = _alarmId;
    m_alarmIdHasBeenSet = true;
}

bool AlarmInfo::AlarmIdHasBeenSet() const
{
    return m_alarmIdHasBeenSet;
}

string AlarmInfo::GetCreateTime() const
{
    return m_createTime;
}

void AlarmInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AlarmInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AlarmInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void AlarmInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AlarmInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string AlarmInfo::GetMessageTemplate() const
{
    return m_messageTemplate;
}

void AlarmInfo::SetMessageTemplate(const string& _messageTemplate)
{
    m_messageTemplate = _messageTemplate;
    m_messageTemplateHasBeenSet = true;
}

bool AlarmInfo::MessageTemplateHasBeenSet() const
{
    return m_messageTemplateHasBeenSet;
}

CallBackInfo AlarmInfo::GetCallBack() const
{
    return m_callBack;
}

void AlarmInfo::SetCallBack(const CallBackInfo& _callBack)
{
    m_callBack = _callBack;
    m_callBackHasBeenSet = true;
}

bool AlarmInfo::CallBackHasBeenSet() const
{
    return m_callBackHasBeenSet;
}

vector<AnalysisDimensional> AlarmInfo::GetAnalysis() const
{
    return m_analysis;
}

void AlarmInfo::SetAnalysis(const vector<AnalysisDimensional>& _analysis)
{
    m_analysis = _analysis;
    m_analysisHasBeenSet = true;
}

bool AlarmInfo::AnalysisHasBeenSet() const
{
    return m_analysisHasBeenSet;
}

bool AlarmInfo::GetGroupTriggerStatus() const
{
    return m_groupTriggerStatus;
}

void AlarmInfo::SetGroupTriggerStatus(const bool& _groupTriggerStatus)
{
    m_groupTriggerStatus = _groupTriggerStatus;
    m_groupTriggerStatusHasBeenSet = true;
}

bool AlarmInfo::GroupTriggerStatusHasBeenSet() const
{
    return m_groupTriggerStatusHasBeenSet;
}

vector<string> AlarmInfo::GetGroupTriggerCondition() const
{
    return m_groupTriggerCondition;
}

void AlarmInfo::SetGroupTriggerCondition(const vector<string>& _groupTriggerCondition)
{
    m_groupTriggerCondition = _groupTriggerCondition;
    m_groupTriggerConditionHasBeenSet = true;
}

bool AlarmInfo::GroupTriggerConditionHasBeenSet() const
{
    return m_groupTriggerConditionHasBeenSet;
}

vector<Tag> AlarmInfo::GetTags() const
{
    return m_tags;
}

void AlarmInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool AlarmInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

uint64_t AlarmInfo::GetMonitorObjectType() const
{
    return m_monitorObjectType;
}

void AlarmInfo::SetMonitorObjectType(const uint64_t& _monitorObjectType)
{
    m_monitorObjectType = _monitorObjectType;
    m_monitorObjectTypeHasBeenSet = true;
}

bool AlarmInfo::MonitorObjectTypeHasBeenSet() const
{
    return m_monitorObjectTypeHasBeenSet;
}

uint64_t AlarmInfo::GetAlarmLevel() const
{
    return m_alarmLevel;
}

void AlarmInfo::SetAlarmLevel(const uint64_t& _alarmLevel)
{
    m_alarmLevel = _alarmLevel;
    m_alarmLevelHasBeenSet = true;
}

bool AlarmInfo::AlarmLevelHasBeenSet() const
{
    return m_alarmLevelHasBeenSet;
}

vector<AlarmClassification> AlarmInfo::GetClassifications() const
{
    return m_classifications;
}

void AlarmInfo::SetClassifications(const vector<AlarmClassification>& _classifications)
{
    m_classifications = _classifications;
    m_classificationsHasBeenSet = true;
}

bool AlarmInfo::ClassificationsHasBeenSet() const
{
    return m_classificationsHasBeenSet;
}

vector<MultiCondition> AlarmInfo::GetMultiConditions() const
{
    return m_multiConditions;
}

void AlarmInfo::SetMultiConditions(const vector<MultiCondition>& _multiConditions)
{
    m_multiConditions = _multiConditions;
    m_multiConditionsHasBeenSet = true;
}

bool AlarmInfo::MultiConditionsHasBeenSet() const
{
    return m_multiConditionsHasBeenSet;
}

