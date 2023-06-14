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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AUDITLOGFILTER_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AUDITLOGFILTER_H_

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
                * 审计日志过滤条件。查询审计日志时，用户过滤返回的审计日志。
                */
                class AuditLogFilter : public AbstractModel
                {
                public:
                    AuditLogFilter();
                    ~AuditLogFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户端地址。
                     * @return Host 客户端地址。
                     * 
                     */
                    std::vector<std::string> GetHost() const;

                    /**
                     * 设置客户端地址。
                     * @param _host 客户端地址。
                     * 
                     */
                    void SetHost(const std::vector<std::string>& _host);

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
                    std::vector<std::string> GetUser() const;

                    /**
                     * 设置用户名。
                     * @param _user 用户名。
                     * 
                     */
                    void SetUser(const std::vector<std::string>& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取数据库名称。
                     * @return DBName 数据库名称。
                     * 
                     */
                    std::vector<std::string> GetDBName() const;

                    /**
                     * 设置数据库名称。
                     * @param _dBName 数据库名称。
                     * 
                     */
                    void SetDBName(const std::vector<std::string>& _dBName);

                    /**
                     * 判断参数 DBName 是否已赋值
                     * @return DBName 是否已赋值
                     * 
                     */
                    bool DBNameHasBeenSet() const;

                    /**
                     * 获取表名称。
                     * @return TableName 表名称。
                     * 
                     */
                    std::vector<std::string> GetTableName() const;

                    /**
                     * 设置表名称。
                     * @param _tableName 表名称。
                     * 
                     */
                    void SetTableName(const std::vector<std::string>& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取审计策略名称。
                     * @return PolicyName 审计策略名称。
                     * 
                     */
                    std::vector<std::string> GetPolicyName() const;

                    /**
                     * 设置审计策略名称。
                     * @param _policyName 审计策略名称。
                     * 
                     */
                    void SetPolicyName(const std::vector<std::string>& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取SQL 语句。支持模糊匹配。
                     * @return Sql SQL 语句。支持模糊匹配。
                     * 
                     */
                    std::string GetSql() const;

                    /**
                     * 设置SQL 语句。支持模糊匹配。
                     * @param _sql SQL 语句。支持模糊匹配。
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
                     * 获取SQL 类型。目前支持："SELECT", "INSERT", "UPDATE", "DELETE", "CREATE", "DROP", "ALTER", "SET", "REPLACE", "EXECUTE"。
                     * @return SqlType SQL 类型。目前支持："SELECT", "INSERT", "UPDATE", "DELETE", "CREATE", "DROP", "ALTER", "SET", "REPLACE", "EXECUTE"。
                     * 
                     */
                    std::string GetSqlType() const;

                    /**
                     * 设置SQL 类型。目前支持："SELECT", "INSERT", "UPDATE", "DELETE", "CREATE", "DROP", "ALTER", "SET", "REPLACE", "EXECUTE"。
                     * @param _sqlType SQL 类型。目前支持："SELECT", "INSERT", "UPDATE", "DELETE", "CREATE", "DROP", "ALTER", "SET", "REPLACE", "EXECUTE"。
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
                     * 获取执行时间。单位为：ms。表示筛选执行时间大于该值的审计日志。
                     * @return ExecTime 执行时间。单位为：ms。表示筛选执行时间大于该值的审计日志。
                     * 
                     */
                    int64_t GetExecTime() const;

                    /**
                     * 设置执行时间。单位为：ms。表示筛选执行时间大于该值的审计日志。
                     * @param _execTime 执行时间。单位为：ms。表示筛选执行时间大于该值的审计日志。
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
                     * 获取影响行数。表示筛选影响行数大于该值的审计日志。
                     * @return AffectRows 影响行数。表示筛选影响行数大于该值的审计日志。
                     * 
                     */
                    int64_t GetAffectRows() const;

                    /**
                     * 设置影响行数。表示筛选影响行数大于该值的审计日志。
                     * @param _affectRows 影响行数。表示筛选影响行数大于该值的审计日志。
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
                     * 获取SQL 类型。支持多个类型同时查询。目前支持："SELECT", "INSERT", "UPDATE", "DELETE", "CREATE", "DROP", "ALTER", "SET", "REPLACE", "EXECUTE"。
                     * @return SqlTypes SQL 类型。支持多个类型同时查询。目前支持："SELECT", "INSERT", "UPDATE", "DELETE", "CREATE", "DROP", "ALTER", "SET", "REPLACE", "EXECUTE"。
                     * 
                     */
                    std::vector<std::string> GetSqlTypes() const;

                    /**
                     * 设置SQL 类型。支持多个类型同时查询。目前支持："SELECT", "INSERT", "UPDATE", "DELETE", "CREATE", "DROP", "ALTER", "SET", "REPLACE", "EXECUTE"。
                     * @param _sqlTypes SQL 类型。支持多个类型同时查询。目前支持："SELECT", "INSERT", "UPDATE", "DELETE", "CREATE", "DROP", "ALTER", "SET", "REPLACE", "EXECUTE"。
                     * 
                     */
                    void SetSqlTypes(const std::vector<std::string>& _sqlTypes);

                    /**
                     * 判断参数 SqlTypes 是否已赋值
                     * @return SqlTypes 是否已赋值
                     * 
                     */
                    bool SqlTypesHasBeenSet() const;

                    /**
                     * 获取SQL 语句。支持传递多个sql语句。
                     * @return Sqls SQL 语句。支持传递多个sql语句。
                     * 
                     */
                    std::vector<std::string> GetSqls() const;

                    /**
                     * 设置SQL 语句。支持传递多个sql语句。
                     * @param _sqls SQL 语句。支持传递多个sql语句。
                     * 
                     */
                    void SetSqls(const std::vector<std::string>& _sqls);

                    /**
                     * 判断参数 Sqls 是否已赋值
                     * @return Sqls 是否已赋值
                     * 
                     */
                    bool SqlsHasBeenSet() const;

                    /**
                     * 获取返回行数。
                     * @return SentRows 返回行数。
                     * 
                     */
                    uint64_t GetSentRows() const;

                    /**
                     * 设置返回行数。
                     * @param _sentRows 返回行数。
                     * 
                     */
                    void SetSentRows(const uint64_t& _sentRows);

                    /**
                     * 判断参数 SentRows 是否已赋值
                     * @return SentRows 是否已赋值
                     * 
                     */
                    bool SentRowsHasBeenSet() const;

                    /**
                     * 获取线程ID。
                     * @return ThreadId 线程ID。
                     * 
                     */
                    std::vector<std::string> GetThreadId() const;

                    /**
                     * 设置线程ID。
                     * @param _threadId 线程ID。
                     * 
                     */
                    void SetThreadId(const std::vector<std::string>& _threadId);

                    /**
                     * 判断参数 ThreadId 是否已赋值
                     * @return ThreadId 是否已赋值
                     * 
                     */
                    bool ThreadIdHasBeenSet() const;

                private:

                    /**
                     * 客户端地址。
                     */
                    std::vector<std::string> m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 用户名。
                     */
                    std::vector<std::string> m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 数据库名称。
                     */
                    std::vector<std::string> m_dBName;
                    bool m_dBNameHasBeenSet;

                    /**
                     * 表名称。
                     */
                    std::vector<std::string> m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 审计策略名称。
                     */
                    std::vector<std::string> m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * SQL 语句。支持模糊匹配。
                     */
                    std::string m_sql;
                    bool m_sqlHasBeenSet;

                    /**
                     * SQL 类型。目前支持："SELECT", "INSERT", "UPDATE", "DELETE", "CREATE", "DROP", "ALTER", "SET", "REPLACE", "EXECUTE"。
                     */
                    std::string m_sqlType;
                    bool m_sqlTypeHasBeenSet;

                    /**
                     * 执行时间。单位为：ms。表示筛选执行时间大于该值的审计日志。
                     */
                    int64_t m_execTime;
                    bool m_execTimeHasBeenSet;

                    /**
                     * 影响行数。表示筛选影响行数大于该值的审计日志。
                     */
                    int64_t m_affectRows;
                    bool m_affectRowsHasBeenSet;

                    /**
                     * SQL 类型。支持多个类型同时查询。目前支持："SELECT", "INSERT", "UPDATE", "DELETE", "CREATE", "DROP", "ALTER", "SET", "REPLACE", "EXECUTE"。
                     */
                    std::vector<std::string> m_sqlTypes;
                    bool m_sqlTypesHasBeenSet;

                    /**
                     * SQL 语句。支持传递多个sql语句。
                     */
                    std::vector<std::string> m_sqls;
                    bool m_sqlsHasBeenSet;

                    /**
                     * 返回行数。
                     */
                    uint64_t m_sentRows;
                    bool m_sentRowsHasBeenSet;

                    /**
                     * 线程ID。
                     */
                    std::vector<std::string> m_threadId;
                    bool m_threadIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AUDITLOGFILTER_H_
