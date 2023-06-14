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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DATABASEPRIVILEGES_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DATABASEPRIVILEGES_H_

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
                * 数据库权限列表
                */
                class DatabasePrivileges : public AbstractModel
                {
                public:
                    DatabasePrivileges();
                    ~DatabasePrivileges() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库
                     * @return Db 数据库
                     * 
                     */
                    std::string GetDb() const;

                    /**
                     * 设置数据库
                     * @param _db 数据库
                     * 
                     */
                    void SetDb(const std::string& _db);

                    /**
                     * 判断参数 Db 是否已赋值
                     * @return Db 是否已赋值
                     * 
                     */
                    bool DbHasBeenSet() const;

                    /**
                     * 获取权限列表
                     * @return Privileges 权限列表
                     * 
                     */
                    std::vector<std::string> GetPrivileges() const;

                    /**
                     * 设置权限列表
                     * @param _privileges 权限列表
                     * 
                     */
                    void SetPrivileges(const std::vector<std::string>& _privileges);

                    /**
                     * 判断参数 Privileges 是否已赋值
                     * @return Privileges 是否已赋值
                     * 
                     */
                    bool PrivilegesHasBeenSet() const;

                private:

                    /**
                     * 数据库
                     */
                    std::string m_db;
                    bool m_dbHasBeenSet;

                    /**
                     * 权限列表
                     */
                    std::vector<std::string> m_privileges;
                    bool m_privilegesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DATABASEPRIVILEGES_H_
