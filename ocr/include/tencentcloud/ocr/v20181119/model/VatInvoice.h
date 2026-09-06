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
#include <tencentcloud/ocr/v20181119/model/RedLetterInvoiceItem.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 增值税发票、购车发票、全电发票的基础要素字段信息。
                */
                class VatInvoice : public AbstractModel
                {
                public:
                    VatInvoice();
                    ~VatInvoice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>发票代码</p>
                     * @return Code <p>发票代码</p>
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置<p>发票代码</p>
                     * @param _code <p>发票代码</p>
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取<p>发票号码</p>
                     * @return Number <p>发票号码</p>
                     * 
                     */
                    std::string GetNumber() const;

                    /**
                     * 设置<p>发票号码</p>
                     * @param _number <p>发票号码</p>
                     * 
                     */
                    void SetNumber(const std::string& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取<p>开票日期</p>
                     * @return Date <p>开票日期</p>
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置<p>开票日期</p>
                     * @param _date <p>开票日期</p>
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取<p>购方抬头<br>通用机打发票类型时不返回</p>
                     * @return BuyerName <p>购方抬头<br>通用机打发票类型时不返回</p>
                     * 
                     */
                    std::string GetBuyerName() const;

                    /**
                     * 设置<p>购方抬头<br>通用机打发票类型时不返回</p>
                     * @param _buyerName <p>购方抬头<br>通用机打发票类型时不返回</p>
                     * 
                     */
                    void SetBuyerName(const std::string& _buyerName);

                    /**
                     * 判断参数 BuyerName 是否已赋值
                     * @return BuyerName 是否已赋值
                     * 
                     */
                    bool BuyerNameHasBeenSet() const;

                    /**
                     * 获取<p>购方税号<br>通用机打发票类型时不返回</p>
                     * @return BuyerTaxCode <p>购方税号<br>通用机打发票类型时不返回</p>
                     * 
                     */
                    std::string GetBuyerTaxCode() const;

                    /**
                     * 设置<p>购方税号<br>通用机打发票类型时不返回</p>
                     * @param _buyerTaxCode <p>购方税号<br>通用机打发票类型时不返回</p>
                     * 
                     */
                    void SetBuyerTaxCode(const std::string& _buyerTaxCode);

                    /**
                     * 判断参数 BuyerTaxCode 是否已赋值
                     * @return BuyerTaxCode 是否已赋值
                     * 
                     */
                    bool BuyerTaxCodeHasBeenSet() const;

                    /**
                     * 获取<p>购方地址电话<br>通用机打发票类型做不返回</p>
                     * @return BuyerAddressPhone <p>购方地址电话<br>通用机打发票类型做不返回</p>
                     * 
                     */
                    std::string GetBuyerAddressPhone() const;

                    /**
                     * 设置<p>购方地址电话<br>通用机打发票类型做不返回</p>
                     * @param _buyerAddressPhone <p>购方地址电话<br>通用机打发票类型做不返回</p>
                     * 
                     */
                    void SetBuyerAddressPhone(const std::string& _buyerAddressPhone);

                    /**
                     * 判断参数 BuyerAddressPhone 是否已赋值
                     * @return BuyerAddressPhone 是否已赋值
                     * 
                     */
                    bool BuyerAddressPhoneHasBeenSet() const;

                    /**
                     * 获取<p>购方银行账号<br>通用机打发票类型时不返回</p>
                     * @return BuyerBankAccount <p>购方银行账号<br>通用机打发票类型时不返回</p>
                     * 
                     */
                    std::string GetBuyerBankAccount() const;

                    /**
                     * 设置<p>购方银行账号<br>通用机打发票类型时不返回</p>
                     * @param _buyerBankAccount <p>购方银行账号<br>通用机打发票类型时不返回</p>
                     * 
                     */
                    void SetBuyerBankAccount(const std::string& _buyerBankAccount);

                    /**
                     * 判断参数 BuyerBankAccount 是否已赋值
                     * @return BuyerBankAccount 是否已赋值
                     * 
                     */
                    bool BuyerBankAccountHasBeenSet() const;

                    /**
                     * 获取<p>销方名称</p>
                     * @return SellerName <p>销方名称</p>
                     * 
                     */
                    std::string GetSellerName() const;

                    /**
                     * 设置<p>销方名称</p>
                     * @param _sellerName <p>销方名称</p>
                     * 
                     */
                    void SetSellerName(const std::string& _sellerName);

                    /**
                     * 判断参数 SellerName 是否已赋值
                     * @return SellerName 是否已赋值
                     * 
                     */
                    bool SellerNameHasBeenSet() const;

                    /**
                     * 获取<p>销方税号</p>
                     * @return SellerTaxCode <p>销方税号</p>
                     * 
                     */
                    std::string GetSellerTaxCode() const;

                    /**
                     * 设置<p>销方税号</p>
                     * @param _sellerTaxCode <p>销方税号</p>
                     * 
                     */
                    void SetSellerTaxCode(const std::string& _sellerTaxCode);

                    /**
                     * 判断参数 SellerTaxCode 是否已赋值
                     * @return SellerTaxCode 是否已赋值
                     * 
                     */
                    bool SellerTaxCodeHasBeenSet() const;

                    /**
                     * 获取<p>销方地址电话</p>
                     * @return SellerAddressPhone <p>销方地址电话</p>
                     * 
                     */
                    std::string GetSellerAddressPhone() const;

                    /**
                     * 设置<p>销方地址电话</p>
                     * @param _sellerAddressPhone <p>销方地址电话</p>
                     * 
                     */
                    void SetSellerAddressPhone(const std::string& _sellerAddressPhone);

                    /**
                     * 判断参数 SellerAddressPhone 是否已赋值
                     * @return SellerAddressPhone 是否已赋值
                     * 
                     */
                    bool SellerAddressPhoneHasBeenSet() const;

                    /**
                     * 获取<p>销方银行账号</p>
                     * @return SellerBankAccount <p>销方银行账号</p>
                     * 
                     */
                    std::string GetSellerBankAccount() const;

                    /**
                     * 设置<p>销方银行账号</p>
                     * @param _sellerBankAccount <p>销方银行账号</p>
                     * 
                     */
                    void SetSellerBankAccount(const std::string& _sellerBankAccount);

                    /**
                     * 判断参数 SellerBankAccount 是否已赋值
                     * @return SellerBankAccount 是否已赋值
                     * 
                     */
                    bool SellerBankAccountHasBeenSet() const;

                    /**
                     * 获取<p>备注</p>
                     * @return Remark <p>备注</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注</p>
                     * @param _remark <p>备注</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>机器编码</p>
                     * @return MachineNo <p>机器编码</p>
                     * 
                     */
                    std::string GetMachineNo() const;

                    /**
                     * 设置<p>机器编码</p>
                     * @param _machineNo <p>机器编码</p>
                     * 
                     */
                    void SetMachineNo(const std::string& _machineNo);

                    /**
                     * 判断参数 MachineNo 是否已赋值
                     * @return MachineNo 是否已赋值
                     * 
                     */
                    bool MachineNoHasBeenSet() const;

                    /**
                     * 获取<p>票种类型<br>01：增值税专用发票，<br>02：货运运输业增值税专用发票，<br>03：机动车销售统一发票，<br>04：增值税普通发票，<br>08：增值税电子专用发票（含全电，全电仅新版接口支持），<br>09：全电发票，<br>0901：全电纸质发票(增值税专用发票)，<br>0903：全电纸质(机动车销售统一发票)，<br>0904：全电纸质发票(增值税普通发票)，<br>0910：电子发票(普通发票)，<br>0915：全电纸质(二手车销售统一发票)，<br>0920：电子发票(增值税专用发票)，<br>0930：电子发票(机动车销售统一发票)，<br>0940：电子发票(二手车销售统一发票)，<br>10：增值税电子普通发票（含全电，全电仅新版接口支持），<br>11：增值税普通发票（卷式），<br>14：增值税电子（通行费）发票，<br>15：二手车销售统一发票，<br>32：深圳区块链发票，<br>61：电子发票（航空运输电子客票行程单），<br>8208：电子发票(通行费发票)，<br>83：电子发票(铁路电子客票)，<br>100：区块链发票，<br>101：财政票据，<br>102：通用电子发票，<br>103：车辆通行费</p>
                     * @return Type <p>票种类型<br>01：增值税专用发票，<br>02：货运运输业增值税专用发票，<br>03：机动车销售统一发票，<br>04：增值税普通发票，<br>08：增值税电子专用发票（含全电，全电仅新版接口支持），<br>09：全电发票，<br>0901：全电纸质发票(增值税专用发票)，<br>0903：全电纸质(机动车销售统一发票)，<br>0904：全电纸质发票(增值税普通发票)，<br>0910：电子发票(普通发票)，<br>0915：全电纸质(二手车销售统一发票)，<br>0920：电子发票(增值税专用发票)，<br>0930：电子发票(机动车销售统一发票)，<br>0940：电子发票(二手车销售统一发票)，<br>10：增值税电子普通发票（含全电，全电仅新版接口支持），<br>11：增值税普通发票（卷式），<br>14：增值税电子（通行费）发票，<br>15：二手车销售统一发票，<br>32：深圳区块链发票，<br>61：电子发票（航空运输电子客票行程单），<br>8208：电子发票(通行费发票)，<br>83：电子发票(铁路电子客票)，<br>100：区块链发票，<br>101：财政票据，<br>102：通用电子发票，<br>103：车辆通行费</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>票种类型<br>01：增值税专用发票，<br>02：货运运输业增值税专用发票，<br>03：机动车销售统一发票，<br>04：增值税普通发票，<br>08：增值税电子专用发票（含全电，全电仅新版接口支持），<br>09：全电发票，<br>0901：全电纸质发票(增值税专用发票)，<br>0903：全电纸质(机动车销售统一发票)，<br>0904：全电纸质发票(增值税普通发票)，<br>0910：电子发票(普通发票)，<br>0915：全电纸质(二手车销售统一发票)，<br>0920：电子发票(增值税专用发票)，<br>0930：电子发票(机动车销售统一发票)，<br>0940：电子发票(二手车销售统一发票)，<br>10：增值税电子普通发票（含全电，全电仅新版接口支持），<br>11：增值税普通发票（卷式），<br>14：增值税电子（通行费）发票，<br>15：二手车销售统一发票，<br>32：深圳区块链发票，<br>61：电子发票（航空运输电子客票行程单），<br>8208：电子发票(通行费发票)，<br>83：电子发票(铁路电子客票)，<br>100：区块链发票，<br>101：财政票据，<br>102：通用电子发票，<br>103：车辆通行费</p>
                     * @param _type <p>票种类型<br>01：增值税专用发票，<br>02：货运运输业增值税专用发票，<br>03：机动车销售统一发票，<br>04：增值税普通发票，<br>08：增值税电子专用发票（含全电，全电仅新版接口支持），<br>09：全电发票，<br>0901：全电纸质发票(增值税专用发票)，<br>0903：全电纸质(机动车销售统一发票)，<br>0904：全电纸质发票(增值税普通发票)，<br>0910：电子发票(普通发票)，<br>0915：全电纸质(二手车销售统一发票)，<br>0920：电子发票(增值税专用发票)，<br>0930：电子发票(机动车销售统一发票)，<br>0940：电子发票(二手车销售统一发票)，<br>10：增值税电子普通发票（含全电，全电仅新版接口支持），<br>11：增值税普通发票（卷式），<br>14：增值税电子（通行费）发票，<br>15：二手车销售统一发票，<br>32：深圳区块链发票，<br>61：电子发票（航空运输电子客票行程单），<br>8208：电子发票(通行费发票)，<br>83：电子发票(铁路电子客票)，<br>100：区块链发票，<br>101：财政票据，<br>102：通用电子发票，<br>103：车辆通行费</p>
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
                     * 获取<p>具体的全电发票类型：01: 全电专用发票；02：全电普通发票；03：全电火车票；04：全电机票行程单</p>
                     * @return ElectronicType <p>具体的全电发票类型：01: 全电专用发票；02：全电普通发票；03：全电火车票；04：全电机票行程单</p>
                     * 
                     */
                    std::string GetElectronicType() const;

                    /**
                     * 设置<p>具体的全电发票类型：01: 全电专用发票；02：全电普通发票；03：全电火车票；04：全电机票行程单</p>
                     * @param _electronicType <p>具体的全电发票类型：01: 全电专用发票；02：全电普通发票；03：全电火车票；04：全电机票行程单</p>
                     * 
                     */
                    void SetElectronicType(const std::string& _electronicType);

                    /**
                     * 判断参数 ElectronicType 是否已赋值
                     * @return ElectronicType 是否已赋值
                     * 
                     */
                    bool ElectronicTypeHasBeenSet() const;

                    /**
                     * 获取<p>检验码</p>
                     * @return CheckCode <p>检验码</p>
                     * 
                     */
                    std::string GetCheckCode() const;

                    /**
                     * 设置<p>检验码</p>
                     * @param _checkCode <p>检验码</p>
                     * 
                     */
                    void SetCheckCode(const std::string& _checkCode);

                    /**
                     * 判断参数 CheckCode 是否已赋值
                     * @return CheckCode 是否已赋值
                     * 
                     */
                    bool CheckCodeHasBeenSet() const;

                    /**
                     * 获取<p>是否作废（红冲）是否作废（红冲）<br>Y：已作废，N：未作废，H：红冲，HP：部分红冲，HF：全额红冲</p>
                     * @return IsAbandoned <p>是否作废（红冲）是否作废（红冲）<br>Y：已作废，N：未作废，H：红冲，HP：部分红冲，HF：全额红冲</p>
                     * 
                     */
                    std::string GetIsAbandoned() const;

                    /**
                     * 设置<p>是否作废（红冲）是否作废（红冲）<br>Y：已作废，N：未作废，H：红冲，HP：部分红冲，HF：全额红冲</p>
                     * @param _isAbandoned <p>是否作废（红冲）是否作废（红冲）<br>Y：已作废，N：未作废，H：红冲，HP：部分红冲，HF：全额红冲</p>
                     * 
                     */
                    void SetIsAbandoned(const std::string& _isAbandoned);

                    /**
                     * 判断参数 IsAbandoned 是否已赋值
                     * @return IsAbandoned 是否已赋值
                     * 
                     */
                    bool IsAbandonedHasBeenSet() const;

                    /**
                     * 获取<p>是否有销货清单<br>Y: 有清单 N：无清单<br>卷票无</p>
                     * @return HasSellerList <p>是否有销货清单<br>Y: 有清单 N：无清单<br>卷票无</p>
                     * 
                     */
                    std::string GetHasSellerList() const;

                    /**
                     * 设置<p>是否有销货清单<br>Y: 有清单 N：无清单<br>卷票无</p>
                     * @param _hasSellerList <p>是否有销货清单<br>Y: 有清单 N：无清单<br>卷票无</p>
                     * 
                     */
                    void SetHasSellerList(const std::string& _hasSellerList);

                    /**
                     * 判断参数 HasSellerList 是否已赋值
                     * @return HasSellerList 是否已赋值
                     * 
                     */
                    bool HasSellerListHasBeenSet() const;

                    /**
                     * 获取<p>销货清单标题</p>
                     * @return SellerListTitle <p>销货清单标题</p>
                     * 
                     */
                    std::string GetSellerListTitle() const;

                    /**
                     * 设置<p>销货清单标题</p>
                     * @param _sellerListTitle <p>销货清单标题</p>
                     * 
                     */
                    void SetSellerListTitle(const std::string& _sellerListTitle);

                    /**
                     * 判断参数 SellerListTitle 是否已赋值
                     * @return SellerListTitle 是否已赋值
                     * 
                     */
                    bool SellerListTitleHasBeenSet() const;

                    /**
                     * 获取<p>销货清单税额</p>
                     * @return SellerListTax <p>销货清单税额</p>
                     * 
                     */
                    std::string GetSellerListTax() const;

                    /**
                     * 设置<p>销货清单税额</p>
                     * @param _sellerListTax <p>销货清单税额</p>
                     * 
                     */
                    void SetSellerListTax(const std::string& _sellerListTax);

                    /**
                     * 判断参数 SellerListTax 是否已赋值
                     * @return SellerListTax 是否已赋值
                     * 
                     */
                    bool SellerListTaxHasBeenSet() const;

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
                     * 获取<p>含税金额</p>
                     * @return AmountWithTax <p>含税金额</p>
                     * 
                     */
                    std::string GetAmountWithTax() const;

                    /**
                     * 设置<p>含税金额</p>
                     * @param _amountWithTax <p>含税金额</p>
                     * 
                     */
                    void SetAmountWithTax(const std::string& _amountWithTax);

                    /**
                     * 判断参数 AmountWithTax 是否已赋值
                     * @return AmountWithTax 是否已赋值
                     * 
                     */
                    bool AmountWithTaxHasBeenSet() const;

                    /**
                     * 获取<p>项目明细</p>
                     * @return Items <p>项目明细</p>
                     * 
                     */
                    std::vector<VatInvoiceItem> GetItems() const;

                    /**
                     * 设置<p>项目明细</p>
                     * @param _items <p>项目明细</p>
                     * 
                     */
                    void SetItems(const std::vector<VatInvoiceItem>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取<p>所属税局</p>
                     * @return TaxBureau <p>所属税局</p>
                     * 
                     */
                    std::string GetTaxBureau() const;

                    /**
                     * 设置<p>所属税局</p>
                     * @param _taxBureau <p>所属税局</p>
                     * 
                     */
                    void SetTaxBureau(const std::string& _taxBureau);

                    /**
                     * 判断参数 TaxBureau 是否已赋值
                     * @return TaxBureau 是否已赋值
                     * 
                     */
                    bool TaxBureauHasBeenSet() const;

                    /**
                     * 获取<p>通行费标志:Y、是;N、否</p>
                     * @return TrafficFreeFlag <p>通行费标志:Y、是;N、否</p>
                     * 
                     */
                    std::string GetTrafficFreeFlag() const;

                    /**
                     * 设置<p>通行费标志:Y、是;N、否</p>
                     * @param _trafficFreeFlag <p>通行费标志:Y、是;N、否</p>
                     * 
                     */
                    void SetTrafficFreeFlag(const std::string& _trafficFreeFlag);

                    /**
                     * 判断参数 TrafficFreeFlag 是否已赋值
                     * @return TrafficFreeFlag 是否已赋值
                     * 
                     */
                    bool TrafficFreeFlagHasBeenSet() const;

                    /**
                     * 获取<p>是否为红票</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RedLetterInvoiceMark <p>是否为红票</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetRedLetterInvoiceMark() const;

                    /**
                     * 设置<p>是否为红票</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _redLetterInvoiceMark <p>是否为红票</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRedLetterInvoiceMark(const bool& _redLetterInvoiceMark);

                    /**
                     * 判断参数 RedLetterInvoiceMark 是否已赋值
                     * @return RedLetterInvoiceMark 是否已赋值
                     * 
                     */
                    bool RedLetterInvoiceMarkHasBeenSet() const;

                    /**
                     * 获取<p>开具类型标识（0: 委托代开，1：自开，2：代开，3：代办退税</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IssuingTypeMark <p>开具类型标识（0: 委托代开，1：自开，2：代开，3：代办退税</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIssuingTypeMark() const;

                    /**
                     * 设置<p>开具类型标识（0: 委托代开，1：自开，2：代开，3：代办退税</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _issuingTypeMark <p>开具类型标识（0: 委托代开，1：自开，2：代开，3：代办退税</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIssuingTypeMark(const int64_t& _issuingTypeMark);

                    /**
                     * 判断参数 IssuingTypeMark 是否已赋值
                     * @return IssuingTypeMark 是否已赋值
                     * 
                     */
                    bool IssuingTypeMarkHasBeenSet() const;

                    /**
                     * 获取<p>代开销售方名称</p>
                     * @return SellerAgentName <p>代开销售方名称</p>
                     * 
                     */
                    std::string GetSellerAgentName() const;

                    /**
                     * 设置<p>代开销售方名称</p>
                     * @param _sellerAgentName <p>代开销售方名称</p>
                     * 
                     */
                    void SetSellerAgentName(const std::string& _sellerAgentName);

                    /**
                     * 判断参数 SellerAgentName 是否已赋值
                     * @return SellerAgentName 是否已赋值
                     * 
                     */
                    bool SellerAgentNameHasBeenSet() const;

                    /**
                     * 获取<p>代开销售方税号</p>
                     * @return SellerAgentTaxID <p>代开销售方税号</p>
                     * 
                     */
                    std::string GetSellerAgentTaxID() const;

                    /**
                     * 设置<p>代开销售方税号</p>
                     * @param _sellerAgentTaxID <p>代开销售方税号</p>
                     * 
                     */
                    void SetSellerAgentTaxID(const std::string& _sellerAgentTaxID);

                    /**
                     * 判断参数 SellerAgentTaxID 是否已赋值
                     * @return SellerAgentTaxID 是否已赋值
                     * 
                     */
                    bool SellerAgentTaxIDHasBeenSet() const;

                    /**
                     * 获取<p>地区代码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionCode <p>地区代码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegionCode() const;

                    /**
                     * 设置<p>地区代码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regionCode <p>地区代码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegionCode(const std::string& _regionCode);

                    /**
                     * 判断参数 RegionCode 是否已赋值
                     * @return RegionCode 是否已赋值
                     * 
                     */
                    bool RegionCodeHasBeenSet() const;

                    /**
                     * 获取<p>复核人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReviewerName <p>复核人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReviewerName() const;

                    /**
                     * 设置<p>复核人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reviewerName <p>复核人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReviewerName(const std::string& _reviewerName);

                    /**
                     * 判断参数 ReviewerName 是否已赋值
                     * @return ReviewerName 是否已赋值
                     * 
                     */
                    bool ReviewerNameHasBeenSet() const;

                    /**
                     * 获取<p>开票人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IssuerName <p>开票人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIssuerName() const;

                    /**
                     * 设置<p>开票人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _issuerName <p>开票人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIssuerName(const std::string& _issuerName);

                    /**
                     * 判断参数 IssuerName 是否已赋值
                     * @return IssuerName 是否已赋值
                     * 
                     */
                    bool IssuerNameHasBeenSet() const;

                    /**
                     * 获取<p>收款人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayeeName <p>收款人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPayeeName() const;

                    /**
                     * 设置<p>收款人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payeeName <p>收款人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPayeeName(const std::string& _payeeName);

                    /**
                     * 判断参数 PayeeName 是否已赋值
                     * @return PayeeName 是否已赋值
                     * 
                     */
                    bool PayeeNameHasBeenSet() const;

                    /**
                     * 获取<p>开票机号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MachineCode <p>开票机号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMachineCode() const;

                    /**
                     * 设置<p>开票机号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _machineCode <p>开票机号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMachineCode(const std::string& _machineCode);

                    /**
                     * 判断参数 MachineCode 是否已赋值
                     * @return MachineCode 是否已赋值
                     * 
                     */
                    bool MachineCodeHasBeenSet() const;

                    /**
                     * 获取<p>税控码/密码区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaxControlCode <p>税控码/密码区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaxControlCode() const;

                    /**
                     * 设置<p>税控码/密码区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taxControlCode <p>税控码/密码区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaxControlCode(const std::string& _taxControlCode);

                    /**
                     * 判断参数 TaxControlCode 是否已赋值
                     * @return TaxControlCode 是否已赋值
                     * 
                     */
                    bool TaxControlCodeHasBeenSet() const;

                    /**
                     * 获取<p>价税合计（中文大写）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AmountWithTaxCN <p>价税合计（中文大写）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAmountWithTaxCN() const;

                    /**
                     * 设置<p>价税合计（中文大写）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _amountWithTaxCN <p>价税合计（中文大写）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAmountWithTaxCN(const std::string& _amountWithTaxCN);

                    /**
                     * 判断参数 AmountWithTaxCN 是否已赋值
                     * @return AmountWithTaxCN 是否已赋值
                     * 
                     */
                    bool AmountWithTaxCNHasBeenSet() const;

                    /**
                     * 获取<p>税率</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaxRate <p>税率</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaxRate() const;

                    /**
                     * 设置<p>税率</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taxRate <p>税率</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>特殊票种代码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpecialTicketCode <p>特殊票种代码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSpecialTicketCode() const;

                    /**
                     * 设置<p>特殊票种代码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _specialTicketCode <p>特殊票种代码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpecialTicketCode(const std::string& _specialTicketCode);

                    /**
                     * 判断参数 SpecialTicketCode 是否已赋值
                     * @return SpecialTicketCode 是否已赋值
                     * 
                     */
                    bool SpecialTicketCodeHasBeenSet() const;

                    /**
                     * 获取<p>红字发票信息列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RedLetterInvoices <p>红字发票信息列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RedLetterInvoiceItem> GetRedLetterInvoices() const;

                    /**
                     * 设置<p>红字发票信息列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _redLetterInvoices <p>红字发票信息列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRedLetterInvoices(const std::vector<RedLetterInvoiceItem>& _redLetterInvoices);

                    /**
                     * 判断参数 RedLetterInvoices 是否已赋值
                     * @return RedLetterInvoices 是否已赋值
                     * 
                     */
                    bool RedLetterInvoicesHasBeenSet() const;

                    /**
                     * 获取<p>全电类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FullElectronicType <p>全电类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFullElectronicType() const;

                    /**
                     * 设置<p>全电类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fullElectronicType <p>全电类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFullElectronicType(const std::string& _fullElectronicType);

                    /**
                     * 判断参数 FullElectronicType 是否已赋值
                     * @return FullElectronicType 是否已赋值
                     * 
                     */
                    bool FullElectronicTypeHasBeenSet() const;

                    /**
                     * 获取<p>OFD版式文件下载链接</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OfdUrl <p>OFD版式文件下载链接</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOfdUrl() const;

                    /**
                     * 设置<p>OFD版式文件下载链接</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ofdUrl <p>OFD版式文件下载链接</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOfdUrl(const std::string& _ofdUrl);

                    /**
                     * 判断参数 OfdUrl 是否已赋值
                     * @return OfdUrl 是否已赋值
                     * 
                     */
                    bool OfdUrlHasBeenSet() const;

                    /**
                     * 获取<p>PDF版式文件下载链接</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PdfUrl <p>PDF版式文件下载链接</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPdfUrl() const;

                    /**
                     * 设置<p>PDF版式文件下载链接</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pdfUrl <p>PDF版式文件下载链接</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPdfUrl(const std::string& _pdfUrl);

                    /**
                     * 判断参数 PdfUrl 是否已赋值
                     * @return PdfUrl 是否已赋值
                     * 
                     */
                    bool PdfUrlHasBeenSet() const;

                    /**
                     * 获取<p>原发票代码，对应蓝字发票代码。</p>
                     * @return OriginalCode <p>原发票代码，对应蓝字发票代码。</p>
                     * 
                     */
                    std::string GetOriginalCode() const;

                    /**
                     * 设置<p>原发票代码，对应蓝字发票代码。</p>
                     * @param _originalCode <p>原发票代码，对应蓝字发票代码。</p>
                     * 
                     */
                    void SetOriginalCode(const std::string& _originalCode);

                    /**
                     * 判断参数 OriginalCode 是否已赋值
                     * @return OriginalCode 是否已赋值
                     * 
                     */
                    bool OriginalCodeHasBeenSet() const;

                    /**
                     * 获取<p>原发票号码，对应蓝字发票号码。</p>
                     * @return OriginalNumber <p>原发票号码，对应蓝字发票号码。</p>
                     * 
                     */
                    std::string GetOriginalNumber() const;

                    /**
                     * 设置<p>原发票号码，对应蓝字发票号码。</p>
                     * @param _originalNumber <p>原发票号码，对应蓝字发票号码。</p>
                     * 
                     */
                    void SetOriginalNumber(const std::string& _originalNumber);

                    /**
                     * 判断参数 OriginalNumber 是否已赋值
                     * @return OriginalNumber 是否已赋值
                     * 
                     */
                    bool OriginalNumberHasBeenSet() const;

                private:

                    /**
                     * <p>发票代码</p>
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * <p>发票号码</p>
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * <p>开票日期</p>
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * <p>购方抬头<br>通用机打发票类型时不返回</p>
                     */
                    std::string m_buyerName;
                    bool m_buyerNameHasBeenSet;

                    /**
                     * <p>购方税号<br>通用机打发票类型时不返回</p>
                     */
                    std::string m_buyerTaxCode;
                    bool m_buyerTaxCodeHasBeenSet;

                    /**
                     * <p>购方地址电话<br>通用机打发票类型做不返回</p>
                     */
                    std::string m_buyerAddressPhone;
                    bool m_buyerAddressPhoneHasBeenSet;

                    /**
                     * <p>购方银行账号<br>通用机打发票类型时不返回</p>
                     */
                    std::string m_buyerBankAccount;
                    bool m_buyerBankAccountHasBeenSet;

                    /**
                     * <p>销方名称</p>
                     */
                    std::string m_sellerName;
                    bool m_sellerNameHasBeenSet;

                    /**
                     * <p>销方税号</p>
                     */
                    std::string m_sellerTaxCode;
                    bool m_sellerTaxCodeHasBeenSet;

                    /**
                     * <p>销方地址电话</p>
                     */
                    std::string m_sellerAddressPhone;
                    bool m_sellerAddressPhoneHasBeenSet;

                    /**
                     * <p>销方银行账号</p>
                     */
                    std::string m_sellerBankAccount;
                    bool m_sellerBankAccountHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>机器编码</p>
                     */
                    std::string m_machineNo;
                    bool m_machineNoHasBeenSet;

                    /**
                     * <p>票种类型<br>01：增值税专用发票，<br>02：货运运输业增值税专用发票，<br>03：机动车销售统一发票，<br>04：增值税普通发票，<br>08：增值税电子专用发票（含全电，全电仅新版接口支持），<br>09：全电发票，<br>0901：全电纸质发票(增值税专用发票)，<br>0903：全电纸质(机动车销售统一发票)，<br>0904：全电纸质发票(增值税普通发票)，<br>0910：电子发票(普通发票)，<br>0915：全电纸质(二手车销售统一发票)，<br>0920：电子发票(增值税专用发票)，<br>0930：电子发票(机动车销售统一发票)，<br>0940：电子发票(二手车销售统一发票)，<br>10：增值税电子普通发票（含全电，全电仅新版接口支持），<br>11：增值税普通发票（卷式），<br>14：增值税电子（通行费）发票，<br>15：二手车销售统一发票，<br>32：深圳区块链发票，<br>61：电子发票（航空运输电子客票行程单），<br>8208：电子发票(通行费发票)，<br>83：电子发票(铁路电子客票)，<br>100：区块链发票，<br>101：财政票据，<br>102：通用电子发票，<br>103：车辆通行费</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>具体的全电发票类型：01: 全电专用发票；02：全电普通发票；03：全电火车票；04：全电机票行程单</p>
                     */
                    std::string m_electronicType;
                    bool m_electronicTypeHasBeenSet;

                    /**
                     * <p>检验码</p>
                     */
                    std::string m_checkCode;
                    bool m_checkCodeHasBeenSet;

                    /**
                     * <p>是否作废（红冲）是否作废（红冲）<br>Y：已作废，N：未作废，H：红冲，HP：部分红冲，HF：全额红冲</p>
                     */
                    std::string m_isAbandoned;
                    bool m_isAbandonedHasBeenSet;

                    /**
                     * <p>是否有销货清单<br>Y: 有清单 N：无清单<br>卷票无</p>
                     */
                    std::string m_hasSellerList;
                    bool m_hasSellerListHasBeenSet;

                    /**
                     * <p>销货清单标题</p>
                     */
                    std::string m_sellerListTitle;
                    bool m_sellerListTitleHasBeenSet;

                    /**
                     * <p>销货清单税额</p>
                     */
                    std::string m_sellerListTax;
                    bool m_sellerListTaxHasBeenSet;

                    /**
                     * <p>不含税金额</p>
                     */
                    std::string m_amountWithoutTax;
                    bool m_amountWithoutTaxHasBeenSet;

                    /**
                     * <p>税额</p>
                     */
                    std::string m_taxAmount;
                    bool m_taxAmountHasBeenSet;

                    /**
                     * <p>含税金额</p>
                     */
                    std::string m_amountWithTax;
                    bool m_amountWithTaxHasBeenSet;

                    /**
                     * <p>项目明细</p>
                     */
                    std::vector<VatInvoiceItem> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * <p>所属税局</p>
                     */
                    std::string m_taxBureau;
                    bool m_taxBureauHasBeenSet;

                    /**
                     * <p>通行费标志:Y、是;N、否</p>
                     */
                    std::string m_trafficFreeFlag;
                    bool m_trafficFreeFlagHasBeenSet;

                    /**
                     * <p>是否为红票</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_redLetterInvoiceMark;
                    bool m_redLetterInvoiceMarkHasBeenSet;

                    /**
                     * <p>开具类型标识（0: 委托代开，1：自开，2：代开，3：代办退税</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_issuingTypeMark;
                    bool m_issuingTypeMarkHasBeenSet;

                    /**
                     * <p>代开销售方名称</p>
                     */
                    std::string m_sellerAgentName;
                    bool m_sellerAgentNameHasBeenSet;

                    /**
                     * <p>代开销售方税号</p>
                     */
                    std::string m_sellerAgentTaxID;
                    bool m_sellerAgentTaxIDHasBeenSet;

                    /**
                     * <p>地区代码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regionCode;
                    bool m_regionCodeHasBeenSet;

                    /**
                     * <p>复核人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reviewerName;
                    bool m_reviewerNameHasBeenSet;

                    /**
                     * <p>开票人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_issuerName;
                    bool m_issuerNameHasBeenSet;

                    /**
                     * <p>收款人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payeeName;
                    bool m_payeeNameHasBeenSet;

                    /**
                     * <p>开票机号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_machineCode;
                    bool m_machineCodeHasBeenSet;

                    /**
                     * <p>税控码/密码区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taxControlCode;
                    bool m_taxControlCodeHasBeenSet;

                    /**
                     * <p>价税合计（中文大写）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_amountWithTaxCN;
                    bool m_amountWithTaxCNHasBeenSet;

                    /**
                     * <p>税率</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taxRate;
                    bool m_taxRateHasBeenSet;

                    /**
                     * <p>特殊票种代码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_specialTicketCode;
                    bool m_specialTicketCodeHasBeenSet;

                    /**
                     * <p>红字发票信息列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RedLetterInvoiceItem> m_redLetterInvoices;
                    bool m_redLetterInvoicesHasBeenSet;

                    /**
                     * <p>全电类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fullElectronicType;
                    bool m_fullElectronicTypeHasBeenSet;

                    /**
                     * <p>OFD版式文件下载链接</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ofdUrl;
                    bool m_ofdUrlHasBeenSet;

                    /**
                     * <p>PDF版式文件下载链接</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pdfUrl;
                    bool m_pdfUrlHasBeenSet;

                    /**
                     * <p>原发票代码，对应蓝字发票代码。</p>
                     */
                    std::string m_originalCode;
                    bool m_originalCodeHasBeenSet;

                    /**
                     * <p>原发票号码，对应蓝字发票号码。</p>
                     */
                    std::string m_originalNumber;
                    bool m_originalNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICE_H_
