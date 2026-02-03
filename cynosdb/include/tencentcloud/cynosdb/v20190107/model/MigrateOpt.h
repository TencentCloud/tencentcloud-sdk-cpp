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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MIGRATEOPT_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MIGRATEOPT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/MigrateObject.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 同步对象详情
                */
                class MigrateOpt : public AbstractModel
                {
                public:
                    MigrateOpt();
                    ~MigrateOpt() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取包含数据库表信息
                     * @return DatabaseTables 包含数据库表信息
                     * 
                     */
                    MigrateObject GetDatabaseTables() const;

                    /**
                     * 设置包含数据库表信息
                     * @param _databaseTables 包含数据库表信息
                     * 
                     */
                    void SetDatabaseTables(const MigrateObject& _databaseTables);

                    /**
                     * 判断参数 DatabaseTables 是否已赋值
                     * @return DatabaseTables 是否已赋值
                     * 
                     */
                    bool DatabaseTablesHasBeenSet() const;

                private:

                    /**
                     * 包含数据库表信息
                     */
                    MigrateObject m_databaseTables;
                    bool m_databaseTablesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MIGRATEOPT_H_
