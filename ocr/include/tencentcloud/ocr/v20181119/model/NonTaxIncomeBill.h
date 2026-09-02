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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_NONTAXINCOMEBILL_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_NONTAXINCOMEBILL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/NonTaxItem.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 非税收入
                */
                class NonTaxIncomeBill : public AbstractModel
                {
                public:
                    NonTaxIncomeBill();
                    ~NonTaxIncomeBill() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>发票名称</p>
                     * @return Title <p>发票名称</p>
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置<p>发票名称</p>
                     * @param _title <p>发票名称</p>
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
                     * 获取<p>校验码</p>
                     * @return CheckCode <p>校验码</p>
                     * 
                     */
                    std::string GetCheckCode() const;

                    /**
                     * 设置<p>校验码</p>
                     * @param _checkCode <p>校验码</p>
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
                     * 获取<p>价税合计（小写）</p>
                     * @return Total <p>价税合计（小写）</p>
                     * 
                     */
                    std::string GetTotal() const;

                    /**
                     * 设置<p>价税合计（小写）</p>
                     * @param _total <p>价税合计（小写）</p>
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
                     * 获取<p>价税合计（大写）</p>
                     * @return TotalCn <p>价税合计（大写）</p>
                     * 
                     */
                    std::string GetTotalCn() const;

                    /**
                     * 设置<p>价税合计（大写）</p>
                     * @param _totalCn <p>价税合计（大写）</p>
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
                     * 获取<p>交款人名称</p>
                     * @return Buyer <p>交款人名称</p>
                     * 
                     */
                    std::string GetBuyer() const;

                    /**
                     * 设置<p>交款人名称</p>
                     * @param _buyer <p>交款人名称</p>
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
                     * 获取<p>交款人纳税人识别号</p>
                     * @return BuyerTaxID <p>交款人纳税人识别号</p>
                     * 
                     */
                    std::string GetBuyerTaxID() const;

                    /**
                     * 设置<p>交款人纳税人识别号</p>
                     * @param _buyerTaxID <p>交款人纳税人识别号</p>
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
                     * 获取<p>收款人名称</p>
                     * @return Seller <p>收款人名称</p>
                     * 
                     */
                    std::string GetSeller() const;

                    /**
                     * 设置<p>收款人名称</p>
                     * @param _seller <p>收款人名称</p>
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
                     * 获取<p>收款单位名称</p>
                     * @return SellerCompany <p>收款单位名称</p>
                     * 
                     */
                    std::string GetSellerCompany() const;

                    /**
                     * 设置<p>收款单位名称</p>
                     * @param _sellerCompany <p>收款单位名称</p>
                     * 
                     */
                    void SetSellerCompany(const std::string& _sellerCompany);

                    /**
                     * 判断参数 SellerCompany 是否已赋值
                     * @return SellerCompany 是否已赋值
                     * 
                     */
                    bool SellerCompanyHasBeenSet() const;

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
                     * 获取<p>币种</p>
                     * @return CurrencyCode <p>币种</p>
                     * 
                     */
                    std::string GetCurrencyCode() const;

                    /**
                     * 设置<p>币种</p>
                     * @param _currencyCode <p>币种</p>
                     * 
                     */
                    void SetCurrencyCode(const std::string& _currencyCode);

                    /**
                     * 判断参数 CurrencyCode 是否已赋值
                     * @return CurrencyCode 是否已赋值
                     * 
                     */
                    bool CurrencyCodeHasBeenSet() const;

                    /**
                     * 获取<p>复核人</p>
                     * @return Reviewer <p>复核人</p>
                     * 
                     */
                    std::string GetReviewer() const;

                    /**
                     * 设置<p>复核人</p>
                     * @param _reviewer <p>复核人</p>
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
                     * 获取<p>是否存在二维码（1：有，0：无）</p>
                     * @return QRCodeMark <p>是否存在二维码（1：有，0：无）</p>
                     * 
                     */
                    int64_t GetQRCodeMark() const;

                    /**
                     * 设置<p>是否存在二维码（1：有，0：无）</p>
                     * @param _qRCodeMark <p>是否存在二维码（1：有，0：无）</p>
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
                     * 获取<p>其他信息</p>
                     * @return OtherInfo <p>其他信息</p>
                     * 
                     */
                    std::string GetOtherInfo() const;

                    /**
                     * 设置<p>其他信息</p>
                     * @param _otherInfo <p>其他信息</p>
                     * 
                     */
                    void SetOtherInfo(const std::string& _otherInfo);

                    /**
                     * 判断参数 OtherInfo 是否已赋值
                     * @return OtherInfo 是否已赋值
                     * 
                     */
                    bool OtherInfoHasBeenSet() const;

                    /**
                     * 获取<p>缴款码</p>
                     * @return PaymentCode <p>缴款码</p>
                     * 
                     */
                    std::string GetPaymentCode() const;

                    /**
                     * 设置<p>缴款码</p>
                     * @param _paymentCode <p>缴款码</p>
                     * 
                     */
                    void SetPaymentCode(const std::string& _paymentCode);

                    /**
                     * 判断参数 PaymentCode 是否已赋值
                     * @return PaymentCode 是否已赋值
                     * 
                     */
                    bool PaymentCodeHasBeenSet() const;

                    /**
                     * 获取<p>执收单位编码</p>
                     * @return ReceiveUnitCode <p>执收单位编码</p>
                     * 
                     */
                    std::string GetReceiveUnitCode() const;

                    /**
                     * 设置<p>执收单位编码</p>
                     * @param _receiveUnitCode <p>执收单位编码</p>
                     * 
                     */
                    void SetReceiveUnitCode(const std::string& _receiveUnitCode);

                    /**
                     * 判断参数 ReceiveUnitCode 是否已赋值
                     * @return ReceiveUnitCode 是否已赋值
                     * 
                     */
                    bool ReceiveUnitCodeHasBeenSet() const;

                    /**
                     * 获取<p>执收单位名称</p>
                     * @return Receiver <p>执收单位名称</p>
                     * 
                     */
                    std::string GetReceiver() const;

                    /**
                     * 设置<p>执收单位名称</p>
                     * @param _receiver <p>执收单位名称</p>
                     * 
                     */
                    void SetReceiver(const std::string& _receiver);

                    /**
                     * 判断参数 Receiver 是否已赋值
                     * @return Receiver 是否已赋值
                     * 
                     */
                    bool ReceiverHasBeenSet() const;

                    /**
                     * 获取<p>经办人</p>
                     * @return Operator <p>经办人</p>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置<p>经办人</p>
                     * @param _operator <p>经办人</p>
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取<p>付款人账号</p>
                     * @return PayerAccount <p>付款人账号</p>
                     * 
                     */
                    std::string GetPayerAccount() const;

                    /**
                     * 设置<p>付款人账号</p>
                     * @param _payerAccount <p>付款人账号</p>
                     * 
                     */
                    void SetPayerAccount(const std::string& _payerAccount);

                    /**
                     * 判断参数 PayerAccount 是否已赋值
                     * @return PayerAccount 是否已赋值
                     * 
                     */
                    bool PayerAccountHasBeenSet() const;

                    /**
                     * 获取<p>付款人开户银行</p>
                     * @return PayerBank <p>付款人开户银行</p>
                     * 
                     */
                    std::string GetPayerBank() const;

                    /**
                     * 设置<p>付款人开户银行</p>
                     * @param _payerBank <p>付款人开户银行</p>
                     * 
                     */
                    void SetPayerBank(const std::string& _payerBank);

                    /**
                     * 判断参数 PayerBank 是否已赋值
                     * @return PayerBank 是否已赋值
                     * 
                     */
                    bool PayerBankHasBeenSet() const;

                    /**
                     * 获取<p>收款人账号</p>
                     * @return ReceiverAccount <p>收款人账号</p>
                     * 
                     */
                    std::string GetReceiverAccount() const;

                    /**
                     * 设置<p>收款人账号</p>
                     * @param _receiverAccount <p>收款人账号</p>
                     * 
                     */
                    void SetReceiverAccount(const std::string& _receiverAccount);

                    /**
                     * 判断参数 ReceiverAccount 是否已赋值
                     * @return ReceiverAccount 是否已赋值
                     * 
                     */
                    bool ReceiverAccountHasBeenSet() const;

                    /**
                     * 获取<p>收款人开户银行</p>
                     * @return ReceiverBank <p>收款人开户银行</p>
                     * 
                     */
                    std::string GetReceiverBank() const;

                    /**
                     * 设置<p>收款人开户银行</p>
                     * @param _receiverBank <p>收款人开户银行</p>
                     * 
                     */
                    void SetReceiverBank(const std::string& _receiverBank);

                    /**
                     * 判断参数 ReceiverBank 是否已赋值
                     * @return ReceiverBank 是否已赋值
                     * 
                     */
                    bool ReceiverBankHasBeenSet() const;

                    /**
                     * 获取<p>条目</p>
                     * @return NonTaxItems <p>条目</p>
                     * 
                     */
                    std::vector<NonTaxItem> GetNonTaxItems() const;

                    /**
                     * 设置<p>条目</p>
                     * @param _nonTaxItems <p>条目</p>
                     * 
                     */
                    void SetNonTaxItems(const std::vector<NonTaxItem>& _nonTaxItems);

                    /**
                     * 判断参数 NonTaxItems 是否已赋值
                     * @return NonTaxItems 是否已赋值
                     * 
                     */
                    bool NonTaxItemsHasBeenSet() const;

                    /**
                     * 获取<p>票据名称</p>
                     * @return BillName <p>票据名称</p>
                     * 
                     */
                    std::string GetBillName() const;

                    /**
                     * 设置<p>票据名称</p>
                     * @param _billName <p>票据名称</p>
                     * 
                     */
                    void SetBillName(const std::string& _billName);

                    /**
                     * 判断参数 BillName 是否已赋值
                     * @return BillName 是否已赋值
                     * 
                     */
                    bool BillNameHasBeenSet() const;

                private:

                    /**
                     * <p>发票名称</p>
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * <p>发票号码</p>
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * <p>发票代码</p>
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * <p>校验码</p>
                     */
                    std::string m_checkCode;
                    bool m_checkCodeHasBeenSet;

                    /**
                     * <p>开票日期</p>
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * <p>价税合计（小写）</p>
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>价税合计（大写）</p>
                     */
                    std::string m_totalCn;
                    bool m_totalCnHasBeenSet;

                    /**
                     * <p>交款人名称</p>
                     */
                    std::string m_buyer;
                    bool m_buyerHasBeenSet;

                    /**
                     * <p>交款人纳税人识别号</p>
                     */
                    std::string m_buyerTaxID;
                    bool m_buyerTaxIDHasBeenSet;

                    /**
                     * <p>收款人名称</p>
                     */
                    std::string m_seller;
                    bool m_sellerHasBeenSet;

                    /**
                     * <p>收款单位名称</p>
                     */
                    std::string m_sellerCompany;
                    bool m_sellerCompanyHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>币种</p>
                     */
                    std::string m_currencyCode;
                    bool m_currencyCodeHasBeenSet;

                    /**
                     * <p>复核人</p>
                     */
                    std::string m_reviewer;
                    bool m_reviewerHasBeenSet;

                    /**
                     * <p>是否存在二维码（1：有，0：无）</p>
                     */
                    int64_t m_qRCodeMark;
                    bool m_qRCodeMarkHasBeenSet;

                    /**
                     * <p>其他信息</p>
                     */
                    std::string m_otherInfo;
                    bool m_otherInfoHasBeenSet;

                    /**
                     * <p>缴款码</p>
                     */
                    std::string m_paymentCode;
                    bool m_paymentCodeHasBeenSet;

                    /**
                     * <p>执收单位编码</p>
                     */
                    std::string m_receiveUnitCode;
                    bool m_receiveUnitCodeHasBeenSet;

                    /**
                     * <p>执收单位名称</p>
                     */
                    std::string m_receiver;
                    bool m_receiverHasBeenSet;

                    /**
                     * <p>经办人</p>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>付款人账号</p>
                     */
                    std::string m_payerAccount;
                    bool m_payerAccountHasBeenSet;

                    /**
                     * <p>付款人开户银行</p>
                     */
                    std::string m_payerBank;
                    bool m_payerBankHasBeenSet;

                    /**
                     * <p>收款人账号</p>
                     */
                    std::string m_receiverAccount;
                    bool m_receiverAccountHasBeenSet;

                    /**
                     * <p>收款人开户银行</p>
                     */
                    std::string m_receiverBank;
                    bool m_receiverBankHasBeenSet;

                    /**
                     * <p>条目</p>
                     */
                    std::vector<NonTaxItem> m_nonTaxItems;
                    bool m_nonTaxItemsHasBeenSet;

                    /**
                     * <p>票据名称</p>
                     */
                    std::string m_billName;
                    bool m_billNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_NONTAXINCOMEBILL_H_
