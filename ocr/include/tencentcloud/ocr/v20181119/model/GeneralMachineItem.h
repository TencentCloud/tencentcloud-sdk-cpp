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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_GENERALMACHINEITEM_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_GENERALMACHINEITEM_H_

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
                * 通用机打发票条目
                */
                class GeneralMachineItem : public AbstractModel
                {
                public:
                    GeneralMachineItem();
                    ~GeneralMachineItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目名称
                     * @return Name 项目名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置项目名称
                     * @param _name 项目名称
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
                     * @return Unit 单位
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置单位
                     * @param _unit 单位
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
                     * 获取单价
                     * @return Price 单价
                     * 
                     */
                    std::string GetPrice() const;

                    /**
                     * 设置单价
                     * @param _price 单价
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
                     * 获取金额
                     * @return Total 金额
                     * 
                     */
                    std::string GetTotal() const;

                    /**
                     * 设置金额
                     * @param _total 金额
                     * 
                     */
                    void SetTotal(const std::string& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取税率
                     * @return TaxRate 税率
                     * 
                     */
                    std::string GetTaxRate() const;

                    /**
                     * 设置税率
                     * @param _taxRate 税率
                     * 
                     */
                    void SetTaxRate(const std::string& _taxRate);

                    /**
                     * 判断参数 TaxRate 是否已赋值
                     * @return TaxRate 是否已赋值
                     * 
                     */
                    bool TaxRateHasBeenSet() const;

                    /**
                     * 获取税额
                     * @return Tax 税额
                     * 
                     */
                    std::string GetTax() const;

                    /**
                     * 设置税额
                     * @param _tax 税额
                     * 
                     */
                    void SetTax(const std::string& _tax);

                    /**
                     * 判断参数 Tax 是否已赋值
                     * @return Tax 是否已赋值
                     * 
                     */
                    bool TaxHasBeenSet() const;

                private:

                    /**
                     * 项目名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 规格型号
                     */
                    std::string m_specification;
                    bool m_specificationHasBeenSet;

                    /**
                     * 单位
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * 数量
                     */
                    std::string m_quantity;
                    bool m_quantityHasBeenSet;

                    /**
                     * 单价
                     */
                    std::string m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 金额
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 税率
                     */
                    std::string m_taxRate;
                    bool m_taxRateHasBeenSet;

                    /**
                     * 税额
                     */
                    std::string m_tax;
                    bool m_taxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_GENERALMACHINEITEM_H_
