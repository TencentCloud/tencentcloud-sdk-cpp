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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_ERRLOGDETAIL_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_ERRLOGDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 错误日志详情
                */
                class ErrLogDetail : public AbstractModel
                {
                public:
                    ErrLogDetail();
                    ~ErrLogDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户名
                     * @return UserName 用户名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名
                     * @param _userName 用户名
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
                     * 获取数据库名字
                     * @return Database 数据库名字
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置数据库名字
                     * @param _database 数据库名字
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
                     * 获取错误发生时间
                     * @return ErrTime 错误发生时间
                     * 
                     */
                    std::string GetErrTime() const;

                    /**
                     * 设置错误发生时间
                     * @param _errTime 错误发生时间
                     * 
                     */
                    void SetErrTime(const std::string& _errTime);

                    /**
                     * 判断参数 ErrTime 是否已赋值
                     * @return ErrTime 是否已赋值
                     * 
                     */
                    bool ErrTimeHasBeenSet() const;

                    /**
                     * 获取错误消息
                     * @return ErrMsg 错误消息
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置错误消息
                     * @param _errMsg 错误消息
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                private:

                    /**
                     * 用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 数据库名字
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * 错误发生时间
                     */
                    std::string m_errTime;
                    bool m_errTimeHasBeenSet;

                    /**
                     * 错误消息
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_ERRLOGDETAIL_H_
