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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEGOODSINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEGOODSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 发票商品
                */
                class VatInvoiceGoodsInfo : public AbstractModel
                {
                public:
                    VatInvoiceGoodsInfo();
                    ~VatInvoiceGoodsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目名称
                     * @return Item 项目名称
                     * 
                     */
                    std::string GetItem() const;

                    /**
                     * 设置项目名称
                     * @param _item 项目名称
                     * 
                     */
                    void SetItem(const std::string& _item);

                    /**
                     * 判断参数 Item 是否已赋值
                     * @return Item 是否已赋值
                     * 
                     */
                    bool ItemHasBeenSet() const;

                    /**
                     * 获取规格型号
                     * @return Specification 规格型号
                     * 
                     */
                    std::string GetSpecification() const;

                    /**
                     * 设置规格型号
                     * @param _specification 规格型号
                     * 
                     */
                    void SetSpecification(const std::string& _specification);

                    /**
                     * 判断参数 Specification 是否已赋值
                     * @return Specification 是否已赋值
                     * 
                     */
                    bool SpecificationHasBeenSet() const;

                    /**
                     * 获取单位
                     * @return MeasurementDimension 单位
                     * 
                     */
                    std::string GetMeasurementDimension() const;

                    /**
                     * 设置单位
                     * @param _measurementDimension 单位
                     * 
                     */
                    void SetMeasurementDimension(const std::string& _measurementDimension);

                    /**
                     * 判断参数 MeasurementDimension 是否已赋值
                     * @return MeasurementDimension 是否已赋值
                     * 
                     */
                    bool MeasurementDimensionHasBeenSet() const;

                    /**
                     * 获取价格
                     * @return Price 价格
                     * 
                     */
                    std::string GetPrice() const;

                    /**
                     * 设置价格
                     * @param _price 价格
                     * 
                     */
                    void SetPrice(const std::string& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取数量
                     * @return Quantity 数量
                     * 
                     */
                    std::string GetQuantity() const;

                    /**
                     * 设置数量
                     * @param _quantity 数量
                     * 
                     */
                    void SetQuantity(const std::string& _quantity);

                    /**
                     * 判断参数 Quantity 是否已赋值
                     * @return Quantity 是否已赋值
                     * 
                     */
                    bool QuantityHasBeenSet() const;

                    /**
                     * 获取金额
                     * @return Amount 金额
                     * 
                     */
                    std::string GetAmount() const;

                    /**
                     * 设置金额
                     * @param _amount 金额
                     * 
                     */
                    void SetAmount(const std::string& _amount);

                    /**
                     * 判断参数 Amount 是否已赋值
                     * @return Amount 是否已赋值
                     * 
                     */
                    bool AmountHasBeenSet() const;

                    /**
                     * 获取税率(如6%、免税)
                     * @return TaxScheme 税率(如6%、免税)
                     * 
                     */
                    std::string GetTaxScheme() const;

                    /**
                     * 设置税率(如6%、免税)
                     * @param _taxScheme 税率(如6%、免税)
                     * 
                     */
                    void SetTaxScheme(const std::string& _taxScheme);

                    /**
                     * 判断参数 TaxScheme 是否已赋值
                     * @return TaxScheme 是否已赋值
                     * 
                     */
                    bool TaxSchemeHasBeenSet() const;

                    /**
                     * 获取税额
                     * @return TaxAmount 税额
                     * 
                     */
                    std::string GetTaxAmount() const;

                    /**
                     * 设置税额
                     * @param _taxAmount 税额
                     * 
                     */
                    void SetTaxAmount(const std::string& _taxAmount);

                    /**
                     * 判断参数 TaxAmount 是否已赋值
                     * @return TaxAmount 是否已赋值
                     * 
                     */
                    bool TaxAmountHasBeenSet() const;

                private:

                    /**
                     * 项目名称
                     */
                    std::string m_item;
                    bool m_itemHasBeenSet;

                    /**
                     * 规格型号
                     */
                    std::string m_specification;
                    bool m_specificationHasBeenSet;

                    /**
                     * 单位
                     */
                    std::string m_measurementDimension;
                    bool m_measurementDimensionHasBeenSet;

                    /**
                     * 价格
                     */
                    std::string m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 数量
                     */
                    std::string m_quantity;
                    bool m_quantityHasBeenSet;

                    /**
                     * 金额
                     */
                    std::string m_amount;
                    bool m_amountHasBeenSet;

                    /**
                     * 税率(如6%、免税)
                     */
                    std::string m_taxScheme;
                    bool m_taxSchemeHasBeenSet;

                    /**
                     * 税额
                     */
                    std::string m_taxAmount;
                    bool m_taxAmountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEGOODSINFO_H_
