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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_DEVICE_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_DEVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 设备基础信息
                */
                class Device : public AbstractModel
                {
                public:
                    Device();
                    ~Device() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>设备ID</p>
                     * @return DeviceId <p>设备ID</p>
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置<p>设备ID</p>
                     * @param _deviceId <p>设备ID</p>
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取<p>App版本信息</p>
                     * @return AppVersion <p>App版本信息</p>
                     * 
                     */
                    std::string GetAppVersion() const;

                    /**
                     * 设置<p>App版本信息</p>
                     * @param _appVersion <p>App版本信息</p>
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
                     * 获取<p>品牌</p>
                     * @return Brand <p>品牌</p>
                     * 
                     */
                    std::string GetBrand() const;

                    /**
                     * 设置<p>品牌</p>
                     * @param _brand <p>品牌</p>
                     * 
                     */
                    void SetBrand(const std::string& _brand);

                    /**
                     * 判断参数 Brand 是否已赋值
                     * @return Brand 是否已赋值
                     * 
                     */
                    bool BrandHasBeenSet() const;

                    /**
                     * 获取<p>客户端IP</p>
                     * @return ClientIp <p>客户端IP</p>
                     * 
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置<p>客户端IP</p>
                     * @param _clientIp <p>客户端IP</p>
                     * 
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     * 
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取<p>机型</p>
                     * @return Model <p>机型</p>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>机型</p>
                     * @param _model <p>机型</p>
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
                     * 获取<p>网络类型</p>
                     * @return NetworkType <p>网络类型</p>
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置<p>网络类型</p>
                     * @param _networkType <p>网络类型</p>
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
                     * 获取<p>应用包名</p>
                     * @return PackageName <p>应用包名</p>
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置<p>应用包名</p>
                     * @param _packageName <p>应用包名</p>
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
                     * 获取<p>平台</p><p>枚举值：</p><ul><li>2： Android</li><li>3： IOS</li><li>4： H5</li><li>5： 微信小程序</li></ul>
                     * @return Platform <p>平台</p><p>枚举值：</p><ul><li>2： Android</li><li>3： IOS</li><li>4： H5</li><li>5： 微信小程序</li></ul>
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置<p>平台</p><p>枚举值：</p><ul><li>2： Android</li><li>3： IOS</li><li>4： H5</li><li>5： 微信小程序</li></ul>
                     * @param _platform <p>平台</p><p>枚举值：</p><ul><li>2： Android</li><li>3： IOS</li><li>4： H5</li><li>5： 微信小程序</li></ul>
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取<p>系统版本</p>
                     * @return SystemVersion <p>系统版本</p>
                     * 
                     */
                    std::string GetSystemVersion() const;

                    /**
                     * 设置<p>系统版本</p>
                     * @param _systemVersion <p>系统版本</p>
                     * 
                     */
                    void SetSystemVersion(const std::string& _systemVersion);

                    /**
                     * 判断参数 SystemVersion 是否已赋值
                     * @return SystemVersion 是否已赋值
                     * 
                     */
                    bool SystemVersionHasBeenSet() const;

                    /**
                     * 获取<p>SDK版本</p>
                     * @return SdkBuildVersion <p>SDK版本</p>
                     * 
                     */
                    std::string GetSdkBuildVersion() const;

                    /**
                     * 设置<p>SDK版本</p>
                     * @param _sdkBuildVersion <p>SDK版本</p>
                     * 
                     */
                    void SetSdkBuildVersion(const std::string& _sdkBuildVersion);

                    /**
                     * 判断参数 SdkBuildVersion 是否已赋值
                     * @return SdkBuildVersion 是否已赋值
                     * 
                     */
                    bool SdkBuildVersionHasBeenSet() const;

                private:

                    /**
                     * <p>设备ID</p>
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * <p>App版本信息</p>
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                    /**
                     * <p>品牌</p>
                     */
                    std::string m_brand;
                    bool m_brandHasBeenSet;

                    /**
                     * <p>客户端IP</p>
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * <p>机型</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>网络类型</p>
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * <p>应用包名</p>
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * <p>平台</p><p>枚举值：</p><ul><li>2： Android</li><li>3： IOS</li><li>4： H5</li><li>5： 微信小程序</li></ul>
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * <p>系统版本</p>
                     */
                    std::string m_systemVersion;
                    bool m_systemVersionHasBeenSet;

                    /**
                     * <p>SDK版本</p>
                     */
                    std::string m_sdkBuildVersion;
                    bool m_sdkBuildVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_DEVICE_H_
