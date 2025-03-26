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

#include <tencentcloud/monitor/v20180724/model/AlarmPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

AlarmPolicy::AlarmPolicy() :
    m_policyIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_monitorTypeHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_useSumHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_conditionTemplateIdHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_eventConditionHasBeenSet(false),
    m_noticeIdsHasBeenSet(false),
    m_noticesHasBeenSet(false),
    m_triggerTasksHasBeenSet(false),
    m_conditionsTempHasBeenSet(false),
    m_lastEditUinHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_insertTimeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_namespaceShowNameHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_canSetDefaultHasBeenSet(false),
    m_instanceGroupIdHasBeenSet(false),
    m_instanceSumHasBeenSet(false),
    m_instanceGroupNameHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_originIdHasBeenSet(false),
    m_tagInstancesHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_groupByHasBeenSet(false),
    m_filterDimensionsParamHasBeenSet(false),
    m_isOneClickHasBeenSet(false),
    m_oneClickStatusHasBeenSet(false),
    m_advancedMetricNumberHasBeenSet(false),
    m_isBindAllHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_isSupportAlarmTagHasBeenSet(false),
    m_tagOperationHasBeenSet(false),
    m_noticeTmplBindInfosHasBeenSet(false),
    m_hierarchicalNoticesHasBeenSet(false),
    m_noticeContentTmplBindInfosHasBeenSet(false),
    m_predefinedConfigIDHasBeenSet(false)
{
}

CoreInternalOutcome AlarmPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.PolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = string(value["PolicyId"].GetString());
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(value["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("MonitorType") && !value["MonitorType"].IsNull())
    {
        if (!value["MonitorType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.MonitorType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_monitorType = string(value["MonitorType"].GetString());
        m_monitorTypeHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.Enable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetInt64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("UseSum") && !value["UseSum"].IsNull())
    {
        if (!value["UseSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.UseSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_useSum = value["UseSum"].GetInt64();
        m_useSumHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("ConditionTemplateId") && !value["ConditionTemplateId"].IsNull())
    {
        if (!value["ConditionTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.ConditionTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_conditionTemplateId = string(value["ConditionTemplateId"].GetString());
        m_conditionTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("Condition") && !value["Condition"].IsNull())
    {
        if (!value["Condition"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.Condition` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_condition.Deserialize(value["Condition"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_conditionHasBeenSet = true;
    }

    if (value.HasMember("EventCondition") && !value["EventCondition"].IsNull())
    {
        if (!value["EventCondition"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.EventCondition` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eventCondition.Deserialize(value["EventCondition"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eventConditionHasBeenSet = true;
    }

    if (value.HasMember("NoticeIds") && !value["NoticeIds"].IsNull())
    {
        if (!value["NoticeIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.NoticeIds` is not array type"));

        const rapidjson::Value &tmpValue = value["NoticeIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_noticeIds.push_back((*itr).GetString());
        }
        m_noticeIdsHasBeenSet = true;
    }

    if (value.HasMember("Notices") && !value["Notices"].IsNull())
    {
        if (!value["Notices"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.Notices` is not array type"));

        const rapidjson::Value &tmpValue = value["Notices"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AlarmNotice item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_notices.push_back(item);
        }
        m_noticesHasBeenSet = true;
    }

    if (value.HasMember("TriggerTasks") && !value["TriggerTasks"].IsNull())
    {
        if (!value["TriggerTasks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.TriggerTasks` is not array type"));

        const rapidjson::Value &tmpValue = value["TriggerTasks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AlarmPolicyTriggerTask item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_triggerTasks.push_back(item);
        }
        m_triggerTasksHasBeenSet = true;
    }

    if (value.HasMember("ConditionsTemp") && !value["ConditionsTemp"].IsNull())
    {
        if (!value["ConditionsTemp"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.ConditionsTemp` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_conditionsTemp.Deserialize(value["ConditionsTemp"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_conditionsTempHasBeenSet = true;
    }

    if (value.HasMember("LastEditUin") && !value["LastEditUin"].IsNull())
    {
        if (!value["LastEditUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.LastEditUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastEditUin = string(value["LastEditUin"].GetString());
        m_lastEditUinHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("InsertTime") && !value["InsertTime"].IsNull())
    {
        if (!value["InsertTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.InsertTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_insertTime = value["InsertTime"].GetInt64();
        m_insertTimeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.Region` is not array type"));

        const rapidjson::Value &tmpValue = value["Region"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_region.push_back((*itr).GetString());
        }
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("NamespaceShowName") && !value["NamespaceShowName"].IsNull())
    {
        if (!value["NamespaceShowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.NamespaceShowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceShowName = string(value["NamespaceShowName"].GetString());
        m_namespaceShowNameHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.IsDefault` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetInt64();
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("CanSetDefault") && !value["CanSetDefault"].IsNull())
    {
        if (!value["CanSetDefault"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.CanSetDefault` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_canSetDefault = value["CanSetDefault"].GetInt64();
        m_canSetDefaultHasBeenSet = true;
    }

    if (value.HasMember("InstanceGroupId") && !value["InstanceGroupId"].IsNull())
    {
        if (!value["InstanceGroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.InstanceGroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceGroupId = value["InstanceGroupId"].GetInt64();
        m_instanceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceSum") && !value["InstanceSum"].IsNull())
    {
        if (!value["InstanceSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.InstanceSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceSum = value["InstanceSum"].GetInt64();
        m_instanceSumHasBeenSet = true;
    }

    if (value.HasMember("InstanceGroupName") && !value["InstanceGroupName"].IsNull())
    {
        if (!value["InstanceGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.InstanceGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceGroupName = string(value["InstanceGroupName"].GetString());
        m_instanceGroupNameHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("OriginId") && !value["OriginId"].IsNull())
    {
        if (!value["OriginId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.OriginId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originId = string(value["OriginId"].GetString());
        m_originIdHasBeenSet = true;
    }

    if (value.HasMember("TagInstances") && !value["TagInstances"].IsNull())
    {
        if (!value["TagInstances"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.TagInstances` is not array type"));

        const rapidjson::Value &tmpValue = value["TagInstances"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInstance item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagInstances.push_back(item);
        }
        m_tagInstancesHasBeenSet = true;
    }

    if (value.HasMember("Filter") && !value["Filter"].IsNull())
    {
        if (!value["Filter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.Filter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_filter.Deserialize(value["Filter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_filterHasBeenSet = true;
    }

    if (value.HasMember("GroupBy") && !value["GroupBy"].IsNull())
    {
        if (!value["GroupBy"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.GroupBy` is not array type"));

        const rapidjson::Value &tmpValue = value["GroupBy"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AlarmGroupByItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_groupBy.push_back(item);
        }
        m_groupByHasBeenSet = true;
    }

    if (value.HasMember("FilterDimensionsParam") && !value["FilterDimensionsParam"].IsNull())
    {
        if (!value["FilterDimensionsParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.FilterDimensionsParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filterDimensionsParam = string(value["FilterDimensionsParam"].GetString());
        m_filterDimensionsParamHasBeenSet = true;
    }

    if (value.HasMember("IsOneClick") && !value["IsOneClick"].IsNull())
    {
        if (!value["IsOneClick"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.IsOneClick` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isOneClick = value["IsOneClick"].GetInt64();
        m_isOneClickHasBeenSet = true;
    }

    if (value.HasMember("OneClickStatus") && !value["OneClickStatus"].IsNull())
    {
        if (!value["OneClickStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.OneClickStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_oneClickStatus = value["OneClickStatus"].GetInt64();
        m_oneClickStatusHasBeenSet = true;
    }

    if (value.HasMember("AdvancedMetricNumber") && !value["AdvancedMetricNumber"].IsNull())
    {
        if (!value["AdvancedMetricNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.AdvancedMetricNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_advancedMetricNumber = value["AdvancedMetricNumber"].GetInt64();
        m_advancedMetricNumberHasBeenSet = true;
    }

    if (value.HasMember("IsBindAll") && !value["IsBindAll"].IsNull())
    {
        if (!value["IsBindAll"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.IsBindAll` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isBindAll = value["IsBindAll"].GetInt64();
        m_isBindAllHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.Tags` is not array type"));

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

    if (value.HasMember("IsSupportAlarmTag") && !value["IsSupportAlarmTag"].IsNull())
    {
        if (!value["IsSupportAlarmTag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.IsSupportAlarmTag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportAlarmTag = value["IsSupportAlarmTag"].GetInt64();
        m_isSupportAlarmTagHasBeenSet = true;
    }

    if (value.HasMember("TagOperation") && !value["TagOperation"].IsNull())
    {
        if (!value["TagOperation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.TagOperation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagOperation = string(value["TagOperation"].GetString());
        m_tagOperationHasBeenSet = true;
    }

    if (value.HasMember("NoticeTmplBindInfos") && !value["NoticeTmplBindInfos"].IsNull())
    {
        if (!value["NoticeTmplBindInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.NoticeTmplBindInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["NoticeTmplBindInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NoticeContentTmplBindInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_noticeTmplBindInfos.push_back(item);
        }
        m_noticeTmplBindInfosHasBeenSet = true;
    }

    if (value.HasMember("HierarchicalNotices") && !value["HierarchicalNotices"].IsNull())
    {
        if (!value["HierarchicalNotices"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.HierarchicalNotices` is not array type"));

        const rapidjson::Value &tmpValue = value["HierarchicalNotices"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AlarmHierarchicalNotice item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_hierarchicalNotices.push_back(item);
        }
        m_hierarchicalNoticesHasBeenSet = true;
    }

    if (value.HasMember("NoticeContentTmplBindInfos") && !value["NoticeContentTmplBindInfos"].IsNull())
    {
        if (!value["NoticeContentTmplBindInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.NoticeContentTmplBindInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["NoticeContentTmplBindInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NoticeContentTmplBindInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_noticeContentTmplBindInfos.push_back(item);
        }
        m_noticeContentTmplBindInfosHasBeenSet = true;
    }

    if (value.HasMember("PredefinedConfigID") && !value["PredefinedConfigID"].IsNull())
    {
        if (!value["PredefinedConfigID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.PredefinedConfigID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_predefinedConfigID = string(value["PredefinedConfigID"].GetString());
        m_predefinedConfigIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyId.c_str(), allocator).Move(), allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_monitorType.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_useSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useSum, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_conditionTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConditionTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_conditionTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_condition.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_eventConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eventCondition.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_noticeIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_noticeIds.begin(); itr != m_noticeIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_noticesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Notices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_notices.begin(); itr != m_notices.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_triggerTasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerTasks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_triggerTasks.begin(); itr != m_triggerTasks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_conditionsTempHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConditionsTemp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_conditionsTemp.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lastEditUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastEditUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastEditUin.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_insertTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsertTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_insertTime, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_region.begin(); itr != m_region.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_namespaceShowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceShowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceShowName.c_str(), allocator).Move(), allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

    if (m_canSetDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanSetDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canSetDefault, allocator);
    }

    if (m_instanceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceGroupId, allocator);
    }

    if (m_instanceSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceSum, allocator);
    }

    if (m_instanceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_originIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagInstances.begin(); itr != m_tagInstances.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_filter.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_groupByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_groupBy.begin(); itr != m_groupBy.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_filterDimensionsParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterDimensionsParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filterDimensionsParam.c_str(), allocator).Move(), allocator);
    }

    if (m_isOneClickHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOneClick";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isOneClick, allocator);
    }

    if (m_oneClickStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OneClickStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_oneClickStatus, allocator);
    }

    if (m_advancedMetricNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedMetricNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_advancedMetricNumber, allocator);
    }

    if (m_isBindAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsBindAll";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isBindAll, allocator);
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

    if (m_isSupportAlarmTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportAlarmTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportAlarmTag, allocator);
    }

    if (m_tagOperationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagOperation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagOperation.c_str(), allocator).Move(), allocator);
    }

    if (m_noticeTmplBindInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeTmplBindInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_noticeTmplBindInfos.begin(); itr != m_noticeTmplBindInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_hierarchicalNoticesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HierarchicalNotices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_hierarchicalNotices.begin(); itr != m_hierarchicalNotices.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_noticeContentTmplBindInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeContentTmplBindInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_noticeContentTmplBindInfos.begin(); itr != m_noticeContentTmplBindInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_predefinedConfigIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PredefinedConfigID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_predefinedConfigID.c_str(), allocator).Move(), allocator);
    }

}


string AlarmPolicy::GetPolicyId() const
{
    return m_policyId;
}

void AlarmPolicy::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool AlarmPolicy::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string AlarmPolicy::GetPolicyName() const
{
    return m_policyName;
}

void AlarmPolicy::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool AlarmPolicy::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

string AlarmPolicy::GetRemark() const
{
    return m_remark;
}

void AlarmPolicy::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool AlarmPolicy::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string AlarmPolicy::GetMonitorType() const
{
    return m_monitorType;
}

void AlarmPolicy::SetMonitorType(const string& _monitorType)
{
    m_monitorType = _monitorType;
    m_monitorTypeHasBeenSet = true;
}

bool AlarmPolicy::MonitorTypeHasBeenSet() const
{
    return m_monitorTypeHasBeenSet;
}

int64_t AlarmPolicy::GetEnable() const
{
    return m_enable;
}

void AlarmPolicy::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool AlarmPolicy::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

int64_t AlarmPolicy::GetUseSum() const
{
    return m_useSum;
}

void AlarmPolicy::SetUseSum(const int64_t& _useSum)
{
    m_useSum = _useSum;
    m_useSumHasBeenSet = true;
}

bool AlarmPolicy::UseSumHasBeenSet() const
{
    return m_useSumHasBeenSet;
}

int64_t AlarmPolicy::GetProjectId() const
{
    return m_projectId;
}

void AlarmPolicy::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool AlarmPolicy::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string AlarmPolicy::GetProjectName() const
{
    return m_projectName;
}

void AlarmPolicy::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool AlarmPolicy::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string AlarmPolicy::GetNamespace() const
{
    return m_namespace;
}

void AlarmPolicy::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool AlarmPolicy::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string AlarmPolicy::GetConditionTemplateId() const
{
    return m_conditionTemplateId;
}

void AlarmPolicy::SetConditionTemplateId(const string& _conditionTemplateId)
{
    m_conditionTemplateId = _conditionTemplateId;
    m_conditionTemplateIdHasBeenSet = true;
}

bool AlarmPolicy::ConditionTemplateIdHasBeenSet() const
{
    return m_conditionTemplateIdHasBeenSet;
}

AlarmPolicyCondition AlarmPolicy::GetCondition() const
{
    return m_condition;
}

void AlarmPolicy::SetCondition(const AlarmPolicyCondition& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool AlarmPolicy::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

AlarmPolicyEventCondition AlarmPolicy::GetEventCondition() const
{
    return m_eventCondition;
}

void AlarmPolicy::SetEventCondition(const AlarmPolicyEventCondition& _eventCondition)
{
    m_eventCondition = _eventCondition;
    m_eventConditionHasBeenSet = true;
}

bool AlarmPolicy::EventConditionHasBeenSet() const
{
    return m_eventConditionHasBeenSet;
}

vector<string> AlarmPolicy::GetNoticeIds() const
{
    return m_noticeIds;
}

void AlarmPolicy::SetNoticeIds(const vector<string>& _noticeIds)
{
    m_noticeIds = _noticeIds;
    m_noticeIdsHasBeenSet = true;
}

bool AlarmPolicy::NoticeIdsHasBeenSet() const
{
    return m_noticeIdsHasBeenSet;
}

vector<AlarmNotice> AlarmPolicy::GetNotices() const
{
    return m_notices;
}

void AlarmPolicy::SetNotices(const vector<AlarmNotice>& _notices)
{
    m_notices = _notices;
    m_noticesHasBeenSet = true;
}

bool AlarmPolicy::NoticesHasBeenSet() const
{
    return m_noticesHasBeenSet;
}

vector<AlarmPolicyTriggerTask> AlarmPolicy::GetTriggerTasks() const
{
    return m_triggerTasks;
}

void AlarmPolicy::SetTriggerTasks(const vector<AlarmPolicyTriggerTask>& _triggerTasks)
{
    m_triggerTasks = _triggerTasks;
    m_triggerTasksHasBeenSet = true;
}

bool AlarmPolicy::TriggerTasksHasBeenSet() const
{
    return m_triggerTasksHasBeenSet;
}

ConditionsTemp AlarmPolicy::GetConditionsTemp() const
{
    return m_conditionsTemp;
}

void AlarmPolicy::SetConditionsTemp(const ConditionsTemp& _conditionsTemp)
{
    m_conditionsTemp = _conditionsTemp;
    m_conditionsTempHasBeenSet = true;
}

bool AlarmPolicy::ConditionsTempHasBeenSet() const
{
    return m_conditionsTempHasBeenSet;
}

string AlarmPolicy::GetLastEditUin() const
{
    return m_lastEditUin;
}

void AlarmPolicy::SetLastEditUin(const string& _lastEditUin)
{
    m_lastEditUin = _lastEditUin;
    m_lastEditUinHasBeenSet = true;
}

bool AlarmPolicy::LastEditUinHasBeenSet() const
{
    return m_lastEditUinHasBeenSet;
}

int64_t AlarmPolicy::GetUpdateTime() const
{
    return m_updateTime;
}

void AlarmPolicy::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AlarmPolicy::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t AlarmPolicy::GetInsertTime() const
{
    return m_insertTime;
}

void AlarmPolicy::SetInsertTime(const int64_t& _insertTime)
{
    m_insertTime = _insertTime;
    m_insertTimeHasBeenSet = true;
}

bool AlarmPolicy::InsertTimeHasBeenSet() const
{
    return m_insertTimeHasBeenSet;
}

vector<string> AlarmPolicy::GetRegion() const
{
    return m_region;
}

void AlarmPolicy::SetRegion(const vector<string>& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool AlarmPolicy::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string AlarmPolicy::GetNamespaceShowName() const
{
    return m_namespaceShowName;
}

void AlarmPolicy::SetNamespaceShowName(const string& _namespaceShowName)
{
    m_namespaceShowName = _namespaceShowName;
    m_namespaceShowNameHasBeenSet = true;
}

bool AlarmPolicy::NamespaceShowNameHasBeenSet() const
{
    return m_namespaceShowNameHasBeenSet;
}

int64_t AlarmPolicy::GetIsDefault() const
{
    return m_isDefault;
}

void AlarmPolicy::SetIsDefault(const int64_t& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool AlarmPolicy::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

int64_t AlarmPolicy::GetCanSetDefault() const
{
    return m_canSetDefault;
}

void AlarmPolicy::SetCanSetDefault(const int64_t& _canSetDefault)
{
    m_canSetDefault = _canSetDefault;
    m_canSetDefaultHasBeenSet = true;
}

bool AlarmPolicy::CanSetDefaultHasBeenSet() const
{
    return m_canSetDefaultHasBeenSet;
}

int64_t AlarmPolicy::GetInstanceGroupId() const
{
    return m_instanceGroupId;
}

void AlarmPolicy::SetInstanceGroupId(const int64_t& _instanceGroupId)
{
    m_instanceGroupId = _instanceGroupId;
    m_instanceGroupIdHasBeenSet = true;
}

bool AlarmPolicy::InstanceGroupIdHasBeenSet() const
{
    return m_instanceGroupIdHasBeenSet;
}

int64_t AlarmPolicy::GetInstanceSum() const
{
    return m_instanceSum;
}

void AlarmPolicy::SetInstanceSum(const int64_t& _instanceSum)
{
    m_instanceSum = _instanceSum;
    m_instanceSumHasBeenSet = true;
}

bool AlarmPolicy::InstanceSumHasBeenSet() const
{
    return m_instanceSumHasBeenSet;
}

string AlarmPolicy::GetInstanceGroupName() const
{
    return m_instanceGroupName;
}

void AlarmPolicy::SetInstanceGroupName(const string& _instanceGroupName)
{
    m_instanceGroupName = _instanceGroupName;
    m_instanceGroupNameHasBeenSet = true;
}

bool AlarmPolicy::InstanceGroupNameHasBeenSet() const
{
    return m_instanceGroupNameHasBeenSet;
}

string AlarmPolicy::GetRuleType() const
{
    return m_ruleType;
}

void AlarmPolicy::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool AlarmPolicy::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

string AlarmPolicy::GetOriginId() const
{
    return m_originId;
}

void AlarmPolicy::SetOriginId(const string& _originId)
{
    m_originId = _originId;
    m_originIdHasBeenSet = true;
}

bool AlarmPolicy::OriginIdHasBeenSet() const
{
    return m_originIdHasBeenSet;
}

vector<TagInstance> AlarmPolicy::GetTagInstances() const
{
    return m_tagInstances;
}

void AlarmPolicy::SetTagInstances(const vector<TagInstance>& _tagInstances)
{
    m_tagInstances = _tagInstances;
    m_tagInstancesHasBeenSet = true;
}

bool AlarmPolicy::TagInstancesHasBeenSet() const
{
    return m_tagInstancesHasBeenSet;
}

AlarmConditionFilter AlarmPolicy::GetFilter() const
{
    return m_filter;
}

void AlarmPolicy::SetFilter(const AlarmConditionFilter& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool AlarmPolicy::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

vector<AlarmGroupByItem> AlarmPolicy::GetGroupBy() const
{
    return m_groupBy;
}

void AlarmPolicy::SetGroupBy(const vector<AlarmGroupByItem>& _groupBy)
{
    m_groupBy = _groupBy;
    m_groupByHasBeenSet = true;
}

bool AlarmPolicy::GroupByHasBeenSet() const
{
    return m_groupByHasBeenSet;
}

string AlarmPolicy::GetFilterDimensionsParam() const
{
    return m_filterDimensionsParam;
}

void AlarmPolicy::SetFilterDimensionsParam(const string& _filterDimensionsParam)
{
    m_filterDimensionsParam = _filterDimensionsParam;
    m_filterDimensionsParamHasBeenSet = true;
}

bool AlarmPolicy::FilterDimensionsParamHasBeenSet() const
{
    return m_filterDimensionsParamHasBeenSet;
}

int64_t AlarmPolicy::GetIsOneClick() const
{
    return m_isOneClick;
}

void AlarmPolicy::SetIsOneClick(const int64_t& _isOneClick)
{
    m_isOneClick = _isOneClick;
    m_isOneClickHasBeenSet = true;
}

bool AlarmPolicy::IsOneClickHasBeenSet() const
{
    return m_isOneClickHasBeenSet;
}

int64_t AlarmPolicy::GetOneClickStatus() const
{
    return m_oneClickStatus;
}

void AlarmPolicy::SetOneClickStatus(const int64_t& _oneClickStatus)
{
    m_oneClickStatus = _oneClickStatus;
    m_oneClickStatusHasBeenSet = true;
}

bool AlarmPolicy::OneClickStatusHasBeenSet() const
{
    return m_oneClickStatusHasBeenSet;
}

int64_t AlarmPolicy::GetAdvancedMetricNumber() const
{
    return m_advancedMetricNumber;
}

void AlarmPolicy::SetAdvancedMetricNumber(const int64_t& _advancedMetricNumber)
{
    m_advancedMetricNumber = _advancedMetricNumber;
    m_advancedMetricNumberHasBeenSet = true;
}

bool AlarmPolicy::AdvancedMetricNumberHasBeenSet() const
{
    return m_advancedMetricNumberHasBeenSet;
}

int64_t AlarmPolicy::GetIsBindAll() const
{
    return m_isBindAll;
}

void AlarmPolicy::SetIsBindAll(const int64_t& _isBindAll)
{
    m_isBindAll = _isBindAll;
    m_isBindAllHasBeenSet = true;
}

bool AlarmPolicy::IsBindAllHasBeenSet() const
{
    return m_isBindAllHasBeenSet;
}

vector<Tag> AlarmPolicy::GetTags() const
{
    return m_tags;
}

void AlarmPolicy::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool AlarmPolicy::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t AlarmPolicy::GetIsSupportAlarmTag() const
{
    return m_isSupportAlarmTag;
}

void AlarmPolicy::SetIsSupportAlarmTag(const int64_t& _isSupportAlarmTag)
{
    m_isSupportAlarmTag = _isSupportAlarmTag;
    m_isSupportAlarmTagHasBeenSet = true;
}

bool AlarmPolicy::IsSupportAlarmTagHasBeenSet() const
{
    return m_isSupportAlarmTagHasBeenSet;
}

string AlarmPolicy::GetTagOperation() const
{
    return m_tagOperation;
}

void AlarmPolicy::SetTagOperation(const string& _tagOperation)
{
    m_tagOperation = _tagOperation;
    m_tagOperationHasBeenSet = true;
}

bool AlarmPolicy::TagOperationHasBeenSet() const
{
    return m_tagOperationHasBeenSet;
}

vector<NoticeContentTmplBindInfo> AlarmPolicy::GetNoticeTmplBindInfos() const
{
    return m_noticeTmplBindInfos;
}

void AlarmPolicy::SetNoticeTmplBindInfos(const vector<NoticeContentTmplBindInfo>& _noticeTmplBindInfos)
{
    m_noticeTmplBindInfos = _noticeTmplBindInfos;
    m_noticeTmplBindInfosHasBeenSet = true;
}

bool AlarmPolicy::NoticeTmplBindInfosHasBeenSet() const
{
    return m_noticeTmplBindInfosHasBeenSet;
}

vector<AlarmHierarchicalNotice> AlarmPolicy::GetHierarchicalNotices() const
{
    return m_hierarchicalNotices;
}

void AlarmPolicy::SetHierarchicalNotices(const vector<AlarmHierarchicalNotice>& _hierarchicalNotices)
{
    m_hierarchicalNotices = _hierarchicalNotices;
    m_hierarchicalNoticesHasBeenSet = true;
}

bool AlarmPolicy::HierarchicalNoticesHasBeenSet() const
{
    return m_hierarchicalNoticesHasBeenSet;
}

vector<NoticeContentTmplBindInfo> AlarmPolicy::GetNoticeContentTmplBindInfos() const
{
    return m_noticeContentTmplBindInfos;
}

void AlarmPolicy::SetNoticeContentTmplBindInfos(const vector<NoticeContentTmplBindInfo>& _noticeContentTmplBindInfos)
{
    m_noticeContentTmplBindInfos = _noticeContentTmplBindInfos;
    m_noticeContentTmplBindInfosHasBeenSet = true;
}

bool AlarmPolicy::NoticeContentTmplBindInfosHasBeenSet() const
{
    return m_noticeContentTmplBindInfosHasBeenSet;
}

string AlarmPolicy::GetPredefinedConfigID() const
{
    return m_predefinedConfigID;
}

void AlarmPolicy::SetPredefinedConfigID(const string& _predefinedConfigID)
{
    m_predefinedConfigID = _predefinedConfigID;
    m_predefinedConfigIDHasBeenSet = true;
}

bool AlarmPolicy::PredefinedConfigIDHasBeenSet() const
{
    return m_predefinedConfigIDHasBeenSet;
}

