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

#include <tencentcloud/bdrc/v20260330/model/ProtectGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

ProtectGroup::ProtectGroup() :
    m_appIdHasBeenSet(false),
    m_protectGroupIdHasBeenSet(false),
    m_protectGroupNameHasBeenSet(false),
    m_protectGroupTypeHasBeenSet(false),
    m_sitePairIdHasBeenSet(false),
    m_sitePairNameHasBeenSet(false),
    m_recoveryPointObjectiveHasBeenSet(false),
    m_sourceRegionHasBeenSet(false),
    m_sourceZoneHasBeenSet(false),
    m_sourceVpcHasBeenSet(false),
    m_targetRegionHasBeenSet(false),
    m_targetZoneHasBeenSet(false),
    m_targetVpcHasBeenSet(false),
    m_copyTypeHasBeenSet(false),
    m_disasterRecoveryTypeHasBeenSet(false),
    m_dataDirectionHasBeenSet(false),
    m_peerCloudNameHasBeenSet(false),
    m_createFromHasBeenSet(false),
    m_lifeStateHasBeenSet(false),
    m_accountUinHasBeenSet(false),
    m_subAccountUinHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_bindProtectedResourceCountHasBeenSet(false),
    m_errorRecoveryPointObjectiveCountHasBeenSet(false),
    m_protectedResourceStatusSetHasBeenSet(false)
{
}

CoreInternalOutcome ProtectGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectGroup.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("ProtectGroupId") && !value["ProtectGroupId"].IsNull())
    {
        if (!value["ProtectGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectGroup.ProtectGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectGroupId = string(value["ProtectGroupId"].GetString());
        m_protectGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ProtectGroupName") && !value["ProtectGroupName"].IsNull())
    {
        if (!value["ProtectGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectGroup.ProtectGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectGroupName = string(value["ProtectGroupName"].GetString());
        m_protectGroupNameHasBeenSet = true;
    }

    if (value.HasMember("ProtectGroupType") && !value["ProtectGroupType"].IsNull())
    {
        if (!value["ProtectGroupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectGroup.ProtectGroupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectGroupType = string(value["ProtectGroupType"].GetString());
        m_protectGroupTypeHasBeenSet = true;
    }

    if (value.HasMember("SitePairId") && !value["SitePairId"].IsNull())
    {
        if (!value["SitePairId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectGroup.SitePairId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sitePairId = string(value["SitePairId"].GetString());
        m_sitePairIdHasBeenSet = true;
    }

    if (value.HasMember("SitePairName") && !value["SitePairName"].IsNull())
    {
        if (!value["SitePairName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectGroup.SitePairName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sitePairName = string(value["SitePairName"].GetString());
        m_sitePairNameHasBeenSet = true;
    }

    if (value.HasMember("RecoveryPointObjective") && !value["RecoveryPointObjective"].IsNull())
    {
        if (!value["RecoveryPointObjective"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectGroup.RecoveryPointObjective` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recoveryPointObjective = value["RecoveryPointObjective"].GetInt64();
        m_recoveryPointObjectiveHasBeenSet = true;
    }

    if (value.HasMember("SourceRegion") && !value["SourceRegion"].IsNull())
    {
        if (!value["SourceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectGroup.SourceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceRegion = string(value["SourceRegion"].GetString());
        m_sourceRegionHasBeenSet = true;
    }

    if (value.HasMember("SourceZone") && !value["SourceZone"].IsNull())
    {
        if (!value["SourceZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectGroup.SourceZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceZone = string(value["SourceZone"].GetString());
        m_sourceZoneHasBeenSet = true;
    }

    if (value.HasMember("SourceVpc") && !value["SourceVpc"].IsNull())
    {
        if (!value["SourceVpc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectGroup.SourceVpc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceVpc = string(value["SourceVpc"].GetString());
        m_sourceVpcHasBeenSet = true;
    }

    if (value.HasMember("TargetRegion") && !value["TargetRegion"].IsNull())
    {
        if (!value["TargetRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectGroup.TargetRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetRegion = string(value["TargetRegion"].GetString());
        m_targetRegionHasBeenSet = true;
    }

    if (value.HasMember("TargetZone") && !value["TargetZone"].IsNull())
    {
        if (!value["TargetZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectGroup.TargetZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetZone = string(value["TargetZone"].GetString());
        m_targetZoneHasBeenSet = true;
    }

    if (value.HasMember("TargetVpc") && !value["TargetVpc"].IsNull())
    {
        if (!value["TargetVpc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectGroup.TargetVpc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetVpc = string(value["TargetVpc"].GetString());
        m_targetVpcHasBeenSet = true;
    }

    if (value.HasMember("CopyType") && !value["CopyType"].IsNull())
    {
        if (!value["CopyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectGroup.CopyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_copyType = string(value["CopyType"].GetString());
        m_copyTypeHasBeenSet = true;
    }

    if (value.HasMember("DisasterRecoveryType") && !value["DisasterRecoveryType"].IsNull())
    {
        if (!value["DisasterRecoveryType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectGroup.DisasterRecoveryType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_disasterRecoveryType = string(value["DisasterRecoveryType"].GetString());
        m_disasterRecoveryTypeHasBeenSet = true;
    }

    if (value.HasMember("DataDirection") && !value["DataDirection"].IsNull())
    {
        if (!value["DataDirection"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectGroup.DataDirection` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataDirection = string(value["DataDirection"].GetString());
        m_dataDirectionHasBeenSet = true;
    }

    if (value.HasMember("PeerCloudName") && !value["PeerCloudName"].IsNull())
    {
        if (!value["PeerCloudName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectGroup.PeerCloudName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_peerCloudName = string(value["PeerCloudName"].GetString());
        m_peerCloudNameHasBeenSet = true;
    }

    if (value.HasMember("CreateFrom") && !value["CreateFrom"].IsNull())
    {
        if (!value["CreateFrom"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectGroup.CreateFrom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createFrom = string(value["CreateFrom"].GetString());
        m_createFromHasBeenSet = true;
    }

    if (value.HasMember("LifeState") && !value["LifeState"].IsNull())
    {
        if (!value["LifeState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectGroup.LifeState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lifeState = string(value["LifeState"].GetString());
        m_lifeStateHasBeenSet = true;
    }

    if (value.HasMember("AccountUin") && !value["AccountUin"].IsNull())
    {
        if (!value["AccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectGroup.AccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountUin = string(value["AccountUin"].GetString());
        m_accountUinHasBeenSet = true;
    }

    if (value.HasMember("SubAccountUin") && !value["SubAccountUin"].IsNull())
    {
        if (!value["SubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectGroup.SubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountUin = string(value["SubAccountUin"].GetString());
        m_subAccountUinHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectGroup.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectGroup.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("BindProtectedResourceCount") && !value["BindProtectedResourceCount"].IsNull())
    {
        if (!value["BindProtectedResourceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectGroup.BindProtectedResourceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bindProtectedResourceCount = value["BindProtectedResourceCount"].GetInt64();
        m_bindProtectedResourceCountHasBeenSet = true;
    }

    if (value.HasMember("ErrorRecoveryPointObjectiveCount") && !value["ErrorRecoveryPointObjectiveCount"].IsNull())
    {
        if (!value["ErrorRecoveryPointObjectiveCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectGroup.ErrorRecoveryPointObjectiveCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errorRecoveryPointObjectiveCount = value["ErrorRecoveryPointObjectiveCount"].GetInt64();
        m_errorRecoveryPointObjectiveCountHasBeenSet = true;
    }

    if (value.HasMember("ProtectedResourceStatusSet") && !value["ProtectedResourceStatusSet"].IsNull())
    {
        if (!value["ProtectedResourceStatusSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProtectGroup.ProtectedResourceStatusSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ProtectedResourceStatusSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProtectedResourceStatus item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_protectedResourceStatusSet.push_back(item);
        }
        m_protectedResourceStatusSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProtectGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
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

    if (m_protectGroupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectGroupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectGroupType.c_str(), allocator).Move(), allocator);
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

    if (m_recoveryPointObjectiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecoveryPointObjective";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recoveryPointObjective, allocator);
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

    if (m_copyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_copyType.c_str(), allocator).Move(), allocator);
    }

    if (m_disasterRecoveryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisasterRecoveryType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_disasterRecoveryType.c_str(), allocator).Move(), allocator);
    }

    if (m_dataDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDirection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataDirection.c_str(), allocator).Move(), allocator);
    }

    if (m_peerCloudNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerCloudName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_peerCloudName.c_str(), allocator).Move(), allocator);
    }

    if (m_createFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_lifeStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lifeState.c_str(), allocator).Move(), allocator);
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

    if (m_bindProtectedResourceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindProtectedResourceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindProtectedResourceCount, allocator);
    }

    if (m_errorRecoveryPointObjectiveCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorRecoveryPointObjectiveCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errorRecoveryPointObjectiveCount, allocator);
    }

    if (m_protectedResourceStatusSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectedResourceStatusSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_protectedResourceStatusSet.begin(); itr != m_protectedResourceStatusSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t ProtectGroup::GetAppId() const
{
    return m_appId;
}

void ProtectGroup::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ProtectGroup::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string ProtectGroup::GetProtectGroupId() const
{
    return m_protectGroupId;
}

void ProtectGroup::SetProtectGroupId(const string& _protectGroupId)
{
    m_protectGroupId = _protectGroupId;
    m_protectGroupIdHasBeenSet = true;
}

bool ProtectGroup::ProtectGroupIdHasBeenSet() const
{
    return m_protectGroupIdHasBeenSet;
}

string ProtectGroup::GetProtectGroupName() const
{
    return m_protectGroupName;
}

void ProtectGroup::SetProtectGroupName(const string& _protectGroupName)
{
    m_protectGroupName = _protectGroupName;
    m_protectGroupNameHasBeenSet = true;
}

bool ProtectGroup::ProtectGroupNameHasBeenSet() const
{
    return m_protectGroupNameHasBeenSet;
}

string ProtectGroup::GetProtectGroupType() const
{
    return m_protectGroupType;
}

void ProtectGroup::SetProtectGroupType(const string& _protectGroupType)
{
    m_protectGroupType = _protectGroupType;
    m_protectGroupTypeHasBeenSet = true;
}

bool ProtectGroup::ProtectGroupTypeHasBeenSet() const
{
    return m_protectGroupTypeHasBeenSet;
}

string ProtectGroup::GetSitePairId() const
{
    return m_sitePairId;
}

void ProtectGroup::SetSitePairId(const string& _sitePairId)
{
    m_sitePairId = _sitePairId;
    m_sitePairIdHasBeenSet = true;
}

bool ProtectGroup::SitePairIdHasBeenSet() const
{
    return m_sitePairIdHasBeenSet;
}

string ProtectGroup::GetSitePairName() const
{
    return m_sitePairName;
}

void ProtectGroup::SetSitePairName(const string& _sitePairName)
{
    m_sitePairName = _sitePairName;
    m_sitePairNameHasBeenSet = true;
}

bool ProtectGroup::SitePairNameHasBeenSet() const
{
    return m_sitePairNameHasBeenSet;
}

int64_t ProtectGroup::GetRecoveryPointObjective() const
{
    return m_recoveryPointObjective;
}

void ProtectGroup::SetRecoveryPointObjective(const int64_t& _recoveryPointObjective)
{
    m_recoveryPointObjective = _recoveryPointObjective;
    m_recoveryPointObjectiveHasBeenSet = true;
}

bool ProtectGroup::RecoveryPointObjectiveHasBeenSet() const
{
    return m_recoveryPointObjectiveHasBeenSet;
}

string ProtectGroup::GetSourceRegion() const
{
    return m_sourceRegion;
}

void ProtectGroup::SetSourceRegion(const string& _sourceRegion)
{
    m_sourceRegion = _sourceRegion;
    m_sourceRegionHasBeenSet = true;
}

bool ProtectGroup::SourceRegionHasBeenSet() const
{
    return m_sourceRegionHasBeenSet;
}

string ProtectGroup::GetSourceZone() const
{
    return m_sourceZone;
}

void ProtectGroup::SetSourceZone(const string& _sourceZone)
{
    m_sourceZone = _sourceZone;
    m_sourceZoneHasBeenSet = true;
}

bool ProtectGroup::SourceZoneHasBeenSet() const
{
    return m_sourceZoneHasBeenSet;
}

string ProtectGroup::GetSourceVpc() const
{
    return m_sourceVpc;
}

void ProtectGroup::SetSourceVpc(const string& _sourceVpc)
{
    m_sourceVpc = _sourceVpc;
    m_sourceVpcHasBeenSet = true;
}

bool ProtectGroup::SourceVpcHasBeenSet() const
{
    return m_sourceVpcHasBeenSet;
}

string ProtectGroup::GetTargetRegion() const
{
    return m_targetRegion;
}

void ProtectGroup::SetTargetRegion(const string& _targetRegion)
{
    m_targetRegion = _targetRegion;
    m_targetRegionHasBeenSet = true;
}

bool ProtectGroup::TargetRegionHasBeenSet() const
{
    return m_targetRegionHasBeenSet;
}

string ProtectGroup::GetTargetZone() const
{
    return m_targetZone;
}

void ProtectGroup::SetTargetZone(const string& _targetZone)
{
    m_targetZone = _targetZone;
    m_targetZoneHasBeenSet = true;
}

bool ProtectGroup::TargetZoneHasBeenSet() const
{
    return m_targetZoneHasBeenSet;
}

string ProtectGroup::GetTargetVpc() const
{
    return m_targetVpc;
}

void ProtectGroup::SetTargetVpc(const string& _targetVpc)
{
    m_targetVpc = _targetVpc;
    m_targetVpcHasBeenSet = true;
}

bool ProtectGroup::TargetVpcHasBeenSet() const
{
    return m_targetVpcHasBeenSet;
}

string ProtectGroup::GetCopyType() const
{
    return m_copyType;
}

void ProtectGroup::SetCopyType(const string& _copyType)
{
    m_copyType = _copyType;
    m_copyTypeHasBeenSet = true;
}

bool ProtectGroup::CopyTypeHasBeenSet() const
{
    return m_copyTypeHasBeenSet;
}

string ProtectGroup::GetDisasterRecoveryType() const
{
    return m_disasterRecoveryType;
}

void ProtectGroup::SetDisasterRecoveryType(const string& _disasterRecoveryType)
{
    m_disasterRecoveryType = _disasterRecoveryType;
    m_disasterRecoveryTypeHasBeenSet = true;
}

bool ProtectGroup::DisasterRecoveryTypeHasBeenSet() const
{
    return m_disasterRecoveryTypeHasBeenSet;
}

string ProtectGroup::GetDataDirection() const
{
    return m_dataDirection;
}

void ProtectGroup::SetDataDirection(const string& _dataDirection)
{
    m_dataDirection = _dataDirection;
    m_dataDirectionHasBeenSet = true;
}

bool ProtectGroup::DataDirectionHasBeenSet() const
{
    return m_dataDirectionHasBeenSet;
}

string ProtectGroup::GetPeerCloudName() const
{
    return m_peerCloudName;
}

void ProtectGroup::SetPeerCloudName(const string& _peerCloudName)
{
    m_peerCloudName = _peerCloudName;
    m_peerCloudNameHasBeenSet = true;
}

bool ProtectGroup::PeerCloudNameHasBeenSet() const
{
    return m_peerCloudNameHasBeenSet;
}

string ProtectGroup::GetCreateFrom() const
{
    return m_createFrom;
}

void ProtectGroup::SetCreateFrom(const string& _createFrom)
{
    m_createFrom = _createFrom;
    m_createFromHasBeenSet = true;
}

bool ProtectGroup::CreateFromHasBeenSet() const
{
    return m_createFromHasBeenSet;
}

string ProtectGroup::GetLifeState() const
{
    return m_lifeState;
}

void ProtectGroup::SetLifeState(const string& _lifeState)
{
    m_lifeState = _lifeState;
    m_lifeStateHasBeenSet = true;
}

bool ProtectGroup::LifeStateHasBeenSet() const
{
    return m_lifeStateHasBeenSet;
}

string ProtectGroup::GetAccountUin() const
{
    return m_accountUin;
}

void ProtectGroup::SetAccountUin(const string& _accountUin)
{
    m_accountUin = _accountUin;
    m_accountUinHasBeenSet = true;
}

bool ProtectGroup::AccountUinHasBeenSet() const
{
    return m_accountUinHasBeenSet;
}

string ProtectGroup::GetSubAccountUin() const
{
    return m_subAccountUin;
}

void ProtectGroup::SetSubAccountUin(const string& _subAccountUin)
{
    m_subAccountUin = _subAccountUin;
    m_subAccountUinHasBeenSet = true;
}

bool ProtectGroup::SubAccountUinHasBeenSet() const
{
    return m_subAccountUinHasBeenSet;
}

string ProtectGroup::GetCreateTime() const
{
    return m_createTime;
}

void ProtectGroup::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ProtectGroup::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ProtectGroup::GetModifyTime() const
{
    return m_modifyTime;
}

void ProtectGroup::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool ProtectGroup::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

int64_t ProtectGroup::GetBindProtectedResourceCount() const
{
    return m_bindProtectedResourceCount;
}

void ProtectGroup::SetBindProtectedResourceCount(const int64_t& _bindProtectedResourceCount)
{
    m_bindProtectedResourceCount = _bindProtectedResourceCount;
    m_bindProtectedResourceCountHasBeenSet = true;
}

bool ProtectGroup::BindProtectedResourceCountHasBeenSet() const
{
    return m_bindProtectedResourceCountHasBeenSet;
}

int64_t ProtectGroup::GetErrorRecoveryPointObjectiveCount() const
{
    return m_errorRecoveryPointObjectiveCount;
}

void ProtectGroup::SetErrorRecoveryPointObjectiveCount(const int64_t& _errorRecoveryPointObjectiveCount)
{
    m_errorRecoveryPointObjectiveCount = _errorRecoveryPointObjectiveCount;
    m_errorRecoveryPointObjectiveCountHasBeenSet = true;
}

bool ProtectGroup::ErrorRecoveryPointObjectiveCountHasBeenSet() const
{
    return m_errorRecoveryPointObjectiveCountHasBeenSet;
}

vector<ProtectedResourceStatus> ProtectGroup::GetProtectedResourceStatusSet() const
{
    return m_protectedResourceStatusSet;
}

void ProtectGroup::SetProtectedResourceStatusSet(const vector<ProtectedResourceStatus>& _protectedResourceStatusSet)
{
    m_protectedResourceStatusSet = _protectedResourceStatusSet;
    m_protectedResourceStatusSetHasBeenSet = true;
}

bool ProtectGroup::ProtectedResourceStatusSetHasBeenSet() const
{
    return m_protectedResourceStatusSetHasBeenSet;
}

