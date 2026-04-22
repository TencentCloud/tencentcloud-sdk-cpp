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
                     * 获取<p>用户名</p>
                     * @return UserName <p>用户名</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>用户名</p>
                     * @param _userName <p>用户名</p>
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
                     * 获取<p>数据库名字</p>
                     * @return Database <p>数据库名字</p>
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置<p>数据库名字</p>
                     * @param _database <p>数据库名字</p>
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
                     * 获取<p>错误发生时间</p>
                     * @return ErrTime <p>错误发生时间</p>
                     * 
                     */
                    std::string GetErrTime() const;

                    /**
                     * 设置<p>错误发生时间</p>
                     * @param _errTime <p>错误发生时间</p>
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
                     * 获取<p>错误消息</p>
                     * @return ErrMsg <p>错误消息</p>
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置<p>错误消息</p>
                     * @param _errMsg <p>错误消息</p>
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取<p>进程ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessId <p>进程ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProcessId() const;

                    /**
                     * 设置<p>进程ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processId <p>进程ID</p>
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
                     * 获取<p>客户端地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientAddr <p>客户端地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClientAddr() const;

                    /**
                     * 设置<p>客户端地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clientAddr <p>客户端地址</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>会话ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionId <p>会话ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>会话ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sessionId <p>会话ID</p>
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
                     * 获取<p>会话开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionStartTime <p>会话开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSessionStartTime() const;

                    /**
                     * 设置<p>会话开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sessionStartTime <p>会话开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>虚拟事务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VirtualTransactionId <p>虚拟事务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVirtualTransactionId() const;

                    /**
                     * 设置<p>虚拟事务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _virtualTransactionId <p>虚拟事务ID</p>
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
                     * 获取<p>SQLSTATE错误码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SqlStateCode <p>SQLSTATE错误码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSqlStateCode() const;

                    /**
                     * 设置<p>SQLSTATE错误码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sqlStateCode <p>SQLSTATE错误码</p>
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
                     * 获取<p>客户端应用名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationName <p>客户端应用名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置<p>客户端应用名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationName <p>客户端应用名称</p>
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
                     * <p>用户名</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>数据库名字</p>
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * <p>错误发生时间</p>
                     */
                    std::string m_errTime;
                    bool m_errTimeHasBeenSet;

                    /**
                     * <p>错误消息</p>
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * <p>进程ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_processId;
                    bool m_processIdHasBeenSet;

                    /**
                     * <p>客户端地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clientAddr;
                    bool m_clientAddrHasBeenSet;

                    /**
                     * <p>会话ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>会话开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sessionStartTime;
                    bool m_sessionStartTimeHasBeenSet;

                    /**
                     * <p>虚拟事务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_virtualTransactionId;
                    bool m_virtualTransactionIdHasBeenSet;

                    /**
                     * <p>SQLSTATE错误码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sqlStateCode;
                    bool m_sqlStateCodeHasBeenSet;

                    /**
                     * <p>客户端应用名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_ERRLOGDETAIL_H_
