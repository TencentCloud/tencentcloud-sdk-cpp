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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQTOPIC_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQTOPIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/RocketMQSubscription.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * RocketMQ主题信息
                */
                class RocketMQTopic : public AbstractModel
                {
                public:
                    RocketMQTopic();
                    ~RocketMQTopic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主题名称
                     * @return Name 主题名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置主题名称
                     * @param _name 主题名称
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
                     * 获取主题的类别，为枚举类型，Normal，GlobalOrder，PartitionedOrder，Transaction，Retry及DeadLetter
                     * @return Type 主题的类别，为枚举类型，Normal，GlobalOrder，PartitionedOrder，Transaction，Retry及DeadLetter
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置主题的类别，为枚举类型，Normal，GlobalOrder，PartitionedOrder，Transaction，Retry及DeadLetter
                     * @param _type 主题的类别，为枚举类型，Normal，GlobalOrder，PartitionedOrder，Transaction，Retry及DeadLetter
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取订阅组数量
                     * @return GroupNum 订阅组数量
                     * 
                     */
                    uint64_t GetGroupNum() const;

                    /**
                     * 设置订阅组数量
                     * @param _groupNum 订阅组数量
                     * 
                     */
                    void SetGroupNum(const uint64_t& _groupNum);

                    /**
                     * 判断参数 GroupNum 是否已赋值
                     * @return GroupNum 是否已赋值
                     * 
                     */
                    bool GroupNumHasBeenSet() const;

                    /**
                     * 获取说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 说明
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
                     * 获取读写分区数
                     * @return PartitionNum 读写分区数
                     * 
                     */
                    uint64_t GetPartitionNum() const;

                    /**
                     * 设置读写分区数
                     * @param _partitionNum 读写分区数
                     * 
                     */
                    void SetPartitionNum(const uint64_t& _partitionNum);

                    /**
                     * 判断参数 PartitionNum 是否已赋值
                     * @return PartitionNum 是否已赋值
                     * 
                     */
                    bool PartitionNumHasBeenSet() const;

                    /**
                     * 获取创建时间，以毫秒为单位
                     * @return CreateTime 创建时间，以毫秒为单位
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间，以毫秒为单位
                     * @param _createTime 创建时间，以毫秒为单位
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取创建时间，以毫秒为单位
                     * @return UpdateTime 创建时间，以毫秒为单位
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置创建时间，以毫秒为单位
                     * @param _updateTime 创建时间，以毫秒为单位
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 实例ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Namespace 命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespace 命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取最后写入时间，单位为秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastUpdateTime 最后写入时间，单位为秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLastUpdateTime() const;

                    /**
                     * 设置最后写入时间，单位为秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastUpdateTime 最后写入时间，单位为秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastUpdateTime(const int64_t& _lastUpdateTime);

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                    /**
                     * 获取订阅数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubscriptionCount 订阅数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSubscriptionCount() const;

                    /**
                     * 设置订阅数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subscriptionCount 订阅数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubscriptionCount(const int64_t& _subscriptionCount);

                    /**
                     * 判断参数 SubscriptionCount 是否已赋值
                     * @return SubscriptionCount 是否已赋值
                     * 
                     */
                    bool SubscriptionCountHasBeenSet() const;

                    /**
                     * 获取订阅关系列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubscriptionData 订阅关系列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RocketMQSubscription> GetSubscriptionData() const;

                    /**
                     * 设置订阅关系列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subscriptionData 订阅关系列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubscriptionData(const std::vector<RocketMQSubscription>& _subscriptionData);

                    /**
                     * 判断参数 SubscriptionData 是否已赋值
                     * @return SubscriptionData 是否已赋值
                     * 
                     */
                    bool SubscriptionDataHasBeenSet() const;

                private:

                    /**
                     * 主题名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 主题的类别，为枚举类型，Normal，GlobalOrder，PartitionedOrder，Transaction，Retry及DeadLetter
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 订阅组数量
                     */
                    uint64_t m_groupNum;
                    bool m_groupNumHasBeenSet;

                    /**
                     * 说明
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 读写分区数
                     */
                    uint64_t m_partitionNum;
                    bool m_partitionNumHasBeenSet;

                    /**
                     * 创建时间，以毫秒为单位
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 创建时间，以毫秒为单位
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 最后写入时间，单位为秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                    /**
                     * 订阅数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_subscriptionCount;
                    bool m_subscriptionCountHasBeenSet;

                    /**
                     * 订阅关系列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RocketMQSubscription> m_subscriptionData;
                    bool m_subscriptionDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQTOPIC_H_
