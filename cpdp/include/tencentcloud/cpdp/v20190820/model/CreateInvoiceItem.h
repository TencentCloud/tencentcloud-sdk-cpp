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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEINVOICEITEM_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEINVOICEITEM_H_

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
                * 发票开具明细
                */
                class CreateInvoiceItem : public AbstractModel
                {
                public:
                    CreateInvoiceItem();
                    ~CreateInvoiceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取商品名称
                     * @return Name 商品名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置商品名称
                     * @param _name 商品名称
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
                     * 获取税收商品编码
                     * @return TaxCode 税收商品编码
                     * 
                     */
                    std::string GetTaxCode() const;

                    /**
                     * 设置税收商品编码
                     * @param _taxCode 税收商品编码
                     * 
                     */
                    void SetTaxCode(const std::string& _taxCode);

                    /**
                     * 判断参数 TaxCode 是否已赋值
                     * @return TaxCode 是否已赋值
                     * 
                     */
                    bool TaxCodeHasBeenSet() const;

                    /**
                     * 获取不含税商品总价（商品含税价总额/（1+税率））。InvoicePlatformId 为1时，该金额为含税总金额。单位为分。
                     * @return TotalPrice 不含税商品总价（商品含税价总额/（1+税率））。InvoicePlatformId 为1时，该金额为含税总金额。单位为分。
                     * 
                     */
                    int64_t GetTotalPrice() const;

                    /**
                     * 设置不含税商品总价（商品含税价总额/（1+税率））。InvoicePlatformId 为1时，该金额为含税总金额。单位为分。
                     * @param _totalPrice 不含税商品总价（商品含税价总额/（1+税率））。InvoicePlatformId 为1时，该金额为含税总金额。单位为分。
                     * 
                     */
                    void SetTotalPrice(const int64_t& _totalPrice);

                    /**
                     * 判断参数 TotalPrice 是否已赋值
                     * @return TotalPrice 是否已赋值
                     * 
                     */
                    bool TotalPriceHasBeenSet() const;

                    /**
                     * 获取商品税率
                     * @return TaxRate 商品税率
                     * 
                     */
                    int64_t GetTaxRate() const;

                    /**
                     * 设置商品税率
                     * @param _taxRate 商品税率
                     * 
                     */
                    void SetTaxRate(const int64_t& _taxRate);

                    /**
                     * 判断参数 TaxRate 是否已赋值
                     * @return TaxRate 是否已赋值
                     * 
                     */
                    bool TaxRateHasBeenSet() const;

                    /**
                     * 获取商品税额（不含税商品总价*税率）。单位为分
                     * @return TaxAmount 商品税额（不含税商品总价*税率）。单位为分
                     * 
                     */
                    int64_t GetTaxAmount() const;

                    /**
                     * 设置商品税额（不含税商品总价*税率）。单位为分
                     * @param _taxAmount 商品税额（不含税商品总价*税率）。单位为分
                     * 
                     */
                    void SetTaxAmount(const int64_t& _taxAmount);

                    /**
                     * 判断参数 TaxAmount 是否已赋值
                     * @return TaxAmount 是否已赋值
                     * 
                     */
                    bool TaxAmountHasBeenSet() const;

                    /**
                     * 获取税收商品类别
                     * @return TaxType 税收商品类别
                     * 
                     */
                    std::string GetTaxType() const;

                    /**
                     * 设置税收商品类别
                     * @param _taxType 税收商品类别
                     * 
                     */
                    void SetTaxType(const std::string& _taxType);

                    /**
                     * 判断参数 TaxType 是否已赋值
                     * @return TaxType 是否已赋值
                     * 
                     */
                    bool TaxTypeHasBeenSet() const;

                    /**
                     * 获取商品规格
                     * @return Models 商品规格
                     * 
                     */
                    std::string GetModels() const;

                    /**
                     * 设置商品规格
                     * @param _models 商品规格
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
                     * 获取商品单位
                     * @return Unit 商品单位
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置商品单位
                     * @param _unit 商品单位
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
                     * 获取商品数量
                     * @return Total 商品数量
                     * 
                     */
                    std::string GetTotal() const;

                    /**
                     * 设置商品数量
                     * @param _total 商品数量
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
                     * 获取不含税商品单价。InvoicePlatformId 为1时，该金额为含税单价。
                     * @return Price 不含税商品单价。InvoicePlatformId 为1时，该金额为含税单价。
                     * 
                     */
                    std::string GetPrice() const;

                    /**
                     * 设置不含税商品单价。InvoicePlatformId 为1时，该金额为含税单价。
                     * @param _price 不含税商品单价。InvoicePlatformId 为1时，该金额为含税单价。
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
                     * 获取含税折扣总额。单位为分
                     * @return Discount 含税折扣总额。单位为分
                     * 
                     */
                    int64_t GetDiscount() const;

                    /**
                     * 设置含税折扣总额。单位为分
                     * @param _discount 含税折扣总额。单位为分
                     * 
                     */
                    void SetDiscount(const int64_t& _discount);

                    /**
                     * 判断参数 Discount 是否已赋值
                     * @return Discount 是否已赋值
                     * 
                     */
                    bool DiscountHasBeenSet() const;

                    /**
                     * 获取优惠政策标志。0：不使用优惠政策；1：使用优惠政策。
                     * @return PreferentialPolicyFlag 优惠政策标志。0：不使用优惠政策；1：使用优惠政策。
                     * 
                     */
                    std::string GetPreferentialPolicyFlag() const;

                    /**
                     * 设置优惠政策标志。0：不使用优惠政策；1：使用优惠政策。
                     * @param _preferentialPolicyFlag 优惠政策标志。0：不使用优惠政策；1：使用优惠政策。
                     * 
                     */
                    void SetPreferentialPolicyFlag(const std::string& _preferentialPolicyFlag);

                    /**
                     * 判断参数 PreferentialPolicyFlag 是否已赋值
                     * @return PreferentialPolicyFlag 是否已赋值
                     * 
                     */
                    bool PreferentialPolicyFlagHasBeenSet() const;

                    /**
                     * 获取零税率标识：
空：非零税率；
0：出口零税率；
1：免税；
2：不征税；
3：普通零税率。
                     * @return ZeroTaxFlag 零税率标识：
空：非零税率；
0：出口零税率；
1：免税；
2：不征税；
3：普通零税率。
                     * 
                     */
                    std::string GetZeroTaxFlag() const;

                    /**
                     * 设置零税率标识：
空：非零税率；
0：出口零税率；
1：免税；
2：不征税；
3：普通零税率。
                     * @param _zeroTaxFlag 零税率标识：
空：非零税率；
0：出口零税率；
1：免税；
2：不征税；
3：普通零税率。
                     * 
                     */
                    void SetZeroTaxFlag(const std::string& _zeroTaxFlag);

                    /**
                     * 判断参数 ZeroTaxFlag 是否已赋值
                     * @return ZeroTaxFlag 是否已赋值
                     * 
                     */
                    bool ZeroTaxFlagHasBeenSet() const;

                    /**
                     * 获取增值税特殊管理。PreferentialPolicyFlag字段为1时，必填。目前仅支持5%(3%，2%，1.5%)简易征税、免税、不征税。
                     * @return VatSpecialManagement 增值税特殊管理。PreferentialPolicyFlag字段为1时，必填。目前仅支持5%(3%，2%，1.5%)简易征税、免税、不征税。
                     * 
                     */
                    std::string GetVatSpecialManagement() const;

                    /**
                     * 设置增值税特殊管理。PreferentialPolicyFlag字段为1时，必填。目前仅支持5%(3%，2%，1.5%)简易征税、免税、不征税。
                     * @param _vatSpecialManagement 增值税特殊管理。PreferentialPolicyFlag字段为1时，必填。目前仅支持5%(3%，2%，1.5%)简易征税、免税、不征税。
                     * 
                     */
                    void SetVatSpecialManagement(const std::string& _vatSpecialManagement);

                    /**
                     * 判断参数 VatSpecialManagement 是否已赋值
                     * @return VatSpecialManagement 是否已赋值
                     * 
                     */
                    bool VatSpecialManagementHasBeenSet() const;

                private:

                    /**
                     * 商品名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 税收商品编码
                     */
                    std::string m_taxCode;
                    bool m_taxCodeHasBeenSet;

                    /**
                     * 不含税商品总价（商品含税价总额/（1+税率））。InvoicePlatformId 为1时，该金额为含税总金额。单位为分。
                     */
                    int64_t m_totalPrice;
                    bool m_totalPriceHasBeenSet;

                    /**
                     * 商品税率
                     */
                    int64_t m_taxRate;
                    bool m_taxRateHasBeenSet;

                    /**
                     * 商品税额（不含税商品总价*税率）。单位为分
                     */
                    int64_t m_taxAmount;
                    bool m_taxAmountHasBeenSet;

                    /**
                     * 税收商品类别
                     */
                    std::string m_taxType;
                    bool m_taxTypeHasBeenSet;

                    /**
                     * 商品规格
                     */
                    std::string m_models;
                    bool m_modelsHasBeenSet;

                    /**
                     * 商品单位
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * 商品数量
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 不含税商品单价。InvoicePlatformId 为1时，该金额为含税单价。
                     */
                    std::string m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 含税折扣总额。单位为分
                     */
                    int64_t m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * 优惠政策标志。0：不使用优惠政策；1：使用优惠政策。
                     */
                    std::string m_preferentialPolicyFlag;
                    bool m_preferentialPolicyFlagHasBeenSet;

                    /**
                     * 零税率标识：
空：非零税率；
0：出口零税率；
1：免税；
2：不征税；
3：普通零税率。
                     */
                    std::string m_zeroTaxFlag;
                    bool m_zeroTaxFlagHasBeenSet;

                    /**
                     * 增值税特殊管理。PreferentialPolicyFlag字段为1时，必填。目前仅支持5%(3%，2%，1.5%)简易征税、免税、不征税。
                     */
                    std::string m_vatSpecialManagement;
                    bool m_vatSpecialManagementHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEINVOICEITEM_H_
