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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_PERSONINFO_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_PERSONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 用户信息
                */
                class PersonInfo : public AbstractModel
                {
                public:
                    PersonInfo();
                    ~PersonInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户ID
                     * @return PersonId 用户ID
                     * 
                     */
                    uint64_t GetPersonId() const;

                    /**
                     * 设置用户ID
                     * @param _personId 用户ID
                     * 
                     */
                    void SetPersonId(const uint64_t& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取人脸图片Base64内容，已弃用，返回默认空值
                     * @return PersonPicture 人脸图片Base64内容，已弃用，返回默认空值
                     * 
                     */
                    std::string GetPersonPicture() const;

                    /**
                     * 设置人脸图片Base64内容，已弃用，返回默认空值
                     * @param _personPicture 人脸图片Base64内容，已弃用，返回默认空值
                     * 
                     */
                    void SetPersonPicture(const std::string& _personPicture);

                    /**
                     * 判断参数 PersonPicture 是否已赋值
                     * @return PersonPicture 是否已赋值
                     * 
                     */
                    bool PersonPictureHasBeenSet() const;

                    /**
                     * 获取性别：0男1女
                     * @return Gender 性别：0男1女
                     * 
                     */
                    int64_t GetGender() const;

                    /**
                     * 设置性别：0男1女
                     * @param _gender 性别：0男1女
                     * 
                     */
                    void SetGender(const int64_t& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     * 
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取年龄
                     * @return Age 年龄
                     * 
                     */
                    int64_t GetAge() const;

                    /**
                     * 设置年龄
                     * @param _age 年龄
                     * 
                     */
                    void SetAge(const int64_t& _age);

                    /**
                     * 判断参数 Age 是否已赋值
                     * @return Age 是否已赋值
                     * 
                     */
                    bool AgeHasBeenSet() const;

                    /**
                     * 获取身份类型（0表示普通顾客，1 白名单，2 表示黑名单）
                     * @return PersonType 身份类型（0表示普通顾客，1 白名单，2 表示黑名单）
                     * 
                     */
                    int64_t GetPersonType() const;

                    /**
                     * 设置身份类型（0表示普通顾客，1 白名单，2 表示黑名单）
                     * @param _personType 身份类型（0表示普通顾客，1 白名单，2 表示黑名单）
                     * 
                     */
                    void SetPersonType(const int64_t& _personType);

                    /**
                     * 判断参数 PersonType 是否已赋值
                     * @return PersonType 是否已赋值
                     * 
                     */
                    bool PersonTypeHasBeenSet() const;

                    /**
                     * 获取人脸图片Url，在有效期内可以访问下载
                     * @return PersonPictureUrl 人脸图片Url，在有效期内可以访问下载
                     * 
                     */
                    std::string GetPersonPictureUrl() const;

                    /**
                     * 设置人脸图片Url，在有效期内可以访问下载
                     * @param _personPictureUrl 人脸图片Url，在有效期内可以访问下载
                     * 
                     */
                    void SetPersonPictureUrl(const std::string& _personPictureUrl);

                    /**
                     * 判断参数 PersonPictureUrl 是否已赋值
                     * @return PersonPictureUrl 是否已赋值
                     * 
                     */
                    bool PersonPictureUrlHasBeenSet() const;

                    /**
                     * 获取身份子类型:
PersonType=0时(普通顾客)，0普通顾客
PersonType=1时(白名单)，0店员，1商场人员，2其他类型人员，3区域经理，4注册用户，5VIP用户
PersonType=2时(黑名单)，0普通黑名单，1小偷)
                     * @return PersonSubType 身份子类型:
PersonType=0时(普通顾客)，0普通顾客
PersonType=1时(白名单)，0店员，1商场人员，2其他类型人员，3区域经理，4注册用户，5VIP用户
PersonType=2时(黑名单)，0普通黑名单，1小偷)
                     * 
                     */
                    int64_t GetPersonSubType() const;

                    /**
                     * 设置身份子类型:
PersonType=0时(普通顾客)，0普通顾客
PersonType=1时(白名单)，0店员，1商场人员，2其他类型人员，3区域经理，4注册用户，5VIP用户
PersonType=2时(黑名单)，0普通黑名单，1小偷)
                     * @param _personSubType 身份子类型:
PersonType=0时(普通顾客)，0普通顾客
PersonType=1时(白名单)，0店员，1商场人员，2其他类型人员，3区域经理，4注册用户，5VIP用户
PersonType=2时(黑名单)，0普通黑名单，1小偷)
                     * 
                     */
                    void SetPersonSubType(const int64_t& _personSubType);

                    /**
                     * 判断参数 PersonSubType 是否已赋值
                     * @return PersonSubType 是否已赋值
                     * 
                     */
                    bool PersonSubTypeHasBeenSet() const;

                    /**
                     * 获取到访次数，-1表示未知
                     * @return VisitTimes 到访次数，-1表示未知
                     * 
                     */
                    int64_t GetVisitTimes() const;

                    /**
                     * 设置到访次数，-1表示未知
                     * @param _visitTimes 到访次数，-1表示未知
                     * 
                     */
                    void SetVisitTimes(const int64_t& _visitTimes);

                    /**
                     * 判断参数 VisitTimes 是否已赋值
                     * @return VisitTimes 是否已赋值
                     * 
                     */
                    bool VisitTimesHasBeenSet() const;

                    /**
                     * 获取到访天数，-1表示未知
                     * @return VisitDays 到访天数，-1表示未知
                     * 
                     */
                    int64_t GetVisitDays() const;

                    /**
                     * 设置到访天数，-1表示未知
                     * @param _visitDays 到访天数，-1表示未知
                     * 
                     */
                    void SetVisitDays(const int64_t& _visitDays);

                    /**
                     * 判断参数 VisitDays 是否已赋值
                     * @return VisitDays 是否已赋值
                     * 
                     */
                    bool VisitDaysHasBeenSet() const;

                private:

                    /**
                     * 用户ID
                     */
                    uint64_t m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 人脸图片Base64内容，已弃用，返回默认空值
                     */
                    std::string m_personPicture;
                    bool m_personPictureHasBeenSet;

                    /**
                     * 性别：0男1女
                     */
                    int64_t m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * 年龄
                     */
                    int64_t m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * 身份类型（0表示普通顾客，1 白名单，2 表示黑名单）
                     */
                    int64_t m_personType;
                    bool m_personTypeHasBeenSet;

                    /**
                     * 人脸图片Url，在有效期内可以访问下载
                     */
                    std::string m_personPictureUrl;
                    bool m_personPictureUrlHasBeenSet;

                    /**
                     * 身份子类型:
PersonType=0时(普通顾客)，0普通顾客
PersonType=1时(白名单)，0店员，1商场人员，2其他类型人员，3区域经理，4注册用户，5VIP用户
PersonType=2时(黑名单)，0普通黑名单，1小偷)
                     */
                    int64_t m_personSubType;
                    bool m_personSubTypeHasBeenSet;

                    /**
                     * 到访次数，-1表示未知
                     */
                    int64_t m_visitTimes;
                    bool m_visitTimesHasBeenSet;

                    /**
                     * 到访天数，-1表示未知
                     */
                    int64_t m_visitDays;
                    bool m_visitDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_PERSONINFO_H_
