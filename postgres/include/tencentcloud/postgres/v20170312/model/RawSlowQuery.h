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
                     * 获取<p>慢SQL 语句</p>
                     * @return RawQuery <p>慢SQL 语句</p>
                     * 
                     */
                    std::string GetRawQuery() const;

                    /**
                     * 设置<p>慢SQL 语句</p>
                     * @param _rawQuery <p>慢SQL 语句</p>
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
                     * 获取<p>慢SQL 查询的数据库</p>
                     * @return DatabaseName <p>慢SQL 查询的数据库</p>
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置<p>慢SQL 查询的数据库</p>
                     * @param _databaseName <p>慢SQL 查询的数据库</p>
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
                     * 获取<p>慢SQL执行 耗时</p>
                     * @return Duration <p>慢SQL执行 耗时</p>
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置<p>慢SQL执行 耗时</p>
                     * @param _duration <p>慢SQL执行 耗时</p>
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
                     * 获取<p>执行慢SQL的客户端</p>
                     * @return ClientAddr <p>执行慢SQL的客户端</p>
                     * 
                     */
                    std::string GetClientAddr() const;

                    /**
                     * 设置<p>执行慢SQL的客户端</p>
                     * @param _clientAddr <p>执行慢SQL的客户端</p>
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
                     * 获取<p>执行慢SQL的用户名</p>
                     * @return UserName <p>执行慢SQL的用户名</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>执行慢SQL的用户名</p>
                     * @param _userName <p>执行慢SQL的用户名</p>
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
                     * 获取<p>慢SQL执行的开始时间</p>
                     * @return SessionStartTime <p>慢SQL执行的开始时间</p>
                     * 
                     */
                    std::string GetSessionStartTime() const;

                    /**
                     * 设置<p>慢SQL执行的开始时间</p>
                     * @param _sessionStartTime <p>慢SQL执行的开始时间</p>
                     * 
                     */
                    void SetSessionStartTime(const std::string& _sessionStartTime);

                    /**
                     * 判断参数 SessionStartTime 是否已赋值
                     * @return SessionStartTime 是否已赋值
                     * 
                     */
                    bool SessionStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>执行慢SQL的进程ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessId <p>执行慢SQL的进程ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProcessId() const;

                    /**
                     * 设置<p>执行慢SQL的进程ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processId <p>执行慢SQL的进程ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessId(const int64_t& _processId);

                    /**
                     * 判断参数 ProcessId 是否已赋值
                     * @return ProcessId 是否已赋值
                     * 
                     */
                    bool ProcessIdHasBeenSet() const;

                    /**
                     * 获取<p>执行慢SQL的会话ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionId <p>执行慢SQL的会话ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>执行慢SQL的会话ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sessionId <p>执行慢SQL的会话ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>执行慢SQL的事务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VirtualTransactionId <p>执行慢SQL的事务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVirtualTransactionId() const;

                    /**
                     * 设置<p>执行慢SQL的事务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _virtualTransactionId <p>执行慢SQL的事务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVirtualTransactionId(const std::string& _virtualTransactionId);

                    /**
                     * 判断参数 VirtualTransactionId 是否已赋值
                     * @return VirtualTransactionId 是否已赋值
                     * 
                     */
                    bool VirtualTransactionIdHasBeenSet() const;

                    /**
                     * 获取<p>执行慢SQL的状态码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SqlStateCode <p>执行慢SQL的状态码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSqlStateCode() const;

                    /**
                     * 设置<p>执行慢SQL的状态码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sqlStateCode <p>执行慢SQL的状态码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSqlStateCode(const std::string& _sqlStateCode);

                    /**
                     * 判断参数 SqlStateCode 是否已赋值
                     * @return SqlStateCode 是否已赋值
                     * 
                     */
                    bool SqlStateCodeHasBeenSet() const;

                    /**
                     * 获取<p>执行慢SQL的客户端名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationName <p>执行慢SQL的客户端名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置<p>执行慢SQL的客户端名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationName <p>执行慢SQL的客户端名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                private:

                    /**
                     * <p>慢SQL 语句</p>
                     */
                    std::string m_rawQuery;
                    bool m_rawQueryHasBeenSet;

                    /**
                     * <p>慢SQL 查询的数据库</p>
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * <p>慢SQL执行 耗时</p>
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>执行慢SQL的客户端</p>
                     */
                    std::string m_clientAddr;
                    bool m_clientAddrHasBeenSet;

                    /**
                     * <p>执行慢SQL的用户名</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>慢SQL执行的开始时间</p>
                     */
                    std::string m_sessionStartTime;
                    bool m_sessionStartTimeHasBeenSet;

                    /**
                     * <p>执行慢SQL的进程ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_processId;
                    bool m_processIdHasBeenSet;

                    /**
                     * <p>执行慢SQL的会话ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>执行慢SQL的事务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_virtualTransactionId;
                    bool m_virtualTransactionIdHasBeenSet;

                    /**
                     * <p>执行慢SQL的状态码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sqlStateCode;
                    bool m_sqlStateCodeHasBeenSet;

                    /**
                     * <p>执行慢SQL的客户端名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_RAWSLOWQUERY_H_
