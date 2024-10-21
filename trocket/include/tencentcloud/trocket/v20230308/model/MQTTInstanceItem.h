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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_MQTTINSTANCEITEM_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_MQTTINSTANCEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * MQTT 实例信息
                */
                class MQTTInstanceItem : public AbstractModel
                {
                public:
                    MQTTInstanceItem();
                    ~MQTTInstanceItem() = default;
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
BASIC，基础版
PRO，专业版
                     * @return InstanceType 实例类型，
BASIC，基础版
PRO，专业版
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型，
BASIC，基础版
PRO，专业版
                     * @param _instanceType 实例类型，
BASIC，基础版
PRO，专业版
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
                     * 获取弹性TPS限流值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TpsLimit 弹性TPS限流值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTpsLimit() const;

                    /**
                     * 设置弹性TPS限流值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tpsLimit 弹性TPS限流值
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
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取订阅关系上限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubscriptionNumLimit 订阅关系上限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSubscriptionNumLimit() const;

                    /**
                     * 设置订阅关系上限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subscriptionNumLimit 订阅关系上限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubscriptionNumLimit(const int64_t& _subscriptionNumLimit);

                    /**
                     * 判断参数 SubscriptionNumLimit 是否已赋值
                     * @return SubscriptionNumLimit 是否已赋值
                     * 
                     */
                    bool SubscriptionNumLimitHasBeenSet() const;

                    /**
                     * 获取客户端连接数上线
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientNumLimit 客户端连接数上线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetClientNumLimit() const;

                    /**
                     * 设置客户端连接数上线
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clientNumLimit 客户端连接数上线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClientNumLimit(const int64_t& _clientNumLimit);

                    /**
                     * 判断参数 ClientNumLimit 是否已赋值
                     * @return ClientNumLimit 是否已赋值
                     * 
                     */
                    bool ClientNumLimitHasBeenSet() const;

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
BASIC，基础版
PRO，专业版
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
                     * 商品规格
                     */
                    std::string m_skuCode;
                    bool m_skuCodeHasBeenSet;

                    /**
                     * 弹性TPS限流值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tpsLimit;
                    bool m_tpsLimitHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 订阅关系上限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_subscriptionNumLimit;
                    bool m_subscriptionNumLimitHasBeenSet;

                    /**
                     * 客户端连接数上线
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_clientNumLimit;
                    bool m_clientNumLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_MQTTINSTANCEITEM_H_
