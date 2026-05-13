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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMDBACCOUNTPRIVILEGE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMDBACCOUNTPRIVILEGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmDatabasePrivilege.h>
#include <tencentcloud/csip/v20221121/model/DspmTablePrivilege.h>
#include <tencentcloud/csip/v20221121/model/DspmColumnPrivilege.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 数据库账号权限信息
                */
                class DspmDbAccountPrivilege : public AbstractModel
                {
                public:
                    DspmDbAccountPrivilege();
                    ~DspmDbAccountPrivilege() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取使用默认权限。0-未使用；1-只读权限，即SELECT权限；2-全部权限，即global级别全部权限。
                     * @return UseDefaultPrivilege 使用默认权限。0-未使用；1-只读权限，即SELECT权限；2-全部权限，即global级别全部权限。
                     * 
                     */
                    int64_t GetUseDefaultPrivilege() const;

                    /**
                     * 设置使用默认权限。0-未使用；1-只读权限，即SELECT权限；2-全部权限，即global级别全部权限。
                     * @param _useDefaultPrivilege 使用默认权限。0-未使用；1-只读权限，即SELECT权限；2-全部权限，即global级别全部权限。
                     * 
                     */
                    void SetUseDefaultPrivilege(const int64_t& _useDefaultPrivilege);

                    /**
                     * 判断参数 UseDefaultPrivilege 是否已赋值
                     * @return UseDefaultPrivilege 是否已赋值
                     * 
                     */
                    bool UseDefaultPrivilegeHasBeenSet() const;

                    /**
                     * 获取全局权限数组。
                     * @return GlobalPrivileges 全局权限数组。
                     * 
                     */
                    std::vector<std::string> GetGlobalPrivileges() const;

                    /**
                     * 设置全局权限数组。
                     * @param _globalPrivileges 全局权限数组。
                     * 
                     */
                    void SetGlobalPrivileges(const std::vector<std::string>& _globalPrivileges);

                    /**
                     * 判断参数 GlobalPrivileges 是否已赋值
                     * @return GlobalPrivileges 是否已赋值
                     * 
                     */
                    bool GlobalPrivilegesHasBeenSet() const;

                    /**
                     * 获取数据库权限数组。
                     * @return DatabasePrivilegesList 数据库权限数组。
                     * 
                     */
                    std::vector<DspmDatabasePrivilege> GetDatabasePrivilegesList() const;

                    /**
                     * 设置数据库权限数组。
                     * @param _databasePrivilegesList 数据库权限数组。
                     * 
                     */
                    void SetDatabasePrivilegesList(const std::vector<DspmDatabasePrivilege>& _databasePrivilegesList);

                    /**
                     * 判断参数 DatabasePrivilegesList 是否已赋值
                     * @return DatabasePrivilegesList 是否已赋值
                     * 
                     */
                    bool DatabasePrivilegesListHasBeenSet() const;

                    /**
                     * 获取数据库中的表权限数组。
                     * @return TablePrivileges 数据库中的表权限数组。
                     * 
                     */
                    std::vector<DspmTablePrivilege> GetTablePrivileges() const;

                    /**
                     * 设置数据库中的表权限数组。
                     * @param _tablePrivileges 数据库中的表权限数组。
                     * 
                     */
                    void SetTablePrivileges(const std::vector<DspmTablePrivilege>& _tablePrivileges);

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
                    std::vector<DspmColumnPrivilege> GetColumnPrivileges() const;

                    /**
                     * 设置数据库表中的列权限数组。
                     * @param _columnPrivileges 数据库表中的列权限数组。
                     * 
                     */
                    void SetColumnPrivileges(const std::vector<DspmColumnPrivilege>& _columnPrivileges);

                    /**
                     * 判断参数 ColumnPrivileges 是否已赋值
                     * @return ColumnPrivileges 是否已赋值
                     * 
                     */
                    bool ColumnPrivilegesHasBeenSet() const;

                private:

                    /**
                     * 使用默认权限。0-未使用；1-只读权限，即SELECT权限；2-全部权限，即global级别全部权限。
                     */
                    int64_t m_useDefaultPrivilege;
                    bool m_useDefaultPrivilegeHasBeenSet;

                    /**
                     * 全局权限数组。
                     */
                    std::vector<std::string> m_globalPrivileges;
                    bool m_globalPrivilegesHasBeenSet;

                    /**
                     * 数据库权限数组。
                     */
                    std::vector<DspmDatabasePrivilege> m_databasePrivilegesList;
                    bool m_databasePrivilegesListHasBeenSet;

                    /**
                     * 数据库中的表权限数组。
                     */
                    std::vector<DspmTablePrivilege> m_tablePrivileges;
                    bool m_tablePrivilegesHasBeenSet;

                    /**
                     * 数据库表中的列权限数组。
                     */
                    std::vector<DspmColumnPrivilege> m_columnPrivileges;
                    bool m_columnPrivilegesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMDBACCOUNTPRIVILEGE_H_
