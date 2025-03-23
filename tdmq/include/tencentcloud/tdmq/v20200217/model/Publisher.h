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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_PUBLISHER_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_PUBLISHER_H_

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
                * 生产者信息
                */
                class Publisher : public AbstractModel
                {
                public:
                    Publisher();
                    ~Publisher() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取生产者id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProducerId 生产者id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProducerId() const;

                    /**
                     * 设置生产者id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _producerId 生产者id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProducerId(const int64_t& _producerId);

                    /**
                     * 判断参数 ProducerId 是否已赋值
                     * @return ProducerId 是否已赋值
                     * 
                     */
                    bool ProducerIdHasBeenSet() const;

                    /**
                     * 获取生产者名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProducerName 生产者名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProducerName() const;

                    /**
                     * 设置生产者名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _producerName 生产者名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProducerName(const std::string& _producerName);

                    /**
                     * 判断参数 ProducerName 是否已赋值
                     * @return ProducerName 是否已赋值
                     * 
                     */
                    bool ProducerNameHasBeenSet() const;

                    /**
                     * 获取生产者地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Address 生产者地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置生产者地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _address 生产者地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取客户端版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientVersion 客户端版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClientVersion() const;

                    /**
                     * 设置客户端版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clientVersion 客户端版本
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
                     * 获取消息生产速率（条/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MsgRateIn 消息生产速率（条/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetMsgRateIn() const;

                    /**
                     * 设置消息生产速率（条/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _msgRateIn 消息生产速率（条/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMsgRateIn(const double& _msgRateIn);

                    /**
                     * 判断参数 MsgRateIn 是否已赋值
                     * @return MsgRateIn 是否已赋值
                     * 
                     */
                    bool MsgRateInHasBeenSet() const;

                    /**
                     * 获取消息生产吞吐速率（字节/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MsgThroughputIn 消息生产吞吐速率（字节/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetMsgThroughputIn() const;

                    /**
                     * 设置消息生产吞吐速率（字节/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _msgThroughputIn 消息生产吞吐速率（字节/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMsgThroughputIn(const double& _msgThroughputIn);

                    /**
                     * 判断参数 MsgThroughputIn 是否已赋值
                     * @return MsgThroughputIn 是否已赋值
                     * 
                     */
                    bool MsgThroughputInHasBeenSet() const;

                    /**
                     * 获取平均消息大小（字节）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AverageMsgSize 平均消息大小（字节）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetAverageMsgSize() const;

                    /**
                     * 设置平均消息大小（字节）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _averageMsgSize 平均消息大小（字节）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAverageMsgSize(const double& _averageMsgSize);

                    /**
                     * 判断参数 AverageMsgSize 是否已赋值
                     * @return AverageMsgSize 是否已赋值
                     * 
                     */
                    bool AverageMsgSizeHasBeenSet() const;

                    /**
                     * 获取连接时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConnectedSince 连接时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConnectedSince() const;

                    /**
                     * 设置连接时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _connectedSince 连接时间
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
                     * 获取生产者连接的主题分区号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Partition 生产者连接的主题分区号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPartition() const;

                    /**
                     * 设置生产者连接的主题分区号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _partition 生产者连接的主题分区号
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
                     * 生产者id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_producerId;
                    bool m_producerIdHasBeenSet;

                    /**
                     * 生产者名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_producerName;
                    bool m_producerNameHasBeenSet;

                    /**
                     * 生产者地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 客户端版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clientVersion;
                    bool m_clientVersionHasBeenSet;

                    /**
                     * 消息生产速率（条/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_msgRateIn;
                    bool m_msgRateInHasBeenSet;

                    /**
                     * 消息生产吞吐速率（字节/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_msgThroughputIn;
                    bool m_msgThroughputInHasBeenSet;

                    /**
                     * 平均消息大小（字节）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_averageMsgSize;
                    bool m_averageMsgSizeHasBeenSet;

                    /**
                     * 连接时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_connectedSince;
                    bool m_connectedSinceHasBeenSet;

                    /**
                     * 生产者连接的主题分区号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_partition;
                    bool m_partitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_PUBLISHER_H_
