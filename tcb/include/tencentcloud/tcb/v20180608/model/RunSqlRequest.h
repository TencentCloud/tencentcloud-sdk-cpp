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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_RUNSQLREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_RUNSQLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/DbInstance.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * RunSql请求参数结构体
                */
                class RunSqlRequest : public AbstractModel
                {
                public:
                    RunSqlRequest();
                    ~RunSqlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要执行的SQL语句
                     * @return Sql 要执行的SQL语句
                     * 
                     */
                    std::string GetSql() const;

                    /**
                     * 设置要执行的SQL语句
                     * @param _sql 要执行的SQL语句
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
                     * 获取云开发环境ID
                     * @return EnvId 云开发环境ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置云开发环境ID
                     * @param _envId 云开发环境ID
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取数据库连接器实例信息
                     * @return DbInstance 数据库连接器实例信息
                     * 
                     */
                    DbInstance GetDbInstance() const;

                    /**
                     * 设置数据库连接器实例信息
                     * @param _dbInstance 数据库连接器实例信息
                     * 
                     */
                    void SetDbInstance(const DbInstance& _dbInstance);

                    /**
                     * 判断参数 DbInstance 是否已赋值
                     * @return DbInstance 是否已赋值
                     * 
                     */
                    bool DbInstanceHasBeenSet() const;

                    /**
                     * 获取是否只读；当 `true` 时仅允许以 `SELECT/WITH/SHOW/DESCRIBE/DESC/EXPLAIN` 开头的 SQL
                     * @return ReadOnly 是否只读；当 `true` 时仅允许以 `SELECT/WITH/SHOW/DESCRIBE/DESC/EXPLAIN` 开头的 SQL
                     * 
                     */
                    bool GetReadOnly() const;

                    /**
                     * 设置是否只读；当 `true` 时仅允许以 `SELECT/WITH/SHOW/DESCRIBE/DESC/EXPLAIN` 开头的 SQL
                     * @param _readOnly 是否只读；当 `true` 时仅允许以 `SELECT/WITH/SHOW/DESCRIBE/DESC/EXPLAIN` 开头的 SQL
                     * 
                     */
                    void SetReadOnly(const bool& _readOnly);

                    /**
                     * 判断参数 ReadOnly 是否已赋值
                     * @return ReadOnly 是否已赋值
                     * 
                     */
                    bool ReadOnlyHasBeenSet() const;

                private:

                    /**
                     * 要执行的SQL语句
                     */
                    std::string m_sql;
                    bool m_sqlHasBeenSet;

                    /**
                     * 云开发环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 数据库连接器实例信息
                     */
                    DbInstance m_dbInstance;
                    bool m_dbInstanceHasBeenSet;

                    /**
                     * 是否只读；当 `true` 时仅允许以 `SELECT/WITH/SHOW/DESCRIBE/DESC/EXPLAIN` 开头的 SQL
                     */
                    bool m_readOnly;
                    bool m_readOnlyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_RUNSQLREQUEST_H_
