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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYINSTANCEREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYINSTANCEREQUEST_H_

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
                * ModifyInstance请求参数结构体
                */
                class ModifyInstanceRequest : public AbstractModel
                {
                public:
                    ModifyInstanceRequest();
                    ~ModifyInstanceRequest() = default;
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
                     * 获取<p>要修改实例名称，不能为空, 3-64个字符，只能包含数字、字母、“-”和“_”。</p>
                     * @return Name <p>要修改实例名称，不能为空, 3-64个字符，只能包含数字、字母、“-”和“_”。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>要修改实例名称，不能为空, 3-64个字符，只能包含数字、字母、“-”和“_”。</p>
                     * @param _name <p>要修改实例名称，不能为空, 3-64个字符，只能包含数字、字母、“-”和“_”。</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>要修改的备注信息，最多128个字符。</p>
                     * @return Remark <p>要修改的备注信息，最多128个字符。</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>要修改的备注信息，最多128个字符。</p>
                     * @param _remark <p>要修改的备注信息，最多128个字符。</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>需要变更的配置规格<br>基础版和专业版集群不能升配到铂金版规格，铂金版集群不能降配至基础版和增强版规格。</p>
                     * @return SkuCode <p>需要变更的配置规格<br>基础版和专业版集群不能升配到铂金版规格，铂金版集群不能降配至基础版和增强版规格。</p>
                     * 
                     */
                    std::string GetSkuCode() const;

                    /**
                     * 设置<p>需要变更的配置规格<br>基础版和专业版集群不能升配到铂金版规格，铂金版集群不能降配至基础版和增强版规格。</p>
                     * @param _skuCode <p>需要变更的配置规格<br>基础版和专业版集群不能升配到铂金版规格，铂金版集群不能降配至基础版和增强版规格。</p>
                     * 
                     */
                    void SetSkuCode(const std::string& _skuCode);

                    /**
                     * 判断参数 SkuCode 是否已赋值
                     * @return SkuCode 是否已赋值
                     * 
                     */
                    bool SkuCodeHasBeenSet() const;

                    /**
                     * 获取<p>客户端证书注册方式：<br>JITP：自动注册<br>API：手动通过API注册</p>
                     * @return DeviceCertificateProvisionType <p>客户端证书注册方式：<br>JITP：自动注册<br>API：手动通过API注册</p>
                     * 
                     */
                    std::string GetDeviceCertificateProvisionType() const;

                    /**
                     * 设置<p>客户端证书注册方式：<br>JITP：自动注册<br>API：手动通过API注册</p>
                     * @param _deviceCertificateProvisionType <p>客户端证书注册方式：<br>JITP：自动注册<br>API：手动通过API注册</p>
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
                     * 获取<p>自动注册证书是否自动激活</p>
                     * @return AutomaticActivation <p>自动注册证书是否自动激活</p>
                     * 
                     */
                    bool GetAutomaticActivation() const;

                    /**
                     * 设置<p>自动注册证书是否自动激活</p>
                     * @param _automaticActivation <p>自动注册证书是否自动激活</p>
                     * 
                     */
                    void SetAutomaticActivation(const bool& _automaticActivation);

                    /**
                     * 判断参数 AutomaticActivation 是否已赋值
                     * @return AutomaticActivation 是否已赋值
                     * 
                     */
                    bool AutomaticActivationHasBeenSet() const;

                    /**
                     * 获取<p>授权策略开关</p>
                     * @return AuthorizationPolicy <p>授权策略开关</p>
                     * 
                     */
                    bool GetAuthorizationPolicy() const;

                    /**
                     * 设置<p>授权策略开关</p>
                     * @param _authorizationPolicy <p>授权策略开关</p>
                     * 
                     */
                    void SetAuthorizationPolicy(const bool& _authorizationPolicy);

                    /**
                     * 判断参数 AuthorizationPolicy 是否已赋值
                     * @return AuthorizationPolicy 是否已赋值
                     * 
                     */
                    bool AuthorizationPolicyHasBeenSet() const;

                    /**
                     * 获取<p>是否使用默认的服务端证书</p>
                     * @return UseDefaultServerCert <p>是否使用默认的服务端证书</p>
                     * 
                     */
                    bool GetUseDefaultServerCert() const;

                    /**
                     * 设置<p>是否使用默认的服务端证书</p>
                     * @param _useDefaultServerCert <p>是否使用默认的服务端证书</p>
                     * 
                     */
                    void SetUseDefaultServerCert(const bool& _useDefaultServerCert);

                    /**
                     * 判断参数 UseDefaultServerCert 是否已赋值
                     * @return UseDefaultServerCert 是否已赋值
                     * 
                     */
                    bool UseDefaultServerCertHasBeenSet() const;

                    /**
                     * 获取<p>TLS：单向认证<br>mTLS；双向认证<br>BYOC：一机一证</p>
                     * @return X509Mode <p>TLS：单向认证<br>mTLS；双向认证<br>BYOC：一机一证</p>
                     * 
                     */
                    std::string GetX509Mode() const;

                    /**
                     * 设置<p>TLS：单向认证<br>mTLS；双向认证<br>BYOC：一机一证</p>
                     * @param _x509Mode <p>TLS：单向认证<br>mTLS；双向认证<br>BYOC：一机一证</p>
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
                     * 获取<p>单客户端消息收发限速单位 条/秒</p>
                     * @return MessageRate <p>单客户端消息收发限速单位 条/秒</p>
                     * 
                     */
                    int64_t GetMessageRate() const;

                    /**
                     * 设置<p>单客户端消息收发限速单位 条/秒</p>
                     * @param _messageRate <p>单客户端消息收发限速单位 条/秒</p>
                     * 
                     */
                    void SetMessageRate(const int64_t& _messageRate);

                    /**
                     * 判断参数 MessageRate 是否已赋值
                     * @return MessageRate 是否已赋值
                     * 
                     */
                    bool MessageRateHasBeenSet() const;

                private:

                    /**
                     * <p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>要修改实例名称，不能为空, 3-64个字符，只能包含数字、字母、“-”和“_”。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>要修改的备注信息，最多128个字符。</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>需要变更的配置规格<br>基础版和专业版集群不能升配到铂金版规格，铂金版集群不能降配至基础版和增强版规格。</p>
                     */
                    std::string m_skuCode;
                    bool m_skuCodeHasBeenSet;

                    /**
                     * <p>客户端证书注册方式：<br>JITP：自动注册<br>API：手动通过API注册</p>
                     */
                    std::string m_deviceCertificateProvisionType;
                    bool m_deviceCertificateProvisionTypeHasBeenSet;

                    /**
                     * <p>自动注册证书是否自动激活</p>
                     */
                    bool m_automaticActivation;
                    bool m_automaticActivationHasBeenSet;

                    /**
                     * <p>授权策略开关</p>
                     */
                    bool m_authorizationPolicy;
                    bool m_authorizationPolicyHasBeenSet;

                    /**
                     * <p>是否使用默认的服务端证书</p>
                     */
                    bool m_useDefaultServerCert;
                    bool m_useDefaultServerCertHasBeenSet;

                    /**
                     * <p>TLS：单向认证<br>mTLS；双向认证<br>BYOC：一机一证</p>
                     */
                    std::string m_x509Mode;
                    bool m_x509ModeHasBeenSet;

                    /**
                     * <p>单客户端消息收发限速单位 条/秒</p>
                     */
                    int64_t m_messageRate;
                    bool m_messageRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYINSTANCEREQUEST_H_
