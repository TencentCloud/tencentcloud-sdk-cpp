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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYX509CONFIGREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYX509CONFIGREQUEST_H_

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
                * ModifyX509Config请求参数结构体
                */
                class ModifyX509ConfigRequest : public AbstractModel
                {
                public:
                    ModifyX509ConfigRequest();
                    ~ModifyX509ConfigRequest() = default;
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
                     * 获取<p>证书验证模式</p><p>枚举值：</p><ul><li>TLS： 单向认证</li><li>mTLS： 双向认证</li><li>BYOC： 一机一证</li></ul>
                     * @return X509Mode <p>证书验证模式</p><p>枚举值：</p><ul><li>TLS： 单向认证</li><li>mTLS： 双向认证</li><li>BYOC： 一机一证</li></ul>
                     * 
                     */
                    std::string GetX509Mode() const;

                    /**
                     * 设置<p>证书验证模式</p><p>枚举值：</p><ul><li>TLS： 单向认证</li><li>mTLS： 双向认证</li><li>BYOC： 一机一证</li></ul>
                     * @param _x509Mode <p>证书验证模式</p><p>枚举值：</p><ul><li>TLS： 单向认证</li><li>mTLS： 双向认证</li><li>BYOC： 一机一证</li></ul>
                     * 
                     */
                    void SetX509Mode(const std::string& _x509Mode);

                    /**
                     * 判断参数 X509Mode 是否已赋值
                     * @return X509Mode 是否已赋值
                     * 
                     */
                    bool X509ModeHasBeenSet() const;

                    /**
                     * 获取<p>证书注册方式</p><p>枚举值：</p><ul><li>JITP： 自动注册</li><li>API： 手工注册</li></ul>
                     * @return DeviceCertificateProvisionType <p>证书注册方式</p><p>枚举值：</p><ul><li>JITP： 自动注册</li><li>API： 手工注册</li></ul>
                     * 
                     */
                    std::string GetDeviceCertificateProvisionType() const;

                    /**
                     * 设置<p>证书注册方式</p><p>枚举值：</p><ul><li>JITP： 自动注册</li><li>API： 手工注册</li></ul>
                     * @param _deviceCertificateProvisionType <p>证书注册方式</p><p>枚举值：</p><ul><li>JITP： 自动注册</li><li>API： 手工注册</li></ul>
                     * 
                     */
                    void SetDeviceCertificateProvisionType(const std::string& _deviceCertificateProvisionType);

                    /**
                     * 判断参数 DeviceCertificateProvisionType 是否已赋值
                     * @return DeviceCertificateProvisionType 是否已赋值
                     * 
                     */
                    bool DeviceCertificateProvisionTypeHasBeenSet() const;

                    /**
                     * 获取<p>证书自动后激活状态</p><p>枚举值：</p><ul><li>true： 自动激活</li><li>false： 不激活</li></ul>
                     * @return AutomaticActivation <p>证书自动后激活状态</p><p>枚举值：</p><ul><li>true： 自动激活</li><li>false： 不激活</li></ul>
                     * 
                     */
                    bool GetAutomaticActivation() const;

                    /**
                     * 设置<p>证书自动后激活状态</p><p>枚举值：</p><ul><li>true： 自动激活</li><li>false： 不激活</li></ul>
                     * @param _automaticActivation <p>证书自动后激活状态</p><p>枚举值：</p><ul><li>true： 自动激活</li><li>false： 不激活</li></ul>
                     * 
                     */
                    void SetAutomaticActivation(const bool& _automaticActivation);

                    /**
                     * 判断参数 AutomaticActivation 是否已赋值
                     * @return AutomaticActivation 是否已赋值
                     * 
                     */
                    bool AutomaticActivationHasBeenSet() const;

                private:

                    /**
                     * <p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>证书验证模式</p><p>枚举值：</p><ul><li>TLS： 单向认证</li><li>mTLS： 双向认证</li><li>BYOC： 一机一证</li></ul>
                     */
                    std::string m_x509Mode;
                    bool m_x509ModeHasBeenSet;

                    /**
                     * <p>证书注册方式</p><p>枚举值：</p><ul><li>JITP： 自动注册</li><li>API： 手工注册</li></ul>
                     */
                    std::string m_deviceCertificateProvisionType;
                    bool m_deviceCertificateProvisionTypeHasBeenSet;

                    /**
                     * <p>证书自动后激活状态</p><p>枚举值：</p><ul><li>true： 自动激活</li><li>false： 不激活</li></ul>
                     */
                    bool m_automaticActivation;
                    bool m_automaticActivationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYX509CONFIGREQUEST_H_
