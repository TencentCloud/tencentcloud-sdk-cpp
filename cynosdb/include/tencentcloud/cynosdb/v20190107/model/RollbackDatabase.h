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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKDATABASE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKDATABASE_H_

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
                * 回滚数据库信息
                */
                class RollbackDatabase : public AbstractModel
                {
                public:
                    RollbackDatabase();
                    ~RollbackDatabase() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取旧数据库名称
                     * @return OldDatabase 旧数据库名称
                     * 
                     */
                    std::string GetOldDatabase() const;

                    /**
                     * 设置旧数据库名称
                     * @param _oldDatabase 旧数据库名称
                     * 
                     */
                    void SetOldDatabase(const std::string& _oldDatabase);

                    /**
                     * 判断参数 OldDatabase 是否已赋值
                     * @return OldDatabase 是否已赋值
                     * 
                     */
                    bool OldDatabaseHasBeenSet() const;

                    /**
                     * 获取新数据库名称
                     * @return NewDatabase 新数据库名称
                     * 
                     */
                    std::string GetNewDatabase() const;

                    /**
                     * 设置新数据库名称
                     * @param _newDatabase 新数据库名称
                     * 
                     */
                    void SetNewDatabase(const std::string& _newDatabase);

                    /**
                     * 判断参数 NewDatabase 是否已赋值
                     * @return NewDatabase 是否已赋值
                     * 
                     */
                    bool NewDatabaseHasBeenSet() const;

                private:

                    /**
                     * 旧数据库名称
                     */
                    std::string m_oldDatabase;
                    bool m_oldDatabaseHasBeenSet;

                    /**
                     * 新数据库名称
                     */
                    std::string m_newDatabase;
                    bool m_newDatabaseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKDATABASE_H_
