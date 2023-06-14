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
                     * 获取交款人名称
                     * @return Buyer 交款人名称
                     * 
                     */
                    std::string GetBuyer() const;

                    /**
                     * 设置交款人名称
                     * @param _buyer 交款人名称
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
                     * 获取交款人纳税人识别号
                     * @return BuyerTaxID 交款人纳税人识别号
                     * 
                     */
                    std::string GetBuyerTaxID() const;

                    /**
                     * 设置交款人纳税人识别号
                     * @param _buyerTaxID 交款人纳税人识别号
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
                     * 获取收款人名称
                     * @return Seller 收款人名称
                     * 
                     */
                    std::string GetSeller() const;

                    /**
                     * 设置收款人名称
                     * @param _seller 收款人名称
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
                     * 获取收款单位名称
                     * @return SellerCompany 收款单位名称
                     * 
                     */
                    std::string GetSellerCompany() const;

                    /**
                     * 设置收款单位名称
                     * @param _sellerCompany 收款单位名称
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
                     * 获取币种
                     * @return CurrencyCode 币种
                     * 
                     */
                    std::string GetCurrencyCode() const;

                    /**
                     * 设置币种
                     * @param _currencyCode 币种
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
                     * 获取其他信息
                     * @return OtherInfo 其他信息
                     * 
                     */
                    std::string GetOtherInfo() const;

                    /**
                     * 设置其他信息
                     * @param _otherInfo 其他信息
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
                     * 获取缴款码
                     * @return PaymentCode 缴款码
                     * 
                     */
                    std::string GetPaymentCode() const;

                    /**
                     * 设置缴款码
                     * @param _paymentCode 缴款码
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
                     * 获取执收单位编码
                     * @return ReceiveUnitCode 执收单位编码
                     * 
                     */
                    std::string GetReceiveUnitCode() const;

                    /**
                     * 设置执收单位编码
                     * @param _receiveUnitCode 执收单位编码
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
                     * 获取执收单位名称
                     * @return Receiver 执收单位名称
                     * 
                     */
                    std::string GetReceiver() const;

                    /**
                     * 设置执收单位名称
                     * @param _receiver 执收单位名称
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
                     * 获取经办人
                     * @return Operator 经办人
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置经办人
                     * @param _operator 经办人
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
                     * 获取付款人账号
                     * @return PayerAccount 付款人账号
                     * 
                     */
                    std::string GetPayerAccount() const;

                    /**
                     * 设置付款人账号
                     * @param _payerAccount 付款人账号
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
                     * 获取付款人开户银行
                     * @return PayerBank 付款人开户银行
                     * 
                     */
                    std::string GetPayerBank() const;

                    /**
                     * 设置付款人开户银行
                     * @param _payerBank 付款人开户银行
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
                     * 获取收款人账号
                     * @return ReceiverAccount 收款人账号
                     * 
                     */
                    std::string GetReceiverAccount() const;

                    /**
                     * 设置收款人账号
                     * @param _receiverAccount 收款人账号
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
                     * 获取收款人开户银行
                     * @return ReceiverBank 收款人开户银行
                     * 
                     */
                    std::string GetReceiverBank() const;

                    /**
                     * 设置收款人开户银行
                     * @param _receiverBank 收款人开户银行
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
                     * 获取条目
                     * @return NonTaxItems 条目
                     * 
                     */
                    std::vector<NonTaxItem> GetNonTaxItems() const;

                    /**
                     * 设置条目
                     * @param _nonTaxItems 条目
                     * 
                     */
                    void SetNonTaxItems(const std::vector<NonTaxItem>& _nonTaxItems);

                    /**
                     * 判断参数 NonTaxItems 是否已赋值
                     * @return NonTaxItems 是否已赋值
                     * 
                     */
                    bool NonTaxItemsHasBeenSet() const;

                private:

                    /**
                     * 发票名称
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 发票号码
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * 发票代码
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 校验码
                     */
                    std::string m_checkCode;
                    bool m_checkCodeHasBeenSet;

                    /**
                     * 开票日期
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

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
                     * 交款人名称
                     */
                    std::string m_buyer;
                    bool m_buyerHasBeenSet;

                    /**
                     * 交款人纳税人识别号
                     */
                    std::string m_buyerTaxID;
                    bool m_buyerTaxIDHasBeenSet;

                    /**
                     * 收款人名称
                     */
                    std::string m_seller;
                    bool m_sellerHasBeenSet;

                    /**
                     * 收款单位名称
                     */
                    std::string m_sellerCompany;
                    bool m_sellerCompanyHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 币种
                     */
                    std::string m_currencyCode;
                    bool m_currencyCodeHasBeenSet;

                    /**
                     * 复核人
                     */
                    std::string m_reviewer;
                    bool m_reviewerHasBeenSet;

                    /**
                     * 是否存在二维码（1：有，0：无）
                     */
                    int64_t m_qRCodeMark;
                    bool m_qRCodeMarkHasBeenSet;

                    /**
                     * 其他信息
                     */
                    std::string m_otherInfo;
                    bool m_otherInfoHasBeenSet;

                    /**
                     * 缴款码
                     */
                    std::string m_paymentCode;
                    bool m_paymentCodeHasBeenSet;

                    /**
                     * 执收单位编码
                     */
                    std::string m_receiveUnitCode;
                    bool m_receiveUnitCodeHasBeenSet;

                    /**
                     * 执收单位名称
                     */
                    std::string m_receiver;
                    bool m_receiverHasBeenSet;

                    /**
                     * 经办人
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 付款人账号
                     */
                    std::string m_payerAccount;
                    bool m_payerAccountHasBeenSet;

                    /**
                     * 付款人开户银行
                     */
                    std::string m_payerBank;
                    bool m_payerBankHasBeenSet;

                    /**
                     * 收款人账号
                     */
                    std::string m_receiverAccount;
                    bool m_receiverAccountHasBeenSet;

                    /**
                     * 收款人开户银行
                     */
                    std::string m_receiverBank;
                    bool m_receiverBankHasBeenSet;

                    /**
                     * 条目
                     */
                    std::vector<NonTaxItem> m_nonTaxItems;
                    bool m_nonTaxItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_NONTAXINCOMEBILL_H_
