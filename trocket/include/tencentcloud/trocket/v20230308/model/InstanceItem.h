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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_INSTANCEITEM_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_INSTANCEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/Tag.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * 实例列表页中的实例信息
                */
                class InstanceItem : public AbstractModel
                {
                public:
                    InstanceItem();
                    ~InstanceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param _instanceName 实例名称
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取实例版本
                     * @return Version 实例版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置实例版本
                     * @param _version 实例版本
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取实例类型，
EXPERIMENT，体验版
BASIC，基础版
PRO，专业版
PLATINUM，铂金版
                     * @return InstanceType 实例类型，
EXPERIMENT，体验版
BASIC，基础版
PRO，专业版
PLATINUM，铂金版
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型，
EXPERIMENT，体验版
BASIC，基础版
PRO，专业版
PLATINUM，铂金版
                     * @param _instanceType 实例类型，
EXPERIMENT，体验版
BASIC，基础版
PRO，专业版
PLATINUM，铂金版
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取实例状态，
RUNNING, 运行中
MAINTAINING，维护中
ABNORMAL，异常
OVERDUE，欠费
DESTROYED，已删除
CREATING，创建中
MODIFYING，变配中
CREATE_FAILURE，创建失败
MODIFY_FAILURE，变配失败
DELETING，删除中
                     * @return InstanceStatus 实例状态，
RUNNING, 运行中
MAINTAINING，维护中
ABNORMAL，异常
OVERDUE，欠费
DESTROYED，已删除
CREATING，创建中
MODIFYING，变配中
CREATE_FAILURE，创建失败
MODIFY_FAILURE，变配失败
DELETING，删除中
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置实例状态，
RUNNING, 运行中
MAINTAINING，维护中
ABNORMAL，异常
OVERDUE，欠费
DESTROYED，已删除
CREATING，创建中
MODIFYING，变配中
CREATE_FAILURE，创建失败
MODIFY_FAILURE，变配失败
DELETING，删除中
                     * @param _instanceStatus 实例状态，
RUNNING, 运行中
MAINTAINING，维护中
ABNORMAL，异常
OVERDUE，欠费
DESTROYED，已删除
CREATING，创建中
MODIFYING，变配中
CREATE_FAILURE，创建失败
MODIFY_FAILURE，变配失败
DELETING，删除中
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取实例主题数上限
                     * @return TopicNumLimit 实例主题数上限
                     * 
                     */
                    int64_t GetTopicNumLimit() const;

                    /**
                     * 设置实例主题数上限
                     * @param _topicNumLimit 实例主题数上限
                     * 
                     */
                    void SetTopicNumLimit(const int64_t& _topicNumLimit);

                    /**
                     * 判断参数 TopicNumLimit 是否已赋值
                     * @return TopicNumLimit 是否已赋值
                     * 
                     */
                    bool TopicNumLimitHasBeenSet() const;

                    /**
                     * 获取实例消费组数量上限
                     * @return GroupNumLimit 实例消费组数量上限
                     * 
                     */
                    int64_t GetGroupNumLimit() const;

                    /**
                     * 设置实例消费组数量上限
                     * @param _groupNumLimit 实例消费组数量上限
                     * 
                     */
                    void SetGroupNumLimit(const int64_t& _groupNumLimit);

                    /**
                     * 判断参数 GroupNumLimit 是否已赋值
                     * @return GroupNumLimit 是否已赋值
                     * 
                     */
                    bool GroupNumLimitHasBeenSet() const;

                    /**
                     * 获取计费模式，
POSTPAID，按量计费
PREPAID，包年包月
                     * @return PayMode 计费模式，
POSTPAID，按量计费
PREPAID，包年包月
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置计费模式，
POSTPAID，按量计费
PREPAID，包年包月
                     * @param _payMode 计费模式，
POSTPAID，按量计费
PREPAID，包年包月
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取到期时间，秒为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpiryTime 到期时间，秒为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetExpiryTime() const;

                    /**
                     * 设置到期时间，秒为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expiryTime 到期时间，秒为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpiryTime(const int64_t& _expiryTime);

                    /**
                     * 判断参数 ExpiryTime 是否已赋值
                     * @return ExpiryTime 是否已赋值
                     * 
                     */
                    bool ExpiryTimeHasBeenSet() const;

                    /**
                     * 获取备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 备注信息
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取主题数量
                     * @return TopicNum 主题数量
                     * 
                     */
                    int64_t GetTopicNum() const;

                    /**
                     * 设置主题数量
                     * @param _topicNum 主题数量
                     * 
                     */
                    void SetTopicNum(const int64_t& _topicNum);

                    /**
                     * 判断参数 TopicNum 是否已赋值
                     * @return TopicNum 是否已赋值
                     * 
                     */
                    bool TopicNumHasBeenSet() const;

                    /**
                     * 获取消费组数量
                     * @return GroupNum 消费组数量
                     * 
                     */
                    int64_t GetGroupNum() const;

                    /**
                     * 设置消费组数量
                     * @param _groupNum 消费组数量
                     * 
                     */
                    void SetGroupNum(const int64_t& _groupNum);

                    /**
                     * 判断参数 GroupNum 是否已赋值
                     * @return GroupNum 是否已赋值
                     * 
                     */
                    bool GroupNumHasBeenSet() const;

                    /**
                     * 获取标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagList 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 设置标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagList 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagList(const std::vector<Tag>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取商品规格
                     * @return SkuCode 商品规格
                     * 
                     */
                    std::string GetSkuCode() const;

                    /**
                     * 设置商品规格
                     * @param _skuCode 商品规格
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
                     * 获取TPS限流值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TpsLimit TPS限流值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTpsLimit() const;

                    /**
                     * 设置TPS限流值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tpsLimit TPS限流值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTpsLimit(const int64_t& _tpsLimit);

                    /**
                     * 判断参数 TpsLimit 是否已赋值
                     * @return TpsLimit 是否已赋值
                     * 
                     */
                    bool TpsLimitHasBeenSet() const;

                    /**
                     * 获取弹性TPS限流值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScaledTpsLimit 弹性TPS限流值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScaledTpsLimit() const;

                    /**
                     * 设置弹性TPS限流值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scaledTpsLimit 弹性TPS限流值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScaledTpsLimit(const int64_t& _scaledTpsLimit);

                    /**
                     * 判断参数 ScaledTpsLimit 是否已赋值
                     * @return ScaledTpsLimit 是否已赋值
                     * 
                     */
                    bool ScaledTpsLimitHasBeenSet() const;

                    /**
                     * 获取消息保留时间，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MessageRetention 消息保留时间，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMessageRetention() const;

                    /**
                     * 设置消息保留时间，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _messageRetention 消息保留时间，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessageRetention(const int64_t& _messageRetention);

                    /**
                     * 判断参数 MessageRetention 是否已赋值
                     * @return MessageRetention 是否已赋值
                     * 
                     */
                    bool MessageRetentionHasBeenSet() const;

                    /**
                     * 获取延迟消息最大时长，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxMessageDelay 延迟消息最大时长，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxMessageDelay() const;

                    /**
                     * 设置延迟消息最大时长，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxMessageDelay 延迟消息最大时长，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxMessageDelay(const int64_t& _maxMessageDelay);

                    /**
                     * 判断参数 MaxMessageDelay 是否已赋值
                     * @return MaxMessageDelay 是否已赋值
                     * 
                     */
                    bool MaxMessageDelayHasBeenSet() const;

                    /**
                     * 获取是否自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RenewFlag 是否自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置是否自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _renewFlag 是否自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                private:

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
                     * 实例版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 实例类型，
EXPERIMENT，体验版
BASIC，基础版
PRO，专业版
PLATINUM，铂金版
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 实例状态，
RUNNING, 运行中
MAINTAINING，维护中
ABNORMAL，异常
OVERDUE，欠费
DESTROYED，已删除
CREATING，创建中
MODIFYING，变配中
CREATE_FAILURE，创建失败
MODIFY_FAILURE，变配失败
DELETING，删除中
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * 实例主题数上限
                     */
                    int64_t m_topicNumLimit;
                    bool m_topicNumLimitHasBeenSet;

                    /**
                     * 实例消费组数量上限
                     */
                    int64_t m_groupNumLimit;
                    bool m_groupNumLimitHasBeenSet;

                    /**
                     * 计费模式，
POSTPAID，按量计费
PREPAID，包年包月
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 到期时间，秒为单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_expiryTime;
                    bool m_expiryTimeHasBeenSet;

                    /**
                     * 备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 主题数量
                     */
                    int64_t m_topicNum;
                    bool m_topicNumHasBeenSet;

                    /**
                     * 消费组数量
                     */
                    int64_t m_groupNum;
                    bool m_groupNumHasBeenSet;

                    /**
                     * 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * 商品规格
                     */
                    std::string m_skuCode;
                    bool m_skuCodeHasBeenSet;

                    /**
                     * TPS限流值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tpsLimit;
                    bool m_tpsLimitHasBeenSet;

                    /**
                     * 弹性TPS限流值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_scaledTpsLimit;
                    bool m_scaledTpsLimitHasBeenSet;

                    /**
                     * 消息保留时间，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_messageRetention;
                    bool m_messageRetentionHasBeenSet;

                    /**
                     * 延迟消息最大时长，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxMessageDelay;
                    bool m_maxMessageDelayHasBeenSet;

                    /**
                     * 是否自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_INSTANCEITEM_H_
