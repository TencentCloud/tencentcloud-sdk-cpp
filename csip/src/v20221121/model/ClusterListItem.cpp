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

#include <tencentcloud/csip/v20221121/model/ClusterListItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ClusterListItem::ClusterListItem() :
    m_appIDHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_alarmEventCriticalCountHasBeenSet(false),
    m_alarmEventHighCountHasBeenSet(false),
    m_alarmEventMiddleCountHasBeenSet(false),
    m_alarmEventLowCountHasBeenSet(false),
    m_riskEventCriticalCountHasBeenSet(false),
    m_riskEventHighCountHasBeenSet(false),
    m_riskEventMiddleCountHasBeenSet(false),
    m_riskEventLowCountHasBeenSet(false),
    m_nodeCountHasBeenSet(false),
    m_offlineNodeCountHasBeenSet(false),
    m_uninstallNodeCountHasBeenSet(false),
    m_totalCoresCountHasBeenSet(false),
    m_defendCoresCountHasBeenSet(false),
    m_auditLogSwitchStatusHasBeenSet(false),
    m_defendStatusHasBeenSet(false),
    m_runStatusHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_lastAssetSyncTimeHasBeenSet(false),
    m_lastRiskCheckTimeHasBeenSet(false),
    m_riskStatusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_ownerNameHasBeenSet(false),
    m_failMessageHasBeenSet(false),
    m_runSubStatusHasBeenSet(false),
    m_accessedStatusHasBeenSet(false),
    m_accessedSubStatusHasBeenSet(false),
    m_clusterCaMD5HasBeenSet(false),
    m_assetSyncStatusHasBeenSet(false),
    m_riskConfigCountHasBeenSet(false),
    m_accessFailedMessageHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_regionNameEnHasBeenSet(false),
    m_unboundUltimateNodeCountHasBeenSet(false)
{
}

CoreInternalOutcome ClusterListItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.AppID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetUint64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.ClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = string(value["ClusterType"].GetString());
        m_clusterTypeHasBeenSet = true;
    }

    if (value.HasMember("AlarmEventCriticalCount") && !value["AlarmEventCriticalCount"].IsNull())
    {
        if (!value["AlarmEventCriticalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.AlarmEventCriticalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmEventCriticalCount = value["AlarmEventCriticalCount"].GetUint64();
        m_alarmEventCriticalCountHasBeenSet = true;
    }

    if (value.HasMember("AlarmEventHighCount") && !value["AlarmEventHighCount"].IsNull())
    {
        if (!value["AlarmEventHighCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.AlarmEventHighCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmEventHighCount = value["AlarmEventHighCount"].GetUint64();
        m_alarmEventHighCountHasBeenSet = true;
    }

    if (value.HasMember("AlarmEventMiddleCount") && !value["AlarmEventMiddleCount"].IsNull())
    {
        if (!value["AlarmEventMiddleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.AlarmEventMiddleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmEventMiddleCount = value["AlarmEventMiddleCount"].GetUint64();
        m_alarmEventMiddleCountHasBeenSet = true;
    }

    if (value.HasMember("AlarmEventLowCount") && !value["AlarmEventLowCount"].IsNull())
    {
        if (!value["AlarmEventLowCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.AlarmEventLowCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmEventLowCount = value["AlarmEventLowCount"].GetUint64();
        m_alarmEventLowCountHasBeenSet = true;
    }

    if (value.HasMember("RiskEventCriticalCount") && !value["RiskEventCriticalCount"].IsNull())
    {
        if (!value["RiskEventCriticalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.RiskEventCriticalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskEventCriticalCount = value["RiskEventCriticalCount"].GetUint64();
        m_riskEventCriticalCountHasBeenSet = true;
    }

    if (value.HasMember("RiskEventHighCount") && !value["RiskEventHighCount"].IsNull())
    {
        if (!value["RiskEventHighCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.RiskEventHighCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskEventHighCount = value["RiskEventHighCount"].GetUint64();
        m_riskEventHighCountHasBeenSet = true;
    }

    if (value.HasMember("RiskEventMiddleCount") && !value["RiskEventMiddleCount"].IsNull())
    {
        if (!value["RiskEventMiddleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.RiskEventMiddleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskEventMiddleCount = value["RiskEventMiddleCount"].GetUint64();
        m_riskEventMiddleCountHasBeenSet = true;
    }

    if (value.HasMember("RiskEventLowCount") && !value["RiskEventLowCount"].IsNull())
    {
        if (!value["RiskEventLowCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.RiskEventLowCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskEventLowCount = value["RiskEventLowCount"].GetUint64();
        m_riskEventLowCountHasBeenSet = true;
    }

    if (value.HasMember("NodeCount") && !value["NodeCount"].IsNull())
    {
        if (!value["NodeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.NodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeCount = value["NodeCount"].GetUint64();
        m_nodeCountHasBeenSet = true;
    }

    if (value.HasMember("OfflineNodeCount") && !value["OfflineNodeCount"].IsNull())
    {
        if (!value["OfflineNodeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.OfflineNodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_offlineNodeCount = value["OfflineNodeCount"].GetUint64();
        m_offlineNodeCountHasBeenSet = true;
    }

    if (value.HasMember("UninstallNodeCount") && !value["UninstallNodeCount"].IsNull())
    {
        if (!value["UninstallNodeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.UninstallNodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uninstallNodeCount = value["UninstallNodeCount"].GetUint64();
        m_uninstallNodeCountHasBeenSet = true;
    }

    if (value.HasMember("TotalCoresCount") && !value["TotalCoresCount"].IsNull())
    {
        if (!value["TotalCoresCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.TotalCoresCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCoresCount = value["TotalCoresCount"].GetInt64();
        m_totalCoresCountHasBeenSet = true;
    }

    if (value.HasMember("DefendCoresCount") && !value["DefendCoresCount"].IsNull())
    {
        if (!value["DefendCoresCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.DefendCoresCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defendCoresCount = value["DefendCoresCount"].GetInt64();
        m_defendCoresCountHasBeenSet = true;
    }

    if (value.HasMember("AuditLogSwitchStatus") && !value["AuditLogSwitchStatus"].IsNull())
    {
        if (!value["AuditLogSwitchStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.AuditLogSwitchStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_auditLogSwitchStatus = value["AuditLogSwitchStatus"].GetInt64();
        m_auditLogSwitchStatusHasBeenSet = true;
    }

    if (value.HasMember("DefendStatus") && !value["DefendStatus"].IsNull())
    {
        if (!value["DefendStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.DefendStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defendStatus = string(value["DefendStatus"].GetString());
        m_defendStatusHasBeenSet = true;
    }

    if (value.HasMember("RunStatus") && !value["RunStatus"].IsNull())
    {
        if (!value["RunStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.RunStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runStatus = string(value["RunStatus"].GetString());
        m_runStatusHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("LastAssetSyncTime") && !value["LastAssetSyncTime"].IsNull())
    {
        if (!value["LastAssetSyncTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.LastAssetSyncTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastAssetSyncTime = string(value["LastAssetSyncTime"].GetString());
        m_lastAssetSyncTimeHasBeenSet = true;
    }

    if (value.HasMember("LastRiskCheckTime") && !value["LastRiskCheckTime"].IsNull())
    {
        if (!value["LastRiskCheckTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.LastRiskCheckTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastRiskCheckTime = string(value["LastRiskCheckTime"].GetString());
        m_lastRiskCheckTimeHasBeenSet = true;
    }

    if (value.HasMember("RiskStatus") && !value["RiskStatus"].IsNull())
    {
        if (!value["RiskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.RiskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskStatus = string(value["RiskStatus"].GetString());
        m_riskStatusHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetTag item;
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

    if (value.HasMember("OwnerName") && !value["OwnerName"].IsNull())
    {
        if (!value["OwnerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.OwnerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerName = string(value["OwnerName"].GetString());
        m_ownerNameHasBeenSet = true;
    }

    if (value.HasMember("FailMessage") && !value["FailMessage"].IsNull())
    {
        if (!value["FailMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.FailMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failMessage = string(value["FailMessage"].GetString());
        m_failMessageHasBeenSet = true;
    }

    if (value.HasMember("RunSubStatus") && !value["RunSubStatus"].IsNull())
    {
        if (!value["RunSubStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.RunSubStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runSubStatus = string(value["RunSubStatus"].GetString());
        m_runSubStatusHasBeenSet = true;
    }

    if (value.HasMember("AccessedStatus") && !value["AccessedStatus"].IsNull())
    {
        if (!value["AccessedStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.AccessedStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessedStatus = string(value["AccessedStatus"].GetString());
        m_accessedStatusHasBeenSet = true;
    }

    if (value.HasMember("AccessedSubStatus") && !value["AccessedSubStatus"].IsNull())
    {
        if (!value["AccessedSubStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.AccessedSubStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessedSubStatus = string(value["AccessedSubStatus"].GetString());
        m_accessedSubStatusHasBeenSet = true;
    }

    if (value.HasMember("ClusterCaMD5") && !value["ClusterCaMD5"].IsNull())
    {
        if (!value["ClusterCaMD5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.ClusterCaMD5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterCaMD5 = string(value["ClusterCaMD5"].GetString());
        m_clusterCaMD5HasBeenSet = true;
    }

    if (value.HasMember("AssetSyncStatus") && !value["AssetSyncStatus"].IsNull())
    {
        if (!value["AssetSyncStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.AssetSyncStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetSyncStatus = string(value["AssetSyncStatus"].GetString());
        m_assetSyncStatusHasBeenSet = true;
    }

    if (value.HasMember("RiskConfigCount") && !value["RiskConfigCount"].IsNull())
    {
        if (!value["RiskConfigCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.RiskConfigCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskConfigCount = value["RiskConfigCount"].GetUint64();
        m_riskConfigCountHasBeenSet = true;
    }

    if (value.HasMember("AccessFailedMessage") && !value["AccessFailedMessage"].IsNull())
    {
        if (!value["AccessFailedMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.AccessFailedMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessFailedMessage = string(value["AccessFailedMessage"].GetString());
        m_accessFailedMessageHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("RegionNameEn") && !value["RegionNameEn"].IsNull())
    {
        if (!value["RegionNameEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.RegionNameEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionNameEn = string(value["RegionNameEn"].GetString());
        m_regionNameEnHasBeenSet = true;
    }

    if (value.HasMember("UnboundUltimateNodeCount") && !value["UnboundUltimateNodeCount"].IsNull())
    {
        if (!value["UnboundUltimateNodeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterListItem.UnboundUltimateNodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unboundUltimateNodeCount = value["UnboundUltimateNodeCount"].GetUint64();
        m_unboundUltimateNodeCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterListItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmEventCriticalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmEventCriticalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmEventCriticalCount, allocator);
    }

    if (m_alarmEventHighCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmEventHighCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmEventHighCount, allocator);
    }

    if (m_alarmEventMiddleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmEventMiddleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmEventMiddleCount, allocator);
    }

    if (m_alarmEventLowCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmEventLowCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmEventLowCount, allocator);
    }

    if (m_riskEventCriticalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskEventCriticalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskEventCriticalCount, allocator);
    }

    if (m_riskEventHighCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskEventHighCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskEventHighCount, allocator);
    }

    if (m_riskEventMiddleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskEventMiddleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskEventMiddleCount, allocator);
    }

    if (m_riskEventLowCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskEventLowCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskEventLowCount, allocator);
    }

    if (m_nodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeCount, allocator);
    }

    if (m_offlineNodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfflineNodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offlineNodeCount, allocator);
    }

    if (m_uninstallNodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UninstallNodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uninstallNodeCount, allocator);
    }

    if (m_totalCoresCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCoresCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCoresCount, allocator);
    }

    if (m_defendCoresCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefendCoresCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defendCoresCount, allocator);
    }

    if (m_auditLogSwitchStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditLogSwitchStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_auditLogSwitchStatus, allocator);
    }

    if (m_defendStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefendStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defendStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_runStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_lastAssetSyncTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastAssetSyncTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastAssetSyncTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastRiskCheckTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastRiskCheckTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastRiskCheckTime.c_str(), allocator).Move(), allocator);
    }

    if (m_riskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskStatus.c_str(), allocator).Move(), allocator);
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

    if (m_ownerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerName.c_str(), allocator).Move(), allocator);
    }

    if (m_failMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_runSubStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunSubStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runSubStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_accessedStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessedStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessedStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_accessedSubStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessedSubStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessedSubStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterCaMD5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterCaMD5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterCaMD5.c_str(), allocator).Move(), allocator);
    }

    if (m_assetSyncStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetSyncStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetSyncStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_riskConfigCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskConfigCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskConfigCount, allocator);
    }

    if (m_accessFailedMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessFailedMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessFailedMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionNameEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionNameEn.c_str(), allocator).Move(), allocator);
    }

    if (m_unboundUltimateNodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnboundUltimateNodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unboundUltimateNodeCount, allocator);
    }

}


uint64_t ClusterListItem::GetAppID() const
{
    return m_appID;
}

void ClusterListItem::SetAppID(const uint64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool ClusterListItem::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string ClusterListItem::GetAssetId() const
{
    return m_assetId;
}

void ClusterListItem::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool ClusterListItem::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string ClusterListItem::GetClusterId() const
{
    return m_clusterId;
}

void ClusterListItem::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ClusterListItem::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ClusterListItem::GetClusterName() const
{
    return m_clusterName;
}

void ClusterListItem::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool ClusterListItem::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string ClusterListItem::GetClusterType() const
{
    return m_clusterType;
}

void ClusterListItem::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool ClusterListItem::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

uint64_t ClusterListItem::GetAlarmEventCriticalCount() const
{
    return m_alarmEventCriticalCount;
}

void ClusterListItem::SetAlarmEventCriticalCount(const uint64_t& _alarmEventCriticalCount)
{
    m_alarmEventCriticalCount = _alarmEventCriticalCount;
    m_alarmEventCriticalCountHasBeenSet = true;
}

bool ClusterListItem::AlarmEventCriticalCountHasBeenSet() const
{
    return m_alarmEventCriticalCountHasBeenSet;
}

uint64_t ClusterListItem::GetAlarmEventHighCount() const
{
    return m_alarmEventHighCount;
}

void ClusterListItem::SetAlarmEventHighCount(const uint64_t& _alarmEventHighCount)
{
    m_alarmEventHighCount = _alarmEventHighCount;
    m_alarmEventHighCountHasBeenSet = true;
}

bool ClusterListItem::AlarmEventHighCountHasBeenSet() const
{
    return m_alarmEventHighCountHasBeenSet;
}

uint64_t ClusterListItem::GetAlarmEventMiddleCount() const
{
    return m_alarmEventMiddleCount;
}

void ClusterListItem::SetAlarmEventMiddleCount(const uint64_t& _alarmEventMiddleCount)
{
    m_alarmEventMiddleCount = _alarmEventMiddleCount;
    m_alarmEventMiddleCountHasBeenSet = true;
}

bool ClusterListItem::AlarmEventMiddleCountHasBeenSet() const
{
    return m_alarmEventMiddleCountHasBeenSet;
}

uint64_t ClusterListItem::GetAlarmEventLowCount() const
{
    return m_alarmEventLowCount;
}

void ClusterListItem::SetAlarmEventLowCount(const uint64_t& _alarmEventLowCount)
{
    m_alarmEventLowCount = _alarmEventLowCount;
    m_alarmEventLowCountHasBeenSet = true;
}

bool ClusterListItem::AlarmEventLowCountHasBeenSet() const
{
    return m_alarmEventLowCountHasBeenSet;
}

uint64_t ClusterListItem::GetRiskEventCriticalCount() const
{
    return m_riskEventCriticalCount;
}

void ClusterListItem::SetRiskEventCriticalCount(const uint64_t& _riskEventCriticalCount)
{
    m_riskEventCriticalCount = _riskEventCriticalCount;
    m_riskEventCriticalCountHasBeenSet = true;
}

bool ClusterListItem::RiskEventCriticalCountHasBeenSet() const
{
    return m_riskEventCriticalCountHasBeenSet;
}

uint64_t ClusterListItem::GetRiskEventHighCount() const
{
    return m_riskEventHighCount;
}

void ClusterListItem::SetRiskEventHighCount(const uint64_t& _riskEventHighCount)
{
    m_riskEventHighCount = _riskEventHighCount;
    m_riskEventHighCountHasBeenSet = true;
}

bool ClusterListItem::RiskEventHighCountHasBeenSet() const
{
    return m_riskEventHighCountHasBeenSet;
}

uint64_t ClusterListItem::GetRiskEventMiddleCount() const
{
    return m_riskEventMiddleCount;
}

void ClusterListItem::SetRiskEventMiddleCount(const uint64_t& _riskEventMiddleCount)
{
    m_riskEventMiddleCount = _riskEventMiddleCount;
    m_riskEventMiddleCountHasBeenSet = true;
}

bool ClusterListItem::RiskEventMiddleCountHasBeenSet() const
{
    return m_riskEventMiddleCountHasBeenSet;
}

uint64_t ClusterListItem::GetRiskEventLowCount() const
{
    return m_riskEventLowCount;
}

void ClusterListItem::SetRiskEventLowCount(const uint64_t& _riskEventLowCount)
{
    m_riskEventLowCount = _riskEventLowCount;
    m_riskEventLowCountHasBeenSet = true;
}

bool ClusterListItem::RiskEventLowCountHasBeenSet() const
{
    return m_riskEventLowCountHasBeenSet;
}

uint64_t ClusterListItem::GetNodeCount() const
{
    return m_nodeCount;
}

void ClusterListItem::SetNodeCount(const uint64_t& _nodeCount)
{
    m_nodeCount = _nodeCount;
    m_nodeCountHasBeenSet = true;
}

bool ClusterListItem::NodeCountHasBeenSet() const
{
    return m_nodeCountHasBeenSet;
}

uint64_t ClusterListItem::GetOfflineNodeCount() const
{
    return m_offlineNodeCount;
}

void ClusterListItem::SetOfflineNodeCount(const uint64_t& _offlineNodeCount)
{
    m_offlineNodeCount = _offlineNodeCount;
    m_offlineNodeCountHasBeenSet = true;
}

bool ClusterListItem::OfflineNodeCountHasBeenSet() const
{
    return m_offlineNodeCountHasBeenSet;
}

uint64_t ClusterListItem::GetUninstallNodeCount() const
{
    return m_uninstallNodeCount;
}

void ClusterListItem::SetUninstallNodeCount(const uint64_t& _uninstallNodeCount)
{
    m_uninstallNodeCount = _uninstallNodeCount;
    m_uninstallNodeCountHasBeenSet = true;
}

bool ClusterListItem::UninstallNodeCountHasBeenSet() const
{
    return m_uninstallNodeCountHasBeenSet;
}

int64_t ClusterListItem::GetTotalCoresCount() const
{
    return m_totalCoresCount;
}

void ClusterListItem::SetTotalCoresCount(const int64_t& _totalCoresCount)
{
    m_totalCoresCount = _totalCoresCount;
    m_totalCoresCountHasBeenSet = true;
}

bool ClusterListItem::TotalCoresCountHasBeenSet() const
{
    return m_totalCoresCountHasBeenSet;
}

int64_t ClusterListItem::GetDefendCoresCount() const
{
    return m_defendCoresCount;
}

void ClusterListItem::SetDefendCoresCount(const int64_t& _defendCoresCount)
{
    m_defendCoresCount = _defendCoresCount;
    m_defendCoresCountHasBeenSet = true;
}

bool ClusterListItem::DefendCoresCountHasBeenSet() const
{
    return m_defendCoresCountHasBeenSet;
}

int64_t ClusterListItem::GetAuditLogSwitchStatus() const
{
    return m_auditLogSwitchStatus;
}

void ClusterListItem::SetAuditLogSwitchStatus(const int64_t& _auditLogSwitchStatus)
{
    m_auditLogSwitchStatus = _auditLogSwitchStatus;
    m_auditLogSwitchStatusHasBeenSet = true;
}

bool ClusterListItem::AuditLogSwitchStatusHasBeenSet() const
{
    return m_auditLogSwitchStatusHasBeenSet;
}

string ClusterListItem::GetDefendStatus() const
{
    return m_defendStatus;
}

void ClusterListItem::SetDefendStatus(const string& _defendStatus)
{
    m_defendStatus = _defendStatus;
    m_defendStatusHasBeenSet = true;
}

bool ClusterListItem::DefendStatusHasBeenSet() const
{
    return m_defendStatusHasBeenSet;
}

string ClusterListItem::GetRunStatus() const
{
    return m_runStatus;
}

void ClusterListItem::SetRunStatus(const string& _runStatus)
{
    m_runStatus = _runStatus;
    m_runStatusHasBeenSet = true;
}

bool ClusterListItem::RunStatusHasBeenSet() const
{
    return m_runStatusHasBeenSet;
}

string ClusterListItem::GetRegion() const
{
    return m_region;
}

void ClusterListItem::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ClusterListItem::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string ClusterListItem::GetVersion() const
{
    return m_version;
}

void ClusterListItem::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool ClusterListItem::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string ClusterListItem::GetLastAssetSyncTime() const
{
    return m_lastAssetSyncTime;
}

void ClusterListItem::SetLastAssetSyncTime(const string& _lastAssetSyncTime)
{
    m_lastAssetSyncTime = _lastAssetSyncTime;
    m_lastAssetSyncTimeHasBeenSet = true;
}

bool ClusterListItem::LastAssetSyncTimeHasBeenSet() const
{
    return m_lastAssetSyncTimeHasBeenSet;
}

string ClusterListItem::GetLastRiskCheckTime() const
{
    return m_lastRiskCheckTime;
}

void ClusterListItem::SetLastRiskCheckTime(const string& _lastRiskCheckTime)
{
    m_lastRiskCheckTime = _lastRiskCheckTime;
    m_lastRiskCheckTimeHasBeenSet = true;
}

bool ClusterListItem::LastRiskCheckTimeHasBeenSet() const
{
    return m_lastRiskCheckTimeHasBeenSet;
}

string ClusterListItem::GetRiskStatus() const
{
    return m_riskStatus;
}

void ClusterListItem::SetRiskStatus(const string& _riskStatus)
{
    m_riskStatus = _riskStatus;
    m_riskStatusHasBeenSet = true;
}

bool ClusterListItem::RiskStatusHasBeenSet() const
{
    return m_riskStatusHasBeenSet;
}

vector<AssetTag> ClusterListItem::GetTags() const
{
    return m_tags;
}

void ClusterListItem::SetTags(const vector<AssetTag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ClusterListItem::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string ClusterListItem::GetOwnerName() const
{
    return m_ownerName;
}

void ClusterListItem::SetOwnerName(const string& _ownerName)
{
    m_ownerName = _ownerName;
    m_ownerNameHasBeenSet = true;
}

bool ClusterListItem::OwnerNameHasBeenSet() const
{
    return m_ownerNameHasBeenSet;
}

string ClusterListItem::GetFailMessage() const
{
    return m_failMessage;
}

void ClusterListItem::SetFailMessage(const string& _failMessage)
{
    m_failMessage = _failMessage;
    m_failMessageHasBeenSet = true;
}

bool ClusterListItem::FailMessageHasBeenSet() const
{
    return m_failMessageHasBeenSet;
}

string ClusterListItem::GetRunSubStatus() const
{
    return m_runSubStatus;
}

void ClusterListItem::SetRunSubStatus(const string& _runSubStatus)
{
    m_runSubStatus = _runSubStatus;
    m_runSubStatusHasBeenSet = true;
}

bool ClusterListItem::RunSubStatusHasBeenSet() const
{
    return m_runSubStatusHasBeenSet;
}

string ClusterListItem::GetAccessedStatus() const
{
    return m_accessedStatus;
}

void ClusterListItem::SetAccessedStatus(const string& _accessedStatus)
{
    m_accessedStatus = _accessedStatus;
    m_accessedStatusHasBeenSet = true;
}

bool ClusterListItem::AccessedStatusHasBeenSet() const
{
    return m_accessedStatusHasBeenSet;
}

string ClusterListItem::GetAccessedSubStatus() const
{
    return m_accessedSubStatus;
}

void ClusterListItem::SetAccessedSubStatus(const string& _accessedSubStatus)
{
    m_accessedSubStatus = _accessedSubStatus;
    m_accessedSubStatusHasBeenSet = true;
}

bool ClusterListItem::AccessedSubStatusHasBeenSet() const
{
    return m_accessedSubStatusHasBeenSet;
}

string ClusterListItem::GetClusterCaMD5() const
{
    return m_clusterCaMD5;
}

void ClusterListItem::SetClusterCaMD5(const string& _clusterCaMD5)
{
    m_clusterCaMD5 = _clusterCaMD5;
    m_clusterCaMD5HasBeenSet = true;
}

bool ClusterListItem::ClusterCaMD5HasBeenSet() const
{
    return m_clusterCaMD5HasBeenSet;
}

string ClusterListItem::GetAssetSyncStatus() const
{
    return m_assetSyncStatus;
}

void ClusterListItem::SetAssetSyncStatus(const string& _assetSyncStatus)
{
    m_assetSyncStatus = _assetSyncStatus;
    m_assetSyncStatusHasBeenSet = true;
}

bool ClusterListItem::AssetSyncStatusHasBeenSet() const
{
    return m_assetSyncStatusHasBeenSet;
}

uint64_t ClusterListItem::GetRiskConfigCount() const
{
    return m_riskConfigCount;
}

void ClusterListItem::SetRiskConfigCount(const uint64_t& _riskConfigCount)
{
    m_riskConfigCount = _riskConfigCount;
    m_riskConfigCountHasBeenSet = true;
}

bool ClusterListItem::RiskConfigCountHasBeenSet() const
{
    return m_riskConfigCountHasBeenSet;
}

string ClusterListItem::GetAccessFailedMessage() const
{
    return m_accessFailedMessage;
}

void ClusterListItem::SetAccessFailedMessage(const string& _accessFailedMessage)
{
    m_accessFailedMessage = _accessFailedMessage;
    m_accessFailedMessageHasBeenSet = true;
}

bool ClusterListItem::AccessFailedMessageHasBeenSet() const
{
    return m_accessFailedMessageHasBeenSet;
}

string ClusterListItem::GetRegionName() const
{
    return m_regionName;
}

void ClusterListItem::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool ClusterListItem::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

string ClusterListItem::GetRegionNameEn() const
{
    return m_regionNameEn;
}

void ClusterListItem::SetRegionNameEn(const string& _regionNameEn)
{
    m_regionNameEn = _regionNameEn;
    m_regionNameEnHasBeenSet = true;
}

bool ClusterListItem::RegionNameEnHasBeenSet() const
{
    return m_regionNameEnHasBeenSet;
}

uint64_t ClusterListItem::GetUnboundUltimateNodeCount() const
{
    return m_unboundUltimateNodeCount;
}

void ClusterListItem::SetUnboundUltimateNodeCount(const uint64_t& _unboundUltimateNodeCount)
{
    m_unboundUltimateNodeCount = _unboundUltimateNodeCount;
    m_unboundUltimateNodeCountHasBeenSet = true;
}

bool ClusterListItem::UnboundUltimateNodeCountHasBeenSet() const
{
    return m_unboundUltimateNodeCountHasBeenSet;
}

