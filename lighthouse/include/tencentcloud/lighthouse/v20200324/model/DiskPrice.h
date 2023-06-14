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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISKPRICE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISKPRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/DetailPrice.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 云硬盘价格
                */
                class DiskPrice : public AbstractModel
                {
                public:
                    DiskPrice();
                    ~DiskPrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云硬盘单价。
                     * @return OriginalDiskPrice 云硬盘单价。
                     * 
                     */
                    double GetOriginalDiskPrice() const;

                    /**
                     * 设置云硬盘单价。
                     * @param _originalDiskPrice 云硬盘单价。
                     * 
                     */
                    void SetOriginalDiskPrice(const double& _originalDiskPrice);

                    /**
                     * 判断参数 OriginalDiskPrice 是否已赋值
                     * @return OriginalDiskPrice 是否已赋值
                     * 
                     */
                    bool OriginalDiskPriceHasBeenSet() const;

                    /**
                     * 获取云硬盘总价。
                     * @return OriginalPrice 云硬盘总价。
                     * 
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 设置云硬盘总价。
                     * @param _originalPrice 云硬盘总价。
                     * 
                     */
                    void SetOriginalPrice(const double& _originalPrice);

                    /**
                     * 判断参数 OriginalPrice 是否已赋值
                     * @return OriginalPrice 是否已赋值
                     * 
                     */
                    bool OriginalPriceHasBeenSet() const;

                    /**
                     * 获取折扣。
                     * @return Discount 折扣。
                     * 
                     */
                    double GetDiscount() const;

                    /**
                     * 设置折扣。
                     * @param _discount 折扣。
                     * 
                     */
                    void SetDiscount(const double& _discount);

                    /**
                     * 判断参数 Discount 是否已赋值
                     * @return Discount 是否已赋值
                     * 
                     */
                    bool DiscountHasBeenSet() const;

                    /**
                     * 获取折后总价。
                     * @return DiscountPrice 折后总价。
                     * 
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 设置折后总价。
                     * @param _discountPrice 折后总价。
                     * 
                     */
                    void SetDiscountPrice(const double& _discountPrice);

                    /**
                     * 判断参数 DiscountPrice 是否已赋值
                     * @return DiscountPrice 是否已赋值
                     * 
                     */
                    bool DiscountPriceHasBeenSet() const;

                    /**
                     * 获取计费项目明细列表。
                     * @return DetailPrices 计费项目明细列表。
                     * 
                     */
                    std::vector<DetailPrice> GetDetailPrices() const;

                    /**
                     * 设置计费项目明细列表。
                     * @param _detailPrices 计费项目明细列表。
                     * 
                     */
                    void SetDetailPrices(const std::vector<DetailPrice>& _detailPrices);

                    /**
                     * 判断参数 DetailPrices 是否已赋值
                     * @return DetailPrices 是否已赋值
                     * 
                     */
                    bool DetailPricesHasBeenSet() const;

                private:

                    /**
                     * 云硬盘单价。
                     */
                    double m_originalDiskPrice;
                    bool m_originalDiskPriceHasBeenSet;

                    /**
                     * 云硬盘总价。
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * 折扣。
                     */
                    double m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * 折后总价。
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                    /**
                     * 计费项目明细列表。
                     */
                    std::vector<DetailPrice> m_detailPrices;
                    bool m_detailPricesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISKPRICE_H_
