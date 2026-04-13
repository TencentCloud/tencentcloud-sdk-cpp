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
                     * 获取<p>实例类型<br>BASIC 基础版<br>PRO  专业版<br>PLATINUM 铂金版</p>
                     * @return InstanceType <p>实例类型<br>BASIC 基础版<br>PRO  专业版<br>PLATINUM 铂金版</p>
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
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
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
                     * 获取<p>实例名称</p>
                     * @return InstanceName <p>实例名称</p>
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
                     * 获取<p>主题数量</p>
                     * @return TopicNum <p>主题数量</p>
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
                     * 获取<p>实例最大主题数量</p>
                     * @return TopicNumLimit <p>实例最大主题数量</p>
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
                     * 获取<p>TPS限流值</p>
                     * @return TpsLimit <p>TPS限流值</p>
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
                     * 获取<p>创建时间，秒为单位</p>
                     * @return CreatedTime <p>创建时间，秒为单位</p>
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
                     * 获取<p>备注信息</p>
                     * @return Remark <p>备注信息</p>
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
                     * 获取<p>实例状态， RUNNING, 运行中 MAINTAINING，维护中 ABNORMAL，异常 OVERDUE，欠费 DESTROYED，已删除 CREATING，创建中 MODIFYING，变配中 CREATE_FAILURE，创建失败 MODIFY_FAILURE，变配失败 DELETING，删除中</p>
                     * @return InstanceStatus <p>实例状态， RUNNING, 运行中 MAINTAINING，维护中 ABNORMAL，异常 OVERDUE，欠费 DESTROYED，已删除 CREATING，创建中 MODIFYING，变配中 CREATE_FAILURE，创建失败 MODIFY_FAILURE，变配失败 DELETING，删除中</p>
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
                     * 获取<p>实例规格</p>
                     * @return SkuCode <p>实例规格</p>
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
                     * 获取<p>单客户端最大订阅数</p>
                     * @return MaxSubscriptionPerClient <p>单客户端最大订阅数</p>
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
                     * 获取<p>授权规则条数</p>
                     * @return AuthorizationPolicyLimit <p>授权规则条数</p>
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
                     * 获取<p>客户端数量上限</p>
                     * @return ClientNumLimit <p>客户端数量上限</p>
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
                     * 获取<p>客户端证书注册方式：<br>JITP：自动注册<br>API：通过API手动注册</p>
                     * @return DeviceCertificateProvisionType <p>客户端证书注册方式：<br>JITP：自动注册<br>API：通过API手动注册</p>
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
                     * 获取<p>自动注册设备证书时是否自动激活</p>
                     * @return AutomaticActivation <p>自动注册设备证书时是否自动激活</p>
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
                     * 获取<p>是否自动续费。仅包年包月集群生效。 1:自动续费 0:非自动续费</p>
                     * @return RenewFlag <p>是否自动续费。仅包年包月集群生效。 1:自动续费 0:非自动续费</p>
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
                     * 获取<p>计费模式， POSTPAID，按量计费 PREPAID，包年包月</p>
                     * @return PayMode <p>计费模式， POSTPAID，按量计费 PREPAID，包年包月</p>
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
                     * 获取<p>到期时间，毫秒级时间戳</p>
                     * @return ExpiryTime <p>到期时间，毫秒级时间戳</p>
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
                     * 获取<p>预销毁时间，毫秒级时间戳</p>
                     * @return DestroyTime <p>预销毁时间，毫秒级时间戳</p>
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
                     * 获取<p>TLS,单向认证    mTLS,双向认证    BYOC;一机一证</p>
                     * @return X509Mode <p>TLS,单向认证    mTLS,双向认证    BYOC;一机一证</p>
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
                     * 获取<p>最大Ca配额</p>
                     * @return MaxCaNum <p>最大Ca配额</p>
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
                     * 获取<p>证书注册码</p>
                     * @return RegistrationCode <p>证书注册码</p>
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
                     * 获取<p>集群最大订阅数</p>
                     * @return MaxSubscription <p>集群最大订阅数</p>
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
                     * 获取<p>授权策略开关</p>
                     * @return AuthorizationPolicy <p>授权策略开关</p>
                     * 
                     */
                    bool GetAuthorizationPolicy() const;

                    /**
                     * 判断参数 AuthorizationPolicy 是否已赋值
                     * @return AuthorizationPolicy 是否已赋值
                     * 
                     */
                    bool AuthorizationPolicyHasBeenSet() const;

                    /**
                     * 获取<p>共享订阅组数最大限制</p>
                     * @return SharedSubscriptionGroupLimit <p>共享订阅组数最大限制</p>
                     * 
                     */
                    int64_t GetSharedSubscriptionGroupLimit() const;

                    /**
                     * 判断参数 SharedSubscriptionGroupLimit 是否已赋值
                     * @return SharedSubscriptionGroupLimit 是否已赋值
                     * 
                     */
                    bool SharedSubscriptionGroupLimitHasBeenSet() const;

                    /**
                     * 获取<p>单个共享订阅组TopicFilter数限制</p>
                     * @return MaxTopicFilterPerSharedSubscriptionGroup <p>单个共享订阅组TopicFilter数限制</p>
                     * @deprecated
                     */
                    int64_t GetMaxTopicFilterPerSharedSubscriptionGroup() const;

                    /**
                     * 判断参数 MaxTopicFilterPerSharedSubscriptionGroup 是否已赋值
                     * @return MaxTopicFilterPerSharedSubscriptionGroup 是否已赋值
                     * @deprecated
                     */
                    bool MaxTopicFilterPerSharedSubscriptionGroupHasBeenSet() const;

                    /**
                     * 获取<p>自动订阅规则条数限制</p>
                     * @return AutoSubscriptionPolicyLimit <p>自动订阅规则条数限制</p>
                     * 
                     */
                    int64_t GetAutoSubscriptionPolicyLimit() const;

                    /**
                     * 判断参数 AutoSubscriptionPolicyLimit 是否已赋值
                     * @return AutoSubscriptionPolicyLimit 是否已赋值
                     * 
                     */
                    bool AutoSubscriptionPolicyLimitHasBeenSet() const;

                    /**
                     * 获取<p>单条自动订阅规则TopicFilter数限制</p>
                     * @return MaxTopicFilterPerAutoSubscriptionPolicy <p>单条自动订阅规则TopicFilter数限制</p>
                     * 
                     */
                    int64_t GetMaxTopicFilterPerAutoSubscriptionPolicy() const;

                    /**
                     * 判断参数 MaxTopicFilterPerAutoSubscriptionPolicy 是否已赋值
                     * @return MaxTopicFilterPerAutoSubscriptionPolicy 是否已赋值
                     * 
                     */
                    bool MaxTopicFilterPerAutoSubscriptionPolicyHasBeenSet() const;

                    /**
                     * 获取<p>是否使用默认的服务端证书</p>
                     * @return UseDefaultServerCert <p>是否使用默认的服务端证书</p>
                     * 
                     */
                    bool GetUseDefaultServerCert() const;

                    /**
                     * 判断参数 UseDefaultServerCert 是否已赋值
                     * @return UseDefaultServerCert 是否已赋值
                     * 
                     */
                    bool UseDefaultServerCertHasBeenSet() const;

                    /**
                     * 获取<p>服务端CA最大数量</p>
                     * @return TrustedCaLimit <p>服务端CA最大数量</p>
                     * 
                     */
                    int64_t GetTrustedCaLimit() const;

                    /**
                     * 判断参数 TrustedCaLimit 是否已赋值
                     * @return TrustedCaLimit 是否已赋值
                     * 
                     */
                    bool TrustedCaLimitHasBeenSet() const;

                    /**
                     * 获取<p>服务端证书最大数量</p>
                     * @return ServerCertLimit <p>服务端证书最大数量</p>
                     * 
                     */
                    int64_t GetServerCertLimit() const;

                    /**
                     * 判断参数 ServerCertLimit 是否已赋值
                     * @return ServerCertLimit 是否已赋值
                     * 
                     */
                    bool ServerCertLimitHasBeenSet() const;

                    /**
                     * 获取<p>topic前缀最大层级</p>
                     * @return TopicPrefixSlashLimit <p>topic前缀最大层级</p>
                     * 
                     */
                    int64_t GetTopicPrefixSlashLimit() const;

                    /**
                     * 判断参数 TopicPrefixSlashLimit 是否已赋值
                     * @return TopicPrefixSlashLimit 是否已赋值
                     * 
                     */
                    bool TopicPrefixSlashLimitHasBeenSet() const;

                    /**
                     * 获取<p>单客户端发送消息限速，单位 条/秒</p>
                     * @return MessageRate <p>单客户端发送消息限速，单位 条/秒</p>
                     * 
                     */
                    int64_t GetMessageRate() const;

                    /**
                     * 判断参数 MessageRate 是否已赋值
                     * @return MessageRate 是否已赋值
                     * 
                     */
                    bool MessageRateHasBeenSet() const;

                    /**
                     * 获取<p>服务端tls支持的协议，使用“,”分割。例如：TLSv1.3,TLSv1.2,TLSv1.1,TLSv1</p>
                     * @return TransportLayerSecurity <p>服务端tls支持的协议，使用“,”分割。例如：TLSv1.3,TLSv1.2,TLSv1.1,TLSv1</p>
                     * 
                     */
                    std::string GetTransportLayerSecurity() const;

                    /**
                     * 判断参数 TransportLayerSecurity 是否已赋值
                     * @return TransportLayerSecurity 是否已赋值
                     * 
                     */
                    bool TransportLayerSecurityHasBeenSet() const;

                    /**
                     * 获取<p>消息属性增强规则配额</p>
                     * @return MessageEnrichmentRuleLimit <p>消息属性增强规则配额</p>
                     * 
                     */
                    int64_t GetMessageEnrichmentRuleLimit() const;

                    /**
                     * 判断参数 MessageEnrichmentRuleLimit 是否已赋值
                     * @return MessageEnrichmentRuleLimit 是否已赋值
                     * 
                     */
                    bool MessageEnrichmentRuleLimitHasBeenSet() const;

                    /**
                     * 获取<p>封禁规则最大数量</p>
                     * @return BlockRuleLimit <p>封禁规则最大数量</p>
                     * 
                     */
                    int64_t GetBlockRuleLimit() const;

                    /**
                     * 判断参数 BlockRuleLimit 是否已赋值
                     * @return BlockRuleLimit 是否已赋值
                     * 
                     */
                    bool BlockRuleLimitHasBeenSet() const;

                private:

                    /**
                     * <p>实例类型<br>BASIC 基础版<br>PRO  专业版<br>PLATINUM 铂金版</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>主题数量</p>
                     */
                    int64_t m_topicNum;
                    bool m_topicNumHasBeenSet;

                    /**
                     * <p>实例最大主题数量</p>
                     */
                    int64_t m_topicNumLimit;
                    bool m_topicNumLimitHasBeenSet;

                    /**
                     * <p>TPS限流值</p>
                     */
                    int64_t m_tpsLimit;
                    bool m_tpsLimitHasBeenSet;

                    /**
                     * <p>创建时间，秒为单位</p>
                     */
                    int64_t m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>备注信息</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>实例状态， RUNNING, 运行中 MAINTAINING，维护中 ABNORMAL，异常 OVERDUE，欠费 DESTROYED，已删除 CREATING，创建中 MODIFYING，变配中 CREATE_FAILURE，创建失败 MODIFY_FAILURE，变配失败 DELETING，删除中</p>
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * <p>实例规格</p>
                     */
                    std::string m_skuCode;
                    bool m_skuCodeHasBeenSet;

                    /**
                     * <p>单客户端最大订阅数</p>
                     */
                    int64_t m_maxSubscriptionPerClient;
                    bool m_maxSubscriptionPerClientHasBeenSet;

                    /**
                     * <p>授权规则条数</p>
                     */
                    int64_t m_authorizationPolicyLimit;
                    bool m_authorizationPolicyLimitHasBeenSet;

                    /**
                     * <p>客户端数量上限</p>
                     */
                    int64_t m_clientNumLimit;
                    bool m_clientNumLimitHasBeenSet;

                    /**
                     * <p>客户端证书注册方式：<br>JITP：自动注册<br>API：通过API手动注册</p>
                     */
                    std::string m_deviceCertificateProvisionType;
                    bool m_deviceCertificateProvisionTypeHasBeenSet;

                    /**
                     * <p>自动注册设备证书时是否自动激活</p>
                     */
                    bool m_automaticActivation;
                    bool m_automaticActivationHasBeenSet;

                    /**
                     * <p>是否自动续费。仅包年包月集群生效。 1:自动续费 0:非自动续费</p>
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>计费模式， POSTPAID，按量计费 PREPAID，包年包月</p>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>到期时间，毫秒级时间戳</p>
                     */
                    int64_t m_expiryTime;
                    bool m_expiryTimeHasBeenSet;

                    /**
                     * <p>预销毁时间，毫秒级时间戳</p>
                     */
                    int64_t m_destroyTime;
                    bool m_destroyTimeHasBeenSet;

                    /**
                     * <p>TLS,单向认证    mTLS,双向认证    BYOC;一机一证</p>
                     */
                    std::string m_x509Mode;
                    bool m_x509ModeHasBeenSet;

                    /**
                     * <p>最大Ca配额</p>
                     */
                    int64_t m_maxCaNum;
                    bool m_maxCaNumHasBeenSet;

                    /**
                     * <p>证书注册码</p>
                     */
                    std::string m_registrationCode;
                    bool m_registrationCodeHasBeenSet;

                    /**
                     * <p>集群最大订阅数</p>
                     */
                    int64_t m_maxSubscription;
                    bool m_maxSubscriptionHasBeenSet;

                    /**
                     * <p>授权策略开关</p>
                     */
                    bool m_authorizationPolicy;
                    bool m_authorizationPolicyHasBeenSet;

                    /**
                     * <p>共享订阅组数最大限制</p>
                     */
                    int64_t m_sharedSubscriptionGroupLimit;
                    bool m_sharedSubscriptionGroupLimitHasBeenSet;

                    /**
                     * <p>单个共享订阅组TopicFilter数限制</p>
                     */
                    int64_t m_maxTopicFilterPerSharedSubscriptionGroup;
                    bool m_maxTopicFilterPerSharedSubscriptionGroupHasBeenSet;

                    /**
                     * <p>自动订阅规则条数限制</p>
                     */
                    int64_t m_autoSubscriptionPolicyLimit;
                    bool m_autoSubscriptionPolicyLimitHasBeenSet;

                    /**
                     * <p>单条自动订阅规则TopicFilter数限制</p>
                     */
                    int64_t m_maxTopicFilterPerAutoSubscriptionPolicy;
                    bool m_maxTopicFilterPerAutoSubscriptionPolicyHasBeenSet;

                    /**
                     * <p>是否使用默认的服务端证书</p>
                     */
                    bool m_useDefaultServerCert;
                    bool m_useDefaultServerCertHasBeenSet;

                    /**
                     * <p>服务端CA最大数量</p>
                     */
                    int64_t m_trustedCaLimit;
                    bool m_trustedCaLimitHasBeenSet;

                    /**
                     * <p>服务端证书最大数量</p>
                     */
                    int64_t m_serverCertLimit;
                    bool m_serverCertLimitHasBeenSet;

                    /**
                     * <p>topic前缀最大层级</p>
                     */
                    int64_t m_topicPrefixSlashLimit;
                    bool m_topicPrefixSlashLimitHasBeenSet;

                    /**
                     * <p>单客户端发送消息限速，单位 条/秒</p>
                     */
                    int64_t m_messageRate;
                    bool m_messageRateHasBeenSet;

                    /**
                     * <p>服务端tls支持的协议，使用“,”分割。例如：TLSv1.3,TLSv1.2,TLSv1.1,TLSv1</p>
                     */
                    std::string m_transportLayerSecurity;
                    bool m_transportLayerSecurityHasBeenSet;

                    /**
                     * <p>消息属性增强规则配额</p>
                     */
                    int64_t m_messageEnrichmentRuleLimit;
                    bool m_messageEnrichmentRuleLimitHasBeenSet;

                    /**
                     * <p>封禁规则最大数量</p>
                     */
                    int64_t m_blockRuleLimit;
                    bool m_blockRuleLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEINSTANCERESPONSE_H_
