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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_MOTORVEHICLESALEINVOICE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_MOTORVEHICLESALEINVOICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 机动车销售统一发票
                */
                class MotorVehicleSaleInvoice : public AbstractModel
                {
                public:
                    MotorVehicleSaleInvoice();
                    ~MotorVehicleSaleInvoice() = default;
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
                     * 获取销售方单位代码
                     * @return SellerTaxID 销售方单位代码
                     * 
                     */
                    std::string GetSellerTaxID() const;

                    /**
                     * 设置销售方单位代码
                     * @param _sellerTaxID 销售方单位代码
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
                     * 获取销售方电话
                     * @return SellerTel 销售方电话
                     * 
                     */
                    std::string GetSellerTel() const;

                    /**
                     * 设置销售方电话
                     * @param _sellerTel 销售方电话
                     * 
                     */
                    void SetSellerTel(const std::string& _sellerTel);

                    /**
                     * 判断参数 SellerTel 是否已赋值
                     * @return SellerTel 是否已赋值
                     * 
                     */
                    bool SellerTelHasBeenSet() const;

                    /**
                     * 获取销售方地址
                     * @return SellerAddress 销售方地址
                     * 
                     */
                    std::string GetSellerAddress() const;

                    /**
                     * 设置销售方地址
                     * @param _sellerAddress 销售方地址
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
                     * 获取销售方开户行
                     * @return SellerBank 销售方开户行
                     * 
                     */
                    std::string GetSellerBank() const;

                    /**
                     * 设置销售方开户行
                     * @param _sellerBank 销售方开户行
                     * 
                     */
                    void SetSellerBank(const std::string& _sellerBank);

                    /**
                     * 判断参数 SellerBank 是否已赋值
                     * @return SellerBank 是否已赋值
                     * 
                     */
                    bool SellerBankHasBeenSet() const;

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
                     * 获取购买方身份证号码/组织机构代码
                     * @return BuyerID 购买方身份证号码/组织机构代码
                     * 
                     */
                    std::string GetBuyerID() const;

                    /**
                     * 设置购买方身份证号码/组织机构代码
                     * @param _buyerID 购买方身份证号码/组织机构代码
                     * 
                     */
                    void SetBuyerID(const std::string& _buyerID);

                    /**
                     * 判断参数 BuyerID 是否已赋值
                     * @return BuyerID 是否已赋值
                     * 
                     */
                    bool BuyerIDHasBeenSet() const;

                    /**
                     * 获取主管税务机关
                     * @return TaxAuthorities 主管税务机关
                     * 
                     */
                    std::string GetTaxAuthorities() const;

                    /**
                     * 设置主管税务机关
                     * @param _taxAuthorities 主管税务机关
                     * 
                     */
                    void SetTaxAuthorities(const std::string& _taxAuthorities);

                    /**
                     * 判断参数 TaxAuthorities 是否已赋值
                     * @return TaxAuthorities 是否已赋值
                     * 
                     */
                    bool TaxAuthoritiesHasBeenSet() const;

                    /**
                     * 获取主管税务机关代码
                     * @return TaxAuthoritiesCode 主管税务机关代码
                     * 
                     */
                    std::string GetTaxAuthoritiesCode() const;

                    /**
                     * 设置主管税务机关代码
                     * @param _taxAuthoritiesCode 主管税务机关代码
                     * 
                     */
                    void SetTaxAuthoritiesCode(const std::string& _taxAuthoritiesCode);

                    /**
                     * 判断参数 TaxAuthoritiesCode 是否已赋值
                     * @return TaxAuthoritiesCode 是否已赋值
                     * 
                     */
                    bool TaxAuthoritiesCodeHasBeenSet() const;

                    /**
                     * 获取车辆识别代码
                     * @return VIN 车辆识别代码
                     * 
                     */
                    std::string GetVIN() const;

                    /**
                     * 设置车辆识别代码
                     * @param _vIN 车辆识别代码
                     * 
                     */
                    void SetVIN(const std::string& _vIN);

                    /**
                     * 判断参数 VIN 是否已赋值
                     * @return VIN 是否已赋值
                     * 
                     */
                    bool VINHasBeenSet() const;

                    /**
                     * 获取厂牌型号
                     * @return VehicleModel 厂牌型号
                     * 
                     */
                    std::string GetVehicleModel() const;

                    /**
                     * 设置厂牌型号
                     * @param _vehicleModel 厂牌型号
                     * 
                     */
                    void SetVehicleModel(const std::string& _vehicleModel);

                    /**
                     * 判断参数 VehicleModel 是否已赋值
                     * @return VehicleModel 是否已赋值
                     * 
                     */
                    bool VehicleModelHasBeenSet() const;

                    /**
                     * 获取发动机号码
                     * @return VehicleEngineCode 发动机号码
                     * 
                     */
                    std::string GetVehicleEngineCode() const;

                    /**
                     * 设置发动机号码
                     * @param _vehicleEngineCode 发动机号码
                     * 
                     */
                    void SetVehicleEngineCode(const std::string& _vehicleEngineCode);

                    /**
                     * 判断参数 VehicleEngineCode 是否已赋值
                     * @return VehicleEngineCode 是否已赋值
                     * 
                     */
                    bool VehicleEngineCodeHasBeenSet() const;

                    /**
                     * 获取合格证号
                     * @return CertificateNumber 合格证号
                     * 
                     */
                    std::string GetCertificateNumber() const;

                    /**
                     * 设置合格证号
                     * @param _certificateNumber 合格证号
                     * 
                     */
                    void SetCertificateNumber(const std::string& _certificateNumber);

                    /**
                     * 判断参数 CertificateNumber 是否已赋值
                     * @return CertificateNumber 是否已赋值
                     * 
                     */
                    bool CertificateNumberHasBeenSet() const;

                    /**
                     * 获取商检单号
                     * @return InspectionNumber 商检单号
                     * 
                     */
                    std::string GetInspectionNumber() const;

                    /**
                     * 设置商检单号
                     * @param _inspectionNumber 商检单号
                     * 
                     */
                    void SetInspectionNumber(const std::string& _inspectionNumber);

                    /**
                     * 判断参数 InspectionNumber 是否已赋值
                     * @return InspectionNumber 是否已赋值
                     * 
                     */
                    bool InspectionNumberHasBeenSet() const;

                    /**
                     * 获取机器编号
                     * @return MachineID 机器编号
                     * 
                     */
                    std::string GetMachineID() const;

                    /**
                     * 设置机器编号
                     * @param _machineID 机器编号
                     * 
                     */
                    void SetMachineID(const std::string& _machineID);

                    /**
                     * 判断参数 MachineID 是否已赋值
                     * @return MachineID 是否已赋值
                     * 
                     */
                    bool MachineIDHasBeenSet() const;

                    /**
                     * 获取车辆类型
                     * @return VehicleType 车辆类型
                     * 
                     */
                    std::string GetVehicleType() const;

                    /**
                     * 设置车辆类型
                     * @param _vehicleType 车辆类型
                     * 
                     */
                    void SetVehicleType(const std::string& _vehicleType);

                    /**
                     * 判断参数 VehicleType 是否已赋值
                     * @return VehicleType 是否已赋值
                     * 
                     */
                    bool VehicleTypeHasBeenSet() const;

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
                     * 获取税率
                     * @return TaxRate 税率
                     * 
                     */
                    std::string GetTaxRate() const;

                    /**
                     * 设置税率
                     * @param _taxRate 税率
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
                     * 获取吨位
                     * @return Tonnage 吨位
                     * 
                     */
                    std::string GetTonnage() const;

                    /**
                     * 设置吨位
                     * @param _tonnage 吨位
                     * 
                     */
                    void SetTonnage(const std::string& _tonnage);

                    /**
                     * 判断参数 Tonnage 是否已赋值
                     * @return Tonnage 是否已赋值
                     * 
                     */
                    bool TonnageHasBeenSet() const;

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
                     * 获取进口证明书号
                     * @return TaxNum 进口证明书号
                     * 
                     */
                    std::string GetTaxNum() const;

                    /**
                     * 设置进口证明书号
                     * @param _taxNum 进口证明书号
                     * 
                     */
                    void SetTaxNum(const std::string& _taxNum);

                    /**
                     * 判断参数 TaxNum 是否已赋值
                     * @return TaxNum 是否已赋值
                     * 
                     */
                    bool TaxNumHasBeenSet() const;

                    /**
                     * 获取完税凭证号码
                     * @return TaxPayNum 完税凭证号码
                     * 
                     */
                    std::string GetTaxPayNum() const;

                    /**
                     * 设置完税凭证号码
                     * @param _taxPayNum 完税凭证号码
                     * 
                     */
                    void SetTaxPayNum(const std::string& _taxPayNum);

                    /**
                     * 判断参数 TaxPayNum 是否已赋值
                     * @return TaxPayNum 是否已赋值
                     * 
                     */
                    bool TaxPayNumHasBeenSet() const;

                    /**
                     * 获取税控码
                     * @return TaxCode 税控码
                     * 
                     */
                    std::string GetTaxCode() const;

                    /**
                     * 设置税控码
                     * @param _taxCode 税控码
                     * 
                     */
                    void SetTaxCode(const std::string& _taxCode);

                    /**
                     * 判断参数 TaxCode 是否已赋值
                     * @return TaxCode 是否已赋值
                     * 
                     */
                    bool TaxCodeHasBeenSet() const;

                    /**
                     * 获取限乘人数
                     * @return MaxPeopleNum 限乘人数
                     * 
                     */
                    std::string GetMaxPeopleNum() const;

                    /**
                     * 设置限乘人数
                     * @param _maxPeopleNum 限乘人数
                     * 
                     */
                    void SetMaxPeopleNum(const std::string& _maxPeopleNum);

                    /**
                     * 判断参数 MaxPeopleNum 是否已赋值
                     * @return MaxPeopleNum 是否已赋值
                     * 
                     */
                    bool MaxPeopleNumHasBeenSet() const;

                    /**
                     * 获取产地
                     * @return Origin 产地
                     * 
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置产地
                     * @param _origin 产地
                     * 
                     */
                    void SetOrigin(const std::string& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     * 
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取机打发票代码
                     * @return MachineCode 机打发票代码
                     * 
                     */
                    std::string GetMachineCode() const;

                    /**
                     * 设置机打发票代码
                     * @param _machineCode 机打发票代码
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
                     * 获取机打发票号码
                     * @return MachineNumber 机打发票号码
                     * 
                     */
                    std::string GetMachineNumber() const;

                    /**
                     * 设置机打发票号码
                     * @param _machineNumber 机打发票号码
                     * 
                     */
                    void SetMachineNumber(const std::string& _machineNumber);

                    /**
                     * 判断参数 MachineNumber 是否已赋值
                     * @return MachineNumber 是否已赋值
                     * 
                     */
                    bool MachineNumberHasBeenSet() const;

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

                private:

                    /**
                     * 发票名称
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

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
                     * 销售方名称
                     */
                    std::string m_seller;
                    bool m_sellerHasBeenSet;

                    /**
                     * 销售方单位代码
                     */
                    std::string m_sellerTaxID;
                    bool m_sellerTaxIDHasBeenSet;

                    /**
                     * 销售方电话
                     */
                    std::string m_sellerTel;
                    bool m_sellerTelHasBeenSet;

                    /**
                     * 销售方地址
                     */
                    std::string m_sellerAddress;
                    bool m_sellerAddressHasBeenSet;

                    /**
                     * 销售方开户行
                     */
                    std::string m_sellerBank;
                    bool m_sellerBankHasBeenSet;

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
                     * 购买方身份证号码/组织机构代码
                     */
                    std::string m_buyerID;
                    bool m_buyerIDHasBeenSet;

                    /**
                     * 主管税务机关
                     */
                    std::string m_taxAuthorities;
                    bool m_taxAuthoritiesHasBeenSet;

                    /**
                     * 主管税务机关代码
                     */
                    std::string m_taxAuthoritiesCode;
                    bool m_taxAuthoritiesCodeHasBeenSet;

                    /**
                     * 车辆识别代码
                     */
                    std::string m_vIN;
                    bool m_vINHasBeenSet;

                    /**
                     * 厂牌型号
                     */
                    std::string m_vehicleModel;
                    bool m_vehicleModelHasBeenSet;

                    /**
                     * 发动机号码
                     */
                    std::string m_vehicleEngineCode;
                    bool m_vehicleEngineCodeHasBeenSet;

                    /**
                     * 合格证号
                     */
                    std::string m_certificateNumber;
                    bool m_certificateNumberHasBeenSet;

                    /**
                     * 商检单号
                     */
                    std::string m_inspectionNumber;
                    bool m_inspectionNumberHasBeenSet;

                    /**
                     * 机器编号
                     */
                    std::string m_machineID;
                    bool m_machineIDHasBeenSet;

                    /**
                     * 车辆类型
                     */
                    std::string m_vehicleType;
                    bool m_vehicleTypeHasBeenSet;

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
                     * 合计税额
                     */
                    std::string m_tax;
                    bool m_taxHasBeenSet;

                    /**
                     * 税率
                     */
                    std::string m_taxRate;
                    bool m_taxRateHasBeenSet;

                    /**
                     * 是否有公司印章（0：没有，1：有）
                     */
                    int64_t m_companySealMark;
                    bool m_companySealMarkHasBeenSet;

                    /**
                     * 吨位
                     */
                    std::string m_tonnage;
                    bool m_tonnageHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 发票联次
                     */
                    std::string m_formType;
                    bool m_formTypeHasBeenSet;

                    /**
                     * 发票联名
                     */
                    std::string m_formName;
                    bool m_formNameHasBeenSet;

                    /**
                     * 开票人
                     */
                    std::string m_issuer;
                    bool m_issuerHasBeenSet;

                    /**
                     * 进口证明书号
                     */
                    std::string m_taxNum;
                    bool m_taxNumHasBeenSet;

                    /**
                     * 完税凭证号码
                     */
                    std::string m_taxPayNum;
                    bool m_taxPayNumHasBeenSet;

                    /**
                     * 税控码
                     */
                    std::string m_taxCode;
                    bool m_taxCodeHasBeenSet;

                    /**
                     * 限乘人数
                     */
                    std::string m_maxPeopleNum;
                    bool m_maxPeopleNumHasBeenSet;

                    /**
                     * 产地
                     */
                    std::string m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * 机打发票代码
                     */
                    std::string m_machineCode;
                    bool m_machineCodeHasBeenSet;

                    /**
                     * 机打发票号码
                     */
                    std::string m_machineNumber;
                    bool m_machineNumberHasBeenSet;

                    /**
                     * 是否存在二维码（1：有，0：无）
                     */
                    int64_t m_qRCodeMark;
                    bool m_qRCodeMarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_MOTORVEHICLESALEINVOICE_H_
