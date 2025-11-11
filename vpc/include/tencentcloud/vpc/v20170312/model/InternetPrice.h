/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_INTERNETPRICE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_INTERNETPRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/InternetPriceDetail.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 公网询价出参
                */
                class InternetPrice : public AbstractModel
                {
                public:
                    InternetPrice();
                    ~InternetPrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取公网IP网络费询价详细参数。
                     * @return AddressPrice 公网IP网络费询价详细参数。
                     * 
                     */
                    InternetPriceDetail GetAddressPrice() const;

                    /**
                     * 设置公网IP网络费询价详细参数。
                     * @param _addressPrice 公网IP网络费询价详细参数。
                     * 
                     */
                    void SetAddressPrice(const InternetPriceDetail& _addressPrice);

                    /**
                     * 判断参数 AddressPrice 是否已赋值
                     * @return AddressPrice 是否已赋值
                     * 
                     */
                    bool AddressPriceHasBeenSet() const;

                    /**
                     * 获取公网IP资源费询价详细参数。仅原生IP价格查询返回。
                     * @return IPPrice 公网IP资源费询价详细参数。仅原生IP价格查询返回。
                     * 
                     */
                    InternetPriceDetail GetIPPrice() const;

                    /**
                     * 设置公网IP资源费询价详细参数。仅原生IP价格查询返回。
                     * @param _iPPrice 公网IP资源费询价详细参数。仅原生IP价格查询返回。
                     * 
                     */
                    void SetIPPrice(const InternetPriceDetail& _iPPrice);

                    /**
                     * 判断参数 IPPrice 是否已赋值
                     * @return IPPrice 是否已赋值
                     * 
                     */
                    bool IPPriceHasBeenSet() const;

                    /**
                     * 获取总原价，单位：元，仅预付费价格查询返回。
                     * @return OriginalPrice 总原价，单位：元，仅预付费价格查询返回。
                     * 
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 设置总原价，单位：元，仅预付费价格查询返回。
                     * @param _originalPrice 总原价，单位：元，仅预付费价格查询返回。
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
                     * 获取折扣后的总价格，单位：元。仅预付费价格查询返回。
                     * @return DiscountPrice 折扣后的总价格，单位：元。仅预付费价格查询返回。
                     * 
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 设置折扣后的总价格，单位：元。仅预付费价格查询返回。
                     * @param _discountPrice 折扣后的总价格，单位：元。仅预付费价格查询返回。
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
                     * 公网IP网络费询价详细参数。
                     */
                    InternetPriceDetail m_addressPrice;
                    bool m_addressPriceHasBeenSet;

                    /**
                     * 公网IP资源费询价详细参数。仅原生IP价格查询返回。
                     */
                    InternetPriceDetail m_iPPrice;
                    bool m_iPPriceHasBeenSet;

                    /**
                     * 总原价，单位：元，仅预付费价格查询返回。
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * 折扣后的总价格，单位：元。仅预付费价格查询返回。
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_INTERNETPRICE_H_
