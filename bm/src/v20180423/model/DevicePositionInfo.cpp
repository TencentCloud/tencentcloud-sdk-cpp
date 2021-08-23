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

#include <tencentcloud/bm/v20180423/model/DevicePositionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bm::V20180423::Model;
using namespace std;

DevicePositionInfo::DevicePositionInfo() :
    m_instanceIdHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_lanIpHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_rckNameHasBeenSet(false),
    m_posCodeHasBeenSet(false),
    m_switchNameHasBeenSet(false),
    m_deliverTimeHasBeenSet(false),
    m_deadlineHasBeenSet(false)
{
}

CoreInternalOutcome DevicePositionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePositionInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePositionInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePositionInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePositionInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("LanIp") && !value["LanIp"].IsNull())
    {
        if (!value["LanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePositionInfo.LanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lanIp = string(value["LanIp"].GetString());
        m_lanIpHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePositionInfo.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("RckName") && !value["RckName"].IsNull())
    {
        if (!value["RckName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePositionInfo.RckName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rckName = string(value["RckName"].GetString());
        m_rckNameHasBeenSet = true;
    }

    if (value.HasMember("PosCode") && !value["PosCode"].IsNull())
    {
        if (!value["PosCode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePositionInfo.PosCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_posCode = value["PosCode"].GetUint64();
        m_posCodeHasBeenSet = true;
    }

    if (value.HasMember("SwitchName") && !value["SwitchName"].IsNull())
    {
        if (!value["SwitchName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePositionInfo.SwitchName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switchName = string(value["SwitchName"].GetString());
        m_switchNameHasBeenSet = true;
    }

    if (value.HasMember("DeliverTime") && !value["DeliverTime"].IsNull())
    {
        if (!value["DeliverTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePositionInfo.DeliverTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deliverTime = string(value["DeliverTime"].GetString());
        m_deliverTimeHasBeenSet = true;
    }

    if (value.HasMember("Deadline") && !value["Deadline"].IsNull())
    {
        if (!value["Deadline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePositionInfo.Deadline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadline = string(value["Deadline"].GetString());
        m_deadlineHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DevicePositionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
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

    if (m_lanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_rckNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RckName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rckName.c_str(), allocator).Move(), allocator);
    }

    if (m_posCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PosCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_posCode, allocator);
    }

    if (m_switchNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switchName.c_str(), allocator).Move(), allocator);
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

}


string DevicePositionInfo::GetInstanceId() const
{
    return m_instanceId;
}

void DevicePositionInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DevicePositionInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DevicePositionInfo::GetZone() const
{
    return m_zone;
}

void DevicePositionInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DevicePositionInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string DevicePositionInfo::GetVpcId() const
{
    return m_vpcId;
}

void DevicePositionInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DevicePositionInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DevicePositionInfo::GetSubnetId() const
{
    return m_subnetId;
}

void DevicePositionInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool DevicePositionInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string DevicePositionInfo::GetLanIp() const
{
    return m_lanIp;
}

void DevicePositionInfo::SetLanIp(const string& _lanIp)
{
    m_lanIp = _lanIp;
    m_lanIpHasBeenSet = true;
}

bool DevicePositionInfo::LanIpHasBeenSet() const
{
    return m_lanIpHasBeenSet;
}

string DevicePositionInfo::GetAlias() const
{
    return m_alias;
}

void DevicePositionInfo::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool DevicePositionInfo::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string DevicePositionInfo::GetRckName() const
{
    return m_rckName;
}

void DevicePositionInfo::SetRckName(const string& _rckName)
{
    m_rckName = _rckName;
    m_rckNameHasBeenSet = true;
}

bool DevicePositionInfo::RckNameHasBeenSet() const
{
    return m_rckNameHasBeenSet;
}

uint64_t DevicePositionInfo::GetPosCode() const
{
    return m_posCode;
}

void DevicePositionInfo::SetPosCode(const uint64_t& _posCode)
{
    m_posCode = _posCode;
    m_posCodeHasBeenSet = true;
}

bool DevicePositionInfo::PosCodeHasBeenSet() const
{
    return m_posCodeHasBeenSet;
}

string DevicePositionInfo::GetSwitchName() const
{
    return m_switchName;
}

void DevicePositionInfo::SetSwitchName(const string& _switchName)
{
    m_switchName = _switchName;
    m_switchNameHasBeenSet = true;
}

bool DevicePositionInfo::SwitchNameHasBeenSet() const
{
    return m_switchNameHasBeenSet;
}

string DevicePositionInfo::GetDeliverTime() const
{
    return m_deliverTime;
}

void DevicePositionInfo::SetDeliverTime(const string& _deliverTime)
{
    m_deliverTime = _deliverTime;
    m_deliverTimeHasBeenSet = true;
}

bool DevicePositionInfo::DeliverTimeHasBeenSet() const
{
    return m_deliverTimeHasBeenSet;
}

string DevicePositionInfo::GetDeadline() const
{
    return m_deadline;
}

void DevicePositionInfo::SetDeadline(const string& _deadline)
{
    m_deadline = _deadline;
    m_deadlineHasBeenSet = true;
}

bool DevicePositionInfo::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}

