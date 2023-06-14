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

#ifndef TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_INQUIRYPRICEBUYVSMREQUEST_H_
#define TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_INQUIRYPRICEBUYVSMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudhsm
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * InquiryPriceBuyVsm请求参数结构体
                */
                class InquiryPriceBuyVsmRequest : public AbstractModel
                {
                public:
                    InquiryPriceBuyVsmRequest();
                    ~InquiryPriceBuyVsmRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需购买实例的数量
                     * @return GoodsNum 需购买实例的数量
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置需购买实例的数量
                     * @param _goodsNum 需购买实例的数量
                     * 
                     */
                    void SetGoodsNum(const int64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取付费模式：0表示按需计费/后付费，1表示预付费
                     * @return PayMode 付费模式：0表示按需计费/后付费，1表示预付费
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置付费模式：0表示按需计费/后付费，1表示预付费
                     * @param _payMode 付费模式：0表示按需计费/后付费，1表示预付费
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取商品的时间大小，整型参数，举例：当TimeSpan为1，TImeUnit为m时，表示询价购买时长为1个月时的价格
                     * @return TimeSpan 商品的时间大小，整型参数，举例：当TimeSpan为1，TImeUnit为m时，表示询价购买时长为1个月时的价格
                     * 
                     */
                    std::string GetTimeSpan() const;

                    /**
                     * 设置商品的时间大小，整型参数，举例：当TimeSpan为1，TImeUnit为m时，表示询价购买时长为1个月时的价格
                     * @param _timeSpan 商品的时间大小，整型参数，举例：当TimeSpan为1，TImeUnit为m时，表示询价购买时长为1个月时的价格
                     * 
                     */
                    void SetTimeSpan(const std::string& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取商品的时间单位，m表示月，y表示年
                     * @return TimeUnit 商品的时间单位，m表示月，y表示年
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置商品的时间单位，m表示月，y表示年
                     * @param _timeUnit 商品的时间单位，m表示月，y表示年
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取货币类型，默认为CNY
                     * @return Currency 货币类型，默认为CNY
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置货币类型，默认为CNY
                     * @param _currency 货币类型，默认为CNY
                     * 
                     */
                    void SetCurrency(const std::string& _currency);

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     * 
                     */
                    bool CurrencyHasBeenSet() const;

                    /**
                     * 获取默认为CREATE，可选RENEW
                     * @return Type 默认为CREATE，可选RENEW
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置默认为CREATE，可选RENEW
                     * @param _type 默认为CREATE，可选RENEW
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Hsm服务类型，可选值virtualization、physical、GHSM、EHSM、SHSM
                     * @return HsmType Hsm服务类型，可选值virtualization、physical、GHSM、EHSM、SHSM
                     * 
                     */
                    std::string GetHsmType() const;

                    /**
                     * 设置Hsm服务类型，可选值virtualization、physical、GHSM、EHSM、SHSM
                     * @param _hsmType Hsm服务类型，可选值virtualization、physical、GHSM、EHSM、SHSM
                     * 
                     */
                    void SetHsmType(const std::string& _hsmType);

                    /**
                     * 判断参数 HsmType 是否已赋值
                     * @return HsmType 是否已赋值
                     * 
                     */
                    bool HsmTypeHasBeenSet() const;

                private:

                    /**
                     * 需购买实例的数量
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * 付费模式：0表示按需计费/后付费，1表示预付费
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 商品的时间大小，整型参数，举例：当TimeSpan为1，TImeUnit为m时，表示询价购买时长为1个月时的价格
                     */
                    std::string m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 商品的时间单位，m表示月，y表示年
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 货币类型，默认为CNY
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * 默认为CREATE，可选RENEW
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Hsm服务类型，可选值virtualization、physical、GHSM、EHSM、SHSM
                     */
                    std::string m_hsmType;
                    bool m_hsmTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_INQUIRYPRICEBUYVSMREQUEST_H_
