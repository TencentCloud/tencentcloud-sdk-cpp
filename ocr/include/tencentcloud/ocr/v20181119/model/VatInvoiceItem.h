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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEITEM_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEITEM_H_

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
                * 增值税发票项目明细
                */
                class VatInvoiceItem : public AbstractModel
                {
                public:
                    VatInvoiceItem();
                    ~VatInvoiceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取行号
                     * @return LineNo 行号
                     * 
                     */
                    std::string GetLineNo() const;

                    /**
                     * 设置行号
                     * @param _lineNo 行号
                     * 
                     */
                    void SetLineNo(const std::string& _lineNo);

                    /**
                     * 判断参数 LineNo 是否已赋值
                     * @return LineNo 是否已赋值
                     * 
                     */
                    bool LineNoHasBeenSet() const;

                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
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
                     * 获取规格
                     * @return Spec 规格
                     * 
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置规格
                     * @param _spec 规格
                     * 
                     */
                    void SetSpec(const std::string& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * 
                     */
                    bool SpecHasBeenSet() const;

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
                     * @return UnitPrice 单价
                     * 
                     */
                    std::string GetUnitPrice() const;

                    /**
                     * 设置单价
                     * @param _unitPrice 单价
                     * 
                     */
                    void SetUnitPrice(const std::string& _unitPrice);

                    /**
                     * 判断参数 UnitPrice 是否已赋值
                     * @return UnitPrice 是否已赋值
                     * 
                     */
                    bool UnitPriceHasBeenSet() const;

                    /**
                     * 获取不含税金额
                     * @return AmountWithoutTax 不含税金额
                     * 
                     */
                    std::string GetAmountWithoutTax() const;

                    /**
                     * 设置不含税金额
                     * @param _amountWithoutTax 不含税金额
                     * 
                     */
                    void SetAmountWithoutTax(const std::string& _amountWithoutTax);

                    /**
                     * 判断参数 AmountWithoutTax 是否已赋值
                     * @return AmountWithoutTax 是否已赋值
                     * 
                     */
                    bool AmountWithoutTaxHasBeenSet() const;

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

                    /**
                     * 获取税收分类编码
                     * @return TaxClassifyCode 税收分类编码
                     * 
                     */
                    std::string GetTaxClassifyCode() const;

                    /**
                     * 设置税收分类编码
                     * @param _taxClassifyCode 税收分类编码
                     * 
                     */
                    void SetTaxClassifyCode(const std::string& _taxClassifyCode);

                    /**
                     * 判断参数 TaxClassifyCode 是否已赋值
                     * @return TaxClassifyCode 是否已赋值
                     * 
                     */
                    bool TaxClassifyCodeHasBeenSet() const;

                    /**
                     * 获取运输工具类型
                     * @return VehicleType 运输工具类型
                     * 
                     */
                    std::string GetVehicleType() const;

                    /**
                     * 设置运输工具类型
                     * @param _vehicleType 运输工具类型
                     * 
                     */
                    void SetVehicleType(const std::string& _vehicleType);

                    /**
                     * 判断参数 VehicleType 是否已赋值
                     * @return VehicleType 是否已赋值
                     * 
                     */
                    bool VehicleTypeHasBeenSet() const;

                    /**
                     * 获取运输工具牌号
                     * @return VehicleBrand 运输工具牌号
                     * 
                     */
                    std::string GetVehicleBrand() const;

                    /**
                     * 设置运输工具牌号
                     * @param _vehicleBrand 运输工具牌号
                     * 
                     */
                    void SetVehicleBrand(const std::string& _vehicleBrand);

                    /**
                     * 判断参数 VehicleBrand 是否已赋值
                     * @return VehicleBrand 是否已赋值
                     * 
                     */
                    bool VehicleBrandHasBeenSet() const;

                    /**
                     * 获取起始地
                     * @return DeparturePlace 起始地
                     * 
                     */
                    std::string GetDeparturePlace() const;

                    /**
                     * 设置起始地
                     * @param _departurePlace 起始地
                     * 
                     */
                    void SetDeparturePlace(const std::string& _departurePlace);

                    /**
                     * 判断参数 DeparturePlace 是否已赋值
                     * @return DeparturePlace 是否已赋值
                     * 
                     */
                    bool DeparturePlaceHasBeenSet() const;

                    /**
                     * 获取到达地
                     * @return ArrivalPlace 到达地
                     * 
                     */
                    std::string GetArrivalPlace() const;

                    /**
                     * 设置到达地
                     * @param _arrivalPlace 到达地
                     * 
                     */
                    void SetArrivalPlace(const std::string& _arrivalPlace);

                    /**
                     * 判断参数 ArrivalPlace 是否已赋值
                     * @return ArrivalPlace 是否已赋值
                     * 
                     */
                    bool ArrivalPlaceHasBeenSet() const;

                    /**
                     * 获取运输货物名称
                     * @return TransportItemsName 运输货物名称
                     * 
                     */
                    std::string GetTransportItemsName() const;

                    /**
                     * 设置运输货物名称
                     * @param _transportItemsName 运输货物名称
                     * 
                     */
                    void SetTransportItemsName(const std::string& _transportItemsName);

                    /**
                     * 判断参数 TransportItemsName 是否已赋值
                     * @return TransportItemsName 是否已赋值
                     * 
                     */
                    bool TransportItemsNameHasBeenSet() const;

                    /**
                     * 获取建筑服务发生地
                     * @return ConstructionPlace 建筑服务发生地
                     * 
                     */
                    std::string GetConstructionPlace() const;

                    /**
                     * 设置建筑服务发生地
                     * @param _constructionPlace 建筑服务发生地
                     * 
                     */
                    void SetConstructionPlace(const std::string& _constructionPlace);

                    /**
                     * 判断参数 ConstructionPlace 是否已赋值
                     * @return ConstructionPlace 是否已赋值
                     * 
                     */
                    bool ConstructionPlaceHasBeenSet() const;

                    /**
                     * 获取建筑项目名称
                     * @return ConstructionName 建筑项目名称
                     * 
                     */
                    std::string GetConstructionName() const;

                    /**
                     * 设置建筑项目名称
                     * @param _constructionName 建筑项目名称
                     * 
                     */
                    void SetConstructionName(const std::string& _constructionName);

                    /**
                     * 判断参数 ConstructionName 是否已赋值
                     * @return ConstructionName 是否已赋值
                     * 
                     */
                    bool ConstructionNameHasBeenSet() const;

                private:

                    /**
                     * 行号
                     */
                    std::string m_lineNo;
                    bool m_lineNoHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 规格
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

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
                    std::string m_unitPrice;
                    bool m_unitPriceHasBeenSet;

                    /**
                     * 不含税金额
                     */
                    std::string m_amountWithoutTax;
                    bool m_amountWithoutTaxHasBeenSet;

                    /**
                     * 税率
                     */
                    std::string m_taxRate;
                    bool m_taxRateHasBeenSet;

                    /**
                     * 税额
                     */
                    std::string m_taxAmount;
                    bool m_taxAmountHasBeenSet;

                    /**
                     * 税收分类编码
                     */
                    std::string m_taxClassifyCode;
                    bool m_taxClassifyCodeHasBeenSet;

                    /**
                     * 运输工具类型
                     */
                    std::string m_vehicleType;
                    bool m_vehicleTypeHasBeenSet;

                    /**
                     * 运输工具牌号
                     */
                    std::string m_vehicleBrand;
                    bool m_vehicleBrandHasBeenSet;

                    /**
                     * 起始地
                     */
                    std::string m_departurePlace;
                    bool m_departurePlaceHasBeenSet;

                    /**
                     * 到达地
                     */
                    std::string m_arrivalPlace;
                    bool m_arrivalPlaceHasBeenSet;

                    /**
                     * 运输货物名称
                     */
                    std::string m_transportItemsName;
                    bool m_transportItemsNameHasBeenSet;

                    /**
                     * 建筑服务发生地
                     */
                    std::string m_constructionPlace;
                    bool m_constructionPlaceHasBeenSet;

                    /**
                     * 建筑项目名称
                     */
                    std::string m_constructionName;
                    bool m_constructionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEITEM_H_
