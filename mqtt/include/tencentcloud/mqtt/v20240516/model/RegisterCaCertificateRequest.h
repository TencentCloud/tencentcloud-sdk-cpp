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
                     * 获取<p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     * @return InstanceId <p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     * @param _instanceId <p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
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
                     * 获取<p>CA证书内容</p>
                     * @return CaCertificate <p>CA证书内容</p>
                     * 
                     */
                    std::string GetCaCertificate() const;

                    /**
                     * 设置<p>CA证书内容</p>
                     * @param _caCertificate <p>CA证书内容</p>
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
                     * 获取<p>验证证书内容</p>
                     * @return VerificationCertificate <p>验证证书内容</p>
                     * 
                     */
                    std::string GetVerificationCertificate() const;

                    /**
                     * 设置<p>验证证书内容</p>
                     * @param _verificationCertificate <p>验证证书内容</p>
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
                     * 获取<p>证书格式，不传默认PEM格式，当前仅支持PEM格式</p>
                     * @return Format <p>证书格式，不传默认PEM格式，当前仅支持PEM格式</p>
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置<p>证书格式，不传默认PEM格式，当前仅支持PEM格式</p>
                     * @param _format <p>证书格式，不传默认PEM格式，当前仅支持PEM格式</p>
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
                     * 获取<p>证书状态，不传默认ACTIVE状态<br>    ACTIVE：激活<br>    INACTIVE：未激活</p>
                     * @return Status <p>证书状态，不传默认ACTIVE状态<br>    ACTIVE：激活<br>    INACTIVE：未激活</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>证书状态，不传默认ACTIVE状态<br>    ACTIVE：激活<br>    INACTIVE：未激活</p>
                     * @param _status <p>证书状态，不传默认ACTIVE状态<br>    ACTIVE：激活<br>    INACTIVE：未激活</p>
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
                     * <p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>CA证书内容</p>
                     */
                    std::string m_caCertificate;
                    bool m_caCertificateHasBeenSet;

                    /**
                     * <p>验证证书内容</p>
                     */
                    std::string m_verificationCertificate;
                    bool m_verificationCertificateHasBeenSet;

                    /**
                     * <p>证书格式，不传默认PEM格式，当前仅支持PEM格式</p>
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * <p>证书状态，不传默认ACTIVE状态<br>    ACTIVE：激活<br>    INACTIVE：未激活</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_REGISTERCACERTIFICATEREQUEST_H_
