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

#include <tencentcloud/chc/v20230418/model/DevicePosition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

DevicePosition::DevicePosition() :
    m_snHasBeenSet(false),
    m_rackNameHasBeenSet(false),
    m_idcUnitIdHasBeenSet(false),
    m_idcNameHasBeenSet(false),
    m_idcUnitNameHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_positionCodeHasBeenSet(false),
    m_deviceTypeHasBeenSet(false)
{
}

CoreInternalOutcome DevicePosition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Sn") && !value["Sn"].IsNull())
    {
        if (!value["Sn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePosition.Sn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sn = string(value["Sn"].GetString());
        m_snHasBeenSet = true;
    }

    if (value.HasMember("RackName") && !value["RackName"].IsNull())
    {
        if (!value["RackName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePosition.RackName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rackName = string(value["RackName"].GetString());
        m_rackNameHasBeenSet = true;
    }

    if (value.HasMember("IdcUnitId") && !value["IdcUnitId"].IsNull())
    {
        if (!value["IdcUnitId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePosition.IdcUnitId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_idcUnitId = value["IdcUnitId"].GetUint64();
        m_idcUnitIdHasBeenSet = true;
    }

    if (value.HasMember("IdcName") && !value["IdcName"].IsNull())
    {
        if (!value["IdcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePosition.IdcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idcName = string(value["IdcName"].GetString());
        m_idcNameHasBeenSet = true;
    }

    if (value.HasMember("IdcUnitName") && !value["IdcUnitName"].IsNull())
    {
        if (!value["IdcUnitName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePosition.IdcUnitName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idcUnitName = string(value["IdcUnitName"].GetString());
        m_idcUnitNameHasBeenSet = true;
    }

    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePosition.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("PositionCode") && !value["PositionCode"].IsNull())
    {
        if (!value["PositionCode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePosition.PositionCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_positionCode = value["PositionCode"].GetUint64();
        m_positionCodeHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePosition.DeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = string(value["DeviceType"].GetString());
        m_deviceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DevicePosition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_snHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sn.c_str(), allocator).Move(), allocator);
    }

    if (m_rackNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RackName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rackName.c_str(), allocator).Move(), allocator);
    }

    if (m_idcUnitIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdcUnitId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_idcUnitId, allocator);
    }

    if (m_idcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idcName.c_str(), allocator).Move(), allocator);
    }

    if (m_idcUnitNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdcUnitName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idcUnitName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_positionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PositionCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_positionCode, allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

}


string DevicePosition::GetSn() const
{
    return m_sn;
}

void DevicePosition::SetSn(const string& _sn)
{
    m_sn = _sn;
    m_snHasBeenSet = true;
}

bool DevicePosition::SnHasBeenSet() const
{
    return m_snHasBeenSet;
}

string DevicePosition::GetRackName() const
{
    return m_rackName;
}

void DevicePosition::SetRackName(const string& _rackName)
{
    m_rackName = _rackName;
    m_rackNameHasBeenSet = true;
}

bool DevicePosition::RackNameHasBeenSet() const
{
    return m_rackNameHasBeenSet;
}

uint64_t DevicePosition::GetIdcUnitId() const
{
    return m_idcUnitId;
}

void DevicePosition::SetIdcUnitId(const uint64_t& _idcUnitId)
{
    m_idcUnitId = _idcUnitId;
    m_idcUnitIdHasBeenSet = true;
}

bool DevicePosition::IdcUnitIdHasBeenSet() const
{
    return m_idcUnitIdHasBeenSet;
}

string DevicePosition::GetIdcName() const
{
    return m_idcName;
}

void DevicePosition::SetIdcName(const string& _idcName)
{
    m_idcName = _idcName;
    m_idcNameHasBeenSet = true;
}

bool DevicePosition::IdcNameHasBeenSet() const
{
    return m_idcNameHasBeenSet;
}

string DevicePosition::GetIdcUnitName() const
{
    return m_idcUnitName;
}

void DevicePosition::SetIdcUnitName(const string& _idcUnitName)
{
    m_idcUnitName = _idcUnitName;
    m_idcUnitNameHasBeenSet = true;
}

bool DevicePosition::IdcUnitNameHasBeenSet() const
{
    return m_idcUnitNameHasBeenSet;
}

string DevicePosition::GetAssetId() const
{
    return m_assetId;
}

void DevicePosition::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool DevicePosition::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

uint64_t DevicePosition::GetPositionCode() const
{
    return m_positionCode;
}

void DevicePosition::SetPositionCode(const uint64_t& _positionCode)
{
    m_positionCode = _positionCode;
    m_positionCodeHasBeenSet = true;
}

bool DevicePosition::PositionCodeHasBeenSet() const
{
    return m_positionCodeHasBeenSet;
}

string DevicePosition::GetDeviceType() const
{
    return m_deviceType;
}

void DevicePosition::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool DevicePosition::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

