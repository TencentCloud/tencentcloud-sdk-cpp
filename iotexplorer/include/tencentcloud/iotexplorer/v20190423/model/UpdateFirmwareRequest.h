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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_UPDATEFIRMWAREREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_UPDATEFIRMWAREREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * UpdateFirmware请求参数结构体
                */
                class UpdateFirmwareRequest : public AbstractModel
                {
                public:
                    UpdateFirmwareRequest();
                    ~UpdateFirmwareRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品ID
                     * @return ProductID 产品ID
                     * 
                     */
                    std::string GetProductID() const;

                    /**
                     * 设置产品ID
                     * @param _productID 产品ID
                     * 
                     */
                    void SetProductID(const std::string& _productID);

                    /**
                     * 判断参数 ProductID 是否已赋值
                     * @return ProductID 是否已赋值
                     * 
                     */
                    bool ProductIDHasBeenSet() const;

                    /**
                     * 获取设备名
                     * @return DeviceName 设备名
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名
                     * @param _deviceName 设备名
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
                     * 获取固件新的版本号
                     * @return FirmwareVersion 固件新的版本号
                     * 
                     */
                    std::string GetFirmwareVersion() const;

                    /**
                     * 设置固件新的版本号
                     * @param _firmwareVersion 固件新的版本号
                     * 
                     */
                    void SetFirmwareVersion(const std::string& _firmwareVersion);

                    /**
                     * 判断参数 FirmwareVersion 是否已赋值
                     * @return FirmwareVersion 是否已赋值
                     * 
                     */
                    bool FirmwareVersionHasBeenSet() const;

                    /**
                     * 获取固件原版本号
                     * @return FirmwareOriVersion 固件原版本号
                     * 
                     */
                    std::string GetFirmwareOriVersion() const;

                    /**
                     * 设置固件原版本号
                     * @param _firmwareOriVersion 固件原版本号
                     * 
                     */
                    void SetFirmwareOriVersion(const std::string& _firmwareOriVersion);

                    /**
                     * 判断参数 FirmwareOriVersion 是否已赋值
                     * @return FirmwareOriVersion 是否已赋值
                     * 
                     */
                    bool FirmwareOriVersionHasBeenSet() const;

                    /**
                     * 获取固件升级方式；0 静默升级 1 用户确认升级   不填默认静默升级
                     * @return UpgradeMethod 固件升级方式；0 静默升级 1 用户确认升级   不填默认静默升级
                     * 
                     */
                    uint64_t GetUpgradeMethod() const;

                    /**
                     * 设置固件升级方式；0 静默升级 1 用户确认升级   不填默认静默升级
                     * @param _upgradeMethod 固件升级方式；0 静默升级 1 用户确认升级   不填默认静默升级
                     * 
                     */
                    void SetUpgradeMethod(const uint64_t& _upgradeMethod);

                    /**
                     * 判断参数 UpgradeMethod 是否已赋值
                     * @return UpgradeMethod 是否已赋值
                     * 
                     */
                    bool UpgradeMethodHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productID;
                    bool m_productIDHasBeenSet;

                    /**
                     * 设备名
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 固件新的版本号
                     */
                    std::string m_firmwareVersion;
                    bool m_firmwareVersionHasBeenSet;

                    /**
                     * 固件原版本号
                     */
                    std::string m_firmwareOriVersion;
                    bool m_firmwareOriVersionHasBeenSet;

                    /**
                     * 固件升级方式；0 静默升级 1 用户确认升级   不填默认静默升级
                     */
                    uint64_t m_upgradeMethod;
                    bool m_upgradeMethodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_UPDATEFIRMWAREREQUEST_H_
