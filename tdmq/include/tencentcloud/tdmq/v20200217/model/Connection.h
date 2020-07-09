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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CONNECTION_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CONNECTION_H_

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
                * 生产者连接实例
                */
                class Connection : public AbstractModel
                {
                public:
                    Connection();
                    ~Connection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取生产者地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Address 生产者地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置生产者地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Address 生产者地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取主题分区。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Partitions 主题分区。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetPartitions() const;

                    /**
                     * 设置主题分区。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Partitions 主题分区。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPartitions(const int64_t& _partitions);

                    /**
                     * 判断参数 Partitions 是否已赋值
                     * @return Partitions 是否已赋值
                     */
                    bool PartitionsHasBeenSet() const;

                    /**
                     * 获取生产者版本。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientVersion 生产者版本。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClientVersion() const;

                    /**
                     * 设置生产者版本。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClientVersion 生产者版本。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClientVersion(const std::string& _clientVersion);

                    /**
                     * 判断参数 ClientVersion 是否已赋值
                     * @return ClientVersion 是否已赋值
                     */
                    bool ClientVersionHasBeenSet() const;

                    /**
                     * 获取生产者名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProducerName 生产者名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProducerName() const;

                    /**
                     * 设置生产者名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProducerName 生产者名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProducerName(const std::string& _producerName);

                    /**
                     * 判断参数 ProducerName 是否已赋值
                     * @return ProducerName 是否已赋值
                     */
                    bool ProducerNameHasBeenSet() const;

                    /**
                     * 获取生产者ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProducerId 生产者ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProducerId() const;

                    /**
                     * 设置生产者ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProducerId 生产者ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProducerId(const std::string& _producerId);

                    /**
                     * 判断参数 ProducerId 是否已赋值
                     * @return ProducerId 是否已赋值
                     */
                    bool ProducerIdHasBeenSet() const;

                    /**
                     * 获取消息平均大小(byte)。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AverageMsgSize 消息平均大小(byte)。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAverageMsgSize() const;

                    /**
                     * 设置消息平均大小(byte)。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AverageMsgSize 消息平均大小(byte)。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAverageMsgSize(const std::string& _averageMsgSize);

                    /**
                     * 判断参数 AverageMsgSize 是否已赋值
                     * @return AverageMsgSize 是否已赋值
                     */
                    bool AverageMsgSizeHasBeenSet() const;

                    /**
                     * 获取生成速率(byte/秒)。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MsgThroughputIn 生成速率(byte/秒)。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMsgThroughputIn() const;

                    /**
                     * 设置生成速率(byte/秒)。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MsgThroughputIn 生成速率(byte/秒)。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMsgThroughputIn(const std::string& _msgThroughputIn);

                    /**
                     * 判断参数 MsgThroughputIn 是否已赋值
                     * @return MsgThroughputIn 是否已赋值
                     */
                    bool MsgThroughputInHasBeenSet() const;

                private:

                    /**
                     * 生产者地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 主题分区。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_partitions;
                    bool m_partitionsHasBeenSet;

                    /**
                     * 生产者版本。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clientVersion;
                    bool m_clientVersionHasBeenSet;

                    /**
                     * 生产者名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_producerName;
                    bool m_producerNameHasBeenSet;

                    /**
                     * 生产者ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_producerId;
                    bool m_producerIdHasBeenSet;

                    /**
                     * 消息平均大小(byte)。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_averageMsgSize;
                    bool m_averageMsgSizeHasBeenSet;

                    /**
                     * 生成速率(byte/秒)。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msgThroughputIn;
                    bool m_msgThroughputInHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CONNECTION_H_
