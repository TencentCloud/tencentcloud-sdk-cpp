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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETHAIIDCARDOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETHAIIDCARDOCRRESPONSE_H_

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
                * RecognizeThaiIDCardOCR返回参数结构体
                */
                class RecognizeThaiIDCardOCRResponse : public AbstractModel
                {
                public:
                    RecognizeThaiIDCardOCRResponse();
                    ~RecognizeThaiIDCardOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取身份证号码
                     * @return ID 身份证号码
                     */
                    std::string GetID() const;

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取泰文姓名
                     * @return ThaiName 泰文姓名
                     */
                    std::string GetThaiName() const;

                    /**
                     * 判断参数 ThaiName 是否已赋值
                     * @return ThaiName 是否已赋值
                     */
                    bool ThaiNameHasBeenSet() const;

                    /**
                     * 获取英文姓名
                     * @return EnFirstName 英文姓名
                     */
                    std::string GetEnFirstName() const;

                    /**
                     * 判断参数 EnFirstName 是否已赋值
                     * @return EnFirstName 是否已赋值
                     */
                    bool EnFirstNameHasBeenSet() const;

                    /**
                     * 获取地址
                     * @return Address 地址
                     */
                    std::string GetAddress() const;

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取出生日期
                     * @return Birthday 出生日期
                     */
                    std::string GetBirthday() const;

                    /**
                     * 判断参数 Birthday 是否已赋值
                     * @return Birthday 是否已赋值
                     */
                    bool BirthdayHasBeenSet() const;

                    /**
                     * 获取首次领用日期
                     * @return IssueDate 首次领用日期
                     */
                    std::string GetIssueDate() const;

                    /**
                     * 判断参数 IssueDate 是否已赋值
                     * @return IssueDate 是否已赋值
                     */
                    bool IssueDateHasBeenSet() const;

                    /**
                     * 获取签发日期
                     * @return ExpirationDate 签发日期
                     */
                    std::string GetExpirationDate() const;

                    /**
                     * 判断参数 ExpirationDate 是否已赋值
                     * @return ExpirationDate 是否已赋值
                     */
                    bool ExpirationDateHasBeenSet() const;

                    /**
                     * 获取英文姓名
                     * @return EnLastName 英文姓名
                     */
                    std::string GetEnLastName() const;

                    /**
                     * 判断参数 EnLastName 是否已赋值
                     * @return EnLastName 是否已赋值
                     */
                    bool EnLastNameHasBeenSet() const;

                private:

                    /**
                     * 身份证号码
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 泰文姓名
                     */
                    std::string m_thaiName;
                    bool m_thaiNameHasBeenSet;

                    /**
                     * 英文姓名
                     */
                    std::string m_enFirstName;
                    bool m_enFirstNameHasBeenSet;

                    /**
                     * 地址
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 出生日期
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * 首次领用日期
                     */
                    std::string m_issueDate;
                    bool m_issueDateHasBeenSet;

                    /**
                     * 签发日期
                     */
                    std::string m_expirationDate;
                    bool m_expirationDateHasBeenSet;

                    /**
                     * 英文姓名
                     */
                    std::string m_enLastName;
                    bool m_enLastNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETHAIIDCARDOCRRESPONSE_H_
