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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_BLUEPRINTPRICE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_BLUEPRINTPRICE_H_

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
                * BlueprintPrice	自定义镜像的价格参数。
                */
                class BlueprintPrice : public AbstractModel
                {
                public:
                    BlueprintPrice();
                    ~BlueprintPrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜像单价，原价。单位元。
                     * @return OriginalBlueprintPrice 镜像单价，原价。单位元。
                     * 
                     */
                    double GetOriginalBlueprintPrice() const;

                    /**
                     * 设置镜像单价，原价。单位元。
                     * @param _originalBlueprintPrice 镜像单价，原价。单位元。
                     * 
                     */
                    void SetOriginalBlueprintPrice(const double& _originalBlueprintPrice);

                    /**
                     * 判断参数 OriginalBlueprintPrice 是否已赋值
                     * @return OriginalBlueprintPrice 是否已赋值
                     * 
                     */
                    bool OriginalBlueprintPriceHasBeenSet() const;

                    /**
                     * 获取镜像总价，原价。单位元。
                     * @return OriginalPrice 镜像总价，原价。单位元。
                     * 
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 设置镜像总价，原价。单位元。
                     * @param _originalPrice 镜像总价，原价。单位元。
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
                     * 获取镜像折扣后总价。单位元。
                     * @return DiscountPrice 镜像折扣后总价。单位元。
                     * 
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 设置镜像折扣后总价。单位元。
                     * @param _discountPrice 镜像折扣后总价。单位元。
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
                     * 镜像单价，原价。单位元。
                     */
                    double m_originalBlueprintPrice;
                    bool m_originalBlueprintPriceHasBeenSet;

                    /**
                     * 镜像总价，原价。单位元。
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * 折扣。
                     */
                    double m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * 镜像折扣后总价。单位元。
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_BLUEPRINTPRICE_H_
