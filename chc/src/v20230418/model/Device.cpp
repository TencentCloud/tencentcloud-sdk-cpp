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

#include <tencentcloud/chc/v20230418/model/Device.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

Device::Device() :
    m_snHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_svrIsSpecialHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_idcNameHasBeenSet(false),
    m_idcIdHasBeenSet(false),
    m_idcUnitIdHasBeenSet(false),
    m_idcUnitNameHasBeenSet(false),
    m_rackIdHasBeenSet(false),
    m_serverTypeIdHasBeenSet(false),
    m_rackNameHasBeenSet(false),
    m_positionCodeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_powerOnTimeHasBeenSet(false),
    m_onshelfDateHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_manufacturerHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_hardwareMemoHasBeenSet(false)
{
}

CoreInternalOutcome Device::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Sn") && !value["Sn"].IsNull())
    {
        if (!value["Sn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.Sn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sn = string(value["Sn"].GetString());
        m_snHasBeenSet = true;
    }

    if (value.HasMember("ModelVersion") && !value["ModelVersion"].IsNull())
    {
        if (!value["ModelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.ModelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelVersion = string(value["ModelVersion"].GetString());
        m_modelVersionHasBeenSet = true;
    }

    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("SvrIsSpecial") && !value["SvrIsSpecial"].IsNull())
    {
        if (!value["SvrIsSpecial"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Device.SvrIsSpecial` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_svrIsSpecial = value["SvrIsSpecial"].GetUint64();
        m_svrIsSpecialHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("IdcName") && !value["IdcName"].IsNull())
    {
        if (!value["IdcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.IdcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idcName = string(value["IdcName"].GetString());
        m_idcNameHasBeenSet = true;
    }

    if (value.HasMember("IdcId") && !value["IdcId"].IsNull())
    {
        if (!value["IdcId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Device.IdcId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_idcId = value["IdcId"].GetUint64();
        m_idcIdHasBeenSet = true;
    }

    if (value.HasMember("IdcUnitId") && !value["IdcUnitId"].IsNull())
    {
        if (!value["IdcUnitId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Device.IdcUnitId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_idcUnitId = value["IdcUnitId"].GetUint64();
        m_idcUnitIdHasBeenSet = true;
    }

    if (value.HasMember("IdcUnitName") && !value["IdcUnitName"].IsNull())
    {
        if (!value["IdcUnitName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.IdcUnitName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idcUnitName = string(value["IdcUnitName"].GetString());
        m_idcUnitNameHasBeenSet = true;
    }

    if (value.HasMember("RackId") && !value["RackId"].IsNull())
    {
        if (!value["RackId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Device.RackId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rackId = value["RackId"].GetUint64();
        m_rackIdHasBeenSet = true;
    }

    if (value.HasMember("ServerTypeId") && !value["ServerTypeId"].IsNull())
    {
        if (!value["ServerTypeId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Device.ServerTypeId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_serverTypeId = value["ServerTypeId"].GetUint64();
        m_serverTypeIdHasBeenSet = true;
    }

    if (value.HasMember("RackName") && !value["RackName"].IsNull())
    {
        if (!value["RackName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.RackName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rackName = string(value["RackName"].GetString());
        m_rackNameHasBeenSet = true;
    }

    if (value.HasMember("PositionCode") && !value["PositionCode"].IsNull())
    {
        if (!value["PositionCode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Device.PositionCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_positionCode = value["PositionCode"].GetUint64();
        m_positionCodeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("PowerOnTime") && !value["PowerOnTime"].IsNull())
    {
        if (!value["PowerOnTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.PowerOnTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_powerOnTime = string(value["PowerOnTime"].GetString());
        m_powerOnTimeHasBeenSet = true;
    }

    if (value.HasMember("OnshelfDate") && !value["OnshelfDate"].IsNull())
    {
        if (!value["OnshelfDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.OnshelfDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_onshelfDate = string(value["OnshelfDate"].GetString());
        m_onshelfDateHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.DeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = string(value["DeviceType"].GetString());
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("Manufacturer") && !value["Manufacturer"].IsNull())
    {
        if (!value["Manufacturer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.Manufacturer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manufacturer = string(value["Manufacturer"].GetString());
        m_manufacturerHasBeenSet = true;
    }

    if (value.HasMember("TypeName") && !value["TypeName"].IsNull())
    {
        if (!value["TypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.TypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeName = string(value["TypeName"].GetString());
        m_typeNameHasBeenSet = true;
    }

    if (value.HasMember("HardwareMemo") && !value["HardwareMemo"].IsNull())
    {
        if (!value["HardwareMemo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.HardwareMemo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hardwareMemo = string(value["HardwareMemo"].GetString());
        m_hardwareMemoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Device::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_snHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sn.c_str(), allocator).Move(), allocator);
    }

    if (m_modelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_svrIsSpecialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SvrIsSpecial";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_svrIsSpecial, allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_idcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idcName.c_str(), allocator).Move(), allocator);
    }

    if (m_idcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_idcId, allocator);
    }

    if (m_idcUnitIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdcUnitId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_idcUnitId, allocator);
    }

    if (m_idcUnitNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdcUnitName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idcUnitName.c_str(), allocator).Move(), allocator);
    }

    if (m_rackIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RackId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rackId, allocator);
    }

    if (m_serverTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerTypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serverTypeId, allocator);
    }

    if (m_rackNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RackName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rackName.c_str(), allocator).Move(), allocator);
    }

    if (m_positionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PositionCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_positionCode, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_powerOnTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PowerOnTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_powerOnTime.c_str(), allocator).Move(), allocator);
    }

    if (m_onshelfDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnshelfDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_onshelfDate.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_manufacturerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Manufacturer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manufacturer.c_str(), allocator).Move(), allocator);
    }

    if (m_typeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_typeName.c_str(), allocator).Move(), allocator);
    }

    if (m_hardwareMemoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HardwareMemo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hardwareMemo.c_str(), allocator).Move(), allocator);
    }

}


string Device::GetSn() const
{
    return m_sn;
}

void Device::SetSn(const string& _sn)
{
    m_sn = _sn;
    m_snHasBeenSet = true;
}

bool Device::SnHasBeenSet() const
{
    return m_snHasBeenSet;
}

string Device::GetModelVersion() const
{
    return m_modelVersion;
}

void Device::SetModelVersion(const string& _modelVersion)
{
    m_modelVersion = _modelVersion;
    m_modelVersionHasBeenSet = true;
}

bool Device::ModelVersionHasBeenSet() const
{
    return m_modelVersionHasBeenSet;
}

string Device::GetAssetId() const
{
    return m_assetId;
}

void Device::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool Device::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

uint64_t Device::GetSvrIsSpecial() const
{
    return m_svrIsSpecial;
}

void Device::SetSvrIsSpecial(const uint64_t& _svrIsSpecial)
{
    m_svrIsSpecial = _svrIsSpecial;
    m_svrIsSpecialHasBeenSet = true;
}

bool Device::SvrIsSpecialHasBeenSet() const
{
    return m_svrIsSpecialHasBeenSet;
}

string Device::GetIp() const
{
    return m_ip;
}

void Device::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool Device::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string Device::GetIdcName() const
{
    return m_idcName;
}

void Device::SetIdcName(const string& _idcName)
{
    m_idcName = _idcName;
    m_idcNameHasBeenSet = true;
}

bool Device::IdcNameHasBeenSet() const
{
    return m_idcNameHasBeenSet;
}

uint64_t Device::GetIdcId() const
{
    return m_idcId;
}

void Device::SetIdcId(const uint64_t& _idcId)
{
    m_idcId = _idcId;
    m_idcIdHasBeenSet = true;
}

bool Device::IdcIdHasBeenSet() const
{
    return m_idcIdHasBeenSet;
}

uint64_t Device::GetIdcUnitId() const
{
    return m_idcUnitId;
}

void Device::SetIdcUnitId(const uint64_t& _idcUnitId)
{
    m_idcUnitId = _idcUnitId;
    m_idcUnitIdHasBeenSet = true;
}

bool Device::IdcUnitIdHasBeenSet() const
{
    return m_idcUnitIdHasBeenSet;
}

string Device::GetIdcUnitName() const
{
    return m_idcUnitName;
}

void Device::SetIdcUnitName(const string& _idcUnitName)
{
    m_idcUnitName = _idcUnitName;
    m_idcUnitNameHasBeenSet = true;
}

bool Device::IdcUnitNameHasBeenSet() const
{
    return m_idcUnitNameHasBeenSet;
}

uint64_t Device::GetRackId() const
{
    return m_rackId;
}

void Device::SetRackId(const uint64_t& _rackId)
{
    m_rackId = _rackId;
    m_rackIdHasBeenSet = true;
}

bool Device::RackIdHasBeenSet() const
{
    return m_rackIdHasBeenSet;
}

uint64_t Device::GetServerTypeId() const
{
    return m_serverTypeId;
}

void Device::SetServerTypeId(const uint64_t& _serverTypeId)
{
    m_serverTypeId = _serverTypeId;
    m_serverTypeIdHasBeenSet = true;
}

bool Device::ServerTypeIdHasBeenSet() const
{
    return m_serverTypeIdHasBeenSet;
}

string Device::GetRackName() const
{
    return m_rackName;
}

void Device::SetRackName(const string& _rackName)
{
    m_rackName = _rackName;
    m_rackNameHasBeenSet = true;
}

bool Device::RackNameHasBeenSet() const
{
    return m_rackNameHasBeenSet;
}

uint64_t Device::GetPositionCode() const
{
    return m_positionCode;
}

void Device::SetPositionCode(const uint64_t& _positionCode)
{
    m_positionCode = _positionCode;
    m_positionCodeHasBeenSet = true;
}

bool Device::PositionCodeHasBeenSet() const
{
    return m_positionCodeHasBeenSet;
}

string Device::GetStatus() const
{
    return m_status;
}

void Device::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Device::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string Device::GetPowerOnTime() const
{
    return m_powerOnTime;
}

void Device::SetPowerOnTime(const string& _powerOnTime)
{
    m_powerOnTime = _powerOnTime;
    m_powerOnTimeHasBeenSet = true;
}

bool Device::PowerOnTimeHasBeenSet() const
{
    return m_powerOnTimeHasBeenSet;
}

string Device::GetOnshelfDate() const
{
    return m_onshelfDate;
}

void Device::SetOnshelfDate(const string& _onshelfDate)
{
    m_onshelfDate = _onshelfDate;
    m_onshelfDateHasBeenSet = true;
}

bool Device::OnshelfDateHasBeenSet() const
{
    return m_onshelfDateHasBeenSet;
}

string Device::GetDeviceType() const
{
    return m_deviceType;
}

void Device::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool Device::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string Device::GetManufacturer() const
{
    return m_manufacturer;
}

void Device::SetManufacturer(const string& _manufacturer)
{
    m_manufacturer = _manufacturer;
    m_manufacturerHasBeenSet = true;
}

bool Device::ManufacturerHasBeenSet() const
{
    return m_manufacturerHasBeenSet;
}

string Device::GetTypeName() const
{
    return m_typeName;
}

void Device::SetTypeName(const string& _typeName)
{
    m_typeName = _typeName;
    m_typeNameHasBeenSet = true;
}

bool Device::TypeNameHasBeenSet() const
{
    return m_typeNameHasBeenSet;
}

string Device::GetHardwareMemo() const
{
    return m_hardwareMemo;
}

void Device::SetHardwareMemo(const string& _hardwareMemo)
{
    m_hardwareMemo = _hardwareMemo;
    m_hardwareMemoHasBeenSet = true;
}

bool Device::HardwareMemoHasBeenSet() const
{
    return m_hardwareMemoHasBeenSet;
}

