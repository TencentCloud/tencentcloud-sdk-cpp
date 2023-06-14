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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_ORDERITEM_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_ORDERITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 线下查票-订单明细
                */
                class OrderItem : public AbstractModel
                {
                public:
                    OrderItem();
                    ~OrderItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取明细金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AmountHasTax 明细金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetAmountHasTax() const;

                    /**
                     * 设置明细金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _amountHasTax 明细金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAmountHasTax(const double& _amountHasTax);

                    /**
                     * 判断参数 AmountHasTax 是否已赋值
                     * @return AmountHasTax 是否已赋值
                     * 
                     */
                    bool AmountHasTaxHasBeenSet() const;

                    /**
                     * 获取优惠金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Discount 优惠金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetDiscount() const;

                    /**
                     * 设置优惠金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _discount 优惠金额
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取商品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 商品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置商品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 商品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取型号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Models 型号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModels() const;

                    /**
                     * 设置型号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _models 型号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModels(const std::string& _models);

                    /**
                     * 判断参数 Models 是否已赋值
                     * @return Models 是否已赋值
                     * 
                     */
                    bool ModelsHasBeenSet() const;

                    /**
                     * 获取数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _total 数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取数量单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Unit 数量单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置数量单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unit 数量单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取默认“0”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 默认“0”
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置默认“0”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 默认“0”
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取单价
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Price 单价
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetPrice() const;

                    /**
                     * 设置单价
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _price 单价
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取商品编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaxCode 商品编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaxCode() const;

                    /**
                     * 设置商品编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taxCode 商品编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaxCode(const std::string& _taxCode);

                    /**
                     * 判断参数 TaxCode 是否已赋值
                     * @return TaxCode 是否已赋值
                     * 
                     */
                    bool TaxCodeHasBeenSet() const;

                private:

                    /**
                     * 明细金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_amountHasTax;
                    bool m_amountHasTaxHasBeenSet;

                    /**
                     * 优惠金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * 商品名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 型号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_models;
                    bool m_modelsHasBeenSet;

                    /**
                     * 数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 数量单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * 默认“0”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 单价
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 商品编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taxCode;
                    bool m_taxCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_ORDERITEM_H_
