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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_AUDITLOGFILTER_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_AUDITLOGFILTER_H_

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
                * 审计日志过滤条件
                */
                class AuditLogFilter : public AbstractModel
                {
                public:
                    AuditLogFilter();
                    ~AuditLogFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>影响函数</p>
                     * @return AffectRows <p>影响函数</p>
                     * 
                     */
                    uint64_t GetAffectRows() const;

                    /**
                     * 设置<p>影响函数</p>
                     * @param _affectRows <p>影响函数</p>
                     * 
                     */
                    void SetAffectRows(const uint64_t& _affectRows);

                    /**
                     * 判断参数 AffectRows 是否已赋值
                     * @return AffectRows 是否已赋值
                     * 
                     */
                    bool AffectRowsHasBeenSet() const;

                    /**
                     * 获取<p>数据库名字</p>
                     * @return DBName <p>数据库名字</p>
                     * 
                     */
                    std::vector<std::string> GetDBName() const;

                    /**
                     * 设置<p>数据库名字</p>
                     * @param _dBName <p>数据库名字</p>
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
                     * 获取<p>执行时间</p>
                     * @return ExecTime <p>执行时间</p>
                     * 
                     */
                    uint64_t GetExecTime() const;

                    /**
                     * 设置<p>执行时间</p>
                     * @param _execTime <p>执行时间</p>
                     * 
                     */
                    void SetExecTime(const uint64_t& _execTime);

                    /**
                     * 判断参数 ExecTime 是否已赋值
                     * @return ExecTime 是否已赋值
                     * 
                     */
                    bool ExecTimeHasBeenSet() const;

                    /**
                     * 获取<p>主机Host</p>
                     * @return Host <p>主机Host</p>
                     * 
                     */
                    std::vector<std::string> GetHost() const;

                    /**
                     * 设置<p>主机Host</p>
                     * @param _host <p>主机Host</p>
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
                     * 获取<p>sql语句</p>
                     * @return Sql <p>sql语句</p>
                     * 
                     */
                    std::string GetSql() const;

                    /**
                     * 设置<p>sql语句</p>
                     * @param _sql <p>sql语句</p>
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
                     * 获取<p>登录名</p>
                     * @return User <p>登录名</p>
                     * 
                     */
                    std::vector<std::string> GetUser() const;

                    /**
                     * 设置<p>登录名</p>
                     * @param _user <p>登录名</p>
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
                     * 获取<p>审计类型</p>
                     * @return SqlType <p>审计类型</p>
                     * 
                     */
                    std::vector<std::string> GetSqlType() const;

                    /**
                     * 设置<p>审计类型</p>
                     * @param _sqlType <p>审计类型</p>
                     * 
                     */
                    void SetSqlType(const std::vector<std::string>& _sqlType);

                    /**
                     * 判断参数 SqlType 是否已赋值
                     * @return SqlType 是否已赋值
                     * 
                     */
                    bool SqlTypeHasBeenSet() const;

                private:

                    /**
                     * <p>影响函数</p>
                     */
                    uint64_t m_affectRows;
                    bool m_affectRowsHasBeenSet;

                    /**
                     * <p>数据库名字</p>
                     */
                    std::vector<std::string> m_dBName;
                    bool m_dBNameHasBeenSet;

                    /**
                     * <p>执行时间</p>
                     */
                    uint64_t m_execTime;
                    bool m_execTimeHasBeenSet;

                    /**
                     * <p>主机Host</p>
                     */
                    std::vector<std::string> m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>sql语句</p>
                     */
                    std::string m_sql;
                    bool m_sqlHasBeenSet;

                    /**
                     * <p>登录名</p>
                     */
                    std::vector<std::string> m_user;
                    bool m_userHasBeenSet;

                    /**
                     * <p>审计类型</p>
                     */
                    std::vector<std::string> m_sqlType;
                    bool m_sqlTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_AUDITLOGFILTER_H_
