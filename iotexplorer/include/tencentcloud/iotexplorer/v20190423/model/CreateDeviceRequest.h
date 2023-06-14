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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATEDEVICEREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATEDEVICEREQUEST_H_

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
                * CreateDevice请求参数结构体
                */
                class CreateDeviceRequest : public AbstractModel
                {
                public:
                    CreateDeviceRequest();
                    ~CreateDeviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品ID。
                     * @return ProductId 产品ID。
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID。
                     * @param _productId 产品ID。
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取设备名称。命名规则：[a-zA-Z0-9:_-]{1,48}。
                     * @return DeviceName 设备名称。命名规则：[a-zA-Z0-9:_-]{1,48}。
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称。命名规则：[a-zA-Z0-9:_-]{1,48}。
                     * @param _deviceName 设备名称。命名规则：[a-zA-Z0-9:_-]{1,48}。
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
                     * 获取LoRaWAN 设备地址
                     * @return DevAddr LoRaWAN 设备地址
                     * 
                     */
                    std::string GetDevAddr() const;

                    /**
                     * 设置LoRaWAN 设备地址
                     * @param _devAddr LoRaWAN 设备地址
                     * 
                     */
                    void SetDevAddr(const std::string& _devAddr);

                    /**
                     * 判断参数 DevAddr 是否已赋值
                     * @return DevAddr 是否已赋值
                     * 
                     */
                    bool DevAddrHasBeenSet() const;

                    /**
                     * 获取LoRaWAN 应用密钥
                     * @return AppKey LoRaWAN 应用密钥
                     * 
                     */
                    std::string GetAppKey() const;

                    /**
                     * 设置LoRaWAN 应用密钥
                     * @param _appKey LoRaWAN 应用密钥
                     * 
                     */
                    void SetAppKey(const std::string& _appKey);

                    /**
                     * 判断参数 AppKey 是否已赋值
                     * @return AppKey 是否已赋值
                     * 
                     */
                    bool AppKeyHasBeenSet() const;

                    /**
                     * 获取LoRaWAN 设备唯一标识
                     * @return DevEUI LoRaWAN 设备唯一标识
                     * 
                     */
                    std::string GetDevEUI() const;

                    /**
                     * 设置LoRaWAN 设备唯一标识
                     * @param _devEUI LoRaWAN 设备唯一标识
                     * 
                     */
                    void SetDevEUI(const std::string& _devEUI);

                    /**
                     * 判断参数 DevEUI 是否已赋值
                     * @return DevEUI 是否已赋值
                     * 
                     */
                    bool DevEUIHasBeenSet() const;

                    /**
                     * 获取LoRaWAN 应用会话密钥
                     * @return AppSKey LoRaWAN 应用会话密钥
                     * 
                     */
                    std::string GetAppSKey() const;

                    /**
                     * 设置LoRaWAN 应用会话密钥
                     * @param _appSKey LoRaWAN 应用会话密钥
                     * 
                     */
                    void SetAppSKey(const std::string& _appSKey);

                    /**
                     * 判断参数 AppSKey 是否已赋值
                     * @return AppSKey 是否已赋值
                     * 
                     */
                    bool AppSKeyHasBeenSet() const;

                    /**
                     * 获取LoRaWAN 网络会话密钥
                     * @return NwkSKey LoRaWAN 网络会话密钥
                     * 
                     */
                    std::string GetNwkSKey() const;

                    /**
                     * 设置LoRaWAN 网络会话密钥
                     * @param _nwkSKey LoRaWAN 网络会话密钥
                     * 
                     */
                    void SetNwkSKey(const std::string& _nwkSKey);

                    /**
                     * 判断参数 NwkSKey 是否已赋值
                     * @return NwkSKey 是否已赋值
                     * 
                     */
                    bool NwkSKeyHasBeenSet() const;

                    /**
                     * 获取手动指定设备的PSK密钥
                     * @return DefinedPsk 手动指定设备的PSK密钥
                     * 
                     */
                    std::string GetDefinedPsk() const;

                    /**
                     * 设置手动指定设备的PSK密钥
                     * @param _definedPsk 手动指定设备的PSK密钥
                     * 
                     */
                    void SetDefinedPsk(const std::string& _definedPsk);

                    /**
                     * 判断参数 DefinedPsk 是否已赋值
                     * @return DefinedPsk 是否已赋值
                     * 
                     */
                    bool DefinedPskHasBeenSet() const;

                private:

                    /**
                     * 产品ID。
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备名称。命名规则：[a-zA-Z0-9:_-]{1,48}。
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * LoRaWAN 设备地址
                     */
                    std::string m_devAddr;
                    bool m_devAddrHasBeenSet;

                    /**
                     * LoRaWAN 应用密钥
                     */
                    std::string m_appKey;
                    bool m_appKeyHasBeenSet;

                    /**
                     * LoRaWAN 设备唯一标识
                     */
                    std::string m_devEUI;
                    bool m_devEUIHasBeenSet;

                    /**
                     * LoRaWAN 应用会话密钥
                     */
                    std::string m_appSKey;
                    bool m_appSKeyHasBeenSet;

                    /**
                     * LoRaWAN 网络会话密钥
                     */
                    std::string m_nwkSKey;
                    bool m_nwkSKeyHasBeenSet;

                    /**
                     * 手动指定设备的PSK密钥
                     */
                    std::string m_definedPsk;
                    bool m_definedPskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATEDEVICEREQUEST_H_
