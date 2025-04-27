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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_PRICESCOPECONF_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_PRICESCOPECONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 预释放价格区间配置
                */
                class PriceScopeConf : public AbstractModel
                {
                public:
                    PriceScopeConf();
                    ~PriceScopeConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取最高价格 单位元
                     * @return MaxPrice 最高价格 单位元
                     * 
                     */
                    double GetMaxPrice() const;

                    /**
                     * 设置最高价格 单位元
                     * @param _maxPrice 最高价格 单位元
                     * 
                     */
                    void SetMaxPrice(const double& _maxPrice);

                    /**
                     * 判断参数 MaxPrice 是否已赋值
                     * @return MaxPrice 是否已赋值
                     * 
                     */
                    bool MaxPriceHasBeenSet() const;

                    /**
                     * 获取最低价格 单位元
                     * @return MinPrice 最低价格 单位元
                     * 
                     */
                    double GetMinPrice() const;

                    /**
                     * 设置最低价格 单位元
                     * @param _minPrice 最低价格 单位元
                     * 
                     */
                    void SetMinPrice(const double& _minPrice);

                    /**
                     * 判断参数 MinPrice 是否已赋值
                     * @return MinPrice 是否已赋值
                     * 
                     */
                    bool MinPriceHasBeenSet() const;

                    /**
                     * 获取价格幅度 单位元
                     * @return Price 价格幅度 单位元
                     * 
                     */
                    double GetPrice() const;

                    /**
                     * 设置价格幅度 单位元
                     * @param _price 价格幅度 单位元
                     * 
                     */
                    void SetPrice(const double& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取保证金 单位元
                     * @return DepositPrice 保证金 单位元
                     * 
                     */
                    double GetDepositPrice() const;

                    /**
                     * 设置保证金 单位元
                     * @param _depositPrice 保证金 单位元
                     * 
                     */
                    void SetDepositPrice(const double& _depositPrice);

                    /**
                     * 判断参数 DepositPrice 是否已赋值
                     * @return DepositPrice 是否已赋值
                     * 
                     */
                    bool DepositPriceHasBeenSet() const;

                private:

                    /**
                     * 最高价格 单位元
                     */
                    double m_maxPrice;
                    bool m_maxPriceHasBeenSet;

                    /**
                     * 最低价格 单位元
                     */
                    double m_minPrice;
                    bool m_minPriceHasBeenSet;

                    /**
                     * 价格幅度 单位元
                     */
                    double m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 保证金 单位元
                     */
                    double m_depositPrice;
                    bool m_depositPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_PRICESCOPECONF_H_
