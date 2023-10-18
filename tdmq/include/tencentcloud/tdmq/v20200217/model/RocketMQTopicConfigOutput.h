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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQTOPICCONFIGOUTPUT_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQTOPICCONFIGOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * RocketMQ主题配置信息
                */
                class RocketMQTopicConfigOutput : public AbstractModel
                {
                public:
                    RocketMQTopicConfigOutput();
                    ~RocketMQTopicConfigOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取主题名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicName 主题名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置主题名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicName 主题名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取主题类型：
Normal，普通
GlobalOrder， 全局顺序
PartitionedOrder, 分区顺序
Transaction，事务消息
DelayScheduled，延迟/定时消息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 主题类型：
Normal，普通
GlobalOrder， 全局顺序
PartitionedOrder, 分区顺序
Transaction，事务消息
DelayScheduled，延迟/定时消息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置主题类型：
Normal，普通
GlobalOrder， 全局顺序
PartitionedOrder, 分区顺序
Transaction，事务消息
DelayScheduled，延迟/定时消息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 主题类型：
Normal，普通
GlobalOrder， 全局顺序
PartitionedOrder, 分区顺序
Transaction，事务消息
DelayScheduled，延迟/定时消息
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取分区个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Partitions 分区个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPartitions() const;

                    /**
                     * 设置分区个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _partitions 分区个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPartitions(const int64_t& _partitions);

                    /**
                     * 判断参数 Partitions 是否已赋值
                     * @return Partitions 是否已赋值
                     * 
                     */
                    bool PartitionsHasBeenSet() const;

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
                     * 获取是否导入
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Imported 是否导入
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetImported() const;

                    /**
                     * 设置是否导入
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imported 是否导入
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImported(const bool& _imported);

                    /**
                     * 判断参数 Imported 是否已赋值
                     * @return Imported 是否已赋值
                     * 
                     */
                    bool ImportedHasBeenSet() const;

                private:

                    /**
                     * 命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 主题名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 主题类型：
Normal，普通
GlobalOrder， 全局顺序
PartitionedOrder, 分区顺序
Transaction，事务消息
DelayScheduled，延迟/定时消息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 分区个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_partitions;
                    bool m_partitionsHasBeenSet;

                    /**
                     * 备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 是否导入
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_imported;
                    bool m_importedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQTOPICCONFIGOUTPUT_H_
