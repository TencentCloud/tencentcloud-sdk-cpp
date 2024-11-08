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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_PASSPORTOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_PASSPORTOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/PortraitImageInfo.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * PassportOCR返回参数结构体
                */
                class PassportOCRResponse : public AbstractModel
                {
                public:
                    PassportOCRResponse();
                    ~PassportOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取国家码
                     * @return Country 国家码
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取护照号
                     * @return PassportNo 护照号
                     * 
                     */
                    std::string GetPassportNo() const;

                    /**
                     * 判断参数 PassportNo 是否已赋值
                     * @return PassportNo 是否已赋值
                     * 
                     */
                    bool PassportNoHasBeenSet() const;

                    /**
                     * 获取性别
                     * @return Sex 性别
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 判断参数 Sex 是否已赋值
                     * @return Sex 是否已赋值
                     * 
                     */
                    bool SexHasBeenSet() const;

                    /**
                     * 获取国籍
                     * @return Nationality 国籍
                     * 
                     */
                    std::string GetNationality() const;

                    /**
                     * 判断参数 Nationality 是否已赋值
                     * @return Nationality 是否已赋值
                     * 
                     */
                    bool NationalityHasBeenSet() const;

                    /**
                     * 获取出生日期
                     * @return BirthDate 出生日期
                     * 
                     */
                    std::string GetBirthDate() const;

                    /**
                     * 判断参数 BirthDate 是否已赋值
                     * @return BirthDate 是否已赋值
                     * 
                     */
                    bool BirthDateHasBeenSet() const;

                    /**
                     * 获取出生地点
                     * @return BirthPlace 出生地点
                     * 
                     */
                    std::string GetBirthPlace() const;

                    /**
                     * 判断参数 BirthPlace 是否已赋值
                     * @return BirthPlace 是否已赋值
                     * 
                     */
                    bool BirthPlaceHasBeenSet() const;

                    /**
                     * 获取签发日期
                     * @return IssueDate 签发日期
                     * 
                     */
                    std::string GetIssueDate() const;

                    /**
                     * 判断参数 IssueDate 是否已赋值
                     * @return IssueDate 是否已赋值
                     * 
                     */
                    bool IssueDateHasBeenSet() const;

                    /**
                     * 获取签发地点
                     * @return IssuePlace 签发地点
                     * 
                     */
                    std::string GetIssuePlace() const;

                    /**
                     * 判断参数 IssuePlace 是否已赋值
                     * @return IssuePlace 是否已赋值
                     * 
                     */
                    bool IssuePlaceHasBeenSet() const;

                    /**
                     * 获取有效期
                     * @return ExpiryDate 有效期
                     * 
                     */
                    std::string GetExpiryDate() const;

                    /**
                     * 判断参数 ExpiryDate 是否已赋值
                     * @return ExpiryDate 是否已赋值
                     * 
                     */
                    bool ExpiryDateHasBeenSet() const;

                    /**
                     * 获取持证人签名
                     * @return Signature 持证人签名
                     * 
                     */
                    std::string GetSignature() const;

                    /**
                     * 判断参数 Signature 是否已赋值
                     * @return Signature 是否已赋值
                     * 
                     */
                    bool SignatureHasBeenSet() const;

                    /**
                     * 获取最下方第一行 MRZ Code 序列
                     * @return CodeSet 最下方第一行 MRZ Code 序列
                     * 
                     */
                    std::string GetCodeSet() const;

                    /**
                     * 判断参数 CodeSet 是否已赋值
                     * @return CodeSet 是否已赋值
                     * 
                     */
                    bool CodeSetHasBeenSet() const;

                    /**
                     * 获取最下方第二行 MRZ Code 序列
                     * @return CodeCrc 最下方第二行 MRZ Code 序列
                     * 
                     */
                    std::string GetCodeCrc() const;

                    /**
                     * 判断参数 CodeCrc 是否已赋值
                     * @return CodeCrc 是否已赋值
                     * 
                     */
                    bool CodeCrcHasBeenSet() const;

                    /**
                     * 获取姓名
                     * @return Name 姓名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取姓
                     * @return FamilyName 姓
                     * 
                     */
                    std::string GetFamilyName() const;

                    /**
                     * 判断参数 FamilyName 是否已赋值
                     * @return FamilyName 是否已赋值
                     * 
                     */
                    bool FamilyNameHasBeenSet() const;

                    /**
                     * 获取名
                     * @return FirstName 名
                     * 
                     */
                    std::string GetFirstName() const;

                    /**
                     * 判断参数 FirstName 是否已赋值
                     * @return FirstName 是否已赋值
                     * 
                     */
                    bool FirstNameHasBeenSet() const;

                    /**
                     * 获取头像和坐标信息
                     * @return PortraitImageInfo 头像和坐标信息
                     * 
                     */
                    PortraitImageInfo GetPortraitImageInfo() const;

                    /**
                     * 判断参数 PortraitImageInfo 是否已赋值
                     * @return PortraitImageInfo 是否已赋值
                     * 
                     */
                    bool PortraitImageInfoHasBeenSet() const;

                private:

                    /**
                     * 国家码
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 护照号
                     */
                    std::string m_passportNo;
                    bool m_passportNoHasBeenSet;

                    /**
                     * 性别
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * 国籍
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * 出生日期
                     */
                    std::string m_birthDate;
                    bool m_birthDateHasBeenSet;

                    /**
                     * 出生地点
                     */
                    std::string m_birthPlace;
                    bool m_birthPlaceHasBeenSet;

                    /**
                     * 签发日期
                     */
                    std::string m_issueDate;
                    bool m_issueDateHasBeenSet;

                    /**
                     * 签发地点
                     */
                    std::string m_issuePlace;
                    bool m_issuePlaceHasBeenSet;

                    /**
                     * 有效期
                     */
                    std::string m_expiryDate;
                    bool m_expiryDateHasBeenSet;

                    /**
                     * 持证人签名
                     */
                    std::string m_signature;
                    bool m_signatureHasBeenSet;

                    /**
                     * 最下方第一行 MRZ Code 序列
                     */
                    std::string m_codeSet;
                    bool m_codeSetHasBeenSet;

                    /**
                     * 最下方第二行 MRZ Code 序列
                     */
                    std::string m_codeCrc;
                    bool m_codeCrcHasBeenSet;

                    /**
                     * 姓名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 姓
                     */
                    std::string m_familyName;
                    bool m_familyNameHasBeenSet;

                    /**
                     * 名
                     */
                    std::string m_firstName;
                    bool m_firstNameHasBeenSet;

                    /**
                     * 头像和坐标信息
                     */
                    PortraitImageInfo m_portraitImageInfo;
                    bool m_portraitImageInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_PASSPORTOCRRESPONSE_H_
