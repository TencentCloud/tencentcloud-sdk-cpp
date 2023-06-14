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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEACCOUNTPRIVILEGESRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEACCOUNTPRIVILEGESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/DatabasePrivilege.h>
#include <tencentcloud/cdb/v20170320/model/TablePrivilege.h>
#include <tencentcloud/cdb/v20170320/model/ColumnPrivilege.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeAccountPrivileges返回参数结构体
                */
                class DescribeAccountPrivilegesResponse : public AbstractModel
                {
                public:
                    DescribeAccountPrivilegesResponse();
                    ~DescribeAccountPrivilegesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取全局权限数组。
                     * @return GlobalPrivileges 全局权限数组。
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
                     * 获取数据库权限数组。
                     * @return DatabasePrivileges 数据库权限数组。
                     * 
                     */
                    std::vector<DatabasePrivilege> GetDatabasePrivileges() const;

                    /**
                     * 判断参数 DatabasePrivileges 是否已赋值
                     * @return DatabasePrivileges 是否已赋值
                     * 
                     */
                    bool DatabasePrivilegesHasBeenSet() const;

                    /**
                     * 获取数据库中的表权限数组。
                     * @return TablePrivileges 数据库中的表权限数组。
                     * 
                     */
                    std::vector<TablePrivilege> GetTablePrivileges() const;

                    /**
                     * 判断参数 TablePrivileges 是否已赋值
                     * @return TablePrivileges 是否已赋值
                     * 
                     */
                    bool TablePrivilegesHasBeenSet() const;

                    /**
                     * 获取数据库表中的列权限数组。
                     * @return ColumnPrivileges 数据库表中的列权限数组。
                     * 
                     */
                    std::vector<ColumnPrivilege> GetColumnPrivileges() const;

                    /**
                     * 判断参数 ColumnPrivileges 是否已赋值
                     * @return ColumnPrivileges 是否已赋值
                     * 
                     */
                    bool ColumnPrivilegesHasBeenSet() const;

                private:

                    /**
                     * 全局权限数组。
                     */
                    std::vector<std::string> m_globalPrivileges;
                    bool m_globalPrivilegesHasBeenSet;

                    /**
                     * 数据库权限数组。
                     */
                    std::vector<DatabasePrivilege> m_databasePrivileges;
                    bool m_databasePrivilegesHasBeenSet;

                    /**
                     * 数据库中的表权限数组。
                     */
                    std::vector<TablePrivilege> m_tablePrivileges;
                    bool m_tablePrivilegesHasBeenSet;

                    /**
                     * 数据库表中的列权限数组。
                     */
                    std::vector<ColumnPrivilege> m_columnPrivileges;
                    bool m_columnPrivilegesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEACCOUNTPRIVILEGESRESPONSE_H_
