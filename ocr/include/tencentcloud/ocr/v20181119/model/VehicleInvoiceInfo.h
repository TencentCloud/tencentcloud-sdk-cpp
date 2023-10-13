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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VEHICLEINVOICEINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VEHICLEINVOICEINFO_H_

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
                * 机动车销售统一发票信息
                */
                class VehicleInvoiceInfo : public AbstractModel
                {
                public:
                    VehicleInvoiceInfo();
                    ~VehicleInvoiceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取车辆类型
                     * @return CarType 车辆类型
                     * 
                     */
                    std::string GetCarType() const;

                    /**
                     * 设置车辆类型
                     * @param _carType 车辆类型
                     * 
                     */
                    void SetCarType(const std::string& _carType);

                    /**
                     * 判断参数 CarType 是否已赋值
                     * @return CarType 是否已赋值
                     * 
                     */
                    bool CarTypeHasBeenSet() const;

                    /**
                     * 获取厂牌型号
                     * @return PlateModel 厂牌型号
                     * 
                     */
                    std::string GetPlateModel() const;

                    /**
                     * 设置厂牌型号
                     * @param _plateModel 厂牌型号
                     * 
                     */
                    void SetPlateModel(const std::string& _plateModel);

                    /**
                     * 判断参数 PlateModel 是否已赋值
                     * @return PlateModel 是否已赋值
                     * 
                     */
                    bool PlateModelHasBeenSet() const;

                    /**
                     * 获取产地
                     * @return ProduceAddress 产地
                     * 
                     */
                    std::string GetProduceAddress() const;

                    /**
                     * 设置产地
                     * @param _produceAddress 产地
                     * 
                     */
                    void SetProduceAddress(const std::string& _produceAddress);

                    /**
                     * 判断参数 ProduceAddress 是否已赋值
                     * @return ProduceAddress 是否已赋值
                     * 
                     */
                    bool ProduceAddressHasBeenSet() const;

                    /**
                     * 获取合格证号
                     * @return CertificateNo 合格证号
                     * 
                     */
                    std::string GetCertificateNo() const;

                    /**
                     * 设置合格证号
                     * @param _certificateNo 合格证号
                     * 
                     */
                    void SetCertificateNo(const std::string& _certificateNo);

                    /**
                     * 判断参数 CertificateNo 是否已赋值
                     * @return CertificateNo 是否已赋值
                     * 
                     */
                    bool CertificateNoHasBeenSet() const;

                    /**
                     * 获取进口证明书号
                     * @return ImportNo 进口证明书号
                     * 
                     */
                    std::string GetImportNo() const;

                    /**
                     * 设置进口证明书号
                     * @param _importNo 进口证明书号
                     * 
                     */
                    void SetImportNo(const std::string& _importNo);

                    /**
                     * 判断参数 ImportNo 是否已赋值
                     * @return ImportNo 是否已赋值
                     * 
                     */
                    bool ImportNoHasBeenSet() const;

                    /**
                     * 获取LSVCA2NP9HN0xxxxx
                     * @return VinNo LSVCA2NP9HN0xxxxx
                     * 
                     */
                    std::string GetVinNo() const;

                    /**
                     * 设置LSVCA2NP9HN0xxxxx
                     * @param _vinNo LSVCA2NP9HN0xxxxx
                     * 
                     */
                    void SetVinNo(const std::string& _vinNo);

                    /**
                     * 判断参数 VinNo 是否已赋值
                     * @return VinNo 是否已赋值
                     * 
                     */
                    bool VinNoHasBeenSet() const;

                    /**
                     * 获取完税证书号
                     * @return PayTaxesNo 完税证书号
                     * 
                     */
                    std::string GetPayTaxesNo() const;

                    /**
                     * 设置完税证书号
                     * @param _payTaxesNo 完税证书号
                     * 
                     */
                    void SetPayTaxesNo(const std::string& _payTaxesNo);

                    /**
                     * 判断参数 PayTaxesNo 是否已赋值
                     * @return PayTaxesNo 是否已赋值
                     * 
                     */
                    bool PayTaxesNoHasBeenSet() const;

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
                     * 获取限乘人数
                     * @return LimitCount 限乘人数
                     * 
                     */
                    std::string GetLimitCount() const;

                    /**
                     * 设置限乘人数
                     * @param _limitCount 限乘人数
                     * 
                     */
                    void SetLimitCount(const std::string& _limitCount);

                    /**
                     * 判断参数 LimitCount 是否已赋值
                     * @return LimitCount 是否已赋值
                     * 
                     */
                    bool LimitCountHasBeenSet() const;

                    /**
                     * 获取发动机号码
                     * @return EngineNo 发动机号码
                     * 
                     */
                    std::string GetEngineNo() const;

                    /**
                     * 设置发动机号码
                     * @param _engineNo 发动机号码
                     * 
                     */
                    void SetEngineNo(const std::string& _engineNo);

                    /**
                     * 判断参数 EngineNo 是否已赋值
                     * @return EngineNo 是否已赋值
                     * 
                     */
                    bool EngineNoHasBeenSet() const;

                    /**
                     * 获取商检单号
                     * @return BizCheckFormNo 商检单号
                     * 
                     */
                    std::string GetBizCheckFormNo() const;

                    /**
                     * 设置商检单号
                     * @param _bizCheckFormNo 商检单号
                     * 
                     */
                    void SetBizCheckFormNo(const std::string& _bizCheckFormNo);

                    /**
                     * 判断参数 BizCheckFormNo 是否已赋值
                     * @return BizCheckFormNo 是否已赋值
                     * 
                     */
                    bool BizCheckFormNoHasBeenSet() const;

                    /**
                     * 获取主管税务机关代码
                     * @return TaxtationOrgCode 主管税务机关代码
                     * 
                     */
                    std::string GetTaxtationOrgCode() const;

                    /**
                     * 设置主管税务机关代码
                     * @param _taxtationOrgCode 主管税务机关代码
                     * 
                     */
                    void SetTaxtationOrgCode(const std::string& _taxtationOrgCode);

                    /**
                     * 判断参数 TaxtationOrgCode 是否已赋值
                     * @return TaxtationOrgCode 是否已赋值
                     * 
                     */
                    bool TaxtationOrgCodeHasBeenSet() const;

                    /**
                     * 获取主管税务机关名称
                     * @return TaxtationOrgName 主管税务机关名称
                     * 
                     */
                    std::string GetTaxtationOrgName() const;

                    /**
                     * 设置主管税务机关名称
                     * @param _taxtationOrgName 主管税务机关名称
                     * 
                     */
                    void SetTaxtationOrgName(const std::string& _taxtationOrgName);

                    /**
                     * 判断参数 TaxtationOrgName 是否已赋值
                     * @return TaxtationOrgName 是否已赋值
                     * 
                     */
                    bool TaxtationOrgNameHasBeenSet() const;

                    /**
                     * 获取税率
                     * @return MotorTaxRate 税率
                     * 
                     */
                    std::string GetMotorTaxRate() const;

                    /**
                     * 设置税率
                     * @param _motorTaxRate 税率
                     * 
                     */
                    void SetMotorTaxRate(const std::string& _motorTaxRate);

                    /**
                     * 判断参数 MotorTaxRate 是否已赋值
                     * @return MotorTaxRate 是否已赋值
                     * 
                     */
                    bool MotorTaxRateHasBeenSet() const;

                    /**
                     * 获取银行账号
                     * @return MotorBankName 银行账号
                     * 
                     */
                    std::string GetMotorBankName() const;

                    /**
                     * 设置银行账号
                     * @param _motorBankName 银行账号
                     * 
                     */
                    void SetMotorBankName(const std::string& _motorBankName);

                    /**
                     * 判断参数 MotorBankName 是否已赋值
                     * @return MotorBankName 是否已赋值
                     * 
                     */
                    bool MotorBankNameHasBeenSet() const;

                    /**
                     * 获取开户行
                     * @return MotorBankAccount 开户行
                     * 
                     */
                    std::string GetMotorBankAccount() const;

                    /**
                     * 设置开户行
                     * @param _motorBankAccount 开户行
                     * 
                     */
                    void SetMotorBankAccount(const std::string& _motorBankAccount);

                    /**
                     * 判断参数 MotorBankAccount 是否已赋值
                     * @return MotorBankAccount 是否已赋值
                     * 
                     */
                    bool MotorBankAccountHasBeenSet() const;

                    /**
                     * 获取销售地址
                     * @return SellerAddress 销售地址
                     * 
                     */
                    std::string GetSellerAddress() const;

                    /**
                     * 设置销售地址
                     * @param _sellerAddress 销售地址
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
                     * 获取销售电话
                     * @return SellerTel 销售电话
                     * 
                     */
                    std::string GetSellerTel() const;

                    /**
                     * 设置销售电话
                     * @param _sellerTel 销售电话
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
                     * 获取购方身份证
                     * @return BuyerNo 购方身份证
                     * 
                     */
                    std::string GetBuyerNo() const;

                    /**
                     * 设置购方身份证
                     * @param _buyerNo 购方身份证
                     * 
                     */
                    void SetBuyerNo(const std::string& _buyerNo);

                    /**
                     * 判断参数 BuyerNo 是否已赋值
                     * @return BuyerNo 是否已赋值
                     * 
                     */
                    bool BuyerNoHasBeenSet() const;

                private:

                    /**
                     * 车辆类型
                     */
                    std::string m_carType;
                    bool m_carTypeHasBeenSet;

                    /**
                     * 厂牌型号
                     */
                    std::string m_plateModel;
                    bool m_plateModelHasBeenSet;

                    /**
                     * 产地
                     */
                    std::string m_produceAddress;
                    bool m_produceAddressHasBeenSet;

                    /**
                     * 合格证号
                     */
                    std::string m_certificateNo;
                    bool m_certificateNoHasBeenSet;

                    /**
                     * 进口证明书号
                     */
                    std::string m_importNo;
                    bool m_importNoHasBeenSet;

                    /**
                     * LSVCA2NP9HN0xxxxx
                     */
                    std::string m_vinNo;
                    bool m_vinNoHasBeenSet;

                    /**
                     * 完税证书号
                     */
                    std::string m_payTaxesNo;
                    bool m_payTaxesNoHasBeenSet;

                    /**
                     * 吨位
                     */
                    std::string m_tonnage;
                    bool m_tonnageHasBeenSet;

                    /**
                     * 限乘人数
                     */
                    std::string m_limitCount;
                    bool m_limitCountHasBeenSet;

                    /**
                     * 发动机号码
                     */
                    std::string m_engineNo;
                    bool m_engineNoHasBeenSet;

                    /**
                     * 商检单号
                     */
                    std::string m_bizCheckFormNo;
                    bool m_bizCheckFormNoHasBeenSet;

                    /**
                     * 主管税务机关代码
                     */
                    std::string m_taxtationOrgCode;
                    bool m_taxtationOrgCodeHasBeenSet;

                    /**
                     * 主管税务机关名称
                     */
                    std::string m_taxtationOrgName;
                    bool m_taxtationOrgNameHasBeenSet;

                    /**
                     * 税率
                     */
                    std::string m_motorTaxRate;
                    bool m_motorTaxRateHasBeenSet;

                    /**
                     * 银行账号
                     */
                    std::string m_motorBankName;
                    bool m_motorBankNameHasBeenSet;

                    /**
                     * 开户行
                     */
                    std::string m_motorBankAccount;
                    bool m_motorBankAccountHasBeenSet;

                    /**
                     * 销售地址
                     */
                    std::string m_sellerAddress;
                    bool m_sellerAddressHasBeenSet;

                    /**
                     * 销售电话
                     */
                    std::string m_sellerTel;
                    bool m_sellerTelHasBeenSet;

                    /**
                     * 购方身份证
                     */
                    std::string m_buyerNo;
                    bool m_buyerNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VEHICLEINVOICEINFO_H_
