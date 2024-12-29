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

#include <tencentcloud/oceanus/v20190422/model/ClusterGroupSetItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

ClusterGroupSetItem::ClusterGroupSetItem() :
    m_clusterIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_creatorUinHasBeenSet(false),
    m_cuNumHasBeenSet(false),
    m_cuMemHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_netEnvironmentTypeHasBeenSet(false),
    m_freeCuNumHasBeenSet(false),
    m_freeCuHasBeenSet(false),
    m_runningCuHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_subEksHasBeenSet(false),
    m_billingResourceModeHasBeenSet(false),
    m_totalCpuHasBeenSet(false),
    m_totalMemHasBeenSet(false),
    m_runningCpuHasBeenSet(false),
    m_runningMemHasBeenSet(false)
{
}

CoreInternalOutcome ClusterGroupSetItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterGroupSetItem.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterGroupSetItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterGroupSetItem.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterGroupSetItem.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterGroupSetItem.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterGroupSetItem.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("CreatorUin") && !value["CreatorUin"].IsNull())
    {
        if (!value["CreatorUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterGroupSetItem.CreatorUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorUin = string(value["CreatorUin"].GetString());
        m_creatorUinHasBeenSet = true;
    }

    if (value.HasMember("CuNum") && !value["CuNum"].IsNull())
    {
        if (!value["CuNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterGroupSetItem.CuNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cuNum = value["CuNum"].GetInt64();
        m_cuNumHasBeenSet = true;
    }

    if (value.HasMember("CuMem") && !value["CuMem"].IsNull())
    {
        if (!value["CuMem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterGroupSetItem.CuMem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cuMem = value["CuMem"].GetInt64();
        m_cuMemHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterGroupSetItem.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterGroupSetItem.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterGroupSetItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterGroupSetItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterGroupSetItem.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("NetEnvironmentType") && !value["NetEnvironmentType"].IsNull())
    {
        if (!value["NetEnvironmentType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterGroupSetItem.NetEnvironmentType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_netEnvironmentType = value["NetEnvironmentType"].GetInt64();
        m_netEnvironmentTypeHasBeenSet = true;
    }

    if (value.HasMember("FreeCuNum") && !value["FreeCuNum"].IsNull())
    {
        if (!value["FreeCuNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterGroupSetItem.FreeCuNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_freeCuNum = value["FreeCuNum"].GetInt64();
        m_freeCuNumHasBeenSet = true;
    }

    if (value.HasMember("FreeCu") && !value["FreeCu"].IsNull())
    {
        if (!value["FreeCu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterGroupSetItem.FreeCu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_freeCu = value["FreeCu"].GetDouble();
        m_freeCuHasBeenSet = true;
    }

    if (value.HasMember("RunningCu") && !value["RunningCu"].IsNull())
    {
        if (!value["RunningCu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterGroupSetItem.RunningCu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_runningCu = value["RunningCu"].GetDouble();
        m_runningCuHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterGroupSetItem.PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("SubEks") && !value["SubEks"].IsNull())
    {
        if (!value["SubEks"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterGroupSetItem.SubEks` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_subEks.Deserialize(value["SubEks"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_subEksHasBeenSet = true;
    }

    if (value.HasMember("BillingResourceMode") && !value["BillingResourceMode"].IsNull())
    {
        if (!value["BillingResourceMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterGroupSetItem.BillingResourceMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingResourceMode = string(value["BillingResourceMode"].GetString());
        m_billingResourceModeHasBeenSet = true;
    }

    if (value.HasMember("TotalCpu") && !value["TotalCpu"].IsNull())
    {
        if (!value["TotalCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterGroupSetItem.TotalCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalCpu = value["TotalCpu"].GetDouble();
        m_totalCpuHasBeenSet = true;
    }

    if (value.HasMember("TotalMem") && !value["TotalMem"].IsNull())
    {
        if (!value["TotalMem"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterGroupSetItem.TotalMem` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalMem = value["TotalMem"].GetDouble();
        m_totalMemHasBeenSet = true;
    }

    if (value.HasMember("RunningCpu") && !value["RunningCpu"].IsNull())
    {
        if (!value["RunningCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterGroupSetItem.RunningCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_runningCpu = value["RunningCpu"].GetDouble();
        m_runningCpuHasBeenSet = true;
    }

    if (value.HasMember("RunningMem") && !value["RunningMem"].IsNull())
    {
        if (!value["RunningMem"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterGroupSetItem.RunningMem` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_runningMem = value["RunningMem"].GetDouble();
        m_runningMemHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterGroupSetItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorUin.c_str(), allocator).Move(), allocator);
    }

    if (m_cuNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CuNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cuNum, allocator);
    }

    if (m_cuMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CuMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cuMem, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_statusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusDesc.c_str(), allocator).Move(), allocator);
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

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_netEnvironmentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetEnvironmentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_netEnvironmentType, allocator);
    }

    if (m_freeCuNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreeCuNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_freeCuNum, allocator);
    }

    if (m_freeCuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreeCu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_freeCu, allocator);
    }

    if (m_runningCuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningCu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningCu, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_subEksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubEks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subEks.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_billingResourceModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingResourceMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billingResourceMode.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCpu, allocator);
    }

    if (m_totalMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalMem, allocator);
    }

    if (m_runningCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningCpu, allocator);
    }

    if (m_runningMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningMem, allocator);
    }

}


string ClusterGroupSetItem::GetClusterId() const
{
    return m_clusterId;
}

void ClusterGroupSetItem::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ClusterGroupSetItem::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ClusterGroupSetItem::GetName() const
{
    return m_name;
}

void ClusterGroupSetItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ClusterGroupSetItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ClusterGroupSetItem::GetRegion() const
{
    return m_region;
}

void ClusterGroupSetItem::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ClusterGroupSetItem::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string ClusterGroupSetItem::GetZone() const
{
    return m_zone;
}

void ClusterGroupSetItem::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ClusterGroupSetItem::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t ClusterGroupSetItem::GetAppId() const
{
    return m_appId;
}

void ClusterGroupSetItem::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ClusterGroupSetItem::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string ClusterGroupSetItem::GetOwnerUin() const
{
    return m_ownerUin;
}

void ClusterGroupSetItem::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool ClusterGroupSetItem::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string ClusterGroupSetItem::GetCreatorUin() const
{
    return m_creatorUin;
}

void ClusterGroupSetItem::SetCreatorUin(const string& _creatorUin)
{
    m_creatorUin = _creatorUin;
    m_creatorUinHasBeenSet = true;
}

bool ClusterGroupSetItem::CreatorUinHasBeenSet() const
{
    return m_creatorUinHasBeenSet;
}

int64_t ClusterGroupSetItem::GetCuNum() const
{
    return m_cuNum;
}

void ClusterGroupSetItem::SetCuNum(const int64_t& _cuNum)
{
    m_cuNum = _cuNum;
    m_cuNumHasBeenSet = true;
}

bool ClusterGroupSetItem::CuNumHasBeenSet() const
{
    return m_cuNumHasBeenSet;
}

int64_t ClusterGroupSetItem::GetCuMem() const
{
    return m_cuMem;
}

void ClusterGroupSetItem::SetCuMem(const int64_t& _cuMem)
{
    m_cuMem = _cuMem;
    m_cuMemHasBeenSet = true;
}

bool ClusterGroupSetItem::CuMemHasBeenSet() const
{
    return m_cuMemHasBeenSet;
}

int64_t ClusterGroupSetItem::GetStatus() const
{
    return m_status;
}

void ClusterGroupSetItem::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ClusterGroupSetItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ClusterGroupSetItem::GetStatusDesc() const
{
    return m_statusDesc;
}

void ClusterGroupSetItem::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool ClusterGroupSetItem::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

string ClusterGroupSetItem::GetCreateTime() const
{
    return m_createTime;
}

void ClusterGroupSetItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ClusterGroupSetItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ClusterGroupSetItem::GetUpdateTime() const
{
    return m_updateTime;
}

void ClusterGroupSetItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ClusterGroupSetItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ClusterGroupSetItem::GetRemark() const
{
    return m_remark;
}

void ClusterGroupSetItem::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ClusterGroupSetItem::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t ClusterGroupSetItem::GetNetEnvironmentType() const
{
    return m_netEnvironmentType;
}

void ClusterGroupSetItem::SetNetEnvironmentType(const int64_t& _netEnvironmentType)
{
    m_netEnvironmentType = _netEnvironmentType;
    m_netEnvironmentTypeHasBeenSet = true;
}

bool ClusterGroupSetItem::NetEnvironmentTypeHasBeenSet() const
{
    return m_netEnvironmentTypeHasBeenSet;
}

int64_t ClusterGroupSetItem::GetFreeCuNum() const
{
    return m_freeCuNum;
}

void ClusterGroupSetItem::SetFreeCuNum(const int64_t& _freeCuNum)
{
    m_freeCuNum = _freeCuNum;
    m_freeCuNumHasBeenSet = true;
}

bool ClusterGroupSetItem::FreeCuNumHasBeenSet() const
{
    return m_freeCuNumHasBeenSet;
}

double ClusterGroupSetItem::GetFreeCu() const
{
    return m_freeCu;
}

void ClusterGroupSetItem::SetFreeCu(const double& _freeCu)
{
    m_freeCu = _freeCu;
    m_freeCuHasBeenSet = true;
}

bool ClusterGroupSetItem::FreeCuHasBeenSet() const
{
    return m_freeCuHasBeenSet;
}

double ClusterGroupSetItem::GetRunningCu() const
{
    return m_runningCu;
}

void ClusterGroupSetItem::SetRunningCu(const double& _runningCu)
{
    m_runningCu = _runningCu;
    m_runningCuHasBeenSet = true;
}

bool ClusterGroupSetItem::RunningCuHasBeenSet() const
{
    return m_runningCuHasBeenSet;
}

int64_t ClusterGroupSetItem::GetPayMode() const
{
    return m_payMode;
}

void ClusterGroupSetItem::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool ClusterGroupSetItem::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

SubEks ClusterGroupSetItem::GetSubEks() const
{
    return m_subEks;
}

void ClusterGroupSetItem::SetSubEks(const SubEks& _subEks)
{
    m_subEks = _subEks;
    m_subEksHasBeenSet = true;
}

bool ClusterGroupSetItem::SubEksHasBeenSet() const
{
    return m_subEksHasBeenSet;
}

string ClusterGroupSetItem::GetBillingResourceMode() const
{
    return m_billingResourceMode;
}

void ClusterGroupSetItem::SetBillingResourceMode(const string& _billingResourceMode)
{
    m_billingResourceMode = _billingResourceMode;
    m_billingResourceModeHasBeenSet = true;
}

bool ClusterGroupSetItem::BillingResourceModeHasBeenSet() const
{
    return m_billingResourceModeHasBeenSet;
}

double ClusterGroupSetItem::GetTotalCpu() const
{
    return m_totalCpu;
}

void ClusterGroupSetItem::SetTotalCpu(const double& _totalCpu)
{
    m_totalCpu = _totalCpu;
    m_totalCpuHasBeenSet = true;
}

bool ClusterGroupSetItem::TotalCpuHasBeenSet() const
{
    return m_totalCpuHasBeenSet;
}

double ClusterGroupSetItem::GetTotalMem() const
{
    return m_totalMem;
}

void ClusterGroupSetItem::SetTotalMem(const double& _totalMem)
{
    m_totalMem = _totalMem;
    m_totalMemHasBeenSet = true;
}

bool ClusterGroupSetItem::TotalMemHasBeenSet() const
{
    return m_totalMemHasBeenSet;
}

double ClusterGroupSetItem::GetRunningCpu() const
{
    return m_runningCpu;
}

void ClusterGroupSetItem::SetRunningCpu(const double& _runningCpu)
{
    m_runningCpu = _runningCpu;
    m_runningCpuHasBeenSet = true;
}

bool ClusterGroupSetItem::RunningCpuHasBeenSet() const
{
    return m_runningCpuHasBeenSet;
}

double ClusterGroupSetItem::GetRunningMem() const
{
    return m_runningMem;
}

void ClusterGroupSetItem::SetRunningMem(const double& _runningMem)
{
    m_runningMem = _runningMem;
    m_runningMemHasBeenSet = true;
}

bool ClusterGroupSetItem::RunningMemHasBeenSet() const
{
    return m_runningMemHasBeenSet;
}

