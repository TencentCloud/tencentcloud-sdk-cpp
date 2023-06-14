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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_RAWSLOWQUERY_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_RAWSLOWQUERY_H_

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
                * 慢SQL查询接口返回 慢SQL列表详情
                */
                class RawSlowQuery : public AbstractModel
                {
                public:
                    RawSlowQuery();
                    ~RawSlowQuery() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取慢SQL 语句
                     * @return RawQuery 慢SQL 语句
                     * 
                     */
                    std::string GetRawQuery() const;

                    /**
                     * 设置慢SQL 语句
                     * @param _rawQuery 慢SQL 语句
                     * 
                     */
                    void SetRawQuery(const std::string& _rawQuery);

                    /**
                     * 判断参数 RawQuery 是否已赋值
                     * @return RawQuery 是否已赋值
                     * 
                     */
                    bool RawQueryHasBeenSet() const;

                    /**
                     * 获取慢SQL 查询的数据库
                     * @return DatabaseName 慢SQL 查询的数据库
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置慢SQL 查询的数据库
                     * @param _databaseName 慢SQL 查询的数据库
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取慢SQL执行 耗时
                     * @return Duration 慢SQL执行 耗时
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置慢SQL执行 耗时
                     * @param _duration 慢SQL执行 耗时
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取执行慢SQL的客户端
                     * @return ClientAddr 执行慢SQL的客户端
                     * 
                     */
                    std::string GetClientAddr() const;

                    /**
                     * 设置执行慢SQL的客户端
                     * @param _clientAddr 执行慢SQL的客户端
                     * 
                     */
                    void SetClientAddr(const std::string& _clientAddr);

                    /**
                     * 判断参数 ClientAddr 是否已赋值
                     * @return ClientAddr 是否已赋值
                     * 
                     */
                    bool ClientAddrHasBeenSet() const;

                    /**
                     * 获取执行慢SQL的用户名
                     * @return UserName 执行慢SQL的用户名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置执行慢SQL的用户名
                     * @param _userName 执行慢SQL的用户名
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
                     * 获取慢SQL执行的开始时间
                     * @return SessionStartTime 慢SQL执行的开始时间
                     * 
                     */
                    std::string GetSessionStartTime() const;

                    /**
                     * 设置慢SQL执行的开始时间
                     * @param _sessionStartTime 慢SQL执行的开始时间
                     * 
                     */
                    void SetSessionStartTime(const std::string& _sessionStartTime);

                    /**
                     * 判断参数 SessionStartTime 是否已赋值
                     * @return SessionStartTime 是否已赋值
                     * 
                     */
                    bool SessionStartTimeHasBeenSet() const;

                private:

                    /**
                     * 慢SQL 语句
                     */
                    std::string m_rawQuery;
                    bool m_rawQueryHasBeenSet;

                    /**
                     * 慢SQL 查询的数据库
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 慢SQL执行 耗时
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 执行慢SQL的客户端
                     */
                    std::string m_clientAddr;
                    bool m_clientAddrHasBeenSet;

                    /**
                     * 执行慢SQL的用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 慢SQL执行的开始时间
                     */
                    std::string m_sessionStartTime;
                    bool m_sessionStartTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_RAWSLOWQUERY_H_
