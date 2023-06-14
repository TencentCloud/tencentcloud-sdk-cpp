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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DETAILPRICE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DETAILPRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 计费项目明细。
                */
                class DetailPrice : public AbstractModel
                {
                public:
                    DetailPrice();
                    ~DetailPrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取描述计费项目名称，目前取值
<li>"DiskSpace"代表云硬盘空间收费项。</li>
<li>"DiskBackupQuota"代表云硬盘备份点配额收费项。</li>
                     * @return PriceName 描述计费项目名称，目前取值
<li>"DiskSpace"代表云硬盘空间收费项。</li>
<li>"DiskBackupQuota"代表云硬盘备份点配额收费项。</li>
                     * 
                     */
                    std::string GetPriceName() const;

                    /**
                     * 设置描述计费项目名称，目前取值
<li>"DiskSpace"代表云硬盘空间收费项。</li>
<li>"DiskBackupQuota"代表云硬盘备份点配额收费项。</li>
                     * @param _priceName 描述计费项目名称，目前取值
<li>"DiskSpace"代表云硬盘空间收费项。</li>
<li>"DiskBackupQuota"代表云硬盘备份点配额收费项。</li>
                     * 
                     */
                    void SetPriceName(const std::string& _priceName);

                    /**
                     * 判断参数 PriceName 是否已赋值
                     * @return PriceName 是否已赋值
                     * 
                     */
                    bool PriceNameHasBeenSet() const;

                    /**
                     * 获取云硬盘计费项维度单价。
                     * @return OriginUnitPrice 云硬盘计费项维度单价。
                     * 
                     */
                    double GetOriginUnitPrice() const;

                    /**
                     * 设置云硬盘计费项维度单价。
                     * @param _originUnitPrice 云硬盘计费项维度单价。
                     * 
                     */
                    void SetOriginUnitPrice(const double& _originUnitPrice);

                    /**
                     * 判断参数 OriginUnitPrice 是否已赋值
                     * @return OriginUnitPrice 是否已赋值
                     * 
                     */
                    bool OriginUnitPriceHasBeenSet() const;

                    /**
                     * 获取云硬盘计费项维度总价。
                     * @return OriginalPrice 云硬盘计费项维度总价。
                     * 
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 设置云硬盘计费项维度总价。
                     * @param _originalPrice 云硬盘计费项维度总价。
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
                     * 获取云硬盘在计费项维度折扣。
                     * @return Discount 云硬盘在计费项维度折扣。
                     * 
                     */
                    double GetDiscount() const;

                    /**
                     * 设置云硬盘在计费项维度折扣。
                     * @param _discount 云硬盘在计费项维度折扣。
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
                     * 获取云硬盘在计费项维度折后总价。
                     * @return DiscountPrice 云硬盘在计费项维度折后总价。
                     * 
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 设置云硬盘在计费项维度折后总价。
                     * @param _discountPrice 云硬盘在计费项维度折后总价。
                     * 
                     */
                    void SetDiscountPrice(const double& _discountPrice);

                    /**
                     * 判断参数 DiscountPrice 是否已赋值
                     * @return DiscountPrice 是否已赋值
                     * 
                     */
                    bool DiscountPriceHasBeenSet() const;

                private:

                    /**
                     * 描述计费项目名称，目前取值
<li>"DiskSpace"代表云硬盘空间收费项。</li>
<li>"DiskBackupQuota"代表云硬盘备份点配额收费项。</li>
                     */
                    std::string m_priceName;
                    bool m_priceNameHasBeenSet;

                    /**
                     * 云硬盘计费项维度单价。
                     */
                    double m_originUnitPrice;
                    bool m_originUnitPriceHasBeenSet;

                    /**
                     * 云硬盘计费项维度总价。
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * 云硬盘在计费项维度折扣。
                     */
                    double m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * 云硬盘在计费项维度折后总价。
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DETAILPRICE_H_
