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

#include <tencentcloud/trdp/v20220726/model/DeviceDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trdp::V20220726::Model;
using namespace std;

DeviceDetailInfo::DeviceDetailInfo() :
    m_macAddressHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_osSystemHasBeenSet(false),
    m_osSystemVersionHasBeenSet(false),
    m_bidFloorHasBeenSet(false),
    m_deviceVersionHasBeenSet(false),
    m_makerHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_carrierHasBeenSet(false),
    m_accessModeHasBeenSet(false),
    m_phoneChipInfoHasBeenSet(false),
    m_cpuModelHasBeenSet(false),
    m_cpuCoreHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_volumeHasBeenSet(false),
    m_batteryPowerHasBeenSet(false),
    m_resolutionWidthHasBeenSet(false),
    m_resolutionHeightHasBeenSet(false),
    m_uaHasBeenSet(false),
    m_appHasBeenSet(false),
    m_appPackageNameHasBeenSet(false),
    m_serialNumberHasBeenSet(false),
    m_mobileCountryAndNetworkCodeHasBeenSet(false),
    m_vendorIdHasBeenSet(false),
    m_androidApiLevelHasBeenSet(false),
    m_brightnessHasBeenSet(false),
    m_bluetoothAddressHasBeenSet(false),
    m_baseBandVersionHasBeenSet(false),
    m_kernelVersionHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_isDebugHasBeenSet(false),
    m_isRootHasBeenSet(false),
    m_isProxyHasBeenSet(false),
    m_isEmulatorHasBeenSet(false),
    m_chargeStatusHasBeenSet(false),
    m_networkTypeHasBeenSet(false),
    m_wifiMacHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_startupTimeHasBeenSet(false),
    m_lonHasBeenSet(false),
    m_latHasBeenSet(false)
{
}

CoreInternalOutcome DeviceDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MacAddress") && !value["MacAddress"].IsNull())
    {
        if (!value["MacAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.MacAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_macAddress = string(value["MacAddress"].GetString());
        m_macAddressHasBeenSet = true;
    }

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (value.HasMember("OsSystem") && !value["OsSystem"].IsNull())
    {
        if (!value["OsSystem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.OsSystem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osSystem = string(value["OsSystem"].GetString());
        m_osSystemHasBeenSet = true;
    }

    if (value.HasMember("OsSystemVersion") && !value["OsSystemVersion"].IsNull())
    {
        if (!value["OsSystemVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.OsSystemVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osSystemVersion = string(value["OsSystemVersion"].GetString());
        m_osSystemVersionHasBeenSet = true;
    }

    if (value.HasMember("BidFloor") && !value["BidFloor"].IsNull())
    {
        if (!value["BidFloor"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.BidFloor` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bidFloor = value["BidFloor"].GetInt64();
        m_bidFloorHasBeenSet = true;
    }

    if (value.HasMember("DeviceVersion") && !value["DeviceVersion"].IsNull())
    {
        if (!value["DeviceVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.DeviceVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceVersion = string(value["DeviceVersion"].GetString());
        m_deviceVersionHasBeenSet = true;
    }

    if (value.HasMember("Maker") && !value["Maker"].IsNull())
    {
        if (!value["Maker"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.Maker` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maker = string(value["Maker"].GetString());
        m_makerHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.DeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = string(value["DeviceType"].GetString());
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("Carrier") && !value["Carrier"].IsNull())
    {
        if (!value["Carrier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.Carrier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_carrier = string(value["Carrier"].GetString());
        m_carrierHasBeenSet = true;
    }

    if (value.HasMember("AccessMode") && !value["AccessMode"].IsNull())
    {
        if (!value["AccessMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.AccessMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessMode = string(value["AccessMode"].GetString());
        m_accessModeHasBeenSet = true;
    }

    if (value.HasMember("PhoneChipInfo") && !value["PhoneChipInfo"].IsNull())
    {
        if (!value["PhoneChipInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.PhoneChipInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneChipInfo = string(value["PhoneChipInfo"].GetString());
        m_phoneChipInfoHasBeenSet = true;
    }

    if (value.HasMember("CpuModel") && !value["CpuModel"].IsNull())
    {
        if (!value["CpuModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.CpuModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuModel = string(value["CpuModel"].GetString());
        m_cpuModelHasBeenSet = true;
    }

    if (value.HasMember("CpuCore") && !value["CpuCore"].IsNull())
    {
        if (!value["CpuCore"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.CpuCore` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuCore = string(value["CpuCore"].GetString());
        m_cpuCoreHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.Memory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memory = string(value["Memory"].GetString());
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Language") && !value["Language"].IsNull())
    {
        if (!value["Language"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.Language` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_language = string(value["Language"].GetString());
        m_languageHasBeenSet = true;
    }

    if (value.HasMember("Volume") && !value["Volume"].IsNull())
    {
        if (!value["Volume"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.Volume` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_volume = string(value["Volume"].GetString());
        m_volumeHasBeenSet = true;
    }

    if (value.HasMember("BatteryPower") && !value["BatteryPower"].IsNull())
    {
        if (!value["BatteryPower"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.BatteryPower` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batteryPower = string(value["BatteryPower"].GetString());
        m_batteryPowerHasBeenSet = true;
    }

    if (value.HasMember("ResolutionWidth") && !value["ResolutionWidth"].IsNull())
    {
        if (!value["ResolutionWidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.ResolutionWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resolutionWidth = value["ResolutionWidth"].GetInt64();
        m_resolutionWidthHasBeenSet = true;
    }

    if (value.HasMember("ResolutionHeight") && !value["ResolutionHeight"].IsNull())
    {
        if (!value["ResolutionHeight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.ResolutionHeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resolutionHeight = value["ResolutionHeight"].GetInt64();
        m_resolutionHeightHasBeenSet = true;
    }

    if (value.HasMember("Ua") && !value["Ua"].IsNull())
    {
        if (!value["Ua"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.Ua` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ua = string(value["Ua"].GetString());
        m_uaHasBeenSet = true;
    }

    if (value.HasMember("App") && !value["App"].IsNull())
    {
        if (!value["App"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.App` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_app = string(value["App"].GetString());
        m_appHasBeenSet = true;
    }

    if (value.HasMember("AppPackageName") && !value["AppPackageName"].IsNull())
    {
        if (!value["AppPackageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.AppPackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appPackageName = string(value["AppPackageName"].GetString());
        m_appPackageNameHasBeenSet = true;
    }

    if (value.HasMember("SerialNumber") && !value["SerialNumber"].IsNull())
    {
        if (!value["SerialNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.SerialNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serialNumber = string(value["SerialNumber"].GetString());
        m_serialNumberHasBeenSet = true;
    }

    if (value.HasMember("MobileCountryAndNetworkCode") && !value["MobileCountryAndNetworkCode"].IsNull())
    {
        if (!value["MobileCountryAndNetworkCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.MobileCountryAndNetworkCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mobileCountryAndNetworkCode = string(value["MobileCountryAndNetworkCode"].GetString());
        m_mobileCountryAndNetworkCodeHasBeenSet = true;
    }

    if (value.HasMember("VendorId") && !value["VendorId"].IsNull())
    {
        if (!value["VendorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.VendorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vendorId = string(value["VendorId"].GetString());
        m_vendorIdHasBeenSet = true;
    }

    if (value.HasMember("AndroidApiLevel") && !value["AndroidApiLevel"].IsNull())
    {
        if (!value["AndroidApiLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.AndroidApiLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_androidApiLevel = string(value["AndroidApiLevel"].GetString());
        m_androidApiLevelHasBeenSet = true;
    }

    if (value.HasMember("Brightness") && !value["Brightness"].IsNull())
    {
        if (!value["Brightness"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.Brightness` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brightness = string(value["Brightness"].GetString());
        m_brightnessHasBeenSet = true;
    }

    if (value.HasMember("BluetoothAddress") && !value["BluetoothAddress"].IsNull())
    {
        if (!value["BluetoothAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.BluetoothAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bluetoothAddress = string(value["BluetoothAddress"].GetString());
        m_bluetoothAddressHasBeenSet = true;
    }

    if (value.HasMember("BaseBandVersion") && !value["BaseBandVersion"].IsNull())
    {
        if (!value["BaseBandVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.BaseBandVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_baseBandVersion = string(value["BaseBandVersion"].GetString());
        m_baseBandVersionHasBeenSet = true;
    }

    if (value.HasMember("KernelVersion") && !value["KernelVersion"].IsNull())
    {
        if (!value["KernelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.KernelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kernelVersion = string(value["KernelVersion"].GetString());
        m_kernelVersionHasBeenSet = true;
    }

    if (value.HasMember("Storage") && !value["Storage"].IsNull())
    {
        if (!value["Storage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.Storage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storage = string(value["Storage"].GetString());
        m_storageHasBeenSet = true;
    }

    if (value.HasMember("PackageName") && !value["PackageName"].IsNull())
    {
        if (!value["PackageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.PackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageName = string(value["PackageName"].GetString());
        m_packageNameHasBeenSet = true;
    }

    if (value.HasMember("AppVersion") && !value["AppVersion"].IsNull())
    {
        if (!value["AppVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.AppVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appVersion = string(value["AppVersion"].GetString());
        m_appVersionHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("IsDebug") && !value["IsDebug"].IsNull())
    {
        if (!value["IsDebug"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.IsDebug` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isDebug = string(value["IsDebug"].GetString());
        m_isDebugHasBeenSet = true;
    }

    if (value.HasMember("IsRoot") && !value["IsRoot"].IsNull())
    {
        if (!value["IsRoot"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.IsRoot` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isRoot = string(value["IsRoot"].GetString());
        m_isRootHasBeenSet = true;
    }

    if (value.HasMember("IsProxy") && !value["IsProxy"].IsNull())
    {
        if (!value["IsProxy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.IsProxy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isProxy = string(value["IsProxy"].GetString());
        m_isProxyHasBeenSet = true;
    }

    if (value.HasMember("IsEmulator") && !value["IsEmulator"].IsNull())
    {
        if (!value["IsEmulator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.IsEmulator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isEmulator = string(value["IsEmulator"].GetString());
        m_isEmulatorHasBeenSet = true;
    }

    if (value.HasMember("ChargeStatus") && !value["ChargeStatus"].IsNull())
    {
        if (!value["ChargeStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.ChargeStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeStatus = string(value["ChargeStatus"].GetString());
        m_chargeStatusHasBeenSet = true;
    }

    if (value.HasMember("NetworkType") && !value["NetworkType"].IsNull())
    {
        if (!value["NetworkType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.NetworkType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkType = string(value["NetworkType"].GetString());
        m_networkTypeHasBeenSet = true;
    }

    if (value.HasMember("WifiMac") && !value["WifiMac"].IsNull())
    {
        if (!value["WifiMac"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.WifiMac` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wifiMac = string(value["WifiMac"].GetString());
        m_wifiMacHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("StartupTime") && !value["StartupTime"].IsNull())
    {
        if (!value["StartupTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.StartupTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startupTime = string(value["StartupTime"].GetString());
        m_startupTimeHasBeenSet = true;
    }

    if (value.HasMember("Lon") && !value["Lon"].IsNull())
    {
        if (!value["Lon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.Lon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lon = string(value["Lon"].GetString());
        m_lonHasBeenSet = true;
    }

    if (value.HasMember("Lat") && !value["Lat"].IsNull())
    {
        if (!value["Lat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDetailInfo.Lat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lat = string(value["Lat"].GetString());
        m_latHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_macAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MacAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_macAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_osSystemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsSystem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osSystem.c_str(), allocator).Move(), allocator);
    }

    if (m_osSystemVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsSystemVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osSystemVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_bidFloorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BidFloor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bidFloor, allocator);
    }

    if (m_deviceVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_makerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Maker";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maker.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_carrierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Carrier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_carrier.c_str(), allocator).Move(), allocator);
    }

    if (m_accessModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessMode.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneChipInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneChipInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phoneChipInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpuModel.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuCoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuCore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpuCore.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memory.c_str(), allocator).Move(), allocator);
    }

    if (m_languageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Language";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_language.c_str(), allocator).Move(), allocator);
    }

    if (m_volumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Volume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_volume.c_str(), allocator).Move(), allocator);
    }

    if (m_batteryPowerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatteryPower";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batteryPower.c_str(), allocator).Move(), allocator);
    }

    if (m_resolutionWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResolutionWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resolutionWidth, allocator);
    }

    if (m_resolutionHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResolutionHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resolutionHeight, allocator);
    }

    if (m_uaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ua";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ua.c_str(), allocator).Move(), allocator);
    }

    if (m_appHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "App";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_app.c_str(), allocator).Move(), allocator);
    }

    if (m_appPackageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppPackageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appPackageName.c_str(), allocator).Move(), allocator);
    }

    if (m_serialNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serialNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_mobileCountryAndNetworkCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MobileCountryAndNetworkCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mobileCountryAndNetworkCode.c_str(), allocator).Move(), allocator);
    }

    if (m_vendorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VendorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vendorId.c_str(), allocator).Move(), allocator);
    }

    if (m_androidApiLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidApiLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_androidApiLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_brightnessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Brightness";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brightness.c_str(), allocator).Move(), allocator);
    }

    if (m_bluetoothAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BluetoothAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bluetoothAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_baseBandVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseBandVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_baseBandVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_kernelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KernelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kernelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storage.c_str(), allocator).Move(), allocator);
    }

    if (m_packageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageName.c_str(), allocator).Move(), allocator);
    }

    if (m_appVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_isDebugHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDebug";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isDebug.c_str(), allocator).Move(), allocator);
    }

    if (m_isRootHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRoot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isRoot.c_str(), allocator).Move(), allocator);
    }

    if (m_isProxyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsProxy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isProxy.c_str(), allocator).Move(), allocator);
    }

    if (m_isEmulatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEmulator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isEmulator.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_networkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkType.c_str(), allocator).Move(), allocator);
    }

    if (m_wifiMacHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WifiMac";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wifiMac.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_startupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartupTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startupTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lon.c_str(), allocator).Move(), allocator);
    }

    if (m_latHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lat.c_str(), allocator).Move(), allocator);
    }

}


string DeviceDetailInfo::GetMacAddress() const
{
    return m_macAddress;
}

void DeviceDetailInfo::SetMacAddress(const string& _macAddress)
{
    m_macAddress = _macAddress;
    m_macAddressHasBeenSet = true;
}

bool DeviceDetailInfo::MacAddressHasBeenSet() const
{
    return m_macAddressHasBeenSet;
}

string DeviceDetailInfo::GetModel() const
{
    return m_model;
}

void DeviceDetailInfo::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool DeviceDetailInfo::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string DeviceDetailInfo::GetOsSystem() const
{
    return m_osSystem;
}

void DeviceDetailInfo::SetOsSystem(const string& _osSystem)
{
    m_osSystem = _osSystem;
    m_osSystemHasBeenSet = true;
}

bool DeviceDetailInfo::OsSystemHasBeenSet() const
{
    return m_osSystemHasBeenSet;
}

string DeviceDetailInfo::GetOsSystemVersion() const
{
    return m_osSystemVersion;
}

void DeviceDetailInfo::SetOsSystemVersion(const string& _osSystemVersion)
{
    m_osSystemVersion = _osSystemVersion;
    m_osSystemVersionHasBeenSet = true;
}

bool DeviceDetailInfo::OsSystemVersionHasBeenSet() const
{
    return m_osSystemVersionHasBeenSet;
}

int64_t DeviceDetailInfo::GetBidFloor() const
{
    return m_bidFloor;
}

void DeviceDetailInfo::SetBidFloor(const int64_t& _bidFloor)
{
    m_bidFloor = _bidFloor;
    m_bidFloorHasBeenSet = true;
}

bool DeviceDetailInfo::BidFloorHasBeenSet() const
{
    return m_bidFloorHasBeenSet;
}

string DeviceDetailInfo::GetDeviceVersion() const
{
    return m_deviceVersion;
}

void DeviceDetailInfo::SetDeviceVersion(const string& _deviceVersion)
{
    m_deviceVersion = _deviceVersion;
    m_deviceVersionHasBeenSet = true;
}

bool DeviceDetailInfo::DeviceVersionHasBeenSet() const
{
    return m_deviceVersionHasBeenSet;
}

string DeviceDetailInfo::GetMaker() const
{
    return m_maker;
}

void DeviceDetailInfo::SetMaker(const string& _maker)
{
    m_maker = _maker;
    m_makerHasBeenSet = true;
}

bool DeviceDetailInfo::MakerHasBeenSet() const
{
    return m_makerHasBeenSet;
}

string DeviceDetailInfo::GetDeviceType() const
{
    return m_deviceType;
}

void DeviceDetailInfo::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool DeviceDetailInfo::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string DeviceDetailInfo::GetCarrier() const
{
    return m_carrier;
}

void DeviceDetailInfo::SetCarrier(const string& _carrier)
{
    m_carrier = _carrier;
    m_carrierHasBeenSet = true;
}

bool DeviceDetailInfo::CarrierHasBeenSet() const
{
    return m_carrierHasBeenSet;
}

string DeviceDetailInfo::GetAccessMode() const
{
    return m_accessMode;
}

void DeviceDetailInfo::SetAccessMode(const string& _accessMode)
{
    m_accessMode = _accessMode;
    m_accessModeHasBeenSet = true;
}

bool DeviceDetailInfo::AccessModeHasBeenSet() const
{
    return m_accessModeHasBeenSet;
}

string DeviceDetailInfo::GetPhoneChipInfo() const
{
    return m_phoneChipInfo;
}

void DeviceDetailInfo::SetPhoneChipInfo(const string& _phoneChipInfo)
{
    m_phoneChipInfo = _phoneChipInfo;
    m_phoneChipInfoHasBeenSet = true;
}

bool DeviceDetailInfo::PhoneChipInfoHasBeenSet() const
{
    return m_phoneChipInfoHasBeenSet;
}

string DeviceDetailInfo::GetCpuModel() const
{
    return m_cpuModel;
}

void DeviceDetailInfo::SetCpuModel(const string& _cpuModel)
{
    m_cpuModel = _cpuModel;
    m_cpuModelHasBeenSet = true;
}

bool DeviceDetailInfo::CpuModelHasBeenSet() const
{
    return m_cpuModelHasBeenSet;
}

string DeviceDetailInfo::GetCpuCore() const
{
    return m_cpuCore;
}

void DeviceDetailInfo::SetCpuCore(const string& _cpuCore)
{
    m_cpuCore = _cpuCore;
    m_cpuCoreHasBeenSet = true;
}

bool DeviceDetailInfo::CpuCoreHasBeenSet() const
{
    return m_cpuCoreHasBeenSet;
}

string DeviceDetailInfo::GetMemory() const
{
    return m_memory;
}

void DeviceDetailInfo::SetMemory(const string& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool DeviceDetailInfo::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

string DeviceDetailInfo::GetLanguage() const
{
    return m_language;
}

void DeviceDetailInfo::SetLanguage(const string& _language)
{
    m_language = _language;
    m_languageHasBeenSet = true;
}

bool DeviceDetailInfo::LanguageHasBeenSet() const
{
    return m_languageHasBeenSet;
}

string DeviceDetailInfo::GetVolume() const
{
    return m_volume;
}

void DeviceDetailInfo::SetVolume(const string& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool DeviceDetailInfo::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

string DeviceDetailInfo::GetBatteryPower() const
{
    return m_batteryPower;
}

void DeviceDetailInfo::SetBatteryPower(const string& _batteryPower)
{
    m_batteryPower = _batteryPower;
    m_batteryPowerHasBeenSet = true;
}

bool DeviceDetailInfo::BatteryPowerHasBeenSet() const
{
    return m_batteryPowerHasBeenSet;
}

int64_t DeviceDetailInfo::GetResolutionWidth() const
{
    return m_resolutionWidth;
}

void DeviceDetailInfo::SetResolutionWidth(const int64_t& _resolutionWidth)
{
    m_resolutionWidth = _resolutionWidth;
    m_resolutionWidthHasBeenSet = true;
}

bool DeviceDetailInfo::ResolutionWidthHasBeenSet() const
{
    return m_resolutionWidthHasBeenSet;
}

int64_t DeviceDetailInfo::GetResolutionHeight() const
{
    return m_resolutionHeight;
}

void DeviceDetailInfo::SetResolutionHeight(const int64_t& _resolutionHeight)
{
    m_resolutionHeight = _resolutionHeight;
    m_resolutionHeightHasBeenSet = true;
}

bool DeviceDetailInfo::ResolutionHeightHasBeenSet() const
{
    return m_resolutionHeightHasBeenSet;
}

string DeviceDetailInfo::GetUa() const
{
    return m_ua;
}

void DeviceDetailInfo::SetUa(const string& _ua)
{
    m_ua = _ua;
    m_uaHasBeenSet = true;
}

bool DeviceDetailInfo::UaHasBeenSet() const
{
    return m_uaHasBeenSet;
}

string DeviceDetailInfo::GetApp() const
{
    return m_app;
}

void DeviceDetailInfo::SetApp(const string& _app)
{
    m_app = _app;
    m_appHasBeenSet = true;
}

bool DeviceDetailInfo::AppHasBeenSet() const
{
    return m_appHasBeenSet;
}

string DeviceDetailInfo::GetAppPackageName() const
{
    return m_appPackageName;
}

void DeviceDetailInfo::SetAppPackageName(const string& _appPackageName)
{
    m_appPackageName = _appPackageName;
    m_appPackageNameHasBeenSet = true;
}

bool DeviceDetailInfo::AppPackageNameHasBeenSet() const
{
    return m_appPackageNameHasBeenSet;
}

string DeviceDetailInfo::GetSerialNumber() const
{
    return m_serialNumber;
}

void DeviceDetailInfo::SetSerialNumber(const string& _serialNumber)
{
    m_serialNumber = _serialNumber;
    m_serialNumberHasBeenSet = true;
}

bool DeviceDetailInfo::SerialNumberHasBeenSet() const
{
    return m_serialNumberHasBeenSet;
}

string DeviceDetailInfo::GetMobileCountryAndNetworkCode() const
{
    return m_mobileCountryAndNetworkCode;
}

void DeviceDetailInfo::SetMobileCountryAndNetworkCode(const string& _mobileCountryAndNetworkCode)
{
    m_mobileCountryAndNetworkCode = _mobileCountryAndNetworkCode;
    m_mobileCountryAndNetworkCodeHasBeenSet = true;
}

bool DeviceDetailInfo::MobileCountryAndNetworkCodeHasBeenSet() const
{
    return m_mobileCountryAndNetworkCodeHasBeenSet;
}

string DeviceDetailInfo::GetVendorId() const
{
    return m_vendorId;
}

void DeviceDetailInfo::SetVendorId(const string& _vendorId)
{
    m_vendorId = _vendorId;
    m_vendorIdHasBeenSet = true;
}

bool DeviceDetailInfo::VendorIdHasBeenSet() const
{
    return m_vendorIdHasBeenSet;
}

string DeviceDetailInfo::GetAndroidApiLevel() const
{
    return m_androidApiLevel;
}

void DeviceDetailInfo::SetAndroidApiLevel(const string& _androidApiLevel)
{
    m_androidApiLevel = _androidApiLevel;
    m_androidApiLevelHasBeenSet = true;
}

bool DeviceDetailInfo::AndroidApiLevelHasBeenSet() const
{
    return m_androidApiLevelHasBeenSet;
}

string DeviceDetailInfo::GetBrightness() const
{
    return m_brightness;
}

void DeviceDetailInfo::SetBrightness(const string& _brightness)
{
    m_brightness = _brightness;
    m_brightnessHasBeenSet = true;
}

bool DeviceDetailInfo::BrightnessHasBeenSet() const
{
    return m_brightnessHasBeenSet;
}

string DeviceDetailInfo::GetBluetoothAddress() const
{
    return m_bluetoothAddress;
}

void DeviceDetailInfo::SetBluetoothAddress(const string& _bluetoothAddress)
{
    m_bluetoothAddress = _bluetoothAddress;
    m_bluetoothAddressHasBeenSet = true;
}

bool DeviceDetailInfo::BluetoothAddressHasBeenSet() const
{
    return m_bluetoothAddressHasBeenSet;
}

string DeviceDetailInfo::GetBaseBandVersion() const
{
    return m_baseBandVersion;
}

void DeviceDetailInfo::SetBaseBandVersion(const string& _baseBandVersion)
{
    m_baseBandVersion = _baseBandVersion;
    m_baseBandVersionHasBeenSet = true;
}

bool DeviceDetailInfo::BaseBandVersionHasBeenSet() const
{
    return m_baseBandVersionHasBeenSet;
}

string DeviceDetailInfo::GetKernelVersion() const
{
    return m_kernelVersion;
}

void DeviceDetailInfo::SetKernelVersion(const string& _kernelVersion)
{
    m_kernelVersion = _kernelVersion;
    m_kernelVersionHasBeenSet = true;
}

bool DeviceDetailInfo::KernelVersionHasBeenSet() const
{
    return m_kernelVersionHasBeenSet;
}

string DeviceDetailInfo::GetStorage() const
{
    return m_storage;
}

void DeviceDetailInfo::SetStorage(const string& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool DeviceDetailInfo::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

string DeviceDetailInfo::GetPackageName() const
{
    return m_packageName;
}

void DeviceDetailInfo::SetPackageName(const string& _packageName)
{
    m_packageName = _packageName;
    m_packageNameHasBeenSet = true;
}

bool DeviceDetailInfo::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

string DeviceDetailInfo::GetAppVersion() const
{
    return m_appVersion;
}

void DeviceDetailInfo::SetAppVersion(const string& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool DeviceDetailInfo::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

string DeviceDetailInfo::GetAppName() const
{
    return m_appName;
}

void DeviceDetailInfo::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool DeviceDetailInfo::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string DeviceDetailInfo::GetIsDebug() const
{
    return m_isDebug;
}

void DeviceDetailInfo::SetIsDebug(const string& _isDebug)
{
    m_isDebug = _isDebug;
    m_isDebugHasBeenSet = true;
}

bool DeviceDetailInfo::IsDebugHasBeenSet() const
{
    return m_isDebugHasBeenSet;
}

string DeviceDetailInfo::GetIsRoot() const
{
    return m_isRoot;
}

void DeviceDetailInfo::SetIsRoot(const string& _isRoot)
{
    m_isRoot = _isRoot;
    m_isRootHasBeenSet = true;
}

bool DeviceDetailInfo::IsRootHasBeenSet() const
{
    return m_isRootHasBeenSet;
}

string DeviceDetailInfo::GetIsProxy() const
{
    return m_isProxy;
}

void DeviceDetailInfo::SetIsProxy(const string& _isProxy)
{
    m_isProxy = _isProxy;
    m_isProxyHasBeenSet = true;
}

bool DeviceDetailInfo::IsProxyHasBeenSet() const
{
    return m_isProxyHasBeenSet;
}

string DeviceDetailInfo::GetIsEmulator() const
{
    return m_isEmulator;
}

void DeviceDetailInfo::SetIsEmulator(const string& _isEmulator)
{
    m_isEmulator = _isEmulator;
    m_isEmulatorHasBeenSet = true;
}

bool DeviceDetailInfo::IsEmulatorHasBeenSet() const
{
    return m_isEmulatorHasBeenSet;
}

string DeviceDetailInfo::GetChargeStatus() const
{
    return m_chargeStatus;
}

void DeviceDetailInfo::SetChargeStatus(const string& _chargeStatus)
{
    m_chargeStatus = _chargeStatus;
    m_chargeStatusHasBeenSet = true;
}

bool DeviceDetailInfo::ChargeStatusHasBeenSet() const
{
    return m_chargeStatusHasBeenSet;
}

string DeviceDetailInfo::GetNetworkType() const
{
    return m_networkType;
}

void DeviceDetailInfo::SetNetworkType(const string& _networkType)
{
    m_networkType = _networkType;
    m_networkTypeHasBeenSet = true;
}

bool DeviceDetailInfo::NetworkTypeHasBeenSet() const
{
    return m_networkTypeHasBeenSet;
}

string DeviceDetailInfo::GetWifiMac() const
{
    return m_wifiMac;
}

void DeviceDetailInfo::SetWifiMac(const string& _wifiMac)
{
    m_wifiMac = _wifiMac;
    m_wifiMacHasBeenSet = true;
}

bool DeviceDetailInfo::WifiMacHasBeenSet() const
{
    return m_wifiMacHasBeenSet;
}

string DeviceDetailInfo::GetDeviceName() const
{
    return m_deviceName;
}

void DeviceDetailInfo::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool DeviceDetailInfo::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string DeviceDetailInfo::GetStartupTime() const
{
    return m_startupTime;
}

void DeviceDetailInfo::SetStartupTime(const string& _startupTime)
{
    m_startupTime = _startupTime;
    m_startupTimeHasBeenSet = true;
}

bool DeviceDetailInfo::StartupTimeHasBeenSet() const
{
    return m_startupTimeHasBeenSet;
}

string DeviceDetailInfo::GetLon() const
{
    return m_lon;
}

void DeviceDetailInfo::SetLon(const string& _lon)
{
    m_lon = _lon;
    m_lonHasBeenSet = true;
}

bool DeviceDetailInfo::LonHasBeenSet() const
{
    return m_lonHasBeenSet;
}

string DeviceDetailInfo::GetLat() const
{
    return m_lat;
}

void DeviceDetailInfo::SetLat(const string& _lat)
{
    m_lat = _lat;
    m_latHasBeenSet = true;
}

bool DeviceDetailInfo::LatHasBeenSet() const
{
    return m_latHasBeenSet;
}

