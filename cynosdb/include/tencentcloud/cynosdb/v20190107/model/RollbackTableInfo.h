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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKTABLEINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKTABLEINFO_H_

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
                * 回档表信息
                */
                class RollbackTableInfo : public AbstractModel
                {
                public:
                    RollbackTableInfo();
                    ~RollbackTableInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取旧表名称
                     * @return OldTable 旧表名称
                     * 
                     */
                    std::string GetOldTable() const;

                    /**
                     * 设置旧表名称
                     * @param _oldTable 旧表名称
                     * 
                     */
                    void SetOldTable(const std::string& _oldTable);

                    /**
                     * 判断参数 OldTable 是否已赋值
                     * @return OldTable 是否已赋值
                     * 
                     */
                    bool OldTableHasBeenSet() const;

                    /**
                     * 获取新表名称
                     * @return NewTable 新表名称
                     * 
                     */
                    std::string GetNewTable() const;

                    /**
                     * 设置新表名称
                     * @param _newTable 新表名称
                     * 
                     */
                    void SetNewTable(const std::string& _newTable);

                    /**
                     * 判断参数 NewTable 是否已赋值
                     * @return NewTable 是否已赋值
                     * 
                     */
                    bool NewTableHasBeenSet() const;

                private:

                    /**
                     * 旧表名称
                     */
                    std::string m_oldTable;
                    bool m_oldTableHasBeenSet;

                    /**
                     * 新表名称
                     */
                    std::string m_newTable;
                    bool m_newTableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKTABLEINFO_H_
