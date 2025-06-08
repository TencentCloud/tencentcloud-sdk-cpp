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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_MAINLANDPERMITOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_MAINLANDPERMITOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/MainlandTravelPermitBackInfos.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * MainlandPermitOCR返回参数结构体
                */
                class MainlandPermitOCRResponse : public AbstractModel
                {
                public:
                    MainlandPermitOCRResponse();
                    ~MainlandPermitOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取中文姓名
                     * @return Name 中文姓名
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
                     * 获取英文姓名
                     * @return EnglishName 英文姓名
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
                     * 获取出生日期
                     * @return Birthday 出生日期
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
                     * 获取签发机关
                     * @return IssueAuthority 签发机关
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
                     * 获取有效期限
                     * @return ValidDate 有效期限
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
                     * 获取证件号
                     * @return Number 证件号
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
                     * 获取签发地点
                     * @return IssueAddress 签发地点
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
                     * 获取签发次数
                     * @return IssueNumber 签发次数
                     * 
                     */
                    std::string GetIssueNumber() const;

                    /**
                     * 判断参数 IssueNumber 是否已赋值
                     * @return IssueNumber 是否已赋值
                     * 
                     */
                    bool IssueNumberHasBeenSet() const;

                    /**
                     * 获取证件类别， 如：台湾居民来往大陆通行证、港澳居民来往内地通行证、往来港澳通行证。
                     * @return Type 证件类别， 如：台湾居民来往大陆通行证、港澳居民来往内地通行证、往来港澳通行证。
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
                     * 获取RetProfile为True时返回头像字段， Base64编码
                     * @return Profile RetProfile为True时返回头像字段， Base64编码
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

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
                     * 获取背面字段信息
                     * @return MainlandTravelPermitBackInfos 背面字段信息
                     * 
                     */
                    MainlandTravelPermitBackInfos GetMainlandTravelPermitBackInfos() const;

                    /**
                     * 判断参数 MainlandTravelPermitBackInfos 是否已赋值
                     * @return MainlandTravelPermitBackInfos 是否已赋值
                     * 
                     */
                    bool MainlandTravelPermitBackInfosHasBeenSet() const;

                private:

                    /**
                     * 中文姓名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 英文姓名
                     */
                    std::string m_englishName;
                    bool m_englishNameHasBeenSet;

                    /**
                     * 性别
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * 出生日期
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * 签发机关
                     */
                    std::string m_issueAuthority;
                    bool m_issueAuthorityHasBeenSet;

                    /**
                     * 有效期限
                     */
                    std::string m_validDate;
                    bool m_validDateHasBeenSet;

                    /**
                     * 证件号
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * 签发地点
                     */
                    std::string m_issueAddress;
                    bool m_issueAddressHasBeenSet;

                    /**
                     * 签发次数
                     */
                    std::string m_issueNumber;
                    bool m_issueNumberHasBeenSet;

                    /**
                     * 证件类别， 如：台湾居民来往大陆通行证、港澳居民来往内地通行证、往来港澳通行证。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * RetProfile为True时返回头像字段， Base64编码
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                    /**
                     * 国籍
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * 背面字段信息
                     */
                    MainlandTravelPermitBackInfos m_mainlandTravelPermitBackInfos;
                    bool m_mainlandTravelPermitBackInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_MAINLANDPERMITOCRRESPONSE_H_
