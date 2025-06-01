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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_REGISTERDEVICECERTIFICATEREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_REGISTERDEVICECERTIFICATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * RegisterDeviceCertificate请求参数结构体
                */
                class RegisterDeviceCertificateRequest : public AbstractModel
                {
                public:
                    RegisterDeviceCertificateRequest();
                    ~RegisterDeviceCertificateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * @return InstanceId 腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * @param _instanceId 腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取设备证书内容，可参考 [使用 CA 证书生成服务端/客户端证书](https://cloud.tencent.com/document/product/1778/114817#aab79cc8-a148-412e-beb8-9c9e158eb944) 生成
                     * @return DeviceCertificate 设备证书内容，可参考 [使用 CA 证书生成服务端/客户端证书](https://cloud.tencent.com/document/product/1778/114817#aab79cc8-a148-412e-beb8-9c9e158eb944) 生成
                     * 
                     */
                    std::string GetDeviceCertificate() const;

                    /**
                     * 设置设备证书内容，可参考 [使用 CA 证书生成服务端/客户端证书](https://cloud.tencent.com/document/product/1778/114817#aab79cc8-a148-412e-beb8-9c9e158eb944) 生成
                     * @param _deviceCertificate 设备证书内容，可参考 [使用 CA 证书生成服务端/客户端证书](https://cloud.tencent.com/document/product/1778/114817#aab79cc8-a148-412e-beb8-9c9e158eb944) 生成
                     * 
                     */
                    void SetDeviceCertificate(const std::string& _deviceCertificate);

                    /**
                     * 判断参数 DeviceCertificate 是否已赋值
                     * @return DeviceCertificate 是否已赋值
                     * 
                     */
                    bool DeviceCertificateHasBeenSet() const;

                    /**
                     * 获取关联的CA证书SN
                     * @return CaSn 关联的CA证书SN
                     * 
                     */
                    std::string GetCaSn() const;

                    /**
                     * 设置关联的CA证书SN
                     * @param _caSn 关联的CA证书SN
                     * 
                     */
                    void SetCaSn(const std::string& _caSn);

                    /**
                     * 判断参数 CaSn 是否已赋值
                     * @return CaSn 是否已赋值
                     * 
                     */
                    bool CaSnHasBeenSet() const;

                    /**
                     * 获取客户端ID，需要关联该证书的客户端ID。根据实际业务使用填写
                     * @return ClientId 客户端ID，需要关联该证书的客户端ID。根据实际业务使用填写
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置客户端ID，需要关联该证书的客户端ID。根据实际业务使用填写
                     * @param _clientId 客户端ID，需要关联该证书的客户端ID。根据实际业务使用填写
                     * 
                     */
                    void SetClientId(const std::string& _clientId);

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取证书格式，默认为PEM，当前仅支持PEM格式
                     * @return Format 证书格式，默认为PEM，当前仅支持PEM格式
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置证书格式，默认为PEM，当前仅支持PEM格式
                     * @param _format 证书格式，默认为PEM，当前仅支持PEM格式
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取 客户端证书状态，默认激活状态（ACTIVE）
ACTIVE：激活     
INACTIVE：未激活     
                     * @return Status  客户端证书状态，默认激活状态（ACTIVE）
ACTIVE：激活     
INACTIVE：未激活     
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置 客户端证书状态，默认激活状态（ACTIVE）
ACTIVE：激活     
INACTIVE：未激活     
                     * @param _status  客户端证书状态，默认激活状态（ACTIVE）
ACTIVE：激活     
INACTIVE：未激活     
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 设备证书内容，可参考 [使用 CA 证书生成服务端/客户端证书](https://cloud.tencent.com/document/product/1778/114817#aab79cc8-a148-412e-beb8-9c9e158eb944) 生成
                     */
                    std::string m_deviceCertificate;
                    bool m_deviceCertificateHasBeenSet;

                    /**
                     * 关联的CA证书SN
                     */
                    std::string m_caSn;
                    bool m_caSnHasBeenSet;

                    /**
                     * 客户端ID，需要关联该证书的客户端ID。根据实际业务使用填写
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * 证书格式，默认为PEM，当前仅支持PEM格式
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     *  客户端证书状态，默认激活状态（ACTIVE）
ACTIVE：激活     
INACTIVE：未激活     
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_REGISTERDEVICECERTIFICATEREQUEST_H_
