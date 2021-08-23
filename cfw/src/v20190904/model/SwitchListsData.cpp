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

#include <tencentcloud/cfw/v20190904/model/SwitchListsData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

SwitchListsData::SwitchListsData() :
    m_publicIpHasBeenSet(false),
    m_intranetIpHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_switchHasBeenSet(false),
    m_idHasBeenSet(false),
    m_publicIpTypeHasBeenSet(false),
    m_portTimesHasBeenSet(false),
    m_lastTimeHasBeenSet(false),
    m_scanModeHasBeenSet(false),
    m_scanStatusHasBeenSet(false)
{
}

CoreInternalOutcome SwitchListsData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SwitchListsData.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("IntranetIp") && !value["IntranetIp"].IsNull())
    {
        if (!value["IntranetIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SwitchListsData.IntranetIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_intranetIp = string(value["IntranetIp"].GetString());
        m_intranetIpHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SwitchListsData.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SwitchListsData.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SwitchListsData.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SwitchListsData.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SwitchListsData.Switch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_switch = value["Switch"].GetInt64();
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SwitchListsData.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("PublicIpType") && !value["PublicIpType"].IsNull())
    {
        if (!value["PublicIpType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SwitchListsData.PublicIpType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_publicIpType = value["PublicIpType"].GetUint64();
        m_publicIpTypeHasBeenSet = true;
    }

    if (value.HasMember("PortTimes") && !value["PortTimes"].IsNull())
    {
        if (!value["PortTimes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SwitchListsData.PortTimes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_portTimes = value["PortTimes"].GetUint64();
        m_portTimesHasBeenSet = true;
    }

    if (value.HasMember("LastTime") && !value["LastTime"].IsNull())
    {
        if (!value["LastTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SwitchListsData.LastTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastTime = string(value["LastTime"].GetString());
        m_lastTimeHasBeenSet = true;
    }

    if (value.HasMember("ScanMode") && !value["ScanMode"].IsNull())
    {
        if (!value["ScanMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SwitchListsData.ScanMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanMode = string(value["ScanMode"].GetString());
        m_scanModeHasBeenSet = true;
    }

    if (value.HasMember("ScanStatus") && !value["ScanStatus"].IsNull())
    {
        if (!value["ScanStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SwitchListsData.ScanStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanStatus = value["ScanStatus"].GetUint64();
        m_scanStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SwitchListsData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_intranetIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntranetIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_intranetIp.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_switch, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_publicIpTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIpType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publicIpType, allocator);
    }

    if (m_portTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_portTimes, allocator);
    }

    if (m_lastTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastTime.c_str(), allocator).Move(), allocator);
    }

    if (m_scanModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanMode.c_str(), allocator).Move(), allocator);
    }

    if (m_scanStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanStatus, allocator);
    }

}


string SwitchListsData::GetPublicIp() const
{
    return m_publicIp;
}

void SwitchListsData::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool SwitchListsData::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string SwitchListsData::GetIntranetIp() const
{
    return m_intranetIp;
}

void SwitchListsData::SetIntranetIp(const string& _intranetIp)
{
    m_intranetIp = _intranetIp;
    m_intranetIpHasBeenSet = true;
}

bool SwitchListsData::IntranetIpHasBeenSet() const
{
    return m_intranetIpHasBeenSet;
}

string SwitchListsData::GetInstanceName() const
{
    return m_instanceName;
}

void SwitchListsData::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool SwitchListsData::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string SwitchListsData::GetInstanceId() const
{
    return m_instanceId;
}

void SwitchListsData::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool SwitchListsData::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string SwitchListsData::GetAssetType() const
{
    return m_assetType;
}

void SwitchListsData::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool SwitchListsData::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string SwitchListsData::GetArea() const
{
    return m_area;
}

void SwitchListsData::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool SwitchListsData::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

int64_t SwitchListsData::GetSwitch() const
{
    return m_switch;
}

void SwitchListsData::SetSwitch(const int64_t& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool SwitchListsData::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

uint64_t SwitchListsData::GetId() const
{
    return m_id;
}

void SwitchListsData::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool SwitchListsData::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t SwitchListsData::GetPublicIpType() const
{
    return m_publicIpType;
}

void SwitchListsData::SetPublicIpType(const uint64_t& _publicIpType)
{
    m_publicIpType = _publicIpType;
    m_publicIpTypeHasBeenSet = true;
}

bool SwitchListsData::PublicIpTypeHasBeenSet() const
{
    return m_publicIpTypeHasBeenSet;
}

uint64_t SwitchListsData::GetPortTimes() const
{
    return m_portTimes;
}

void SwitchListsData::SetPortTimes(const uint64_t& _portTimes)
{
    m_portTimes = _portTimes;
    m_portTimesHasBeenSet = true;
}

bool SwitchListsData::PortTimesHasBeenSet() const
{
    return m_portTimesHasBeenSet;
}

string SwitchListsData::GetLastTime() const
{
    return m_lastTime;
}

void SwitchListsData::SetLastTime(const string& _lastTime)
{
    m_lastTime = _lastTime;
    m_lastTimeHasBeenSet = true;
}

bool SwitchListsData::LastTimeHasBeenSet() const
{
    return m_lastTimeHasBeenSet;
}

string SwitchListsData::GetScanMode() const
{
    return m_scanMode;
}

void SwitchListsData::SetScanMode(const string& _scanMode)
{
    m_scanMode = _scanMode;
    m_scanModeHasBeenSet = true;
}

bool SwitchListsData::ScanModeHasBeenSet() const
{
    return m_scanModeHasBeenSet;
}

uint64_t SwitchListsData::GetScanStatus() const
{
    return m_scanStatus;
}

void SwitchListsData::SetScanStatus(const uint64_t& _scanStatus)
{
    m_scanStatus = _scanStatus;
    m_scanStatusHasBeenSet = true;
}

bool SwitchListsData::ScanStatusHasBeenSet() const
{
    return m_scanStatusHasBeenSet;
}

