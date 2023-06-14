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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEINVOICEREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEINVOICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/CreateInvoiceItem.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * CreateInvoice请求参数结构体
                */
                class CreateInvoiceRequest : public AbstractModel
                {
                public:
                    CreateInvoiceRequest();
                    ~CreateInvoiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开票平台ID。0：高灯，1：票易通
                     * @return InvoicePlatformId 开票平台ID。0：高灯，1：票易通
                     * 
                     */
                    int64_t GetInvoicePlatformId() const;

                    /**
                     * 设置开票平台ID。0：高灯，1：票易通
                     * @param _invoicePlatformId 开票平台ID。0：高灯，1：票易通
                     * 
                     */
                    void SetInvoicePlatformId(const int64_t& _invoicePlatformId);

                    /**
                     * 判断参数 InvoicePlatformId 是否已赋值
                     * @return InvoicePlatformId 是否已赋值
                     * 
                     */
                    bool InvoicePlatformIdHasBeenSet() const;

                    /**
                     * 获取抬头类型：1：个人/政府事业单位；2：企业
                     * @return TitleType 抬头类型：1：个人/政府事业单位；2：企业
                     * 
                     */
                    int64_t GetTitleType() const;

                    /**
                     * 设置抬头类型：1：个人/政府事业单位；2：企业
                     * @param _titleType 抬头类型：1：个人/政府事业单位；2：企业
                     * 
                     */
                    void SetTitleType(const int64_t& _titleType);

                    /**
                     * 判断参数 TitleType 是否已赋值
                     * @return TitleType 是否已赋值
                     * 
                     */
                    bool TitleTypeHasBeenSet() const;

                    /**
                     * 获取购方名称
                     * @return BuyerTitle 购方名称
                     * 
                     */
                    std::string GetBuyerTitle() const;

                    /**
                     * 设置购方名称
                     * @param _buyerTitle 购方名称
                     * 
                     */
                    void SetBuyerTitle(const std::string& _buyerTitle);

                    /**
                     * 判断参数 BuyerTitle 是否已赋值
                     * @return BuyerTitle 是否已赋值
                     * 
                     */
                    bool BuyerTitleHasBeenSet() const;

                    /**
                     * 获取业务开票号
                     * @return OrderId 业务开票号
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置业务开票号
                     * @param _orderId 业务开票号
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
                     * 获取含税总金额（单位为分）
                     * @return AmountHasTax 含税总金额（单位为分）
                     * 
                     */
                    int64_t GetAmountHasTax() const;

                    /**
                     * 设置含税总金额（单位为分）
                     * @param _amountHasTax 含税总金额（单位为分）
                     * 
                     */
                    void SetAmountHasTax(const int64_t& _amountHasTax);

                    /**
                     * 判断参数 AmountHasTax 是否已赋值
                     * @return AmountHasTax 是否已赋值
                     * 
                     */
                    bool AmountHasTaxHasBeenSet() const;

                    /**
                     * 获取总税额（单位为分）
                     * @return TaxAmount 总税额（单位为分）
                     * 
                     */
                    int64_t GetTaxAmount() const;

                    /**
                     * 设置总税额（单位为分）
                     * @param _taxAmount 总税额（单位为分）
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
                     * 获取不含税总金额（单位为分）。InvoicePlatformId 为1时，传默认值-1
                     * @return AmountWithoutTax 不含税总金额（单位为分）。InvoicePlatformId 为1时，传默认值-1
                     * 
                     */
                    int64_t GetAmountWithoutTax() const;

                    /**
                     * 设置不含税总金额（单位为分）。InvoicePlatformId 为1时，传默认值-1
                     * @param _amountWithoutTax 不含税总金额（单位为分）。InvoicePlatformId 为1时，传默认值-1
                     * 
                     */
                    void SetAmountWithoutTax(const int64_t& _amountWithoutTax);

                    /**
                     * 判断参数 AmountWithoutTax 是否已赋值
                     * @return AmountWithoutTax 是否已赋值
                     * 
                     */
                    bool AmountWithoutTaxHasBeenSet() const;

                    /**
                     * 获取销方纳税人识别号
                     * @return SellerTaxpayerNum 销方纳税人识别号
                     * 
                     */
                    std::string GetSellerTaxpayerNum() const;

                    /**
                     * 设置销方纳税人识别号
                     * @param _sellerTaxpayerNum 销方纳税人识别号
                     * 
                     */
                    void SetSellerTaxpayerNum(const std::string& _sellerTaxpayerNum);

                    /**
                     * 判断参数 SellerTaxpayerNum 是否已赋值
                     * @return SellerTaxpayerNum 是否已赋值
                     * 
                     */
                    bool SellerTaxpayerNumHasBeenSet() const;

                    /**
                     * 获取销方名称。（不填默认读取商户注册时输入的信息）
                     * @return SellerName 销方名称。（不填默认读取商户注册时输入的信息）
                     * 
                     */
                    std::string GetSellerName() const;

                    /**
                     * 设置销方名称。（不填默认读取商户注册时输入的信息）
                     * @param _sellerName 销方名称。（不填默认读取商户注册时输入的信息）
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
                     * 获取销方地址。（不填默认读取商户注册时输入的信息）
                     * @return SellerAddress 销方地址。（不填默认读取商户注册时输入的信息）
                     * 
                     */
                    std::string GetSellerAddress() const;

                    /**
                     * 设置销方地址。（不填默认读取商户注册时输入的信息）
                     * @param _sellerAddress 销方地址。（不填默认读取商户注册时输入的信息）
                     * 
                     */
                    void SetSellerAddress(const std::string& _sellerAddress);

                    /**
                     * 判断参数 SellerAddress 是否已赋值
                     * @return SellerAddress 是否已赋值
                     * 
                     */
                    bool SellerAddressHasBeenSet() const;

                    /**
                     * 获取销方电话。（不填默认读取商户注册时输入的信息）
                     * @return SellerPhone 销方电话。（不填默认读取商户注册时输入的信息）
                     * 
                     */
                    std::string GetSellerPhone() const;

                    /**
                     * 设置销方电话。（不填默认读取商户注册时输入的信息）
                     * @param _sellerPhone 销方电话。（不填默认读取商户注册时输入的信息）
                     * 
                     */
                    void SetSellerPhone(const std::string& _sellerPhone);

                    /**
                     * 判断参数 SellerPhone 是否已赋值
                     * @return SellerPhone 是否已赋值
                     * 
                     */
                    bool SellerPhoneHasBeenSet() const;

                    /**
                     * 获取销方银行名称。（不填默认读取商户注册时输入的信息）
                     * @return SellerBankName 销方银行名称。（不填默认读取商户注册时输入的信息）
                     * 
                     */
                    std::string GetSellerBankName() const;

                    /**
                     * 设置销方银行名称。（不填默认读取商户注册时输入的信息）
                     * @param _sellerBankName 销方银行名称。（不填默认读取商户注册时输入的信息）
                     * 
                     */
                    void SetSellerBankName(const std::string& _sellerBankName);

                    /**
                     * 判断参数 SellerBankName 是否已赋值
                     * @return SellerBankName 是否已赋值
                     * 
                     */
                    bool SellerBankNameHasBeenSet() const;

                    /**
                     * 获取销方银行账号。（不填默认读取商户注册时输入的信息）
                     * @return SellerBankAccount 销方银行账号。（不填默认读取商户注册时输入的信息）
                     * 
                     */
                    std::string GetSellerBankAccount() const;

                    /**
                     * 设置销方银行账号。（不填默认读取商户注册时输入的信息）
                     * @param _sellerBankAccount 销方银行账号。（不填默认读取商户注册时输入的信息）
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
                     * 获取购方纳税人识别号（购方票面信息）,若抬头类型为2时，必传
                     * @return BuyerTaxpayerNum 购方纳税人识别号（购方票面信息）,若抬头类型为2时，必传
                     * 
                     */
                    std::string GetBuyerTaxpayerNum() const;

                    /**
                     * 设置购方纳税人识别号（购方票面信息）,若抬头类型为2时，必传
                     * @param _buyerTaxpayerNum 购方纳税人识别号（购方票面信息）,若抬头类型为2时，必传
                     * 
                     */
                    void SetBuyerTaxpayerNum(const std::string& _buyerTaxpayerNum);

                    /**
                     * 判断参数 BuyerTaxpayerNum 是否已赋值
                     * @return BuyerTaxpayerNum 是否已赋值
                     * 
                     */
                    bool BuyerTaxpayerNumHasBeenSet() const;

                    /**
                     * 获取购方地址。开具专用发票时必填
                     * @return BuyerAddress 购方地址。开具专用发票时必填
                     * 
                     */
                    std::string GetBuyerAddress() const;

                    /**
                     * 设置购方地址。开具专用发票时必填
                     * @param _buyerAddress 购方地址。开具专用发票时必填
                     * 
                     */
                    void SetBuyerAddress(const std::string& _buyerAddress);

                    /**
                     * 判断参数 BuyerAddress 是否已赋值
                     * @return BuyerAddress 是否已赋值
                     * 
                     */
                    bool BuyerAddressHasBeenSet() const;

                    /**
                     * 获取购方银行名称。开具专用发票时必填
                     * @return BuyerBankName 购方银行名称。开具专用发票时必填
                     * 
                     */
                    std::string GetBuyerBankName() const;

                    /**
                     * 设置购方银行名称。开具专用发票时必填
                     * @param _buyerBankName 购方银行名称。开具专用发票时必填
                     * 
                     */
                    void SetBuyerBankName(const std::string& _buyerBankName);

                    /**
                     * 判断参数 BuyerBankName 是否已赋值
                     * @return BuyerBankName 是否已赋值
                     * 
                     */
                    bool BuyerBankNameHasBeenSet() const;

                    /**
                     * 获取购方银行账号。开具专用发票时必填
                     * @return BuyerBankAccount 购方银行账号。开具专用发票时必填
                     * 
                     */
                    std::string GetBuyerBankAccount() const;

                    /**
                     * 设置购方银行账号。开具专用发票时必填
                     * @param _buyerBankAccount 购方银行账号。开具专用发票时必填
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
                     * 获取购方电话。开具专用发票时必填
                     * @return BuyerPhone 购方电话。开具专用发票时必填
                     * 
                     */
                    std::string GetBuyerPhone() const;

                    /**
                     * 设置购方电话。开具专用发票时必填
                     * @param _buyerPhone 购方电话。开具专用发票时必填
                     * 
                     */
                    void SetBuyerPhone(const std::string& _buyerPhone);

                    /**
                     * 判断参数 BuyerPhone 是否已赋值
                     * @return BuyerPhone 是否已赋值
                     * 
                     */
                    bool BuyerPhoneHasBeenSet() const;

                    /**
                     * 获取收票人邮箱。若填入，会收到发票推送邮件
                     * @return BuyerEmail 收票人邮箱。若填入，会收到发票推送邮件
                     * 
                     */
                    std::string GetBuyerEmail() const;

                    /**
                     * 设置收票人邮箱。若填入，会收到发票推送邮件
                     * @param _buyerEmail 收票人邮箱。若填入，会收到发票推送邮件
                     * 
                     */
                    void SetBuyerEmail(const std::string& _buyerEmail);

                    /**
                     * 判断参数 BuyerEmail 是否已赋值
                     * @return BuyerEmail 是否已赋值
                     * 
                     */
                    bool BuyerEmailHasBeenSet() const;

                    /**
                     * 获取收票人手机号。若填入，会收到发票推送短信
                     * @return TakerPhone 收票人手机号。若填入，会收到发票推送短信
                     * 
                     */
                    std::string GetTakerPhone() const;

                    /**
                     * 设置收票人手机号。若填入，会收到发票推送短信
                     * @param _takerPhone 收票人手机号。若填入，会收到发票推送短信
                     * 
                     */
                    void SetTakerPhone(const std::string& _takerPhone);

                    /**
                     * 判断参数 TakerPhone 是否已赋值
                     * @return TakerPhone 是否已赋值
                     * 
                     */
                    bool TakerPhoneHasBeenSet() const;

                    /**
                     * 获取开票类型：
1：增值税专用发票；
2：增值税普通发票；
3：增值税电子发票；
4：增值税卷式发票；
5：区块链电子发票。
若该字段不填，或值不为1-5，则认为开具”增值税电子发票”
                     * @return InvoiceType 开票类型：
1：增值税专用发票；
2：增值税普通发票；
3：增值税电子发票；
4：增值税卷式发票；
5：区块链电子发票。
若该字段不填，或值不为1-5，则认为开具”增值税电子发票”
                     * 
                     */
                    int64_t GetInvoiceType() const;

                    /**
                     * 设置开票类型：
1：增值税专用发票；
2：增值税普通发票；
3：增值税电子发票；
4：增值税卷式发票；
5：区块链电子发票。
若该字段不填，或值不为1-5，则认为开具”增值税电子发票”
                     * @param _invoiceType 开票类型：
1：增值税专用发票；
2：增值税普通发票；
3：增值税电子发票；
4：增值税卷式发票；
5：区块链电子发票。
若该字段不填，或值不为1-5，则认为开具”增值税电子发票”
                     * 
                     */
                    void SetInvoiceType(const int64_t& _invoiceType);

                    /**
                     * 判断参数 InvoiceType 是否已赋值
                     * @return InvoiceType 是否已赋值
                     * 
                     */
                    bool InvoiceTypeHasBeenSet() const;

                    /**
                     * 获取发票结果回传地址
                     * @return CallbackUrl 发票结果回传地址
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置发票结果回传地址
                     * @param _callbackUrl 发票结果回传地址
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取开票人姓名。（不填默认读取商户注册时输入的信息）
                     * @return Drawer 开票人姓名。（不填默认读取商户注册时输入的信息）
                     * 
                     */
                    std::string GetDrawer() const;

                    /**
                     * 设置开票人姓名。（不填默认读取商户注册时输入的信息）
                     * @param _drawer 开票人姓名。（不填默认读取商户注册时输入的信息）
                     * 
                     */
                    void SetDrawer(const std::string& _drawer);

                    /**
                     * 判断参数 Drawer 是否已赋值
                     * @return Drawer 是否已赋值
                     * 
                     */
                    bool DrawerHasBeenSet() const;

                    /**
                     * 获取收款人姓名。（不填默认读取商户注册时输入的信息）
                     * @return Payee 收款人姓名。（不填默认读取商户注册时输入的信息）
                     * 
                     */
                    std::string GetPayee() const;

                    /**
                     * 设置收款人姓名。（不填默认读取商户注册时输入的信息）
                     * @param _payee 收款人姓名。（不填默认读取商户注册时输入的信息）
                     * 
                     */
                    void SetPayee(const std::string& _payee);

                    /**
                     * 判断参数 Payee 是否已赋值
                     * @return Payee 是否已赋值
                     * 
                     */
                    bool PayeeHasBeenSet() const;

                    /**
                     * 获取复核人姓名。（不填默认读取商户注册时输入的信息）
                     * @return Checker 复核人姓名。（不填默认读取商户注册时输入的信息）
                     * 
                     */
                    std::string GetChecker() const;

                    /**
                     * 设置复核人姓名。（不填默认读取商户注册时输入的信息）
                     * @param _checker 复核人姓名。（不填默认读取商户注册时输入的信息）
                     * 
                     */
                    void SetChecker(const std::string& _checker);

                    /**
                     * 判断参数 Checker 是否已赋值
                     * @return Checker 是否已赋值
                     * 
                     */
                    bool CheckerHasBeenSet() const;

                    /**
                     * 获取税盘号
                     * @return TerminalCode 税盘号
                     * 
                     */
                    std::string GetTerminalCode() const;

                    /**
                     * 设置税盘号
                     * @param _terminalCode 税盘号
                     * 
                     */
                    void SetTerminalCode(const std::string& _terminalCode);

                    /**
                     * 判断参数 TerminalCode 是否已赋值
                     * @return TerminalCode 是否已赋值
                     * 
                     */
                    bool TerminalCodeHasBeenSet() const;

                    /**
                     * 获取征收方式。开具差额征税发票时必填2。开具普通征税发票时为空
                     * @return LevyMethod 征收方式。开具差额征税发票时必填2。开具普通征税发票时为空
                     * 
                     */
                    std::string GetLevyMethod() const;

                    /**
                     * 设置征收方式。开具差额征税发票时必填2。开具普通征税发票时为空
                     * @param _levyMethod 征收方式。开具差额征税发票时必填2。开具普通征税发票时为空
                     * 
                     */
                    void SetLevyMethod(const std::string& _levyMethod);

                    /**
                     * 判断参数 LevyMethod 是否已赋值
                     * @return LevyMethod 是否已赋值
                     * 
                     */
                    bool LevyMethodHasBeenSet() const;

                    /**
                     * 获取差额征税扣除额（单位为分）
                     * @return Deduction 差额征税扣除额（单位为分）
                     * 
                     */
                    int64_t GetDeduction() const;

                    /**
                     * 设置差额征税扣除额（单位为分）
                     * @param _deduction 差额征税扣除额（单位为分）
                     * 
                     */
                    void SetDeduction(const int64_t& _deduction);

                    /**
                     * 判断参数 Deduction 是否已赋值
                     * @return Deduction 是否已赋值
                     * 
                     */
                    bool DeductionHasBeenSet() const;

                    /**
                     * 获取备注（票面信息）
                     * @return Remark 备注（票面信息）
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注（票面信息）
                     * @param _remark 备注（票面信息）
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
                     * 获取项目商品明细
                     * @return Items 项目商品明细
                     * 
                     */
                    std::vector<CreateInvoiceItem> GetItems() const;

                    /**
                     * 设置项目商品明细
                     * @param _items 项目商品明细
                     * 
                     */
                    void SetItems(const std::vector<CreateInvoiceItem>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取接入环境。沙箱环境填sandbox。
                     * @return Profile 接入环境。沙箱环境填sandbox。
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置接入环境。沙箱环境填sandbox。
                     * @param _profile 接入环境。沙箱环境填sandbox。
                     * 
                     */
                    void SetProfile(const std::string& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                    /**
                     * 获取撤销部分商品。0-不撤销，1-撤销
                     * @return UndoPart 撤销部分商品。0-不撤销，1-撤销
                     * 
                     */
                    int64_t GetUndoPart() const;

                    /**
                     * 设置撤销部分商品。0-不撤销，1-撤销
                     * @param _undoPart 撤销部分商品。0-不撤销，1-撤销
                     * 
                     */
                    void SetUndoPart(const int64_t& _undoPart);

                    /**
                     * 判断参数 UndoPart 是否已赋值
                     * @return UndoPart 是否已赋值
                     * 
                     */
                    bool UndoPartHasBeenSet() const;

                    /**
                     * 获取订单下单时间（格式 YYYYMMDD）
                     * @return OrderDate 订单下单时间（格式 YYYYMMDD）
                     * 
                     */
                    std::string GetOrderDate() const;

                    /**
                     * 设置订单下单时间（格式 YYYYMMDD）
                     * @param _orderDate 订单下单时间（格式 YYYYMMDD）
                     * 
                     */
                    void SetOrderDate(const std::string& _orderDate);

                    /**
                     * 判断参数 OrderDate 是否已赋值
                     * @return OrderDate 是否已赋值
                     * 
                     */
                    bool OrderDateHasBeenSet() const;

                    /**
                     * 获取订单级别折扣（单位为分）
                     * @return Discount 订单级别折扣（单位为分）
                     * 
                     */
                    int64_t GetDiscount() const;

                    /**
                     * 设置订单级别折扣（单位为分）
                     * @param _discount 订单级别折扣（单位为分）
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
                     * 获取门店编码
                     * @return StoreNo 门店编码
                     * 
                     */
                    std::string GetStoreNo() const;

                    /**
                     * 设置门店编码
                     * @param _storeNo 门店编码
                     * 
                     */
                    void SetStoreNo(const std::string& _storeNo);

                    /**
                     * 判断参数 StoreNo 是否已赋值
                     * @return StoreNo 是否已赋值
                     * 
                     */
                    bool StoreNoHasBeenSet() const;

                    /**
                     * 获取开票渠道。0：APP渠道，1：线下渠道，2：小程序渠道。不填默认为APP渠道
                     * @return InvoiceChannel 开票渠道。0：APP渠道，1：线下渠道，2：小程序渠道。不填默认为APP渠道
                     * 
                     */
                    int64_t GetInvoiceChannel() const;

                    /**
                     * 设置开票渠道。0：APP渠道，1：线下渠道，2：小程序渠道。不填默认为APP渠道
                     * @param _invoiceChannel 开票渠道。0：APP渠道，1：线下渠道，2：小程序渠道。不填默认为APP渠道
                     * 
                     */
                    void SetInvoiceChannel(const int64_t& _invoiceChannel);

                    /**
                     * 判断参数 InvoiceChannel 是否已赋值
                     * @return InvoiceChannel 是否已赋值
                     * 
                     */
                    bool InvoiceChannelHasBeenSet() const;

                private:

                    /**
                     * 开票平台ID。0：高灯，1：票易通
                     */
                    int64_t m_invoicePlatformId;
                    bool m_invoicePlatformIdHasBeenSet;

                    /**
                     * 抬头类型：1：个人/政府事业单位；2：企业
                     */
                    int64_t m_titleType;
                    bool m_titleTypeHasBeenSet;

                    /**
                     * 购方名称
                     */
                    std::string m_buyerTitle;
                    bool m_buyerTitleHasBeenSet;

                    /**
                     * 业务开票号
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 含税总金额（单位为分）
                     */
                    int64_t m_amountHasTax;
                    bool m_amountHasTaxHasBeenSet;

                    /**
                     * 总税额（单位为分）
                     */
                    int64_t m_taxAmount;
                    bool m_taxAmountHasBeenSet;

                    /**
                     * 不含税总金额（单位为分）。InvoicePlatformId 为1时，传默认值-1
                     */
                    int64_t m_amountWithoutTax;
                    bool m_amountWithoutTaxHasBeenSet;

                    /**
                     * 销方纳税人识别号
                     */
                    std::string m_sellerTaxpayerNum;
                    bool m_sellerTaxpayerNumHasBeenSet;

                    /**
                     * 销方名称。（不填默认读取商户注册时输入的信息）
                     */
                    std::string m_sellerName;
                    bool m_sellerNameHasBeenSet;

                    /**
                     * 销方地址。（不填默认读取商户注册时输入的信息）
                     */
                    std::string m_sellerAddress;
                    bool m_sellerAddressHasBeenSet;

                    /**
                     * 销方电话。（不填默认读取商户注册时输入的信息）
                     */
                    std::string m_sellerPhone;
                    bool m_sellerPhoneHasBeenSet;

                    /**
                     * 销方银行名称。（不填默认读取商户注册时输入的信息）
                     */
                    std::string m_sellerBankName;
                    bool m_sellerBankNameHasBeenSet;

                    /**
                     * 销方银行账号。（不填默认读取商户注册时输入的信息）
                     */
                    std::string m_sellerBankAccount;
                    bool m_sellerBankAccountHasBeenSet;

                    /**
                     * 购方纳税人识别号（购方票面信息）,若抬头类型为2时，必传
                     */
                    std::string m_buyerTaxpayerNum;
                    bool m_buyerTaxpayerNumHasBeenSet;

                    /**
                     * 购方地址。开具专用发票时必填
                     */
                    std::string m_buyerAddress;
                    bool m_buyerAddressHasBeenSet;

                    /**
                     * 购方银行名称。开具专用发票时必填
                     */
                    std::string m_buyerBankName;
                    bool m_buyerBankNameHasBeenSet;

                    /**
                     * 购方银行账号。开具专用发票时必填
                     */
                    std::string m_buyerBankAccount;
                    bool m_buyerBankAccountHasBeenSet;

                    /**
                     * 购方电话。开具专用发票时必填
                     */
                    std::string m_buyerPhone;
                    bool m_buyerPhoneHasBeenSet;

                    /**
                     * 收票人邮箱。若填入，会收到发票推送邮件
                     */
                    std::string m_buyerEmail;
                    bool m_buyerEmailHasBeenSet;

                    /**
                     * 收票人手机号。若填入，会收到发票推送短信
                     */
                    std::string m_takerPhone;
                    bool m_takerPhoneHasBeenSet;

                    /**
                     * 开票类型：
1：增值税专用发票；
2：增值税普通发票；
3：增值税电子发票；
4：增值税卷式发票；
5：区块链电子发票。
若该字段不填，或值不为1-5，则认为开具”增值税电子发票”
                     */
                    int64_t m_invoiceType;
                    bool m_invoiceTypeHasBeenSet;

                    /**
                     * 发票结果回传地址
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 开票人姓名。（不填默认读取商户注册时输入的信息）
                     */
                    std::string m_drawer;
                    bool m_drawerHasBeenSet;

                    /**
                     * 收款人姓名。（不填默认读取商户注册时输入的信息）
                     */
                    std::string m_payee;
                    bool m_payeeHasBeenSet;

                    /**
                     * 复核人姓名。（不填默认读取商户注册时输入的信息）
                     */
                    std::string m_checker;
                    bool m_checkerHasBeenSet;

                    /**
                     * 税盘号
                     */
                    std::string m_terminalCode;
                    bool m_terminalCodeHasBeenSet;

                    /**
                     * 征收方式。开具差额征税发票时必填2。开具普通征税发票时为空
                     */
                    std::string m_levyMethod;
                    bool m_levyMethodHasBeenSet;

                    /**
                     * 差额征税扣除额（单位为分）
                     */
                    int64_t m_deduction;
                    bool m_deductionHasBeenSet;

                    /**
                     * 备注（票面信息）
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 项目商品明细
                     */
                    std::vector<CreateInvoiceItem> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 接入环境。沙箱环境填sandbox。
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                    /**
                     * 撤销部分商品。0-不撤销，1-撤销
                     */
                    int64_t m_undoPart;
                    bool m_undoPartHasBeenSet;

                    /**
                     * 订单下单时间（格式 YYYYMMDD）
                     */
                    std::string m_orderDate;
                    bool m_orderDateHasBeenSet;

                    /**
                     * 订单级别折扣（单位为分）
                     */
                    int64_t m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * 门店编码
                     */
                    std::string m_storeNo;
                    bool m_storeNoHasBeenSet;

                    /**
                     * 开票渠道。0：APP渠道，1：线下渠道，2：小程序渠道。不填默认为APP渠道
                     */
                    int64_t m_invoiceChannel;
                    bool m_invoiceChannelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEINVOICEREQUEST_H_
