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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYINVOICERESULTDATA_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYINVOICERESULTDATA_H_

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
                * 查询发票结果数据
                */
                class QueryInvoiceResultData : public AbstractModel
                {
                public:
                    QueryInvoiceResultData();
                    ~QueryInvoiceResultData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取订单号
                     * @return OrderId 订单号
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单号
                     * @param _orderId 订单号
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取业务开票号
                     * @return OrderSn 业务开票号
                     * 
                     */
                    std::string GetOrderSn() const;

                    /**
                     * 设置业务开票号
                     * @param _orderSn 业务开票号
                     * 
                     */
                    void SetOrderSn(const std::string& _orderSn);

                    /**
                     * 判断参数 OrderSn 是否已赋值
                     * @return OrderSn 是否已赋值
                     * 
                     */
                    bool OrderSnHasBeenSet() const;

                    /**
                     * 获取发票状态
                     * @return Status 发票状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置发票状态
                     * @param _status 发票状态
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取开票描述
                     * @return Message 开票描述
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置开票描述
                     * @param _message 开票描述
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取开票日期
                     * @return TicketDate 开票日期
                     * 
                     */
                    std::string GetTicketDate() const;

                    /**
                     * 设置开票日期
                     * @param _ticketDate 开票日期
                     * 
                     */
                    void SetTicketDate(const std::string& _ticketDate);

                    /**
                     * 判断参数 TicketDate 是否已赋值
                     * @return TicketDate 是否已赋值
                     * 
                     */
                    bool TicketDateHasBeenSet() const;

                    /**
                     * 获取发票号码
                     * @return TicketSn 发票号码
                     * 
                     */
                    std::string GetTicketSn() const;

                    /**
                     * 设置发票号码
                     * @param _ticketSn 发票号码
                     * 
                     */
                    void SetTicketSn(const std::string& _ticketSn);

                    /**
                     * 判断参数 TicketSn 是否已赋值
                     * @return TicketSn 是否已赋值
                     * 
                     */
                    bool TicketSnHasBeenSet() const;

                    /**
                     * 获取发票代码
                     * @return TicketCode 发票代码
                     * 
                     */
                    std::string GetTicketCode() const;

                    /**
                     * 设置发票代码
                     * @param _ticketCode 发票代码
                     * 
                     */
                    void SetTicketCode(const std::string& _ticketCode);

                    /**
                     * 判断参数 TicketCode 是否已赋值
                     * @return TicketCode 是否已赋值
                     * 
                     */
                    bool TicketCodeHasBeenSet() const;

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
                     * 获取含税金额(元)
                     * @return AmountWithTax 含税金额(元)
                     * 
                     */
                    std::string GetAmountWithTax() const;

                    /**
                     * 设置含税金额(元)
                     * @param _amountWithTax 含税金额(元)
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
                     * 获取不含税金额(元)
                     * @return AmountWithoutTax 不含税金额(元)
                     * 
                     */
                    std::string GetAmountWithoutTax() const;

                    /**
                     * 设置不含税金额(元)
                     * @param _amountWithoutTax 不含税金额(元)
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
                     * 获取税额(元)
                     * @return TaxAmount 税额(元)
                     * 
                     */
                    std::string GetTaxAmount() const;

                    /**
                     * 设置税额(元)
                     * @param _taxAmount 税额(元)
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
                     * 获取是否被红冲
                     * @return IsRedWashed 是否被红冲
                     * 
                     */
                    int64_t GetIsRedWashed() const;

                    /**
                     * 设置是否被红冲
                     * @param _isRedWashed 是否被红冲
                     * 
                     */
                    void SetIsRedWashed(const int64_t& _isRedWashed);

                    /**
                     * 判断参数 IsRedWashed 是否已赋值
                     * @return IsRedWashed 是否已赋值
                     * 
                     */
                    bool IsRedWashedHasBeenSet() const;

                    /**
                     * 获取pdf地址
                     * @return PdfUrl pdf地址
                     * 
                     */
                    std::string GetPdfUrl() const;

                    /**
                     * 设置pdf地址
                     * @param _pdfUrl pdf地址
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
                     * 获取png地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageUrl png地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置png地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageUrl png地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                private:

                    /**
                     * 订单号
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 业务开票号
                     */
                    std::string m_orderSn;
                    bool m_orderSnHasBeenSet;

                    /**
                     * 发票状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 开票描述
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 开票日期
                     */
                    std::string m_ticketDate;
                    bool m_ticketDateHasBeenSet;

                    /**
                     * 发票号码
                     */
                    std::string m_ticketSn;
                    bool m_ticketSnHasBeenSet;

                    /**
                     * 发票代码
                     */
                    std::string m_ticketCode;
                    bool m_ticketCodeHasBeenSet;

                    /**
                     * 检验码
                     */
                    std::string m_checkCode;
                    bool m_checkCodeHasBeenSet;

                    /**
                     * 含税金额(元)
                     */
                    std::string m_amountWithTax;
                    bool m_amountWithTaxHasBeenSet;

                    /**
                     * 不含税金额(元)
                     */
                    std::string m_amountWithoutTax;
                    bool m_amountWithoutTaxHasBeenSet;

                    /**
                     * 税额(元)
                     */
                    std::string m_taxAmount;
                    bool m_taxAmountHasBeenSet;

                    /**
                     * 是否被红冲
                     */
                    int64_t m_isRedWashed;
                    bool m_isRedWashedHasBeenSet;

                    /**
                     * pdf地址
                     */
                    std::string m_pdfUrl;
                    bool m_pdfUrlHasBeenSet;

                    /**
                     * png地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYINVOICERESULTDATA_H_
