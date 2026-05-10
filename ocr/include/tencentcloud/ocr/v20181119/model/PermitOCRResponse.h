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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_PERMITOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_PERMITOCRRESPONSE_H_

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
                * PermitOCR返回参数结构体
                */
                class PermitOCRResponse : public AbstractModel
                {
                public:
                    PermitOCRResponse();
                    ~PermitOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>姓名</p>
                     * @return Name <p>姓名</p>
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
                     * 获取<p>英文姓名</p>
                     * @return EnglishName <p>英文姓名</p>
                     * 
                     */
                    std::string GetEnglishName() const;

                    /**
                     * 判断参数 EnglishName 是否已赋值
                     * @return EnglishName 是否已赋值
                     * 
                     */
                    bool EnglishNameHasBeenSet() const;

                    /**
                     * 获取<p>证件号</p>
                     * @return Number <p>证件号</p>
                     * 
                     */
                    std::string GetNumber() const;

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取<p>性别</p>
                     * @return Sex <p>性别</p>
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
                     * 获取<p>有效期限</p>
                     * @return ValidDate <p>有效期限</p>
                     * 
                     */
                    std::string GetValidDate() const;

                    /**
                     * 判断参数 ValidDate 是否已赋值
                     * @return ValidDate 是否已赋值
                     * 
                     */
                    bool ValidDateHasBeenSet() const;

                    /**
                     * 获取<p>签发机关</p>
                     * @return IssueAuthority <p>签发机关</p>
                     * 
                     */
                    std::string GetIssueAuthority() const;

                    /**
                     * 判断参数 IssueAuthority 是否已赋值
                     * @return IssueAuthority 是否已赋值
                     * 
                     */
                    bool IssueAuthorityHasBeenSet() const;

                    /**
                     * 获取<p>签发地点</p>
                     * @return IssueAddress <p>签发地点</p>
                     * 
                     */
                    std::string GetIssueAddress() const;

                    /**
                     * 判断参数 IssueAddress 是否已赋值
                     * @return IssueAddress 是否已赋值
                     * 
                     */
                    bool IssueAddressHasBeenSet() const;

                    /**
                     * 获取<p>出生日期</p>
                     * @return Birthday <p>出生日期</p>
                     * 
                     */
                    std::string GetBirthday() const;

                    /**
                     * 判断参数 Birthday 是否已赋值
                     * @return Birthday 是否已赋值
                     * 
                     */
                    bool BirthdayHasBeenSet() const;

                    /**
                     * 获取<p>头像照片的base64</p>
                     * @return PortraitImage <p>头像照片的base64</p>
                     * 
                     */
                    std::string GetPortraitImage() const;

                    /**
                     * 判断参数 PortraitImage 是否已赋值
                     * @return PortraitImage 是否已赋值
                     * 
                     */
                    bool PortraitImageHasBeenSet() const;

                    /**
                     * 获取<p>返回类型</p>
                     * @return Type <p>返回类型</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * <p>姓名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>英文姓名</p>
                     */
                    std::string m_englishName;
                    bool m_englishNameHasBeenSet;

                    /**
                     * <p>证件号</p>
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * <p>性别</p>
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * <p>有效期限</p>
                     */
                    std::string m_validDate;
                    bool m_validDateHasBeenSet;

                    /**
                     * <p>签发机关</p>
                     */
                    std::string m_issueAuthority;
                    bool m_issueAuthorityHasBeenSet;

                    /**
                     * <p>签发地点</p>
                     */
                    std::string m_issueAddress;
                    bool m_issueAddressHasBeenSet;

                    /**
                     * <p>出生日期</p>
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * <p>头像照片的base64</p>
                     */
                    std::string m_portraitImage;
                    bool m_portraitImageHasBeenSet;

                    /**
                     * <p>返回类型</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_PERMITOCRRESPONSE_H_
