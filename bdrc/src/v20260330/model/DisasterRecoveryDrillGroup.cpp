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

#include <tencentcloud/bdrc/v20260330/model/DisasterRecoveryDrillGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

DisasterRecoveryDrillGroup::DisasterRecoveryDrillGroup() :
    m_idHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_accountUinHasBeenSet(false),
    m_subAccountUinHasBeenSet(false),
    m_sitePairIdHasBeenSet(false),
    m_protectGroupIdHasBeenSet(false),
    m_drillGroupIdHasBeenSet(false),
    m_drillGroupNameHasBeenSet(false),
    m_drillGroupTypeHasBeenSet(false),
    m_recoveryTimeHasBeenSet(false),
    m_drillVpcHasBeenSet(false),
    m_drillSecurityGroupHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_lifeStateHasBeenSet(false),
    m_disasterRecoveryTypeHasBeenSet(false),
    m_copyTypeHasBeenSet(false),
    m_peerCloudNameHasBeenSet(false),
    m_localCloudNameHasBeenSet(false),
    m_sourceRegionHasBeenSet(false),
    m_sourceZoneHasBeenSet(false),
    m_sourceVpcHasBeenSet(false),
    m_drillRegionHasBeenSet(false),
    m_drillZoneHasBeenSet(false),
    m_dataDirectionHasBeenSet(false),
    m_bindDrilledResourceCountHasBeenSet(false),
    m_drilledResourceStatusSetHasBeenSet(false)
{
}

CoreInternalOutcome DisasterRecoveryDrillGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryDrillGroup.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryDrillGroup.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("AccountUin") && !value["AccountUin"].IsNull())
    {
        if (!value["AccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryDrillGroup.AccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountUin = string(value["AccountUin"].GetString());
        m_accountUinHasBeenSet = true;
    }

    if (value.HasMember("SubAccountUin") && !value["SubAccountUin"].IsNull())
    {
        if (!value["SubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryDrillGroup.SubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountUin = string(value["SubAccountUin"].GetString());
        m_subAccountUinHasBeenSet = true;
    }

    if (value.HasMember("SitePairId") && !value["SitePairId"].IsNull())
    {
        if (!value["SitePairId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryDrillGroup.SitePairId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sitePairId = string(value["SitePairId"].GetString());
        m_sitePairIdHasBeenSet = true;
    }

    if (value.HasMember("ProtectGroupId") && !value["ProtectGroupId"].IsNull())
    {
        if (!value["ProtectGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryDrillGroup.ProtectGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectGroupId = string(value["ProtectGroupId"].GetString());
        m_protectGroupIdHasBeenSet = true;
    }

    if (value.HasMember("DrillGroupId") && !value["DrillGroupId"].IsNull())
    {
        if (!value["DrillGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryDrillGroup.DrillGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drillGroupId = string(value["DrillGroupId"].GetString());
        m_drillGroupIdHasBeenSet = true;
    }

    if (value.HasMember("DrillGroupName") && !value["DrillGroupName"].IsNull())
    {
        if (!value["DrillGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryDrillGroup.DrillGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drillGroupName = string(value["DrillGroupName"].GetString());
        m_drillGroupNameHasBeenSet = true;
    }

    if (value.HasMember("DrillGroupType") && !value["DrillGroupType"].IsNull())
    {
        if (!value["DrillGroupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryDrillGroup.DrillGroupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drillGroupType = string(value["DrillGroupType"].GetString());
        m_drillGroupTypeHasBeenSet = true;
    }

    if (value.HasMember("RecoveryTime") && !value["RecoveryTime"].IsNull())
    {
        if (!value["RecoveryTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryDrillGroup.RecoveryTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recoveryTime = string(value["RecoveryTime"].GetString());
        m_recoveryTimeHasBeenSet = true;
    }

    if (value.HasMember("DrillVpc") && !value["DrillVpc"].IsNull())
    {
        if (!value["DrillVpc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryDrillGroup.DrillVpc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drillVpc = string(value["DrillVpc"].GetString());
        m_drillVpcHasBeenSet = true;
    }

    if (value.HasMember("DrillSecurityGroup") && !value["DrillSecurityGroup"].IsNull())
    {
        if (!value["DrillSecurityGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryDrillGroup.DrillSecurityGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drillSecurityGroup = string(value["DrillSecurityGroup"].GetString());
        m_drillSecurityGroupHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryDrillGroup.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryDrillGroup.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("LifeState") && !value["LifeState"].IsNull())
    {
        if (!value["LifeState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryDrillGroup.LifeState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lifeState = string(value["LifeState"].GetString());
        m_lifeStateHasBeenSet = true;
    }

    if (value.HasMember("DisasterRecoveryType") && !value["DisasterRecoveryType"].IsNull())
    {
        if (!value["DisasterRecoveryType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryDrillGroup.DisasterRecoveryType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_disasterRecoveryType = string(value["DisasterRecoveryType"].GetString());
        m_disasterRecoveryTypeHasBeenSet = true;
    }

    if (value.HasMember("CopyType") && !value["CopyType"].IsNull())
    {
        if (!value["CopyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryDrillGroup.CopyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_copyType = string(value["CopyType"].GetString());
        m_copyTypeHasBeenSet = true;
    }

    if (value.HasMember("PeerCloudName") && !value["PeerCloudName"].IsNull())
    {
        if (!value["PeerCloudName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryDrillGroup.PeerCloudName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_peerCloudName = string(value["PeerCloudName"].GetString());
        m_peerCloudNameHasBeenSet = true;
    }

    if (value.HasMember("LocalCloudName") && !value["LocalCloudName"].IsNull())
    {
        if (!value["LocalCloudName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryDrillGroup.LocalCloudName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localCloudName = string(value["LocalCloudName"].GetString());
        m_localCloudNameHasBeenSet = true;
    }

    if (value.HasMember("SourceRegion") && !value["SourceRegion"].IsNull())
    {
        if (!value["SourceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryDrillGroup.SourceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceRegion = string(value["SourceRegion"].GetString());
        m_sourceRegionHasBeenSet = true;
    }

    if (value.HasMember("SourceZone") && !value["SourceZone"].IsNull())
    {
        if (!value["SourceZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryDrillGroup.SourceZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceZone = string(value["SourceZone"].GetString());
        m_sourceZoneHasBeenSet = true;
    }

    if (value.HasMember("SourceVpc") && !value["SourceVpc"].IsNull())
    {
        if (!value["SourceVpc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryDrillGroup.SourceVpc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceVpc = string(value["SourceVpc"].GetString());
        m_sourceVpcHasBeenSet = true;
    }

    if (value.HasMember("DrillRegion") && !value["DrillRegion"].IsNull())
    {
        if (!value["DrillRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryDrillGroup.DrillRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drillRegion = string(value["DrillRegion"].GetString());
        m_drillRegionHasBeenSet = true;
    }

    if (value.HasMember("DrillZone") && !value["DrillZone"].IsNull())
    {
        if (!value["DrillZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryDrillGroup.DrillZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drillZone = string(value["DrillZone"].GetString());
        m_drillZoneHasBeenSet = true;
    }

    if (value.HasMember("DataDirection") && !value["DataDirection"].IsNull())
    {
        if (!value["DataDirection"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryDrillGroup.DataDirection` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataDirection = string(value["DataDirection"].GetString());
        m_dataDirectionHasBeenSet = true;
    }

    if (value.HasMember("BindDrilledResourceCount") && !value["BindDrilledResourceCount"].IsNull())
    {
        if (!value["BindDrilledResourceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryDrillGroup.BindDrilledResourceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bindDrilledResourceCount = value["BindDrilledResourceCount"].GetInt64();
        m_bindDrilledResourceCountHasBeenSet = true;
    }

    if (value.HasMember("DrilledResourceStatusSet") && !value["DrilledResourceStatusSet"].IsNull())
    {
        if (!value["DrilledResourceStatusSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryDrillGroup.DrilledResourceStatusSet` is not array type"));

        const rapidjson::Value &tmpValue = value["DrilledResourceStatusSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DrilledResourceStatus item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_drilledResourceStatusSet.push_back(item);
        }
        m_drilledResourceStatusSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DisasterRecoveryDrillGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
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

    if (m_sitePairIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SitePairId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sitePairId.c_str(), allocator).Move(), allocator);
    }

    if (m_protectGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_drillGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrillGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drillGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_drillGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrillGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drillGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_drillGroupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrillGroupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drillGroupType.c_str(), allocator).Move(), allocator);
    }

    if (m_recoveryTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecoveryTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recoveryTime.c_str(), allocator).Move(), allocator);
    }

    if (m_drillVpcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrillVpc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drillVpc.c_str(), allocator).Move(), allocator);
    }

    if (m_drillSecurityGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrillSecurityGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drillSecurityGroup.c_str(), allocator).Move(), allocator);
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

    if (m_lifeStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lifeState.c_str(), allocator).Move(), allocator);
    }

    if (m_disasterRecoveryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisasterRecoveryType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_disasterRecoveryType.c_str(), allocator).Move(), allocator);
    }

    if (m_copyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_copyType.c_str(), allocator).Move(), allocator);
    }

    if (m_peerCloudNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerCloudName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_peerCloudName.c_str(), allocator).Move(), allocator);
    }

    if (m_localCloudNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalCloudName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_localCloudName.c_str(), allocator).Move(), allocator);
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

    if (m_drillRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrillRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drillRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_drillZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrillZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drillZone.c_str(), allocator).Move(), allocator);
    }

    if (m_dataDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDirection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataDirection.c_str(), allocator).Move(), allocator);
    }

    if (m_bindDrilledResourceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindDrilledResourceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindDrilledResourceCount, allocator);
    }

    if (m_drilledResourceStatusSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrilledResourceStatusSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_drilledResourceStatusSet.begin(); itr != m_drilledResourceStatusSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t DisasterRecoveryDrillGroup::GetId() const
{
    return m_id;
}

void DisasterRecoveryDrillGroup::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DisasterRecoveryDrillGroup::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t DisasterRecoveryDrillGroup::GetAppId() const
{
    return m_appId;
}

void DisasterRecoveryDrillGroup::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DisasterRecoveryDrillGroup::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DisasterRecoveryDrillGroup::GetAccountUin() const
{
    return m_accountUin;
}

void DisasterRecoveryDrillGroup::SetAccountUin(const string& _accountUin)
{
    m_accountUin = _accountUin;
    m_accountUinHasBeenSet = true;
}

bool DisasterRecoveryDrillGroup::AccountUinHasBeenSet() const
{
    return m_accountUinHasBeenSet;
}

string DisasterRecoveryDrillGroup::GetSubAccountUin() const
{
    return m_subAccountUin;
}

void DisasterRecoveryDrillGroup::SetSubAccountUin(const string& _subAccountUin)
{
    m_subAccountUin = _subAccountUin;
    m_subAccountUinHasBeenSet = true;
}

bool DisasterRecoveryDrillGroup::SubAccountUinHasBeenSet() const
{
    return m_subAccountUinHasBeenSet;
}

string DisasterRecoveryDrillGroup::GetSitePairId() const
{
    return m_sitePairId;
}

void DisasterRecoveryDrillGroup::SetSitePairId(const string& _sitePairId)
{
    m_sitePairId = _sitePairId;
    m_sitePairIdHasBeenSet = true;
}

bool DisasterRecoveryDrillGroup::SitePairIdHasBeenSet() const
{
    return m_sitePairIdHasBeenSet;
}

string DisasterRecoveryDrillGroup::GetProtectGroupId() const
{
    return m_protectGroupId;
}

void DisasterRecoveryDrillGroup::SetProtectGroupId(const string& _protectGroupId)
{
    m_protectGroupId = _protectGroupId;
    m_protectGroupIdHasBeenSet = true;
}

bool DisasterRecoveryDrillGroup::ProtectGroupIdHasBeenSet() const
{
    return m_protectGroupIdHasBeenSet;
}

string DisasterRecoveryDrillGroup::GetDrillGroupId() const
{
    return m_drillGroupId;
}

void DisasterRecoveryDrillGroup::SetDrillGroupId(const string& _drillGroupId)
{
    m_drillGroupId = _drillGroupId;
    m_drillGroupIdHasBeenSet = true;
}

bool DisasterRecoveryDrillGroup::DrillGroupIdHasBeenSet() const
{
    return m_drillGroupIdHasBeenSet;
}

string DisasterRecoveryDrillGroup::GetDrillGroupName() const
{
    return m_drillGroupName;
}

void DisasterRecoveryDrillGroup::SetDrillGroupName(const string& _drillGroupName)
{
    m_drillGroupName = _drillGroupName;
    m_drillGroupNameHasBeenSet = true;
}

bool DisasterRecoveryDrillGroup::DrillGroupNameHasBeenSet() const
{
    return m_drillGroupNameHasBeenSet;
}

string DisasterRecoveryDrillGroup::GetDrillGroupType() const
{
    return m_drillGroupType;
}

void DisasterRecoveryDrillGroup::SetDrillGroupType(const string& _drillGroupType)
{
    m_drillGroupType = _drillGroupType;
    m_drillGroupTypeHasBeenSet = true;
}

bool DisasterRecoveryDrillGroup::DrillGroupTypeHasBeenSet() const
{
    return m_drillGroupTypeHasBeenSet;
}

string DisasterRecoveryDrillGroup::GetRecoveryTime() const
{
    return m_recoveryTime;
}

void DisasterRecoveryDrillGroup::SetRecoveryTime(const string& _recoveryTime)
{
    m_recoveryTime = _recoveryTime;
    m_recoveryTimeHasBeenSet = true;
}

bool DisasterRecoveryDrillGroup::RecoveryTimeHasBeenSet() const
{
    return m_recoveryTimeHasBeenSet;
}

string DisasterRecoveryDrillGroup::GetDrillVpc() const
{
    return m_drillVpc;
}

void DisasterRecoveryDrillGroup::SetDrillVpc(const string& _drillVpc)
{
    m_drillVpc = _drillVpc;
    m_drillVpcHasBeenSet = true;
}

bool DisasterRecoveryDrillGroup::DrillVpcHasBeenSet() const
{
    return m_drillVpcHasBeenSet;
}

string DisasterRecoveryDrillGroup::GetDrillSecurityGroup() const
{
    return m_drillSecurityGroup;
}

void DisasterRecoveryDrillGroup::SetDrillSecurityGroup(const string& _drillSecurityGroup)
{
    m_drillSecurityGroup = _drillSecurityGroup;
    m_drillSecurityGroupHasBeenSet = true;
}

bool DisasterRecoveryDrillGroup::DrillSecurityGroupHasBeenSet() const
{
    return m_drillSecurityGroupHasBeenSet;
}

string DisasterRecoveryDrillGroup::GetCreateTime() const
{
    return m_createTime;
}

void DisasterRecoveryDrillGroup::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DisasterRecoveryDrillGroup::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DisasterRecoveryDrillGroup::GetModifyTime() const
{
    return m_modifyTime;
}

void DisasterRecoveryDrillGroup::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool DisasterRecoveryDrillGroup::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string DisasterRecoveryDrillGroup::GetLifeState() const
{
    return m_lifeState;
}

void DisasterRecoveryDrillGroup::SetLifeState(const string& _lifeState)
{
    m_lifeState = _lifeState;
    m_lifeStateHasBeenSet = true;
}

bool DisasterRecoveryDrillGroup::LifeStateHasBeenSet() const
{
    return m_lifeStateHasBeenSet;
}

string DisasterRecoveryDrillGroup::GetDisasterRecoveryType() const
{
    return m_disasterRecoveryType;
}

void DisasterRecoveryDrillGroup::SetDisasterRecoveryType(const string& _disasterRecoveryType)
{
    m_disasterRecoveryType = _disasterRecoveryType;
    m_disasterRecoveryTypeHasBeenSet = true;
}

bool DisasterRecoveryDrillGroup::DisasterRecoveryTypeHasBeenSet() const
{
    return m_disasterRecoveryTypeHasBeenSet;
}

string DisasterRecoveryDrillGroup::GetCopyType() const
{
    return m_copyType;
}

void DisasterRecoveryDrillGroup::SetCopyType(const string& _copyType)
{
    m_copyType = _copyType;
    m_copyTypeHasBeenSet = true;
}

bool DisasterRecoveryDrillGroup::CopyTypeHasBeenSet() const
{
    return m_copyTypeHasBeenSet;
}

string DisasterRecoveryDrillGroup::GetPeerCloudName() const
{
    return m_peerCloudName;
}

void DisasterRecoveryDrillGroup::SetPeerCloudName(const string& _peerCloudName)
{
    m_peerCloudName = _peerCloudName;
    m_peerCloudNameHasBeenSet = true;
}

bool DisasterRecoveryDrillGroup::PeerCloudNameHasBeenSet() const
{
    return m_peerCloudNameHasBeenSet;
}

string DisasterRecoveryDrillGroup::GetLocalCloudName() const
{
    return m_localCloudName;
}

void DisasterRecoveryDrillGroup::SetLocalCloudName(const string& _localCloudName)
{
    m_localCloudName = _localCloudName;
    m_localCloudNameHasBeenSet = true;
}

bool DisasterRecoveryDrillGroup::LocalCloudNameHasBeenSet() const
{
    return m_localCloudNameHasBeenSet;
}

string DisasterRecoveryDrillGroup::GetSourceRegion() const
{
    return m_sourceRegion;
}

void DisasterRecoveryDrillGroup::SetSourceRegion(const string& _sourceRegion)
{
    m_sourceRegion = _sourceRegion;
    m_sourceRegionHasBeenSet = true;
}

bool DisasterRecoveryDrillGroup::SourceRegionHasBeenSet() const
{
    return m_sourceRegionHasBeenSet;
}

string DisasterRecoveryDrillGroup::GetSourceZone() const
{
    return m_sourceZone;
}

void DisasterRecoveryDrillGroup::SetSourceZone(const string& _sourceZone)
{
    m_sourceZone = _sourceZone;
    m_sourceZoneHasBeenSet = true;
}

bool DisasterRecoveryDrillGroup::SourceZoneHasBeenSet() const
{
    return m_sourceZoneHasBeenSet;
}

string DisasterRecoveryDrillGroup::GetSourceVpc() const
{
    return m_sourceVpc;
}

void DisasterRecoveryDrillGroup::SetSourceVpc(const string& _sourceVpc)
{
    m_sourceVpc = _sourceVpc;
    m_sourceVpcHasBeenSet = true;
}

bool DisasterRecoveryDrillGroup::SourceVpcHasBeenSet() const
{
    return m_sourceVpcHasBeenSet;
}

string DisasterRecoveryDrillGroup::GetDrillRegion() const
{
    return m_drillRegion;
}

void DisasterRecoveryDrillGroup::SetDrillRegion(const string& _drillRegion)
{
    m_drillRegion = _drillRegion;
    m_drillRegionHasBeenSet = true;
}

bool DisasterRecoveryDrillGroup::DrillRegionHasBeenSet() const
{
    return m_drillRegionHasBeenSet;
}

string DisasterRecoveryDrillGroup::GetDrillZone() const
{
    return m_drillZone;
}

void DisasterRecoveryDrillGroup::SetDrillZone(const string& _drillZone)
{
    m_drillZone = _drillZone;
    m_drillZoneHasBeenSet = true;
}

bool DisasterRecoveryDrillGroup::DrillZoneHasBeenSet() const
{
    return m_drillZoneHasBeenSet;
}

string DisasterRecoveryDrillGroup::GetDataDirection() const
{
    return m_dataDirection;
}

void DisasterRecoveryDrillGroup::SetDataDirection(const string& _dataDirection)
{
    m_dataDirection = _dataDirection;
    m_dataDirectionHasBeenSet = true;
}

bool DisasterRecoveryDrillGroup::DataDirectionHasBeenSet() const
{
    return m_dataDirectionHasBeenSet;
}

int64_t DisasterRecoveryDrillGroup::GetBindDrilledResourceCount() const
{
    return m_bindDrilledResourceCount;
}

void DisasterRecoveryDrillGroup::SetBindDrilledResourceCount(const int64_t& _bindDrilledResourceCount)
{
    m_bindDrilledResourceCount = _bindDrilledResourceCount;
    m_bindDrilledResourceCountHasBeenSet = true;
}

bool DisasterRecoveryDrillGroup::BindDrilledResourceCountHasBeenSet() const
{
    return m_bindDrilledResourceCountHasBeenSet;
}

vector<DrilledResourceStatus> DisasterRecoveryDrillGroup::GetDrilledResourceStatusSet() const
{
    return m_drilledResourceStatusSet;
}

void DisasterRecoveryDrillGroup::SetDrilledResourceStatusSet(const vector<DrilledResourceStatus>& _drilledResourceStatusSet)
{
    m_drilledResourceStatusSet = _drilledResourceStatusSet;
    m_drilledResourceStatusSetHasBeenSet = true;
}

bool DisasterRecoveryDrillGroup::DrilledResourceStatusSetHasBeenSet() const
{
    return m_drilledResourceStatusSetHasBeenSet;
}

