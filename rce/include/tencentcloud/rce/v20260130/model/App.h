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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_APP_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_APP_H_

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
                * 应用程序信息
                */
                class App : public AbstractModel
                {
                public:
                    App();
                    ~App() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>应用程序运行的移动设备的操作系统类型</p>
                     * @return OS <p>应用程序运行的移动设备的操作系统类型</p>
                     * 
                     */
                    std::string GetOS() const;

                    /**
                     * 设置<p>应用程序运行的移动设备的操作系统类型</p>
                     * @param _oS <p>应用程序运行的移动设备的操作系统类型</p>
                     * 
                     */
                    void SetOS(const std::string& _oS);

                    /**
                     * 判断参数 OS 是否已赋值
                     * @return OS 是否已赋值
                     * 
                     */
                    bool OSHasBeenSet() const;

                    /**
                     * 获取<p>应用程序运行的移动设备的操作系统版本</p>
                     * @return OSVersion <p>应用程序运行的移动设备的操作系统版本</p>
                     * 
                     */
                    std::string GetOSVersion() const;

                    /**
                     * 设置<p>应用程序运行的移动设备的操作系统版本</p>
                     * @param _oSVersion <p>应用程序运行的移动设备的操作系统版本</p>
                     * 
                     */
                    void SetOSVersion(const std::string& _oSVersion);

                    /**
                     * 判断参数 OSVersion 是否已赋值
                     * @return OSVersion 是否已赋值
                     * 
                     */
                    bool OSVersionHasBeenSet() const;

                    /**
                     * 获取<p>应用程序运行的移动设备的生产厂商</p>
                     * @return DeviceManufacturer <p>应用程序运行的移动设备的生产厂商</p>
                     * 
                     */
                    std::string GetDeviceManufacturer() const;

                    /**
                     * 设置<p>应用程序运行的移动设备的生产厂商</p>
                     * @param _deviceManufacturer <p>应用程序运行的移动设备的生产厂商</p>
                     * 
                     */
                    void SetDeviceManufacturer(const std::string& _deviceManufacturer);

                    /**
                     * 判断参数 DeviceManufacturer 是否已赋值
                     * @return DeviceManufacturer 是否已赋值
                     * 
                     */
                    bool DeviceManufacturerHasBeenSet() const;

                    /**
                     * 获取<p>应用程序运行的移动设备的型号</p>
                     * @return DeviceModel <p>应用程序运行的移动设备的型号</p>
                     * 
                     */
                    std::string GetDeviceModel() const;

                    /**
                     * 设置<p>应用程序运行的移动设备的型号</p>
                     * @param _deviceModel <p>应用程序运行的移动设备的型号</p>
                     * 
                     */
                    void SetDeviceModel(const std::string& _deviceModel);

                    /**
                     * 判断参数 DeviceModel 是否已赋值
                     * @return DeviceModel 是否已赋值
                     * 
                     */
                    bool DeviceModelHasBeenSet() const;

                    /**
                     * 获取<p>应用程序运行的移动设备的唯一ID，对于iOS为IFV标识，对于Android为Android ID</p>
                     * @return DeviceId <p>应用程序运行的移动设备的唯一ID，对于iOS为IFV标识，对于Android为Android ID</p>
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置<p>应用程序运行的移动设备的唯一ID，对于iOS为IFV标识，对于Android为Android ID</p>
                     * @param _deviceId <p>应用程序运行的移动设备的唯一ID，对于iOS为IFV标识，对于Android为Android ID</p>
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
                     * 获取<p>应用程序名称</p>
                     * @return AppName <p>应用程序名称</p>
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置<p>应用程序名称</p>
                     * @param _appName <p>应用程序名称</p>
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
                     * 获取<p>应用程序版本</p>
                     * @return AppVersion <p>应用程序版本</p>
                     * 
                     */
                    std::string GetAppVersion() const;

                    /**
                     * 设置<p>应用程序版本</p>
                     * @param _appVersion <p>应用程序版本</p>
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
                     * 获取<p>应用程序提供的语言</p>
                     * @return ClientLanguage <p>应用程序提供的语言</p>
                     * 
                     */
                    std::string GetClientLanguage() const;

                    /**
                     * 设置<p>应用程序提供的语言</p>
                     * @param _clientLanguage <p>应用程序提供的语言</p>
                     * 
                     */
                    void SetClientLanguage(const std::string& _clientLanguage);

                    /**
                     * 判断参数 ClientLanguage 是否已赋值
                     * @return ClientLanguage 是否已赋值
                     * 
                     */
                    bool ClientLanguageHasBeenSet() const;

                private:

                    /**
                     * <p>应用程序运行的移动设备的操作系统类型</p>
                     */
                    std::string m_oS;
                    bool m_oSHasBeenSet;

                    /**
                     * <p>应用程序运行的移动设备的操作系统版本</p>
                     */
                    std::string m_oSVersion;
                    bool m_oSVersionHasBeenSet;

                    /**
                     * <p>应用程序运行的移动设备的生产厂商</p>
                     */
                    std::string m_deviceManufacturer;
                    bool m_deviceManufacturerHasBeenSet;

                    /**
                     * <p>应用程序运行的移动设备的型号</p>
                     */
                    std::string m_deviceModel;
                    bool m_deviceModelHasBeenSet;

                    /**
                     * <p>应用程序运行的移动设备的唯一ID，对于iOS为IFV标识，对于Android为Android ID</p>
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * <p>应用程序名称</p>
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * <p>应用程序版本</p>
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                    /**
                     * <p>应用程序提供的语言</p>
                     */
                    std::string m_clientLanguage;
                    bool m_clientLanguageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_APP_H_
