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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_PASSPORTRECOGNIZEINFOS_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_PASSPORTRECOGNIZEINFOS_H_

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
                * 信息区证件内容
                */
                class PassportRecognizeInfos : public AbstractModel
                {
                public:
                    PassportRecognizeInfos();
                    ~PassportRecognizeInfos() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取证件类型（护照信息页识别结果）
                     * @return Type 证件类型（护照信息页识别结果）
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置证件类型（护照信息页识别结果）
                     * @param _type 证件类型（护照信息页识别结果）
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取发行国家（护照信息页识别结果）
                     * @return IssuingCountry 发行国家（护照信息页识别结果）
                     * 
                     */
                    std::string GetIssuingCountry() const;

                    /**
                     * 设置发行国家（护照信息页识别结果）
                     * @param _issuingCountry 发行国家（护照信息页识别结果）
                     * 
                     */
                    void SetIssuingCountry(const std::string& _issuingCountry);

                    /**
                     * 判断参数 IssuingCountry 是否已赋值
                     * @return IssuingCountry 是否已赋值
                     * 
                     */
                    bool IssuingCountryHasBeenSet() const;

                    /**
                     * 获取护照号码（护照信息页识别结果）
                     * @return PassportID 护照号码（护照信息页识别结果）
                     * 
                     */
                    std::string GetPassportID() const;

                    /**
                     * 设置护照号码（护照信息页识别结果）
                     * @param _passportID 护照号码（护照信息页识别结果）
                     * 
                     */
                    void SetPassportID(const std::string& _passportID);

                    /**
                     * 判断参数 PassportID 是否已赋值
                     * @return PassportID 是否已赋值
                     * 
                     */
                    bool PassportIDHasBeenSet() const;

                    /**
                     * 获取姓（护照信息页识别结果）
                     * @return Surname 姓（护照信息页识别结果）
                     * 
                     */
                    std::string GetSurname() const;

                    /**
                     * 设置姓（护照信息页识别结果）
                     * @param _surname 姓（护照信息页识别结果）
                     * 
                     */
                    void SetSurname(const std::string& _surname);

                    /**
                     * 判断参数 Surname 是否已赋值
                     * @return Surname 是否已赋值
                     * 
                     */
                    bool SurnameHasBeenSet() const;

                    /**
                     * 获取名（护照信息页识别结果）
                     * @return GivenName 名（护照信息页识别结果）
                     * 
                     */
                    std::string GetGivenName() const;

                    /**
                     * 设置名（护照信息页识别结果）
                     * @param _givenName 名（护照信息页识别结果）
                     * 
                     */
                    void SetGivenName(const std::string& _givenName);

                    /**
                     * 判断参数 GivenName 是否已赋值
                     * @return GivenName 是否已赋值
                     * 
                     */
                    bool GivenNameHasBeenSet() const;

                    /**
                     * 获取姓名（护照信息页识别结果）
                     * @return Name 姓名（护照信息页识别结果）
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置姓名（护照信息页识别结果）
                     * @param _name 姓名（护照信息页识别结果）
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取国籍信息（护照信息页识别结果）
                     * @return Nationality 国籍信息（护照信息页识别结果）
                     * 
                     */
                    std::string GetNationality() const;

                    /**
                     * 设置国籍信息（护照信息页识别结果）
                     * @param _nationality 国籍信息（护照信息页识别结果）
                     * 
                     */
                    void SetNationality(const std::string& _nationality);

                    /**
                     * 判断参数 Nationality 是否已赋值
                     * @return Nationality 是否已赋值
                     * 
                     */
                    bool NationalityHasBeenSet() const;

                    /**
                     * 获取出生日期（护照信息页识别结果）
                     * @return DateOfBirth 出生日期（护照信息页识别结果）
                     * 
                     */
                    std::string GetDateOfBirth() const;

                    /**
                     * 设置出生日期（护照信息页识别结果）
                     * @param _dateOfBirth 出生日期（护照信息页识别结果）
                     * 
                     */
                    void SetDateOfBirth(const std::string& _dateOfBirth);

                    /**
                     * 判断参数 DateOfBirth 是否已赋值
                     * @return DateOfBirth 是否已赋值
                     * 
                     */
                    bool DateOfBirthHasBeenSet() const;

                    /**
                     * 获取性别（护照信息页识别结果）
                     * @return Sex 性别（护照信息页识别结果）
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 设置性别（护照信息页识别结果）
                     * @param _sex 性别（护照信息页识别结果）
                     * 
                     */
                    void SetSex(const std::string& _sex);

                    /**
                     * 判断参数 Sex 是否已赋值
                     * @return Sex 是否已赋值
                     * 
                     */
                    bool SexHasBeenSet() const;

                    /**
                     * 获取发行日期（护照信息页识别结果）
                     * @return DateOfIssuance 发行日期（护照信息页识别结果）
                     * 
                     */
                    std::string GetDateOfIssuance() const;

                    /**
                     * 设置发行日期（护照信息页识别结果）
                     * @param _dateOfIssuance 发行日期（护照信息页识别结果）
                     * 
                     */
                    void SetDateOfIssuance(const std::string& _dateOfIssuance);

                    /**
                     * 判断参数 DateOfIssuance 是否已赋值
                     * @return DateOfIssuance 是否已赋值
                     * 
                     */
                    bool DateOfIssuanceHasBeenSet() const;

                    /**
                     * 获取截止日期（护照信息页识别结果）
                     * @return DateOfExpiration 截止日期（护照信息页识别结果）
                     * 
                     */
                    std::string GetDateOfExpiration() const;

                    /**
                     * 设置截止日期（护照信息页识别结果）
                     * @param _dateOfExpiration 截止日期（护照信息页识别结果）
                     * 
                     */
                    void SetDateOfExpiration(const std::string& _dateOfExpiration);

                    /**
                     * 判断参数 DateOfExpiration 是否已赋值
                     * @return DateOfExpiration 是否已赋值
                     * 
                     */
                    bool DateOfExpirationHasBeenSet() const;

                    /**
                     * 获取持证人签名（护照信息页识别结果）

仅中国大陆护照支持返回此字段，港澳台及境外护照不支持
                     * @return Signature 持证人签名（护照信息页识别结果）

仅中国大陆护照支持返回此字段，港澳台及境外护照不支持
                     * 
                     */
                    std::string GetSignature() const;

                    /**
                     * 设置持证人签名（护照信息页识别结果）

仅中国大陆护照支持返回此字段，港澳台及境外护照不支持
                     * @param _signature 持证人签名（护照信息页识别结果）

仅中国大陆护照支持返回此字段，港澳台及境外护照不支持
                     * 
                     */
                    void SetSignature(const std::string& _signature);

                    /**
                     * 判断参数 Signature 是否已赋值
                     * @return Signature 是否已赋值
                     * 
                     */
                    bool SignatureHasBeenSet() const;

                    /**
                     * 获取签发地点（护照信息页识别结果）

仅中国大陆护照支持返回此字段，港澳台及境外护照不支持
                     * @return IssuePlace 签发地点（护照信息页识别结果）

仅中国大陆护照支持返回此字段，港澳台及境外护照不支持
                     * 
                     */
                    std::string GetIssuePlace() const;

                    /**
                     * 设置签发地点（护照信息页识别结果）

仅中国大陆护照支持返回此字段，港澳台及境外护照不支持
                     * @param _issuePlace 签发地点（护照信息页识别结果）

仅中国大陆护照支持返回此字段，港澳台及境外护照不支持
                     * 
                     */
                    void SetIssuePlace(const std::string& _issuePlace);

                    /**
                     * 判断参数 IssuePlace 是否已赋值
                     * @return IssuePlace 是否已赋值
                     * 
                     */
                    bool IssuePlaceHasBeenSet() const;

                    /**
                     * 获取签发机关（护照信息页识别结果）

仅中国大陆护照支持返回此字段，港澳台及境外护照不支持
                     * @return IssuingAuthority 签发机关（护照信息页识别结果）

仅中国大陆护照支持返回此字段，港澳台及境外护照不支持
                     * 
                     */
                    std::string GetIssuingAuthority() const;

                    /**
                     * 设置签发机关（护照信息页识别结果）

仅中国大陆护照支持返回此字段，港澳台及境外护照不支持
                     * @param _issuingAuthority 签发机关（护照信息页识别结果）

仅中国大陆护照支持返回此字段，港澳台及境外护照不支持
                     * 
                     */
                    void SetIssuingAuthority(const std::string& _issuingAuthority);

                    /**
                     * 判断参数 IssuingAuthority 是否已赋值
                     * @return IssuingAuthority 是否已赋值
                     * 
                     */
                    bool IssuingAuthorityHasBeenSet() const;

                private:

                    /**
                     * 证件类型（护照信息页识别结果）
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 发行国家（护照信息页识别结果）
                     */
                    std::string m_issuingCountry;
                    bool m_issuingCountryHasBeenSet;

                    /**
                     * 护照号码（护照信息页识别结果）
                     */
                    std::string m_passportID;
                    bool m_passportIDHasBeenSet;

                    /**
                     * 姓（护照信息页识别结果）
                     */
                    std::string m_surname;
                    bool m_surnameHasBeenSet;

                    /**
                     * 名（护照信息页识别结果）
                     */
                    std::string m_givenName;
                    bool m_givenNameHasBeenSet;

                    /**
                     * 姓名（护照信息页识别结果）
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 国籍信息（护照信息页识别结果）
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * 出生日期（护照信息页识别结果）
                     */
                    std::string m_dateOfBirth;
                    bool m_dateOfBirthHasBeenSet;

                    /**
                     * 性别（护照信息页识别结果）
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * 发行日期（护照信息页识别结果）
                     */
                    std::string m_dateOfIssuance;
                    bool m_dateOfIssuanceHasBeenSet;

                    /**
                     * 截止日期（护照信息页识别结果）
                     */
                    std::string m_dateOfExpiration;
                    bool m_dateOfExpirationHasBeenSet;

                    /**
                     * 持证人签名（护照信息页识别结果）

仅中国大陆护照支持返回此字段，港澳台及境外护照不支持
                     */
                    std::string m_signature;
                    bool m_signatureHasBeenSet;

                    /**
                     * 签发地点（护照信息页识别结果）

仅中国大陆护照支持返回此字段，港澳台及境外护照不支持
                     */
                    std::string m_issuePlace;
                    bool m_issuePlaceHasBeenSet;

                    /**
                     * 签发机关（护照信息页识别结果）

仅中国大陆护照支持返回此字段，港澳台及境外护照不支持
                     */
                    std::string m_issuingAuthority;
                    bool m_issuingAuthorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_PASSPORTRECOGNIZEINFOS_H_
