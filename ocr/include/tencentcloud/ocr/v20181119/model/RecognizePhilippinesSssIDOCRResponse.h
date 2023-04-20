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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEPHILIPPINESSSSIDOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEPHILIPPINESSSSIDOCRRESPONSE_H_

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
                * RecognizePhilippinesSssIDOCR返回参数结构体
                */
                class RecognizePhilippinesSssIDOCRResponse : public AbstractModel
                {
                public:
                    RecognizePhilippinesSssIDOCRResponse();
                    ~RecognizePhilippinesSssIDOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取人像照片Base64后的结果
                     * @return HeadPortrait 人像照片Base64后的结果
                     */
                    TextDetectionResult GetHeadPortrait() const;

                    /**
                     * 判断参数 HeadPortrait 是否已赋值
                     * @return HeadPortrait 是否已赋值
                     */
                    bool HeadPortraitHasBeenSet() const;

                    /**
                     * 获取编号
                     * @return LicenseNumber 编号
                     */
                    TextDetectionResult GetLicenseNumber() const;

                    /**
                     * 判断参数 LicenseNumber 是否已赋值
                     * @return LicenseNumber 是否已赋值
                     */
                    bool LicenseNumberHasBeenSet() const;

                    /**
                     * 获取姓名
                     * @return FullName 姓名
                     */
                    TextDetectionResult GetFullName() const;

                    /**
                     * 判断参数 FullName 是否已赋值
                     * @return FullName 是否已赋值
                     */
                    bool FullNameHasBeenSet() const;

                    /**
                     * 获取生日
                     * @return Birthday 生日
                     */
                    TextDetectionResult GetBirthday() const;

                    /**
                     * 判断参数 Birthday 是否已赋值
                     * @return Birthday 是否已赋值
                     */
                    bool BirthdayHasBeenSet() const;

                private:

                    /**
                     * 人像照片Base64后的结果
                     */
                    TextDetectionResult m_headPortrait;
                    bool m_headPortraitHasBeenSet;

                    /**
                     * 编号
                     */
                    TextDetectionResult m_licenseNumber;
                    bool m_licenseNumberHasBeenSet;

                    /**
                     * 姓名
                     */
                    TextDetectionResult m_fullName;
                    bool m_fullNameHasBeenSet;

                    /**
                     * 生日
                     */
                    TextDetectionResult m_birthday;
                    bool m_birthdayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEPHILIPPINESSSSIDOCRRESPONSE_H_
