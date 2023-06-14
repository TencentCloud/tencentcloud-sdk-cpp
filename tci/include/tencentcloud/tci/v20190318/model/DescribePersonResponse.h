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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_DESCRIBEPERSONRESPONSE_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_DESCRIBEPERSONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tci/v20190318/model/Face.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * DescribePerson返回参数结构体
                */
                class DescribePersonResponse : public AbstractModel
                {
                public:
                    DescribePersonResponse();
                    ~DescribePersonResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取人员人脸列表
                     * @return FaceSet 人员人脸列表
                     * 
                     */
                    std::vector<Face> GetFaceSet() const;

                    /**
                     * 判断参数 FaceSet 是否已赋值
                     * @return FaceSet 是否已赋值
                     * 
                     */
                    bool FaceSetHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取工作号码
                     * @return JobNumber 工作号码
                     * 
                     */
                    std::string GetJobNumber() const;

                    /**
                     * 判断参数 JobNumber 是否已赋值
                     * @return JobNumber 是否已赋值
                     * 
                     */
                    bool JobNumberHasBeenSet() const;

                    /**
                     * 获取人员库唯一标识符
                     * @return LibraryId 人员库唯一标识符
                     * 
                     */
                    std::string GetLibraryId() const;

                    /**
                     * 判断参数 LibraryId 是否已赋值
                     * @return LibraryId 是否已赋值
                     * 
                     */
                    bool LibraryIdHasBeenSet() const;

                    /**
                     * 获取邮箱
                     * @return Mail 邮箱
                     * 
                     */
                    std::string GetMail() const;

                    /**
                     * 判断参数 Mail 是否已赋值
                     * @return Mail 是否已赋值
                     * 
                     */
                    bool MailHasBeenSet() const;

                    /**
                     * 获取性别
                     * @return Male 性别
                     * 
                     */
                    int64_t GetMale() const;

                    /**
                     * 判断参数 Male 是否已赋值
                     * @return Male 是否已赋值
                     * 
                     */
                    bool MaleHasBeenSet() const;

                    /**
                     * 获取人员唯一标识符
                     * @return PersonId 人员唯一标识符
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取人员名称
                     * @return PersonName 人员名称
                     * 
                     */
                    std::string GetPersonName() const;

                    /**
                     * 判断参数 PersonName 是否已赋值
                     * @return PersonName 是否已赋值
                     * 
                     */
                    bool PersonNameHasBeenSet() const;

                    /**
                     * 获取电话号码
                     * @return PhoneNumber 电话号码
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 判断参数 PhoneNumber 是否已赋值
                     * @return PhoneNumber 是否已赋值
                     * 
                     */
                    bool PhoneNumberHasBeenSet() const;

                    /**
                     * 获取学生号码
                     * @return StudentNumber 学生号码
                     * 
                     */
                    std::string GetStudentNumber() const;

                    /**
                     * 判断参数 StudentNumber 是否已赋值
                     * @return StudentNumber 是否已赋值
                     * 
                     */
                    bool StudentNumberHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return UpdateTime 修改时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 人员人脸列表
                     */
                    std::vector<Face> m_faceSet;
                    bool m_faceSetHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 工作号码
                     */
                    std::string m_jobNumber;
                    bool m_jobNumberHasBeenSet;

                    /**
                     * 人员库唯一标识符
                     */
                    std::string m_libraryId;
                    bool m_libraryIdHasBeenSet;

                    /**
                     * 邮箱
                     */
                    std::string m_mail;
                    bool m_mailHasBeenSet;

                    /**
                     * 性别
                     */
                    int64_t m_male;
                    bool m_maleHasBeenSet;

                    /**
                     * 人员唯一标识符
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 人员名称
                     */
                    std::string m_personName;
                    bool m_personNameHasBeenSet;

                    /**
                     * 电话号码
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * 学生号码
                     */
                    std::string m_studentNumber;
                    bool m_studentNumberHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_DESCRIBEPERSONRESPONSE_H_
