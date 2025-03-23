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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_INQUIRYPRICE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_INQUIRYPRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/InquiryDetailPrice.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 询价返回参数
                */
                class InquiryPrice : public AbstractModel
                {
                public:
                    InquiryPrice();
                    ~InquiryPrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取单位原价
                     * @return UnitPrice 单位原价
                     * 
                     */
                    double GetUnitPrice() const;

                    /**
                     * 设置单位原价
                     * @param _unitPrice 单位原价
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
                     * 获取折扣单位价格
                     * @return UnitPriceDiscount 折扣单位价格
                     * 
                     */
                    double GetUnitPriceDiscount() const;

                    /**
                     * 设置折扣单位价格
                     * @param _unitPriceDiscount 折扣单位价格
                     * 
                     */
                    void SetUnitPriceDiscount(const double& _unitPriceDiscount);

                    /**
                     * 判断参数 UnitPriceDiscount 是否已赋值
                     * @return UnitPriceDiscount 是否已赋值
                     * 
                     */
                    bool UnitPriceDiscountHasBeenSet() const;

                    /**
                     * 获取合计原价
                     * @return OriginalPrice 合计原价
                     * 
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 设置合计原价
                     * @param _originalPrice 合计原价
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
                     * 获取折扣合计价格
                     * @return DiscountPrice 折扣合计价格
                     * 
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 设置折扣合计价格
                     * @param _discountPrice 折扣合计价格
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
                     * 获取折扣(单位是%)
                     * @return Discount 折扣(单位是%)
                     * 
                     */
                    double GetDiscount() const;

                    /**
                     * 设置折扣(单位是%)
                     * @param _discount 折扣(单位是%)
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
                     * 获取商品数量
                     * @return GoodsNum 商品数量
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置商品数量
                     * @param _goodsNum 商品数量
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
                     * 获取付费货币
                     * @return Currency 付费货币
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置付费货币
                     * @param _currency 付费货币
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
                     * 获取硬盘专用返回参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskType 硬盘专用返回参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置硬盘专用返回参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diskType 硬盘专用返回参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取购买时长
                     * @return TimeSpan 购买时长
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置购买时长
                     * @param _timeSpan 购买时长
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取购买时长单位("m"按月, "h"按小时)
                     * @return TimeUnit 购买时长单位("m"按月, "h"按小时)
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置购买时长单位("m"按月, "h"按小时)
                     * @param _timeUnit 购买时长单位("m"按月, "h"按小时)
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
                     * 获取购买数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 购买数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetValue() const;

                    /**
                     * 设置购买数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value 购买数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValue(const int64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取详细类别的价格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DetailPrices 详细类别的价格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InquiryDetailPrice GetDetailPrices() const;

                    /**
                     * 设置详细类别的价格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _detailPrices 详细类别的价格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDetailPrices(const InquiryDetailPrice& _detailPrices);

                    /**
                     * 判断参数 DetailPrices 是否已赋值
                     * @return DetailPrices 是否已赋值
                     * 
                     */
                    bool DetailPricesHasBeenSet() const;

                private:

                    /**
                     * 单位原价
                     */
                    double m_unitPrice;
                    bool m_unitPriceHasBeenSet;

                    /**
                     * 折扣单位价格
                     */
                    double m_unitPriceDiscount;
                    bool m_unitPriceDiscountHasBeenSet;

                    /**
                     * 合计原价
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * 折扣合计价格
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                    /**
                     * 折扣(单位是%)
                     */
                    double m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * 商品数量
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * 付费货币
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * 硬盘专用返回参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 购买时长
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 购买时长单位("m"按月, "h"按小时)
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 购买数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 详细类别的价格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InquiryDetailPrice m_detailPrices;
                    bool m_detailPricesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_INQUIRYPRICE_H_
