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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEPHILIPPINESDRIVINGLICENSEOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEPHILIPPINESDRIVINGLICENSEOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/TextDetectionResult.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * RecognizePhilippinesDrivingLicenseOCR返回参数结构体
                */
                class RecognizePhilippinesDrivingLicenseOCRResponse : public AbstractModel
                {
                public:
                    RecognizePhilippinesDrivingLicenseOCRResponse();
                    ~RecognizePhilippinesDrivingLicenseOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取人像照片Base64后的结果
                     * @return HeadPortrait 人像照片Base64后的结果
                     * 
                     */
                    TextDetectionResult GetHeadPortrait() const;

                    /**
                     * 判断参数 HeadPortrait 是否已赋值
                     * @return HeadPortrait 是否已赋值
                     * 
                     */
                    bool HeadPortraitHasBeenSet() const;

                    /**
                     * 获取姓名
                     * @return Name 姓名
                     * 
                     */
                    TextDetectionResult GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取姓氏
                     * @return LastName 姓氏
                     * 
                     */
                    TextDetectionResult GetLastName() const;

                    /**
                     * 判断参数 LastName 是否已赋值
                     * @return LastName 是否已赋值
                     * 
                     */
                    bool LastNameHasBeenSet() const;

                    /**
                     * 获取首姓名
                     * @return FirstName 首姓名
                     * 
                     */
                    TextDetectionResult GetFirstName() const;

                    /**
                     * 判断参数 FirstName 是否已赋值
                     * @return FirstName 是否已赋值
                     * 
                     */
                    bool FirstNameHasBeenSet() const;

                    /**
                     * 获取中间姓名
                     * @return MiddleName 中间姓名
                     * 
                     */
                    TextDetectionResult GetMiddleName() const;

                    /**
                     * 判断参数 MiddleName 是否已赋值
                     * @return MiddleName 是否已赋值
                     * 
                     */
                    bool MiddleNameHasBeenSet() const;

                    /**
                     * 获取国籍
                     * @return Nationality 国籍
                     * 
                     */
                    TextDetectionResult GetNationality() const;

                    /**
                     * 判断参数 Nationality 是否已赋值
                     * @return Nationality 是否已赋值
                     * 
                     */
                    bool NationalityHasBeenSet() const;

                    /**
                     * 获取性别
                     * @return Sex 性别
                     * 
                     */
                    TextDetectionResult GetSex() const;

                    /**
                     * 判断参数 Sex 是否已赋值
                     * @return Sex 是否已赋值
                     * 
                     */
                    bool SexHasBeenSet() const;

                    /**
                     * 获取地址
                     * @return Address 地址
                     * 
                     */
                    TextDetectionResult GetAddress() const;

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取证号
                     * @return LicenseNo 证号
                     * 
                     */
                    TextDetectionResult GetLicenseNo() const;

                    /**
                     * 判断参数 LicenseNo 是否已赋值
                     * @return LicenseNo 是否已赋值
                     * 
                     */
                    bool LicenseNoHasBeenSet() const;

                    /**
                     * 获取有效期
                     * @return ExpiresDate 有效期
                     * 
                     */
                    TextDetectionResult GetExpiresDate() const;

                    /**
                     * 判断参数 ExpiresDate 是否已赋值
                     * @return ExpiresDate 是否已赋值
                     * 
                     */
                    bool ExpiresDateHasBeenSet() const;

                    /**
                     * 获取机构代码
                     * @return AgencyCode 机构代码
                     * 
                     */
                    TextDetectionResult GetAgencyCode() const;

                    /**
                     * 判断参数 AgencyCode 是否已赋值
                     * @return AgencyCode 是否已赋值
                     * 
                     */
                    bool AgencyCodeHasBeenSet() const;

                    /**
                     * 获取出生日期
                     * @return Birthday 出生日期
                     * 
                     */
                    TextDetectionResult GetBirthday() const;

                    /**
                     * 判断参数 Birthday 是否已赋值
                     * @return Birthday 是否已赋值
                     * 
                     */
                    bool BirthdayHasBeenSet() const;

                private:

                    /**
                     * 人像照片Base64后的结果
                     */
                    TextDetectionResult m_headPortrait;
                    bool m_headPortraitHasBeenSet;

                    /**
                     * 姓名
                     */
                    TextDetectionResult m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 姓氏
                     */
                    TextDetectionResult m_lastName;
                    bool m_lastNameHasBeenSet;

                    /**
                     * 首姓名
                     */
                    TextDetectionResult m_firstName;
                    bool m_firstNameHasBeenSet;

                    /**
                     * 中间姓名
                     */
                    TextDetectionResult m_middleName;
                    bool m_middleNameHasBeenSet;

                    /**
                     * 国籍
                     */
                    TextDetectionResult m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * 性别
                     */
                    TextDetectionResult m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * 地址
                     */
                    TextDetectionResult m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 证号
                     */
                    TextDetectionResult m_licenseNo;
                    bool m_licenseNoHasBeenSet;

                    /**
                     * 有效期
                     */
                    TextDetectionResult m_expiresDate;
                    bool m_expiresDateHasBeenSet;

                    /**
                     * 机构代码
                     */
                    TextDetectionResult m_agencyCode;
                    bool m_agencyCodeHasBeenSet;

                    /**
                     * 出生日期
                     */
                    TextDetectionResult m_birthday;
                    bool m_birthdayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEPHILIPPINESDRIVINGLICENSEOCRRESPONSE_H_
