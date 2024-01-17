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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SQLEXPRESSIONTABLE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SQLEXPRESSIONTABLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 数据质量自定义规则时的sql表达式解析表对象
                */
                class SqlExpressionTable : public AbstractModel
                {
                public:
                    SqlExpressionTable();
                    ~SqlExpressionTable() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取sql表达式表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableExpression sql表达式表名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableExpression() const;

                    /**
                     * 设置sql表达式表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableExpression sql表达式表名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableExpression(const std::string& _tableExpression);

                    /**
                     * 判断参数 TableExpression 是否已赋值
                     * @return TableExpression 是否已赋值
                     * 
                     */
                    bool TableExpressionHasBeenSet() const;

                    /**
                     * 获取sql表达式字段名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnExpression sql表达式字段名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetColumnExpression() const;

                    /**
                     * 设置sql表达式字段名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnExpression sql表达式字段名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumnExpression(const std::vector<std::string>& _columnExpression);

                    /**
                     * 判断参数 ColumnExpression 是否已赋值
                     * @return ColumnExpression 是否已赋值
                     * 
                     */
                    bool ColumnExpressionHasBeenSet() const;

                private:

                    /**
                     * sql表达式表名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableExpression;
                    bool m_tableExpressionHasBeenSet;

                    /**
                     * sql表达式字段名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_columnExpression;
                    bool m_columnExpressionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SQLEXPRESSIONTABLE_H_
