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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_BACKUPITEM_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_BACKUPITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 创建备份时，指定需要备份的库表信息
                */
                class BackupItem : public AbstractModel
                {
                public:
                    BackupItem();
                    ~BackupItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取需要备份的库名
                     * @return Db 需要备份的库名
                     * 
                     */
                    std::string GetDb() const;

                    /**
                     * 设置需要备份的库名
                     * @param _db 需要备份的库名
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
                     * 获取需要备份的表名。 如果传该参数，表示备份该库中的指定表。如果不传该参数则备份该db库
                     * @return Table 需要备份的表名。 如果传该参数，表示备份该库中的指定表。如果不传该参数则备份该db库
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置需要备份的表名。 如果传该参数，表示备份该库中的指定表。如果不传该参数则备份该db库
                     * @param _table 需要备份的表名。 如果传该参数，表示备份该库中的指定表。如果不传该参数则备份该db库
                     * 
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                private:

                    /**
                     * 需要备份的库名
                     */
                    std::string m_db;
                    bool m_dbHasBeenSet;

                    /**
                     * 需要备份的表名。 如果传该参数，表示备份该库中的指定表。如果不传该参数则备份该db库
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_BACKUPITEM_H_
