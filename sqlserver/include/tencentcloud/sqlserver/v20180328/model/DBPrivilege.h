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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBPRIVILEGE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBPRIVILEGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 账号的数据库权限信息
                */
                class DBPrivilege : public AbstractModel
                {
                public:
                    DBPrivilege();
                    ~DBPrivilege() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库名
                     * @return DBName 数据库名
                     * 
                     */
                    std::string GetDBName() const;

                    /**
                     * 设置数据库名
                     * @param _dBName 数据库名
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
                     * 获取数据库权限，ReadWrite表示可读写，ReadOnly表示只读，DBOwner所有者
                     * @return Privilege 数据库权限，ReadWrite表示可读写，ReadOnly表示只读，DBOwner所有者
                     * 
                     */
                    std::string GetPrivilege() const;

                    /**
                     * 设置数据库权限，ReadWrite表示可读写，ReadOnly表示只读，DBOwner所有者
                     * @param _privilege 数据库权限，ReadWrite表示可读写，ReadOnly表示只读，DBOwner所有者
                     * 
                     */
                    void SetPrivilege(const std::string& _privilege);

                    /**
                     * 判断参数 Privilege 是否已赋值
                     * @return Privilege 是否已赋值
                     * 
                     */
                    bool PrivilegeHasBeenSet() const;

                private:

                    /**
                     * 数据库名
                     */
                    std::string m_dBName;
                    bool m_dBNameHasBeenSet;

                    /**
                     * 数据库权限，ReadWrite表示可读写，ReadOnly表示只读，DBOwner所有者
                     */
                    std::string m_privilege;
                    bool m_privilegeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBPRIVILEGE_H_
