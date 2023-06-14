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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_CREATEDEVICERESPONSE_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_CREATEDEVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * CreateDevice返回参数结构体
                */
                class CreateDeviceResponse : public AbstractModel
                {
                public:
                    CreateDeviceResponse();
                    ~CreateDeviceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取设备名称
                     * @return DeviceName 设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取对称加密密钥，base64编码。采用对称加密时返回该参数
                     * @return DevicePsk 对称加密密钥，base64编码。采用对称加密时返回该参数
                     * 
                     */
                    std::string GetDevicePsk() const;

                    /**
                     * 判断参数 DevicePsk 是否已赋值
                     * @return DevicePsk 是否已赋值
                     * 
                     */
                    bool DevicePskHasBeenSet() const;

                    /**
                     * 获取设备证书，用于 TLS 建立链接时校验客户端身份。采用非对称加密时返回该参数
                     * @return DeviceCert 设备证书，用于 TLS 建立链接时校验客户端身份。采用非对称加密时返回该参数
                     * 
                     */
                    std::string GetDeviceCert() const;

                    /**
                     * 判断参数 DeviceCert 是否已赋值
                     * @return DeviceCert 是否已赋值
                     * 
                     */
                    bool DeviceCertHasBeenSet() const;

                    /**
                     * 获取设备私钥，用于 TLS 建立链接时校验客户端身份，腾讯云后台不保存，请妥善保管。采用非对称加密时返回该参数
                     * @return DevicePrivateKey 设备私钥，用于 TLS 建立链接时校验客户端身份，腾讯云后台不保存，请妥善保管。采用非对称加密时返回该参数
                     * 
                     */
                    std::string GetDevicePrivateKey() const;

                    /**
                     * 判断参数 DevicePrivateKey 是否已赋值
                     * @return DevicePrivateKey 是否已赋值
                     * 
                     */
                    bool DevicePrivateKeyHasBeenSet() const;

                    /**
                     * 获取LoRa设备的DevEui，当设备是LoRa设备时，会返回该字段
                     * @return LoraDevEui LoRa设备的DevEui，当设备是LoRa设备时，会返回该字段
                     * 
                     */
                    std::string GetLoraDevEui() const;

                    /**
                     * 判断参数 LoraDevEui 是否已赋值
                     * @return LoraDevEui 是否已赋值
                     * 
                     */
                    bool LoraDevEuiHasBeenSet() const;

                    /**
                     * 获取LoRa设备的MoteType，当设备是LoRa设备时，会返回该字段
                     * @return LoraMoteType LoRa设备的MoteType，当设备是LoRa设备时，会返回该字段
                     * 
                     */
                    uint64_t GetLoraMoteType() const;

                    /**
                     * 判断参数 LoraMoteType 是否已赋值
                     * @return LoraMoteType 是否已赋值
                     * 
                     */
                    bool LoraMoteTypeHasBeenSet() const;

                    /**
                     * 获取LoRa设备的AppKey，当设备是LoRa设备时，会返回该字段
                     * @return LoraAppKey LoRa设备的AppKey，当设备是LoRa设备时，会返回该字段
                     * 
                     */
                    std::string GetLoraAppKey() const;

                    /**
                     * 判断参数 LoraAppKey 是否已赋值
                     * @return LoraAppKey 是否已赋值
                     * 
                     */
                    bool LoraAppKeyHasBeenSet() const;

                    /**
                     * 获取LoRa设备的NwkKey，当设备是LoRa设备时，会返回该字段
                     * @return LoraNwkKey LoRa设备的NwkKey，当设备是LoRa设备时，会返回该字段
                     * 
                     */
                    std::string GetLoraNwkKey() const;

                    /**
                     * 判断参数 LoraNwkKey 是否已赋值
                     * @return LoraNwkKey 是否已赋值
                     * 
                     */
                    bool LoraNwkKeyHasBeenSet() const;

                private:

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 对称加密密钥，base64编码。采用对称加密时返回该参数
                     */
                    std::string m_devicePsk;
                    bool m_devicePskHasBeenSet;

                    /**
                     * 设备证书，用于 TLS 建立链接时校验客户端身份。采用非对称加密时返回该参数
                     */
                    std::string m_deviceCert;
                    bool m_deviceCertHasBeenSet;

                    /**
                     * 设备私钥，用于 TLS 建立链接时校验客户端身份，腾讯云后台不保存，请妥善保管。采用非对称加密时返回该参数
                     */
                    std::string m_devicePrivateKey;
                    bool m_devicePrivateKeyHasBeenSet;

                    /**
                     * LoRa设备的DevEui，当设备是LoRa设备时，会返回该字段
                     */
                    std::string m_loraDevEui;
                    bool m_loraDevEuiHasBeenSet;

                    /**
                     * LoRa设备的MoteType，当设备是LoRa设备时，会返回该字段
                     */
                    uint64_t m_loraMoteType;
                    bool m_loraMoteTypeHasBeenSet;

                    /**
                     * LoRa设备的AppKey，当设备是LoRa设备时，会返回该字段
                     */
                    std::string m_loraAppKey;
                    bool m_loraAppKeyHasBeenSet;

                    /**
                     * LoRa设备的NwkKey，当设备是LoRa设备时，会返回该字段
                     */
                    std::string m_loraNwkKey;
                    bool m_loraNwkKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_CREATEDEVICERESPONSE_H_
