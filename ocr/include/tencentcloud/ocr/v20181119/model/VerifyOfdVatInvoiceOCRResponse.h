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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYOFDVATINVOICEOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYOFDVATINVOICEOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/VatInvoiceUserInfo.h>
#include <tencentcloud/ocr/v20181119/model/VatInvoiceGoodsInfo.h>
#include <tencentcloud/ocr/v20181119/model/AirTicketInfo.h>
#include <tencentcloud/ocr/v20181119/model/RailwayTicketInfo.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * VerifyOfdVatInvoiceOCR返回参数结构体
                */
                class VerifyOfdVatInvoiceOCRResponse : public AbstractModel
                {
                public:
                    VerifyOfdVatInvoiceOCRResponse();
                    ~VerifyOfdVatInvoiceOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取发票类型
026:增值税电子普通发票
028:增值税电子专用发票
010:电子发票（普通发票）
020:电子发票（增值税专用发票）
030:电子发票（铁路电子客票）
040:电子发票（航空运输电子客票行程单）
                     * @return Type 发票类型
026:增值税电子普通发票
028:增值税电子专用发票
010:电子发票（普通发票）
020:电子发票（增值税专用发票）
030:电子发票（铁路电子客票）
040:电子发票（航空运输电子客票行程单）
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取发票代码
                     * @return InvoiceCode 发票代码
                     * 
                     */
                    std::string GetInvoiceCode() const;

                    /**
                     * 判断参数 InvoiceCode 是否已赋值
                     * @return InvoiceCode 是否已赋值
                     * 
                     */
                    bool InvoiceCodeHasBeenSet() const;

                    /**
                     * 获取发票号码
                     * @return InvoiceNumber 发票号码
                     * 
                     */
                    std::string GetInvoiceNumber() const;

                    /**
                     * 判断参数 InvoiceNumber 是否已赋值
                     * @return InvoiceNumber 是否已赋值
                     * 
                     */
                    bool InvoiceNumberHasBeenSet() const;

                    /**
                     * 获取开票日期
                     * @return IssueDate 开票日期
                     * 
                     */
                    std::string GetIssueDate() const;

                    /**
                     * 判断参数 IssueDate 是否已赋值
                     * @return IssueDate 是否已赋值
                     * 
                     */
                    bool IssueDateHasBeenSet() const;

                    /**
                     * 获取验证码
                     * @return InvoiceCheckCode 验证码
                     * 
                     */
                    std::string GetInvoiceCheckCode() const;

                    /**
                     * 判断参数 InvoiceCheckCode 是否已赋值
                     * @return InvoiceCheckCode 是否已赋值
                     * 
                     */
                    bool InvoiceCheckCodeHasBeenSet() const;

                    /**
                     * 获取机器编号
                     * @return MachineNumber 机器编号
                     * 
                     */
                    std::string GetMachineNumber() const;

                    /**
                     * 判断参数 MachineNumber 是否已赋值
                     * @return MachineNumber 是否已赋值
                     * 
                     */
                    bool MachineNumberHasBeenSet() const;

                    /**
                     * 获取密码区
                     * @return TaxControlCode 密码区
                     * 
                     */
                    std::string GetTaxControlCode() const;

                    /**
                     * 判断参数 TaxControlCode 是否已赋值
                     * @return TaxControlCode 是否已赋值
                     * 
                     */
                    bool TaxControlCodeHasBeenSet() const;

                    /**
                     * 获取购买方
                     * @return Buyer 购买方
                     * 
                     */
                    VatInvoiceUserInfo GetBuyer() const;

                    /**
                     * 判断参数 Buyer 是否已赋值
                     * @return Buyer 是否已赋值
                     * 
                     */
                    bool BuyerHasBeenSet() const;

                    /**
                     * 获取销售方
                     * @return Seller 销售方
                     * 
                     */
                    VatInvoiceUserInfo GetSeller() const;

                    /**
                     * 判断参数 Seller 是否已赋值
                     * @return Seller 是否已赋值
                     * 
                     */
                    bool SellerHasBeenSet() const;

                    /**
                     * 获取价税合计
                     * @return TaxInclusiveTotalAmount 价税合计
                     * 
                     */
                    std::string GetTaxInclusiveTotalAmount() const;

                    /**
                     * 判断参数 TaxInclusiveTotalAmount 是否已赋值
                     * @return TaxInclusiveTotalAmount 是否已赋值
                     * 
                     */
                    bool TaxInclusiveTotalAmountHasBeenSet() const;

                    /**
                     * 获取开票人
                     * @return InvoiceClerk 开票人
                     * 
                     */
                    std::string GetInvoiceClerk() const;

                    /**
                     * 判断参数 InvoiceClerk 是否已赋值
                     * @return InvoiceClerk 是否已赋值
                     * 
                     */
                    bool InvoiceClerkHasBeenSet() const;

                    /**
                     * 获取收款人
                     * @return Payee 收款人
                     * 
                     */
                    std::string GetPayee() const;

                    /**
                     * 判断参数 Payee 是否已赋值
                     * @return Payee 是否已赋值
                     * 
                     */
                    bool PayeeHasBeenSet() const;

                    /**
                     * 获取复核人
                     * @return Checker 复核人
                     * 
                     */
                    std::string GetChecker() const;

                    /**
                     * 判断参数 Checker 是否已赋值
                     * @return Checker 是否已赋值
                     * 
                     */
                    bool CheckerHasBeenSet() const;

                    /**
                     * 获取税额
                     * @return TaxTotalAmount 税额
                     * 
                     */
                    std::string GetTaxTotalAmount() const;

                    /**
                     * 判断参数 TaxTotalAmount 是否已赋值
                     * @return TaxTotalAmount 是否已赋值
                     * 
                     */
                    bool TaxTotalAmountHasBeenSet() const;

                    /**
                     * 获取不含税金额
                     * @return TaxExclusiveTotalAmount 不含税金额
                     * 
                     */
                    std::string GetTaxExclusiveTotalAmount() const;

                    /**
                     * 判断参数 TaxExclusiveTotalAmount 是否已赋值
                     * @return TaxExclusiveTotalAmount 是否已赋值
                     * 
                     */
                    bool TaxExclusiveTotalAmountHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Note 备注
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取货物或服务清单
                     * @return GoodsInfos 货物或服务清单
                     * 
                     */
                    std::vector<VatInvoiceGoodsInfo> GetGoodsInfos() const;

                    /**
                     * 判断参数 GoodsInfos 是否已赋值
                     * @return GoodsInfos 是否已赋值
                     * 
                     */
                    bool GoodsInfosHasBeenSet() const;

                    /**
                     * 获取航空运输电子客票行程单信息
                     * @return AirTicketInfo 航空运输电子客票行程单信息
                     * 
                     */
                    AirTicketInfo GetAirTicketInfo() const;

                    /**
                     * 判断参数 AirTicketInfo 是否已赋值
                     * @return AirTicketInfo 是否已赋值
                     * 
                     */
                    bool AirTicketInfoHasBeenSet() const;

                    /**
                     * 获取铁路电子客票
                     * @return RailwayTicketInfo 铁路电子客票
                     * 
                     */
                    RailwayTicketInfo GetRailwayTicketInfo() const;

                    /**
                     * 判断参数 RailwayTicketInfo 是否已赋值
                     * @return RailwayTicketInfo 是否已赋值
                     * 
                     */
                    bool RailwayTicketInfoHasBeenSet() const;

                    /**
                     * 获取发票标题
                     * @return InvoiceTitle 发票标题
                     * 
                     */
                    std::string GetInvoiceTitle() const;

                    /**
                     * 判断参数 InvoiceTitle 是否已赋值
                     * @return InvoiceTitle 是否已赋值
                     * 
                     */
                    bool InvoiceTitleHasBeenSet() const;

                private:

                    /**
                     * 发票类型
026:增值税电子普通发票
028:增值税电子专用发票
010:电子发票（普通发票）
020:电子发票（增值税专用发票）
030:电子发票（铁路电子客票）
040:电子发票（航空运输电子客票行程单）
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 发票代码
                     */
                    std::string m_invoiceCode;
                    bool m_invoiceCodeHasBeenSet;

                    /**
                     * 发票号码
                     */
                    std::string m_invoiceNumber;
                    bool m_invoiceNumberHasBeenSet;

                    /**
                     * 开票日期
                     */
                    std::string m_issueDate;
                    bool m_issueDateHasBeenSet;

                    /**
                     * 验证码
                     */
                    std::string m_invoiceCheckCode;
                    bool m_invoiceCheckCodeHasBeenSet;

                    /**
                     * 机器编号
                     */
                    std::string m_machineNumber;
                    bool m_machineNumberHasBeenSet;

                    /**
                     * 密码区
                     */
                    std::string m_taxControlCode;
                    bool m_taxControlCodeHasBeenSet;

                    /**
                     * 购买方
                     */
                    VatInvoiceUserInfo m_buyer;
                    bool m_buyerHasBeenSet;

                    /**
                     * 销售方
                     */
                    VatInvoiceUserInfo m_seller;
                    bool m_sellerHasBeenSet;

                    /**
                     * 价税合计
                     */
                    std::string m_taxInclusiveTotalAmount;
                    bool m_taxInclusiveTotalAmountHasBeenSet;

                    /**
                     * 开票人
                     */
                    std::string m_invoiceClerk;
                    bool m_invoiceClerkHasBeenSet;

                    /**
                     * 收款人
                     */
                    std::string m_payee;
                    bool m_payeeHasBeenSet;

                    /**
                     * 复核人
                     */
                    std::string m_checker;
                    bool m_checkerHasBeenSet;

                    /**
                     * 税额
                     */
                    std::string m_taxTotalAmount;
                    bool m_taxTotalAmountHasBeenSet;

                    /**
                     * 不含税金额
                     */
                    std::string m_taxExclusiveTotalAmount;
                    bool m_taxExclusiveTotalAmountHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * 货物或服务清单
                     */
                    std::vector<VatInvoiceGoodsInfo> m_goodsInfos;
                    bool m_goodsInfosHasBeenSet;

                    /**
                     * 航空运输电子客票行程单信息
                     */
                    AirTicketInfo m_airTicketInfo;
                    bool m_airTicketInfoHasBeenSet;

                    /**
                     * 铁路电子客票
                     */
                    RailwayTicketInfo m_railwayTicketInfo;
                    bool m_railwayTicketInfoHasBeenSet;

                    /**
                     * 发票标题
                     */
                    std::string m_invoiceTitle;
                    bool m_invoiceTitleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYOFDVATINVOICEOCRRESPONSE_H_
