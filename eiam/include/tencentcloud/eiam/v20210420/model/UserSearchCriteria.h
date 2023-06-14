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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_USERSEARCHCRITERIA_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_USERSEARCHCRITERIA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * 用户属性搜索条件。
                */
                class UserSearchCriteria : public AbstractModel
                {
                public:
                    UserSearchCriteria();
                    ~UserSearchCriteria() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户名，长度限制：64个字符。
                     * @return UserName 用户名，长度限制：64个字符。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名，长度限制：64个字符。
                     * @param _userName 用户名，长度限制：64个字符。
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取用户手机号。
                     * @return Phone 用户手机号。
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置用户手机号。
                     * @param _phone 用户手机号。
                     * 
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取用户邮箱。
                     * @return Email 用户邮箱。
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置用户邮箱。
                     * @param _email 用户邮箱。
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取用户状态，取值 NORMAL （正常）、FREEZE （已冻结）、LOCKED （已锁定）或 NOT_ENABLED （未启用）。
                     * @return Status 用户状态，取值 NORMAL （正常）、FREEZE （已冻结）、LOCKED （已锁定）或 NOT_ENABLED （未启用）。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置用户状态，取值 NORMAL （正常）、FREEZE （已冻结）、LOCKED （已锁定）或 NOT_ENABLED （未启用）。
                     * @param _status 用户状态，取值 NORMAL （正常）、FREEZE （已冻结）、LOCKED （已锁定）或 NOT_ENABLED （未启用）。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取用户创建时间，遵循 ISO 8601 标准。
                     * @return CreationTime 用户创建时间，遵循 ISO 8601 标准。
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置用户创建时间，遵循 ISO 8601 标准。
                     * @param _creationTime 用户创建时间，遵循 ISO 8601 标准。
                     * 
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取用户上次更新时间区间。
                     * @return LastUpdateTime 用户上次更新时间区间。
                     * 
                     */
                    std::string GetLastUpdateTime() const;

                    /**
                     * 设置用户上次更新时间区间。
                     * @param _lastUpdateTime 用户上次更新时间区间。
                     * 
                     */
                    void SetLastUpdateTime(const std::string& _lastUpdateTime);

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                    /**
                     * 获取名称匹配搜索，匹配范围包括：用户名称、用户ID。
                     * @return Keyword 名称匹配搜索，匹配范围包括：用户名称、用户ID。
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置名称匹配搜索，匹配范围包括：用户名称、用户ID。
                     * @param _keyword 名称匹配搜索，匹配范围包括：用户名称、用户ID。
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                private:

                    /**
                     * 用户名，长度限制：64个字符。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 用户手机号。
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 用户邮箱。
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 用户状态，取值 NORMAL （正常）、FREEZE （已冻结）、LOCKED （已锁定）或 NOT_ENABLED （未启用）。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 用户创建时间，遵循 ISO 8601 标准。
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 用户上次更新时间区间。
                     */
                    std::string m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                    /**
                     * 名称匹配搜索，匹配范围包括：用户名称、用户ID。
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_USERSEARCHCRITERIA_H_
