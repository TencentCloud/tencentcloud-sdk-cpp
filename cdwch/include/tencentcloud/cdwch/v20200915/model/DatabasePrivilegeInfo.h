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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_DATABASEPRIVILEGEINFO_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_DATABASEPRIVILEGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwch/v20200915/model/TablePrivilegeInfo.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * 数据库权限信息
                */
                class DatabasePrivilegeInfo : public AbstractModel
                {
                public:
                    DatabasePrivilegeInfo();
                    ~DatabasePrivilegeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库名称
                     * @return DatabaseName 数据库名称
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名称
                     * @param _databaseName 数据库名称
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取库表权限，SELECT、INSERT_ALL、ALTER、TRUNCATE、DROP_TABLE、CREATE_TABLE、DROP_DATABASE
                     * @return DatabasePrivileges 库表权限，SELECT、INSERT_ALL、ALTER、TRUNCATE、DROP_TABLE、CREATE_TABLE、DROP_DATABASE
                     * 
                     */
                    std::vector<std::string> GetDatabasePrivileges() const;

                    /**
                     * 设置库表权限，SELECT、INSERT_ALL、ALTER、TRUNCATE、DROP_TABLE、CREATE_TABLE、DROP_DATABASE
                     * @param _databasePrivileges 库表权限，SELECT、INSERT_ALL、ALTER、TRUNCATE、DROP_TABLE、CREATE_TABLE、DROP_DATABASE
                     * 
                     */
                    void SetDatabasePrivileges(const std::vector<std::string>& _databasePrivileges);

                    /**
                     * 判断参数 DatabasePrivileges 是否已赋值
                     * @return DatabasePrivileges 是否已赋值
                     * 
                     */
                    bool DatabasePrivilegesHasBeenSet() const;

                    /**
                     * 获取库下面的表权限
                     * @return TablePrivilegeList 库下面的表权限
                     * 
                     */
                    std::vector<TablePrivilegeInfo> GetTablePrivilegeList() const;

                    /**
                     * 设置库下面的表权限
                     * @param _tablePrivilegeList 库下面的表权限
                     * 
                     */
                    void SetTablePrivilegeList(const std::vector<TablePrivilegeInfo>& _tablePrivilegeList);

                    /**
                     * 判断参数 TablePrivilegeList 是否已赋值
                     * @return TablePrivilegeList 是否已赋值
                     * 
                     */
                    bool TablePrivilegeListHasBeenSet() const;

                private:

                    /**
                     * 数据库名称
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 库表权限，SELECT、INSERT_ALL、ALTER、TRUNCATE、DROP_TABLE、CREATE_TABLE、DROP_DATABASE
                     */
                    std::vector<std::string> m_databasePrivileges;
                    bool m_databasePrivilegesHasBeenSet;

                    /**
                     * 库下面的表权限
                     */
                    std::vector<TablePrivilegeInfo> m_tablePrivilegeList;
                    bool m_tablePrivilegeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_DATABASEPRIVILEGEINFO_H_
