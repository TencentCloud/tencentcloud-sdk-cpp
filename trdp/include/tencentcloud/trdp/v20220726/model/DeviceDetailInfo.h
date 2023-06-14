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

#ifndef TENCENTCLOUD_TRDP_V20220726_MODEL_DEVICEDETAILINFO_H_
#define TENCENTCLOUD_TRDP_V20220726_MODEL_DEVICEDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trdp
    {
        namespace V20220726
        {
            namespace Model
            {
                /**
                * 设备详情	
                */
                class DeviceDetailInfo : public AbstractModel
                {
                public:
                    DeviceDetailInfo();
                    ~DeviceDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取mac地址或唯一设备标识
                     * @return MacAddress mac地址或唯一设备标识
                     * 
                     */
                    std::string GetMacAddress() const;

                    /**
                     * 设置mac地址或唯一设备标识
                     * @param _macAddress mac地址或唯一设备标识
                     * 
                     */
                    void SetMacAddress(const std::string& _macAddress);

                    /**
                     * 判断参数 MacAddress 是否已赋值
                     * @return MacAddress 是否已赋值
                     * 
                     */
                    bool MacAddressHasBeenSet() const;

                    /**
                     * 获取手机型号
                     * @return Model 手机型号
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置手机型号
                     * @param _model 手机型号
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取操作系统(unknown，android，ios，windows)
                     * @return OsSystem 操作系统(unknown，android，ios，windows)
                     * 
                     */
                    std::string GetOsSystem() const;

                    /**
                     * 设置操作系统(unknown，android，ios，windows)
                     * @param _osSystem 操作系统(unknown，android，ios，windows)
                     * 
                     */
                    void SetOsSystem(const std::string& _osSystem);

                    /**
                     * 判断参数 OsSystem 是否已赋值
                     * @return OsSystem 是否已赋值
                     * 
                     */
                    bool OsSystemHasBeenSet() const;

                    /**
                     * 获取操作系统版本
                     * @return OsSystemVersion 操作系统版本
                     * 
                     */
                    std::string GetOsSystemVersion() const;

                    /**
                     * 设置操作系统版本
                     * @param _osSystemVersion 操作系统版本
                     * 
                     */
                    void SetOsSystemVersion(const std::string& _osSystemVersion);

                    /**
                     * 判断参数 OsSystemVersion 是否已赋值
                     * @return OsSystemVersion 是否已赋值
                     * 
                     */
                    bool OsSystemVersionHasBeenSet() const;

                    /**
                     * 获取竞价底价
                     * @return BidFloor 竞价底价
                     * 
                     */
                    int64_t GetBidFloor() const;

                    /**
                     * 设置竞价底价
                     * @param _bidFloor 竞价底价
                     * 
                     */
                    void SetBidFloor(const int64_t& _bidFloor);

                    /**
                     * 判断参数 BidFloor 是否已赋值
                     * @return BidFloor 是否已赋值
                     * 
                     */
                    bool BidFloorHasBeenSet() const;

                    /**
                     * 获取设备版本
                     * @return DeviceVersion 设备版本
                     * 
                     */
                    std::string GetDeviceVersion() const;

                    /**
                     * 设置设备版本
                     * @param _deviceVersion 设备版本
                     * 
                     */
                    void SetDeviceVersion(const std::string& _deviceVersion);

                    /**
                     * 判断参数 DeviceVersion 是否已赋值
                     * @return DeviceVersion 是否已赋值
                     * 
                     */
                    bool DeviceVersionHasBeenSet() const;

                    /**
                     * 获取设备制造商
                     * @return Maker 设备制造商
                     * 
                     */
                    std::string GetMaker() const;

                    /**
                     * 设置设备制造商
                     * @param _maker 设备制造商
                     * 
                     */
                    void SetMaker(const std::string& _maker);

                    /**
                     * 判断参数 Maker 是否已赋值
                     * @return Maker 是否已赋值
                     * 
                     */
                    bool MakerHasBeenSet() const;

                    /**
                     * 获取设备类型（PHONE,TABLET）
                     * @return DeviceType 设备类型（PHONE,TABLET）
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置设备类型（PHONE,TABLET）
                     * @param _deviceType 设备类型（PHONE,TABLET）
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取运营商；-1: 获取失败，0: 其他，1: 移动，2: 联通，3: 电信，4: 铁通
                     * @return Carrier 运营商；-1: 获取失败，0: 其他，1: 移动，2: 联通，3: 电信，4: 铁通
                     * 
                     */
                    std::string GetCarrier() const;

                    /**
                     * 设置运营商；-1: 获取失败，0: 其他，1: 移动，2: 联通，3: 电信，4: 铁通
                     * @param _carrier 运营商；-1: 获取失败，0: 其他，1: 移动，2: 联通，3: 电信，4: 铁通
                     * 
                     */
                    void SetCarrier(const std::string& _carrier);

                    /**
                     * 判断参数 Carrier 是否已赋值
                     * @return Carrier 是否已赋值
                     * 
                     */
                    bool CarrierHasBeenSet() const;

                    /**
                     * 获取入网方式(wifi,5g,4g,3g,2g)
                     * @return AccessMode 入网方式(wifi,5g,4g,3g,2g)
                     * 
                     */
                    std::string GetAccessMode() const;

                    /**
                     * 设置入网方式(wifi,5g,4g,3g,2g)
                     * @param _accessMode 入网方式(wifi,5g,4g,3g,2g)
                     * 
                     */
                    void SetAccessMode(const std::string& _accessMode);

                    /**
                     * 判断参数 AccessMode 是否已赋值
                     * @return AccessMode 是否已赋值
                     * 
                     */
                    bool AccessModeHasBeenSet() const;

                    /**
                     * 获取手机芯片信息
                     * @return PhoneChipInfo 手机芯片信息
                     * 
                     */
                    std::string GetPhoneChipInfo() const;

                    /**
                     * 设置手机芯片信息
                     * @param _phoneChipInfo 手机芯片信息
                     * 
                     */
                    void SetPhoneChipInfo(const std::string& _phoneChipInfo);

                    /**
                     * 判断参数 PhoneChipInfo 是否已赋值
                     * @return PhoneChipInfo 是否已赋值
                     * 
                     */
                    bool PhoneChipInfoHasBeenSet() const;

                    /**
                     * 获取CPU 型号
                     * @return CpuModel CPU 型号
                     * 
                     */
                    std::string GetCpuModel() const;

                    /**
                     * 设置CPU 型号
                     * @param _cpuModel CPU 型号
                     * 
                     */
                    void SetCpuModel(const std::string& _cpuModel);

                    /**
                     * 判断参数 CpuModel 是否已赋值
                     * @return CpuModel 是否已赋值
                     * 
                     */
                    bool CpuModelHasBeenSet() const;

                    /**
                     * 获取CPU 核数
                     * @return CpuCore CPU 核数
                     * 
                     */
                    std::string GetCpuCore() const;

                    /**
                     * 设置CPU 核数
                     * @param _cpuCore CPU 核数
                     * 
                     */
                    void SetCpuCore(const std::string& _cpuCore);

                    /**
                     * 判断参数 CpuCore 是否已赋值
                     * @return CpuCore 是否已赋值
                     * 
                     */
                    bool CpuCoreHasBeenSet() const;

                    /**
                     * 获取内存容量，单位转换为 GB
                     * @return Memory 内存容量，单位转换为 GB
                     * 
                     */
                    std::string GetMemory() const;

                    /**
                     * 设置内存容量，单位转换为 GB
                     * @param _memory 内存容量，单位转换为 GB
                     * 
                     */
                    void SetMemory(const std::string& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取系统语言
                     * @return Language 系统语言
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置系统语言
                     * @param _language 系统语言
                     * 
                     */
                    void SetLanguage(const std::string& _language);

                    /**
                     * 判断参数 Language 是否已赋值
                     * @return Language 是否已赋值
                     * 
                     */
                    bool LanguageHasBeenSet() const;

                    /**
                     * 获取手机音量
                     * @return Volume 手机音量
                     * 
                     */
                    std::string GetVolume() const;

                    /**
                     * 设置手机音量
                     * @param _volume 手机音量
                     * 
                     */
                    void SetVolume(const std::string& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取电池电量
                     * @return BatteryPower 电池电量
                     * 
                     */
                    std::string GetBatteryPower() const;

                    /**
                     * 设置电池电量
                     * @param _batteryPower 电池电量
                     * 
                     */
                    void SetBatteryPower(const std::string& _batteryPower);

                    /**
                     * 判断参数 BatteryPower 是否已赋值
                     * @return BatteryPower 是否已赋值
                     * 
                     */
                    bool BatteryPowerHasBeenSet() const;

                    /**
                     * 获取屏幕分辨率宽，保留整数
                     * @return ResolutionWidth 屏幕分辨率宽，保留整数
                     * 
                     */
                    int64_t GetResolutionWidth() const;

                    /**
                     * 设置屏幕分辨率宽，保留整数
                     * @param _resolutionWidth 屏幕分辨率宽，保留整数
                     * 
                     */
                    void SetResolutionWidth(const int64_t& _resolutionWidth);

                    /**
                     * 判断参数 ResolutionWidth 是否已赋值
                     * @return ResolutionWidth 是否已赋值
                     * 
                     */
                    bool ResolutionWidthHasBeenSet() const;

                    /**
                     * 获取屏幕分辨率高，保留整数
                     * @return ResolutionHeight 屏幕分辨率高，保留整数
                     * 
                     */
                    int64_t GetResolutionHeight() const;

                    /**
                     * 设置屏幕分辨率高，保留整数
                     * @param _resolutionHeight 屏幕分辨率高，保留整数
                     * 
                     */
                    void SetResolutionHeight(const int64_t& _resolutionHeight);

                    /**
                     * 判断参数 ResolutionHeight 是否已赋值
                     * @return ResolutionHeight 是否已赋值
                     * 
                     */
                    bool ResolutionHeightHasBeenSet() const;

                    /**
                     * 获取浏览器类型
                     * @return Ua 浏览器类型
                     * 
                     */
                    std::string GetUa() const;

                    /**
                     * 设置浏览器类型
                     * @param _ua 浏览器类型
                     * 
                     */
                    void SetUa(const std::string& _ua);

                    /**
                     * 判断参数 Ua 是否已赋值
                     * @return Ua 是否已赋值
                     * 
                     */
                    bool UaHasBeenSet() const;

                    /**
                     * 获取客户端应用
                     * @return App 客户端应用
                     * 
                     */
                    std::string GetApp() const;

                    /**
                     * 设置客户端应用
                     * @param _app 客户端应用
                     * 
                     */
                    void SetApp(const std::string& _app);

                    /**
                     * 判断参数 App 是否已赋值
                     * @return App 是否已赋值
                     * 
                     */
                    bool AppHasBeenSet() const;

                    /**
                     * 获取应用包名
                     * @return AppPackageName 应用包名
                     * 
                     */
                    std::string GetAppPackageName() const;

                    /**
                     * 设置应用包名
                     * @param _appPackageName 应用包名
                     * 
                     */
                    void SetAppPackageName(const std::string& _appPackageName);

                    /**
                     * 判断参数 AppPackageName 是否已赋值
                     * @return AppPackageName 是否已赋值
                     * 
                     */
                    bool AppPackageNameHasBeenSet() const;

                    /**
                     * 获取设备序列号
Android设备
                     * @return SerialNumber 设备序列号
Android设备
                     * 
                     */
                    std::string GetSerialNumber() const;

                    /**
                     * 设置设备序列号
Android设备
                     * @param _serialNumber 设备序列号
Android设备
                     * 
                     */
                    void SetSerialNumber(const std::string& _serialNumber);

                    /**
                     * 判断参数 SerialNumber 是否已赋值
                     * @return SerialNumber 是否已赋值
                     * 
                     */
                    bool SerialNumberHasBeenSet() const;

                    /**
                     * 获取netOperator MCC+MNC
Android设备
                     * @return MobileCountryAndNetworkCode netOperator MCC+MNC
Android设备
                     * 
                     */
                    std::string GetMobileCountryAndNetworkCode() const;

                    /**
                     * 设置netOperator MCC+MNC
Android设备
                     * @param _mobileCountryAndNetworkCode netOperator MCC+MNC
Android设备
                     * 
                     */
                    void SetMobileCountryAndNetworkCode(const std::string& _mobileCountryAndNetworkCode);

                    /**
                     * 判断参数 MobileCountryAndNetworkCode 是否已赋值
                     * @return MobileCountryAndNetworkCode 是否已赋值
                     * 
                     */
                    bool MobileCountryAndNetworkCodeHasBeenSet() const;

                    /**
                     * 获取设备品牌 “华为”“oppo”“小米”
Android设备
                     * @return VendorId 设备品牌 “华为”“oppo”“小米”
Android设备
                     * 
                     */
                    std::string GetVendorId() const;

                    /**
                     * 设置设备品牌 “华为”“oppo”“小米”
Android设备
                     * @param _vendorId 设备品牌 “华为”“oppo”“小米”
Android设备
                     * 
                     */
                    void SetVendorId(const std::string& _vendorId);

                    /**
                     * 判断参数 VendorId 是否已赋值
                     * @return VendorId 是否已赋值
                     * 
                     */
                    bool VendorIdHasBeenSet() const;

                    /**
                     * 获取Android API等级
Android设备
                     * @return AndroidApiLevel Android API等级
Android设备
                     * 
                     */
                    std::string GetAndroidApiLevel() const;

                    /**
                     * 设置Android API等级
Android设备
                     * @param _androidApiLevel Android API等级
Android设备
                     * 
                     */
                    void SetAndroidApiLevel(const std::string& _androidApiLevel);

                    /**
                     * 判断参数 AndroidApiLevel 是否已赋值
                     * @return AndroidApiLevel 是否已赋值
                     * 
                     */
                    bool AndroidApiLevelHasBeenSet() const;

                    /**
                     * 获取屏幕亮度
Android设备
                     * @return Brightness 屏幕亮度
Android设备
                     * 
                     */
                    std::string GetBrightness() const;

                    /**
                     * 设置屏幕亮度
Android设备
                     * @param _brightness 屏幕亮度
Android设备
                     * 
                     */
                    void SetBrightness(const std::string& _brightness);

                    /**
                     * 判断参数 Brightness 是否已赋值
                     * @return Brightness 是否已赋值
                     * 
                     */
                    bool BrightnessHasBeenSet() const;

                    /**
                     * 获取蓝牙地址
Android设备
                     * @return BluetoothAddress 蓝牙地址
Android设备
                     * 
                     */
                    std::string GetBluetoothAddress() const;

                    /**
                     * 设置蓝牙地址
Android设备
                     * @param _bluetoothAddress 蓝牙地址
Android设备
                     * 
                     */
                    void SetBluetoothAddress(const std::string& _bluetoothAddress);

                    /**
                     * 判断参数 BluetoothAddress 是否已赋值
                     * @return BluetoothAddress 是否已赋值
                     * 
                     */
                    bool BluetoothAddressHasBeenSet() const;

                    /**
                     * 获取基带版本
Android设备
                     * @return BaseBandVersion 基带版本
Android设备
                     * 
                     */
                    std::string GetBaseBandVersion() const;

                    /**
                     * 设置基带版本
Android设备
                     * @param _baseBandVersion 基带版本
Android设备
                     * 
                     */
                    void SetBaseBandVersion(const std::string& _baseBandVersion);

                    /**
                     * 判断参数 BaseBandVersion 是否已赋值
                     * @return BaseBandVersion 是否已赋值
                     * 
                     */
                    bool BaseBandVersionHasBeenSet() const;

                    /**
                     * 获取kernel 版本
Android设备
                     * @return KernelVersion kernel 版本
Android设备
                     * 
                     */
                    std::string GetKernelVersion() const;

                    /**
                     * 设置kernel 版本
Android设备
                     * @param _kernelVersion kernel 版本
Android设备
                     * 
                     */
                    void SetKernelVersion(const std::string& _kernelVersion);

                    /**
                     * 判断参数 KernelVersion 是否已赋值
                     * @return KernelVersion 是否已赋值
                     * 
                     */
                    bool KernelVersionHasBeenSet() const;

                    /**
                     * 获取存储容量，单位转换为 GB
Android设备
                     * @return Storage 存储容量，单位转换为 GB
Android设备
                     * 
                     */
                    std::string GetStorage() const;

                    /**
                     * 设置存储容量，单位转换为 GB
Android设备
                     * @param _storage 存储容量，单位转换为 GB
Android设备
                     * 
                     */
                    void SetStorage(const std::string& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取软件包名
Android设备
                     * @return PackageName 软件包名
Android设备
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置软件包名
Android设备
                     * @param _packageName 软件包名
Android设备
                     * 
                     */
                    void SetPackageName(const std::string& _packageName);

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     * 
                     */
                    bool PackageNameHasBeenSet() const;

                    /**
                     * 获取app 版本号
Android设备
                     * @return AppVersion app 版本号
Android设备
                     * 
                     */
                    std::string GetAppVersion() const;

                    /**
                     * 设置app 版本号
Android设备
                     * @param _appVersion app 版本号
Android设备
                     * 
                     */
                    void SetAppVersion(const std::string& _appVersion);

                    /**
                     * 判断参数 AppVersion 是否已赋值
                     * @return AppVersion 是否已赋值
                     * 
                     */
                    bool AppVersionHasBeenSet() const;

                    /**
                     * 获取app 显示名称
Android设备
                     * @return AppName app 显示名称
Android设备
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置app 显示名称
Android设备
                     * @param _appName app 显示名称
Android设备
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取是否 debug；0 为正常模式，1 为 debug 模式；其他值无效
Android设备
                     * @return IsDebug 是否 debug；0 为正常模式，1 为 debug 模式；其他值无效
Android设备
                     * 
                     */
                    std::string GetIsDebug() const;

                    /**
                     * 设置是否 debug；0 为正常模式，1 为 debug 模式；其他值无效
Android设备
                     * @param _isDebug 是否 debug；0 为正常模式，1 为 debug 模式；其他值无效
Android设备
                     * 
                     */
                    void SetIsDebug(const std::string& _isDebug);

                    /**
                     * 判断参数 IsDebug 是否已赋值
                     * @return IsDebug 是否已赋值
                     * 
                     */
                    bool IsDebugHasBeenSet() const;

                    /**
                     * 获取是否越狱；0 为正常，1 为越狱；其他值无效
Android设备
                     * @return IsRoot 是否越狱；0 为正常，1 为越狱；其他值无效
Android设备
                     * 
                     */
                    std::string GetIsRoot() const;

                    /**
                     * 设置是否越狱；0 为正常，1 为越狱；其他值无效
Android设备
                     * @param _isRoot 是否越狱；0 为正常，1 为越狱；其他值无效
Android设备
                     * 
                     */
                    void SetIsRoot(const std::string& _isRoot);

                    /**
                     * 判断参数 IsRoot 是否已赋值
                     * @return IsRoot 是否已赋值
                     * 
                     */
                    bool IsRootHasBeenSet() const;

                    /**
                     * 获取是否启动代理；0 为未开启，1 为开启；其他值无效
Android设备
                     * @return IsProxy 是否启动代理；0 为未开启，1 为开启；其他值无效
Android设备
                     * 
                     */
                    std::string GetIsProxy() const;

                    /**
                     * 设置是否启动代理；0 为未开启，1 为开启；其他值无效
Android设备
                     * @param _isProxy 是否启动代理；0 为未开启，1 为开启；其他值无效
Android设备
                     * 
                     */
                    void SetIsProxy(const std::string& _isProxy);

                    /**
                     * 判断参数 IsProxy 是否已赋值
                     * @return IsProxy 是否已赋值
                     * 
                     */
                    bool IsProxyHasBeenSet() const;

                    /**
                     * 获取是否模拟器；0 为未开启，1 为开启；其他值无效
Android设备
                     * @return IsEmulator 是否模拟器；0 为未开启，1 为开启；其他值无效
Android设备
                     * 
                     */
                    std::string GetIsEmulator() const;

                    /**
                     * 设置是否模拟器；0 为未开启，1 为开启；其他值无效
Android设备
                     * @param _isEmulator 是否模拟器；0 为未开启，1 为开启；其他值无效
Android设备
                     * 
                     */
                    void SetIsEmulator(const std::string& _isEmulator);

                    /**
                     * 判断参数 IsEmulator 是否已赋值
                     * @return IsEmulator 是否已赋值
                     * 
                     */
                    bool IsEmulatorHasBeenSet() const;

                    /**
                     * 获取充电状态；1-不在充电，2-USB充电，3-电源充电
Android设备
                     * @return ChargeStatus 充电状态；1-不在充电，2-USB充电，3-电源充电
Android设备
                     * 
                     */
                    std::string GetChargeStatus() const;

                    /**
                     * 设置充电状态；1-不在充电，2-USB充电，3-电源充电
Android设备
                     * @param _chargeStatus 充电状态；1-不在充电，2-USB充电，3-电源充电
Android设备
                     * 
                     */
                    void SetChargeStatus(const std::string& _chargeStatus);

                    /**
                     * 判断参数 ChargeStatus 是否已赋值
                     * @return ChargeStatus 是否已赋值
                     * 
                     */
                    bool ChargeStatusHasBeenSet() const;

                    /**
                     * 获取网络类型：2G/3G/4G/5G/Wi-Fi/WWAN/other
Android设备
                     * @return NetworkType 网络类型：2G/3G/4G/5G/Wi-Fi/WWAN/other
Android设备
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置网络类型：2G/3G/4G/5G/Wi-Fi/WWAN/other
Android设备
                     * @param _networkType 网络类型：2G/3G/4G/5G/Wi-Fi/WWAN/other
Android设备
                     * 
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取Wi-Fi MAC地址
Android设备
                     * @return WifiMac Wi-Fi MAC地址
Android设备
                     * 
                     */
                    std::string GetWifiMac() const;

                    /**
                     * 设置Wi-Fi MAC地址
Android设备
                     * @param _wifiMac Wi-Fi MAC地址
Android设备
                     * 
                     */
                    void SetWifiMac(const std::string& _wifiMac);

                    /**
                     * 判断参数 WifiMac 是否已赋值
                     * @return WifiMac 是否已赋值
                     * 
                     */
                    bool WifiMacHasBeenSet() const;

                    /**
                     * 获取设备名称 "xxx 的 iPhone"，"xxx's IPhone" 等等
IOS设备
                     * @return DeviceName 设备名称 "xxx 的 iPhone"，"xxx's IPhone" 等等
IOS设备
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称 "xxx 的 iPhone"，"xxx's IPhone" 等等
IOS设备
                     * @param _deviceName 设备名称 "xxx 的 iPhone"，"xxx's IPhone" 等等
IOS设备
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取开机时间
IOS设备
                     * @return StartupTime 开机时间
IOS设备
                     * 
                     */
                    std::string GetStartupTime() const;

                    /**
                     * 设置开机时间
IOS设备
                     * @param _startupTime 开机时间
IOS设备
                     * 
                     */
                    void SetStartupTime(const std::string& _startupTime);

                    /**
                     * 判断参数 StartupTime 是否已赋值
                     * @return StartupTime 是否已赋值
                     * 
                     */
                    bool StartupTimeHasBeenSet() const;

                    /**
                     * 获取所在经度
                     * @return Lon 所在经度
                     * 
                     */
                    std::string GetLon() const;

                    /**
                     * 设置所在经度
                     * @param _lon 所在经度
                     * 
                     */
                    void SetLon(const std::string& _lon);

                    /**
                     * 判断参数 Lon 是否已赋值
                     * @return Lon 是否已赋值
                     * 
                     */
                    bool LonHasBeenSet() const;

                    /**
                     * 获取所在纬度
                     * @return Lat 所在纬度
                     * 
                     */
                    std::string GetLat() const;

                    /**
                     * 设置所在纬度
                     * @param _lat 所在纬度
                     * 
                     */
                    void SetLat(const std::string& _lat);

                    /**
                     * 判断参数 Lat 是否已赋值
                     * @return Lat 是否已赋值
                     * 
                     */
                    bool LatHasBeenSet() const;

                private:

                    /**
                     * mac地址或唯一设备标识
                     */
                    std::string m_macAddress;
                    bool m_macAddressHasBeenSet;

                    /**
                     * 手机型号
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 操作系统(unknown，android，ios，windows)
                     */
                    std::string m_osSystem;
                    bool m_osSystemHasBeenSet;

                    /**
                     * 操作系统版本
                     */
                    std::string m_osSystemVersion;
                    bool m_osSystemVersionHasBeenSet;

                    /**
                     * 竞价底价
                     */
                    int64_t m_bidFloor;
                    bool m_bidFloorHasBeenSet;

                    /**
                     * 设备版本
                     */
                    std::string m_deviceVersion;
                    bool m_deviceVersionHasBeenSet;

                    /**
                     * 设备制造商
                     */
                    std::string m_maker;
                    bool m_makerHasBeenSet;

                    /**
                     * 设备类型（PHONE,TABLET）
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 运营商；-1: 获取失败，0: 其他，1: 移动，2: 联通，3: 电信，4: 铁通
                     */
                    std::string m_carrier;
                    bool m_carrierHasBeenSet;

                    /**
                     * 入网方式(wifi,5g,4g,3g,2g)
                     */
                    std::string m_accessMode;
                    bool m_accessModeHasBeenSet;

                    /**
                     * 手机芯片信息
                     */
                    std::string m_phoneChipInfo;
                    bool m_phoneChipInfoHasBeenSet;

                    /**
                     * CPU 型号
                     */
                    std::string m_cpuModel;
                    bool m_cpuModelHasBeenSet;

                    /**
                     * CPU 核数
                     */
                    std::string m_cpuCore;
                    bool m_cpuCoreHasBeenSet;

                    /**
                     * 内存容量，单位转换为 GB
                     */
                    std::string m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 系统语言
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * 手机音量
                     */
                    std::string m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * 电池电量
                     */
                    std::string m_batteryPower;
                    bool m_batteryPowerHasBeenSet;

                    /**
                     * 屏幕分辨率宽，保留整数
                     */
                    int64_t m_resolutionWidth;
                    bool m_resolutionWidthHasBeenSet;

                    /**
                     * 屏幕分辨率高，保留整数
                     */
                    int64_t m_resolutionHeight;
                    bool m_resolutionHeightHasBeenSet;

                    /**
                     * 浏览器类型
                     */
                    std::string m_ua;
                    bool m_uaHasBeenSet;

                    /**
                     * 客户端应用
                     */
                    std::string m_app;
                    bool m_appHasBeenSet;

                    /**
                     * 应用包名
                     */
                    std::string m_appPackageName;
                    bool m_appPackageNameHasBeenSet;

                    /**
                     * 设备序列号
Android设备
                     */
                    std::string m_serialNumber;
                    bool m_serialNumberHasBeenSet;

                    /**
                     * netOperator MCC+MNC
Android设备
                     */
                    std::string m_mobileCountryAndNetworkCode;
                    bool m_mobileCountryAndNetworkCodeHasBeenSet;

                    /**
                     * 设备品牌 “华为”“oppo”“小米”
Android设备
                     */
                    std::string m_vendorId;
                    bool m_vendorIdHasBeenSet;

                    /**
                     * Android API等级
Android设备
                     */
                    std::string m_androidApiLevel;
                    bool m_androidApiLevelHasBeenSet;

                    /**
                     * 屏幕亮度
Android设备
                     */
                    std::string m_brightness;
                    bool m_brightnessHasBeenSet;

                    /**
                     * 蓝牙地址
Android设备
                     */
                    std::string m_bluetoothAddress;
                    bool m_bluetoothAddressHasBeenSet;

                    /**
                     * 基带版本
Android设备
                     */
                    std::string m_baseBandVersion;
                    bool m_baseBandVersionHasBeenSet;

                    /**
                     * kernel 版本
Android设备
                     */
                    std::string m_kernelVersion;
                    bool m_kernelVersionHasBeenSet;

                    /**
                     * 存储容量，单位转换为 GB
Android设备
                     */
                    std::string m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 软件包名
Android设备
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * app 版本号
Android设备
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                    /**
                     * app 显示名称
Android设备
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 是否 debug；0 为正常模式，1 为 debug 模式；其他值无效
Android设备
                     */
                    std::string m_isDebug;
                    bool m_isDebugHasBeenSet;

                    /**
                     * 是否越狱；0 为正常，1 为越狱；其他值无效
Android设备
                     */
                    std::string m_isRoot;
                    bool m_isRootHasBeenSet;

                    /**
                     * 是否启动代理；0 为未开启，1 为开启；其他值无效
Android设备
                     */
                    std::string m_isProxy;
                    bool m_isProxyHasBeenSet;

                    /**
                     * 是否模拟器；0 为未开启，1 为开启；其他值无效
Android设备
                     */
                    std::string m_isEmulator;
                    bool m_isEmulatorHasBeenSet;

                    /**
                     * 充电状态；1-不在充电，2-USB充电，3-电源充电
Android设备
                     */
                    std::string m_chargeStatus;
                    bool m_chargeStatusHasBeenSet;

                    /**
                     * 网络类型：2G/3G/4G/5G/Wi-Fi/WWAN/other
Android设备
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * Wi-Fi MAC地址
Android设备
                     */
                    std::string m_wifiMac;
                    bool m_wifiMacHasBeenSet;

                    /**
                     * 设备名称 "xxx 的 iPhone"，"xxx's IPhone" 等等
IOS设备
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 开机时间
IOS设备
                     */
                    std::string m_startupTime;
                    bool m_startupTimeHasBeenSet;

                    /**
                     * 所在经度
                     */
                    std::string m_lon;
                    bool m_lonHasBeenSet;

                    /**
                     * 所在纬度
                     */
                    std::string m_lat;
                    bool m_latHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRDP_V20220726_MODEL_DEVICEDETAILINFO_H_
