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
                     * 获取<p>产品ID。</p>
                     * @return ProductId <p>产品ID。</p>
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置<p>产品ID。</p>
                     * @param _productId <p>产品ID。</p>
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
                     * 获取<p>设备名称。命名规则：[a-zA-Z0-9:_-]{1,48}。</p>
                     * @return DeviceName <p>设备名称。命名规则：[a-zA-Z0-9:_-]{1,48}。</p>
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置<p>设备名称。命名规则：[a-zA-Z0-9:_-]{1,48}。</p>
                     * @param _deviceName <p>设备名称。命名规则：[a-zA-Z0-9:_-]{1,48}。</p>
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
                     * 获取<p>LoRaWAN 设备地址</p>
                     * @return DevAddr <p>LoRaWAN 设备地址</p>
                     * 
                     */
                    std::string GetDevAddr() const;

                    /**
                     * 设置<p>LoRaWAN 设备地址</p>
                     * @param _devAddr <p>LoRaWAN 设备地址</p>
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
                     * 获取<p>LoRaWAN 应用密钥</p>
                     * @return AppKey <p>LoRaWAN 应用密钥</p>
                     * 
                     */
                    std::string GetAppKey() const;

                    /**
                     * 设置<p>LoRaWAN 应用密钥</p>
                     * @param _appKey <p>LoRaWAN 应用密钥</p>
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
                     * 获取<p>LoRaWAN 设备唯一标识</p>
                     * @return DevEUI <p>LoRaWAN 设备唯一标识</p>
                     * 
                     */
                    std::string GetDevEUI() const;

                    /**
                     * 设置<p>LoRaWAN 设备唯一标识</p>
                     * @param _devEUI <p>LoRaWAN 设备唯一标识</p>
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
                     * 获取<p>LoRaWAN 应用会话密钥</p>
                     * @return AppSKey <p>LoRaWAN 应用会话密钥</p>
                     * 
                     */
                    std::string GetAppSKey() const;

                    /**
                     * 设置<p>LoRaWAN 应用会话密钥</p>
                     * @param _appSKey <p>LoRaWAN 应用会话密钥</p>
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
                     * 获取<p>LoRaWAN 网络会话密钥</p>
                     * @return NwkSKey <p>LoRaWAN 网络会话密钥</p>
                     * 
                     */
                    std::string GetNwkSKey() const;

                    /**
                     * 设置<p>LoRaWAN 网络会话密钥</p>
                     * @param _nwkSKey <p>LoRaWAN 网络会话密钥</p>
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
                     * 获取<p>手动指定设备的PSK密钥</p>
                     * @return DefinedPsk <p>手动指定设备的PSK密钥</p>
                     * 
                     */
                    std::string GetDefinedPsk() const;

                    /**
                     * 设置<p>手动指定设备的PSK密钥</p>
                     * @param _definedPsk <p>手动指定设备的PSK密钥</p>
                     * 
                     */
                    void SetDefinedPsk(const std::string& _definedPsk);

                    /**
                     * 判断参数 DefinedPsk 是否已赋值
                     * @return DefinedPsk 是否已赋值
                     * 
                     */
                    bool DefinedPskHasBeenSet() const;

                    /**
                     * 获取<p>设备证书。第三方CA证书认证的产品下必填；腾讯云CA证书产品传入会报错；非证书认证产品传入会被忽略</p>
                     * @return TlsCrt <p>设备证书。第三方CA证书认证的产品下必填；腾讯云CA证书产品传入会报错；非证书认证产品传入会被忽略</p>
                     * 
                     */
                    std::string GetTlsCrt() const;

                    /**
                     * 设置<p>设备证书。第三方CA证书认证的产品下必填；腾讯云CA证书产品传入会报错；非证书认证产品传入会被忽略</p>
                     * @param _tlsCrt <p>设备证书。第三方CA证书认证的产品下必填；腾讯云CA证书产品传入会报错；非证书认证产品传入会被忽略</p>
                     * 
                     */
                    void SetTlsCrt(const std::string& _tlsCrt);

                    /**
                     * 判断参数 TlsCrt 是否已赋值
                     * @return TlsCrt 是否已赋值
                     * 
                     */
                    bool TlsCrtHasBeenSet() const;

                private:

                    /**
                     * <p>产品ID。</p>
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * <p>设备名称。命名规则：[a-zA-Z0-9:_-]{1,48}。</p>
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * <p>LoRaWAN 设备地址</p>
                     */
                    std::string m_devAddr;
                    bool m_devAddrHasBeenSet;

                    /**
                     * <p>LoRaWAN 应用密钥</p>
                     */
                    std::string m_appKey;
                    bool m_appKeyHasBeenSet;

                    /**
                     * <p>LoRaWAN 设备唯一标识</p>
                     */
                    std::string m_devEUI;
                    bool m_devEUIHasBeenSet;

                    /**
                     * <p>LoRaWAN 应用会话密钥</p>
                     */
                    std::string m_appSKey;
                    bool m_appSKeyHasBeenSet;

                    /**
                     * <p>LoRaWAN 网络会话密钥</p>
                     */
                    std::string m_nwkSKey;
                    bool m_nwkSKeyHasBeenSet;

                    /**
                     * <p>手动指定设备的PSK密钥</p>
                     */
                    std::string m_definedPsk;
                    bool m_definedPskHasBeenSet;

                    /**
                     * <p>设备证书。第三方CA证书认证的产品下必填；腾讯云CA证书产品传入会报错；非证书认证产品传入会被忽略</p>
                     */
                    std::string m_tlsCrt;
                    bool m_tlsCrtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATEDEVICEREQUEST_H_
