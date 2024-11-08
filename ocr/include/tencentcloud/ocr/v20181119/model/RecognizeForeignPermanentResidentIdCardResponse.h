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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEFOREIGNPERMANENTRESIDENTIDCARDRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEFOREIGNPERMANENTRESIDENTIDCARDRESPONSE_H_

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
                * RecognizeForeignPermanentResidentIdCard返回参数结构体
                */
                class RecognizeForeignPermanentResidentIdCardResponse : public AbstractModel
                {
                public:
                    RecognizeForeignPermanentResidentIdCardResponse();
                    ~RecognizeForeignPermanentResidentIdCardResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取中文姓名。
                     * @return CnName 中文姓名。
                     * 
                     */
                    std::string GetCnName() const;

                    /**
                     * 判断参数 CnName 是否已赋值
                     * @return CnName 是否已赋值
                     * 
                     */
                    bool CnNameHasBeenSet() const;

                    /**
                     * 获取英文名。
                     * @return EnName 英文名。
                     * 
                     */
                    std::string GetEnName() const;

                    /**
                     * 判断参数 EnName 是否已赋值
                     * @return EnName 是否已赋值
                     * 
                     */
                    bool EnNameHasBeenSet() const;

                    /**
                     * 获取性别。
                     * @return Sex 性别。
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
                     * 获取出生日期。规范格式为 XXXX年XX月XX日。
                     * @return DateOfBirth 出生日期。规范格式为 XXXX年XX月XX日。
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
                     * 获取国籍。
                     * @return Nationality 国籍。
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
                     * 获取有效期限。
                     * @return PeriodOfValidity 有效期限。
                     * 
                     */
                    std::string GetPeriodOfValidity() const;

                    /**
                     * 判断参数 PeriodOfValidity 是否已赋值
                     * @return PeriodOfValidity 是否已赋值
                     * 
                     */
                    bool PeriodOfValidityHasBeenSet() const;

                    /**
                     * 获取证件号码。
                     * @return No 证件号码。
                     * 
                     */
                    std::string GetNo() const;

                    /**
                     * 判断参数 No 是否已赋值
                     * @return No 是否已赋值
                     * 
                     */
                    bool NoHasBeenSet() const;

                    /**
                     * 获取曾持证件号码。
                     * @return PreviousNumber 曾持证件号码。
                     * 
                     */
                    std::string GetPreviousNumber() const;

                    /**
                     * 判断参数 PreviousNumber 是否已赋值
                     * @return PreviousNumber 是否已赋值
                     * 
                     */
                    bool PreviousNumberHasBeenSet() const;

                    /**
                     * 获取签发机关。
                     * @return IssuedAuthority 签发机关。
                     * 
                     */
                    std::string GetIssuedAuthority() const;

                    /**
                     * 判断参数 IssuedAuthority 是否已赋值
                     * @return IssuedAuthority 是否已赋值
                     * 
                     */
                    bool IssuedAuthorityHasBeenSet() const;

                    /**
                     * 获取头像和坐标信息。
                     * @return PortraitImageInfo 头像和坐标信息。
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
                     * 中文姓名。
                     */
                    std::string m_cnName;
                    bool m_cnNameHasBeenSet;

                    /**
                     * 英文名。
                     */
                    std::string m_enName;
                    bool m_enNameHasBeenSet;

                    /**
                     * 性别。
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * 出生日期。规范格式为 XXXX年XX月XX日。
                     */
                    std::string m_dateOfBirth;
                    bool m_dateOfBirthHasBeenSet;

                    /**
                     * 国籍。
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * 有效期限。
                     */
                    std::string m_periodOfValidity;
                    bool m_periodOfValidityHasBeenSet;

                    /**
                     * 证件号码。
                     */
                    std::string m_no;
                    bool m_noHasBeenSet;

                    /**
                     * 曾持证件号码。
                     */
                    std::string m_previousNumber;
                    bool m_previousNumberHasBeenSet;

                    /**
                     * 签发机关。
                     */
                    std::string m_issuedAuthority;
                    bool m_issuedAuthorityHasBeenSet;

                    /**
                     * 头像和坐标信息。
                     */
                    PortraitImageInfo m_portraitImageInfo;
                    bool m_portraitImageInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEFOREIGNPERMANENTRESIDENTIDCARDRESPONSE_H_
