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

#include <tencentcloud/bm/v20180423/model/DeviceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bm::V20180423::Model;
using namespace std;

DeviceInfo::DeviceInfo() :
    m_instanceIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_deviceStatusHasBeenSet(false),
    m_operateStatusHasBeenSet(false),
    m_osTypeIdHasBeenSet(false),
    m_raidIdHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_wanIpHasBeenSet(false),
    m_lanIpHasBeenSet(false),
    m_deliverTimeHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_deviceClassCodeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_cpmPayModeHasBeenSet(false),
    m_dhcpIpHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_subnetNameHasBeenSet(false),
    m_vpcCidrBlockHasBeenSet(false),
    m_subnetCidrBlockHasBeenSet(false),
    m_isLuckyDeviceHasBeenSet(false),
    m_maintainStatusHasBeenSet(false),
    m_maintainMessageHasBeenSet(false)
{
}

CoreInternalOutcome DeviceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceStatus") && !value["DeviceStatus"].IsNull())
    {
        if (!value["DeviceStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.DeviceStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deviceStatus = value["DeviceStatus"].GetUint64();
        m_deviceStatusHasBeenSet = true;
    }

    if (value.HasMember("OperateStatus") && !value["OperateStatus"].IsNull())
    {
        if (!value["OperateStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.OperateStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_operateStatus = value["OperateStatus"].GetUint64();
        m_operateStatusHasBeenSet = true;
    }

    if (value.HasMember("OsTypeId") && !value["OsTypeId"].IsNull())
    {
        if (!value["OsTypeId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.OsTypeId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_osTypeId = value["OsTypeId"].GetUint64();
        m_osTypeIdHasBeenSet = true;
    }

    if (value.HasMember("RaidId") && !value["RaidId"].IsNull())
    {
        if (!value["RaidId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.RaidId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_raidId = value["RaidId"].GetUint64();
        m_raidIdHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("WanIp") && !value["WanIp"].IsNull())
    {
        if (!value["WanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.WanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanIp = string(value["WanIp"].GetString());
        m_wanIpHasBeenSet = true;
    }

    if (value.HasMember("LanIp") && !value["LanIp"].IsNull())
    {
        if (!value["LanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.LanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lanIp = string(value["LanIp"].GetString());
        m_lanIpHasBeenSet = true;
    }

    if (value.HasMember("DeliverTime") && !value["DeliverTime"].IsNull())
    {
        if (!value["DeliverTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.DeliverTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deliverTime = string(value["DeliverTime"].GetString());
        m_deliverTimeHasBeenSet = true;
    }

    if (value.HasMember("Deadline") && !value["Deadline"].IsNull())
    {
        if (!value["Deadline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.Deadline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadline = string(value["Deadline"].GetString());
        m_deadlineHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.AutoRenewFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetUint64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("DeviceClassCode") && !value["DeviceClassCode"].IsNull())
    {
        if (!value["DeviceClassCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.DeviceClassCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceClassCode = string(value["DeviceClassCode"].GetString());
        m_deviceClassCodeHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.Tags` is not array type"));

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

    if (value.HasMember("CpmPayMode") && !value["CpmPayMode"].IsNull())
    {
        if (!value["CpmPayMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.CpmPayMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpmPayMode = value["CpmPayMode"].GetUint64();
        m_cpmPayModeHasBeenSet = true;
    }

    if (value.HasMember("DhcpIp") && !value["DhcpIp"].IsNull())
    {
        if (!value["DhcpIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.DhcpIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dhcpIp = string(value["DhcpIp"].GetString());
        m_dhcpIpHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("SubnetName") && !value["SubnetName"].IsNull())
    {
        if (!value["SubnetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.SubnetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetName = string(value["SubnetName"].GetString());
        m_subnetNameHasBeenSet = true;
    }

    if (value.HasMember("VpcCidrBlock") && !value["VpcCidrBlock"].IsNull())
    {
        if (!value["VpcCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.VpcCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcCidrBlock = string(value["VpcCidrBlock"].GetString());
        m_vpcCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("SubnetCidrBlock") && !value["SubnetCidrBlock"].IsNull())
    {
        if (!value["SubnetCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.SubnetCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetCidrBlock = string(value["SubnetCidrBlock"].GetString());
        m_subnetCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("IsLuckyDevice") && !value["IsLuckyDevice"].IsNull())
    {
        if (!value["IsLuckyDevice"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.IsLuckyDevice` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isLuckyDevice = value["IsLuckyDevice"].GetUint64();
        m_isLuckyDeviceHasBeenSet = true;
    }

    if (value.HasMember("MaintainStatus") && !value["MaintainStatus"].IsNull())
    {
        if (!value["MaintainStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.MaintainStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maintainStatus = string(value["MaintainStatus"].GetString());
        m_maintainStatusHasBeenSet = true;
    }

    if (value.HasMember("MaintainMessage") && !value["MaintainMessage"].IsNull())
    {
        if (!value["MaintainMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.MaintainMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maintainMessage = string(value["MaintainMessage"].GetString());
        m_maintainMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deviceStatus, allocator);
    }

    if (m_operateStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operateStatus, allocator);
    }

    if (m_osTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsTypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_osTypeId, allocator);
    }

    if (m_raidIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RaidId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_raidId, allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_wanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_lanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_deliverTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliverTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deliverTime.c_str(), allocator).Move(), allocator);
    }

    if (m_deadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deadline.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_deviceClassCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceClassCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceClassCode.c_str(), allocator).Move(), allocator);
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

    if (m_cpmPayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpmPayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpmPayMode, allocator);
    }

    if (m_dhcpIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DhcpIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dhcpIp.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_isLuckyDeviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLuckyDevice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLuckyDevice, allocator);
    }

    if (m_maintainStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaintainStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maintainStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_maintainMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaintainMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maintainMessage.c_str(), allocator).Move(), allocator);
    }

}


string DeviceInfo::GetInstanceId() const
{
    return m_instanceId;
}

void DeviceInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DeviceInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DeviceInfo::GetVpcId() const
{
    return m_vpcId;
}

void DeviceInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DeviceInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DeviceInfo::GetSubnetId() const
{
    return m_subnetId;
}

void DeviceInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool DeviceInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

uint64_t DeviceInfo::GetDeviceStatus() const
{
    return m_deviceStatus;
}

void DeviceInfo::SetDeviceStatus(const uint64_t& _deviceStatus)
{
    m_deviceStatus = _deviceStatus;
    m_deviceStatusHasBeenSet = true;
}

bool DeviceInfo::DeviceStatusHasBeenSet() const
{
    return m_deviceStatusHasBeenSet;
}

uint64_t DeviceInfo::GetOperateStatus() const
{
    return m_operateStatus;
}

void DeviceInfo::SetOperateStatus(const uint64_t& _operateStatus)
{
    m_operateStatus = _operateStatus;
    m_operateStatusHasBeenSet = true;
}

bool DeviceInfo::OperateStatusHasBeenSet() const
{
    return m_operateStatusHasBeenSet;
}

uint64_t DeviceInfo::GetOsTypeId() const
{
    return m_osTypeId;
}

void DeviceInfo::SetOsTypeId(const uint64_t& _osTypeId)
{
    m_osTypeId = _osTypeId;
    m_osTypeIdHasBeenSet = true;
}

bool DeviceInfo::OsTypeIdHasBeenSet() const
{
    return m_osTypeIdHasBeenSet;
}

uint64_t DeviceInfo::GetRaidId() const
{
    return m_raidId;
}

void DeviceInfo::SetRaidId(const uint64_t& _raidId)
{
    m_raidId = _raidId;
    m_raidIdHasBeenSet = true;
}

bool DeviceInfo::RaidIdHasBeenSet() const
{
    return m_raidIdHasBeenSet;
}

string DeviceInfo::GetAlias() const
{
    return m_alias;
}

void DeviceInfo::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool DeviceInfo::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

uint64_t DeviceInfo::GetAppId() const
{
    return m_appId;
}

void DeviceInfo::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DeviceInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DeviceInfo::GetZone() const
{
    return m_zone;
}

void DeviceInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DeviceInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string DeviceInfo::GetWanIp() const
{
    return m_wanIp;
}

void DeviceInfo::SetWanIp(const string& _wanIp)
{
    m_wanIp = _wanIp;
    m_wanIpHasBeenSet = true;
}

bool DeviceInfo::WanIpHasBeenSet() const
{
    return m_wanIpHasBeenSet;
}

string DeviceInfo::GetLanIp() const
{
    return m_lanIp;
}

void DeviceInfo::SetLanIp(const string& _lanIp)
{
    m_lanIp = _lanIp;
    m_lanIpHasBeenSet = true;
}

bool DeviceInfo::LanIpHasBeenSet() const
{
    return m_lanIpHasBeenSet;
}

string DeviceInfo::GetDeliverTime() const
{
    return m_deliverTime;
}

void DeviceInfo::SetDeliverTime(const string& _deliverTime)
{
    m_deliverTime = _deliverTime;
    m_deliverTimeHasBeenSet = true;
}

bool DeviceInfo::DeliverTimeHasBeenSet() const
{
    return m_deliverTimeHasBeenSet;
}

string DeviceInfo::GetDeadline() const
{
    return m_deadline;
}

void DeviceInfo::SetDeadline(const string& _deadline)
{
    m_deadline = _deadline;
    m_deadlineHasBeenSet = true;
}

bool DeviceInfo::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}

uint64_t DeviceInfo::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void DeviceInfo::SetAutoRenewFlag(const uint64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool DeviceInfo::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string DeviceInfo::GetDeviceClassCode() const
{
    return m_deviceClassCode;
}

void DeviceInfo::SetDeviceClassCode(const string& _deviceClassCode)
{
    m_deviceClassCode = _deviceClassCode;
    m_deviceClassCodeHasBeenSet = true;
}

bool DeviceInfo::DeviceClassCodeHasBeenSet() const
{
    return m_deviceClassCodeHasBeenSet;
}

vector<Tag> DeviceInfo::GetTags() const
{
    return m_tags;
}

void DeviceInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool DeviceInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

uint64_t DeviceInfo::GetCpmPayMode() const
{
    return m_cpmPayMode;
}

void DeviceInfo::SetCpmPayMode(const uint64_t& _cpmPayMode)
{
    m_cpmPayMode = _cpmPayMode;
    m_cpmPayModeHasBeenSet = true;
}

bool DeviceInfo::CpmPayModeHasBeenSet() const
{
    return m_cpmPayModeHasBeenSet;
}

string DeviceInfo::GetDhcpIp() const
{
    return m_dhcpIp;
}

void DeviceInfo::SetDhcpIp(const string& _dhcpIp)
{
    m_dhcpIp = _dhcpIp;
    m_dhcpIpHasBeenSet = true;
}

bool DeviceInfo::DhcpIpHasBeenSet() const
{
    return m_dhcpIpHasBeenSet;
}

string DeviceInfo::GetVpcName() const
{
    return m_vpcName;
}

void DeviceInfo::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool DeviceInfo::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string DeviceInfo::GetSubnetName() const
{
    return m_subnetName;
}

void DeviceInfo::SetSubnetName(const string& _subnetName)
{
    m_subnetName = _subnetName;
    m_subnetNameHasBeenSet = true;
}

bool DeviceInfo::SubnetNameHasBeenSet() const
{
    return m_subnetNameHasBeenSet;
}

string DeviceInfo::GetVpcCidrBlock() const
{
    return m_vpcCidrBlock;
}

void DeviceInfo::SetVpcCidrBlock(const string& _vpcCidrBlock)
{
    m_vpcCidrBlock = _vpcCidrBlock;
    m_vpcCidrBlockHasBeenSet = true;
}

bool DeviceInfo::VpcCidrBlockHasBeenSet() const
{
    return m_vpcCidrBlockHasBeenSet;
}

string DeviceInfo::GetSubnetCidrBlock() const
{
    return m_subnetCidrBlock;
}

void DeviceInfo::SetSubnetCidrBlock(const string& _subnetCidrBlock)
{
    m_subnetCidrBlock = _subnetCidrBlock;
    m_subnetCidrBlockHasBeenSet = true;
}

bool DeviceInfo::SubnetCidrBlockHasBeenSet() const
{
    return m_subnetCidrBlockHasBeenSet;
}

uint64_t DeviceInfo::GetIsLuckyDevice() const
{
    return m_isLuckyDevice;
}

void DeviceInfo::SetIsLuckyDevice(const uint64_t& _isLuckyDevice)
{
    m_isLuckyDevice = _isLuckyDevice;
    m_isLuckyDeviceHasBeenSet = true;
}

bool DeviceInfo::IsLuckyDeviceHasBeenSet() const
{
    return m_isLuckyDeviceHasBeenSet;
}

string DeviceInfo::GetMaintainStatus() const
{
    return m_maintainStatus;
}

void DeviceInfo::SetMaintainStatus(const string& _maintainStatus)
{
    m_maintainStatus = _maintainStatus;
    m_maintainStatusHasBeenSet = true;
}

bool DeviceInfo::MaintainStatusHasBeenSet() const
{
    return m_maintainStatusHasBeenSet;
}

string DeviceInfo::GetMaintainMessage() const
{
    return m_maintainMessage;
}

void DeviceInfo::SetMaintainMessage(const string& _maintainMessage)
{
    m_maintainMessage = _maintainMessage;
    m_maintainMessageHasBeenSet = true;
}

bool DeviceInfo::MaintainMessageHasBeenSet() const
{
    return m_maintainMessageHasBeenSet;
}

