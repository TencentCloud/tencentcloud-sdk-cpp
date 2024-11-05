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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CONSUMER_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CONSUMER_H_

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
                * 消费者
                */
                class Consumer : public AbstractModel
                {
                public:
                    Consumer();
                    ~Consumer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取消费者开始连接的时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConnectedSince 消费者开始连接的时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConnectedSince() const;

                    /**
                     * 设置消费者开始连接的时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _connectedSince 消费者开始连接的时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConnectedSince(const std::string& _connectedSince);

                    /**
                     * 判断参数 ConnectedSince 是否已赋值
                     * @return ConnectedSince 是否已赋值
                     * 
                     */
                    bool ConnectedSinceHasBeenSet() const;

                    /**
                     * 获取消费者地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConsumerAddr 消费者地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConsumerAddr() const;

                    /**
                     * 设置消费者地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _consumerAddr 消费者地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConsumerAddr(const std::string& _consumerAddr);

                    /**
                     * 判断参数 ConsumerAddr 是否已赋值
                     * @return ConsumerAddr 是否已赋值
                     * 
                     */
                    bool ConsumerAddrHasBeenSet() const;

                    /**
                     * 获取消费者名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConsumerName 消费者名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConsumerName() const;

                    /**
                     * 设置消费者名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _consumerName 消费者名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConsumerName(const std::string& _consumerName);

                    /**
                     * 判断参数 ConsumerName 是否已赋值
                     * @return ConsumerName 是否已赋值
                     * 
                     */
                    bool ConsumerNameHasBeenSet() const;

                    /**
                     * 获取消费者版本。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientVersion 消费者版本。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClientVersion() const;

                    /**
                     * 设置消费者版本。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clientVersion 消费者版本。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClientVersion(const std::string& _clientVersion);

                    /**
                     * 判断参数 ClientVersion 是否已赋值
                     * @return ClientVersion 是否已赋值
                     * 
                     */
                    bool ClientVersionHasBeenSet() const;

                    /**
                     * 获取消费者连接的主题分区号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Partition 消费者连接的主题分区号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPartition() const;

                    /**
                     * 设置消费者连接的主题分区号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _partition 消费者连接的主题分区号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPartition(const int64_t& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     * 
                     */
                    bool PartitionHasBeenSet() const;

                private:

                    /**
                     * 消费者开始连接的时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_connectedSince;
                    bool m_connectedSinceHasBeenSet;

                    /**
                     * 消费者地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_consumerAddr;
                    bool m_consumerAddrHasBeenSet;

                    /**
                     * 消费者名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_consumerName;
                    bool m_consumerNameHasBeenSet;

                    /**
                     * 消费者版本。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clientVersion;
                    bool m_clientVersionHasBeenSet;

                    /**
                     * 消费者连接的主题分区号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_partition;
                    bool m_partitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CONSUMER_H_
