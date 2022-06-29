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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/VatInvoiceItem.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 增值税发票信息
                */
                class VatInvoice : public AbstractModel
                {
                public:
                    VatInvoice();
                    ~VatInvoice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取发票代码
                     * @return Code 发票代码
                     */
                    std::string GetCode() const;

                    /**
                     * 设置发票代码
                     * @param Code 发票代码
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取发票号码
                     * @return Number 发票号码
                     */
                    std::string GetNumber() const;

                    /**
                     * 设置发票号码
                     * @param Number 发票号码
                     */
                    void SetNumber(const std::string& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取开票日期
                     * @return Date 开票日期
                     */
                    std::string GetDate() const;

                    /**
                     * 设置开票日期
                     * @param Date 开票日期
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取购方抬头
                     * @return BuyerName 购方抬头
                     */
                    std::string GetBuyerName() const;

                    /**
                     * 设置购方抬头
                     * @param BuyerName 购方抬头
                     */
                    void SetBuyerName(const std::string& _buyerName);

                    /**
                     * 判断参数 BuyerName 是否已赋值
                     * @return BuyerName 是否已赋值
                     */
                    bool BuyerNameHasBeenSet() const;

                    /**
                     * 获取购方税号
                     * @return BuyerTaxCode 购方税号
                     */
                    std::string GetBuyerTaxCode() const;

                    /**
                     * 设置购方税号
                     * @param BuyerTaxCode 购方税号
                     */
                    void SetBuyerTaxCode(const std::string& _buyerTaxCode);

                    /**
                     * 判断参数 BuyerTaxCode 是否已赋值
                     * @return BuyerTaxCode 是否已赋值
                     */
                    bool BuyerTaxCodeHasBeenSet() const;

                    /**
                     * 获取购方地址电话
                     * @return BuyerAddressPhone 购方地址电话
                     */
                    std::string GetBuyerAddressPhone() const;

                    /**
                     * 设置购方地址电话
                     * @param BuyerAddressPhone 购方地址电话
                     */
                    void SetBuyerAddressPhone(const std::string& _buyerAddressPhone);

                    /**
                     * 判断参数 BuyerAddressPhone 是否已赋值
                     * @return BuyerAddressPhone 是否已赋值
                     */
                    bool BuyerAddressPhoneHasBeenSet() const;

                    /**
                     * 获取购方银行账号
                     * @return BuyerBankAccount 购方银行账号
                     */
                    std::string GetBuyerBankAccount() const;

                    /**
                     * 设置购方银行账号
                     * @param BuyerBankAccount 购方银行账号
                     */
                    void SetBuyerBankAccount(const std::string& _buyerBankAccount);

                    /**
                     * 判断参数 BuyerBankAccount 是否已赋值
                     * @return BuyerBankAccount 是否已赋值
                     */
                    bool BuyerBankAccountHasBeenSet() const;

                    /**
                     * 获取销方名称
                     * @return SellerName 销方名称
                     */
                    std::string GetSellerName() const;

                    /**
                     * 设置销方名称
                     * @param SellerName 销方名称
                     */
                    void SetSellerName(const std::string& _sellerName);

                    /**
                     * 判断参数 SellerName 是否已赋值
                     * @return SellerName 是否已赋值
                     */
                    bool SellerNameHasBeenSet() const;

                    /**
                     * 获取销方税号
                     * @return SellerTaxCode 销方税号
                     */
                    std::string GetSellerTaxCode() const;

                    /**
                     * 设置销方税号
                     * @param SellerTaxCode 销方税号
                     */
                    void SetSellerTaxCode(const std::string& _sellerTaxCode);

                    /**
                     * 判断参数 SellerTaxCode 是否已赋值
                     * @return SellerTaxCode 是否已赋值
                     */
                    bool SellerTaxCodeHasBeenSet() const;

                    /**
                     * 获取销方地址电话
                     * @return SellerAddressPhone 销方地址电话
                     */
                    std::string GetSellerAddressPhone() const;

                    /**
                     * 设置销方地址电话
                     * @param SellerAddressPhone 销方地址电话
                     */
                    void SetSellerAddressPhone(const std::string& _sellerAddressPhone);

                    /**
                     * 判断参数 SellerAddressPhone 是否已赋值
                     * @return SellerAddressPhone 是否已赋值
                     */
                    bool SellerAddressPhoneHasBeenSet() const;

                    /**
                     * 获取销方银行账号
                     * @return SellerBankAccount 销方银行账号
                     */
                    std::string GetSellerBankAccount() const;

                    /**
                     * 设置销方银行账号
                     * @param SellerBankAccount 销方银行账号
                     */
                    void SetSellerBankAccount(const std::string& _sellerBankAccount);

                    /**
                     * 判断参数 SellerBankAccount 是否已赋值
                     * @return SellerBankAccount 是否已赋值
                     */
                    bool SellerBankAccountHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param Remark 备注
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取机器编码
                     * @return MachineNo 机器编码
                     */
                    std::string GetMachineNo() const;

                    /**
                     * 设置机器编码
                     * @param MachineNo 机器编码
                     */
                    void SetMachineNo(const std::string& _machineNo);

                    /**
                     * 判断参数 MachineNo 是否已赋值
                     * @return MachineNo 是否已赋值
                     */
                    bool MachineNoHasBeenSet() const;

                    /**
                     * 获取票种类型
01：增值税专用发票，
02：货运运输业增值税专用发票，
03：机动车销售统一发票，
04：增值税普通发票，
08：增值税电子专用发票（含全电，全电仅新版接口支持），
10：增值税电子普通发票（含全电，全电仅新版接口支持），
11：增值税普通发票（卷式），
14：增值税电子（通行费）发票，
15：二手车销售统一发票，
32：深圳区块链发票
                     * @return Type 票种类型
01：增值税专用发票，
02：货运运输业增值税专用发票，
03：机动车销售统一发票，
04：增值税普通发票，
08：增值税电子专用发票（含全电，全电仅新版接口支持），
10：增值税电子普通发票（含全电，全电仅新版接口支持），
11：增值税普通发票（卷式），
14：增值税电子（通行费）发票，
15：二手车销售统一发票，
32：深圳区块链发票
                     */
                    std::string GetType() const;

                    /**
                     * 设置票种类型
01：增值税专用发票，
02：货运运输业增值税专用发票，
03：机动车销售统一发票，
04：增值税普通发票，
08：增值税电子专用发票（含全电，全电仅新版接口支持），
10：增值税电子普通发票（含全电，全电仅新版接口支持），
11：增值税普通发票（卷式），
14：增值税电子（通行费）发票，
15：二手车销售统一发票，
32：深圳区块链发票
                     * @param Type 票种类型
01：增值税专用发票，
02：货运运输业增值税专用发票，
03：机动车销售统一发票，
04：增值税普通发票，
08：增值税电子专用发票（含全电，全电仅新版接口支持），
10：增值税电子普通发票（含全电，全电仅新版接口支持），
11：增值税普通发票（卷式），
14：增值税电子（通行费）发票，
15：二手车销售统一发票，
32：深圳区块链发票
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取检验码
                     * @return CheckCode 检验码
                     */
                    std::string GetCheckCode() const;

                    /**
                     * 设置检验码
                     * @param CheckCode 检验码
                     */
                    void SetCheckCode(const std::string& _checkCode);

                    /**
                     * 判断参数 CheckCode 是否已赋值
                     * @return CheckCode 是否已赋值
                     */
                    bool CheckCodeHasBeenSet() const;

                    /**
                     * 获取是否作废（红冲）是否作废（红冲）
Y: 已作废 N：未作废 H：红冲
                     * @return IsAbandoned 是否作废（红冲）是否作废（红冲）
Y: 已作废 N：未作废 H：红冲
                     */
                    std::string GetIsAbandoned() const;

                    /**
                     * 设置是否作废（红冲）是否作废（红冲）
Y: 已作废 N：未作废 H：红冲
                     * @param IsAbandoned 是否作废（红冲）是否作废（红冲）
Y: 已作废 N：未作废 H：红冲
                     */
                    void SetIsAbandoned(const std::string& _isAbandoned);

                    /**
                     * 判断参数 IsAbandoned 是否已赋值
                     * @return IsAbandoned 是否已赋值
                     */
                    bool IsAbandonedHasBeenSet() const;

                    /**
                     * 获取是否有销货清单 
Y: 有清单 N：无清单 
卷票无
                     * @return HasSellerList 是否有销货清单 
Y: 有清单 N：无清单 
卷票无
                     */
                    std::string GetHasSellerList() const;

                    /**
                     * 设置是否有销货清单 
Y: 有清单 N：无清单 
卷票无
                     * @param HasSellerList 是否有销货清单 
Y: 有清单 N：无清单 
卷票无
                     */
                    void SetHasSellerList(const std::string& _hasSellerList);

                    /**
                     * 判断参数 HasSellerList 是否已赋值
                     * @return HasSellerList 是否已赋值
                     */
                    bool HasSellerListHasBeenSet() const;

                    /**
                     * 获取销货清单标题
                     * @return SellerListTitle 销货清单标题
                     */
                    std::string GetSellerListTitle() const;

                    /**
                     * 设置销货清单标题
                     * @param SellerListTitle 销货清单标题
                     */
                    void SetSellerListTitle(const std::string& _sellerListTitle);

                    /**
                     * 判断参数 SellerListTitle 是否已赋值
                     * @return SellerListTitle 是否已赋值
                     */
                    bool SellerListTitleHasBeenSet() const;

                    /**
                     * 获取销货清单税额
                     * @return SellerListTax 销货清单税额
                     */
                    std::string GetSellerListTax() const;

                    /**
                     * 设置销货清单税额
                     * @param SellerListTax 销货清单税额
                     */
                    void SetSellerListTax(const std::string& _sellerListTax);

                    /**
                     * 判断参数 SellerListTax 是否已赋值
                     * @return SellerListTax 是否已赋值
                     */
                    bool SellerListTaxHasBeenSet() const;

                    /**
                     * 获取不含税金额
                     * @return AmountWithoutTax 不含税金额
                     */
                    std::string GetAmountWithoutTax() const;

                    /**
                     * 设置不含税金额
                     * @param AmountWithoutTax 不含税金额
                     */
                    void SetAmountWithoutTax(const std::string& _amountWithoutTax);

                    /**
                     * 判断参数 AmountWithoutTax 是否已赋值
                     * @return AmountWithoutTax 是否已赋值
                     */
                    bool AmountWithoutTaxHasBeenSet() const;

                    /**
                     * 获取税额
                     * @return TaxAmount 税额
                     */
                    std::string GetTaxAmount() const;

                    /**
                     * 设置税额
                     * @param TaxAmount 税额
                     */
                    void SetTaxAmount(const std::string& _taxAmount);

                    /**
                     * 判断参数 TaxAmount 是否已赋值
                     * @return TaxAmount 是否已赋值
                     */
                    bool TaxAmountHasBeenSet() const;

                    /**
                     * 获取含税金额
                     * @return AmountWithTax 含税金额
                     */
                    std::string GetAmountWithTax() const;

                    /**
                     * 设置含税金额
                     * @param AmountWithTax 含税金额
                     */
                    void SetAmountWithTax(const std::string& _amountWithTax);

                    /**
                     * 判断参数 AmountWithTax 是否已赋值
                     * @return AmountWithTax 是否已赋值
                     */
                    bool AmountWithTaxHasBeenSet() const;

                    /**
                     * 获取项目明细
                     * @return Items 项目明细
                     */
                    std::vector<VatInvoiceItem> GetItems() const;

                    /**
                     * 设置项目明细
                     * @param Items 项目明细
                     */
                    void SetItems(const std::vector<VatInvoiceItem>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * 发票代码
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 发票号码
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * 开票日期
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 购方抬头
                     */
                    std::string m_buyerName;
                    bool m_buyerNameHasBeenSet;

                    /**
                     * 购方税号
                     */
                    std::string m_buyerTaxCode;
                    bool m_buyerTaxCodeHasBeenSet;

                    /**
                     * 购方地址电话
                     */
                    std::string m_buyerAddressPhone;
                    bool m_buyerAddressPhoneHasBeenSet;

                    /**
                     * 购方银行账号
                     */
                    std::string m_buyerBankAccount;
                    bool m_buyerBankAccountHasBeenSet;

                    /**
                     * 销方名称
                     */
                    std::string m_sellerName;
                    bool m_sellerNameHasBeenSet;

                    /**
                     * 销方税号
                     */
                    std::string m_sellerTaxCode;
                    bool m_sellerTaxCodeHasBeenSet;

                    /**
                     * 销方地址电话
                     */
                    std::string m_sellerAddressPhone;
                    bool m_sellerAddressPhoneHasBeenSet;

                    /**
                     * 销方银行账号
                     */
                    std::string m_sellerBankAccount;
                    bool m_sellerBankAccountHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 机器编码
                     */
                    std::string m_machineNo;
                    bool m_machineNoHasBeenSet;

                    /**
                     * 票种类型
01：增值税专用发票，
02：货运运输业增值税专用发票，
03：机动车销售统一发票，
04：增值税普通发票，
08：增值税电子专用发票（含全电，全电仅新版接口支持），
10：增值税电子普通发票（含全电，全电仅新版接口支持），
11：增值税普通发票（卷式），
14：增值税电子（通行费）发票，
15：二手车销售统一发票，
32：深圳区块链发票
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 检验码
                     */
                    std::string m_checkCode;
                    bool m_checkCodeHasBeenSet;

                    /**
                     * 是否作废（红冲）是否作废（红冲）
Y: 已作废 N：未作废 H：红冲
                     */
                    std::string m_isAbandoned;
                    bool m_isAbandonedHasBeenSet;

                    /**
                     * 是否有销货清单 
Y: 有清单 N：无清单 
卷票无
                     */
                    std::string m_hasSellerList;
                    bool m_hasSellerListHasBeenSet;

                    /**
                     * 销货清单标题
                     */
                    std::string m_sellerListTitle;
                    bool m_sellerListTitleHasBeenSet;

                    /**
                     * 销货清单税额
                     */
                    std::string m_sellerListTax;
                    bool m_sellerListTaxHasBeenSet;

                    /**
                     * 不含税金额
                     */
                    std::string m_amountWithoutTax;
                    bool m_amountWithoutTaxHasBeenSet;

                    /**
                     * 税额
                     */
                    std::string m_taxAmount;
                    bool m_taxAmountHasBeenSet;

                    /**
                     * 含税金额
                     */
                    std::string m_amountWithTax;
                    bool m_amountWithTaxHasBeenSet;

                    /**
                     * 项目明细
                     */
                    std::vector<VatInvoiceItem> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICE_H_
