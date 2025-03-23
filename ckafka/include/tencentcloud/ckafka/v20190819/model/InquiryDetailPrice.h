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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_INQUIRYDETAILPRICE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_INQUIRYDETAILPRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/InquiryBasePrice.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 详细类别的价格
                */
                class InquiryDetailPrice : public AbstractModel
                {
                public:
                    InquiryDetailPrice();
                    ~InquiryDetailPrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取额外内网带宽价格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BandwidthPrice 额外内网带宽价格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InquiryBasePrice GetBandwidthPrice() const;

                    /**
                     * 设置额外内网带宽价格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bandwidthPrice 额外内网带宽价格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBandwidthPrice(const InquiryBasePrice& _bandwidthPrice);

                    /**
                     * 判断参数 BandwidthPrice 是否已赋值
                     * @return BandwidthPrice 是否已赋值
                     * 
                     */
                    bool BandwidthPriceHasBeenSet() const;

                    /**
                     * 获取硬盘价格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskPrice 硬盘价格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InquiryBasePrice GetDiskPrice() const;

                    /**
                     * 设置硬盘价格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diskPrice 硬盘价格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiskPrice(const InquiryBasePrice& _diskPrice);

                    /**
                     * 判断参数 DiskPrice 是否已赋值
                     * @return DiskPrice 是否已赋值
                     * 
                     */
                    bool DiskPriceHasBeenSet() const;

                    /**
                     * 获取额外分区价格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PartitionPrice 额外分区价格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InquiryBasePrice GetPartitionPrice() const;

                    /**
                     * 设置额外分区价格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _partitionPrice 额外分区价格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPartitionPrice(const InquiryBasePrice& _partitionPrice);

                    /**
                     * 判断参数 PartitionPrice 是否已赋值
                     * @return PartitionPrice 是否已赋值
                     * 
                     */
                    bool PartitionPriceHasBeenSet() const;

                    /**
                     * 获取额外Topic价格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicPrice 额外Topic价格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InquiryBasePrice GetTopicPrice() const;

                    /**
                     * 设置额外Topic价格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicPrice 额外Topic价格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopicPrice(const InquiryBasePrice& _topicPrice);

                    /**
                     * 判断参数 TopicPrice 是否已赋值
                     * @return TopicPrice 是否已赋值
                     * 
                     */
                    bool TopicPriceHasBeenSet() const;

                    /**
                     * 获取实例套餐价格
                     * @return InstanceTypePrice 实例套餐价格
                     * 
                     */
                    InquiryBasePrice GetInstanceTypePrice() const;

                    /**
                     * 设置实例套餐价格
                     * @param _instanceTypePrice 实例套餐价格
                     * 
                     */
                    void SetInstanceTypePrice(const InquiryBasePrice& _instanceTypePrice);

                    /**
                     * 判断参数 InstanceTypePrice 是否已赋值
                     * @return InstanceTypePrice 是否已赋值
                     * 
                     */
                    bool InstanceTypePriceHasBeenSet() const;

                private:

                    /**
                     * 额外内网带宽价格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InquiryBasePrice m_bandwidthPrice;
                    bool m_bandwidthPriceHasBeenSet;

                    /**
                     * 硬盘价格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InquiryBasePrice m_diskPrice;
                    bool m_diskPriceHasBeenSet;

                    /**
                     * 额外分区价格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InquiryBasePrice m_partitionPrice;
                    bool m_partitionPriceHasBeenSet;

                    /**
                     * 额外Topic价格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InquiryBasePrice m_topicPrice;
                    bool m_topicPriceHasBeenSet;

                    /**
                     * 实例套餐价格
                     */
                    InquiryBasePrice m_instanceTypePrice;
                    bool m_instanceTypePriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_INQUIRYDETAILPRICE_H_
