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

#include <tencentcloud/wedata/v20210820/model/TaskAlarmInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskAlarmInfo::TaskAlarmInfo() :
    m_taskIdHasBeenSet(false),
    m_regularNameHasBeenSet(false),
    m_regularStatusHasBeenSet(false),
    m_alarmLevelHasBeenSet(false),
    m_alarmWayHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_regularIdHasBeenSet(false),
    m_alarmIndicatorHasBeenSet(false),
    m_triggerTypeHasBeenSet(false),
    m_estimatedTimeHasBeenSet(false),
    m_alarmRecipientIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_createrHasBeenSet(false),
    m_alarmRecipientNameHasBeenSet(false),
    m_alarmIndicatorDescHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_alarmIndicatorInfosHasBeenSet(false),
    m_alarmRecipientTypeHasBeenSet(false),
    m_quietPeriodsHasBeenSet(false),
    m_weComHookHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_operatorUinHasBeenSet(false),
    m_taskCountHasBeenSet(false),
    m_monitorTypeHasBeenSet(false),
    m_monitorObjectIdsHasBeenSet(false),
    m_latestAlarmInstanceIdHasBeenSet(false),
    m_latestAlarmTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_larkWebHooksHasBeenSet(false),
    m_dingDingWebHooksHasBeenSet(false),
    m_businessTypeHasBeenSet(false),
    m_alarmMessageRuleHasBeenSet(false),
    m_reportTargetHasBeenSet(false)
{
}

CoreInternalOutcome TaskAlarmInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("RegularName") && !value["RegularName"].IsNull())
    {
        if (!value["RegularName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.RegularName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regularName = string(value["RegularName"].GetString());
        m_regularNameHasBeenSet = true;
    }

    if (value.HasMember("RegularStatus") && !value["RegularStatus"].IsNull())
    {
        if (!value["RegularStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.RegularStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_regularStatus = value["RegularStatus"].GetUint64();
        m_regularStatusHasBeenSet = true;
    }

    if (value.HasMember("AlarmLevel") && !value["AlarmLevel"].IsNull())
    {
        if (!value["AlarmLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.AlarmLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmLevel = value["AlarmLevel"].GetUint64();
        m_alarmLevelHasBeenSet = true;
    }

    if (value.HasMember("AlarmWay") && !value["AlarmWay"].IsNull())
    {
        if (!value["AlarmWay"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.AlarmWay` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmWay = string(value["AlarmWay"].GetString());
        m_alarmWayHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.TaskType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = value["TaskType"].GetUint64();
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("RegularId") && !value["RegularId"].IsNull())
    {
        if (!value["RegularId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.RegularId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regularId = string(value["RegularId"].GetString());
        m_regularIdHasBeenSet = true;
    }

    if (value.HasMember("AlarmIndicator") && !value["AlarmIndicator"].IsNull())
    {
        if (!value["AlarmIndicator"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.AlarmIndicator` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmIndicator = value["AlarmIndicator"].GetUint64();
        m_alarmIndicatorHasBeenSet = true;
    }

    if (value.HasMember("TriggerType") && !value["TriggerType"].IsNull())
    {
        if (!value["TriggerType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.TriggerType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_triggerType = value["TriggerType"].GetUint64();
        m_triggerTypeHasBeenSet = true;
    }

    if (value.HasMember("EstimatedTime") && !value["EstimatedTime"].IsNull())
    {
        if (!value["EstimatedTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.EstimatedTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_estimatedTime = value["EstimatedTime"].GetUint64();
        m_estimatedTimeHasBeenSet = true;
    }

    if (value.HasMember("AlarmRecipientId") && !value["AlarmRecipientId"].IsNull())
    {
        if (!value["AlarmRecipientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.AlarmRecipientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmRecipientId = string(value["AlarmRecipientId"].GetString());
        m_alarmRecipientIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Creater") && !value["Creater"].IsNull())
    {
        if (!value["Creater"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.Creater` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creater = string(value["Creater"].GetString());
        m_createrHasBeenSet = true;
    }

    if (value.HasMember("AlarmRecipientName") && !value["AlarmRecipientName"].IsNull())
    {
        if (!value["AlarmRecipientName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.AlarmRecipientName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmRecipientName = string(value["AlarmRecipientName"].GetString());
        m_alarmRecipientNameHasBeenSet = true;
    }

    if (value.HasMember("AlarmIndicatorDesc") && !value["AlarmIndicatorDesc"].IsNull())
    {
        if (!value["AlarmIndicatorDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.AlarmIndicatorDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmIndicatorDesc = string(value["AlarmIndicatorDesc"].GetString());
        m_alarmIndicatorDescHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.Operator` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_operator = value["Operator"].GetUint64();
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.NodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = string(value["NodeId"].GetString());
        m_nodeIdHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("AlarmIndicatorInfos") && !value["AlarmIndicatorInfos"].IsNull())
    {
        if (!value["AlarmIndicatorInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.AlarmIndicatorInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["AlarmIndicatorInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AlarmIndicatorInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_alarmIndicatorInfos.push_back(item);
        }
        m_alarmIndicatorInfosHasBeenSet = true;
    }

    if (value.HasMember("AlarmRecipientType") && !value["AlarmRecipientType"].IsNull())
    {
        if (!value["AlarmRecipientType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.AlarmRecipientType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmRecipientType = value["AlarmRecipientType"].GetUint64();
        m_alarmRecipientTypeHasBeenSet = true;
    }

    if (value.HasMember("QuietPeriods") && !value["QuietPeriods"].IsNull())
    {
        if (!value["QuietPeriods"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.QuietPeriods` is not array type"));

        const rapidjson::Value &tmpValue = value["QuietPeriods"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QuietPeriod item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_quietPeriods.push_back(item);
        }
        m_quietPeriodsHasBeenSet = true;
    }

    if (value.HasMember("WeComHook") && !value["WeComHook"].IsNull())
    {
        if (!value["WeComHook"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.WeComHook` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_weComHook = string(value["WeComHook"].GetString());
        m_weComHookHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("OperatorUin") && !value["OperatorUin"].IsNull())
    {
        if (!value["OperatorUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.OperatorUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatorUin = string(value["OperatorUin"].GetString());
        m_operatorUinHasBeenSet = true;
    }

    if (value.HasMember("TaskCount") && !value["TaskCount"].IsNull())
    {
        if (!value["TaskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.TaskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskCount = value["TaskCount"].GetInt64();
        m_taskCountHasBeenSet = true;
    }

    if (value.HasMember("MonitorType") && !value["MonitorType"].IsNull())
    {
        if (!value["MonitorType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.MonitorType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_monitorType = value["MonitorType"].GetInt64();
        m_monitorTypeHasBeenSet = true;
    }

    if (value.HasMember("MonitorObjectIds") && !value["MonitorObjectIds"].IsNull())
    {
        if (!value["MonitorObjectIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.MonitorObjectIds` is not array type"));

        const rapidjson::Value &tmpValue = value["MonitorObjectIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_monitorObjectIds.push_back((*itr).GetString());
        }
        m_monitorObjectIdsHasBeenSet = true;
    }

    if (value.HasMember("LatestAlarmInstanceId") && !value["LatestAlarmInstanceId"].IsNull())
    {
        if (!value["LatestAlarmInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.LatestAlarmInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestAlarmInstanceId = string(value["LatestAlarmInstanceId"].GetString());
        m_latestAlarmInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("LatestAlarmTime") && !value["LatestAlarmTime"].IsNull())
    {
        if (!value["LatestAlarmTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.LatestAlarmTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestAlarmTime = string(value["LatestAlarmTime"].GetString());
        m_latestAlarmTimeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("LarkWebHooks") && !value["LarkWebHooks"].IsNull())
    {
        if (!value["LarkWebHooks"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.LarkWebHooks` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_larkWebHooks = string(value["LarkWebHooks"].GetString());
        m_larkWebHooksHasBeenSet = true;
    }

    if (value.HasMember("DingDingWebHooks") && !value["DingDingWebHooks"].IsNull())
    {
        if (!value["DingDingWebHooks"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.DingDingWebHooks` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dingDingWebHooks = string(value["DingDingWebHooks"].GetString());
        m_dingDingWebHooksHasBeenSet = true;
    }

    if (value.HasMember("BusinessType") && !value["BusinessType"].IsNull())
    {
        if (!value["BusinessType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.BusinessType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_businessType = value["BusinessType"].GetInt64();
        m_businessTypeHasBeenSet = true;
    }

    if (value.HasMember("AlarmMessageRule") && !value["AlarmMessageRule"].IsNull())
    {
        if (!value["AlarmMessageRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.AlarmMessageRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmMessageRule = string(value["AlarmMessageRule"].GetString());
        m_alarmMessageRuleHasBeenSet = true;
    }

    if (value.HasMember("ReportTarget") && !value["ReportTarget"].IsNull())
    {
        if (!value["ReportTarget"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskAlarmInfo.ReportTarget` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reportTarget = value["ReportTarget"].GetInt64();
        m_reportTargetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskAlarmInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_regularNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegularName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regularName.c_str(), allocator).Move(), allocator);
    }

    if (m_regularStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegularStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regularStatus, allocator);
    }

    if (m_alarmLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmLevel, allocator);
    }

    if (m_alarmWayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmWay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmWay.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskType, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_regularIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegularId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regularId.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmIndicatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmIndicator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmIndicator, allocator);
    }

    if (m_triggerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_triggerType, allocator);
    }

    if (m_estimatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EstimatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_estimatedTime, allocator);
    }

    if (m_alarmRecipientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRecipientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmRecipientId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_createrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creater";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creater.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmRecipientNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRecipientName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmRecipientName.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmIndicatorDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmIndicatorDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmIndicatorDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operator, allocator);
    }

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmIndicatorInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmIndicatorInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_alarmIndicatorInfos.begin(); itr != m_alarmIndicatorInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_alarmRecipientTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRecipientType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmRecipientType, allocator);
    }

    if (m_quietPeriodsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuietPeriods";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_quietPeriods.begin(); itr != m_quietPeriods.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_weComHookHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeComHook";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_weComHook.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatorUin.c_str(), allocator).Move(), allocator);
    }

    if (m_taskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskCount, allocator);
    }

    if (m_monitorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monitorType, allocator);
    }

    if (m_monitorObjectIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorObjectIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_monitorObjectIds.begin(); itr != m_monitorObjectIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_latestAlarmInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestAlarmInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestAlarmInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_latestAlarmTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestAlarmTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestAlarmTime.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_larkWebHooksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LarkWebHooks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_larkWebHooks.c_str(), allocator).Move(), allocator);
    }

    if (m_dingDingWebHooksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DingDingWebHooks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dingDingWebHooks.c_str(), allocator).Move(), allocator);
    }

    if (m_businessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_businessType, allocator);
    }

    if (m_alarmMessageRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmMessageRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmMessageRule.c_str(), allocator).Move(), allocator);
    }

    if (m_reportTargetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportTarget";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reportTarget, allocator);
    }

}


string TaskAlarmInfo::GetTaskId() const
{
    return m_taskId;
}

void TaskAlarmInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TaskAlarmInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TaskAlarmInfo::GetRegularName() const
{
    return m_regularName;
}

void TaskAlarmInfo::SetRegularName(const string& _regularName)
{
    m_regularName = _regularName;
    m_regularNameHasBeenSet = true;
}

bool TaskAlarmInfo::RegularNameHasBeenSet() const
{
    return m_regularNameHasBeenSet;
}

uint64_t TaskAlarmInfo::GetRegularStatus() const
{
    return m_regularStatus;
}

void TaskAlarmInfo::SetRegularStatus(const uint64_t& _regularStatus)
{
    m_regularStatus = _regularStatus;
    m_regularStatusHasBeenSet = true;
}

bool TaskAlarmInfo::RegularStatusHasBeenSet() const
{
    return m_regularStatusHasBeenSet;
}

uint64_t TaskAlarmInfo::GetAlarmLevel() const
{
    return m_alarmLevel;
}

void TaskAlarmInfo::SetAlarmLevel(const uint64_t& _alarmLevel)
{
    m_alarmLevel = _alarmLevel;
    m_alarmLevelHasBeenSet = true;
}

bool TaskAlarmInfo::AlarmLevelHasBeenSet() const
{
    return m_alarmLevelHasBeenSet;
}

string TaskAlarmInfo::GetAlarmWay() const
{
    return m_alarmWay;
}

void TaskAlarmInfo::SetAlarmWay(const string& _alarmWay)
{
    m_alarmWay = _alarmWay;
    m_alarmWayHasBeenSet = true;
}

bool TaskAlarmInfo::AlarmWayHasBeenSet() const
{
    return m_alarmWayHasBeenSet;
}

uint64_t TaskAlarmInfo::GetTaskType() const
{
    return m_taskType;
}

void TaskAlarmInfo::SetTaskType(const uint64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool TaskAlarmInfo::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string TaskAlarmInfo::GetId() const
{
    return m_id;
}

void TaskAlarmInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool TaskAlarmInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string TaskAlarmInfo::GetRegularId() const
{
    return m_regularId;
}

void TaskAlarmInfo::SetRegularId(const string& _regularId)
{
    m_regularId = _regularId;
    m_regularIdHasBeenSet = true;
}

bool TaskAlarmInfo::RegularIdHasBeenSet() const
{
    return m_regularIdHasBeenSet;
}

uint64_t TaskAlarmInfo::GetAlarmIndicator() const
{
    return m_alarmIndicator;
}

void TaskAlarmInfo::SetAlarmIndicator(const uint64_t& _alarmIndicator)
{
    m_alarmIndicator = _alarmIndicator;
    m_alarmIndicatorHasBeenSet = true;
}

bool TaskAlarmInfo::AlarmIndicatorHasBeenSet() const
{
    return m_alarmIndicatorHasBeenSet;
}

uint64_t TaskAlarmInfo::GetTriggerType() const
{
    return m_triggerType;
}

void TaskAlarmInfo::SetTriggerType(const uint64_t& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool TaskAlarmInfo::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

uint64_t TaskAlarmInfo::GetEstimatedTime() const
{
    return m_estimatedTime;
}

void TaskAlarmInfo::SetEstimatedTime(const uint64_t& _estimatedTime)
{
    m_estimatedTime = _estimatedTime;
    m_estimatedTimeHasBeenSet = true;
}

bool TaskAlarmInfo::EstimatedTimeHasBeenSet() const
{
    return m_estimatedTimeHasBeenSet;
}

string TaskAlarmInfo::GetAlarmRecipientId() const
{
    return m_alarmRecipientId;
}

void TaskAlarmInfo::SetAlarmRecipientId(const string& _alarmRecipientId)
{
    m_alarmRecipientId = _alarmRecipientId;
    m_alarmRecipientIdHasBeenSet = true;
}

bool TaskAlarmInfo::AlarmRecipientIdHasBeenSet() const
{
    return m_alarmRecipientIdHasBeenSet;
}

string TaskAlarmInfo::GetProjectId() const
{
    return m_projectId;
}

void TaskAlarmInfo::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool TaskAlarmInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string TaskAlarmInfo::GetCreater() const
{
    return m_creater;
}

void TaskAlarmInfo::SetCreater(const string& _creater)
{
    m_creater = _creater;
    m_createrHasBeenSet = true;
}

bool TaskAlarmInfo::CreaterHasBeenSet() const
{
    return m_createrHasBeenSet;
}

string TaskAlarmInfo::GetAlarmRecipientName() const
{
    return m_alarmRecipientName;
}

void TaskAlarmInfo::SetAlarmRecipientName(const string& _alarmRecipientName)
{
    m_alarmRecipientName = _alarmRecipientName;
    m_alarmRecipientNameHasBeenSet = true;
}

bool TaskAlarmInfo::AlarmRecipientNameHasBeenSet() const
{
    return m_alarmRecipientNameHasBeenSet;
}

string TaskAlarmInfo::GetAlarmIndicatorDesc() const
{
    return m_alarmIndicatorDesc;
}

void TaskAlarmInfo::SetAlarmIndicatorDesc(const string& _alarmIndicatorDesc)
{
    m_alarmIndicatorDesc = _alarmIndicatorDesc;
    m_alarmIndicatorDescHasBeenSet = true;
}

bool TaskAlarmInfo::AlarmIndicatorDescHasBeenSet() const
{
    return m_alarmIndicatorDescHasBeenSet;
}

uint64_t TaskAlarmInfo::GetOperator() const
{
    return m_operator;
}

void TaskAlarmInfo::SetOperator(const uint64_t& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool TaskAlarmInfo::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string TaskAlarmInfo::GetNodeId() const
{
    return m_nodeId;
}

void TaskAlarmInfo::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool TaskAlarmInfo::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string TaskAlarmInfo::GetNodeName() const
{
    return m_nodeName;
}

void TaskAlarmInfo::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool TaskAlarmInfo::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

vector<AlarmIndicatorInfo> TaskAlarmInfo::GetAlarmIndicatorInfos() const
{
    return m_alarmIndicatorInfos;
}

void TaskAlarmInfo::SetAlarmIndicatorInfos(const vector<AlarmIndicatorInfo>& _alarmIndicatorInfos)
{
    m_alarmIndicatorInfos = _alarmIndicatorInfos;
    m_alarmIndicatorInfosHasBeenSet = true;
}

bool TaskAlarmInfo::AlarmIndicatorInfosHasBeenSet() const
{
    return m_alarmIndicatorInfosHasBeenSet;
}

uint64_t TaskAlarmInfo::GetAlarmRecipientType() const
{
    return m_alarmRecipientType;
}

void TaskAlarmInfo::SetAlarmRecipientType(const uint64_t& _alarmRecipientType)
{
    m_alarmRecipientType = _alarmRecipientType;
    m_alarmRecipientTypeHasBeenSet = true;
}

bool TaskAlarmInfo::AlarmRecipientTypeHasBeenSet() const
{
    return m_alarmRecipientTypeHasBeenSet;
}

vector<QuietPeriod> TaskAlarmInfo::GetQuietPeriods() const
{
    return m_quietPeriods;
}

void TaskAlarmInfo::SetQuietPeriods(const vector<QuietPeriod>& _quietPeriods)
{
    m_quietPeriods = _quietPeriods;
    m_quietPeriodsHasBeenSet = true;
}

bool TaskAlarmInfo::QuietPeriodsHasBeenSet() const
{
    return m_quietPeriodsHasBeenSet;
}

string TaskAlarmInfo::GetWeComHook() const
{
    return m_weComHook;
}

void TaskAlarmInfo::SetWeComHook(const string& _weComHook)
{
    m_weComHook = _weComHook;
    m_weComHookHasBeenSet = true;
}

bool TaskAlarmInfo::WeComHookHasBeenSet() const
{
    return m_weComHookHasBeenSet;
}

string TaskAlarmInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void TaskAlarmInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TaskAlarmInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string TaskAlarmInfo::GetOperatorUin() const
{
    return m_operatorUin;
}

void TaskAlarmInfo::SetOperatorUin(const string& _operatorUin)
{
    m_operatorUin = _operatorUin;
    m_operatorUinHasBeenSet = true;
}

bool TaskAlarmInfo::OperatorUinHasBeenSet() const
{
    return m_operatorUinHasBeenSet;
}

int64_t TaskAlarmInfo::GetTaskCount() const
{
    return m_taskCount;
}

void TaskAlarmInfo::SetTaskCount(const int64_t& _taskCount)
{
    m_taskCount = _taskCount;
    m_taskCountHasBeenSet = true;
}

bool TaskAlarmInfo::TaskCountHasBeenSet() const
{
    return m_taskCountHasBeenSet;
}

int64_t TaskAlarmInfo::GetMonitorType() const
{
    return m_monitorType;
}

void TaskAlarmInfo::SetMonitorType(const int64_t& _monitorType)
{
    m_monitorType = _monitorType;
    m_monitorTypeHasBeenSet = true;
}

bool TaskAlarmInfo::MonitorTypeHasBeenSet() const
{
    return m_monitorTypeHasBeenSet;
}

vector<string> TaskAlarmInfo::GetMonitorObjectIds() const
{
    return m_monitorObjectIds;
}

void TaskAlarmInfo::SetMonitorObjectIds(const vector<string>& _monitorObjectIds)
{
    m_monitorObjectIds = _monitorObjectIds;
    m_monitorObjectIdsHasBeenSet = true;
}

bool TaskAlarmInfo::MonitorObjectIdsHasBeenSet() const
{
    return m_monitorObjectIdsHasBeenSet;
}

string TaskAlarmInfo::GetLatestAlarmInstanceId() const
{
    return m_latestAlarmInstanceId;
}

void TaskAlarmInfo::SetLatestAlarmInstanceId(const string& _latestAlarmInstanceId)
{
    m_latestAlarmInstanceId = _latestAlarmInstanceId;
    m_latestAlarmInstanceIdHasBeenSet = true;
}

bool TaskAlarmInfo::LatestAlarmInstanceIdHasBeenSet() const
{
    return m_latestAlarmInstanceIdHasBeenSet;
}

string TaskAlarmInfo::GetLatestAlarmTime() const
{
    return m_latestAlarmTime;
}

void TaskAlarmInfo::SetLatestAlarmTime(const string& _latestAlarmTime)
{
    m_latestAlarmTime = _latestAlarmTime;
    m_latestAlarmTimeHasBeenSet = true;
}

bool TaskAlarmInfo::LatestAlarmTimeHasBeenSet() const
{
    return m_latestAlarmTimeHasBeenSet;
}

string TaskAlarmInfo::GetDescription() const
{
    return m_description;
}

void TaskAlarmInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool TaskAlarmInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string TaskAlarmInfo::GetLarkWebHooks() const
{
    return m_larkWebHooks;
}

void TaskAlarmInfo::SetLarkWebHooks(const string& _larkWebHooks)
{
    m_larkWebHooks = _larkWebHooks;
    m_larkWebHooksHasBeenSet = true;
}

bool TaskAlarmInfo::LarkWebHooksHasBeenSet() const
{
    return m_larkWebHooksHasBeenSet;
}

string TaskAlarmInfo::GetDingDingWebHooks() const
{
    return m_dingDingWebHooks;
}

void TaskAlarmInfo::SetDingDingWebHooks(const string& _dingDingWebHooks)
{
    m_dingDingWebHooks = _dingDingWebHooks;
    m_dingDingWebHooksHasBeenSet = true;
}

bool TaskAlarmInfo::DingDingWebHooksHasBeenSet() const
{
    return m_dingDingWebHooksHasBeenSet;
}

int64_t TaskAlarmInfo::GetBusinessType() const
{
    return m_businessType;
}

void TaskAlarmInfo::SetBusinessType(const int64_t& _businessType)
{
    m_businessType = _businessType;
    m_businessTypeHasBeenSet = true;
}

bool TaskAlarmInfo::BusinessTypeHasBeenSet() const
{
    return m_businessTypeHasBeenSet;
}

string TaskAlarmInfo::GetAlarmMessageRule() const
{
    return m_alarmMessageRule;
}

void TaskAlarmInfo::SetAlarmMessageRule(const string& _alarmMessageRule)
{
    m_alarmMessageRule = _alarmMessageRule;
    m_alarmMessageRuleHasBeenSet = true;
}

bool TaskAlarmInfo::AlarmMessageRuleHasBeenSet() const
{
    return m_alarmMessageRuleHasBeenSet;
}

int64_t TaskAlarmInfo::GetReportTarget() const
{
    return m_reportTarget;
}

void TaskAlarmInfo::SetReportTarget(const int64_t& _reportTarget)
{
    m_reportTarget = _reportTarget;
    m_reportTargetHasBeenSet = true;
}

bool TaskAlarmInfo::ReportTargetHasBeenSet() const
{
    return m_reportTargetHasBeenSet;
}

