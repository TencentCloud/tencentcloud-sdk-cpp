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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEPHILIPPINESVOTEIDOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEPHILIPPINESVOTEIDOCRRESPONSE_H_

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
                * RecognizePhilippinesVoteIDOCR返回参数结构体
                */
                class RecognizePhilippinesVoteIDOCRResponse : public AbstractModel
                {
                public:
                    RecognizePhilippinesVoteIDOCRResponse();
                    ~RecognizePhilippinesVoteIDOCRResponse() = default;
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
                     * 获取菲律宾VoteID的VIN
                     * @return VIN 菲律宾VoteID的VIN
                     * 
                     */
                    TextDetectionResult GetVIN() const;

                    /**
                     * 判断参数 VIN 是否已赋值
                     * @return VIN 是否已赋值
                     * 
                     */
                    bool VINHasBeenSet() const;

                    /**
                     * 获取姓名
                     * @return FirstName 姓名
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

                    /**
                     * 获取婚姻状况
                     * @return CivilStatus 婚姻状况
                     * 
                     */
                    TextDetectionResult GetCivilStatus() const;

                    /**
                     * 判断参数 CivilStatus 是否已赋值
                     * @return CivilStatus 是否已赋值
                     * 
                     */
                    bool CivilStatusHasBeenSet() const;

                    /**
                     * 获取国籍
                     * @return Citizenship 国籍
                     * 
                     */
                    TextDetectionResult GetCitizenship() const;

                    /**
                     * 判断参数 Citizenship 是否已赋值
                     * @return Citizenship 是否已赋值
                     * 
                     */
                    bool CitizenshipHasBeenSet() const;

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
                     * 获取地区
                     * @return PrecinctNo 地区
                     * 
                     */
                    TextDetectionResult GetPrecinctNo() const;

                    /**
                     * 判断参数 PrecinctNo 是否已赋值
                     * @return PrecinctNo 是否已赋值
                     * 
                     */
                    bool PrecinctNoHasBeenSet() const;

                private:

                    /**
                     * 人像照片Base64后的结果
                     */
                    TextDetectionResult m_headPortrait;
                    bool m_headPortraitHasBeenSet;

                    /**
                     * 菲律宾VoteID的VIN
                     */
                    TextDetectionResult m_vIN;
                    bool m_vINHasBeenSet;

                    /**
                     * 姓名
                     */
                    TextDetectionResult m_firstName;
                    bool m_firstNameHasBeenSet;

                    /**
                     * 姓氏
                     */
                    TextDetectionResult m_lastName;
                    bool m_lastNameHasBeenSet;

                    /**
                     * 出生日期
                     */
                    TextDetectionResult m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * 婚姻状况
                     */
                    TextDetectionResult m_civilStatus;
                    bool m_civilStatusHasBeenSet;

                    /**
                     * 国籍
                     */
                    TextDetectionResult m_citizenship;
                    bool m_citizenshipHasBeenSet;

                    /**
                     * 地址
                     */
                    TextDetectionResult m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 地区
                     */
                    TextDetectionResult m_precinctNo;
                    bool m_precinctNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEPHILIPPINESVOTEIDOCRRESPONSE_H_
