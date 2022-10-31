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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_TABLE_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_TABLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 数据同步库表信息描述
                */
                class Table : public AbstractModel
                {
                public:
                    Table();
                    ~Table() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName 表名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TableName 表名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取新表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NewTableName 新表名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNewTableName() const;

                    /**
                     * 设置新表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NewTableName 新表名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNewTableName(const std::string& _newTableName);

                    /**
                     * 判断参数 NewTableName 是否已赋值
                     * @return NewTableName 是否已赋值
                     */
                    bool NewTableNameHasBeenSet() const;

                    /**
                     * 获取过滤条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FilterCondition 过滤条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFilterCondition() const;

                    /**
                     * 设置过滤条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FilterCondition 过滤条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFilterCondition(const std::string& _filterCondition);

                    /**
                     * 判断参数 FilterCondition 是否已赋值
                     * @return FilterCondition 是否已赋值
                     */
                    bool FilterConditionHasBeenSet() const;

                private:

                    /**
                     * 表名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 新表名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_newTableName;
                    bool m_newTableNameHasBeenSet;

                    /**
                     * 过滤条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_filterCondition;
                    bool m_filterConditionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_TABLE_H_
