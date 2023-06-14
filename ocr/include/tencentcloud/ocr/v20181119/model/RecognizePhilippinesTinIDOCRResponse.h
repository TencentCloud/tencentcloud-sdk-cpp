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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEPHILIPPINESTINIDOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEPHILIPPINESTINIDOCRRESPONSE_H_

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
                * RecognizePhilippinesTinIDOCR返回参数结构体
                */
                class RecognizePhilippinesTinIDOCRResponse : public AbstractModel
                {
                public:
                    RecognizePhilippinesTinIDOCRResponse();
                    ~RecognizePhilippinesTinIDOCRResponse() = default;
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
                     * 获取编码
                     * @return LicenseNumber 编码
                     * 
                     */
                    TextDetectionResult GetLicenseNumber() const;

                    /**
                     * 判断参数 LicenseNumber 是否已赋值
                     * @return LicenseNumber 是否已赋值
                     * 
                     */
                    bool LicenseNumberHasBeenSet() const;

                    /**
                     * 获取姓名
                     * @return FullName 姓名
                     * 
                     */
                    TextDetectionResult GetFullName() const;

                    /**
                     * 判断参数 FullName 是否已赋值
                     * @return FullName 是否已赋值
                     * 
                     */
                    bool FullNameHasBeenSet() const;

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
                     * 获取生日
                     * @return Birthday 生日
                     * 
                     */
                    TextDetectionResult GetBirthday() const;

                    /**
                     * 判断参数 Birthday 是否已赋值
                     * @return Birthday 是否已赋值
                     * 
                     */
                    bool BirthdayHasBeenSet() const;

                    /**
                     * 获取发证日期
                     * @return IssueDate 发证日期
                     * 
                     */
                    TextDetectionResult GetIssueDate() const;

                    /**
                     * 判断参数 IssueDate 是否已赋值
                     * @return IssueDate 是否已赋值
                     * 
                     */
                    bool IssueDateHasBeenSet() const;

                private:

                    /**
                     * 人像照片Base64后的结果
                     */
                    TextDetectionResult m_headPortrait;
                    bool m_headPortraitHasBeenSet;

                    /**
                     * 编码
                     */
                    TextDetectionResult m_licenseNumber;
                    bool m_licenseNumberHasBeenSet;

                    /**
                     * 姓名
                     */
                    TextDetectionResult m_fullName;
                    bool m_fullNameHasBeenSet;

                    /**
                     * 地址
                     */
                    TextDetectionResult m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 生日
                     */
                    TextDetectionResult m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * 发证日期
                     */
                    TextDetectionResult m_issueDate;
                    bool m_issueDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEPHILIPPINESTINIDOCRRESPONSE_H_
