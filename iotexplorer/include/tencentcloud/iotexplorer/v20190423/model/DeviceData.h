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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DEVICEDATA_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DEVICEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * DeviceData
                */
                class DeviceData : public AbstractModel
                {
                public:
                    DeviceData();
                    ~DeviceData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备证书，用于 TLS 建立链接时校验客户端身份。采用非对称加密时返回该参数。
                     * @return DeviceCert 设备证书，用于 TLS 建立链接时校验客户端身份。采用非对称加密时返回该参数。
                     * 
                     */
                    std::string GetDeviceCert() const;

                    /**
                     * 设置设备证书，用于 TLS 建立链接时校验客户端身份。采用非对称加密时返回该参数。
                     * @param _deviceCert 设备证书，用于 TLS 建立链接时校验客户端身份。采用非对称加密时返回该参数。
                     * 
                     */
                    void SetDeviceCert(const std::string& _deviceCert);

                    /**
                     * 判断参数 DeviceCert 是否已赋值
                     * @return DeviceCert 是否已赋值
                     * 
                     */
                    bool DeviceCertHasBeenSet() const;

                    /**
                     * 获取设备名称。
                     * @return DeviceName 设备名称。
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称。
                     * @param _deviceName 设备名称。
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
                     * 获取设备私钥，用于 TLS 建立链接时校验客户端身份，腾讯云后台不保存，请妥善保管。采用非对称加密时返回该参数。
                     * @return DevicePrivateKey 设备私钥，用于 TLS 建立链接时校验客户端身份，腾讯云后台不保存，请妥善保管。采用非对称加密时返回该参数。
                     * 
                     */
                    std::string GetDevicePrivateKey() const;

                    /**
                     * 设置设备私钥，用于 TLS 建立链接时校验客户端身份，腾讯云后台不保存，请妥善保管。采用非对称加密时返回该参数。
                     * @param _devicePrivateKey 设备私钥，用于 TLS 建立链接时校验客户端身份，腾讯云后台不保存，请妥善保管。采用非对称加密时返回该参数。
                     * 
                     */
                    void SetDevicePrivateKey(const std::string& _devicePrivateKey);

                    /**
                     * 判断参数 DevicePrivateKey 是否已赋值
                     * @return DevicePrivateKey 是否已赋值
                     * 
                     */
                    bool DevicePrivateKeyHasBeenSet() const;

                    /**
                     * 获取对称加密密钥，base64编码。采用对称加密时返回该参数。
                     * @return DevicePsk 对称加密密钥，base64编码。采用对称加密时返回该参数。
                     * 
                     */
                    std::string GetDevicePsk() const;

                    /**
                     * 设置对称加密密钥，base64编码。采用对称加密时返回该参数。
                     * @param _devicePsk 对称加密密钥，base64编码。采用对称加密时返回该参数。
                     * 
                     */
                    void SetDevicePsk(const std::string& _devicePsk);

                    /**
                     * 判断参数 DevicePsk 是否已赋值
                     * @return DevicePsk 是否已赋值
                     * 
                     */
                    bool DevicePskHasBeenSet() const;

                private:

                    /**
                     * 设备证书，用于 TLS 建立链接时校验客户端身份。采用非对称加密时返回该参数。
                     */
                    std::string m_deviceCert;
                    bool m_deviceCertHasBeenSet;

                    /**
                     * 设备名称。
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 设备私钥，用于 TLS 建立链接时校验客户端身份，腾讯云后台不保存，请妥善保管。采用非对称加密时返回该参数。
                     */
                    std::string m_devicePrivateKey;
                    bool m_devicePrivateKeyHasBeenSet;

                    /**
                     * 对称加密密钥，base64编码。采用对称加密时返回该参数。
                     */
                    std::string m_devicePsk;
                    bool m_devicePskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DEVICEDATA_H_
