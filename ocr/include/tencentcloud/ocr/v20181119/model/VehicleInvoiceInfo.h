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
                     * 获取<p>车辆类型</p>
                     * @return CarType <p>车辆类型</p>
                     * 
                     */
                    std::string GetCarType() const;

                    /**
                     * 设置<p>车辆类型</p>
                     * @param _carType <p>车辆类型</p>
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
                     * 获取<p>厂牌型号</p>
                     * @return PlateModel <p>厂牌型号</p>
                     * 
                     */
                    std::string GetPlateModel() const;

                    /**
                     * 设置<p>厂牌型号</p>
                     * @param _plateModel <p>厂牌型号</p>
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
                     * 获取<p>产地</p>
                     * @return ProduceAddress <p>产地</p>
                     * 
                     */
                    std::string GetProduceAddress() const;

                    /**
                     * 设置<p>产地</p>
                     * @param _produceAddress <p>产地</p>
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
                     * 获取<p>合格证号</p>
                     * @return CertificateNo <p>合格证号</p>
                     * 
                     */
                    std::string GetCertificateNo() const;

                    /**
                     * 设置<p>合格证号</p>
                     * @param _certificateNo <p>合格证号</p>
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
                     * 获取<p>进口证明书号</p>
                     * @return ImportNo <p>进口证明书号</p>
                     * 
                     */
                    std::string GetImportNo() const;

                    /**
                     * 设置<p>进口证明书号</p>
                     * @param _importNo <p>进口证明书号</p>
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
                     * 获取<p>LSVCA2NP9HN0xxxxx</p>
                     * @return VinNo <p>LSVCA2NP9HN0xxxxx</p>
                     * 
                     */
                    std::string GetVinNo() const;

                    /**
                     * 设置<p>LSVCA2NP9HN0xxxxx</p>
                     * @param _vinNo <p>LSVCA2NP9HN0xxxxx</p>
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
                     * 获取<p>完税证书号</p>
                     * @return PayTaxesNo <p>完税证书号</p>
                     * 
                     */
                    std::string GetPayTaxesNo() const;

                    /**
                     * 设置<p>完税证书号</p>
                     * @param _payTaxesNo <p>完税证书号</p>
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
                     * 获取<p>吨位</p>
                     * @return Tonnage <p>吨位</p>
                     * 
                     */
                    std::string GetTonnage() const;

                    /**
                     * 设置<p>吨位</p>
                     * @param _tonnage <p>吨位</p>
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
                     * 获取<p>限乘人数</p>
                     * @return LimitCount <p>限乘人数</p>
                     * 
                     */
                    std::string GetLimitCount() const;

                    /**
                     * 设置<p>限乘人数</p>
                     * @param _limitCount <p>限乘人数</p>
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
                     * 获取<p>发动机号码</p>
                     * @return EngineNo <p>发动机号码</p>
                     * 
                     */
                    std::string GetEngineNo() const;

                    /**
                     * 设置<p>发动机号码</p>
                     * @param _engineNo <p>发动机号码</p>
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
                     * 获取<p>商检单号</p>
                     * @return BizCheckFormNo <p>商检单号</p>
                     * 
                     */
                    std::string GetBizCheckFormNo() const;

                    /**
                     * 设置<p>商检单号</p>
                     * @param _bizCheckFormNo <p>商检单号</p>
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
                     * 获取<p>主管税务机关代码</p>
                     * @return TaxtationOrgCode <p>主管税务机关代码</p>
                     * 
                     */
                    std::string GetTaxtationOrgCode() const;

                    /**
                     * 设置<p>主管税务机关代码</p>
                     * @param _taxtationOrgCode <p>主管税务机关代码</p>
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
                     * 获取<p>主管税务机关名称</p>
                     * @return TaxtationOrgName <p>主管税务机关名称</p>
                     * 
                     */
                    std::string GetTaxtationOrgName() const;

                    /**
                     * 设置<p>主管税务机关名称</p>
                     * @param _taxtationOrgName <p>主管税务机关名称</p>
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
                     * 获取<p>税率</p>
                     * @return MotorTaxRate <p>税率</p>
                     * 
                     */
                    std::string GetMotorTaxRate() const;

                    /**
                     * 设置<p>税率</p>
                     * @param _motorTaxRate <p>税率</p>
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
                     * 获取<p>银行账号</p>
                     * @return MotorBankName <p>银行账号</p>
                     * 
                     */
                    std::string GetMotorBankName() const;

                    /**
                     * 设置<p>银行账号</p>
                     * @param _motorBankName <p>银行账号</p>
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
                     * 获取<p>开户行</p>
                     * @return MotorBankAccount <p>开户行</p>
                     * 
                     */
                    std::string GetMotorBankAccount() const;

                    /**
                     * 设置<p>开户行</p>
                     * @param _motorBankAccount <p>开户行</p>
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
                     * 获取<p>销售地址</p>
                     * @return SellerAddress <p>销售地址</p>
                     * 
                     */
                    std::string GetSellerAddress() const;

                    /**
                     * 设置<p>销售地址</p>
                     * @param _sellerAddress <p>销售地址</p>
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
                     * 获取<p>销售电话</p>
                     * @return SellerTel <p>销售电话</p>
                     * 
                     */
                    std::string GetSellerTel() const;

                    /**
                     * 设置<p>销售电话</p>
                     * @param _sellerTel <p>销售电话</p>
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
                     * 获取<p>购方身份证</p>
                     * @return BuyerNo <p>购方身份证</p>
                     * 
                     */
                    std::string GetBuyerNo() const;

                    /**
                     * 设置<p>购方身份证</p>
                     * @param _buyerNo <p>购方身份证</p>
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
                     * <p>车辆类型</p>
                     */
                    std::string m_carType;
                    bool m_carTypeHasBeenSet;

                    /**
                     * <p>厂牌型号</p>
                     */
                    std::string m_plateModel;
                    bool m_plateModelHasBeenSet;

                    /**
                     * <p>产地</p>
                     */
                    std::string m_produceAddress;
                    bool m_produceAddressHasBeenSet;

                    /**
                     * <p>合格证号</p>
                     */
                    std::string m_certificateNo;
                    bool m_certificateNoHasBeenSet;

                    /**
                     * <p>进口证明书号</p>
                     */
                    std::string m_importNo;
                    bool m_importNoHasBeenSet;

                    /**
                     * <p>LSVCA2NP9HN0xxxxx</p>
                     */
                    std::string m_vinNo;
                    bool m_vinNoHasBeenSet;

                    /**
                     * <p>完税证书号</p>
                     */
                    std::string m_payTaxesNo;
                    bool m_payTaxesNoHasBeenSet;

                    /**
                     * <p>吨位</p>
                     */
                    std::string m_tonnage;
                    bool m_tonnageHasBeenSet;

                    /**
                     * <p>限乘人数</p>
                     */
                    std::string m_limitCount;
                    bool m_limitCountHasBeenSet;

                    /**
                     * <p>发动机号码</p>
                     */
                    std::string m_engineNo;
                    bool m_engineNoHasBeenSet;

                    /**
                     * <p>商检单号</p>
                     */
                    std::string m_bizCheckFormNo;
                    bool m_bizCheckFormNoHasBeenSet;

                    /**
                     * <p>主管税务机关代码</p>
                     */
                    std::string m_taxtationOrgCode;
                    bool m_taxtationOrgCodeHasBeenSet;

                    /**
                     * <p>主管税务机关名称</p>
                     */
                    std::string m_taxtationOrgName;
                    bool m_taxtationOrgNameHasBeenSet;

                    /**
                     * <p>税率</p>
                     */
                    std::string m_motorTaxRate;
                    bool m_motorTaxRateHasBeenSet;

                    /**
                     * <p>银行账号</p>
                     */
                    std::string m_motorBankName;
                    bool m_motorBankNameHasBeenSet;

                    /**
                     * <p>开户行</p>
                     */
                    std::string m_motorBankAccount;
                    bool m_motorBankAccountHasBeenSet;

                    /**
                     * <p>销售地址</p>
                     */
                    std::string m_sellerAddress;
                    bool m_sellerAddressHasBeenSet;

                    /**
                     * <p>销售电话</p>
                     */
                    std::string m_sellerTel;
                    bool m_sellerTelHasBeenSet;

                    /**
                     * <p>购方身份证</p>
                     */
                    std::string m_buyerNo;
                    bool m_buyerNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VEHICLEINVOICEINFO_H_
