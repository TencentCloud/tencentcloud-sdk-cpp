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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AUDITLOG_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AUDITLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 审计日志详细信息
                */
                class AuditLog : public AbstractModel
                {
                public:
                    AuditLog();
                    ~AuditLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取影响行数。
                     * @return AffectRows 影响行数。
                     */
                    int64_t GetAffectRows() const;

                    /**
                     * 设置影响行数。
                     * @param AffectRows 影响行数。
                     */
                    void SetAffectRows(const int64_t& _affectRows);

                    /**
                     * 判断参数 AffectRows 是否已赋值
                     * @return AffectRows 是否已赋值
                     */
                    bool AffectRowsHasBeenSet() const;

                    /**
                     * 获取错误码。
                     * @return ErrCode 错误码。
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置错误码。
                     * @param ErrCode 错误码。
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取SQL类型。
                     * @return SqlType SQL类型。
                     */
                    std::string GetSqlType() const;

                    /**
                     * 设置SQL类型。
                     * @param SqlType SQL类型。
                     */
                    void SetSqlType(const std::string& _sqlType);

                    /**
                     * 判断参数 SqlType 是否已赋值
                     * @return SqlType 是否已赋值
                     */
                    bool SqlTypeHasBeenSet() const;

                    /**
                     * 获取表名称。
                     * @return TableName 表名称。
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名称。
                     * @param TableName 表名称。
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取实例名称。
                     * @return InstanceName 实例名称。
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称。
                     * @param InstanceName 实例名称。
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取审计策略名称。
                     * @return PolicyName 审计策略名称。
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置审计策略名称。
                     * @param PolicyName 审计策略名称。
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取数据库名称。
                     * @return DBName 数据库名称。
                     */
                    std::string GetDBName() const;

                    /**
                     * 设置数据库名称。
                     * @param DBName 数据库名称。
                     */
                    void SetDBName(const std::string& _dBName);

                    /**
                     * 判断参数 DBName 是否已赋值
                     * @return DBName 是否已赋值
                     */
                    bool DBNameHasBeenSet() const;

                    /**
                     * 获取SQL语句。
                     * @return Sql SQL语句。
                     */
                    std::string GetSql() const;

                    /**
                     * 设置SQL语句。
                     * @param Sql SQL语句。
                     */
                    void SetSql(const std::string& _sql);

                    /**
                     * 判断参数 Sql 是否已赋值
                     * @return Sql 是否已赋值
                     */
                    bool SqlHasBeenSet() const;

                    /**
                     * 获取客户端地址。
                     * @return Host 客户端地址。
                     */
                    std::string GetHost() const;

                    /**
                     * 设置客户端地址。
                     * @param Host 客户端地址。
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取用户名。
                     * @return User 用户名。
                     */
                    std::string GetUser() const;

                    /**
                     * 设置用户名。
                     * @param User 用户名。
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取执行时间。
                     * @return ExecTime 执行时间。
                     */
                    int64_t GetExecTime() const;

                    /**
                     * 设置执行时间。
                     * @param ExecTime 执行时间。
                     */
                    void SetExecTime(const int64_t& _execTime);

                    /**
                     * 判断参数 ExecTime 是否已赋值
                     * @return ExecTime 是否已赋值
                     */
                    bool ExecTimeHasBeenSet() const;

                    /**
                     * 获取时间戳。
                     * @return Timestamp 时间戳。
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置时间戳。
                     * @param Timestamp 时间戳。
                     */
                    void SetTimestamp(const std::string& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取发送行数。
                     * @return SentRows 发送行数。
                     */
                    int64_t GetSentRows() const;

                    /**
                     * 设置发送行数。
                     * @param SentRows 发送行数。
                     */
                    void SetSentRows(const int64_t& _sentRows);

                    /**
                     * 判断参数 SentRows 是否已赋值
                     * @return SentRows 是否已赋值
                     */
                    bool SentRowsHasBeenSet() const;

                    /**
                     * 获取执行线程ID。
                     * @return ThreadId 执行线程ID。
                     */
                    int64_t GetThreadId() const;

                    /**
                     * 设置执行线程ID。
                     * @param ThreadId 执行线程ID。
                     */
                    void SetThreadId(const int64_t& _threadId);

                    /**
                     * 判断参数 ThreadId 是否已赋值
                     * @return ThreadId 是否已赋值
                     */
                    bool ThreadIdHasBeenSet() const;

                private:

                    /**
                     * 影响行数。
                     */
                    int64_t m_affectRows;
                    bool m_affectRowsHasBeenSet;

                    /**
                     * 错误码。
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * SQL类型。
                     */
                    std::string m_sqlType;
                    bool m_sqlTypeHasBeenSet;

                    /**
                     * 表名称。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 实例名称。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 审计策略名称。
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 数据库名称。
                     */
                    std::string m_dBName;
                    bool m_dBNameHasBeenSet;

                    /**
                     * SQL语句。
                     */
                    std::string m_sql;
                    bool m_sqlHasBeenSet;

                    /**
                     * 客户端地址。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 用户名。
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 执行时间。
                     */
                    int64_t m_execTime;
                    bool m_execTimeHasBeenSet;

                    /**
                     * 时间戳。
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 发送行数。
                     */
                    int64_t m_sentRows;
                    bool m_sentRowsHasBeenSet;

                    /**
                     * 执行线程ID。
                     */
                    int64_t m_threadId;
                    bool m_threadIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AUDITLOG_H_
