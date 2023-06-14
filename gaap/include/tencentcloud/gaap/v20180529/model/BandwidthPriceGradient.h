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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_BANDWIDTHPRICEGRADIENT_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_BANDWIDTHPRICEGRADIENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * 带宽梯度价格
                */
                class BandwidthPriceGradient : public AbstractModel
                {
                public:
                    BandwidthPriceGradient();
                    ~BandwidthPriceGradient() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取带宽范围。
                     * @return BandwidthRange 带宽范围。
                     * 
                     */
                    std::vector<int64_t> GetBandwidthRange() const;

                    /**
                     * 设置带宽范围。
                     * @param _bandwidthRange 带宽范围。
                     * 
                     */
                    void SetBandwidthRange(const std::vector<int64_t>& _bandwidthRange);

                    /**
                     * 判断参数 BandwidthRange 是否已赋值
                     * @return BandwidthRange 是否已赋值
                     * 
                     */
                    bool BandwidthRangeHasBeenSet() const;

                    /**
                     * 获取在对应带宽范围内的单宽单价，单位：元/Mbps/天。
                     * @return BandwidthUnitPrice 在对应带宽范围内的单宽单价，单位：元/Mbps/天。
                     * 
                     */
                    double GetBandwidthUnitPrice() const;

                    /**
                     * 设置在对应带宽范围内的单宽单价，单位：元/Mbps/天。
                     * @param _bandwidthUnitPrice 在对应带宽范围内的单宽单价，单位：元/Mbps/天。
                     * 
                     */
                    void SetBandwidthUnitPrice(const double& _bandwidthUnitPrice);

                    /**
                     * 判断参数 BandwidthUnitPrice 是否已赋值
                     * @return BandwidthUnitPrice 是否已赋值
                     * 
                     */
                    bool BandwidthUnitPriceHasBeenSet() const;

                    /**
                     * 获取带宽折扣价，单位：元/Mbps/天。
                     * @return DiscountBandwidthUnitPrice 带宽折扣价，单位：元/Mbps/天。
                     * 
                     */
                    double GetDiscountBandwidthUnitPrice() const;

                    /**
                     * 设置带宽折扣价，单位：元/Mbps/天。
                     * @param _discountBandwidthUnitPrice 带宽折扣价，单位：元/Mbps/天。
                     * 
                     */
                    void SetDiscountBandwidthUnitPrice(const double& _discountBandwidthUnitPrice);

                    /**
                     * 判断参数 DiscountBandwidthUnitPrice 是否已赋值
                     * @return DiscountBandwidthUnitPrice 是否已赋值
                     * 
                     */
                    bool DiscountBandwidthUnitPriceHasBeenSet() const;

                private:

                    /**
                     * 带宽范围。
                     */
                    std::vector<int64_t> m_bandwidthRange;
                    bool m_bandwidthRangeHasBeenSet;

                    /**
                     * 在对应带宽范围内的单宽单价，单位：元/Mbps/天。
                     */
                    double m_bandwidthUnitPrice;
                    bool m_bandwidthUnitPriceHasBeenSet;

                    /**
                     * 带宽折扣价，单位：元/Mbps/天。
                     */
                    double m_discountBandwidthUnitPrice;
                    bool m_discountBandwidthUnitPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_BANDWIDTHPRICEGRADIENT_H_
