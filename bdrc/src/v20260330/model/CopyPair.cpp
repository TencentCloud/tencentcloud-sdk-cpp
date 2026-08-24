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

#include <tencentcloud/bdrc/v20260330/model/CopyPair.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

CopyPair::CopyPair() :
    m_appIdHasBeenSet(false),
    m_copyPairIdHasBeenSet(false),
    m_copyPairNameHasBeenSet(false),
    m_sitePairIdHasBeenSet(false),
    m_sitePairNameHasBeenSet(false),
    m_protectGroupIdHasBeenSet(false),
    m_protectGroupNameHasBeenSet(false),
    m_copyPairStateHasBeenSet(false),
    m_copyPairTypeHasBeenSet(false),
    m_sourceRegionHasBeenSet(false),
    m_sourceZoneHasBeenSet(false),
    m_sourceVpcHasBeenSet(false),
    m_targetRegionHasBeenSet(false),
    m_targetZoneHasBeenSet(false),
    m_targetVpcHasBeenSet(false),
    m_sourceResourceIdHasBeenSet(false),
    m_targetResourceIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceCopyPairIdHasBeenSet(false),
    m_percentHasBeenSet(false),
    m_latestProtectionTimeHasBeenSet(false),
    m_recoveryPointObjectiveHasBeenSet(false),
    m_dataDirectionHasBeenSet(false),
    m_createFromHasBeenSet(false),
    m_disasterRecoveryTypeHasBeenSet(false),
    m_peerCloudNameHasBeenSet(false),
    m_rollbackingHasBeenSet(false),
    m_rollbackPercentHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_accountUinHasBeenSet(false),
    m_subAccountUinHasBeenSet(false),
    m_drillGroupIdHasBeenSet(false),
    m_protectionTimeSetHasBeenSet(false),
    m_diskCopyPairSetHasBeenSet(false),
    m_deferredCreateHasBeenSet(false),
    m_targetCvmCreatedHasBeenSet(false),
    m_cvmCreateParamsHasBeenSet(false)
{
}

CoreInternalOutcome CopyPair::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPair.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("CopyPairId") && !value["CopyPairId"].IsNull())
    {
        if (!value["CopyPairId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPair.CopyPairId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_copyPairId = string(value["CopyPairId"].GetString());
        m_copyPairIdHasBeenSet = true;
    }

    if (value.HasMember("CopyPairName") && !value["CopyPairName"].IsNull())
    {
        if (!value["CopyPairName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPair.CopyPairName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_copyPairName = string(value["CopyPairName"].GetString());
        m_copyPairNameHasBeenSet = true;
    }

    if (value.HasMember("SitePairId") && !value["SitePairId"].IsNull())
    {
        if (!value["SitePairId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPair.SitePairId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sitePairId = string(value["SitePairId"].GetString());
        m_sitePairIdHasBeenSet = true;
    }

    if (value.HasMember("SitePairName") && !value["SitePairName"].IsNull())
    {
        if (!value["SitePairName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPair.SitePairName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sitePairName = string(value["SitePairName"].GetString());
        m_sitePairNameHasBeenSet = true;
    }

    if (value.HasMember("ProtectGroupId") && !value["ProtectGroupId"].IsNull())
    {
        if (!value["ProtectGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPair.ProtectGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectGroupId = string(value["ProtectGroupId"].GetString());
        m_protectGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ProtectGroupName") && !value["ProtectGroupName"].IsNull())
    {
        if (!value["ProtectGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPair.ProtectGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectGroupName = string(value["ProtectGroupName"].GetString());
        m_protectGroupNameHasBeenSet = true;
    }

    if (value.HasMember("CopyPairState") && !value["CopyPairState"].IsNull())
    {
        if (!value["CopyPairState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPair.CopyPairState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_copyPairState = string(value["CopyPairState"].GetString());
        m_copyPairStateHasBeenSet = true;
    }

    if (value.HasMember("CopyPairType") && !value["CopyPairType"].IsNull())
    {
        if (!value["CopyPairType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPair.CopyPairType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_copyPairType = string(value["CopyPairType"].GetString());
        m_copyPairTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceRegion") && !value["SourceRegion"].IsNull())
    {
        if (!value["SourceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPair.SourceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceRegion = string(value["SourceRegion"].GetString());
        m_sourceRegionHasBeenSet = true;
    }

    if (value.HasMember("SourceZone") && !value["SourceZone"].IsNull())
    {
        if (!value["SourceZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPair.SourceZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceZone = string(value["SourceZone"].GetString());
        m_sourceZoneHasBeenSet = true;
    }

    if (value.HasMember("SourceVpc") && !value["SourceVpc"].IsNull())
    {
        if (!value["SourceVpc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPair.SourceVpc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceVpc = string(value["SourceVpc"].GetString());
        m_sourceVpcHasBeenSet = true;
    }

    if (value.HasMember("TargetRegion") && !value["TargetRegion"].IsNull())
    {
        if (!value["TargetRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPair.TargetRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetRegion = string(value["TargetRegion"].GetString());
        m_targetRegionHasBeenSet = true;
    }

    if (value.HasMember("TargetZone") && !value["TargetZone"].IsNull())
    {
        if (!value["TargetZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPair.TargetZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetZone = string(value["TargetZone"].GetString());
        m_targetZoneHasBeenSet = true;
    }

    if (value.HasMember("TargetVpc") && !value["TargetVpc"].IsNull())
    {
        if (!value["TargetVpc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPair.TargetVpc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetVpc = string(value["TargetVpc"].GetString());
        m_targetVpcHasBeenSet = true;
    }

    if (value.HasMember("SourceResourceId") && !value["SourceResourceId"].IsNull())
    {
        if (!value["SourceResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPair.SourceResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceResourceId = string(value["SourceResourceId"].GetString());
        m_sourceResourceIdHasBeenSet = true;
    }

    if (value.HasMember("TargetResourceId") && !value["TargetResourceId"].IsNull())
    {
        if (!value["TargetResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPair.TargetResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetResourceId = string(value["TargetResourceId"].GetString());
        m_targetResourceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPair.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceCopyPairId") && !value["InstanceCopyPairId"].IsNull())
    {
        if (!value["InstanceCopyPairId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPair.InstanceCopyPairId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCopyPairId = string(value["InstanceCopyPairId"].GetString());
        m_instanceCopyPairIdHasBeenSet = true;
    }

    if (value.HasMember("Percent") && !value["Percent"].IsNull())
    {
        if (!value["Percent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPair.Percent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_percent = value["Percent"].GetInt64();
        m_percentHasBeenSet = true;
    }

    if (value.HasMember("LatestProtectionTime") && !value["LatestProtectionTime"].IsNull())
    {
        if (!value["LatestProtectionTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPair.LatestProtectionTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestProtectionTime = string(value["LatestProtectionTime"].GetString());
        m_latestProtectionTimeHasBeenSet = true;
    }

    if (value.HasMember("RecoveryPointObjective") && !value["RecoveryPointObjective"].IsNull())
    {
        if (!value["RecoveryPointObjective"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPair.RecoveryPointObjective` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recoveryPointObjective = value["RecoveryPointObjective"].GetInt64();
        m_recoveryPointObjectiveHasBeenSet = true;
    }

    if (value.HasMember("DataDirection") && !value["DataDirection"].IsNull())
    {
        if (!value["DataDirection"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPair.DataDirection` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataDirection = string(value["DataDirection"].GetString());
        m_dataDirectionHasBeenSet = true;
    }

    if (value.HasMember("CreateFrom") && !value["CreateFrom"].IsNull())
    {
        if (!value["CreateFrom"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPair.CreateFrom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createFrom = string(value["CreateFrom"].GetString());
        m_createFromHasBeenSet = true;
    }

    if (value.HasMember("DisasterRecoveryType") && !value["DisasterRecoveryType"].IsNull())
    {
        if (!value["DisasterRecoveryType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPair.DisasterRecoveryType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_disasterRecoveryType = string(value["DisasterRecoveryType"].GetString());
        m_disasterRecoveryTypeHasBeenSet = true;
    }

    if (value.HasMember("PeerCloudName") && !value["PeerCloudName"].IsNull())
    {
        if (!value["PeerCloudName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPair.PeerCloudName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_peerCloudName = string(value["PeerCloudName"].GetString());
        m_peerCloudNameHasBeenSet = true;
    }

    if (value.HasMember("Rollbacking") && !value["Rollbacking"].IsNull())
    {
        if (!value["Rollbacking"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPair.Rollbacking` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rollbacking = value["Rollbacking"].GetInt64();
        m_rollbackingHasBeenSet = true;
    }

    if (value.HasMember("RollbackPercent") && !value["RollbackPercent"].IsNull())
    {
        if (!value["RollbackPercent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPair.RollbackPercent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rollbackPercent = value["RollbackPercent"].GetInt64();
        m_rollbackPercentHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPair.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("AccountUin") && !value["AccountUin"].IsNull())
    {
        if (!value["AccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPair.AccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountUin = string(value["AccountUin"].GetString());
        m_accountUinHasBeenSet = true;
    }

    if (value.HasMember("SubAccountUin") && !value["SubAccountUin"].IsNull())
    {
        if (!value["SubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPair.SubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountUin = string(value["SubAccountUin"].GetString());
        m_subAccountUinHasBeenSet = true;
    }

    if (value.HasMember("DrillGroupId") && !value["DrillGroupId"].IsNull())
    {
        if (!value["DrillGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPair.DrillGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drillGroupId = string(value["DrillGroupId"].GetString());
        m_drillGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ProtectionTimeSet") && !value["ProtectionTimeSet"].IsNull())
    {
        if (!value["ProtectionTimeSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CopyPair.ProtectionTimeSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ProtectionTimeSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_protectionTimeSet.push_back((*itr).GetString());
        }
        m_protectionTimeSetHasBeenSet = true;
    }

    if (value.HasMember("DiskCopyPairSet") && !value["DiskCopyPairSet"].IsNull())
    {
        if (!value["DiskCopyPairSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CopyPair.DiskCopyPairSet` is not array type"));

        const rapidjson::Value &tmpValue = value["DiskCopyPairSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DiskCopyPairForCvm item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_diskCopyPairSet.push_back(item);
        }
        m_diskCopyPairSetHasBeenSet = true;
    }

    if (value.HasMember("DeferredCreate") && !value["DeferredCreate"].IsNull())
    {
        if (!value["DeferredCreate"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPair.DeferredCreate` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deferredCreate = value["DeferredCreate"].GetBool();
        m_deferredCreateHasBeenSet = true;
    }

    if (value.HasMember("TargetCvmCreated") && !value["TargetCvmCreated"].IsNull())
    {
        if (!value["TargetCvmCreated"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPair.TargetCvmCreated` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_targetCvmCreated = value["TargetCvmCreated"].GetBool();
        m_targetCvmCreatedHasBeenSet = true;
    }

    if (value.HasMember("CvmCreateParams") && !value["CvmCreateParams"].IsNull())
    {
        if (!value["CvmCreateParams"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPair.CvmCreateParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cvmCreateParams = string(value["CvmCreateParams"].GetString());
        m_cvmCreateParamsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CopyPair::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_copyPairIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyPairId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_copyPairId.c_str(), allocator).Move(), allocator);
    }

    if (m_copyPairNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyPairName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_copyPairName.c_str(), allocator).Move(), allocator);
    }

    if (m_sitePairIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SitePairId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sitePairId.c_str(), allocator).Move(), allocator);
    }

    if (m_sitePairNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SitePairName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sitePairName.c_str(), allocator).Move(), allocator);
    }

    if (m_protectGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_protectGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_copyPairStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyPairState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_copyPairState.c_str(), allocator).Move(), allocator);
    }

    if (m_copyPairTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyPairType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_copyPairType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceZone.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceVpcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceVpc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceVpc.c_str(), allocator).Move(), allocator);
    }

    if (m_targetRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_targetZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetZone.c_str(), allocator).Move(), allocator);
    }

    if (m_targetVpcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetVpc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetVpc.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceResourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetResourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceCopyPairIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCopyPairId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceCopyPairId.c_str(), allocator).Move(), allocator);
    }

    if (m_percentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percent, allocator);
    }

    if (m_latestProtectionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestProtectionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestProtectionTime.c_str(), allocator).Move(), allocator);
    }

    if (m_recoveryPointObjectiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecoveryPointObjective";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recoveryPointObjective, allocator);
    }

    if (m_dataDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDirection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataDirection.c_str(), allocator).Move(), allocator);
    }

    if (m_createFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_disasterRecoveryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisasterRecoveryType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_disasterRecoveryType.c_str(), allocator).Move(), allocator);
    }

    if (m_peerCloudNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerCloudName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_peerCloudName.c_str(), allocator).Move(), allocator);
    }

    if (m_rollbackingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rollbacking";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rollbacking, allocator);
    }

    if (m_rollbackPercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollbackPercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rollbackPercent, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_accountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_subAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAccountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_drillGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrillGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drillGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_protectionTimeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectionTimeSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_protectionTimeSet.begin(); itr != m_protectionTimeSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_diskCopyPairSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskCopyPairSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_diskCopyPairSet.begin(); itr != m_diskCopyPairSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_deferredCreateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeferredCreate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deferredCreate, allocator);
    }

    if (m_targetCvmCreatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetCvmCreated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetCvmCreated, allocator);
    }

    if (m_cvmCreateParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvmCreateParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cvmCreateParams.c_str(), allocator).Move(), allocator);
    }

}


int64_t CopyPair::GetAppId() const
{
    return m_appId;
}

void CopyPair::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CopyPair::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string CopyPair::GetCopyPairId() const
{
    return m_copyPairId;
}

void CopyPair::SetCopyPairId(const string& _copyPairId)
{
    m_copyPairId = _copyPairId;
    m_copyPairIdHasBeenSet = true;
}

bool CopyPair::CopyPairIdHasBeenSet() const
{
    return m_copyPairIdHasBeenSet;
}

string CopyPair::GetCopyPairName() const
{
    return m_copyPairName;
}

void CopyPair::SetCopyPairName(const string& _copyPairName)
{
    m_copyPairName = _copyPairName;
    m_copyPairNameHasBeenSet = true;
}

bool CopyPair::CopyPairNameHasBeenSet() const
{
    return m_copyPairNameHasBeenSet;
}

string CopyPair::GetSitePairId() const
{
    return m_sitePairId;
}

void CopyPair::SetSitePairId(const string& _sitePairId)
{
    m_sitePairId = _sitePairId;
    m_sitePairIdHasBeenSet = true;
}

bool CopyPair::SitePairIdHasBeenSet() const
{
    return m_sitePairIdHasBeenSet;
}

string CopyPair::GetSitePairName() const
{
    return m_sitePairName;
}

void CopyPair::SetSitePairName(const string& _sitePairName)
{
    m_sitePairName = _sitePairName;
    m_sitePairNameHasBeenSet = true;
}

bool CopyPair::SitePairNameHasBeenSet() const
{
    return m_sitePairNameHasBeenSet;
}

string CopyPair::GetProtectGroupId() const
{
    return m_protectGroupId;
}

void CopyPair::SetProtectGroupId(const string& _protectGroupId)
{
    m_protectGroupId = _protectGroupId;
    m_protectGroupIdHasBeenSet = true;
}

bool CopyPair::ProtectGroupIdHasBeenSet() const
{
    return m_protectGroupIdHasBeenSet;
}

string CopyPair::GetProtectGroupName() const
{
    return m_protectGroupName;
}

void CopyPair::SetProtectGroupName(const string& _protectGroupName)
{
    m_protectGroupName = _protectGroupName;
    m_protectGroupNameHasBeenSet = true;
}

bool CopyPair::ProtectGroupNameHasBeenSet() const
{
    return m_protectGroupNameHasBeenSet;
}

string CopyPair::GetCopyPairState() const
{
    return m_copyPairState;
}

void CopyPair::SetCopyPairState(const string& _copyPairState)
{
    m_copyPairState = _copyPairState;
    m_copyPairStateHasBeenSet = true;
}

bool CopyPair::CopyPairStateHasBeenSet() const
{
    return m_copyPairStateHasBeenSet;
}

string CopyPair::GetCopyPairType() const
{
    return m_copyPairType;
}

void CopyPair::SetCopyPairType(const string& _copyPairType)
{
    m_copyPairType = _copyPairType;
    m_copyPairTypeHasBeenSet = true;
}

bool CopyPair::CopyPairTypeHasBeenSet() const
{
    return m_copyPairTypeHasBeenSet;
}

string CopyPair::GetSourceRegion() const
{
    return m_sourceRegion;
}

void CopyPair::SetSourceRegion(const string& _sourceRegion)
{
    m_sourceRegion = _sourceRegion;
    m_sourceRegionHasBeenSet = true;
}

bool CopyPair::SourceRegionHasBeenSet() const
{
    return m_sourceRegionHasBeenSet;
}

string CopyPair::GetSourceZone() const
{
    return m_sourceZone;
}

void CopyPair::SetSourceZone(const string& _sourceZone)
{
    m_sourceZone = _sourceZone;
    m_sourceZoneHasBeenSet = true;
}

bool CopyPair::SourceZoneHasBeenSet() const
{
    return m_sourceZoneHasBeenSet;
}

string CopyPair::GetSourceVpc() const
{
    return m_sourceVpc;
}

void CopyPair::SetSourceVpc(const string& _sourceVpc)
{
    m_sourceVpc = _sourceVpc;
    m_sourceVpcHasBeenSet = true;
}

bool CopyPair::SourceVpcHasBeenSet() const
{
    return m_sourceVpcHasBeenSet;
}

string CopyPair::GetTargetRegion() const
{
    return m_targetRegion;
}

void CopyPair::SetTargetRegion(const string& _targetRegion)
{
    m_targetRegion = _targetRegion;
    m_targetRegionHasBeenSet = true;
}

bool CopyPair::TargetRegionHasBeenSet() const
{
    return m_targetRegionHasBeenSet;
}

string CopyPair::GetTargetZone() const
{
    return m_targetZone;
}

void CopyPair::SetTargetZone(const string& _targetZone)
{
    m_targetZone = _targetZone;
    m_targetZoneHasBeenSet = true;
}

bool CopyPair::TargetZoneHasBeenSet() const
{
    return m_targetZoneHasBeenSet;
}

string CopyPair::GetTargetVpc() const
{
    return m_targetVpc;
}

void CopyPair::SetTargetVpc(const string& _targetVpc)
{
    m_targetVpc = _targetVpc;
    m_targetVpcHasBeenSet = true;
}

bool CopyPair::TargetVpcHasBeenSet() const
{
    return m_targetVpcHasBeenSet;
}

string CopyPair::GetSourceResourceId() const
{
    return m_sourceResourceId;
}

void CopyPair::SetSourceResourceId(const string& _sourceResourceId)
{
    m_sourceResourceId = _sourceResourceId;
    m_sourceResourceIdHasBeenSet = true;
}

bool CopyPair::SourceResourceIdHasBeenSet() const
{
    return m_sourceResourceIdHasBeenSet;
}

string CopyPair::GetTargetResourceId() const
{
    return m_targetResourceId;
}

void CopyPair::SetTargetResourceId(const string& _targetResourceId)
{
    m_targetResourceId = _targetResourceId;
    m_targetResourceIdHasBeenSet = true;
}

bool CopyPair::TargetResourceIdHasBeenSet() const
{
    return m_targetResourceIdHasBeenSet;
}

string CopyPair::GetInstanceId() const
{
    return m_instanceId;
}

void CopyPair::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CopyPair::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CopyPair::GetInstanceCopyPairId() const
{
    return m_instanceCopyPairId;
}

void CopyPair::SetInstanceCopyPairId(const string& _instanceCopyPairId)
{
    m_instanceCopyPairId = _instanceCopyPairId;
    m_instanceCopyPairIdHasBeenSet = true;
}

bool CopyPair::InstanceCopyPairIdHasBeenSet() const
{
    return m_instanceCopyPairIdHasBeenSet;
}

int64_t CopyPair::GetPercent() const
{
    return m_percent;
}

void CopyPair::SetPercent(const int64_t& _percent)
{
    m_percent = _percent;
    m_percentHasBeenSet = true;
}

bool CopyPair::PercentHasBeenSet() const
{
    return m_percentHasBeenSet;
}

string CopyPair::GetLatestProtectionTime() const
{
    return m_latestProtectionTime;
}

void CopyPair::SetLatestProtectionTime(const string& _latestProtectionTime)
{
    m_latestProtectionTime = _latestProtectionTime;
    m_latestProtectionTimeHasBeenSet = true;
}

bool CopyPair::LatestProtectionTimeHasBeenSet() const
{
    return m_latestProtectionTimeHasBeenSet;
}

int64_t CopyPair::GetRecoveryPointObjective() const
{
    return m_recoveryPointObjective;
}

void CopyPair::SetRecoveryPointObjective(const int64_t& _recoveryPointObjective)
{
    m_recoveryPointObjective = _recoveryPointObjective;
    m_recoveryPointObjectiveHasBeenSet = true;
}

bool CopyPair::RecoveryPointObjectiveHasBeenSet() const
{
    return m_recoveryPointObjectiveHasBeenSet;
}

string CopyPair::GetDataDirection() const
{
    return m_dataDirection;
}

void CopyPair::SetDataDirection(const string& _dataDirection)
{
    m_dataDirection = _dataDirection;
    m_dataDirectionHasBeenSet = true;
}

bool CopyPair::DataDirectionHasBeenSet() const
{
    return m_dataDirectionHasBeenSet;
}

string CopyPair::GetCreateFrom() const
{
    return m_createFrom;
}

void CopyPair::SetCreateFrom(const string& _createFrom)
{
    m_createFrom = _createFrom;
    m_createFromHasBeenSet = true;
}

bool CopyPair::CreateFromHasBeenSet() const
{
    return m_createFromHasBeenSet;
}

string CopyPair::GetDisasterRecoveryType() const
{
    return m_disasterRecoveryType;
}

void CopyPair::SetDisasterRecoveryType(const string& _disasterRecoveryType)
{
    m_disasterRecoveryType = _disasterRecoveryType;
    m_disasterRecoveryTypeHasBeenSet = true;
}

bool CopyPair::DisasterRecoveryTypeHasBeenSet() const
{
    return m_disasterRecoveryTypeHasBeenSet;
}

string CopyPair::GetPeerCloudName() const
{
    return m_peerCloudName;
}

void CopyPair::SetPeerCloudName(const string& _peerCloudName)
{
    m_peerCloudName = _peerCloudName;
    m_peerCloudNameHasBeenSet = true;
}

bool CopyPair::PeerCloudNameHasBeenSet() const
{
    return m_peerCloudNameHasBeenSet;
}

int64_t CopyPair::GetRollbacking() const
{
    return m_rollbacking;
}

void CopyPair::SetRollbacking(const int64_t& _rollbacking)
{
    m_rollbacking = _rollbacking;
    m_rollbackingHasBeenSet = true;
}

bool CopyPair::RollbackingHasBeenSet() const
{
    return m_rollbackingHasBeenSet;
}

int64_t CopyPair::GetRollbackPercent() const
{
    return m_rollbackPercent;
}

void CopyPair::SetRollbackPercent(const int64_t& _rollbackPercent)
{
    m_rollbackPercent = _rollbackPercent;
    m_rollbackPercentHasBeenSet = true;
}

bool CopyPair::RollbackPercentHasBeenSet() const
{
    return m_rollbackPercentHasBeenSet;
}

string CopyPair::GetCreateTime() const
{
    return m_createTime;
}

void CopyPair::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CopyPair::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CopyPair::GetAccountUin() const
{
    return m_accountUin;
}

void CopyPair::SetAccountUin(const string& _accountUin)
{
    m_accountUin = _accountUin;
    m_accountUinHasBeenSet = true;
}

bool CopyPair::AccountUinHasBeenSet() const
{
    return m_accountUinHasBeenSet;
}

string CopyPair::GetSubAccountUin() const
{
    return m_subAccountUin;
}

void CopyPair::SetSubAccountUin(const string& _subAccountUin)
{
    m_subAccountUin = _subAccountUin;
    m_subAccountUinHasBeenSet = true;
}

bool CopyPair::SubAccountUinHasBeenSet() const
{
    return m_subAccountUinHasBeenSet;
}

string CopyPair::GetDrillGroupId() const
{
    return m_drillGroupId;
}

void CopyPair::SetDrillGroupId(const string& _drillGroupId)
{
    m_drillGroupId = _drillGroupId;
    m_drillGroupIdHasBeenSet = true;
}

bool CopyPair::DrillGroupIdHasBeenSet() const
{
    return m_drillGroupIdHasBeenSet;
}

vector<string> CopyPair::GetProtectionTimeSet() const
{
    return m_protectionTimeSet;
}

void CopyPair::SetProtectionTimeSet(const vector<string>& _protectionTimeSet)
{
    m_protectionTimeSet = _protectionTimeSet;
    m_protectionTimeSetHasBeenSet = true;
}

bool CopyPair::ProtectionTimeSetHasBeenSet() const
{
    return m_protectionTimeSetHasBeenSet;
}

vector<DiskCopyPairForCvm> CopyPair::GetDiskCopyPairSet() const
{
    return m_diskCopyPairSet;
}

void CopyPair::SetDiskCopyPairSet(const vector<DiskCopyPairForCvm>& _diskCopyPairSet)
{
    m_diskCopyPairSet = _diskCopyPairSet;
    m_diskCopyPairSetHasBeenSet = true;
}

bool CopyPair::DiskCopyPairSetHasBeenSet() const
{
    return m_diskCopyPairSetHasBeenSet;
}

bool CopyPair::GetDeferredCreate() const
{
    return m_deferredCreate;
}

void CopyPair::SetDeferredCreate(const bool& _deferredCreate)
{
    m_deferredCreate = _deferredCreate;
    m_deferredCreateHasBeenSet = true;
}

bool CopyPair::DeferredCreateHasBeenSet() const
{
    return m_deferredCreateHasBeenSet;
}

bool CopyPair::GetTargetCvmCreated() const
{
    return m_targetCvmCreated;
}

void CopyPair::SetTargetCvmCreated(const bool& _targetCvmCreated)
{
    m_targetCvmCreated = _targetCvmCreated;
    m_targetCvmCreatedHasBeenSet = true;
}

bool CopyPair::TargetCvmCreatedHasBeenSet() const
{
    return m_targetCvmCreatedHasBeenSet;
}

string CopyPair::GetCvmCreateParams() const
{
    return m_cvmCreateParams;
}

void CopyPair::SetCvmCreateParams(const string& _cvmCreateParams)
{
    m_cvmCreateParams = _cvmCreateParams;
    m_cvmCreateParamsHasBeenSet = true;
}

bool CopyPair::CvmCreateParamsHasBeenSet() const
{
    return m_cvmCreateParamsHasBeenSet;
}

