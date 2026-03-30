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
                     * 获取<p>证件类型（护照信息页识别结果）</p>
                     * @return Type <p>证件类型（护照信息页识别结果）</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>证件类型（护照信息页识别结果）</p>
                     * @param _type <p>证件类型（护照信息页识别结果）</p>
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
                     * 获取<p>发行国家（护照信息页识别结果）</p>
                     * @return IssuingCountry <p>发行国家（护照信息页识别结果）</p>
                     * 
                     */
                    std::string GetIssuingCountry() const;

                    /**
                     * 设置<p>发行国家（护照信息页识别结果）</p>
                     * @param _issuingCountry <p>发行国家（护照信息页识别结果）</p>
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
                     * 获取<p>护照号码（护照信息页识别结果）</p>
                     * @return PassportID <p>护照号码（护照信息页识别结果）</p>
                     * 
                     */
                    std::string GetPassportID() const;

                    /**
                     * 设置<p>护照号码（护照信息页识别结果）</p>
                     * @param _passportID <p>护照号码（护照信息页识别结果）</p>
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
                     * 获取<p>姓（护照信息页识别结果）</p>
                     * @return Surname <p>姓（护照信息页识别结果）</p>
                     * 
                     */
                    std::string GetSurname() const;

                    /**
                     * 设置<p>姓（护照信息页识别结果）</p>
                     * @param _surname <p>姓（护照信息页识别结果）</p>
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
                     * 获取<p>名（护照信息页识别结果）</p>
                     * @return GivenName <p>名（护照信息页识别结果）</p>
                     * 
                     */
                    std::string GetGivenName() const;

                    /**
                     * 设置<p>名（护照信息页识别结果）</p>
                     * @param _givenName <p>名（护照信息页识别结果）</p>
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
                     * 获取<p>姓名（护照信息页识别结果）</p>
                     * @return Name <p>姓名（护照信息页识别结果）</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>姓名（护照信息页识别结果）</p>
                     * @param _name <p>姓名（护照信息页识别结果）</p>
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
                     * 获取<p>国籍信息（护照信息页识别结果）</p>
                     * @return Nationality <p>国籍信息（护照信息页识别结果）</p>
                     * 
                     */
                    std::string GetNationality() const;

                    /**
                     * 设置<p>国籍信息（护照信息页识别结果）</p>
                     * @param _nationality <p>国籍信息（护照信息页识别结果）</p>
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
                     * 获取<p>出生日期（护照信息页识别结果）</p>
                     * @return DateOfBirth <p>出生日期（护照信息页识别结果）</p>
                     * 
                     */
                    std::string GetDateOfBirth() const;

                    /**
                     * 设置<p>出生日期（护照信息页识别结果）</p>
                     * @param _dateOfBirth <p>出生日期（护照信息页识别结果）</p>
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
                     * 获取<p>性别（护照信息页识别结果）</p>
                     * @return Sex <p>性别（护照信息页识别结果）</p>
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 设置<p>性别（护照信息页识别结果）</p>
                     * @param _sex <p>性别（护照信息页识别结果）</p>
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
                     * 获取<p>发行日期（护照信息页识别结果）</p>
                     * @return DateOfIssuance <p>发行日期（护照信息页识别结果）</p>
                     * 
                     */
                    std::string GetDateOfIssuance() const;

                    /**
                     * 设置<p>发行日期（护照信息页识别结果）</p>
                     * @param _dateOfIssuance <p>发行日期（护照信息页识别结果）</p>
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
                     * 获取<p>截止日期（护照信息页识别结果）</p>
                     * @return DateOfExpiration <p>截止日期（护照信息页识别结果）</p>
                     * 
                     */
                    std::string GetDateOfExpiration() const;

                    /**
                     * 设置<p>截止日期（护照信息页识别结果）</p>
                     * @param _dateOfExpiration <p>截止日期（护照信息页识别结果）</p>
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
                     * 获取<p>持证人签名（护照信息页识别结果）</p><p>仅中国大陆护照支持返回此字段，港澳台及境外护照不支持</p>
                     * @return Signature <p>持证人签名（护照信息页识别结果）</p><p>仅中国大陆护照支持返回此字段，港澳台及境外护照不支持</p>
                     * 
                     */
                    std::string GetSignature() const;

                    /**
                     * 设置<p>持证人签名（护照信息页识别结果）</p><p>仅中国大陆护照支持返回此字段，港澳台及境外护照不支持</p>
                     * @param _signature <p>持证人签名（护照信息页识别结果）</p><p>仅中国大陆护照支持返回此字段，港澳台及境外护照不支持</p>
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
                     * 获取<p>签发地点（护照信息页识别结果）</p><p>仅中国大陆护照支持返回此字段，港澳台及境外护照不支持</p>
                     * @return IssuePlace <p>签发地点（护照信息页识别结果）</p><p>仅中国大陆护照支持返回此字段，港澳台及境外护照不支持</p>
                     * 
                     */
                    std::string GetIssuePlace() const;

                    /**
                     * 设置<p>签发地点（护照信息页识别结果）</p><p>仅中国大陆护照支持返回此字段，港澳台及境外护照不支持</p>
                     * @param _issuePlace <p>签发地点（护照信息页识别结果）</p><p>仅中国大陆护照支持返回此字段，港澳台及境外护照不支持</p>
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
                     * 获取<p>签发机关（护照信息页识别结果）</p><p>仅中国大陆护照支持返回此字段，港澳台及境外护照不支持</p>
                     * @return IssuingAuthority <p>签发机关（护照信息页识别结果）</p><p>仅中国大陆护照支持返回此字段，港澳台及境外护照不支持</p>
                     * 
                     */
                    std::string GetIssuingAuthority() const;

                    /**
                     * 设置<p>签发机关（护照信息页识别结果）</p><p>仅中国大陆护照支持返回此字段，港澳台及境外护照不支持</p>
                     * @param _issuingAuthority <p>签发机关（护照信息页识别结果）</p><p>仅中国大陆护照支持返回此字段，港澳台及境外护照不支持</p>
                     * 
                     */
                    void SetIssuingAuthority(const std::string& _issuingAuthority);

                    /**
                     * 判断参数 IssuingAuthority 是否已赋值
                     * @return IssuingAuthority 是否已赋值
                     * 
                     */
                    bool IssuingAuthorityHasBeenSet() const;

                    /**
                     * 获取<p>出生地（护照信息页识别结果）</p>
                     * @return BirthPlace <p>出生地（护照信息页识别结果）</p>
                     * 
                     */
                    std::string GetBirthPlace() const;

                    /**
                     * 设置<p>出生地（护照信息页识别结果）</p>
                     * @param _birthPlace <p>出生地（护照信息页识别结果）</p>
                     * 
                     */
                    void SetBirthPlace(const std::string& _birthPlace);

                    /**
                     * 判断参数 BirthPlace 是否已赋值
                     * @return BirthPlace 是否已赋值
                     * 
                     */
                    bool BirthPlaceHasBeenSet() const;

                private:

                    /**
                     * <p>证件类型（护照信息页识别结果）</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>发行国家（护照信息页识别结果）</p>
                     */
                    std::string m_issuingCountry;
                    bool m_issuingCountryHasBeenSet;

                    /**
                     * <p>护照号码（护照信息页识别结果）</p>
                     */
                    std::string m_passportID;
                    bool m_passportIDHasBeenSet;

                    /**
                     * <p>姓（护照信息页识别结果）</p>
                     */
                    std::string m_surname;
                    bool m_surnameHasBeenSet;

                    /**
                     * <p>名（护照信息页识别结果）</p>
                     */
                    std::string m_givenName;
                    bool m_givenNameHasBeenSet;

                    /**
                     * <p>姓名（护照信息页识别结果）</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>国籍信息（护照信息页识别结果）</p>
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * <p>出生日期（护照信息页识别结果）</p>
                     */
                    std::string m_dateOfBirth;
                    bool m_dateOfBirthHasBeenSet;

                    /**
                     * <p>性别（护照信息页识别结果）</p>
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * <p>发行日期（护照信息页识别结果）</p>
                     */
                    std::string m_dateOfIssuance;
                    bool m_dateOfIssuanceHasBeenSet;

                    /**
                     * <p>截止日期（护照信息页识别结果）</p>
                     */
                    std::string m_dateOfExpiration;
                    bool m_dateOfExpirationHasBeenSet;

                    /**
                     * <p>持证人签名（护照信息页识别结果）</p><p>仅中国大陆护照支持返回此字段，港澳台及境外护照不支持</p>
                     */
                    std::string m_signature;
                    bool m_signatureHasBeenSet;

                    /**
                     * <p>签发地点（护照信息页识别结果）</p><p>仅中国大陆护照支持返回此字段，港澳台及境外护照不支持</p>
                     */
                    std::string m_issuePlace;
                    bool m_issuePlaceHasBeenSet;

                    /**
                     * <p>签发机关（护照信息页识别结果）</p><p>仅中国大陆护照支持返回此字段，港澳台及境外护照不支持</p>
                     */
                    std::string m_issuingAuthority;
                    bool m_issuingAuthorityHasBeenSet;

                    /**
                     * <p>出生地（护照信息页识别结果）</p>
                     */
                    std::string m_birthPlace;
                    bool m_birthPlaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_PASSPORTRECOGNIZEINFOS_H_
