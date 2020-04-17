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


                    /**
                     * 获取护照ID
                     * @return ID 护照ID
                     */
                    std::string GetID() const;

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取姓名
                     * @return Name 姓名
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取出生日期
                     * @return DateOfBirth 出生日期
                     */
                    std::string GetDateOfBirth() const;

                    /**
                     * 判断参数 DateOfBirth 是否已赋值
                     * @return DateOfBirth 是否已赋值
                     */
                    bool DateOfBirthHasBeenSet() const;

                    /**
                     * 获取性别（F女，M男）
                     * @return Sex 性别（F女，M男）
                     */
                    std::string GetSex() const;

                    /**
                     * 判断参数 Sex 是否已赋值
                     * @return Sex 是否已赋值
                     */
                    bool SexHasBeenSet() const;

                    /**
                     * 获取有效期
                     * @return DateOfExpiration 有效期
                     */
                    std::string GetDateOfExpiration() const;

                    /**
                     * 判断参数 DateOfExpiration 是否已赋值
                     * @return DateOfExpiration 是否已赋值
                     */
                    bool DateOfExpirationHasBeenSet() const;

                    /**
                     * 获取发行国
                     * @return IssuingCountry 发行国
                     */
                    std::string GetIssuingCountry() const;

                    /**
                     * 判断参数 IssuingCountry 是否已赋值
                     * @return IssuingCountry 是否已赋值
                     */
                    bool IssuingCountryHasBeenSet() const;

                    /**
                     * 获取国籍
                     * @return Nationality 国籍
                     */
                    std::string GetNationality() const;

                    /**
                     * 判断参数 Nationality 是否已赋值
                     * @return Nationality 是否已赋值
                     */
                    bool NationalityHasBeenSet() const;

                    /**
                     * 获取告警码
-9103	证照翻拍告警
-9102	证照复印件告警
-9106       证件遮挡告警
                     * @return Warn 告警码
-9103	证照翻拍告警
-9102	证照复印件告警
-9106       证件遮挡告警
                     */
                    std::vector<int64_t> GetWarn() const;

                    /**
                     * 判断参数 Warn 是否已赋值
                     * @return Warn 是否已赋值
                     */
                    bool WarnHasBeenSet() const;

                    /**
                     * 获取证件图片
                     * @return Image 证件图片
                     */
                    std::string GetImage() const;

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
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
                     */
                    std::string GetAdvancedInfo() const;

                    /**
                     * 判断参数 AdvancedInfo 是否已赋值
                     * @return AdvancedInfo 是否已赋值
                     */
                    bool AdvancedInfoHasBeenSet() const;

                private:

                    /**
                     * 护照ID
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 姓名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 出生日期
                     */
                    std::string m_dateOfBirth;
                    bool m_dateOfBirthHasBeenSet;

                    /**
                     * 性别（F女，M男）
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * 有效期
                     */
                    std::string m_dateOfExpiration;
                    bool m_dateOfExpirationHasBeenSet;

                    /**
                     * 发行国
                     */
                    std::string m_issuingCountry;
                    bool m_issuingCountryHasBeenSet;

                    /**
                     * 国籍
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * 告警码
-9103	证照翻拍告警
-9102	证照复印件告警
-9106       证件遮挡告警
                     */
                    std::vector<int64_t> m_warn;
                    bool m_warnHasBeenSet;

                    /**
                     * 证件图片
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_MLIDPASSPORTOCRRESPONSE_H_
