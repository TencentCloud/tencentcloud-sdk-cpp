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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_EMRPRICE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_EMRPRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/PriceResource.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Emr询价描述
                */
                class EmrPrice : public AbstractModel
                {
                public:
                    EmrPrice();
                    ~EmrPrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取刊例价格
                     * @return OriginalCost 刊例价格
                     * 
                     */
                    std::string GetOriginalCost() const;

                    /**
                     * 设置刊例价格
                     * @param _originalCost 刊例价格
                     * 
                     */
                    void SetOriginalCost(const std::string& _originalCost);

                    /**
                     * 判断参数 OriginalCost 是否已赋值
                     * @return OriginalCost 是否已赋值
                     * 
                     */
                    bool OriginalCostHasBeenSet() const;

                    /**
                     * 获取折扣价格
                     * @return DiscountCost 折扣价格
                     * 
                     */
                    std::string GetDiscountCost() const;

                    /**
                     * 设置折扣价格
                     * @param _discountCost 折扣价格
                     * 
                     */
                    void SetDiscountCost(const std::string& _discountCost);

                    /**
                     * 判断参数 DiscountCost 是否已赋值
                     * @return DiscountCost 是否已赋值
                     * 
                     */
                    bool DiscountCostHasBeenSet() const;

                    /**
                     * 获取单位
                     * @return Unit 单位
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置单位
                     * @param _unit 单位
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取询价配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PriceSpec 询价配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PriceResource GetPriceSpec() const;

                    /**
                     * 设置询价配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _priceSpec 询价配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPriceSpec(const PriceResource& _priceSpec);

                    /**
                     * 判断参数 PriceSpec 是否已赋值
                     * @return PriceSpec 是否已赋值
                     * 
                     */
                    bool PriceSpecHasBeenSet() const;

                    /**
                     * 获取是否支持竞价实例
                     * @return SupportSpotPaid 是否支持竞价实例
                     * 
                     */
                    bool GetSupportSpotPaid() const;

                    /**
                     * 设置是否支持竞价实例
                     * @param _supportSpotPaid 是否支持竞价实例
                     * 
                     */
                    void SetSupportSpotPaid(const bool& _supportSpotPaid);

                    /**
                     * 判断参数 SupportSpotPaid 是否已赋值
                     * @return SupportSpotPaid 是否已赋值
                     * 
                     */
                    bool SupportSpotPaidHasBeenSet() const;

                private:

                    /**
                     * 刊例价格
                     */
                    std::string m_originalCost;
                    bool m_originalCostHasBeenSet;

                    /**
                     * 折扣价格
                     */
                    std::string m_discountCost;
                    bool m_discountCostHasBeenSet;

                    /**
                     * 单位
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * 询价配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PriceResource m_priceSpec;
                    bool m_priceSpecHasBeenSet;

                    /**
                     * 是否支持竞价实例
                     */
                    bool m_supportSpotPaid;
                    bool m_supportSpotPaidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_EMRPRICE_H_
