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
                     * 获取发票代码
                     * @return Code 发票代码
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置发票代码
                     * @param _code 发票代码
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
                     * 获取发票号码
                     * @return Number 发票号码
                     * 
                     */
                    std::string GetNumber() const;

                    /**
                     * 设置发票号码
                     * @param _number 发票号码
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
                     * 获取开票日期
                     * @return Date 开票日期
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置开票日期
                     * @param _date 开票日期
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
                     * 获取购方抬头
通用机打发票类型时不返回
                     * @return BuyerName 购方抬头
通用机打发票类型时不返回
                     * 
                     */
                    std::string GetBuyerName() const;

                    /**
                     * 设置购方抬头
通用机打发票类型时不返回
                     * @param _buyerName 购方抬头
通用机打发票类型时不返回
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
                     * 获取购方税号
通用机打发票类型时不返回
                     * @return BuyerTaxCode 购方税号
通用机打发票类型时不返回
                     * 
                     */
                    std::string GetBuyerTaxCode() const;

                    /**
                     * 设置购方税号
通用机打发票类型时不返回
                     * @param _buyerTaxCode 购方税号
通用机打发票类型时不返回
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
                     * 获取购方地址电话
通用机打发票类型做不返回
                     * @return BuyerAddressPhone 购方地址电话
通用机打发票类型做不返回
                     * 
                     */
                    std::string GetBuyerAddressPhone() const;

                    /**
                     * 设置购方地址电话
通用机打发票类型做不返回
                     * @param _buyerAddressPhone 购方地址电话
通用机打发票类型做不返回
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
                     * 获取购方银行账号
通用机打发票类型时不返回
                     * @return BuyerBankAccount 购方银行账号
通用机打发票类型时不返回
                     * 
                     */
                    std::string GetBuyerBankAccount() const;

                    /**
                     * 设置购方银行账号
通用机打发票类型时不返回
                     * @param _buyerBankAccount 购方银行账号
通用机打发票类型时不返回
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
                     * 获取销方名称
                     * @return SellerName 销方名称
                     * 
                     */
                    std::string GetSellerName() const;

                    /**
                     * 设置销方名称
                     * @param _sellerName 销方名称
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
                     * 获取销方税号
                     * @return SellerTaxCode 销方税号
                     * 
                     */
                    std::string GetSellerTaxCode() const;

                    /**
                     * 设置销方税号
                     * @param _sellerTaxCode 销方税号
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
                     * 获取销方地址电话
                     * @return SellerAddressPhone 销方地址电话
                     * 
                     */
                    std::string GetSellerAddressPhone() const;

                    /**
                     * 设置销方地址电话
                     * @param _sellerAddressPhone 销方地址电话
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
                     * 获取销方银行账号
                     * @return SellerBankAccount 销方银行账号
                     * 
                     */
                    std::string GetSellerBankAccount() const;

                    /**
                     * 设置销方银行账号
                     * @param _sellerBankAccount 销方银行账号
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
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
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
                     * 获取机器编码
                     * @return MachineNo 机器编码
                     * 
                     */
                    std::string GetMachineNo() const;

                    /**
                     * 设置机器编码
                     * @param _machineNo 机器编码
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
32：深圳区块链发票，
102：通用机打电子发票
61：电子发票（航空运输电子客票行程单）
83：电子发票（铁路电子发票）
0915：全电纸质（二手车统一销售发票）
0903：全电纸质（机动车统一发票）
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
32：深圳区块链发票，
102：通用机打电子发票
61：电子发票（航空运输电子客票行程单）
83：电子发票（铁路电子发票）
0915：全电纸质（二手车统一销售发票）
0903：全电纸质（机动车统一发票）
                     * 
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
32：深圳区块链发票，
102：通用机打电子发票
61：电子发票（航空运输电子客票行程单）
83：电子发票（铁路电子发票）
0915：全电纸质（二手车统一销售发票）
0903：全电纸质（机动车统一发票）
                     * @param _type 票种类型
01：增值税专用发票，
02：货运运输业增值税专用发票，
03：机动车销售统一发票，
04：增值税普通发票，
08：增值税电子专用发票（含全电，全电仅新版接口支持），
10：增值税电子普通发票（含全电，全电仅新版接口支持），
11：增值税普通发票（卷式），
14：增值税电子（通行费）发票，
15：二手车销售统一发票，
32：深圳区块链发票，
102：通用机打电子发票
61：电子发票（航空运输电子客票行程单）
83：电子发票（铁路电子发票）
0915：全电纸质（二手车统一销售发票）
0903：全电纸质（机动车统一发票）
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
                     * 获取具体的全电发票类型：01: 全电专用发票；02：全电普通发票；03：全电火车票；04：全电机票行程单
                     * @return ElectronicType 具体的全电发票类型：01: 全电专用发票；02：全电普通发票；03：全电火车票；04：全电机票行程单
                     * 
                     */
                    std::string GetElectronicType() const;

                    /**
                     * 设置具体的全电发票类型：01: 全电专用发票；02：全电普通发票；03：全电火车票；04：全电机票行程单
                     * @param _electronicType 具体的全电发票类型：01: 全电专用发票；02：全电普通发票；03：全电火车票；04：全电机票行程单
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
                     * 获取检验码
                     * @return CheckCode 检验码
                     * 
                     */
                    std::string GetCheckCode() const;

                    /**
                     * 设置检验码
                     * @param _checkCode 检验码
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
                     * 获取是否作废（红冲）是否作废（红冲）
Y：已作废，N：未作废，H：红冲，HP：部分红冲，HF：全额红冲
                     * @return IsAbandoned 是否作废（红冲）是否作废（红冲）
Y：已作废，N：未作废，H：红冲，HP：部分红冲，HF：全额红冲
                     * 
                     */
                    std::string GetIsAbandoned() const;

                    /**
                     * 设置是否作废（红冲）是否作废（红冲）
Y：已作废，N：未作废，H：红冲，HP：部分红冲，HF：全额红冲
                     * @param _isAbandoned 是否作废（红冲）是否作废（红冲）
Y：已作废，N：未作废，H：红冲，HP：部分红冲，HF：全额红冲
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
                     * 获取是否有销货清单 
Y: 有清单 N：无清单 
卷票无
                     * @return HasSellerList 是否有销货清单 
Y: 有清单 N：无清单 
卷票无
                     * 
                     */
                    std::string GetHasSellerList() const;

                    /**
                     * 设置是否有销货清单 
Y: 有清单 N：无清单 
卷票无
                     * @param _hasSellerList 是否有销货清单 
Y: 有清单 N：无清单 
卷票无
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
                     * 获取销货清单标题
                     * @return SellerListTitle 销货清单标题
                     * 
                     */
                    std::string GetSellerListTitle() const;

                    /**
                     * 设置销货清单标题
                     * @param _sellerListTitle 销货清单标题
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
                     * 获取销货清单税额
                     * @return SellerListTax 销货清单税额
                     * 
                     */
                    std::string GetSellerListTax() const;

                    /**
                     * 设置销货清单税额
                     * @param _sellerListTax 销货清单税额
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
                     * 获取含税金额
                     * @return AmountWithTax 含税金额
                     * 
                     */
                    std::string GetAmountWithTax() const;

                    /**
                     * 设置含税金额
                     * @param _amountWithTax 含税金额
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
                     * 获取项目明细
                     * @return Items 项目明细
                     * 
                     */
                    std::vector<VatInvoiceItem> GetItems() const;

                    /**
                     * 设置项目明细
                     * @param _items 项目明细
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
                     * 获取所属税局
                     * @return TaxBureau 所属税局
                     * 
                     */
                    std::string GetTaxBureau() const;

                    /**
                     * 设置所属税局
                     * @param _taxBureau 所属税局
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
                     * 获取通行费标志:Y、是;N、否
                     * @return TrafficFreeFlag 通行费标志:Y、是;N、否
                     * 
                     */
                    std::string GetTrafficFreeFlag() const;

                    /**
                     * 设置通行费标志:Y、是;N、否
                     * @param _trafficFreeFlag 通行费标志:Y、是;N、否
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
                     * 获取是否为红票
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RedLetterInvoiceMark 是否为红票
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetRedLetterInvoiceMark() const;

                    /**
                     * 设置是否为红票
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _redLetterInvoiceMark 是否为红票
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
                     * 获取开具类型标识（0: 委托代开，1：自开，2：代开，3：代办退税
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IssuingTypeMark 开具类型标识（0: 委托代开，1：自开，2：代开，3：代办退税
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIssuingTypeMark() const;

                    /**
                     * 设置开具类型标识（0: 委托代开，1：自开，2：代开，3：代办退税
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _issuingTypeMark 开具类型标识（0: 委托代开，1：自开，2：代开，3：代办退税
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
                     * 获取代开销售方名称
                     * @return SellerAgentName 代开销售方名称
                     * 
                     */
                    std::string GetSellerAgentName() const;

                    /**
                     * 设置代开销售方名称
                     * @param _sellerAgentName 代开销售方名称
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
                     * 获取代开销售方税号
                     * @return SellerAgentTaxID 代开销售方税号
                     * 
                     */
                    std::string GetSellerAgentTaxID() const;

                    /**
                     * 设置代开销售方税号
                     * @param _sellerAgentTaxID 代开销售方税号
                     * 
                     */
                    void SetSellerAgentTaxID(const std::string& _sellerAgentTaxID);

                    /**
                     * 判断参数 SellerAgentTaxID 是否已赋值
                     * @return SellerAgentTaxID 是否已赋值
                     * 
                     */
                    bool SellerAgentTaxIDHasBeenSet() const;

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
通用机打发票类型时不返回
                     */
                    std::string m_buyerName;
                    bool m_buyerNameHasBeenSet;

                    /**
                     * 购方税号
通用机打发票类型时不返回
                     */
                    std::string m_buyerTaxCode;
                    bool m_buyerTaxCodeHasBeenSet;

                    /**
                     * 购方地址电话
通用机打发票类型做不返回
                     */
                    std::string m_buyerAddressPhone;
                    bool m_buyerAddressPhoneHasBeenSet;

                    /**
                     * 购方银行账号
通用机打发票类型时不返回
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
32：深圳区块链发票，
102：通用机打电子发票
61：电子发票（航空运输电子客票行程单）
83：电子发票（铁路电子发票）
0915：全电纸质（二手车统一销售发票）
0903：全电纸质（机动车统一发票）
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 具体的全电发票类型：01: 全电专用发票；02：全电普通发票；03：全电火车票；04：全电机票行程单
                     */
                    std::string m_electronicType;
                    bool m_electronicTypeHasBeenSet;

                    /**
                     * 检验码
                     */
                    std::string m_checkCode;
                    bool m_checkCodeHasBeenSet;

                    /**
                     * 是否作废（红冲）是否作废（红冲）
Y：已作废，N：未作废，H：红冲，HP：部分红冲，HF：全额红冲
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

                    /**
                     * 所属税局
                     */
                    std::string m_taxBureau;
                    bool m_taxBureauHasBeenSet;

                    /**
                     * 通行费标志:Y、是;N、否
                     */
                    std::string m_trafficFreeFlag;
                    bool m_trafficFreeFlagHasBeenSet;

                    /**
                     * 是否为红票
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_redLetterInvoiceMark;
                    bool m_redLetterInvoiceMarkHasBeenSet;

                    /**
                     * 开具类型标识（0: 委托代开，1：自开，2：代开，3：代办退税
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_issuingTypeMark;
                    bool m_issuingTypeMarkHasBeenSet;

                    /**
                     * 代开销售方名称
                     */
                    std::string m_sellerAgentName;
                    bool m_sellerAgentNameHasBeenSet;

                    /**
                     * 代开销售方税号
                     */
                    std::string m_sellerAgentTaxID;
                    bool m_sellerAgentTaxIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICE_H_
