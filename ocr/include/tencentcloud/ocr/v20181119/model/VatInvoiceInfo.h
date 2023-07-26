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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/VatInvoiceItemInfo.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 增值税发票返回值
                */
                class VatInvoiceInfo : public AbstractModel
                {
                public:
                    VatInvoiceInfo();
                    ~VatInvoiceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取发票联次
                     * @return FormType 发票联次
                     * 
                     */
                    std::string GetFormType() const;

                    /**
                     * 设置发票联次
                     * @param _formType 发票联次
                     * 
                     */
                    void SetFormType(const std::string& _formType);

                    /**
                     * 判断参数 FormType 是否已赋值
                     * @return FormType 是否已赋值
                     * 
                     */
                    bool FormTypeHasBeenSet() const;

                    /**
                     * 获取车船税
                     * @return TravelTax 车船税
                     * 
                     */
                    std::string GetTravelTax() const;

                    /**
                     * 设置车船税
                     * @param _travelTax 车船税
                     * 
                     */
                    void SetTravelTax(const std::string& _travelTax);

                    /**
                     * 判断参数 TravelTax 是否已赋值
                     * @return TravelTax 是否已赋值
                     * 
                     */
                    bool TravelTaxHasBeenSet() const;

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
                     * 获取公司印章内容
                     * @return CompanySealContent 公司印章内容
                     * 
                     */
                    std::string GetCompanySealContent() const;

                    /**
                     * 设置公司印章内容
                     * @param _companySealContent 公司印章内容
                     * 
                     */
                    void SetCompanySealContent(const std::string& _companySealContent);

                    /**
                     * 判断参数 CompanySealContent 是否已赋值
                     * @return CompanySealContent 是否已赋值
                     * 
                     */
                    bool CompanySealContentHasBeenSet() const;

                    /**
                     * 获取税务局章内容
                     * @return TaxSealContent 税务局章内容
                     * 
                     */
                    std::string GetTaxSealContent() const;

                    /**
                     * 设置税务局章内容
                     * @param _taxSealContent 税务局章内容
                     * 
                     */
                    void SetTaxSealContent(const std::string& _taxSealContent);

                    /**
                     * 判断参数 TaxSealContent 是否已赋值
                     * @return TaxSealContent 是否已赋值
                     * 
                     */
                    bool TaxSealContentHasBeenSet() const;

                    /**
                     * 获取服务类型
                     * @return ServiceName 服务类型
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置服务类型
                     * @param _serviceName 服务类型
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

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
                     * 获取是否存在二维码（0：没有，1：有）
                     * @return QRCodeMark 是否存在二维码（0：没有，1：有）
                     * 
                     */
                    int64_t GetQRCodeMark() const;

                    /**
                     * 设置是否存在二维码（0：没有，1：有）
                     * @param _qRCodeMark 是否存在二维码（0：没有，1：有）
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
                     * 获取是否有代开标记（0：没有，1：有）
                     * @return AgentMark 是否有代开标记（0：没有，1：有）
                     * 
                     */
                    int64_t GetAgentMark() const;

                    /**
                     * 设置是否有代开标记（0：没有，1：有）
                     * @param _agentMark 是否有代开标记（0：没有，1：有）
                     * 
                     */
                    void SetAgentMark(const int64_t& _agentMark);

                    /**
                     * 判断参数 AgentMark 是否已赋值
                     * @return AgentMark 是否已赋值
                     * 
                     */
                    bool AgentMarkHasBeenSet() const;

                    /**
                     * 获取是否有通行费标记（0：没有，1：有）
                     * @return TransitMark 是否有通行费标记（0：没有，1：有）
                     * 
                     */
                    int64_t GetTransitMark() const;

                    /**
                     * 设置是否有通行费标记（0：没有，1：有）
                     * @param _transitMark 是否有通行费标记（0：没有，1：有）
                     * 
                     */
                    void SetTransitMark(const int64_t& _transitMark);

                    /**
                     * 判断参数 TransitMark 是否已赋值
                     * @return TransitMark 是否已赋值
                     * 
                     */
                    bool TransitMarkHasBeenSet() const;

                    /**
                     * 获取是否有成品油标记（0：没有，1：有）
                     * @return OilMark 是否有成品油标记（0：没有，1：有）
                     * 
                     */
                    int64_t GetOilMark() const;

                    /**
                     * 设置是否有成品油标记（0：没有，1：有）
                     * @param _oilMark 是否有成品油标记（0：没有，1：有）
                     * 
                     */
                    void SetOilMark(const int64_t& _oilMark);

                    /**
                     * 判断参数 OilMark 是否已赋值
                     * @return OilMark 是否已赋值
                     * 
                     */
                    bool OilMarkHasBeenSet() const;

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
                     * 获取机打发票号码
                     * @return NumberConfirm 机打发票号码
                     * 
                     */
                    std::string GetNumberConfirm() const;

                    /**
                     * 设置机打发票号码
                     * @param _numberConfirm 机打发票号码
                     * 
                     */
                    void SetNumberConfirm(const std::string& _numberConfirm);

                    /**
                     * 判断参数 NumberConfirm 是否已赋值
                     * @return NumberConfirm 是否已赋值
                     * 
                     */
                    bool NumberConfirmHasBeenSet() const;

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
                     * 获取机器编号
                     * @return MachineCode 机器编号
                     * 
                     */
                    std::string GetMachineCode() const;

                    /**
                     * 设置机器编号
                     * @param _machineCode 机器编号
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
                     * 获取增值税发票项目信息
                     * @return VatInvoiceItemInfos 增值税发票项目信息
                     * 
                     */
                    std::vector<VatInvoiceItemInfo> GetVatInvoiceItemInfos() const;

                    /**
                     * 设置增值税发票项目信息
                     * @param _vatInvoiceItemInfos 增值税发票项目信息
                     * 
                     */
                    void SetVatInvoiceItemInfos(const std::vector<VatInvoiceItemInfo>& _vatInvoiceItemInfos);

                    /**
                     * 判断参数 VatInvoiceItemInfos 是否已赋值
                     * @return VatInvoiceItemInfos 是否已赋值
                     * 
                     */
                    bool VatInvoiceItemInfosHasBeenSet() const;

                    /**
                     * 获取机打发票代码
                     * @return CodeConfirm 机打发票代码
                     * 
                     */
                    std::string GetCodeConfirm() const;

                    /**
                     * 设置机打发票代码
                     * @param _codeConfirm 机打发票代码
                     * 
                     */
                    void SetCodeConfirm(const std::string& _codeConfirm);

                    /**
                     * 判断参数 CodeConfirm 是否已赋值
                     * @return CodeConfirm 是否已赋值
                     * 
                     */
                    bool CodeConfirmHasBeenSet() const;

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
                     * 获取是否有全电纸质票（0：没有，1：有）
                     * @return ElectronicFullMark 是否有全电纸质票（0：没有，1：有）
                     * 
                     */
                    int64_t GetElectronicFullMark() const;

                    /**
                     * 设置是否有全电纸质票（0：没有，1：有）
                     * @param _electronicFullMark 是否有全电纸质票（0：没有，1：有）
                     * 
                     */
                    void SetElectronicFullMark(const int64_t& _electronicFullMark);

                    /**
                     * 判断参数 ElectronicFullMark 是否已赋值
                     * @return ElectronicFullMark 是否已赋值
                     * 
                     */
                    bool ElectronicFullMarkHasBeenSet() const;

                    /**
                     * 获取全电号码
                     * @return ElectronicFullNumber 全电号码
                     * 
                     */
                    std::string GetElectronicFullNumber() const;

                    /**
                     * 设置全电号码
                     * @param _electronicFullNumber 全电号码
                     * 
                     */
                    void SetElectronicFullNumber(const std::string& _electronicFullNumber);

                    /**
                     * 判断参数 ElectronicFullNumber 是否已赋值
                     * @return ElectronicFullNumber 是否已赋值
                     * 
                     */
                    bool ElectronicFullNumberHasBeenSet() const;

                    /**
                     * 获取发票联名
                     * @return FormName 发票联名
                     * 
                     */
                    std::string GetFormName() const;

                    /**
                     * 设置发票联名
                     * @param _formName 发票联名
                     * 
                     */
                    void SetFormName(const std::string& _formName);

                    /**
                     * 判断参数 FormName 是否已赋值
                     * @return FormName 是否已赋值
                     * 
                     */
                    bool FormNameHasBeenSet() const;

                    /**
                     * 获取是否有区块链标记（0：没有，1：有）	
                     * @return BlockChainMark 是否有区块链标记（0：没有，1：有）	
                     * 
                     */
                    int64_t GetBlockChainMark() const;

                    /**
                     * 设置是否有区块链标记（0：没有，1：有）	
                     * @param _blockChainMark 是否有区块链标记（0：没有，1：有）	
                     * 
                     */
                    void SetBlockChainMark(const int64_t& _blockChainMark);

                    /**
                     * 判断参数 BlockChainMark 是否已赋值
                     * @return BlockChainMark 是否已赋值
                     * 
                     */
                    bool BlockChainMarkHasBeenSet() const;

                    /**
                     * 获取是否有收购标记（0：没有，1：有）	
                     * @return AcquisitionMark 是否有收购标记（0：没有，1：有）	
                     * 
                     */
                    int64_t GetAcquisitionMark() const;

                    /**
                     * 设置是否有收购标记（0：没有，1：有）	
                     * @param _acquisitionMark 是否有收购标记（0：没有，1：有）	
                     * 
                     */
                    void SetAcquisitionMark(const int64_t& _acquisitionMark);

                    /**
                     * 判断参数 AcquisitionMark 是否已赋值
                     * @return AcquisitionMark 是否已赋值
                     * 
                     */
                    bool AcquisitionMarkHasBeenSet() const;

                    /**
                     * 获取小计金额
                     * @return SubTotal 小计金额
                     * 
                     */
                    std::string GetSubTotal() const;

                    /**
                     * 设置小计金额
                     * @param _subTotal 小计金额
                     * 
                     */
                    void SetSubTotal(const std::string& _subTotal);

                    /**
                     * 判断参数 SubTotal 是否已赋值
                     * @return SubTotal 是否已赋值
                     * 
                     */
                    bool SubTotalHasBeenSet() const;

                    /**
                     * 获取小计税额
                     * @return SubTax 小计税额
                     * 
                     */
                    std::string GetSubTax() const;

                    /**
                     * 设置小计税额
                     * @param _subTax 小计税额
                     * 
                     */
                    void SetSubTax(const std::string& _subTax);

                    /**
                     * 判断参数 SubTax 是否已赋值
                     * @return SubTax 是否已赋值
                     * 
                     */
                    bool SubTaxHasBeenSet() const;

                private:

                    /**
                     * 校验码
                     */
                    std::string m_checkCode;
                    bool m_checkCodeHasBeenSet;

                    /**
                     * 发票联次
                     */
                    std::string m_formType;
                    bool m_formTypeHasBeenSet;

                    /**
                     * 车船税
                     */
                    std::string m_travelTax;
                    bool m_travelTaxHasBeenSet;

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
                     * 公司印章内容
                     */
                    std::string m_companySealContent;
                    bool m_companySealContentHasBeenSet;

                    /**
                     * 税务局章内容
                     */
                    std::string m_taxSealContent;
                    bool m_taxSealContentHasBeenSet;

                    /**
                     * 服务类型
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 市
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 是否存在二维码（0：没有，1：有）
                     */
                    int64_t m_qRCodeMark;
                    bool m_qRCodeMarkHasBeenSet;

                    /**
                     * 是否有代开标记（0：没有，1：有）
                     */
                    int64_t m_agentMark;
                    bool m_agentMarkHasBeenSet;

                    /**
                     * 是否有通行费标记（0：没有，1：有）
                     */
                    int64_t m_transitMark;
                    bool m_transitMarkHasBeenSet;

                    /**
                     * 是否有成品油标记（0：没有，1：有）
                     */
                    int64_t m_oilMark;
                    bool m_oilMarkHasBeenSet;

                    /**
                     * 发票名称
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 发票消费类型
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

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
                     * 机打发票号码
                     */
                    std::string m_numberConfirm;
                    bool m_numberConfirmHasBeenSet;

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
                     * 税前金额
                     */
                    std::string m_pretaxAmount;
                    bool m_pretaxAmountHasBeenSet;

                    /**
                     * 合计税额
                     */
                    std::string m_tax;
                    bool m_taxHasBeenSet;

                    /**
                     * 机器编号
                     */
                    std::string m_machineCode;
                    bool m_machineCodeHasBeenSet;

                    /**
                     * 密码区
                     */
                    std::string m_ciphertext;
                    bool m_ciphertextHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

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
                     * 是否有公司印章（0：没有，1：有）
                     */
                    int64_t m_companySealMark;
                    bool m_companySealMarkHasBeenSet;

                    /**
                     * 开票人
                     */
                    std::string m_issuer;
                    bool m_issuerHasBeenSet;

                    /**
                     * 复核人
                     */
                    std::string m_reviewer;
                    bool m_reviewerHasBeenSet;

                    /**
                     * 省
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 增值税发票项目信息
                     */
                    std::vector<VatInvoiceItemInfo> m_vatInvoiceItemInfos;
                    bool m_vatInvoiceItemInfosHasBeenSet;

                    /**
                     * 机打发票代码
                     */
                    std::string m_codeConfirm;
                    bool m_codeConfirmHasBeenSet;

                    /**
                     * 收款人
                     */
                    std::string m_receiptor;
                    bool m_receiptorHasBeenSet;

                    /**
                     * 是否有全电纸质票（0：没有，1：有）
                     */
                    int64_t m_electronicFullMark;
                    bool m_electronicFullMarkHasBeenSet;

                    /**
                     * 全电号码
                     */
                    std::string m_electronicFullNumber;
                    bool m_electronicFullNumberHasBeenSet;

                    /**
                     * 发票联名
                     */
                    std::string m_formName;
                    bool m_formNameHasBeenSet;

                    /**
                     * 是否有区块链标记（0：没有，1：有）	
                     */
                    int64_t m_blockChainMark;
                    bool m_blockChainMarkHasBeenSet;

                    /**
                     * 是否有收购标记（0：没有，1：有）	
                     */
                    int64_t m_acquisitionMark;
                    bool m_acquisitionMarkHasBeenSet;

                    /**
                     * 小计金额
                     */
                    std::string m_subTotal;
                    bool m_subTotalHasBeenSet;

                    /**
                     * 小计税额
                     */
                    std::string m_subTax;
                    bool m_subTaxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEINFO_H_
