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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DBINSTANCEPRICE_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DBINSTANCEPRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * 数据库实例价格
                */
                class DBInstancePrice : public AbstractModel
                {
                public:
                    DBInstancePrice();
                    ~DBInstancePrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取单价
                     * @return UnitPrice 单价
                     * 
                     */
                    double GetUnitPrice() const;

                    /**
                     * 设置单价
                     * @param _unitPrice 单价
                     * 
                     */
                    void SetUnitPrice(const double& _unitPrice);

                    /**
                     * 判断参数 UnitPrice 是否已赋值
                     * @return UnitPrice 是否已赋值
                     * 
                     */
                    bool UnitPriceHasBeenSet() const;

                    /**
                     * 获取原价
                     * @return OriginalPrice 原价
                     * 
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 设置原价
                     * @param _originalPrice 原价
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
                     * 获取折扣价
                     * @return DiscountPrice 折扣价
                     * 
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 设置折扣价
                     * @param _discountPrice 折扣价
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
                     * 单价
                     */
                    double m_unitPrice;
                    bool m_unitPriceHasBeenSet;

                    /**
                     * 原价
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * 折扣价
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DBINSTANCEPRICE_H_
