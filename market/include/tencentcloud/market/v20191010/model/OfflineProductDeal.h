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

#ifndef TENCENTCLOUD_MARKET_V20191010_MODEL_OFFLINEPRODUCTDEAL_H_
#define TENCENTCLOUD_MARKET_V20191010_MODEL_OFFLINEPRODUCTDEAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Market
    {
        namespace V20191010
        {
            namespace Model
            {
                /**
                * 线下产品订单
                */
                class OfflineProductDeal : public AbstractModel
                {
                public:
                    OfflineProductDeal();
                    ~OfflineProductDeal() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取产品标签
                     * @return ProductCode 产品标签
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置产品标签
                     * @param ProductCode 产品标签
                     */
                    void SetProductCode(const std::string& _productCode);

                    /**
                     * 判断参数 ProductCode 是否已赋值
                     * @return ProductCode 是否已赋值
                     */
                    bool ProductCodeHasBeenSet() const;

                    /**
                     * 获取子产品标签
                     * @return SubProductCode 子产品标签
                     */
                    std::string GetSubProductCode() const;

                    /**
                     * 设置子产品标签
                     * @param SubProductCode 子产品标签
                     */
                    void SetSubProductCode(const std::string& _subProductCode);

                    /**
                     * 判断参数 SubProductCode 是否已赋值
                     * @return SubProductCode 是否已赋值
                     */
                    bool SubProductCodeHasBeenSet() const;

                    /**
                     * 获取计费项
                     * @return BillingItemCode 计费项
                     */
                    std::string GetBillingItemCode() const;

                    /**
                     * 设置计费项
                     * @param BillingItemCode 计费项
                     */
                    void SetBillingItemCode(const std::string& _billingItemCode);

                    /**
                     * 判断参数 BillingItemCode 是否已赋值
                     * @return BillingItemCode 是否已赋值
                     */
                    bool BillingItemCodeHasBeenSet() const;

                    /**
                     * 获取计费细项
                     * @return SubBillingItemCode 计费细项
                     */
                    std::string GetSubBillingItemCode() const;

                    /**
                     * 设置计费细项
                     * @param SubBillingItemCode 计费细项
                     */
                    void SetSubBillingItemCode(const std::string& _subBillingItemCode);

                    /**
                     * 判断参数 SubBillingItemCode 是否已赋值
                     * @return SubBillingItemCode 是否已赋值
                     */
                    bool SubBillingItemCodeHasBeenSet() const;

                    /**
                     * 获取单价（单位：分）
                     * @return UnitPrice 单价（单位：分）
                     */
                    double GetUnitPrice() const;

                    /**
                     * 设置单价（单位：分）
                     * @param UnitPrice 单价（单位：分）
                     */
                    void SetUnitPrice(const double& _unitPrice);

                    /**
                     * 判断参数 UnitPrice 是否已赋值
                     * @return UnitPrice 是否已赋值
                     */
                    bool UnitPriceHasBeenSet() const;

                    /**
                     * 获取用量
                     * @return Dosage 用量
                     */
                    double GetDosage() const;

                    /**
                     * 设置用量
                     * @param Dosage 用量
                     */
                    void SetDosage(const double& _dosage);

                    /**
                     * 判断参数 Dosage 是否已赋值
                     * @return Dosage 是否已赋值
                     */
                    bool DosageHasBeenSet() const;

                    /**
                     * 获取用量单位
                     * @return DosageUnit 用量单位
                     */
                    std::string GetDosageUnit() const;

                    /**
                     * 设置用量单位
                     * @param DosageUnit 用量单位
                     */
                    void SetDosageUnit(const std::string& _dosageUnit);

                    /**
                     * 判断参数 DosageUnit 是否已赋值
                     * @return DosageUnit 是否已赋值
                     */
                    bool DosageUnitHasBeenSet() const;

                    /**
                     * 获取商品的时间大小，当TimeUnit 是package时，timeSpan 只能传1。当TimeUnit是year；month；day；hour；minute；second，传具体时长。
                     * @return TimeSpan 商品的时间大小，当TimeUnit 是package时，timeSpan 只能传1。当TimeUnit是year；month；day；hour；minute；second，传具体时长。
                     */
                    double GetTimeSpan() const;

                    /**
                     * 设置商品的时间大小，当TimeUnit 是package时，timeSpan 只能传1。当TimeUnit是year；month；day；hour；minute；second，传具体时长。
                     * @param TimeSpan 商品的时间大小，当TimeUnit 是package时，timeSpan 只能传1。当TimeUnit是year；month；day；hour；minute；second，传具体时长。
                     */
                    void SetTimeSpan(const double& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取商品的时间单位：year:年；month:月；day:日；hour:小时；minute:分钟；second:秒; package:与价格无关,一次性购买的产品传package
                     * @return TimeUnit 商品的时间单位：year:年；month:月；day:日；hour:小时；minute:分钟；second:秒; package:与价格无关,一次性购买的产品传package
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置商品的时间单位：year:年；month:月；day:日；hour:小时；minute:分钟；second:秒; package:与价格无关,一次性购买的产品传package
                     * @param TimeUnit 商品的时间单位：year:年；month:月；day:日；hour:小时；minute:分钟；second:秒; package:与价格无关,一次性购买的产品传package
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取原价 （单位：分）OriginPrice=round(UnitPrice * Dosage * TimeSpan)
                     * @return OriginPrice 原价 （单位：分）OriginPrice=round(UnitPrice * Dosage * TimeSpan)
                     */
                    int64_t GetOriginPrice() const;

                    /**
                     * 设置原价 （单位：分）OriginPrice=round(UnitPrice * Dosage * TimeSpan)
                     * @param OriginPrice 原价 （单位：分）OriginPrice=round(UnitPrice * Dosage * TimeSpan)
                     */
                    void SetOriginPrice(const int64_t& _originPrice);

                    /**
                     * 判断参数 OriginPrice 是否已赋值
                     * @return OriginPrice 是否已赋值
                     */
                    bool OriginPriceHasBeenSet() const;

                    /**
                     * 获取折扣百分比，传入0-100的值
                     * @return Discount 折扣百分比，传入0-100的值
                     */
                    double GetDiscount() const;

                    /**
                     * 设置折扣百分比，传入0-100的值
                     * @param Discount 折扣百分比，传入0-100的值
                     */
                    void SetDiscount(const double& _discount);

                    /**
                     * 判断参数 Discount 是否已赋值
                     * @return Discount 是否已赋值
                     */
                    bool DiscountHasBeenSet() const;

                    /**
                     * 获取最终扣费金额（单位：分）Fee=round(OriginPrice*Discount/100)
                     * @return Fee 最终扣费金额（单位：分）Fee=round(OriginPrice*Discount/100)
                     */
                    int64_t GetFee() const;

                    /**
                     * 设置最终扣费金额（单位：分）Fee=round(OriginPrice*Discount/100)
                     * @param Fee 最终扣费金额（单位：分）Fee=round(OriginPrice*Discount/100)
                     */
                    void SetFee(const int64_t& _fee);

                    /**
                     * 判断参数 Fee 是否已赋值
                     * @return Fee 是否已赋值
                     */
                    bool FeeHasBeenSet() const;

                private:

                    /**
                     * 产品标签
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * 子产品标签
                     */
                    std::string m_subProductCode;
                    bool m_subProductCodeHasBeenSet;

                    /**
                     * 计费项
                     */
                    std::string m_billingItemCode;
                    bool m_billingItemCodeHasBeenSet;

                    /**
                     * 计费细项
                     */
                    std::string m_subBillingItemCode;
                    bool m_subBillingItemCodeHasBeenSet;

                    /**
                     * 单价（单位：分）
                     */
                    double m_unitPrice;
                    bool m_unitPriceHasBeenSet;

                    /**
                     * 用量
                     */
                    double m_dosage;
                    bool m_dosageHasBeenSet;

                    /**
                     * 用量单位
                     */
                    std::string m_dosageUnit;
                    bool m_dosageUnitHasBeenSet;

                    /**
                     * 商品的时间大小，当TimeUnit 是package时，timeSpan 只能传1。当TimeUnit是year；month；day；hour；minute；second，传具体时长。
                     */
                    double m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 商品的时间单位：year:年；month:月；day:日；hour:小时；minute:分钟；second:秒; package:与价格无关,一次性购买的产品传package
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 原价 （单位：分）OriginPrice=round(UnitPrice * Dosage * TimeSpan)
                     */
                    int64_t m_originPrice;
                    bool m_originPriceHasBeenSet;

                    /**
                     * 折扣百分比，传入0-100的值
                     */
                    double m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * 最终扣费金额（单位：分）Fee=round(OriginPrice*Discount/100)
                     */
                    int64_t m_fee;
                    bool m_feeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARKET_V20191010_MODEL_OFFLINEPRODUCTDEAL_H_
