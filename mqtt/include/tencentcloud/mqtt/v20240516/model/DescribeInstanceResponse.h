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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEINSTANCERESPONSE_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEINSTANCERESPONSE_H_

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
                * DescribeInstance返回参数结构体
                */
                class DescribeInstanceResponse : public AbstractModel
                {
                public:
                    DescribeInstanceResponse();
                    ~DescribeInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例类型
BASIC 基础版
PRO  专业版
PLATINUM 铂金版
                     * @return InstanceType 实例类型
BASIC 基础版
PRO  专业版
PLATINUM 铂金版
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
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
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取主题数量
                     * @return TopicNum 主题数量
                     * 
                     */
                    int64_t GetTopicNum() const;

                    /**
                     * 判断参数 TopicNum 是否已赋值
                     * @return TopicNum 是否已赋值
                     * 
                     */
                    bool TopicNumHasBeenSet() const;

                    /**
                     * 获取实例最大主题数量
                     * @return TopicNumLimit 实例最大主题数量
                     * 
                     */
                    int64_t GetTopicNumLimit() const;

                    /**
                     * 判断参数 TopicNumLimit 是否已赋值
                     * @return TopicNumLimit 是否已赋值
                     * 
                     */
                    bool TopicNumLimitHasBeenSet() const;

                    /**
                     * 获取TPS限流值
                     * @return TpsLimit TPS限流值
                     * 
                     */
                    int64_t GetTpsLimit() const;

                    /**
                     * 判断参数 TpsLimit 是否已赋值
                     * @return TpsLimit 是否已赋值
                     * 
                     */
                    bool TpsLimitHasBeenSet() const;

                    /**
                     * 获取创建时间，秒为单位
                     * @return CreatedTime 创建时间，秒为单位
                     * 
                     */
                    int64_t GetCreatedTime() const;

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取备注信息
                     * @return Remark 备注信息
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取实例状态， RUNNING, 运行中 MAINTAINING，维护中 ABNORMAL，异常 OVERDUE，欠费 DESTROYED，已删除 CREATING，创建中 MODIFYING，变配中 CREATE_FAILURE，创建失败 MODIFY_FAILURE，变配失败 DELETING，删除中
                     * @return InstanceStatus 实例状态， RUNNING, 运行中 MAINTAINING，维护中 ABNORMAL，异常 OVERDUE，欠费 DESTROYED，已删除 CREATING，创建中 MODIFYING，变配中 CREATE_FAILURE，创建失败 MODIFY_FAILURE，变配失败 DELETING，删除中
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取实例规格
                     * @return SkuCode 实例规格
                     * 
                     */
                    std::string GetSkuCode() const;

                    /**
                     * 判断参数 SkuCode 是否已赋值
                     * @return SkuCode 是否已赋值
                     * 
                     */
                    bool SkuCodeHasBeenSet() const;

                    /**
                     * 获取单客户端最大订阅数
                     * @return MaxSubscriptionPerClient 单客户端最大订阅数
                     * 
                     */
                    int64_t GetMaxSubscriptionPerClient() const;

                    /**
                     * 判断参数 MaxSubscriptionPerClient 是否已赋值
                     * @return MaxSubscriptionPerClient 是否已赋值
                     * 
                     */
                    bool MaxSubscriptionPerClientHasBeenSet() const;

                    /**
                     * 获取授权规则条数
                     * @return AuthorizationPolicyLimit 授权规则条数
                     * 
                     */
                    int64_t GetAuthorizationPolicyLimit() const;

                    /**
                     * 判断参数 AuthorizationPolicyLimit 是否已赋值
                     * @return AuthorizationPolicyLimit 是否已赋值
                     * 
                     */
                    bool AuthorizationPolicyLimitHasBeenSet() const;

                    /**
                     * 获取客户端数量上限
                     * @return ClientNumLimit 客户端数量上限
                     * 
                     */
                    int64_t GetClientNumLimit() const;

                    /**
                     * 判断参数 ClientNumLimit 是否已赋值
                     * @return ClientNumLimit 是否已赋值
                     * 
                     */
                    bool ClientNumLimitHasBeenSet() const;

                    /**
                     * 获取客户端证书注册方式：
JITP：自动注册
API：通过API手动注册
                     * @return DeviceCertificateProvisionType 客户端证书注册方式：
JITP：自动注册
API：通过API手动注册
                     * 
                     */
                    std::string GetDeviceCertificateProvisionType() const;

                    /**
                     * 判断参数 DeviceCertificateProvisionType 是否已赋值
                     * @return DeviceCertificateProvisionType 是否已赋值
                     * 
                     */
                    bool DeviceCertificateProvisionTypeHasBeenSet() const;

                    /**
                     * 获取自动注册设备证书时是否自动激活
                     * @return AutomaticActivation 自动注册设备证书时是否自动激活
                     * 
                     */
                    bool GetAutomaticActivation() const;

                    /**
                     * 判断参数 AutomaticActivation 是否已赋值
                     * @return AutomaticActivation 是否已赋值
                     * 
                     */
                    bool AutomaticActivationHasBeenSet() const;

                    /**
                     * 获取是否自动续费。仅包年包月集群生效。 1:自动续费 0:非自动续费
                     * @return RenewFlag 是否自动续费。仅包年包月集群生效。 1:自动续费 0:非自动续费
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取计费模式， POSTPAID，按量计费 PREPAID，包年包月
                     * @return PayMode 计费模式， POSTPAID，按量计费 PREPAID，包年包月
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取到期时间，毫秒级时间戳
                     * @return ExpiryTime 到期时间，毫秒级时间戳
                     * 
                     */
                    int64_t GetExpiryTime() const;

                    /**
                     * 判断参数 ExpiryTime 是否已赋值
                     * @return ExpiryTime 是否已赋值
                     * 
                     */
                    bool ExpiryTimeHasBeenSet() const;

                    /**
                     * 获取预销毁时间，毫秒级时间戳
                     * @return DestroyTime 预销毁时间，毫秒级时间戳
                     * 
                     */
                    int64_t GetDestroyTime() const;

                    /**
                     * 判断参数 DestroyTime 是否已赋值
                     * @return DestroyTime 是否已赋值
                     * 
                     */
                    bool DestroyTimeHasBeenSet() const;

                    /**
                     * 获取TLS,单向认证    mTLS,双向认证    BYOC;一机一证
                     * @return X509Mode TLS,单向认证    mTLS,双向认证    BYOC;一机一证
                     * 
                     */
                    std::string GetX509Mode() const;

                    /**
                     * 判断参数 X509Mode 是否已赋值
                     * @return X509Mode 是否已赋值
                     * 
                     */
                    bool X509ModeHasBeenSet() const;

                    /**
                     * 获取最大Ca配额
                     * @return MaxCaNum 最大Ca配额
                     * 
                     */
                    int64_t GetMaxCaNum() const;

                    /**
                     * 判断参数 MaxCaNum 是否已赋值
                     * @return MaxCaNum 是否已赋值
                     * 
                     */
                    bool MaxCaNumHasBeenSet() const;

                    /**
                     * 获取证书注册码
                     * @return RegistrationCode 证书注册码
                     * 
                     */
                    std::string GetRegistrationCode() const;

                    /**
                     * 判断参数 RegistrationCode 是否已赋值
                     * @return RegistrationCode 是否已赋值
                     * 
                     */
                    bool RegistrationCodeHasBeenSet() const;

                    /**
                     * 获取集群最大订阅数
                     * @return MaxSubscription 集群最大订阅数
                     * 
                     */
                    int64_t GetMaxSubscription() const;

                    /**
                     * 判断参数 MaxSubscription 是否已赋值
                     * @return MaxSubscription 是否已赋值
                     * 
                     */
                    bool MaxSubscriptionHasBeenSet() const;

                    /**
                     * 获取授权策略开关
                     * @return AuthorizationPolicy 授权策略开关
                     * 
                     */
                    bool GetAuthorizationPolicy() const;

                    /**
                     * 判断参数 AuthorizationPolicy 是否已赋值
                     * @return AuthorizationPolicy 是否已赋值
                     * 
                     */
                    bool AuthorizationPolicyHasBeenSet() const;

                private:

                    /**
                     * 实例类型
BASIC 基础版
PRO  专业版
PLATINUM 铂金版
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 主题数量
                     */
                    int64_t m_topicNum;
                    bool m_topicNumHasBeenSet;

                    /**
                     * 实例最大主题数量
                     */
                    int64_t m_topicNumLimit;
                    bool m_topicNumLimitHasBeenSet;

                    /**
                     * TPS限流值
                     */
                    int64_t m_tpsLimit;
                    bool m_tpsLimitHasBeenSet;

                    /**
                     * 创建时间，秒为单位
                     */
                    int64_t m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 备注信息
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 实例状态， RUNNING, 运行中 MAINTAINING，维护中 ABNORMAL，异常 OVERDUE，欠费 DESTROYED，已删除 CREATING，创建中 MODIFYING，变配中 CREATE_FAILURE，创建失败 MODIFY_FAILURE，变配失败 DELETING，删除中
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * 实例规格
                     */
                    std::string m_skuCode;
                    bool m_skuCodeHasBeenSet;

                    /**
                     * 单客户端最大订阅数
                     */
                    int64_t m_maxSubscriptionPerClient;
                    bool m_maxSubscriptionPerClientHasBeenSet;

                    /**
                     * 授权规则条数
                     */
                    int64_t m_authorizationPolicyLimit;
                    bool m_authorizationPolicyLimitHasBeenSet;

                    /**
                     * 客户端数量上限
                     */
                    int64_t m_clientNumLimit;
                    bool m_clientNumLimitHasBeenSet;

                    /**
                     * 客户端证书注册方式：
JITP：自动注册
API：通过API手动注册
                     */
                    std::string m_deviceCertificateProvisionType;
                    bool m_deviceCertificateProvisionTypeHasBeenSet;

                    /**
                     * 自动注册设备证书时是否自动激活
                     */
                    bool m_automaticActivation;
                    bool m_automaticActivationHasBeenSet;

                    /**
                     * 是否自动续费。仅包年包月集群生效。 1:自动续费 0:非自动续费
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 计费模式， POSTPAID，按量计费 PREPAID，包年包月
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 到期时间，毫秒级时间戳
                     */
                    int64_t m_expiryTime;
                    bool m_expiryTimeHasBeenSet;

                    /**
                     * 预销毁时间，毫秒级时间戳
                     */
                    int64_t m_destroyTime;
                    bool m_destroyTimeHasBeenSet;

                    /**
                     * TLS,单向认证    mTLS,双向认证    BYOC;一机一证
                     */
                    std::string m_x509Mode;
                    bool m_x509ModeHasBeenSet;

                    /**
                     * 最大Ca配额
                     */
                    int64_t m_maxCaNum;
                    bool m_maxCaNumHasBeenSet;

                    /**
                     * 证书注册码
                     */
                    std::string m_registrationCode;
                    bool m_registrationCodeHasBeenSet;

                    /**
                     * 集群最大订阅数
                     */
                    int64_t m_maxSubscription;
                    bool m_maxSubscriptionHasBeenSet;

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

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEINSTANCERESPONSE_H_
