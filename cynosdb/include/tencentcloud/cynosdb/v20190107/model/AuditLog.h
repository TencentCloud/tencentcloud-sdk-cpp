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
#include <tencentcloud/cynosdb/v20190107/model/LogRuleTemplateInfo.h>


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
                     * 
                     */
                    int64_t GetAffectRows() const;

                    /**
                     * 设置影响行数。
                     * @param _affectRows 影响行数。
                     * 
                     */
                    void SetAffectRows(const int64_t& _affectRows);

                    /**
                     * 判断参数 AffectRows 是否已赋值
                     * @return AffectRows 是否已赋值
                     * 
                     */
                    bool AffectRowsHasBeenSet() const;

                    /**
                     * 获取错误码。
                     * @return ErrCode 错误码。
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置错误码。
                     * @param _errCode 错误码。
                     * 
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取SQL类型。
                     * @return SqlType SQL类型。
                     * 
                     */
                    std::string GetSqlType() const;

                    /**
                     * 设置SQL类型。
                     * @param _sqlType SQL类型。
                     * 
                     */
                    void SetSqlType(const std::string& _sqlType);

                    /**
                     * 判断参数 SqlType 是否已赋值
                     * @return SqlType 是否已赋值
                     * 
                     */
                    bool SqlTypeHasBeenSet() const;

                    /**
                     * 获取表名称。
                     * @return TableName 表名称。
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名称。
                     * @param _tableName 表名称。
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取实例名称。
                     * @return InstanceName 实例名称。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称。
                     * @param _instanceName 实例名称。
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取审计策略名称。
                     * @return PolicyName 审计策略名称。
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置审计策略名称。
                     * @param _policyName 审计策略名称。
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取数据库名称。
                     * @return DBName 数据库名称。
                     * 
                     */
                    std::string GetDBName() const;

                    /**
                     * 设置数据库名称。
                     * @param _dBName 数据库名称。
                     * 
                     */
                    void SetDBName(const std::string& _dBName);

                    /**
                     * 判断参数 DBName 是否已赋值
                     * @return DBName 是否已赋值
                     * 
                     */
                    bool DBNameHasBeenSet() const;

                    /**
                     * 获取SQL语句。
                     * @return Sql SQL语句。
                     * 
                     */
                    std::string GetSql() const;

                    /**
                     * 设置SQL语句。
                     * @param _sql SQL语句。
                     * 
                     */
                    void SetSql(const std::string& _sql);

                    /**
                     * 判断参数 Sql 是否已赋值
                     * @return Sql 是否已赋值
                     * 
                     */
                    bool SqlHasBeenSet() const;

                    /**
                     * 获取客户端地址。
                     * @return Host 客户端地址。
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置客户端地址。
                     * @param _host 客户端地址。
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取用户名。
                     * @return User 用户名。
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置用户名。
                     * @param _user 用户名。
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取执行时间，微秒。
                     * @return ExecTime 执行时间，微秒。
                     * 
                     */
                    int64_t GetExecTime() const;

                    /**
                     * 设置执行时间，微秒。
                     * @param _execTime 执行时间，微秒。
                     * 
                     */
                    void SetExecTime(const int64_t& _execTime);

                    /**
                     * 判断参数 ExecTime 是否已赋值
                     * @return ExecTime 是否已赋值
                     * 
                     */
                    bool ExecTimeHasBeenSet() const;

                    /**
                     * 获取时间。
                     * @return Timestamp 时间。
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置时间。
                     * @param _timestamp 时间。
                     * 
                     */
                    void SetTimestamp(const std::string& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取返回行数。
                     * @return SentRows 返回行数。
                     * 
                     */
                    int64_t GetSentRows() const;

                    /**
                     * 设置返回行数。
                     * @param _sentRows 返回行数。
                     * 
                     */
                    void SetSentRows(const int64_t& _sentRows);

                    /**
                     * 判断参数 SentRows 是否已赋值
                     * @return SentRows 是否已赋值
                     * 
                     */
                    bool SentRowsHasBeenSet() const;

                    /**
                     * 获取执行线程ID。
                     * @return ThreadId 执行线程ID。
                     * 
                     */
                    int64_t GetThreadId() const;

                    /**
                     * 设置执行线程ID。
                     * @param _threadId 执行线程ID。
                     * 
                     */
                    void SetThreadId(const int64_t& _threadId);

                    /**
                     * 判断参数 ThreadId 是否已赋值
                     * @return ThreadId 是否已赋值
                     * 
                     */
                    bool ThreadIdHasBeenSet() const;

                    /**
                     * 获取扫描行数。
                     * @return CheckRows 扫描行数。
                     * 
                     */
                    int64_t GetCheckRows() const;

                    /**
                     * 设置扫描行数。
                     * @param _checkRows 扫描行数。
                     * 
                     */
                    void SetCheckRows(const int64_t& _checkRows);

                    /**
                     * 判断参数 CheckRows 是否已赋值
                     * @return CheckRows 是否已赋值
                     * 
                     */
                    bool CheckRowsHasBeenSet() const;

                    /**
                     * 获取cpu执行时间，微秒。
                     * @return CpuTime cpu执行时间，微秒。
                     * 
                     */
                    double GetCpuTime() const;

                    /**
                     * 设置cpu执行时间，微秒。
                     * @param _cpuTime cpu执行时间，微秒。
                     * 
                     */
                    void SetCpuTime(const double& _cpuTime);

                    /**
                     * 判断参数 CpuTime 是否已赋值
                     * @return CpuTime 是否已赋值
                     * 
                     */
                    bool CpuTimeHasBeenSet() const;

                    /**
                     * 获取IO等待时间，微秒。
                     * @return IoWaitTime IO等待时间，微秒。
                     * 
                     */
                    int64_t GetIoWaitTime() const;

                    /**
                     * 设置IO等待时间，微秒。
                     * @param _ioWaitTime IO等待时间，微秒。
                     * 
                     */
                    void SetIoWaitTime(const int64_t& _ioWaitTime);

                    /**
                     * 判断参数 IoWaitTime 是否已赋值
                     * @return IoWaitTime 是否已赋值
                     * 
                     */
                    bool IoWaitTimeHasBeenSet() const;

                    /**
                     * 获取锁等待时间，微秒。
                     * @return LockWaitTime 锁等待时间，微秒。
                     * 
                     */
                    int64_t GetLockWaitTime() const;

                    /**
                     * 设置锁等待时间，微秒。
                     * @param _lockWaitTime 锁等待时间，微秒。
                     * 
                     */
                    void SetLockWaitTime(const int64_t& _lockWaitTime);

                    /**
                     * 判断参数 LockWaitTime 是否已赋值
                     * @return LockWaitTime 是否已赋值
                     * 
                     */
                    bool LockWaitTimeHasBeenSet() const;

                    /**
                     * 获取事务持续等待时间，微秒。
                     * @return TrxLivingTime 事务持续等待时间，微秒。
                     * 
                     */
                    int64_t GetTrxLivingTime() const;

                    /**
                     * 设置事务持续等待时间，微秒。
                     * @param _trxLivingTime 事务持续等待时间，微秒。
                     * 
                     */
                    void SetTrxLivingTime(const int64_t& _trxLivingTime);

                    /**
                     * 判断参数 TrxLivingTime 是否已赋值
                     * @return TrxLivingTime 是否已赋值
                     * 
                     */
                    bool TrxLivingTimeHasBeenSet() const;

                    /**
                     * 获取开始时间，与timestamp构成一个精确到纳秒的时间。
                     * @return NsTime 开始时间，与timestamp构成一个精确到纳秒的时间。
                     * 
                     */
                    int64_t GetNsTime() const;

                    /**
                     * 设置开始时间，与timestamp构成一个精确到纳秒的时间。
                     * @param _nsTime 开始时间，与timestamp构成一个精确到纳秒的时间。
                     * 
                     */
                    void SetNsTime(const int64_t& _nsTime);

                    /**
                     * 判断参数 NsTime 是否已赋值
                     * @return NsTime 是否已赋值
                     * 
                     */
                    bool NsTimeHasBeenSet() const;

                    /**
                     * 获取日志命中规则模板的基本信息
                     * @return TemplateInfo 日志命中规则模板的基本信息
                     * 
                     */
                    std::vector<LogRuleTemplateInfo> GetTemplateInfo() const;

                    /**
                     * 设置日志命中规则模板的基本信息
                     * @param _templateInfo 日志命中规则模板的基本信息
                     * 
                     */
                    void SetTemplateInfo(const std::vector<LogRuleTemplateInfo>& _templateInfo);

                    /**
                     * 判断参数 TemplateInfo 是否已赋值
                     * @return TemplateInfo 是否已赋值
                     * 
                     */
                    bool TemplateInfoHasBeenSet() const;

                    /**
                     * 获取事务ID
                     * @return TrxId 事务ID
                     * 
                     */
                    int64_t GetTrxId() const;

                    /**
                     * 设置事务ID
                     * @param _trxId 事务ID
                     * 
                     */
                    void SetTrxId(const int64_t& _trxId);

                    /**
                     * 判断参数 TrxId 是否已赋值
                     * @return TrxId 是否已赋值
                     * 
                     */
                    bool TrxIdHasBeenSet() const;

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
                     * 执行时间，微秒。
                     */
                    int64_t m_execTime;
                    bool m_execTimeHasBeenSet;

                    /**
                     * 时间。
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 返回行数。
                     */
                    int64_t m_sentRows;
                    bool m_sentRowsHasBeenSet;

                    /**
                     * 执行线程ID。
                     */
                    int64_t m_threadId;
                    bool m_threadIdHasBeenSet;

                    /**
                     * 扫描行数。
                     */
                    int64_t m_checkRows;
                    bool m_checkRowsHasBeenSet;

                    /**
                     * cpu执行时间，微秒。
                     */
                    double m_cpuTime;
                    bool m_cpuTimeHasBeenSet;

                    /**
                     * IO等待时间，微秒。
                     */
                    int64_t m_ioWaitTime;
                    bool m_ioWaitTimeHasBeenSet;

                    /**
                     * 锁等待时间，微秒。
                     */
                    int64_t m_lockWaitTime;
                    bool m_lockWaitTimeHasBeenSet;

                    /**
                     * 事务持续等待时间，微秒。
                     */
                    int64_t m_trxLivingTime;
                    bool m_trxLivingTimeHasBeenSet;

                    /**
                     * 开始时间，与timestamp构成一个精确到纳秒的时间。
                     */
                    int64_t m_nsTime;
                    bool m_nsTimeHasBeenSet;

                    /**
                     * 日志命中规则模板的基本信息
                     */
                    std::vector<LogRuleTemplateInfo> m_templateInfo;
                    bool m_templateInfoHasBeenSet;

                    /**
                     * 事务ID
                     */
                    int64_t m_trxId;
                    bool m_trxIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AUDITLOG_H_
