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
                     * 获取<p>行号</p>
                     * @return LineNo <p>行号</p>
                     * 
                     */
                    std::string GetLineNo() const;

                    /**
                     * 设置<p>行号</p>
                     * @param _lineNo <p>行号</p>
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
                     * 获取<p>名称</p>
                     * @return Name <p>名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名称</p>
                     * @param _name <p>名称</p>
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
                     * 获取<p>规格</p>
                     * @return Spec <p>规格</p>
                     * 
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置<p>规格</p>
                     * @param _spec <p>规格</p>
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
                     * 获取<p>单位</p>
                     * @return Unit <p>单位</p>
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置<p>单位</p>
                     * @param _unit <p>单位</p>
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
                     * 获取<p>数量</p>
                     * @return Quantity <p>数量</p>
                     * 
                     */
                    std::string GetQuantity() const;

                    /**
                     * 设置<p>数量</p>
                     * @param _quantity <p>数量</p>
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
                     * 获取<p>单价</p>
                     * @return UnitPrice <p>单价</p>
                     * 
                     */
                    std::string GetUnitPrice() const;

                    /**
                     * 设置<p>单价</p>
                     * @param _unitPrice <p>单价</p>
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
                     * 获取<p>不含税金额</p>
                     * @return AmountWithoutTax <p>不含税金额</p>
                     * 
                     */
                    std::string GetAmountWithoutTax() const;

                    /**
                     * 设置<p>不含税金额</p>
                     * @param _amountWithoutTax <p>不含税金额</p>
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
                     * 获取<p>税率</p>
                     * @return TaxRate <p>税率</p>
                     * 
                     */
                    std::string GetTaxRate() const;

                    /**
                     * 设置<p>税率</p>
                     * @param _taxRate <p>税率</p>
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
                     * 获取<p>税额</p>
                     * @return TaxAmount <p>税额</p>
                     * 
                     */
                    std::string GetTaxAmount() const;

                    /**
                     * 设置<p>税额</p>
                     * @param _taxAmount <p>税额</p>
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
                     * 获取<p>税收分类编码</p>
                     * @return TaxClassifyCode <p>税收分类编码</p>
                     * 
                     */
                    std::string GetTaxClassifyCode() const;

                    /**
                     * 设置<p>税收分类编码</p>
                     * @param _taxClassifyCode <p>税收分类编码</p>
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
                     * 获取<p>运输工具类型</p>
                     * @return VehicleType <p>运输工具类型</p>
                     * 
                     */
                    std::string GetVehicleType() const;

                    /**
                     * 设置<p>运输工具类型</p>
                     * @param _vehicleType <p>运输工具类型</p>
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
                     * 获取<p>运输工具牌号</p>
                     * @return VehicleBrand <p>运输工具牌号</p>
                     * 
                     */
                    std::string GetVehicleBrand() const;

                    /**
                     * 设置<p>运输工具牌号</p>
                     * @param _vehicleBrand <p>运输工具牌号</p>
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
                     * 获取<p>起始地</p>
                     * @return DeparturePlace <p>起始地</p>
                     * 
                     */
                    std::string GetDeparturePlace() const;

                    /**
                     * 设置<p>起始地</p>
                     * @param _departurePlace <p>起始地</p>
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
                     * 获取<p>到达地</p>
                     * @return ArrivalPlace <p>到达地</p>
                     * 
                     */
                    std::string GetArrivalPlace() const;

                    /**
                     * 设置<p>到达地</p>
                     * @param _arrivalPlace <p>到达地</p>
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
                     * 获取<p>运输货物名称</p>
                     * @return TransportItemsName <p>运输货物名称</p>
                     * 
                     */
                    std::string GetTransportItemsName() const;

                    /**
                     * 设置<p>运输货物名称</p>
                     * @param _transportItemsName <p>运输货物名称</p>
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
                     * 获取<p>建筑服务发生地</p>
                     * @return ConstructionPlace <p>建筑服务发生地</p>
                     * 
                     */
                    std::string GetConstructionPlace() const;

                    /**
                     * 设置<p>建筑服务发生地</p>
                     * @param _constructionPlace <p>建筑服务发生地</p>
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
                     * 获取<p>建筑项目名称</p>
                     * @return ConstructionName <p>建筑项目名称</p>
                     * 
                     */
                    std::string GetConstructionName() const;

                    /**
                     * 设置<p>建筑项目名称</p>
                     * @param _constructionName <p>建筑项目名称</p>
                     * 
                     */
                    void SetConstructionName(const std::string& _constructionName);

                    /**
                     * 判断参数 ConstructionName 是否已赋值
                     * @return ConstructionName 是否已赋值
                     * 
                     */
                    bool ConstructionNameHasBeenSet() const;

                    /**
                     * 获取<p>原始税率</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginalTaxRate <p>原始税率</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOriginalTaxRate() const;

                    /**
                     * 设置<p>原始税率</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originalTaxRate <p>原始税率</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOriginalTaxRate(const std::string& _originalTaxRate);

                    /**
                     * 判断参数 OriginalTaxRate 是否已赋值
                     * @return OriginalTaxRate 是否已赋值
                     * 
                     */
                    bool OriginalTaxRateHasBeenSet() const;

                    /**
                     * 获取<p>原始税额</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginalTaxAmount <p>原始税额</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOriginalTaxAmount() const;

                    /**
                     * 设置<p>原始税额</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originalTaxAmount <p>原始税额</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOriginalTaxAmount(const std::string& _originalTaxAmount);

                    /**
                     * 判断参数 OriginalTaxAmount 是否已赋值
                     * @return OriginalTaxAmount 是否已赋值
                     * 
                     */
                    bool OriginalTaxAmountHasBeenSet() const;

                    /**
                     * 获取<p>零税率标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZeroTaxRateMark <p>零税率标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZeroTaxRateMark() const;

                    /**
                     * 设置<p>零税率标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zeroTaxRateMark <p>零税率标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZeroTaxRateMark(const std::string& _zeroTaxRateMark);

                    /**
                     * 判断参数 ZeroTaxRateMark 是否已赋值
                     * @return ZeroTaxRateMark 是否已赋值
                     * 
                     */
                    bool ZeroTaxRateMarkHasBeenSet() const;

                    /**
                     * 获取<p>含税单价</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaxIncludedUnitPrice <p>含税单价</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaxIncludedUnitPrice() const;

                    /**
                     * 设置<p>含税单价</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taxIncludedUnitPrice <p>含税单价</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaxIncludedUnitPrice(const std::string& _taxIncludedUnitPrice);

                    /**
                     * 判断参数 TaxIncludedUnitPrice 是否已赋值
                     * @return TaxIncludedUnitPrice 是否已赋值
                     * 
                     */
                    bool TaxIncludedUnitPriceHasBeenSet() const;

                    /**
                     * 获取<p>含税金额</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaxIncludedAmount <p>含税金额</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTaxIncludedAmount() const;

                    /**
                     * 设置<p>含税金额</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taxIncludedAmount <p>含税金额</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaxIncludedAmount(const double& _taxIncludedAmount);

                    /**
                     * 判断参数 TaxIncludedAmount 是否已赋值
                     * @return TaxIncludedAmount 是否已赋值
                     * 
                     */
                    bool TaxIncludedAmountHasBeenSet() const;

                private:

                    /**
                     * <p>行号</p>
                     */
                    std::string m_lineNo;
                    bool m_lineNoHasBeenSet;

                    /**
                     * <p>名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>规格</p>
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * <p>单位</p>
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * <p>数量</p>
                     */
                    std::string m_quantity;
                    bool m_quantityHasBeenSet;

                    /**
                     * <p>单价</p>
                     */
                    std::string m_unitPrice;
                    bool m_unitPriceHasBeenSet;

                    /**
                     * <p>不含税金额</p>
                     */
                    std::string m_amountWithoutTax;
                    bool m_amountWithoutTaxHasBeenSet;

                    /**
                     * <p>税率</p>
                     */
                    std::string m_taxRate;
                    bool m_taxRateHasBeenSet;

                    /**
                     * <p>税额</p>
                     */
                    std::string m_taxAmount;
                    bool m_taxAmountHasBeenSet;

                    /**
                     * <p>税收分类编码</p>
                     */
                    std::string m_taxClassifyCode;
                    bool m_taxClassifyCodeHasBeenSet;

                    /**
                     * <p>运输工具类型</p>
                     */
                    std::string m_vehicleType;
                    bool m_vehicleTypeHasBeenSet;

                    /**
                     * <p>运输工具牌号</p>
                     */
                    std::string m_vehicleBrand;
                    bool m_vehicleBrandHasBeenSet;

                    /**
                     * <p>起始地</p>
                     */
                    std::string m_departurePlace;
                    bool m_departurePlaceHasBeenSet;

                    /**
                     * <p>到达地</p>
                     */
                    std::string m_arrivalPlace;
                    bool m_arrivalPlaceHasBeenSet;

                    /**
                     * <p>运输货物名称</p>
                     */
                    std::string m_transportItemsName;
                    bool m_transportItemsNameHasBeenSet;

                    /**
                     * <p>建筑服务发生地</p>
                     */
                    std::string m_constructionPlace;
                    bool m_constructionPlaceHasBeenSet;

                    /**
                     * <p>建筑项目名称</p>
                     */
                    std::string m_constructionName;
                    bool m_constructionNameHasBeenSet;

                    /**
                     * <p>原始税率</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_originalTaxRate;
                    bool m_originalTaxRateHasBeenSet;

                    /**
                     * <p>原始税额</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_originalTaxAmount;
                    bool m_originalTaxAmountHasBeenSet;

                    /**
                     * <p>零税率标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zeroTaxRateMark;
                    bool m_zeroTaxRateMarkHasBeenSet;

                    /**
                     * <p>含税单价</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taxIncludedUnitPrice;
                    bool m_taxIncludedUnitPriceHasBeenSet;

                    /**
                     * <p>含税金额</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_taxIncludedAmount;
                    bool m_taxIncludedAmountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEITEM_H_
