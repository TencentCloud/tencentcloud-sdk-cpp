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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_RENEWPRICEDETAIL_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_RENEWPRICEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 节点子项续费询价明细
                */
                class RenewPriceDetail : public AbstractModel
                {
                public:
                    RenewPriceDetail();
                    ~RenewPriceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取计费项名称
                     * @return BillingName 计费项名称
                     * 
                     */
                    std::string GetBillingName() const;

                    /**
                     * 设置计费项名称
                     * @param _billingName 计费项名称
                     * 
                     */
                    void SetBillingName(const std::string& _billingName);

                    /**
                     * 判断参数 BillingName 是否已赋值
                     * @return BillingName 是否已赋值
                     * 
                     */
                    bool BillingNameHasBeenSet() const;

                    /**
                     * 获取折扣
                     * @return Policy 折扣
                     * 
                     */
                    double GetPolicy() const;

                    /**
                     * 设置折扣
                     * @param _policy 折扣
                     * 
                     */
                    void SetPolicy(const double& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取数量
                     * @return Quantity 数量
                     * 
                     */
                    int64_t GetQuantity() const;

                    /**
                     * 设置数量
                     * @param _quantity 数量
                     * 
                     */
                    void SetQuantity(const int64_t& _quantity);

                    /**
                     * 判断参数 Quantity 是否已赋值
                     * @return Quantity 是否已赋值
                     * 
                     */
                    bool QuantityHasBeenSet() const;

                    /**
                     * 获取原价
                     * @return OriginalCost 原价
                     * 
                     */
                    double GetOriginalCost() const;

                    /**
                     * 设置原价
                     * @param _originalCost 原价
                     * 
                     */
                    void SetOriginalCost(const double& _originalCost);

                    /**
                     * 判断参数 OriginalCost 是否已赋值
                     * @return OriginalCost 是否已赋值
                     * 
                     */
                    bool OriginalCostHasBeenSet() const;

                    /**
                     * 获取折扣价
                     * @return DiscountCost 折扣价
                     * 
                     */
                    double GetDiscountCost() const;

                    /**
                     * 设置折扣价
                     * @param _discountCost 折扣价
                     * 
                     */
                    void SetDiscountCost(const double& _discountCost);

                    /**
                     * 判断参数 DiscountCost 是否已赋值
                     * @return DiscountCost 是否已赋值
                     * 
                     */
                    bool DiscountCostHasBeenSet() const;

                private:

                    /**
                     * 计费项名称
                     */
                    std::string m_billingName;
                    bool m_billingNameHasBeenSet;

                    /**
                     * 折扣
                     */
                    double m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * 数量
                     */
                    int64_t m_quantity;
                    bool m_quantityHasBeenSet;

                    /**
                     * 原价
                     */
                    double m_originalCost;
                    bool m_originalCostHasBeenSet;

                    /**
                     * 折扣价
                     */
                    double m_discountCost;
                    bool m_discountCostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_RENEWPRICEDETAIL_H_
