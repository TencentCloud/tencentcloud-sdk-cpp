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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICESCALEOUTINSTANCERESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICESCALEOUTINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/PriceResource.h>
#include <tencentcloud/emr/v20190103/model/EmrPrice.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * InquiryPriceScaleOutInstance返回参数结构体
                */
                class InquiryPriceScaleOutInstanceResponse : public AbstractModel
                {
                public:
                    InquiryPriceScaleOutInstanceResponse();
                    ~InquiryPriceScaleOutInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取原价，单位为元。
                     * @return OriginalCost 原价，单位为元。
                     * 
                     */
                    std::string GetOriginalCost() const;

                    /**
                     * 判断参数 OriginalCost 是否已赋值
                     * @return OriginalCost 是否已赋值
                     * 
                     */
                    bool OriginalCostHasBeenSet() const;

                    /**
                     * 获取折扣价，单位为元。
                     * @return DiscountCost 折扣价，单位为元。
                     * 
                     */
                    std::string GetDiscountCost() const;

                    /**
                     * 判断参数 DiscountCost 是否已赋值
                     * @return DiscountCost 是否已赋值
                     * 
                     */
                    bool DiscountCostHasBeenSet() const;

                    /**
                     * 获取扩容的时间单位。取值范围：
<li>s：表示秒。</li>
<li>m：表示月份。</li>
                     * @return Unit 扩容的时间单位。取值范围：
<li>s：表示秒。</li>
<li>m：表示月份。</li>
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取询价的节点规格。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PriceSpec 询价的节点规格。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PriceResource GetPriceSpec() const;

                    /**
                     * 判断参数 PriceSpec 是否已赋值
                     * @return PriceSpec 是否已赋值
                     * 
                     */
                    bool PriceSpecHasBeenSet() const;

                    /**
                     * 获取对应入参MultipleResources中多个规格的询价结果，其它出参返回的是第一个规格的询价结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MultipleEmrPrice 对应入参MultipleResources中多个规格的询价结果，其它出参返回的是第一个规格的询价结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EmrPrice> GetMultipleEmrPrice() const;

                    /**
                     * 判断参数 MultipleEmrPrice 是否已赋值
                     * @return MultipleEmrPrice 是否已赋值
                     * 
                     */
                    bool MultipleEmrPriceHasBeenSet() const;

                private:

                    /**
                     * 原价，单位为元。
                     */
                    std::string m_originalCost;
                    bool m_originalCostHasBeenSet;

                    /**
                     * 折扣价，单位为元。
                     */
                    std::string m_discountCost;
                    bool m_discountCostHasBeenSet;

                    /**
                     * 扩容的时间单位。取值范围：
<li>s：表示秒。</li>
<li>m：表示月份。</li>
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * 询价的节点规格。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PriceResource m_priceSpec;
                    bool m_priceSpecHasBeenSet;

                    /**
                     * 对应入参MultipleResources中多个规格的询价结果，其它出参返回的是第一个规格的询价结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EmrPrice> m_multipleEmrPrice;
                    bool m_multipleEmrPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICESCALEOUTINSTANCERESPONSE_H_
