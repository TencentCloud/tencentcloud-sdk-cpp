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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_REGISTERDEVICECERTIFICATERESPONSE_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_REGISTERDEVICECERTIFICATERESPONSE_H_

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
                * RegisterDeviceCertificate返回参数结构体
                */
                class RegisterDeviceCertificateResponse : public AbstractModel
                {
                public:
                    RegisterDeviceCertificateResponse();
                    ~RegisterDeviceCertificateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * @return InstanceId 腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取关联的CA证书SN
                     * @return CaSn 关联的CA证书SN
                     * 
                     */
                    std::string GetCaSn() const;

                    /**
                     * 判断参数 CaSn 是否已赋值
                     * @return CaSn 是否已赋值
                     * 
                     */
                    bool CaSnHasBeenSet() const;

                    /**
                     * 获取设备证书的SN
                     * @return DeviceCertificateSn 设备证书的SN
                     * 
                     */
                    std::string GetDeviceCertificateSn() const;

                    /**
                     * 判断参数 DeviceCertificateSn 是否已赋值
                     * @return DeviceCertificateSn 是否已赋值
                     * 
                     */
                    bool DeviceCertificateSnHasBeenSet() const;

                private:

                    /**
                     * 腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 关联的CA证书SN
                     */
                    std::string m_caSn;
                    bool m_caSnHasBeenSet;

                    /**
                     * 设备证书的SN
                     */
                    std::string m_deviceCertificateSn;
                    bool m_deviceCertificateSnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_REGISTERDEVICECERTIFICATERESPONSE_H_
