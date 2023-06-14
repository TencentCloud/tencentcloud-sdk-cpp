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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEBUNDLEDISCOUNTRESPONSE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEBUNDLEDISCOUNTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/DiscountDetail.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeBundleDiscount返回参数结构体
                */
                class DescribeBundleDiscountResponse : public AbstractModel
                {
                public:
                    DescribeBundleDiscountResponse();
                    ~DescribeBundleDiscountResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取币种：CNY人民币，USD 美元。
                     * @return Currency 币种：CNY人民币，USD 美元。
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     * 
                     */
                    bool CurrencyHasBeenSet() const;

                    /**
                     * 获取折扣梯度详情，每个梯度包含的信息有：时长，折扣数，总价，折扣价，折扣详情（用户折扣、官网折扣、最终折扣）。
                     * @return DiscountDetail 折扣梯度详情，每个梯度包含的信息有：时长，折扣数，总价，折扣价，折扣详情（用户折扣、官网折扣、最终折扣）。
                     * 
                     */
                    std::vector<DiscountDetail> GetDiscountDetail() const;

                    /**
                     * 判断参数 DiscountDetail 是否已赋值
                     * @return DiscountDetail 是否已赋值
                     * 
                     */
                    bool DiscountDetailHasBeenSet() const;

                private:

                    /**
                     * 币种：CNY人民币，USD 美元。
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * 折扣梯度详情，每个梯度包含的信息有：时长，折扣数，总价，折扣价，折扣详情（用户折扣、官网折扣、最终折扣）。
                     */
                    std::vector<DiscountDetail> m_discountDetail;
                    bool m_discountDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEBUNDLEDISCOUNTRESPONSE_H_
