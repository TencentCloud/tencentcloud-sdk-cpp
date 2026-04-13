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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_EXECUTEPGSQLREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_EXECUTEPGSQLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * ExecutePGSql请求参数结构体
                */
                class ExecutePGSqlRequest : public AbstractModel
                {
                public:
                    ExecutePGSqlRequest();
                    ~ExecutePGSqlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>云开发环境ID</p>
                     * @return EnvId <p>云开发环境ID</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>云开发环境ID</p>
                     * @param _envId <p>云开发环境ID</p>
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
                     * 获取<p>要执行的SQL语句</p>
                     * @return Sql <p>要执行的SQL语句</p>
                     * 
                     */
                    std::string GetSql() const;

                    /**
                     * 设置<p>要执行的SQL语句</p>
                     * @param _sql <p>要执行的SQL语句</p>
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
                     * 获取<p>指定 role 执行 SQL</p>
                     * @return Role <p>指定 role 执行 SQL</p>
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置<p>指定 role 执行 SQL</p>
                     * @param _role <p>指定 role 执行 SQL</p>
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                private:

                    /**
                     * <p>云开发环境ID</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>要执行的SQL语句</p>
                     */
                    std::string m_sql;
                    bool m_sqlHasBeenSet;

                    /**
                     * <p>指定 role 执行 SQL</p>
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_EXECUTEPGSQLREQUEST_H_
