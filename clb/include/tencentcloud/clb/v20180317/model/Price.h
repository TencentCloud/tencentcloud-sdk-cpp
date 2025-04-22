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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_PRICE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_PRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/ItemPrice.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 表示负载均衡的价格
                */
                class Price : public AbstractModel
                {
                public:
                    Price();
                    ~Price() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取描述了实例价格。
                     * @return InstancePrice 描述了实例价格。
                     * 
                     */
                    ItemPrice GetInstancePrice() const;

                    /**
                     * 设置描述了实例价格。
                     * @param _instancePrice 描述了实例价格。
                     * 
                     */
                    void SetInstancePrice(const ItemPrice& _instancePrice);

                    /**
                     * 判断参数 InstancePrice 是否已赋值
                     * @return InstancePrice 是否已赋值
                     * 
                     */
                    bool InstancePriceHasBeenSet() const;

                    /**
                     * 获取描述了网络价格。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BandwidthPrice 描述了网络价格。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ItemPrice GetBandwidthPrice() const;

                    /**
                     * 设置描述了网络价格。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bandwidthPrice 描述了网络价格。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBandwidthPrice(const ItemPrice& _bandwidthPrice);

                    /**
                     * 判断参数 BandwidthPrice 是否已赋值
                     * @return BandwidthPrice 是否已赋值
                     * 
                     */
                    bool BandwidthPriceHasBeenSet() const;

                    /**
                     * 获取描述了lcu价格。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LcuPrice 描述了lcu价格。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ItemPrice GetLcuPrice() const;

                    /**
                     * 设置描述了lcu价格。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lcuPrice 描述了lcu价格。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLcuPrice(const ItemPrice& _lcuPrice);

                    /**
                     * 判断参数 LcuPrice 是否已赋值
                     * @return LcuPrice 是否已赋值
                     * 
                     */
                    bool LcuPriceHasBeenSet() const;

                private:

                    /**
                     * 描述了实例价格。
                     */
                    ItemPrice m_instancePrice;
                    bool m_instancePriceHasBeenSet;

                    /**
                     * 描述了网络价格。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ItemPrice m_bandwidthPrice;
                    bool m_bandwidthPriceHasBeenSet;

                    /**
                     * 描述了lcu价格。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ItemPrice m_lcuPrice;
                    bool m_lcuPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_PRICE_H_
