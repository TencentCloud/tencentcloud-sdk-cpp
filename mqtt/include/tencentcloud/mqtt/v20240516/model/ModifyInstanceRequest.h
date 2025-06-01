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
                     * 获取要修改实例名称，不能为空, 3-64个字符，只能包含数字、字母、“-”和“_”。
                     * @return Name 要修改实例名称，不能为空, 3-64个字符，只能包含数字、字母、“-”和“_”。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置要修改实例名称，不能为空, 3-64个字符，只能包含数字、字母、“-”和“_”。
                     * @param _name 要修改实例名称，不能为空, 3-64个字符，只能包含数字、字母、“-”和“_”。
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
                     * 获取要修改的备注信息，最多128个字符。
                     * @return Remark 要修改的备注信息，最多128个字符。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置要修改的备注信息，最多128个字符。
                     * @param _remark 要修改的备注信息，最多128个字符。
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
                     * 获取需要变更的配置规格
基础版和专业版集群不能升配到铂金版规格，铂金版集群不能降配至基础版和增强版规格。
                     * @return SkuCode 需要变更的配置规格
基础版和专业版集群不能升配到铂金版规格，铂金版集群不能降配至基础版和增强版规格。
                     * 
                     */
                    std::string GetSkuCode() const;

                    /**
                     * 设置需要变更的配置规格
基础版和专业版集群不能升配到铂金版规格，铂金版集群不能降配至基础版和增强版规格。
                     * @param _skuCode 需要变更的配置规格
基础版和专业版集群不能升配到铂金版规格，铂金版集群不能降配至基础版和增强版规格。
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
                     * 获取客户端证书注册方式：
JITP：自动注册
API：手动通过API注册
                     * @return DeviceCertificateProvisionType 客户端证书注册方式：
JITP：自动注册
API：手动通过API注册
                     * @deprecated
                     */
                    std::string GetDeviceCertificateProvisionType() const;

                    /**
                     * 设置客户端证书注册方式：
JITP：自动注册
API：手动通过API注册
                     * @param _deviceCertificateProvisionType 客户端证书注册方式：
JITP：自动注册
API：手动通过API注册
                     * @deprecated
                     */
                    void SetDeviceCertificateProvisionType(const std::string& _deviceCertificateProvisionType);

                    /**
                     * 判断参数 DeviceCertificateProvisionType 是否已赋值
                     * @return DeviceCertificateProvisionType 是否已赋值
                     * @deprecated
                     */
                    bool DeviceCertificateProvisionTypeHasBeenSet() const;

                    /**
                     * 获取自动注册证书是否自动激活
                     * @return AutomaticActivation 自动注册证书是否自动激活
                     * @deprecated
                     */
                    bool GetAutomaticActivation() const;

                    /**
                     * 设置自动注册证书是否自动激活
                     * @param _automaticActivation 自动注册证书是否自动激活
                     * @deprecated
                     */
                    void SetAutomaticActivation(const bool& _automaticActivation);

                    /**
                     * 判断参数 AutomaticActivation 是否已赋值
                     * @return AutomaticActivation 是否已赋值
                     * @deprecated
                     */
                    bool AutomaticActivationHasBeenSet() const;

                    /**
                     * 获取授权策略开关
                     * @return AuthorizationPolicy 授权策略开关
                     * 
                     */
                    bool GetAuthorizationPolicy() const;

                    /**
                     * 设置授权策略开关
                     * @param _authorizationPolicy 授权策略开关
                     * 
                     */
                    void SetAuthorizationPolicy(const bool& _authorizationPolicy);

                    /**
                     * 判断参数 AuthorizationPolicy 是否已赋值
                     * @return AuthorizationPolicy 是否已赋值
                     * 
                     */
                    bool AuthorizationPolicyHasBeenSet() const;

                private:

                    /**
                     * 腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 要修改实例名称，不能为空, 3-64个字符，只能包含数字、字母、“-”和“_”。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 要修改的备注信息，最多128个字符。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 需要变更的配置规格
基础版和专业版集群不能升配到铂金版规格，铂金版集群不能降配至基础版和增强版规格。
                     */
                    std::string m_skuCode;
                    bool m_skuCodeHasBeenSet;

                    /**
                     * 客户端证书注册方式：
JITP：自动注册
API：手动通过API注册
                     */
                    std::string m_deviceCertificateProvisionType;
                    bool m_deviceCertificateProvisionTypeHasBeenSet;

                    /**
                     * 自动注册证书是否自动激活
                     */
                    bool m_automaticActivation;
                    bool m_automaticActivationHasBeenSet;

                    /**
                     * 授权策略开关
                     */
                    bool m_authorizationPolicy;
                    bool m_authorizationPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYINSTANCEREQUEST_H_
