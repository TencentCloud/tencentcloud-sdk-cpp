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

#include <tencentcloud/monitor/v20180724/model/AlarmHistory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

AlarmHistory::AlarmHistory() :
    m_alarmIdHasBeenSet(false),
    m_monitorTypeHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_alarmObjectHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_firstOccurTimeHasBeenSet(false),
    m_lastOccurTimeHasBeenSet(false),
    m_alarmStatusHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_vPCHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_instanceGroupHasBeenSet(false),
    m_receiverUidsHasBeenSet(false),
    m_receiverGroupsHasBeenSet(false),
    m_noticeWaysHasBeenSet(false),
    m_originIdHasBeenSet(false),
    m_alarmTypeHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_policyExistsHasBeenSet(false),
    m_metricsInfoHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_alarmLevelHasBeenSet(false),
    m_shieldFlagHasBeenSet(false),
    m_alarmShieldingTypeHasBeenSet(false),
    m_alarmShieldingTimeHasBeenSet(false),
    m_alarmShieldingShowTypeHasBeenSet(false),
    m_alarmShieldingShowTimeHasBeenSet(false),
    m_alarmShieldReasonHasBeenSet(false),
    m_internalDimensionsHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_policyPermissionsHasBeenSet(false)
{
}

CoreInternalOutcome AlarmHistory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlarmId") && !value["AlarmId"].IsNull())
    {
        if (!value["AlarmId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHistory.AlarmId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmId = string(value["AlarmId"].GetString());
        m_alarmIdHasBeenSet = true;
    }

    if (value.HasMember("MonitorType") && !value["MonitorType"].IsNull())
    {
        if (!value["MonitorType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHistory.MonitorType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_monitorType = string(value["MonitorType"].GetString());
        m_monitorTypeHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHistory.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("AlarmObject") && !value["AlarmObject"].IsNull())
    {
        if (!value["AlarmObject"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHistory.AlarmObject` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmObject = string(value["AlarmObject"].GetString());
        m_alarmObjectHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHistory.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("FirstOccurTime") && !value["FirstOccurTime"].IsNull())
    {
        if (!value["FirstOccurTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHistory.FirstOccurTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_firstOccurTime = value["FirstOccurTime"].GetInt64();
        m_firstOccurTimeHasBeenSet = true;
    }

    if (value.HasMember("LastOccurTime") && !value["LastOccurTime"].IsNull())
    {
        if (!value["LastOccurTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHistory.LastOccurTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastOccurTime = value["LastOccurTime"].GetInt64();
        m_lastOccurTimeHasBeenSet = true;
    }

    if (value.HasMember("AlarmStatus") && !value["AlarmStatus"].IsNull())
    {
        if (!value["AlarmStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHistory.AlarmStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmStatus = string(value["AlarmStatus"].GetString());
        m_alarmStatusHasBeenSet = true;
    }

    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHistory.PolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = string(value["PolicyId"].GetString());
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHistory.PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(value["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("VPC") && !value["VPC"].IsNull())
    {
        if (!value["VPC"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHistory.VPC` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vPC = string(value["VPC"].GetString());
        m_vPCHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHistory.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHistory.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceGroup") && !value["InstanceGroup"].IsNull())
    {
        if (!value["InstanceGroup"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmHistory.InstanceGroup` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceGroup"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceGroups item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceGroup.push_back(item);
        }
        m_instanceGroupHasBeenSet = true;
    }

    if (value.HasMember("ReceiverUids") && !value["ReceiverUids"].IsNull())
    {
        if (!value["ReceiverUids"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmHistory.ReceiverUids` is not array type"));

        const rapidjson::Value &tmpValue = value["ReceiverUids"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_receiverUids.push_back((*itr).GetInt64());
        }
        m_receiverUidsHasBeenSet = true;
    }

    if (value.HasMember("ReceiverGroups") && !value["ReceiverGroups"].IsNull())
    {
        if (!value["ReceiverGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmHistory.ReceiverGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["ReceiverGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_receiverGroups.push_back((*itr).GetInt64());
        }
        m_receiverGroupsHasBeenSet = true;
    }

    if (value.HasMember("NoticeWays") && !value["NoticeWays"].IsNull())
    {
        if (!value["NoticeWays"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmHistory.NoticeWays` is not array type"));

        const rapidjson::Value &tmpValue = value["NoticeWays"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_noticeWays.push_back((*itr).GetString());
        }
        m_noticeWaysHasBeenSet = true;
    }

    if (value.HasMember("OriginId") && !value["OriginId"].IsNull())
    {
        if (!value["OriginId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHistory.OriginId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originId = string(value["OriginId"].GetString());
        m_originIdHasBeenSet = true;
    }

    if (value.HasMember("AlarmType") && !value["AlarmType"].IsNull())
    {
        if (!value["AlarmType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHistory.AlarmType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmType = string(value["AlarmType"].GetString());
        m_alarmTypeHasBeenSet = true;
    }

    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHistory.EventId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = value["EventId"].GetInt64();
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHistory.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("PolicyExists") && !value["PolicyExists"].IsNull())
    {
        if (!value["PolicyExists"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHistory.PolicyExists` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyExists = value["PolicyExists"].GetInt64();
        m_policyExistsHasBeenSet = true;
    }

    if (value.HasMember("MetricsInfo") && !value["MetricsInfo"].IsNull())
    {
        if (!value["MetricsInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmHistory.MetricsInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["MetricsInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AlarmHistoryMetric item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_metricsInfo.push_back(item);
        }
        m_metricsInfoHasBeenSet = true;
    }

    if (value.HasMember("Dimensions") && !value["Dimensions"].IsNull())
    {
        if (!value["Dimensions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHistory.Dimensions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dimensions = string(value["Dimensions"].GetString());
        m_dimensionsHasBeenSet = true;
    }

    if (value.HasMember("AlarmLevel") && !value["AlarmLevel"].IsNull())
    {
        if (!value["AlarmLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHistory.AlarmLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmLevel = string(value["AlarmLevel"].GetString());
        m_alarmLevelHasBeenSet = true;
    }

    if (value.HasMember("ShieldFlag") && !value["ShieldFlag"].IsNull())
    {
        if (!value["ShieldFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHistory.ShieldFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shieldFlag = value["ShieldFlag"].GetInt64();
        m_shieldFlagHasBeenSet = true;
    }

    if (value.HasMember("AlarmShieldingType") && !value["AlarmShieldingType"].IsNull())
    {
        if (!value["AlarmShieldingType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHistory.AlarmShieldingType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmShieldingType = string(value["AlarmShieldingType"].GetString());
        m_alarmShieldingTypeHasBeenSet = true;
    }

    if (value.HasMember("AlarmShieldingTime") && !value["AlarmShieldingTime"].IsNull())
    {
        if (!value["AlarmShieldingTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHistory.AlarmShieldingTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmShieldingTime = string(value["AlarmShieldingTime"].GetString());
        m_alarmShieldingTimeHasBeenSet = true;
    }

    if (value.HasMember("AlarmShieldingShowType") && !value["AlarmShieldingShowType"].IsNull())
    {
        if (!value["AlarmShieldingShowType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHistory.AlarmShieldingShowType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmShieldingShowType = string(value["AlarmShieldingShowType"].GetString());
        m_alarmShieldingShowTypeHasBeenSet = true;
    }

    if (value.HasMember("AlarmShieldingShowTime") && !value["AlarmShieldingShowTime"].IsNull())
    {
        if (!value["AlarmShieldingShowTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHistory.AlarmShieldingShowTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmShieldingShowTime = string(value["AlarmShieldingShowTime"].GetString());
        m_alarmShieldingShowTimeHasBeenSet = true;
    }

    if (value.HasMember("AlarmShieldReason") && !value["AlarmShieldReason"].IsNull())
    {
        if (!value["AlarmShieldReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHistory.AlarmShieldReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmShieldReason = string(value["AlarmShieldReason"].GetString());
        m_alarmShieldReasonHasBeenSet = true;
    }

    if (value.HasMember("InternalDimensions") && !value["InternalDimensions"].IsNull())
    {
        if (!value["InternalDimensions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHistory.InternalDimensions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internalDimensions = string(value["InternalDimensions"].GetString());
        m_internalDimensionsHasBeenSet = true;
    }

    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHistory.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("PolicyPermissions") && !value["PolicyPermissions"].IsNull())
    {
        if (!value["PolicyPermissions"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHistory.PolicyPermissions` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_policyPermissions = value["PolicyPermissions"].GetUint64();
        m_policyPermissionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmHistory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_alarmIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmId.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_monitorType.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmObjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmObject";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmObject.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_firstOccurTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstOccurTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_firstOccurTime, allocator);
    }

    if (m_lastOccurTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastOccurTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastOccurTime, allocator);
    }

    if (m_alarmStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmStatus.c_str(), allocator).Move(), allocator);
    }

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

    if (m_vPCHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VPC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vPC.c_str(), allocator).Move(), allocator);
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

    if (m_instanceGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceGroup.begin(); itr != m_instanceGroup.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_receiverUidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverUids";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_receiverUids.begin(); itr != m_receiverUids.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_receiverGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_receiverGroups.begin(); itr != m_receiverGroups.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_noticeWaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeWays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_noticeWays.begin(); itr != m_noticeWays.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_originIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originId.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmType.c_str(), allocator).Move(), allocator);
    }

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventId, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_policyExistsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyExists";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyExists, allocator);
    }

    if (m_metricsInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricsInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metricsInfo.begin(); itr != m_metricsInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dimensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dimensions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dimensions.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_shieldFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShieldFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shieldFlag, allocator);
    }

    if (m_alarmShieldingTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmShieldingType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmShieldingType.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmShieldingTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmShieldingTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmShieldingTime.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmShieldingShowTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmShieldingShowType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmShieldingShowType.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmShieldingShowTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmShieldingShowTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmShieldingShowTime.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmShieldReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmShieldReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmShieldReason.c_str(), allocator).Move(), allocator);
    }

    if (m_internalDimensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternalDimensions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internalDimensions.c_str(), allocator).Move(), allocator);
    }

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_policyPermissionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyPermissions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyPermissions, allocator);
    }

}


string AlarmHistory::GetAlarmId() const
{
    return m_alarmId;
}

void AlarmHistory::SetAlarmId(const string& _alarmId)
{
    m_alarmId = _alarmId;
    m_alarmIdHasBeenSet = true;
}

bool AlarmHistory::AlarmIdHasBeenSet() const
{
    return m_alarmIdHasBeenSet;
}

string AlarmHistory::GetMonitorType() const
{
    return m_monitorType;
}

void AlarmHistory::SetMonitorType(const string& _monitorType)
{
    m_monitorType = _monitorType;
    m_monitorTypeHasBeenSet = true;
}

bool AlarmHistory::MonitorTypeHasBeenSet() const
{
    return m_monitorTypeHasBeenSet;
}

string AlarmHistory::GetNamespace() const
{
    return m_namespace;
}

void AlarmHistory::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool AlarmHistory::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string AlarmHistory::GetAlarmObject() const
{
    return m_alarmObject;
}

void AlarmHistory::SetAlarmObject(const string& _alarmObject)
{
    m_alarmObject = _alarmObject;
    m_alarmObjectHasBeenSet = true;
}

bool AlarmHistory::AlarmObjectHasBeenSet() const
{
    return m_alarmObjectHasBeenSet;
}

string AlarmHistory::GetContent() const
{
    return m_content;
}

void AlarmHistory::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool AlarmHistory::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

int64_t AlarmHistory::GetFirstOccurTime() const
{
    return m_firstOccurTime;
}

void AlarmHistory::SetFirstOccurTime(const int64_t& _firstOccurTime)
{
    m_firstOccurTime = _firstOccurTime;
    m_firstOccurTimeHasBeenSet = true;
}

bool AlarmHistory::FirstOccurTimeHasBeenSet() const
{
    return m_firstOccurTimeHasBeenSet;
}

int64_t AlarmHistory::GetLastOccurTime() const
{
    return m_lastOccurTime;
}

void AlarmHistory::SetLastOccurTime(const int64_t& _lastOccurTime)
{
    m_lastOccurTime = _lastOccurTime;
    m_lastOccurTimeHasBeenSet = true;
}

bool AlarmHistory::LastOccurTimeHasBeenSet() const
{
    return m_lastOccurTimeHasBeenSet;
}

string AlarmHistory::GetAlarmStatus() const
{
    return m_alarmStatus;
}

void AlarmHistory::SetAlarmStatus(const string& _alarmStatus)
{
    m_alarmStatus = _alarmStatus;
    m_alarmStatusHasBeenSet = true;
}

bool AlarmHistory::AlarmStatusHasBeenSet() const
{
    return m_alarmStatusHasBeenSet;
}

string AlarmHistory::GetPolicyId() const
{
    return m_policyId;
}

void AlarmHistory::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool AlarmHistory::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string AlarmHistory::GetPolicyName() const
{
    return m_policyName;
}

void AlarmHistory::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool AlarmHistory::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

string AlarmHistory::GetVPC() const
{
    return m_vPC;
}

void AlarmHistory::SetVPC(const string& _vPC)
{
    m_vPC = _vPC;
    m_vPCHasBeenSet = true;
}

bool AlarmHistory::VPCHasBeenSet() const
{
    return m_vPCHasBeenSet;
}

int64_t AlarmHistory::GetProjectId() const
{
    return m_projectId;
}

void AlarmHistory::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool AlarmHistory::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string AlarmHistory::GetProjectName() const
{
    return m_projectName;
}

void AlarmHistory::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool AlarmHistory::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

vector<InstanceGroups> AlarmHistory::GetInstanceGroup() const
{
    return m_instanceGroup;
}

void AlarmHistory::SetInstanceGroup(const vector<InstanceGroups>& _instanceGroup)
{
    m_instanceGroup = _instanceGroup;
    m_instanceGroupHasBeenSet = true;
}

bool AlarmHistory::InstanceGroupHasBeenSet() const
{
    return m_instanceGroupHasBeenSet;
}

vector<int64_t> AlarmHistory::GetReceiverUids() const
{
    return m_receiverUids;
}

void AlarmHistory::SetReceiverUids(const vector<int64_t>& _receiverUids)
{
    m_receiverUids = _receiverUids;
    m_receiverUidsHasBeenSet = true;
}

bool AlarmHistory::ReceiverUidsHasBeenSet() const
{
    return m_receiverUidsHasBeenSet;
}

vector<int64_t> AlarmHistory::GetReceiverGroups() const
{
    return m_receiverGroups;
}

void AlarmHistory::SetReceiverGroups(const vector<int64_t>& _receiverGroups)
{
    m_receiverGroups = _receiverGroups;
    m_receiverGroupsHasBeenSet = true;
}

bool AlarmHistory::ReceiverGroupsHasBeenSet() const
{
    return m_receiverGroupsHasBeenSet;
}

vector<string> AlarmHistory::GetNoticeWays() const
{
    return m_noticeWays;
}

void AlarmHistory::SetNoticeWays(const vector<string>& _noticeWays)
{
    m_noticeWays = _noticeWays;
    m_noticeWaysHasBeenSet = true;
}

bool AlarmHistory::NoticeWaysHasBeenSet() const
{
    return m_noticeWaysHasBeenSet;
}

string AlarmHistory::GetOriginId() const
{
    return m_originId;
}

void AlarmHistory::SetOriginId(const string& _originId)
{
    m_originId = _originId;
    m_originIdHasBeenSet = true;
}

bool AlarmHistory::OriginIdHasBeenSet() const
{
    return m_originIdHasBeenSet;
}

string AlarmHistory::GetAlarmType() const
{
    return m_alarmType;
}

void AlarmHistory::SetAlarmType(const string& _alarmType)
{
    m_alarmType = _alarmType;
    m_alarmTypeHasBeenSet = true;
}

bool AlarmHistory::AlarmTypeHasBeenSet() const
{
    return m_alarmTypeHasBeenSet;
}

int64_t AlarmHistory::GetEventId() const
{
    return m_eventId;
}

void AlarmHistory::SetEventId(const int64_t& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool AlarmHistory::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string AlarmHistory::GetRegion() const
{
    return m_region;
}

void AlarmHistory::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool AlarmHistory::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t AlarmHistory::GetPolicyExists() const
{
    return m_policyExists;
}

void AlarmHistory::SetPolicyExists(const int64_t& _policyExists)
{
    m_policyExists = _policyExists;
    m_policyExistsHasBeenSet = true;
}

bool AlarmHistory::PolicyExistsHasBeenSet() const
{
    return m_policyExistsHasBeenSet;
}

vector<AlarmHistoryMetric> AlarmHistory::GetMetricsInfo() const
{
    return m_metricsInfo;
}

void AlarmHistory::SetMetricsInfo(const vector<AlarmHistoryMetric>& _metricsInfo)
{
    m_metricsInfo = _metricsInfo;
    m_metricsInfoHasBeenSet = true;
}

bool AlarmHistory::MetricsInfoHasBeenSet() const
{
    return m_metricsInfoHasBeenSet;
}

string AlarmHistory::GetDimensions() const
{
    return m_dimensions;
}

void AlarmHistory::SetDimensions(const string& _dimensions)
{
    m_dimensions = _dimensions;
    m_dimensionsHasBeenSet = true;
}

bool AlarmHistory::DimensionsHasBeenSet() const
{
    return m_dimensionsHasBeenSet;
}

string AlarmHistory::GetAlarmLevel() const
{
    return m_alarmLevel;
}

void AlarmHistory::SetAlarmLevel(const string& _alarmLevel)
{
    m_alarmLevel = _alarmLevel;
    m_alarmLevelHasBeenSet = true;
}

bool AlarmHistory::AlarmLevelHasBeenSet() const
{
    return m_alarmLevelHasBeenSet;
}

int64_t AlarmHistory::GetShieldFlag() const
{
    return m_shieldFlag;
}

void AlarmHistory::SetShieldFlag(const int64_t& _shieldFlag)
{
    m_shieldFlag = _shieldFlag;
    m_shieldFlagHasBeenSet = true;
}

bool AlarmHistory::ShieldFlagHasBeenSet() const
{
    return m_shieldFlagHasBeenSet;
}

string AlarmHistory::GetAlarmShieldingType() const
{
    return m_alarmShieldingType;
}

void AlarmHistory::SetAlarmShieldingType(const string& _alarmShieldingType)
{
    m_alarmShieldingType = _alarmShieldingType;
    m_alarmShieldingTypeHasBeenSet = true;
}

bool AlarmHistory::AlarmShieldingTypeHasBeenSet() const
{
    return m_alarmShieldingTypeHasBeenSet;
}

string AlarmHistory::GetAlarmShieldingTime() const
{
    return m_alarmShieldingTime;
}

void AlarmHistory::SetAlarmShieldingTime(const string& _alarmShieldingTime)
{
    m_alarmShieldingTime = _alarmShieldingTime;
    m_alarmShieldingTimeHasBeenSet = true;
}

bool AlarmHistory::AlarmShieldingTimeHasBeenSet() const
{
    return m_alarmShieldingTimeHasBeenSet;
}

string AlarmHistory::GetAlarmShieldingShowType() const
{
    return m_alarmShieldingShowType;
}

void AlarmHistory::SetAlarmShieldingShowType(const string& _alarmShieldingShowType)
{
    m_alarmShieldingShowType = _alarmShieldingShowType;
    m_alarmShieldingShowTypeHasBeenSet = true;
}

bool AlarmHistory::AlarmShieldingShowTypeHasBeenSet() const
{
    return m_alarmShieldingShowTypeHasBeenSet;
}

string AlarmHistory::GetAlarmShieldingShowTime() const
{
    return m_alarmShieldingShowTime;
}

void AlarmHistory::SetAlarmShieldingShowTime(const string& _alarmShieldingShowTime)
{
    m_alarmShieldingShowTime = _alarmShieldingShowTime;
    m_alarmShieldingShowTimeHasBeenSet = true;
}

bool AlarmHistory::AlarmShieldingShowTimeHasBeenSet() const
{
    return m_alarmShieldingShowTimeHasBeenSet;
}

string AlarmHistory::GetAlarmShieldReason() const
{
    return m_alarmShieldReason;
}

void AlarmHistory::SetAlarmShieldReason(const string& _alarmShieldReason)
{
    m_alarmShieldReason = _alarmShieldReason;
    m_alarmShieldReasonHasBeenSet = true;
}

bool AlarmHistory::AlarmShieldReasonHasBeenSet() const
{
    return m_alarmShieldReasonHasBeenSet;
}

string AlarmHistory::GetInternalDimensions() const
{
    return m_internalDimensions;
}

void AlarmHistory::SetInternalDimensions(const string& _internalDimensions)
{
    m_internalDimensions = _internalDimensions;
    m_internalDimensionsHasBeenSet = true;
}

bool AlarmHistory::InternalDimensionsHasBeenSet() const
{
    return m_internalDimensionsHasBeenSet;
}

string AlarmHistory::GetMetricName() const
{
    return m_metricName;
}

void AlarmHistory::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool AlarmHistory::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

uint64_t AlarmHistory::GetPolicyPermissions() const
{
    return m_policyPermissions;
}

void AlarmHistory::SetPolicyPermissions(const uint64_t& _policyPermissions)
{
    m_policyPermissions = _policyPermissions;
    m_policyPermissionsHasBeenSet = true;
}

bool AlarmHistory::PolicyPermissionsHasBeenSet() const
{
    return m_policyPermissionsHasBeenSet;
}

