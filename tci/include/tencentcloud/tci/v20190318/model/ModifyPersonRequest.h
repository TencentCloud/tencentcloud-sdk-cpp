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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_MODIFYPERSONREQUEST_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_MODIFYPERSONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * ModifyPerson请求参数结构体
                */
                class ModifyPersonRequest : public AbstractModel
                {
                public:
                    ModifyPersonRequest();
                    ~ModifyPersonRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取人员库唯一标识符
                     * @return LibraryId 人员库唯一标识符
                     * 
                     */
                    std::string GetLibraryId() const;

                    /**
                     * 设置人员库唯一标识符
                     * @param _libraryId 人员库唯一标识符
                     * 
                     */
                    void SetLibraryId(const std::string& _libraryId);

                    /**
                     * 判断参数 LibraryId 是否已赋值
                     * @return LibraryId 是否已赋值
                     * 
                     */
                    bool LibraryIdHasBeenSet() const;

                    /**
                     * 获取人员唯一标识符
                     * @return PersonId 人员唯一标识符
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置人员唯一标识符
                     * @param _personId 人员唯一标识符
                     * 
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取人员工作号码
                     * @return JobNumber 人员工作号码
                     * 
                     */
                    std::string GetJobNumber() const;

                    /**
                     * 设置人员工作号码
                     * @param _jobNumber 人员工作号码
                     * 
                     */
                    void SetJobNumber(const std::string& _jobNumber);

                    /**
                     * 判断参数 JobNumber 是否已赋值
                     * @return JobNumber 是否已赋值
                     * 
                     */
                    bool JobNumberHasBeenSet() const;

                    /**
                     * 获取人员邮箱
                     * @return Mail 人员邮箱
                     * 
                     */
                    std::string GetMail() const;

                    /**
                     * 设置人员邮箱
                     * @param _mail 人员邮箱
                     * 
                     */
                    void SetMail(const std::string& _mail);

                    /**
                     * 判断参数 Mail 是否已赋值
                     * @return Mail 是否已赋值
                     * 
                     */
                    bool MailHasBeenSet() const;

                    /**
                     * 获取人员性别
                     * @return Male 人员性别
                     * 
                     */
                    int64_t GetMale() const;

                    /**
                     * 设置人员性别
                     * @param _male 人员性别
                     * 
                     */
                    void SetMale(const int64_t& _male);

                    /**
                     * 判断参数 Male 是否已赋值
                     * @return Male 是否已赋值
                     * 
                     */
                    bool MaleHasBeenSet() const;

                    /**
                     * 获取人员名称
                     * @return PersonName 人员名称
                     * 
                     */
                    std::string GetPersonName() const;

                    /**
                     * 设置人员名称
                     * @param _personName 人员名称
                     * 
                     */
                    void SetPersonName(const std::string& _personName);

                    /**
                     * 判断参数 PersonName 是否已赋值
                     * @return PersonName 是否已赋值
                     * 
                     */
                    bool PersonNameHasBeenSet() const;

                    /**
                     * 获取人员电话号码
                     * @return PhoneNumber 人员电话号码
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置人员电话号码
                     * @param _phoneNumber 人员电话号码
                     * 
                     */
                    void SetPhoneNumber(const std::string& _phoneNumber);

                    /**
                     * 判断参数 PhoneNumber 是否已赋值
                     * @return PhoneNumber 是否已赋值
                     * 
                     */
                    bool PhoneNumberHasBeenSet() const;

                    /**
                     * 获取人员学生号码
                     * @return StudentNumber 人员学生号码
                     * 
                     */
                    std::string GetStudentNumber() const;

                    /**
                     * 设置人员学生号码
                     * @param _studentNumber 人员学生号码
                     * 
                     */
                    void SetStudentNumber(const std::string& _studentNumber);

                    /**
                     * 判断参数 StudentNumber 是否已赋值
                     * @return StudentNumber 是否已赋值
                     * 
                     */
                    bool StudentNumberHasBeenSet() const;

                private:

                    /**
                     * 人员库唯一标识符
                     */
                    std::string m_libraryId;
                    bool m_libraryIdHasBeenSet;

                    /**
                     * 人员唯一标识符
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 人员工作号码
                     */
                    std::string m_jobNumber;
                    bool m_jobNumberHasBeenSet;

                    /**
                     * 人员邮箱
                     */
                    std::string m_mail;
                    bool m_mailHasBeenSet;

                    /**
                     * 人员性别
                     */
                    int64_t m_male;
                    bool m_maleHasBeenSet;

                    /**
                     * 人员名称
                     */
                    std::string m_personName;
                    bool m_personNameHasBeenSet;

                    /**
                     * 人员电话号码
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * 人员学生号码
                     */
                    std::string m_studentNumber;
                    bool m_studentNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_MODIFYPERSONREQUEST_H_
