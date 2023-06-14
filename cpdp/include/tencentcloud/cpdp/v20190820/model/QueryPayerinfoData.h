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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYPAYERINFODATA_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYPAYERINFODATA_H_

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
                * 付款人查询数据
                */
                class QueryPayerinfoData : public AbstractModel
                {
                public:
                    QueryPayerinfoData();
                    ~QueryPayerinfoData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取商户号
                     * @return MerchantId 商户号
                     * 
                     */
                    std::string GetMerchantId() const;

                    /**
                     * 设置商户号
                     * @param _merchantId 商户号
                     * 
                     */
                    void SetMerchantId(const std::string& _merchantId);

                    /**
                     * 判断参数 MerchantId 是否已赋值
                     * @return MerchantId 是否已赋值
                     * 
                     */
                    bool MerchantIdHasBeenSet() const;

                    /**
                     * 获取付款人ID
                     * @return PayerId 付款人ID
                     * 
                     */
                    std::string GetPayerId() const;

                    /**
                     * 设置付款人ID
                     * @param _payerId 付款人ID
                     * 
                     */
                    void SetPayerId(const std::string& _payerId);

                    /**
                     * 判断参数 PayerId 是否已赋值
                     * @return PayerId 是否已赋值
                     * 
                     */
                    bool PayerIdHasBeenSet() const;

                    /**
                     * 获取审核状态
                     * @return Status 审核状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置审核状态
                     * @param _status 审核状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailReason 失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failReason 失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailReason(const std::string& _failReason);

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                    /**
                     * 获取付款人类型
                     * @return PayerType 付款人类型
                     * 
                     */
                    std::string GetPayerType() const;

                    /**
                     * 设置付款人类型
                     * @param _payerType 付款人类型
                     * 
                     */
                    void SetPayerType(const std::string& _payerType);

                    /**
                     * 判断参数 PayerType 是否已赋值
                     * @return PayerType 是否已赋值
                     * 
                     */
                    bool PayerTypeHasBeenSet() const;

                    /**
                     * 获取付款人姓名
                     * @return PayerName 付款人姓名
                     * 
                     */
                    std::string GetPayerName() const;

                    /**
                     * 设置付款人姓名
                     * @param _payerName 付款人姓名
                     * 
                     */
                    void SetPayerName(const std::string& _payerName);

                    /**
                     * 判断参数 PayerName 是否已赋值
                     * @return PayerName 是否已赋值
                     * 
                     */
                    bool PayerNameHasBeenSet() const;

                    /**
                     * 获取付款人证件类型
                     * @return PayerIdType 付款人证件类型
                     * 
                     */
                    std::string GetPayerIdType() const;

                    /**
                     * 设置付款人证件类型
                     * @param _payerIdType 付款人证件类型
                     * 
                     */
                    void SetPayerIdType(const std::string& _payerIdType);

                    /**
                     * 判断参数 PayerIdType 是否已赋值
                     * @return PayerIdType 是否已赋值
                     * 
                     */
                    bool PayerIdTypeHasBeenSet() const;

                    /**
                     * 获取付款人证件号
                     * @return PayerIdNo 付款人证件号
                     * 
                     */
                    std::string GetPayerIdNo() const;

                    /**
                     * 设置付款人证件号
                     * @param _payerIdNo 付款人证件号
                     * 
                     */
                    void SetPayerIdNo(const std::string& _payerIdNo);

                    /**
                     * 判断参数 PayerIdNo 是否已赋值
                     * @return PayerIdNo 是否已赋值
                     * 
                     */
                    bool PayerIdNoHasBeenSet() const;

                    /**
                     * 获取付款人联系电话
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayerContactNumber 付款人联系电话
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPayerContactNumber() const;

                    /**
                     * 设置付款人联系电话
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payerContactNumber 付款人联系电话
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPayerContactNumber(const std::string& _payerContactNumber);

                    /**
                     * 判断参数 PayerContactNumber 是否已赋值
                     * @return PayerContactNumber 是否已赋值
                     * 
                     */
                    bool PayerContactNumberHasBeenSet() const;

                    /**
                     * 获取付款人联系邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayerEmailAddress 付款人联系邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPayerEmailAddress() const;

                    /**
                     * 设置付款人联系邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payerEmailAddress 付款人联系邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPayerEmailAddress(const std::string& _payerEmailAddress);

                    /**
                     * 判断参数 PayerEmailAddress 是否已赋值
                     * @return PayerEmailAddress 是否已赋值
                     * 
                     */
                    bool PayerEmailAddressHasBeenSet() const;

                    /**
                     * 获取付款人常驻国家或地区编码
                     * @return PayerCountryCode 付款人常驻国家或地区编码
                     * 
                     */
                    std::string GetPayerCountryCode() const;

                    /**
                     * 设置付款人常驻国家或地区编码
                     * @param _payerCountryCode 付款人常驻国家或地区编码
                     * 
                     */
                    void SetPayerCountryCode(const std::string& _payerCountryCode);

                    /**
                     * 判断参数 PayerCountryCode 是否已赋值
                     * @return PayerCountryCode 是否已赋值
                     * 
                     */
                    bool PayerCountryCodeHasBeenSet() const;

                    /**
                     * 获取付款人联系名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayerContactName 付款人联系名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPayerContactName() const;

                    /**
                     * 设置付款人联系名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payerContactName 付款人联系名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPayerContactName(const std::string& _payerContactName);

                    /**
                     * 判断参数 PayerContactName 是否已赋值
                     * @return PayerContactName 是否已赋值
                     * 
                     */
                    bool PayerContactNameHasBeenSet() const;

                private:

                    /**
                     * 商户号
                     */
                    std::string m_merchantId;
                    bool m_merchantIdHasBeenSet;

                    /**
                     * 付款人ID
                     */
                    std::string m_payerId;
                    bool m_payerIdHasBeenSet;

                    /**
                     * 审核状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                    /**
                     * 付款人类型
                     */
                    std::string m_payerType;
                    bool m_payerTypeHasBeenSet;

                    /**
                     * 付款人姓名
                     */
                    std::string m_payerName;
                    bool m_payerNameHasBeenSet;

                    /**
                     * 付款人证件类型
                     */
                    std::string m_payerIdType;
                    bool m_payerIdTypeHasBeenSet;

                    /**
                     * 付款人证件号
                     */
                    std::string m_payerIdNo;
                    bool m_payerIdNoHasBeenSet;

                    /**
                     * 付款人联系电话
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payerContactNumber;
                    bool m_payerContactNumberHasBeenSet;

                    /**
                     * 付款人联系邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payerEmailAddress;
                    bool m_payerEmailAddressHasBeenSet;

                    /**
                     * 付款人常驻国家或地区编码
                     */
                    std::string m_payerCountryCode;
                    bool m_payerCountryCodeHasBeenSet;

                    /**
                     * 付款人联系名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payerContactName;
                    bool m_payerContactNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYPAYERINFODATA_H_
