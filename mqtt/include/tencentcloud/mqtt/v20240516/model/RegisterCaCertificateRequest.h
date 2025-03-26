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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_REGISTERCACERTIFICATEREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_REGISTERCACERTIFICATEREQUEST_H_

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
                * RegisterCaCertificate请求参数结构体
                */
                class RegisterCaCertificateRequest : public AbstractModel
                {
                public:
                    RegisterCaCertificateRequest();
                    ~RegisterCaCertificateRequest() = default;
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
                     * 获取CA证书内容，自签CA可参考 [自定义 X.509 证书实现 “一机一证”](https://cloud.tencent.com/document/product/1778/114817) 签发自签CA
                     * @return CaCertificate CA证书内容，自签CA可参考 [自定义 X.509 证书实现 “一机一证”](https://cloud.tencent.com/document/product/1778/114817) 签发自签CA
                     * 
                     */
                    std::string GetCaCertificate() const;

                    /**
                     * 设置CA证书内容，自签CA可参考 [自定义 X.509 证书实现 “一机一证”](https://cloud.tencent.com/document/product/1778/114817) 签发自签CA
                     * @param _caCertificate CA证书内容，自签CA可参考 [自定义 X.509 证书实现 “一机一证”](https://cloud.tencent.com/document/product/1778/114817) 签发自签CA
                     * 
                     */
                    void SetCaCertificate(const std::string& _caCertificate);

                    /**
                     * 判断参数 CaCertificate 是否已赋值
                     * @return CaCertificate 是否已赋值
                     * 
                     */
                    bool CaCertificateHasBeenSet() const;

                    /**
                     * 获取验证证书内容，可参考 [自定义 X.509 证书实现 “一机一证”](https://cloud.tencent.com/document/product/1778/114817) 手动注册CA证书章节
                     * @return VerificationCertificate 验证证书内容，可参考 [自定义 X.509 证书实现 “一机一证”](https://cloud.tencent.com/document/product/1778/114817) 手动注册CA证书章节
                     * 
                     */
                    std::string GetVerificationCertificate() const;

                    /**
                     * 设置验证证书内容，可参考 [自定义 X.509 证书实现 “一机一证”](https://cloud.tencent.com/document/product/1778/114817) 手动注册CA证书章节
                     * @param _verificationCertificate 验证证书内容，可参考 [自定义 X.509 证书实现 “一机一证”](https://cloud.tencent.com/document/product/1778/114817) 手动注册CA证书章节
                     * 
                     */
                    void SetVerificationCertificate(const std::string& _verificationCertificate);

                    /**
                     * 判断参数 VerificationCertificate 是否已赋值
                     * @return VerificationCertificate 是否已赋值
                     * 
                     */
                    bool VerificationCertificateHasBeenSet() const;

                    /**
                     * 获取证书格式，不传默认PEM格式，当前仅支持PEM格式
                     * @return Format 证书格式，不传默认PEM格式，当前仅支持PEM格式
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置证书格式，不传默认PEM格式，当前仅支持PEM格式
                     * @param _format 证书格式，不传默认PEM格式，当前仅支持PEM格式
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
                     * 获取证书状态，不传默认ACTIVE状态
    ACTIVE：激活
    INACTIVE：未激活
                     * @return Status 证书状态，不传默认ACTIVE状态
    ACTIVE：激活
    INACTIVE：未激活
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置证书状态，不传默认ACTIVE状态
    ACTIVE：激活
    INACTIVE：未激活
                     * @param _status 证书状态，不传默认ACTIVE状态
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
                     * CA证书内容，自签CA可参考 [自定义 X.509 证书实现 “一机一证”](https://cloud.tencent.com/document/product/1778/114817) 签发自签CA
                     */
                    std::string m_caCertificate;
                    bool m_caCertificateHasBeenSet;

                    /**
                     * 验证证书内容，可参考 [自定义 X.509 证书实现 “一机一证”](https://cloud.tencent.com/document/product/1778/114817) 手动注册CA证书章节
                     */
                    std::string m_verificationCertificate;
                    bool m_verificationCertificateHasBeenSet;

                    /**
                     * 证书格式，不传默认PEM格式，当前仅支持PEM格式
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * 证书状态，不传默认ACTIVE状态
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

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_REGISTERCACERTIFICATEREQUEST_H_
