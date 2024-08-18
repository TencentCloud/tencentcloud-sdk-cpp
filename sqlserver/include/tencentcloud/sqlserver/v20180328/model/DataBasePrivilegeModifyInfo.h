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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DATABASEPRIVILEGEMODIFYINFO_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DATABASEPRIVILEGEMODIFYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/AccountPrivilege.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 数据库账号权限变更信息
                */
                class DataBasePrivilegeModifyInfo : public AbstractModel
                {
                public:
                    DataBasePrivilegeModifyInfo();
                    ~DataBasePrivilegeModifyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库名称
                     * @return DataBaseName 数据库名称
                     * 
                     */
                    std::string GetDataBaseName() const;

                    /**
                     * 设置数据库名称
                     * @param _dataBaseName 数据库名称
                     * 
                     */
                    void SetDataBaseName(const std::string& _dataBaseName);

                    /**
                     * 判断参数 DataBaseName 是否已赋值
                     * @return DataBaseName 是否已赋值
                     * 
                     */
                    bool DataBaseNameHasBeenSet() const;

                    /**
                     * 获取数据库权限变更信息
                     * @return AccountPrivileges 数据库权限变更信息
                     * 
                     */
                    std::vector<AccountPrivilege> GetAccountPrivileges() const;

                    /**
                     * 设置数据库权限变更信息
                     * @param _accountPrivileges 数据库权限变更信息
                     * 
                     */
                    void SetAccountPrivileges(const std::vector<AccountPrivilege>& _accountPrivileges);

                    /**
                     * 判断参数 AccountPrivileges 是否已赋值
                     * @return AccountPrivileges 是否已赋值
                     * 
                     */
                    bool AccountPrivilegesHasBeenSet() const;

                private:

                    /**
                     * 数据库名称
                     */
                    std::string m_dataBaseName;
                    bool m_dataBaseNameHasBeenSet;

                    /**
                     * 数据库权限变更信息
                     */
                    std::vector<AccountPrivilege> m_accountPrivileges;
                    bool m_accountPrivilegesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DATABASEPRIVILEGEMODIFYINFO_H_
