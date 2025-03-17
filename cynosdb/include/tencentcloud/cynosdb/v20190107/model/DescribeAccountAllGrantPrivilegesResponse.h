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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEACCOUNTALLGRANTPRIVILEGESRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEACCOUNTALLGRANTPRIVILEGESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/DatabasePrivileges.h>
#include <tencentcloud/cynosdb/v20190107/model/TablePrivileges.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeAccountAllGrantPrivileges返回参数结构体
                */
                class DescribeAccountAllGrantPrivilegesResponse : public AbstractModel
                {
                public:
                    DescribeAccountAllGrantPrivilegesResponse();
                    ~DescribeAccountAllGrantPrivilegesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取权限语句
                     * @return PrivilegeStatements 权限语句
                     * 
                     */
                    std::vector<std::string> GetPrivilegeStatements() const;

                    /**
                     * 判断参数 PrivilegeStatements 是否已赋值
                     * @return PrivilegeStatements 是否已赋值
                     * 
                     */
                    bool PrivilegeStatementsHasBeenSet() const;

                    /**
                     * 获取全局权限
                     * @return GlobalPrivileges 全局权限
                     * 
                     */
                    std::vector<std::string> GetGlobalPrivileges() const;

                    /**
                     * 判断参数 GlobalPrivileges 是否已赋值
                     * @return GlobalPrivileges 是否已赋值
                     * 
                     */
                    bool GlobalPrivilegesHasBeenSet() const;

                    /**
                     * 获取数据库权限
                     * @return DatabasePrivileges 数据库权限
                     * 
                     */
                    std::vector<DatabasePrivileges> GetDatabasePrivileges() const;

                    /**
                     * 判断参数 DatabasePrivileges 是否已赋值
                     * @return DatabasePrivileges 是否已赋值
                     * 
                     */
                    bool DatabasePrivilegesHasBeenSet() const;

                    /**
                     * 获取数据库表权限
                     * @return TablePrivileges 数据库表权限
                     * 
                     */
                    std::vector<TablePrivileges> GetTablePrivileges() const;

                    /**
                     * 判断参数 TablePrivileges 是否已赋值
                     * @return TablePrivileges 是否已赋值
                     * 
                     */
                    bool TablePrivilegesHasBeenSet() const;

                private:

                    /**
                     * 权限语句
                     */
                    std::vector<std::string> m_privilegeStatements;
                    bool m_privilegeStatementsHasBeenSet;

                    /**
                     * 全局权限
                     */
                    std::vector<std::string> m_globalPrivileges;
                    bool m_globalPrivilegesHasBeenSet;

                    /**
                     * 数据库权限
                     */
                    std::vector<DatabasePrivileges> m_databasePrivileges;
                    bool m_databasePrivilegesHasBeenSet;

                    /**
                     * 数据库表权限
                     */
                    std::vector<TablePrivileges> m_tablePrivileges;
                    bool m_tablePrivilegesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEACCOUNTALLGRANTPRIVILEGESRESPONSE_H_
