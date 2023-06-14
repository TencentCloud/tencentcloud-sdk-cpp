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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKEXTERNALSUBMERCHANTREGISTRATIONRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKEXTERNALSUBMERCHANTREGISTRATIONRESULT_H_

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
                * 第三方子商户进件结果查询返回结果
                */
                class QueryOpenBankExternalSubMerchantRegistrationResult : public AbstractModel
                {
                public:
                    QueryOpenBankExternalSubMerchantRegistrationResult();
                    ~QueryOpenBankExternalSubMerchantRegistrationResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取进件状态。
__SUCCESS__: 进件成功
__FAILED__: 进件失败
__PROCESSING__: 进件中
                     * @return RegistrationStatus 进件状态。
__SUCCESS__: 进件成功
__FAILED__: 进件失败
__PROCESSING__: 进件中
                     * 
                     */
                    std::string GetRegistrationStatus() const;

                    /**
                     * 设置进件状态。
__SUCCESS__: 进件成功
__FAILED__: 进件失败
__PROCESSING__: 进件中
                     * @param _registrationStatus 进件状态。
__SUCCESS__: 进件成功
__FAILED__: 进件失败
__PROCESSING__: 进件中
                     * 
                     */
                    void SetRegistrationStatus(const std::string& _registrationStatus);

                    /**
                     * 判断参数 RegistrationStatus 是否已赋值
                     * @return RegistrationStatus 是否已赋值
                     * 
                     */
                    bool RegistrationStatusHasBeenSet() const;

                    /**
                     * 获取进件返回描述, 例如失败原因等。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegistrationMessage 进件返回描述, 例如失败原因等。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegistrationMessage() const;

                    /**
                     * 设置进件返回描述, 例如失败原因等。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _registrationMessage 进件返回描述, 例如失败原因等。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegistrationMessage(const std::string& _registrationMessage);

                    /**
                     * 判断参数 RegistrationMessage 是否已赋值
                     * @return RegistrationMessage 是否已赋值
                     * 
                     */
                    bool RegistrationMessageHasBeenSet() const;

                    /**
                     * 获取渠道进件号。
                     * @return ChannelRegistrationNo 渠道进件号。
                     * 
                     */
                    std::string GetChannelRegistrationNo() const;

                    /**
                     * 设置渠道进件号。
                     * @param _channelRegistrationNo 渠道进件号。
                     * 
                     */
                    void SetChannelRegistrationNo(const std::string& _channelRegistrationNo);

                    /**
                     * 判断参数 ChannelRegistrationNo 是否已赋值
                     * @return ChannelRegistrationNo 是否已赋值
                     * 
                     */
                    bool ChannelRegistrationNoHasBeenSet() const;

                    /**
                     * 获取渠道子商户ID（进件成功返回）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelSubMerchantId 渠道子商户ID（进件成功返回）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelSubMerchantId() const;

                    /**
                     * 设置渠道子商户ID（进件成功返回）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelSubMerchantId 渠道子商户ID（进件成功返回）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannelSubMerchantId(const std::string& _channelSubMerchantId);

                    /**
                     * 判断参数 ChannelSubMerchantId 是否已赋值
                     * @return ChannelSubMerchantId 是否已赋值
                     * 
                     */
                    bool ChannelSubMerchantIdHasBeenSet() const;

                    /**
                     * 获取外部子商户名称（进件成功返回）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutSubMerchantName 外部子商户名称（进件成功返回）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutSubMerchantName() const;

                    /**
                     * 设置外部子商户名称（进件成功返回）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outSubMerchantName 外部子商户名称（进件成功返回）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutSubMerchantName(const std::string& _outSubMerchantName);

                    /**
                     * 判断参数 OutSubMerchantName 是否已赋值
                     * @return OutSubMerchantName 是否已赋值
                     * 
                     */
                    bool OutSubMerchantNameHasBeenSet() const;

                    /**
                     * 获取渠道名称（进件成功返回）。
__TENPAY__: 商企付
__WECHAT__: 微信支付
__ALIPAY__: 支付宝
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelName 渠道名称（进件成功返回）。
__TENPAY__: 商企付
__WECHAT__: 微信支付
__ALIPAY__: 支付宝
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置渠道名称（进件成功返回）。
__TENPAY__: 商企付
__WECHAT__: 微信支付
__ALIPAY__: 支付宝
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelName 渠道名称（进件成功返回）。
__TENPAY__: 商企付
__WECHAT__: 微信支付
__ALIPAY__: 支付宝
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取支付方式（进件成功返回）。
__EBANK_PAYMENT__: ebank支付
__OPENBANK_PAYMENT__: openbank支付
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentMethod 支付方式（进件成功返回）。
__EBANK_PAYMENT__: ebank支付
__OPENBANK_PAYMENT__: openbank支付
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentMethod() const;

                    /**
                     * 设置支付方式（进件成功返回）。
__EBANK_PAYMENT__: ebank支付
__OPENBANK_PAYMENT__: openbank支付
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentMethod 支付方式（进件成功返回）。
__EBANK_PAYMENT__: ebank支付
__OPENBANK_PAYMENT__: openbank支付
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPaymentMethod(const std::string& _paymentMethod);

                    /**
                     * 判断参数 PaymentMethod 是否已赋值
                     * @return PaymentMethod 是否已赋值
                     * 
                     */
                    bool PaymentMethodHasBeenSet() const;

                    /**
                     * 获取社会信用代码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BusinessLicenseNumber 社会信用代码。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBusinessLicenseNumber() const;

                    /**
                     * 设置社会信用代码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _businessLicenseNumber 社会信用代码。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBusinessLicenseNumber(const std::string& _businessLicenseNumber);

                    /**
                     * 判断参数 BusinessLicenseNumber 是否已赋值
                     * @return BusinessLicenseNumber 是否已赋值
                     * 
                     */
                    bool BusinessLicenseNumberHasBeenSet() const;

                    /**
                     * 获取法人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LegalName 法人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLegalName() const;

                    /**
                     * 设置法人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _legalName 法人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLegalName(const std::string& _legalName);

                    /**
                     * 判断参数 LegalName 是否已赋值
                     * @return LegalName 是否已赋值
                     * 
                     */
                    bool LegalNameHasBeenSet() const;

                    /**
                     * 获取第三方渠道查询进件返回数据。详情见附录-复杂类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalReturnData 第三方渠道查询进件返回数据。详情见附录-复杂类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExternalReturnData() const;

                    /**
                     * 设置第三方渠道查询进件返回数据。详情见附录-复杂类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _externalReturnData 第三方渠道查询进件返回数据。详情见附录-复杂类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExternalReturnData(const std::string& _externalReturnData);

                    /**
                     * 判断参数 ExternalReturnData 是否已赋值
                     * @return ExternalReturnData 是否已赋值
                     * 
                     */
                    bool ExternalReturnDataHasBeenSet() const;

                private:

                    /**
                     * 进件状态。
__SUCCESS__: 进件成功
__FAILED__: 进件失败
__PROCESSING__: 进件中
                     */
                    std::string m_registrationStatus;
                    bool m_registrationStatusHasBeenSet;

                    /**
                     * 进件返回描述, 例如失败原因等。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_registrationMessage;
                    bool m_registrationMessageHasBeenSet;

                    /**
                     * 渠道进件号。
                     */
                    std::string m_channelRegistrationNo;
                    bool m_channelRegistrationNoHasBeenSet;

                    /**
                     * 渠道子商户ID（进件成功返回）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelSubMerchantId;
                    bool m_channelSubMerchantIdHasBeenSet;

                    /**
                     * 外部子商户名称（进件成功返回）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outSubMerchantName;
                    bool m_outSubMerchantNameHasBeenSet;

                    /**
                     * 渠道名称（进件成功返回）。
__TENPAY__: 商企付
__WECHAT__: 微信支付
__ALIPAY__: 支付宝
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 支付方式（进件成功返回）。
__EBANK_PAYMENT__: ebank支付
__OPENBANK_PAYMENT__: openbank支付
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentMethod;
                    bool m_paymentMethodHasBeenSet;

                    /**
                     * 社会信用代码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_businessLicenseNumber;
                    bool m_businessLicenseNumberHasBeenSet;

                    /**
                     * 法人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_legalName;
                    bool m_legalNameHasBeenSet;

                    /**
                     * 第三方渠道查询进件返回数据。详情见附录-复杂类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_externalReturnData;
                    bool m_externalReturnDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKEXTERNALSUBMERCHANTREGISTRATIONRESULT_H_
