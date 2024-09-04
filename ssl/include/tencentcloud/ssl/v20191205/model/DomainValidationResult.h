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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DOMAINVALIDATIONRESULT_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DOMAINVALIDATIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * 域名验证结果
                */
                class DomainValidationResult : public AbstractModel
                {
                public:
                    DomainValidationResult();
                    ~DomainValidationResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名。
                     * @return Domain 域名。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名。
                     * @param _domain 域名。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取验证类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VerifyType 验证类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVerifyType() const;

                    /**
                     * 设置验证类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _verifyType 验证类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVerifyType(const std::string& _verifyType);

                    /**
                     * 判断参数 VerifyType 是否已赋值
                     * @return VerifyType 是否已赋值
                     * 
                     */
                    bool VerifyTypeHasBeenSet() const;

                    /**
                     * 获取本地检查结果。
                     * @return LocalCheck 本地检查结果。
                     * 
                     */
                    int64_t GetLocalCheck() const;

                    /**
                     * 设置本地检查结果。
                     * @param _localCheck 本地检查结果。
                     * 
                     */
                    void SetLocalCheck(const int64_t& _localCheck);

                    /**
                     * 判断参数 LocalCheck 是否已赋值
                     * @return LocalCheck 是否已赋值
                     * 
                     */
                    bool LocalCheckHasBeenSet() const;

                    /**
                     * 获取CA检查结果。
                     * @return CaCheck CA检查结果。
                     * 
                     */
                    int64_t GetCaCheck() const;

                    /**
                     * 设置CA检查结果。
                     * @param _caCheck CA检查结果。
                     * 
                     */
                    void SetCaCheck(const int64_t& _caCheck);

                    /**
                     * 判断参数 CaCheck 是否已赋值
                     * @return CaCheck 是否已赋值
                     * 
                     */
                    bool CaCheckHasBeenSet() const;

                    /**
                     * 获取检查失败原因。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LocalCheckFailReason 检查失败原因。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLocalCheckFailReason() const;

                    /**
                     * 设置检查失败原因。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _localCheckFailReason 检查失败原因。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLocalCheckFailReason(const std::string& _localCheckFailReason);

                    /**
                     * 判断参数 LocalCheckFailReason 是否已赋值
                     * @return LocalCheckFailReason 是否已赋值
                     * 
                     */
                    bool LocalCheckFailReasonHasBeenSet() const;

                    /**
                     * 获取检查到的值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckValue 检查到的值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetCheckValue() const;

                    /**
                     * 设置检查到的值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _checkValue 检查到的值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCheckValue(const std::vector<std::string>& _checkValue);

                    /**
                     * 判断参数 CheckValue 是否已赋值
                     * @return CheckValue 是否已赋值
                     * 
                     */
                    bool CheckValueHasBeenSet() const;

                    /**
                     * 获取是否频繁请求。
                     * @return Frequently 是否频繁请求。
                     * 
                     */
                    bool GetFrequently() const;

                    /**
                     * 设置是否频繁请求。
                     * @param _frequently 是否频繁请求。
                     * 
                     */
                    void SetFrequently(const bool& _frequently);

                    /**
                     * 判断参数 Frequently 是否已赋值
                     * @return Frequently 是否已赋值
                     * 
                     */
                    bool FrequentlyHasBeenSet() const;

                    /**
                     * 获取是否已经签发。
                     * @return Issued 是否已经签发。
                     * 
                     */
                    bool GetIssued() const;

                    /**
                     * 设置是否已经签发。
                     * @param _issued 是否已经签发。
                     * 
                     */
                    void SetIssued(const bool& _issued);

                    /**
                     * 判断参数 Issued 是否已赋值
                     * @return Issued 是否已赋值
                     * 
                     */
                    bool IssuedHasBeenSet() const;

                private:

                    /**
                     * 域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 验证类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_verifyType;
                    bool m_verifyTypeHasBeenSet;

                    /**
                     * 本地检查结果。
                     */
                    int64_t m_localCheck;
                    bool m_localCheckHasBeenSet;

                    /**
                     * CA检查结果。
                     */
                    int64_t m_caCheck;
                    bool m_caCheckHasBeenSet;

                    /**
                     * 检查失败原因。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_localCheckFailReason;
                    bool m_localCheckFailReasonHasBeenSet;

                    /**
                     * 检查到的值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_checkValue;
                    bool m_checkValueHasBeenSet;

                    /**
                     * 是否频繁请求。
                     */
                    bool m_frequently;
                    bool m_frequentlyHasBeenSet;

                    /**
                     * 是否已经签发。
                     */
                    bool m_issued;
                    bool m_issuedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DOMAINVALIDATIONRESULT_H_
