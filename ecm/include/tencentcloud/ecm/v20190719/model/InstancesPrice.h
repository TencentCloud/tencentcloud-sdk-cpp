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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCESPRICE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCESPRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/InstancePricesPartDetail.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 实例价格信息
                */
                class InstancesPrice : public AbstractModel
                {
                public:
                    InstancesPrice();
                    ~InstancesPrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分部描述实例子维度的价格
                     * @return InstancePricesPartDetail 分部描述实例子维度的价格
                     * 
                     */
                    InstancePricesPartDetail GetInstancePricesPartDetail() const;

                    /**
                     * 设置分部描述实例子维度的价格
                     * @param _instancePricesPartDetail 分部描述实例子维度的价格
                     * 
                     */
                    void SetInstancePricesPartDetail(const InstancePricesPartDetail& _instancePricesPartDetail);

                    /**
                     * 判断参数 InstancePricesPartDetail 是否已赋值
                     * @return InstancePricesPartDetail 是否已赋值
                     * 
                     */
                    bool InstancePricesPartDetailHasBeenSet() const;

                    /**
                     * 获取实例总价折扣
                     * @return Discount 实例总价折扣
                     * 
                     */
                    uint64_t GetDiscount() const;

                    /**
                     * 设置实例总价折扣
                     * @param _discount 实例总价折扣
                     * 
                     */
                    void SetDiscount(const uint64_t& _discount);

                    /**
                     * 判断参数 Discount 是否已赋值
                     * @return Discount 是否已赋值
                     * 
                     */
                    bool DiscountHasBeenSet() const;

                    /**
                     * 获取折扣后价格
                     * @return DiscountPrice 折扣后价格
                     * 
                     */
                    uint64_t GetDiscountPrice() const;

                    /**
                     * 设置折扣后价格
                     * @param _discountPrice 折扣后价格
                     * 
                     */
                    void SetDiscountPrice(const uint64_t& _discountPrice);

                    /**
                     * 判断参数 DiscountPrice 是否已赋值
                     * @return DiscountPrice 是否已赋值
                     * 
                     */
                    bool DiscountPriceHasBeenSet() const;

                    /**
                     * 获取折扣前价格，原始总价
                     * @return OriginalPrice 折扣前价格，原始总价
                     * 
                     */
                    uint64_t GetOriginalPrice() const;

                    /**
                     * 设置折扣前价格，原始总价
                     * @param _originalPrice 折扣前价格，原始总价
                     * 
                     */
                    void SetOriginalPrice(const uint64_t& _originalPrice);

                    /**
                     * 判断参数 OriginalPrice 是否已赋值
                     * @return OriginalPrice 是否已赋值
                     * 
                     */
                    bool OriginalPriceHasBeenSet() const;

                private:

                    /**
                     * 分部描述实例子维度的价格
                     */
                    InstancePricesPartDetail m_instancePricesPartDetail;
                    bool m_instancePricesPartDetailHasBeenSet;

                    /**
                     * 实例总价折扣
                     */
                    uint64_t m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * 折扣后价格
                     */
                    uint64_t m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                    /**
                     * 折扣前价格，原始总价
                     */
                    uint64_t m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCESPRICE_H_
