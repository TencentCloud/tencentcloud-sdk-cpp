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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEPUBLISHERSUMMARYRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEPUBLISHERSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribePublisherSummary返回参数结构体
                */
                class DescribePublisherSummaryResponse : public AbstractModel
                {
                public:
                    DescribePublisherSummaryResponse();
                    ~DescribePublisherSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取生产速率（条/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MsgRateIn 生产速率（条/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetMsgRateIn() const;

                    /**
                     * 判断参数 MsgRateIn 是否已赋值
                     * @return MsgRateIn 是否已赋值
                     * 
                     */
                    bool MsgRateInHasBeenSet() const;

                    /**
                     * 获取生产速率（字节/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MsgThroughputIn 生产速率（字节/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetMsgThroughputIn() const;

                    /**
                     * 判断参数 MsgThroughputIn 是否已赋值
                     * @return MsgThroughputIn 是否已赋值
                     * 
                     */
                    bool MsgThroughputInHasBeenSet() const;

                    /**
                     * 获取生产者数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublisherCount 生产者数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPublisherCount() const;

                    /**
                     * 判断参数 PublisherCount 是否已赋值
                     * @return PublisherCount 是否已赋值
                     * 
                     */
                    bool PublisherCountHasBeenSet() const;

                    /**
                     * 获取消息存储大小，以字节为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageSize 消息存储大小，以字节为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStorageSize() const;

                    /**
                     * 判断参数 StorageSize 是否已赋值
                     * @return StorageSize 是否已赋值
                     * 
                     */
                    bool StorageSizeHasBeenSet() const;

                private:

                    /**
                     * 生产速率（条/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_msgRateIn;
                    bool m_msgRateInHasBeenSet;

                    /**
                     * 生产速率（字节/秒）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_msgThroughputIn;
                    bool m_msgThroughputInHasBeenSet;

                    /**
                     * 生产者数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_publisherCount;
                    bool m_publisherCountHasBeenSet;

                    /**
                     * 消息存储大小，以字节为单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_storageSize;
                    bool m_storageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEPUBLISHERSUMMARYRESPONSE_H_
