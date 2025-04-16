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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_ERRORLOGDETAIL_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_ERRORLOGDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * 错误日志详细信息
                */
                class ErrorLogDetail : public AbstractModel
                {
                public:
                    ErrorLogDetail();
                    ~ErrorLogDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户名称
                     * @return UserName 用户名称
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名称
                     * @param _userName 用户名称
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
                     * 获取数据库
                     * @return Database 数据库
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置数据库
                     * @param _database 数据库
                     * 
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取报错时间
                     * @return ErrorTime 报错时间
                     * 
                     */
                    std::string GetErrorTime() const;

                    /**
                     * 设置报错时间
                     * @param _errorTime 报错时间
                     * 
                     */
                    void SetErrorTime(const std::string& _errorTime);

                    /**
                     * 判断参数 ErrorTime 是否已赋值
                     * @return ErrorTime 是否已赋值
                     * 
                     */
                    bool ErrorTimeHasBeenSet() const;

                    /**
                     * 获取报错信息
                     * @return ErrorMessage 报错信息
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置报错信息
                     * @param _errorMessage 报错信息
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                private:

                    /**
                     * 用户名称
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 数据库
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * 报错时间
                     */
                    std::string m_errorTime;
                    bool m_errorTimeHasBeenSet;

                    /**
                     * 报错信息
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_ERRORLOGDETAIL_H_
