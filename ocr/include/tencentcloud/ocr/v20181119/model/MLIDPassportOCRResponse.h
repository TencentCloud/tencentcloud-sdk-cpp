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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_MLIDPASSPORTOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_MLIDPASSPORTOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/PassportRecognizeInfos.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * MLIDPassportOCR返回参数结构体
                */
                class MLIDPassportOCRResponse : public AbstractModel
                {
                public:
                    MLIDPassportOCRResponse();
                    ~MLIDPassportOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取护照ID（机读码区的解析结果）
                     * @return ID 护照ID（机读码区的解析结果）
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取姓名（机读码区的解析结果）
                     * @return Name 姓名（机读码区的解析结果）
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
                     * 获取出生日期（机读码区的解析结果）
                     * @return DateOfBirth 出生日期（机读码区的解析结果）
                     * 
                     */
                    std::string GetDateOfBirth() const;

                    /**
                     * 判断参数 DateOfBirth 是否已赋值
                     * @return DateOfBirth 是否已赋值
                     * 
                     */
                    bool DateOfBirthHasBeenSet() const;

                    /**
                     * 获取性别（F女，M男）（机读码区的解析结果）
                     * @return Sex 性别（F女，M男）（机读码区的解析结果）
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
                     * 获取有效期（机读码区的解析结果）
                     * @return DateOfExpiration 有效期（机读码区的解析结果）
                     * 
                     */
                    std::string GetDateOfExpiration() const;

                    /**
                     * 判断参数 DateOfExpiration 是否已赋值
                     * @return DateOfExpiration 是否已赋值
                     * 
                     */
                    bool DateOfExpirationHasBeenSet() const;

                    /**
                     * 获取发行国（机读码区的解析结果）
                     * @return IssuingCountry 发行国（机读码区的解析结果）
                     * 
                     */
                    std::string GetIssuingCountry() const;

                    /**
                     * 判断参数 IssuingCountry 是否已赋值
                     * @return IssuingCountry 是否已赋值
                     * 
                     */
                    bool IssuingCountryHasBeenSet() const;

                    /**
                     * 获取国家地区代码（机读码区的解析结果）
                     * @return Nationality 国家地区代码（机读码区的解析结果）
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
                     * 获取告警码：
-9103	证照翻拍告警
-9102	证照复印件告警（包括黑白复印件、彩色复印件）
-9106       证件遮挡告警
                     * @return Warn 告警码：
-9103	证照翻拍告警
-9102	证照复印件告警（包括黑白复印件、彩色复印件）
-9106       证件遮挡告警
                     * 
                     */
                    std::vector<int64_t> GetWarn() const;

                    /**
                     * 判断参数 Warn 是否已赋值
                     * @return Warn 是否已赋值
                     * 
                     */
                    bool WarnHasBeenSet() const;

                    /**
                     * 获取证件中的人像图片base64
                     * @return Image 证件中的人像图片base64
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取扩展字段:
{
    ID:{
        Confidence:0.9999
    },
    Name:{
        Confidence:0.9996
    }
}
                     * @return AdvancedInfo 扩展字段:
{
    ID:{
        Confidence:0.9999
    },
    Name:{
        Confidence:0.9996
    }
}
                     * 
                     */
                    std::string GetAdvancedInfo() const;

                    /**
                     * 判断参数 AdvancedInfo 是否已赋值
                     * @return AdvancedInfo 是否已赋值
                     * 
                     */
                    bool AdvancedInfoHasBeenSet() const;

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
                     * 获取姓（机读码区的解析结果）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Surname 姓（机读码区的解析结果）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSurname() const;

                    /**
                     * 判断参数 Surname 是否已赋值
                     * @return Surname 是否已赋值
                     * 
                     */
                    bool SurnameHasBeenSet() const;

                    /**
                     * 获取名（机读码区的解析结果）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GivenName 名（机读码区的解析结果）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGivenName() const;

                    /**
                     * 判断参数 GivenName 是否已赋值
                     * @return GivenName 是否已赋值
                     * 
                     */
                    bool GivenNameHasBeenSet() const;

                    /**
                     * 获取类型（机读码区的解析结果）
                     * @return Type 类型（机读码区的解析结果）
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取信息区证件内容
                     * @return PassportRecognizeInfos 信息区证件内容
                     * 
                     */
                    PassportRecognizeInfos GetPassportRecognizeInfos() const;

                    /**
                     * 判断参数 PassportRecognizeInfos 是否已赋值
                     * @return PassportRecognizeInfos 是否已赋值
                     * 
                     */
                    bool PassportRecognizeInfosHasBeenSet() const;

                    /**
                     * 获取告警码
-9101 证件边框不完整告警
-9102 证件复印件告警
-9103 证件翻拍告警
-9104 证件PS告警
-9107 证件反光告警
-9108 证件模糊告警
-9109 告警能力未开通
                     * @return WarnCardInfos 告警码
-9101 证件边框不完整告警
-9102 证件复印件告警
-9103 证件翻拍告警
-9104 证件PS告警
-9107 证件反光告警
-9108 证件模糊告警
-9109 告警能力未开通
                     * 
                     */
                    std::vector<int64_t> GetWarnCardInfos() const;

                    /**
                     * 判断参数 WarnCardInfos 是否已赋值
                     * @return WarnCardInfos 是否已赋值
                     * 
                     */
                    bool WarnCardInfosHasBeenSet() const;

                private:

                    /**
                     * 护照ID（机读码区的解析结果）
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 姓名（机读码区的解析结果）
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 出生日期（机读码区的解析结果）
                     */
                    std::string m_dateOfBirth;
                    bool m_dateOfBirthHasBeenSet;

                    /**
                     * 性别（F女，M男）（机读码区的解析结果）
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * 有效期（机读码区的解析结果）
                     */
                    std::string m_dateOfExpiration;
                    bool m_dateOfExpirationHasBeenSet;

                    /**
                     * 发行国（机读码区的解析结果）
                     */
                    std::string m_issuingCountry;
                    bool m_issuingCountryHasBeenSet;

                    /**
                     * 国家地区代码（机读码区的解析结果）
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * 告警码：
-9103	证照翻拍告警
-9102	证照复印件告警（包括黑白复印件、彩色复印件）
-9106       证件遮挡告警
                     */
                    std::vector<int64_t> m_warn;
                    bool m_warnHasBeenSet;

                    /**
                     * 证件中的人像图片base64
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 扩展字段:
{
    ID:{
        Confidence:0.9999
    },
    Name:{
        Confidence:0.9996
    }
}
                     */
                    std::string m_advancedInfo;
                    bool m_advancedInfoHasBeenSet;

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
                     * 姓（机读码区的解析结果）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_surname;
                    bool m_surnameHasBeenSet;

                    /**
                     * 名（机读码区的解析结果）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_givenName;
                    bool m_givenNameHasBeenSet;

                    /**
                     * 类型（机读码区的解析结果）
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 信息区证件内容
                     */
                    PassportRecognizeInfos m_passportRecognizeInfos;
                    bool m_passportRecognizeInfosHasBeenSet;

                    /**
                     * 告警码
-9101 证件边框不完整告警
-9102 证件复印件告警
-9103 证件翻拍告警
-9104 证件PS告警
-9107 证件反光告警
-9108 证件模糊告警
-9109 告警能力未开通
                     */
                    std::vector<int64_t> m_warnCardInfos;
                    bool m_warnCardInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_MLIDPASSPORTOCRRESPONSE_H_
