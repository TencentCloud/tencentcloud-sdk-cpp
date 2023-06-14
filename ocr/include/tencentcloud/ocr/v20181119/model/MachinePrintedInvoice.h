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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_MACHINEPRINTEDINVOICE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_MACHINEPRINTEDINVOICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/GeneralMachineItem.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 通用机打发票
                */
                class MachinePrintedInvoice : public AbstractModel
                {
                public:
                    MachinePrintedInvoice();
                    ~MachinePrintedInvoice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取发票名称
                     * @return Title 发票名称
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置发票名称
                     * @param _title 发票名称
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取是否存在二维码（1：有，0：无）
                     * @return QRCodeMark 是否存在二维码（1：有，0：无）
                     * 
                     */
                    int64_t GetQRCodeMark() const;

                    /**
                     * 设置是否存在二维码（1：有，0：无）
                     * @param _qRCodeMark 是否存在二维码（1：有，0：无）
                     * 
                     */
                    void SetQRCodeMark(const int64_t& _qRCodeMark);

                    /**
                     * 判断参数 QRCodeMark 是否已赋值
                     * @return QRCodeMark 是否已赋值
                     * 
                     */
                    bool QRCodeMarkHasBeenSet() const;

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
                     * 获取时间
                     * @return Time 时间
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置时间
                     * @param _time 时间
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取校验码
                     * @return CheckCode 校验码
                     * 
                     */
                    std::string GetCheckCode() const;

                    /**
                     * 设置校验码
                     * @param _checkCode 校验码
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
                     * 获取密码区
                     * @return Ciphertext 密码区
                     * 
                     */
                    std::string GetCiphertext() const;

                    /**
                     * 设置密码区
                     * @param _ciphertext 密码区
                     * 
                     */
                    void SetCiphertext(const std::string& _ciphertext);

                    /**
                     * 判断参数 Ciphertext 是否已赋值
                     * @return Ciphertext 是否已赋值
                     * 
                     */
                    bool CiphertextHasBeenSet() const;

                    /**
                     * 获取种类
                     * @return Category 种类
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置种类
                     * @param _category 种类
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取税前金额
                     * @return PretaxAmount 税前金额
                     * 
                     */
                    std::string GetPretaxAmount() const;

                    /**
                     * 设置税前金额
                     * @param _pretaxAmount 税前金额
                     * 
                     */
                    void SetPretaxAmount(const std::string& _pretaxAmount);

                    /**
                     * 判断参数 PretaxAmount 是否已赋值
                     * @return PretaxAmount 是否已赋值
                     * 
                     */
                    bool PretaxAmountHasBeenSet() const;

                    /**
                     * 获取价税合计（小写）
                     * @return Total 价税合计（小写）
                     * 
                     */
                    std::string GetTotal() const;

                    /**
                     * 设置价税合计（小写）
                     * @param _total 价税合计（小写）
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
                     * 获取价税合计（大写）
                     * @return TotalCn 价税合计（大写）
                     * 
                     */
                    std::string GetTotalCn() const;

                    /**
                     * 设置价税合计（大写）
                     * @param _totalCn 价税合计（大写）
                     * 
                     */
                    void SetTotalCn(const std::string& _totalCn);

                    /**
                     * 判断参数 TotalCn 是否已赋值
                     * @return TotalCn 是否已赋值
                     * 
                     */
                    bool TotalCnHasBeenSet() const;

                    /**
                     * 获取合计税额
                     * @return Tax 合计税额
                     * 
                     */
                    std::string GetTax() const;

                    /**
                     * 设置合计税额
                     * @param _tax 合计税额
                     * 
                     */
                    void SetTax(const std::string& _tax);

                    /**
                     * 判断参数 Tax 是否已赋值
                     * @return Tax 是否已赋值
                     * 
                     */
                    bool TaxHasBeenSet() const;

                    /**
                     * 获取行业分类
                     * @return IndustryClass 行业分类
                     * 
                     */
                    std::string GetIndustryClass() const;

                    /**
                     * 设置行业分类
                     * @param _industryClass 行业分类
                     * 
                     */
                    void SetIndustryClass(const std::string& _industryClass);

                    /**
                     * 判断参数 IndustryClass 是否已赋值
                     * @return IndustryClass 是否已赋值
                     * 
                     */
                    bool IndustryClassHasBeenSet() const;

                    /**
                     * 获取销售方名称
                     * @return Seller 销售方名称
                     * 
                     */
                    std::string GetSeller() const;

                    /**
                     * 设置销售方名称
                     * @param _seller 销售方名称
                     * 
                     */
                    void SetSeller(const std::string& _seller);

                    /**
                     * 判断参数 Seller 是否已赋值
                     * @return Seller 是否已赋值
                     * 
                     */
                    bool SellerHasBeenSet() const;

                    /**
                     * 获取销售方纳税人识别号
                     * @return SellerTaxID 销售方纳税人识别号
                     * 
                     */
                    std::string GetSellerTaxID() const;

                    /**
                     * 设置销售方纳税人识别号
                     * @param _sellerTaxID 销售方纳税人识别号
                     * 
                     */
                    void SetSellerTaxID(const std::string& _sellerTaxID);

                    /**
                     * 判断参数 SellerTaxID 是否已赋值
                     * @return SellerTaxID 是否已赋值
                     * 
                     */
                    bool SellerTaxIDHasBeenSet() const;

                    /**
                     * 获取销售方地址电话
                     * @return SellerAddrTel 销售方地址电话
                     * 
                     */
                    std::string GetSellerAddrTel() const;

                    /**
                     * 设置销售方地址电话
                     * @param _sellerAddrTel 销售方地址电话
                     * 
                     */
                    void SetSellerAddrTel(const std::string& _sellerAddrTel);

                    /**
                     * 判断参数 SellerAddrTel 是否已赋值
                     * @return SellerAddrTel 是否已赋值
                     * 
                     */
                    bool SellerAddrTelHasBeenSet() const;

                    /**
                     * 获取销售方银行账号
                     * @return SellerBankAccount 销售方银行账号
                     * 
                     */
                    std::string GetSellerBankAccount() const;

                    /**
                     * 设置销售方银行账号
                     * @param _sellerBankAccount 销售方银行账号
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
                     * 获取购买方名称
                     * @return Buyer 购买方名称
                     * 
                     */
                    std::string GetBuyer() const;

                    /**
                     * 设置购买方名称
                     * @param _buyer 购买方名称
                     * 
                     */
                    void SetBuyer(const std::string& _buyer);

                    /**
                     * 判断参数 Buyer 是否已赋值
                     * @return Buyer 是否已赋值
                     * 
                     */
                    bool BuyerHasBeenSet() const;

                    /**
                     * 获取购买方纳税人识别号
                     * @return BuyerTaxID 购买方纳税人识别号
                     * 
                     */
                    std::string GetBuyerTaxID() const;

                    /**
                     * 设置购买方纳税人识别号
                     * @param _buyerTaxID 购买方纳税人识别号
                     * 
                     */
                    void SetBuyerTaxID(const std::string& _buyerTaxID);

                    /**
                     * 判断参数 BuyerTaxID 是否已赋值
                     * @return BuyerTaxID 是否已赋值
                     * 
                     */
                    bool BuyerTaxIDHasBeenSet() const;

                    /**
                     * 获取购买方地址电话
                     * @return BuyerAddrTel 购买方地址电话
                     * 
                     */
                    std::string GetBuyerAddrTel() const;

                    /**
                     * 设置购买方地址电话
                     * @param _buyerAddrTel 购买方地址电话
                     * 
                     */
                    void SetBuyerAddrTel(const std::string& _buyerAddrTel);

                    /**
                     * 判断参数 BuyerAddrTel 是否已赋值
                     * @return BuyerAddrTel 是否已赋值
                     * 
                     */
                    bool BuyerAddrTelHasBeenSet() const;

                    /**
                     * 获取购买方银行账号
                     * @return BuyerBankAccount 购买方银行账号
                     * 
                     */
                    std::string GetBuyerBankAccount() const;

                    /**
                     * 设置购买方银行账号
                     * @param _buyerBankAccount 购买方银行账号
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
                     * 获取发票消费类型
                     * @return Kind 发票消费类型
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置发票消费类型
                     * @param _kind 发票消费类型
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取省
                     * @return Province 省
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置省
                     * @param _province 省
                     * 
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取市
                     * @return City 市
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置市
                     * @param _city 市
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取是否有公司印章（0：没有，1：有）
                     * @return CompanySealMark 是否有公司印章（0：没有，1：有）
                     * 
                     */
                    int64_t GetCompanySealMark() const;

                    /**
                     * 设置是否有公司印章（0：没有，1：有）
                     * @param _companySealMark 是否有公司印章（0：没有，1：有）
                     * 
                     */
                    void SetCompanySealMark(const int64_t& _companySealMark);

                    /**
                     * 判断参数 CompanySealMark 是否已赋值
                     * @return CompanySealMark 是否已赋值
                     * 
                     */
                    bool CompanySealMarkHasBeenSet() const;

                    /**
                     * 获取是否为浙江/广东通用机打发票（0：没有，1：有）
                     * @return ElectronicMark 是否为浙江/广东通用机打发票（0：没有，1：有）
                     * 
                     */
                    int64_t GetElectronicMark() const;

                    /**
                     * 设置是否为浙江/广东通用机打发票（0：没有，1：有）
                     * @param _electronicMark 是否为浙江/广东通用机打发票（0：没有，1：有）
                     * 
                     */
                    void SetElectronicMark(const int64_t& _electronicMark);

                    /**
                     * 判断参数 ElectronicMark 是否已赋值
                     * @return ElectronicMark 是否已赋值
                     * 
                     */
                    bool ElectronicMarkHasBeenSet() const;

                    /**
                     * 获取开票人
                     * @return Issuer 开票人
                     * 
                     */
                    std::string GetIssuer() const;

                    /**
                     * 设置开票人
                     * @param _issuer 开票人
                     * 
                     */
                    void SetIssuer(const std::string& _issuer);

                    /**
                     * 判断参数 Issuer 是否已赋值
                     * @return Issuer 是否已赋值
                     * 
                     */
                    bool IssuerHasBeenSet() const;

                    /**
                     * 获取收款人
                     * @return Receiptor 收款人
                     * 
                     */
                    std::string GetReceiptor() const;

                    /**
                     * 设置收款人
                     * @param _receiptor 收款人
                     * 
                     */
                    void SetReceiptor(const std::string& _receiptor);

                    /**
                     * 判断参数 Receiptor 是否已赋值
                     * @return Receiptor 是否已赋值
                     * 
                     */
                    bool ReceiptorHasBeenSet() const;

                    /**
                     * 获取复核人
                     * @return Reviewer 复核人
                     * 
                     */
                    std::string GetReviewer() const;

                    /**
                     * 设置复核人
                     * @param _reviewer 复核人
                     * 
                     */
                    void SetReviewer(const std::string& _reviewer);

                    /**
                     * 判断参数 Reviewer 是否已赋值
                     * @return Reviewer 是否已赋值
                     * 
                     */
                    bool ReviewerHasBeenSet() const;

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
                     * 获取经办人支付信息
                     * @return PaymentInfo 经办人支付信息
                     * 
                     */
                    std::string GetPaymentInfo() const;

                    /**
                     * 设置经办人支付信息
                     * @param _paymentInfo 经办人支付信息
                     * 
                     */
                    void SetPaymentInfo(const std::string& _paymentInfo);

                    /**
                     * 判断参数 PaymentInfo 是否已赋值
                     * @return PaymentInfo 是否已赋值
                     * 
                     */
                    bool PaymentInfoHasBeenSet() const;

                    /**
                     * 获取经办人取票用户
                     * @return TicketPickupUser 经办人取票用户
                     * 
                     */
                    std::string GetTicketPickupUser() const;

                    /**
                     * 设置经办人取票用户
                     * @param _ticketPickupUser 经办人取票用户
                     * 
                     */
                    void SetTicketPickupUser(const std::string& _ticketPickupUser);

                    /**
                     * 判断参数 TicketPickupUser 是否已赋值
                     * @return TicketPickupUser 是否已赋值
                     * 
                     */
                    bool TicketPickupUserHasBeenSet() const;

                    /**
                     * 获取经办人商户号
                     * @return MerchantNumber 经办人商户号
                     * 
                     */
                    std::string GetMerchantNumber() const;

                    /**
                     * 设置经办人商户号
                     * @param _merchantNumber 经办人商户号
                     * 
                     */
                    void SetMerchantNumber(const std::string& _merchantNumber);

                    /**
                     * 判断参数 MerchantNumber 是否已赋值
                     * @return MerchantNumber 是否已赋值
                     * 
                     */
                    bool MerchantNumberHasBeenSet() const;

                    /**
                     * 获取经办人订单号
                     * @return OrderNumber 经办人订单号
                     * 
                     */
                    std::string GetOrderNumber() const;

                    /**
                     * 设置经办人订单号
                     * @param _orderNumber 经办人订单号
                     * 
                     */
                    void SetOrderNumber(const std::string& _orderNumber);

                    /**
                     * 判断参数 OrderNumber 是否已赋值
                     * @return OrderNumber 是否已赋值
                     * 
                     */
                    bool OrderNumberHasBeenSet() const;

                    /**
                     * 获取条目
                     * @return GeneralMachineItems 条目
                     * 
                     */
                    std::vector<GeneralMachineItem> GetGeneralMachineItems() const;

                    /**
                     * 设置条目
                     * @param _generalMachineItems 条目
                     * 
                     */
                    void SetGeneralMachineItems(const std::vector<GeneralMachineItem>& _generalMachineItems);

                    /**
                     * 判断参数 GeneralMachineItems 是否已赋值
                     * @return GeneralMachineItems 是否已赋值
                     * 
                     */
                    bool GeneralMachineItemsHasBeenSet() const;

                private:

                    /**
                     * 发票名称
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 是否存在二维码（1：有，0：无）
                     */
                    int64_t m_qRCodeMark;
                    bool m_qRCodeMarkHasBeenSet;

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
                     * 时间
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 校验码
                     */
                    std::string m_checkCode;
                    bool m_checkCodeHasBeenSet;

                    /**
                     * 密码区
                     */
                    std::string m_ciphertext;
                    bool m_ciphertextHasBeenSet;

                    /**
                     * 种类
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 税前金额
                     */
                    std::string m_pretaxAmount;
                    bool m_pretaxAmountHasBeenSet;

                    /**
                     * 价税合计（小写）
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 价税合计（大写）
                     */
                    std::string m_totalCn;
                    bool m_totalCnHasBeenSet;

                    /**
                     * 合计税额
                     */
                    std::string m_tax;
                    bool m_taxHasBeenSet;

                    /**
                     * 行业分类
                     */
                    std::string m_industryClass;
                    bool m_industryClassHasBeenSet;

                    /**
                     * 销售方名称
                     */
                    std::string m_seller;
                    bool m_sellerHasBeenSet;

                    /**
                     * 销售方纳税人识别号
                     */
                    std::string m_sellerTaxID;
                    bool m_sellerTaxIDHasBeenSet;

                    /**
                     * 销售方地址电话
                     */
                    std::string m_sellerAddrTel;
                    bool m_sellerAddrTelHasBeenSet;

                    /**
                     * 销售方银行账号
                     */
                    std::string m_sellerBankAccount;
                    bool m_sellerBankAccountHasBeenSet;

                    /**
                     * 购买方名称
                     */
                    std::string m_buyer;
                    bool m_buyerHasBeenSet;

                    /**
                     * 购买方纳税人识别号
                     */
                    std::string m_buyerTaxID;
                    bool m_buyerTaxIDHasBeenSet;

                    /**
                     * 购买方地址电话
                     */
                    std::string m_buyerAddrTel;
                    bool m_buyerAddrTelHasBeenSet;

                    /**
                     * 购买方银行账号
                     */
                    std::string m_buyerBankAccount;
                    bool m_buyerBankAccountHasBeenSet;

                    /**
                     * 发票消费类型
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * 省
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 市
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 是否有公司印章（0：没有，1：有）
                     */
                    int64_t m_companySealMark;
                    bool m_companySealMarkHasBeenSet;

                    /**
                     * 是否为浙江/广东通用机打发票（0：没有，1：有）
                     */
                    int64_t m_electronicMark;
                    bool m_electronicMarkHasBeenSet;

                    /**
                     * 开票人
                     */
                    std::string m_issuer;
                    bool m_issuerHasBeenSet;

                    /**
                     * 收款人
                     */
                    std::string m_receiptor;
                    bool m_receiptorHasBeenSet;

                    /**
                     * 复核人
                     */
                    std::string m_reviewer;
                    bool m_reviewerHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 经办人支付信息
                     */
                    std::string m_paymentInfo;
                    bool m_paymentInfoHasBeenSet;

                    /**
                     * 经办人取票用户
                     */
                    std::string m_ticketPickupUser;
                    bool m_ticketPickupUserHasBeenSet;

                    /**
                     * 经办人商户号
                     */
                    std::string m_merchantNumber;
                    bool m_merchantNumberHasBeenSet;

                    /**
                     * 经办人订单号
                     */
                    std::string m_orderNumber;
                    bool m_orderNumberHasBeenSet;

                    /**
                     * 条目
                     */
                    std::vector<GeneralMachineItem> m_generalMachineItems;
                    bool m_generalMachineItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_MACHINEPRINTEDINVOICE_H_
