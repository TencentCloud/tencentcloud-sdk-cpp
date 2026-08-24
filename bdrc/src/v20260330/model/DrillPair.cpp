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

#include <tencentcloud/bdrc/v20260330/model/DrillPair.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

DrillPair::DrillPair() :
    m_appIdHasBeenSet(false),
    m_drillPairIdHasBeenSet(false),
    m_drillPairNameHasBeenSet(false),
    m_drillPairStateHasBeenSet(false),
    m_sitePairIdHasBeenSet(false),
    m_copyPairIdHasBeenSet(false),
    m_sourceRegionHasBeenSet(false),
    m_sourceZoneHasBeenSet(false),
    m_targetRegionHasBeenSet(false),
    m_targetZoneHasBeenSet(false),
    m_sourceResourceIdHasBeenSet(false),
    m_targetResourceIdHasBeenSet(false),
    m_drillPairTypeHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_recoveryTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_rollbackingHasBeenSet(false),
    m_rollbackPercentHasBeenSet(false),
    m_accountUinHasBeenSet(false),
    m_subAccountUinHasBeenSet(false),
    m_protectGroupIdHasBeenSet(false),
    m_drillGroupIdHasBeenSet(false),
    m_copyPairNameHasBeenSet(false),
    m_drillGroupNameHasBeenSet(false)
{
}

CoreInternalOutcome DrillPair::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DrillPair.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("DrillPairId") && !value["DrillPairId"].IsNull())
    {
        if (!value["DrillPairId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrillPair.DrillPairId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drillPairId = string(value["DrillPairId"].GetString());
        m_drillPairIdHasBeenSet = true;
    }

    if (value.HasMember("DrillPairName") && !value["DrillPairName"].IsNull())
    {
        if (!value["DrillPairName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrillPair.DrillPairName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drillPairName = string(value["DrillPairName"].GetString());
        m_drillPairNameHasBeenSet = true;
    }

    if (value.HasMember("DrillPairState") && !value["DrillPairState"].IsNull())
    {
        if (!value["DrillPairState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrillPair.DrillPairState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drillPairState = string(value["DrillPairState"].GetString());
        m_drillPairStateHasBeenSet = true;
    }

    if (value.HasMember("SitePairId") && !value["SitePairId"].IsNull())
    {
        if (!value["SitePairId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrillPair.SitePairId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sitePairId = string(value["SitePairId"].GetString());
        m_sitePairIdHasBeenSet = true;
    }

    if (value.HasMember("CopyPairId") && !value["CopyPairId"].IsNull())
    {
        if (!value["CopyPairId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrillPair.CopyPairId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_copyPairId = string(value["CopyPairId"].GetString());
        m_copyPairIdHasBeenSet = true;
    }

    if (value.HasMember("SourceRegion") && !value["SourceRegion"].IsNull())
    {
        if (!value["SourceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrillPair.SourceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceRegion = string(value["SourceRegion"].GetString());
        m_sourceRegionHasBeenSet = true;
    }

    if (value.HasMember("SourceZone") && !value["SourceZone"].IsNull())
    {
        if (!value["SourceZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrillPair.SourceZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceZone = string(value["SourceZone"].GetString());
        m_sourceZoneHasBeenSet = true;
    }

    if (value.HasMember("TargetRegion") && !value["TargetRegion"].IsNull())
    {
        if (!value["TargetRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrillPair.TargetRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetRegion = string(value["TargetRegion"].GetString());
        m_targetRegionHasBeenSet = true;
    }

    if (value.HasMember("TargetZone") && !value["TargetZone"].IsNull())
    {
        if (!value["TargetZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrillPair.TargetZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetZone = string(value["TargetZone"].GetString());
        m_targetZoneHasBeenSet = true;
    }

    if (value.HasMember("SourceResourceId") && !value["SourceResourceId"].IsNull())
    {
        if (!value["SourceResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrillPair.SourceResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceResourceId = string(value["SourceResourceId"].GetString());
        m_sourceResourceIdHasBeenSet = true;
    }

    if (value.HasMember("TargetResourceId") && !value["TargetResourceId"].IsNull())
    {
        if (!value["TargetResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrillPair.TargetResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetResourceId = string(value["TargetResourceId"].GetString());
        m_targetResourceIdHasBeenSet = true;
    }

    if (value.HasMember("DrillPairType") && !value["DrillPairType"].IsNull())
    {
        if (!value["DrillPairType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrillPair.DrillPairType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drillPairType = string(value["DrillPairType"].GetString());
        m_drillPairTypeHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DrillPair.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("RecoveryTime") && !value["RecoveryTime"].IsNull())
    {
        if (!value["RecoveryTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrillPair.RecoveryTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recoveryTime = string(value["RecoveryTime"].GetString());
        m_recoveryTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrillPair.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrillPair.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Rollbacking") && !value["Rollbacking"].IsNull())
    {
        if (!value["Rollbacking"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DrillPair.Rollbacking` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rollbacking = value["Rollbacking"].GetInt64();
        m_rollbackingHasBeenSet = true;
    }

    if (value.HasMember("RollbackPercent") && !value["RollbackPercent"].IsNull())
    {
        if (!value["RollbackPercent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DrillPair.RollbackPercent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rollbackPercent = value["RollbackPercent"].GetInt64();
        m_rollbackPercentHasBeenSet = true;
    }

    if (value.HasMember("AccountUin") && !value["AccountUin"].IsNull())
    {
        if (!value["AccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrillPair.AccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountUin = string(value["AccountUin"].GetString());
        m_accountUinHasBeenSet = true;
    }

    if (value.HasMember("SubAccountUin") && !value["SubAccountUin"].IsNull())
    {
        if (!value["SubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrillPair.SubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountUin = string(value["SubAccountUin"].GetString());
        m_subAccountUinHasBeenSet = true;
    }

    if (value.HasMember("ProtectGroupId") && !value["ProtectGroupId"].IsNull())
    {
        if (!value["ProtectGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrillPair.ProtectGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectGroupId = string(value["ProtectGroupId"].GetString());
        m_protectGroupIdHasBeenSet = true;
    }

    if (value.HasMember("DrillGroupId") && !value["DrillGroupId"].IsNull())
    {
        if (!value["DrillGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrillPair.DrillGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drillGroupId = string(value["DrillGroupId"].GetString());
        m_drillGroupIdHasBeenSet = true;
    }

    if (value.HasMember("CopyPairName") && !value["CopyPairName"].IsNull())
    {
        if (!value["CopyPairName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrillPair.CopyPairName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_copyPairName = string(value["CopyPairName"].GetString());
        m_copyPairNameHasBeenSet = true;
    }

    if (value.HasMember("DrillGroupName") && !value["DrillGroupName"].IsNull())
    {
        if (!value["DrillGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrillPair.DrillGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drillGroupName = string(value["DrillGroupName"].GetString());
        m_drillGroupNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DrillPair::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_drillPairIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrillPairId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drillPairId.c_str(), allocator).Move(), allocator);
    }

    if (m_drillPairNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrillPairName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drillPairName.c_str(), allocator).Move(), allocator);
    }

    if (m_drillPairStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrillPairState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drillPairState.c_str(), allocator).Move(), allocator);
    }

    if (m_sitePairIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SitePairId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sitePairId.c_str(), allocator).Move(), allocator);
    }

    if (m_copyPairIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyPairId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_copyPairId.c_str(), allocator).Move(), allocator);
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

    if (m_drillPairTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrillPairType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drillPairType.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_recoveryTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecoveryTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recoveryTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
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

    if (m_copyPairNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyPairName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_copyPairName.c_str(), allocator).Move(), allocator);
    }

    if (m_drillGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrillGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drillGroupName.c_str(), allocator).Move(), allocator);
    }

}


int64_t DrillPair::GetAppId() const
{
    return m_appId;
}

void DrillPair::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DrillPair::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DrillPair::GetDrillPairId() const
{
    return m_drillPairId;
}

void DrillPair::SetDrillPairId(const string& _drillPairId)
{
    m_drillPairId = _drillPairId;
    m_drillPairIdHasBeenSet = true;
}

bool DrillPair::DrillPairIdHasBeenSet() const
{
    return m_drillPairIdHasBeenSet;
}

string DrillPair::GetDrillPairName() const
{
    return m_drillPairName;
}

void DrillPair::SetDrillPairName(const string& _drillPairName)
{
    m_drillPairName = _drillPairName;
    m_drillPairNameHasBeenSet = true;
}

bool DrillPair::DrillPairNameHasBeenSet() const
{
    return m_drillPairNameHasBeenSet;
}

string DrillPair::GetDrillPairState() const
{
    return m_drillPairState;
}

void DrillPair::SetDrillPairState(const string& _drillPairState)
{
    m_drillPairState = _drillPairState;
    m_drillPairStateHasBeenSet = true;
}

bool DrillPair::DrillPairStateHasBeenSet() const
{
    return m_drillPairStateHasBeenSet;
}

string DrillPair::GetSitePairId() const
{
    return m_sitePairId;
}

void DrillPair::SetSitePairId(const string& _sitePairId)
{
    m_sitePairId = _sitePairId;
    m_sitePairIdHasBeenSet = true;
}

bool DrillPair::SitePairIdHasBeenSet() const
{
    return m_sitePairIdHasBeenSet;
}

string DrillPair::GetCopyPairId() const
{
    return m_copyPairId;
}

void DrillPair::SetCopyPairId(const string& _copyPairId)
{
    m_copyPairId = _copyPairId;
    m_copyPairIdHasBeenSet = true;
}

bool DrillPair::CopyPairIdHasBeenSet() const
{
    return m_copyPairIdHasBeenSet;
}

string DrillPair::GetSourceRegion() const
{
    return m_sourceRegion;
}

void DrillPair::SetSourceRegion(const string& _sourceRegion)
{
    m_sourceRegion = _sourceRegion;
    m_sourceRegionHasBeenSet = true;
}

bool DrillPair::SourceRegionHasBeenSet() const
{
    return m_sourceRegionHasBeenSet;
}

string DrillPair::GetSourceZone() const
{
    return m_sourceZone;
}

void DrillPair::SetSourceZone(const string& _sourceZone)
{
    m_sourceZone = _sourceZone;
    m_sourceZoneHasBeenSet = true;
}

bool DrillPair::SourceZoneHasBeenSet() const
{
    return m_sourceZoneHasBeenSet;
}

string DrillPair::GetTargetRegion() const
{
    return m_targetRegion;
}

void DrillPair::SetTargetRegion(const string& _targetRegion)
{
    m_targetRegion = _targetRegion;
    m_targetRegionHasBeenSet = true;
}

bool DrillPair::TargetRegionHasBeenSet() const
{
    return m_targetRegionHasBeenSet;
}

string DrillPair::GetTargetZone() const
{
    return m_targetZone;
}

void DrillPair::SetTargetZone(const string& _targetZone)
{
    m_targetZone = _targetZone;
    m_targetZoneHasBeenSet = true;
}

bool DrillPair::TargetZoneHasBeenSet() const
{
    return m_targetZoneHasBeenSet;
}

string DrillPair::GetSourceResourceId() const
{
    return m_sourceResourceId;
}

void DrillPair::SetSourceResourceId(const string& _sourceResourceId)
{
    m_sourceResourceId = _sourceResourceId;
    m_sourceResourceIdHasBeenSet = true;
}

bool DrillPair::SourceResourceIdHasBeenSet() const
{
    return m_sourceResourceIdHasBeenSet;
}

string DrillPair::GetTargetResourceId() const
{
    return m_targetResourceId;
}

void DrillPair::SetTargetResourceId(const string& _targetResourceId)
{
    m_targetResourceId = _targetResourceId;
    m_targetResourceIdHasBeenSet = true;
}

bool DrillPair::TargetResourceIdHasBeenSet() const
{
    return m_targetResourceIdHasBeenSet;
}

string DrillPair::GetDrillPairType() const
{
    return m_drillPairType;
}

void DrillPair::SetDrillPairType(const string& _drillPairType)
{
    m_drillPairType = _drillPairType;
    m_drillPairTypeHasBeenSet = true;
}

bool DrillPair::DrillPairTypeHasBeenSet() const
{
    return m_drillPairTypeHasBeenSet;
}

int64_t DrillPair::GetSize() const
{
    return m_size;
}

void DrillPair::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool DrillPair::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string DrillPair::GetRecoveryTime() const
{
    return m_recoveryTime;
}

void DrillPair::SetRecoveryTime(const string& _recoveryTime)
{
    m_recoveryTime = _recoveryTime;
    m_recoveryTimeHasBeenSet = true;
}

bool DrillPair::RecoveryTimeHasBeenSet() const
{
    return m_recoveryTimeHasBeenSet;
}

string DrillPair::GetCreateTime() const
{
    return m_createTime;
}

void DrillPair::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DrillPair::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DrillPair::GetEndTime() const
{
    return m_endTime;
}

void DrillPair::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DrillPair::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DrillPair::GetRollbacking() const
{
    return m_rollbacking;
}

void DrillPair::SetRollbacking(const int64_t& _rollbacking)
{
    m_rollbacking = _rollbacking;
    m_rollbackingHasBeenSet = true;
}

bool DrillPair::RollbackingHasBeenSet() const
{
    return m_rollbackingHasBeenSet;
}

int64_t DrillPair::GetRollbackPercent() const
{
    return m_rollbackPercent;
}

void DrillPair::SetRollbackPercent(const int64_t& _rollbackPercent)
{
    m_rollbackPercent = _rollbackPercent;
    m_rollbackPercentHasBeenSet = true;
}

bool DrillPair::RollbackPercentHasBeenSet() const
{
    return m_rollbackPercentHasBeenSet;
}

string DrillPair::GetAccountUin() const
{
    return m_accountUin;
}

void DrillPair::SetAccountUin(const string& _accountUin)
{
    m_accountUin = _accountUin;
    m_accountUinHasBeenSet = true;
}

bool DrillPair::AccountUinHasBeenSet() const
{
    return m_accountUinHasBeenSet;
}

string DrillPair::GetSubAccountUin() const
{
    return m_subAccountUin;
}

void DrillPair::SetSubAccountUin(const string& _subAccountUin)
{
    m_subAccountUin = _subAccountUin;
    m_subAccountUinHasBeenSet = true;
}

bool DrillPair::SubAccountUinHasBeenSet() const
{
    return m_subAccountUinHasBeenSet;
}

string DrillPair::GetProtectGroupId() const
{
    return m_protectGroupId;
}

void DrillPair::SetProtectGroupId(const string& _protectGroupId)
{
    m_protectGroupId = _protectGroupId;
    m_protectGroupIdHasBeenSet = true;
}

bool DrillPair::ProtectGroupIdHasBeenSet() const
{
    return m_protectGroupIdHasBeenSet;
}

string DrillPair::GetDrillGroupId() const
{
    return m_drillGroupId;
}

void DrillPair::SetDrillGroupId(const string& _drillGroupId)
{
    m_drillGroupId = _drillGroupId;
    m_drillGroupIdHasBeenSet = true;
}

bool DrillPair::DrillGroupIdHasBeenSet() const
{
    return m_drillGroupIdHasBeenSet;
}

string DrillPair::GetCopyPairName() const
{
    return m_copyPairName;
}

void DrillPair::SetCopyPairName(const string& _copyPairName)
{
    m_copyPairName = _copyPairName;
    m_copyPairNameHasBeenSet = true;
}

bool DrillPair::CopyPairNameHasBeenSet() const
{
    return m_copyPairNameHasBeenSet;
}

string DrillPair::GetDrillGroupName() const
{
    return m_drillGroupName;
}

void DrillPair::SetDrillGroupName(const string& _drillGroupName)
{
    m_drillGroupName = _drillGroupName;
    m_drillGroupNameHasBeenSet = true;
}

bool DrillPair::DrillGroupNameHasBeenSet() const
{
    return m_drillGroupNameHasBeenSet;
}

