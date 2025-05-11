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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_SUBPRODUCTPRICEDETAIL_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_SUBPRODUCTPRICEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Partners
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * 订单子产品价格详情
                */
                class SubProductPriceDetail : public AbstractModel
                {
                public:
                    SubProductPriceDetail();
                    ~SubProductPriceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子产品名称
                     * @return Name 子产品名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置子产品名称
                     * @param _name 子产品名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取折扣值，=100时表示无折扣，=85时表示8.5折
                     * @return DiscountValue 折扣值，=100时表示无折扣，=85时表示8.5折
                     * 
                     */
                    double GetDiscountValue() const;

                    /**
                     * 设置折扣值，=100时表示无折扣，=85时表示8.5折
                     * @param _discountValue 折扣值，=100时表示无折扣，=85时表示8.5折
                     * 
                     */
                    void SetDiscountValue(const double& _discountValue);

                    /**
                     * 判断参数 DiscountValue 是否已赋值
                     * @return DiscountValue 是否已赋值
                     * 
                     */
                    bool DiscountValueHasBeenSet() const;

                    /**
                     * 获取原价，折扣前价格，单位：分
                     * @return TotalCost 原价，折扣前价格，单位：分
                     * 
                     */
                    int64_t GetTotalCost() const;

                    /**
                     * 设置原价，折扣前价格，单位：分
                     * @param _totalCost 原价，折扣前价格，单位：分
                     * 
                     */
                    void SetTotalCost(const int64_t& _totalCost);

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     * 
                     */
                    bool TotalCostHasBeenSet() const;

                    /**
                     * 获取折后价，单位：分
                     * @return RealTotalCost 折后价，单位：分
                     * 
                     */
                    int64_t GetRealTotalCost() const;

                    /**
                     * 设置折后价，单位：分
                     * @param _realTotalCost 折后价，单位：分
                     * 
                     */
                    void SetRealTotalCost(const int64_t& _realTotalCost);

                    /**
                     * 判断参数 RealTotalCost 是否已赋值
                     * @return RealTotalCost 是否已赋值
                     * 
                     */
                    bool RealTotalCostHasBeenSet() const;

                private:

                    /**
                     * 子产品名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 折扣值，=100时表示无折扣，=85时表示8.5折
                     */
                    double m_discountValue;
                    bool m_discountValueHasBeenSet;

                    /**
                     * 原价，折扣前价格，单位：分
                     */
                    int64_t m_totalCost;
                    bool m_totalCostHasBeenSet;

                    /**
                     * 折后价，单位：分
                     */
                    int64_t m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_SUBPRODUCTPRICEDETAIL_H_
