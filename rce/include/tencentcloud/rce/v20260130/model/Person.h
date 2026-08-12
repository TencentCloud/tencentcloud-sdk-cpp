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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_PERSON_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_PERSON_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 个人信息
                */
                class Person : public AbstractModel
                {
                public:
                    Person();
                    ~Person() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>姓名全称</p>
                     * @return Name <p>姓名全称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>姓名全称</p>
                     * @param _name <p>姓名全称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>性别</p>
                     * @return Gender <p>性别</p>
                     * 
                     */
                    std::string GetGender() const;

                    /**
                     * 设置<p>性别</p>
                     * @param _gender <p>性别</p>
                     * 
                     */
                    void SetGender(const std::string& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     * 
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取<p>出生日期</p><p>参数格式：YYYY-MM-DD</p>
                     * @return Birthday <p>出生日期</p><p>参数格式：YYYY-MM-DD</p>
                     * 
                     */
                    std::string GetBirthday() const;

                    /**
                     * 设置<p>出生日期</p><p>参数格式：YYYY-MM-DD</p>
                     * @param _birthday <p>出生日期</p><p>参数格式：YYYY-MM-DD</p>
                     * 
                     */
                    void SetBirthday(const std::string& _birthday);

                    /**
                     * 判断参数 Birthday 是否已赋值
                     * @return Birthday 是否已赋值
                     * 
                     */
                    bool BirthdayHasBeenSet() const;

                    /**
                     * 获取<p>学历</p>
                     * @return Degree <p>学历</p>
                     * 
                     */
                    std::string GetDegree() const;

                    /**
                     * 设置<p>学历</p>
                     * @param _degree <p>学历</p>
                     * 
                     */
                    void SetDegree(const std::string& _degree);

                    /**
                     * 判断参数 Degree 是否已赋值
                     * @return Degree 是否已赋值
                     * 
                     */
                    bool DegreeHasBeenSet() const;

                    /**
                     * 获取<p>职业</p>
                     * @return Occupation <p>职业</p>
                     * 
                     */
                    std::string GetOccupation() const;

                    /**
                     * 设置<p>职业</p>
                     * @param _occupation <p>职业</p>
                     * 
                     */
                    void SetOccupation(const std::string& _occupation);

                    /**
                     * 判断参数 Occupation 是否已赋值
                     * @return Occupation 是否已赋值
                     * 
                     */
                    bool OccupationHasBeenSet() const;

                private:

                    /**
                     * <p>姓名全称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>性别</p>
                     */
                    std::string m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * <p>出生日期</p><p>参数格式：YYYY-MM-DD</p>
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * <p>学历</p>
                     */
                    std::string m_degree;
                    bool m_degreeHasBeenSet;

                    /**
                     * <p>职业</p>
                     */
                    std::string m_occupation;
                    bool m_occupationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_PERSON_H_
