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

#include <tencentcloud/chc/v20230418/model/DeviceHistory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

DeviceHistory::DeviceHistory() :
    m_snHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_rackNameHasBeenSet(false),
    m_positionCodeHasBeenSet(false),
    m_idcIdHasBeenSet(false),
    m_idcNameHasBeenSet(false),
    m_idcUnitIdHasBeenSet(false),
    m_idcUnitNameHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_deviceHeightHasBeenSet(false),
    m_need10GbSlotHasBeenSet(false),
    m_needDCPowerHasBeenSet(false),
    m_needExtranetHasBeenSet(false),
    m_needVirtualizationHasBeenSet(false),
    m_manufacturerHasBeenSet(false),
    m_hardwareMemoHasBeenSet(false),
    m_dstRackNameHasBeenSet(false),
    m_dstPositionCodeHasBeenSet(false),
    m_dstIpHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_quantityHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_receiptNumberHasBeenSet(false)
{
}

CoreInternalOutcome DeviceHistory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Sn") && !value["Sn"].IsNull())
    {
        if (!value["Sn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHistory.Sn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sn = string(value["Sn"].GetString());
        m_snHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHistory.DeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = string(value["DeviceType"].GetString());
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("RackName") && !value["RackName"].IsNull())
    {
        if (!value["RackName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHistory.RackName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rackName = string(value["RackName"].GetString());
        m_rackNameHasBeenSet = true;
    }

    if (value.HasMember("PositionCode") && !value["PositionCode"].IsNull())
    {
        if (!value["PositionCode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHistory.PositionCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_positionCode = value["PositionCode"].GetUint64();
        m_positionCodeHasBeenSet = true;
    }

    if (value.HasMember("IdcId") && !value["IdcId"].IsNull())
    {
        if (!value["IdcId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHistory.IdcId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_idcId = value["IdcId"].GetUint64();
        m_idcIdHasBeenSet = true;
    }

    if (value.HasMember("IdcName") && !value["IdcName"].IsNull())
    {
        if (!value["IdcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHistory.IdcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idcName = string(value["IdcName"].GetString());
        m_idcNameHasBeenSet = true;
    }

    if (value.HasMember("IdcUnitId") && !value["IdcUnitId"].IsNull())
    {
        if (!value["IdcUnitId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHistory.IdcUnitId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_idcUnitId = value["IdcUnitId"].GetUint64();
        m_idcUnitIdHasBeenSet = true;
    }

    if (value.HasMember("IdcUnitName") && !value["IdcUnitName"].IsNull())
    {
        if (!value["IdcUnitName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHistory.IdcUnitName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idcUnitName = string(value["IdcUnitName"].GetString());
        m_idcUnitNameHasBeenSet = true;
    }

    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHistory.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("ModelVersion") && !value["ModelVersion"].IsNull())
    {
        if (!value["ModelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHistory.ModelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelVersion = string(value["ModelVersion"].GetString());
        m_modelVersionHasBeenSet = true;
    }

    if (value.HasMember("DeviceHeight") && !value["DeviceHeight"].IsNull())
    {
        if (!value["DeviceHeight"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHistory.DeviceHeight` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceHeight = string(value["DeviceHeight"].GetString());
        m_deviceHeightHasBeenSet = true;
    }

    if (value.HasMember("Need10GbSlot") && !value["Need10GbSlot"].IsNull())
    {
        if (!value["Need10GbSlot"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHistory.Need10GbSlot` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_need10GbSlot = string(value["Need10GbSlot"].GetString());
        m_need10GbSlotHasBeenSet = true;
    }

    if (value.HasMember("NeedDCPower") && !value["NeedDCPower"].IsNull())
    {
        if (!value["NeedDCPower"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHistory.NeedDCPower` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_needDCPower = string(value["NeedDCPower"].GetString());
        m_needDCPowerHasBeenSet = true;
    }

    if (value.HasMember("NeedExtranet") && !value["NeedExtranet"].IsNull())
    {
        if (!value["NeedExtranet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHistory.NeedExtranet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_needExtranet = string(value["NeedExtranet"].GetString());
        m_needExtranetHasBeenSet = true;
    }

    if (value.HasMember("NeedVirtualization") && !value["NeedVirtualization"].IsNull())
    {
        if (!value["NeedVirtualization"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHistory.NeedVirtualization` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_needVirtualization = string(value["NeedVirtualization"].GetString());
        m_needVirtualizationHasBeenSet = true;
    }

    if (value.HasMember("Manufacturer") && !value["Manufacturer"].IsNull())
    {
        if (!value["Manufacturer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHistory.Manufacturer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manufacturer = string(value["Manufacturer"].GetString());
        m_manufacturerHasBeenSet = true;
    }

    if (value.HasMember("HardwareMemo") && !value["HardwareMemo"].IsNull())
    {
        if (!value["HardwareMemo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHistory.HardwareMemo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hardwareMemo = string(value["HardwareMemo"].GetString());
        m_hardwareMemoHasBeenSet = true;
    }

    if (value.HasMember("DstRackName") && !value["DstRackName"].IsNull())
    {
        if (!value["DstRackName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHistory.DstRackName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstRackName = string(value["DstRackName"].GetString());
        m_dstRackNameHasBeenSet = true;
    }

    if (value.HasMember("DstPositionCode") && !value["DstPositionCode"].IsNull())
    {
        if (!value["DstPositionCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHistory.DstPositionCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstPositionCode = string(value["DstPositionCode"].GetString());
        m_dstPositionCodeHasBeenSet = true;
    }

    if (value.HasMember("DstIp") && !value["DstIp"].IsNull())
    {
        if (!value["DstIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHistory.DstIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstIp = string(value["DstIp"].GetString());
        m_dstIpHasBeenSet = true;
    }

    if (value.HasMember("TypeName") && !value["TypeName"].IsNull())
    {
        if (!value["TypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHistory.TypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeName = string(value["TypeName"].GetString());
        m_typeNameHasBeenSet = true;
    }

    if (value.HasMember("Quantity") && !value["Quantity"].IsNull())
    {
        if (!value["Quantity"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHistory.Quantity` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_quantity = value["Quantity"].GetUint64();
        m_quantityHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHistory.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("ReceiptNumber") && !value["ReceiptNumber"].IsNull())
    {
        if (!value["ReceiptNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHistory.ReceiptNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receiptNumber = string(value["ReceiptNumber"].GetString());
        m_receiptNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceHistory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_snHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sn.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
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

    if (m_idcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_idcId, allocator);
    }

    if (m_idcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idcName.c_str(), allocator).Move(), allocator);
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

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceHeight.c_str(), allocator).Move(), allocator);
    }

    if (m_need10GbSlotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Need10GbSlot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_need10GbSlot.c_str(), allocator).Move(), allocator);
    }

    if (m_needDCPowerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedDCPower";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_needDCPower.c_str(), allocator).Move(), allocator);
    }

    if (m_needExtranetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedExtranet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_needExtranet.c_str(), allocator).Move(), allocator);
    }

    if (m_needVirtualizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedVirtualization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_needVirtualization.c_str(), allocator).Move(), allocator);
    }

    if (m_manufacturerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Manufacturer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manufacturer.c_str(), allocator).Move(), allocator);
    }

    if (m_hardwareMemoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HardwareMemo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hardwareMemo.c_str(), allocator).Move(), allocator);
    }

    if (m_dstRackNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstRackName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstRackName.c_str(), allocator).Move(), allocator);
    }

    if (m_dstPositionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstPositionCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstPositionCode.c_str(), allocator).Move(), allocator);
    }

    if (m_dstIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstIp.c_str(), allocator).Move(), allocator);
    }

    if (m_typeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_typeName.c_str(), allocator).Move(), allocator);
    }

    if (m_quantityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quantity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quantity, allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_receiptNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiptNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receiptNumber.c_str(), allocator).Move(), allocator);
    }

}


string DeviceHistory::GetSn() const
{
    return m_sn;
}

void DeviceHistory::SetSn(const string& _sn)
{
    m_sn = _sn;
    m_snHasBeenSet = true;
}

bool DeviceHistory::SnHasBeenSet() const
{
    return m_snHasBeenSet;
}

string DeviceHistory::GetDeviceType() const
{
    return m_deviceType;
}

void DeviceHistory::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool DeviceHistory::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string DeviceHistory::GetRackName() const
{
    return m_rackName;
}

void DeviceHistory::SetRackName(const string& _rackName)
{
    m_rackName = _rackName;
    m_rackNameHasBeenSet = true;
}

bool DeviceHistory::RackNameHasBeenSet() const
{
    return m_rackNameHasBeenSet;
}

uint64_t DeviceHistory::GetPositionCode() const
{
    return m_positionCode;
}

void DeviceHistory::SetPositionCode(const uint64_t& _positionCode)
{
    m_positionCode = _positionCode;
    m_positionCodeHasBeenSet = true;
}

bool DeviceHistory::PositionCodeHasBeenSet() const
{
    return m_positionCodeHasBeenSet;
}

uint64_t DeviceHistory::GetIdcId() const
{
    return m_idcId;
}

void DeviceHistory::SetIdcId(const uint64_t& _idcId)
{
    m_idcId = _idcId;
    m_idcIdHasBeenSet = true;
}

bool DeviceHistory::IdcIdHasBeenSet() const
{
    return m_idcIdHasBeenSet;
}

string DeviceHistory::GetIdcName() const
{
    return m_idcName;
}

void DeviceHistory::SetIdcName(const string& _idcName)
{
    m_idcName = _idcName;
    m_idcNameHasBeenSet = true;
}

bool DeviceHistory::IdcNameHasBeenSet() const
{
    return m_idcNameHasBeenSet;
}

uint64_t DeviceHistory::GetIdcUnitId() const
{
    return m_idcUnitId;
}

void DeviceHistory::SetIdcUnitId(const uint64_t& _idcUnitId)
{
    m_idcUnitId = _idcUnitId;
    m_idcUnitIdHasBeenSet = true;
}

bool DeviceHistory::IdcUnitIdHasBeenSet() const
{
    return m_idcUnitIdHasBeenSet;
}

string DeviceHistory::GetIdcUnitName() const
{
    return m_idcUnitName;
}

void DeviceHistory::SetIdcUnitName(const string& _idcUnitName)
{
    m_idcUnitName = _idcUnitName;
    m_idcUnitNameHasBeenSet = true;
}

bool DeviceHistory::IdcUnitNameHasBeenSet() const
{
    return m_idcUnitNameHasBeenSet;
}

string DeviceHistory::GetAssetId() const
{
    return m_assetId;
}

void DeviceHistory::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool DeviceHistory::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string DeviceHistory::GetModelVersion() const
{
    return m_modelVersion;
}

void DeviceHistory::SetModelVersion(const string& _modelVersion)
{
    m_modelVersion = _modelVersion;
    m_modelVersionHasBeenSet = true;
}

bool DeviceHistory::ModelVersionHasBeenSet() const
{
    return m_modelVersionHasBeenSet;
}

string DeviceHistory::GetDeviceHeight() const
{
    return m_deviceHeight;
}

void DeviceHistory::SetDeviceHeight(const string& _deviceHeight)
{
    m_deviceHeight = _deviceHeight;
    m_deviceHeightHasBeenSet = true;
}

bool DeviceHistory::DeviceHeightHasBeenSet() const
{
    return m_deviceHeightHasBeenSet;
}

string DeviceHistory::GetNeed10GbSlot() const
{
    return m_need10GbSlot;
}

void DeviceHistory::SetNeed10GbSlot(const string& _need10GbSlot)
{
    m_need10GbSlot = _need10GbSlot;
    m_need10GbSlotHasBeenSet = true;
}

bool DeviceHistory::Need10GbSlotHasBeenSet() const
{
    return m_need10GbSlotHasBeenSet;
}

string DeviceHistory::GetNeedDCPower() const
{
    return m_needDCPower;
}

void DeviceHistory::SetNeedDCPower(const string& _needDCPower)
{
    m_needDCPower = _needDCPower;
    m_needDCPowerHasBeenSet = true;
}

bool DeviceHistory::NeedDCPowerHasBeenSet() const
{
    return m_needDCPowerHasBeenSet;
}

string DeviceHistory::GetNeedExtranet() const
{
    return m_needExtranet;
}

void DeviceHistory::SetNeedExtranet(const string& _needExtranet)
{
    m_needExtranet = _needExtranet;
    m_needExtranetHasBeenSet = true;
}

bool DeviceHistory::NeedExtranetHasBeenSet() const
{
    return m_needExtranetHasBeenSet;
}

string DeviceHistory::GetNeedVirtualization() const
{
    return m_needVirtualization;
}

void DeviceHistory::SetNeedVirtualization(const string& _needVirtualization)
{
    m_needVirtualization = _needVirtualization;
    m_needVirtualizationHasBeenSet = true;
}

bool DeviceHistory::NeedVirtualizationHasBeenSet() const
{
    return m_needVirtualizationHasBeenSet;
}

string DeviceHistory::GetManufacturer() const
{
    return m_manufacturer;
}

void DeviceHistory::SetManufacturer(const string& _manufacturer)
{
    m_manufacturer = _manufacturer;
    m_manufacturerHasBeenSet = true;
}

bool DeviceHistory::ManufacturerHasBeenSet() const
{
    return m_manufacturerHasBeenSet;
}

string DeviceHistory::GetHardwareMemo() const
{
    return m_hardwareMemo;
}

void DeviceHistory::SetHardwareMemo(const string& _hardwareMemo)
{
    m_hardwareMemo = _hardwareMemo;
    m_hardwareMemoHasBeenSet = true;
}

bool DeviceHistory::HardwareMemoHasBeenSet() const
{
    return m_hardwareMemoHasBeenSet;
}

string DeviceHistory::GetDstRackName() const
{
    return m_dstRackName;
}

void DeviceHistory::SetDstRackName(const string& _dstRackName)
{
    m_dstRackName = _dstRackName;
    m_dstRackNameHasBeenSet = true;
}

bool DeviceHistory::DstRackNameHasBeenSet() const
{
    return m_dstRackNameHasBeenSet;
}

string DeviceHistory::GetDstPositionCode() const
{
    return m_dstPositionCode;
}

void DeviceHistory::SetDstPositionCode(const string& _dstPositionCode)
{
    m_dstPositionCode = _dstPositionCode;
    m_dstPositionCodeHasBeenSet = true;
}

bool DeviceHistory::DstPositionCodeHasBeenSet() const
{
    return m_dstPositionCodeHasBeenSet;
}

string DeviceHistory::GetDstIp() const
{
    return m_dstIp;
}

void DeviceHistory::SetDstIp(const string& _dstIp)
{
    m_dstIp = _dstIp;
    m_dstIpHasBeenSet = true;
}

bool DeviceHistory::DstIpHasBeenSet() const
{
    return m_dstIpHasBeenSet;
}

string DeviceHistory::GetTypeName() const
{
    return m_typeName;
}

void DeviceHistory::SetTypeName(const string& _typeName)
{
    m_typeName = _typeName;
    m_typeNameHasBeenSet = true;
}

bool DeviceHistory::TypeNameHasBeenSet() const
{
    return m_typeNameHasBeenSet;
}

uint64_t DeviceHistory::GetQuantity() const
{
    return m_quantity;
}

void DeviceHistory::SetQuantity(const uint64_t& _quantity)
{
    m_quantity = _quantity;
    m_quantityHasBeenSet = true;
}

bool DeviceHistory::QuantityHasBeenSet() const
{
    return m_quantityHasBeenSet;
}

string DeviceHistory::GetUnit() const
{
    return m_unit;
}

void DeviceHistory::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool DeviceHistory::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

string DeviceHistory::GetReceiptNumber() const
{
    return m_receiptNumber;
}

void DeviceHistory::SetReceiptNumber(const string& _receiptNumber)
{
    m_receiptNumber = _receiptNumber;
    m_receiptNumberHasBeenSet = true;
}

bool DeviceHistory::ReceiptNumberHasBeenSet() const
{
    return m_receiptNumberHasBeenSet;
}

