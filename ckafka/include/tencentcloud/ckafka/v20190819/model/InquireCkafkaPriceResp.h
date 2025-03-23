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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_INQUIRECKAFKAPRICERESP_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_INQUIRECKAFKAPRICERESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/InquiryPrice.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * InquireCkafkaPrice接口询价返回值
                */
                class InquireCkafkaPriceResp : public AbstractModel
                {
                public:
                    InquireCkafkaPriceResp();
                    ~InquireCkafkaPriceResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例价格
                     * @return InstancePrice 实例价格
                     * 
                     */
                    InquiryPrice GetInstancePrice() const;

                    /**
                     * 设置实例价格
                     * @param _instancePrice 实例价格
                     * 
                     */
                    void SetInstancePrice(const InquiryPrice& _instancePrice);

                    /**
                     * 判断参数 InstancePrice 是否已赋值
                     * @return InstancePrice 是否已赋值
                     * 
                     */
                    bool InstancePriceHasBeenSet() const;

                    /**
                     * 获取公网带宽价格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicNetworkBandwidthPrice 公网带宽价格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InquiryPrice GetPublicNetworkBandwidthPrice() const;

                    /**
                     * 设置公网带宽价格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicNetworkBandwidthPrice 公网带宽价格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicNetworkBandwidthPrice(const InquiryPrice& _publicNetworkBandwidthPrice);

                    /**
                     * 判断参数 PublicNetworkBandwidthPrice 是否已赋值
                     * @return PublicNetworkBandwidthPrice 是否已赋值
                     * 
                     */
                    bool PublicNetworkBandwidthPriceHasBeenSet() const;

                private:

                    /**
                     * 实例价格
                     */
                    InquiryPrice m_instancePrice;
                    bool m_instancePriceHasBeenSet;

                    /**
                     * 公网带宽价格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InquiryPrice m_publicNetworkBandwidthPrice;
                    bool m_publicNetworkBandwidthPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_INQUIRECKAFKAPRICERESP_H_
