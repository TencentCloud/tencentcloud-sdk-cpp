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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEINSTANCERESPONSE_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/Tag.h>
#include <tencentcloud/trocket/v20230308/model/Endpoint.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
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
                     * 获取实例类型，
EXPERIMENT 体验版
BASIC 基础版
PRO  专业版
PLATINUM 铂金版
                     * @return InstanceType 实例类型，
EXPERIMENT 体验版
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
                     * 获取消费组数量
                     * @return GroupNum 消费组数量
                     * 
                     */
                    int64_t GetGroupNum() const;

                    /**
                     * 判断参数 GroupNum 是否已赋值
                     * @return GroupNum 是否已赋值
                     * 
                     */
                    bool GroupNumHasBeenSet() const;

                    /**
                     * 获取实例最大消费组数量
                     * @return GroupNumLimit 实例最大消费组数量
                     * 
                     */
                    int64_t GetGroupNumLimit() const;

                    /**
                     * 判断参数 GroupNumLimit 是否已赋值
                     * @return GroupNumLimit 是否已赋值
                     * 
                     */
                    bool GroupNumLimitHasBeenSet() const;

                    /**
                     * 获取消息保留时间，小时为单位
                     * @return MessageRetention 消息保留时间，小时为单位
                     * 
                     */
                    int64_t GetMessageRetention() const;

                    /**
                     * 判断参数 MessageRetention 是否已赋值
                     * @return MessageRetention 是否已赋值
                     * 
                     */
                    bool MessageRetentionHasBeenSet() const;

                    /**
                     * 获取最大可调整消息保留时间，小时为单位
                     * @return RetentionUpperLimit 最大可调整消息保留时间，小时为单位
                     * 
                     */
                    int64_t GetRetentionUpperLimit() const;

                    /**
                     * 判断参数 RetentionUpperLimit 是否已赋值
                     * @return RetentionUpperLimit 是否已赋值
                     * 
                     */
                    bool RetentionUpperLimitHasBeenSet() const;

                    /**
                     * 获取最小可调整消息保留时间，小时为单位
                     * @return RetentionLowerLimit 最小可调整消息保留时间，小时为单位
                     * 
                     */
                    int64_t GetRetentionLowerLimit() const;

                    /**
                     * 判断参数 RetentionLowerLimit 是否已赋值
                     * @return RetentionLowerLimit 是否已赋值
                     * 
                     */
                    bool RetentionLowerLimitHasBeenSet() const;

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
                     * 获取弹性TPS限流值
                     * @return ScaledTpsLimit 弹性TPS限流值
                     * 
                     */
                    int64_t GetScaledTpsLimit() const;

                    /**
                     * 判断参数 ScaledTpsLimit 是否已赋值
                     * @return ScaledTpsLimit 是否已赋值
                     * 
                     */
                    bool ScaledTpsLimitHasBeenSet() const;

                    /**
                     * 获取延迟消息最长时间，小时为单位
                     * @return MaxMessageDelay 延迟消息最长时间，小时为单位
                     * 
                     */
                    int64_t GetMaxMessageDelay() const;

                    /**
                     * 判断参数 MaxMessageDelay 是否已赋值
                     * @return MaxMessageDelay 是否已赋值
                     * 
                     */
                    bool MaxMessageDelayHasBeenSet() const;

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
                     * 获取消息发送接收比例
                     * @return SendReceiveRatio 消息发送接收比例
                     * 
                     */
                    double GetSendReceiveRatio() const;

                    /**
                     * 判断参数 SendReceiveRatio 是否已赋值
                     * @return SendReceiveRatio 是否已赋值
                     * 
                     */
                    bool SendReceiveRatioHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagList 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取接入点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndpointList 接入点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Endpoint> GetEndpointList() const;

                    /**
                     * 判断参数 EndpointList 是否已赋值
                     * @return EndpointList 是否已赋值
                     * 
                     */
                    bool EndpointListHasBeenSet() const;

                    /**
                     * 获取主题队列数上限
                     * @return TopicQueueNumUpperLimit 主题队列数上限
                     * 
                     */
                    int64_t GetTopicQueueNumUpperLimit() const;

                    /**
                     * 判断参数 TopicQueueNumUpperLimit 是否已赋值
                     * @return TopicQueueNumUpperLimit 是否已赋值
                     * 
                     */
                    bool TopicQueueNumUpperLimitHasBeenSet() const;

                    /**
                     * 获取主题队列数下限
                     * @return TopicQueueNumLowerLimit 主题队列数下限
                     * 
                     */
                    int64_t GetTopicQueueNumLowerLimit() const;

                    /**
                     * 判断参数 TopicQueueNumLowerLimit 是否已赋值
                     * @return TopicQueueNumLowerLimit 是否已赋值
                     * 
                     */
                    bool TopicQueueNumLowerLimitHasBeenSet() const;

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
                     * 获取实例状态
                     * @return InstanceStatus 实例状态
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
                     * 获取计费模式
                     * @return PayMode 计费模式
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
                     * 获取是否开启弹性TPS
                     * @return ScaledTpsEnabled 是否开启弹性TPS
                     * 
                     */
                    bool GetScaledTpsEnabled() const;

                    /**
                     * 判断参数 ScaledTpsEnabled 是否已赋值
                     * @return ScaledTpsEnabled 是否已赋值
                     * 
                     */
                    bool ScaledTpsEnabledHasBeenSet() const;

                    /**
                     * 获取是否自动续费
                     * @return RenewFlag 是否自动续费
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
                     * 获取到期时间
                     * @return ExpiryTime 到期时间
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
                     * 获取角色数量限制
                     * @return RoleNumLimit 角色数量限制
                     * 
                     */
                    int64_t GetRoleNumLimit() const;

                    /**
                     * 判断参数 RoleNumLimit 是否已赋值
                     * @return RoleNumLimit 是否已赋值
                     * 
                     */
                    bool RoleNumLimitHasBeenSet() const;

                    /**
                     * 获取是否开启 ACL
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AclEnabled 是否开启 ACL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAclEnabled() const;

                    /**
                     * 判断参数 AclEnabled 是否已赋值
                     * @return AclEnabled 是否已赋值
                     * 
                     */
                    bool AclEnabledHasBeenSet() const;

                    /**
                     * 获取topic个数免费额度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicNumLowerLimit topic个数免费额度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTopicNumLowerLimit() const;

                    /**
                     * 判断参数 TopicNumLowerLimit 是否已赋值
                     * @return TopicNumLowerLimit 是否已赋值
                     * 
                     */
                    bool TopicNumLowerLimitHasBeenSet() const;

                    /**
                     * 获取最大可设置的topic个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicNumUpperLimit 最大可设置的topic个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTopicNumUpperLimit() const;

                    /**
                     * 判断参数 TopicNumUpperLimit 是否已赋值
                     * @return TopicNumUpperLimit 是否已赋值
                     * 
                     */
                    bool TopicNumUpperLimitHasBeenSet() const;

                    /**
                     * 获取可用区列表
                     * @return ZoneIds 可用区列表
                     * 
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                private:

                    /**
                     * 实例类型，
EXPERIMENT 体验版
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
                     * 消费组数量
                     */
                    int64_t m_groupNum;
                    bool m_groupNumHasBeenSet;

                    /**
                     * 实例最大消费组数量
                     */
                    int64_t m_groupNumLimit;
                    bool m_groupNumLimitHasBeenSet;

                    /**
                     * 消息保留时间，小时为单位
                     */
                    int64_t m_messageRetention;
                    bool m_messageRetentionHasBeenSet;

                    /**
                     * 最大可调整消息保留时间，小时为单位
                     */
                    int64_t m_retentionUpperLimit;
                    bool m_retentionUpperLimitHasBeenSet;

                    /**
                     * 最小可调整消息保留时间，小时为单位
                     */
                    int64_t m_retentionLowerLimit;
                    bool m_retentionLowerLimitHasBeenSet;

                    /**
                     * TPS限流值
                     */
                    int64_t m_tpsLimit;
                    bool m_tpsLimitHasBeenSet;

                    /**
                     * 弹性TPS限流值
                     */
                    int64_t m_scaledTpsLimit;
                    bool m_scaledTpsLimitHasBeenSet;

                    /**
                     * 延迟消息最长时间，小时为单位
                     */
                    int64_t m_maxMessageDelay;
                    bool m_maxMessageDelayHasBeenSet;

                    /**
                     * 创建时间，秒为单位
                     */
                    int64_t m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 消息发送接收比例
                     */
                    double m_sendReceiveRatio;
                    bool m_sendReceiveRatioHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * 接入点列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Endpoint> m_endpointList;
                    bool m_endpointListHasBeenSet;

                    /**
                     * 主题队列数上限
                     */
                    int64_t m_topicQueueNumUpperLimit;
                    bool m_topicQueueNumUpperLimitHasBeenSet;

                    /**
                     * 主题队列数下限
                     */
                    int64_t m_topicQueueNumLowerLimit;
                    bool m_topicQueueNumLowerLimitHasBeenSet;

                    /**
                     * 备注信息
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 实例状态
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * 实例规格
                     */
                    std::string m_skuCode;
                    bool m_skuCodeHasBeenSet;

                    /**
                     * 计费模式
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 是否开启弹性TPS
                     */
                    bool m_scaledTpsEnabled;
                    bool m_scaledTpsEnabledHasBeenSet;

                    /**
                     * 是否自动续费
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 到期时间
                     */
                    int64_t m_expiryTime;
                    bool m_expiryTimeHasBeenSet;

                    /**
                     * 角色数量限制
                     */
                    int64_t m_roleNumLimit;
                    bool m_roleNumLimitHasBeenSet;

                    /**
                     * 是否开启 ACL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_aclEnabled;
                    bool m_aclEnabledHasBeenSet;

                    /**
                     * topic个数免费额度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_topicNumLowerLimit;
                    bool m_topicNumLowerLimitHasBeenSet;

                    /**
                     * 最大可设置的topic个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_topicNumUpperLimit;
                    bool m_topicNumUpperLimitHasBeenSet;

                    /**
                     * 可用区列表
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEINSTANCERESPONSE_H_
