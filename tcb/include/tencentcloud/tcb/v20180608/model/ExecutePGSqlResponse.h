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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_EXECUTEPGSQLRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_EXECUTEPGSQLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * ExecutePGSql返回参数结构体
                */
                class ExecutePGSqlResponse : public AbstractModel
                {
                public:
                    ExecutePGSqlResponse();
                    ~ExecutePGSqlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>影响行数</p>
                     * @return AffectedRows <p>影响行数</p>
                     * 
                     */
                    int64_t GetAffectedRows() const;

                    /**
                     * 判断参数 AffectedRows 是否已赋值
                     * @return AffectedRows 是否已赋值
                     * 
                     */
                    bool AffectedRowsHasBeenSet() const;

                    /**
                     * 获取<p>字段名列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Columns <p>字段名列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetColumns() const;

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     * 
                     */
                    bool ColumnsHasBeenSet() const;

                    /**
                     * 获取<p>数据行。每一行数据都是一个JSON串，将JSON进行反序列化将得到了每列的值。值可能是 null 或者 字符串，如果是 null 说明该列的值为 &lt;null&gt;，如果是字符串则为该列的值的字符串表示形式。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Rows <p>数据行。每一行数据都是一个JSON串，将JSON进行反序列化将得到了每列的值。值可能是 null 或者 字符串，如果是 null 说明该列的值为 &lt;null&gt;，如果是字符串则为该列的值的字符串表示形式。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetRows() const;

                    /**
                     * 判断参数 Rows 是否已赋值
                     * @return Rows 是否已赋值
                     * 
                     */
                    bool RowsHasBeenSet() const;

                    /**
                     * 获取<p>SQL执行耗时</p><p>单位：毫秒</p>
                     * @return ExecutionTimeMs <p>SQL执行耗时</p><p>单位：毫秒</p>
                     * 
                     */
                    int64_t GetExecutionTimeMs() const;

                    /**
                     * 判断参数 ExecutionTimeMs 是否已赋值
                     * @return ExecutionTimeMs 是否已赋值
                     * 
                     */
                    bool ExecutionTimeMsHasBeenSet() const;

                private:

                    /**
                     * <p>影响行数</p>
                     */
                    int64_t m_affectedRows;
                    bool m_affectedRowsHasBeenSet;

                    /**
                     * <p>字段名列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_columns;
                    bool m_columnsHasBeenSet;

                    /**
                     * <p>数据行。每一行数据都是一个JSON串，将JSON进行反序列化将得到了每列的值。值可能是 null 或者 字符串，如果是 null 说明该列的值为 &lt;null&gt;，如果是字符串则为该列的值的字符串表示形式。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_rows;
                    bool m_rowsHasBeenSet;

                    /**
                     * <p>SQL执行耗时</p><p>单位：毫秒</p>
                     */
                    int64_t m_executionTimeMs;
                    bool m_executionTimeMsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_EXECUTEPGSQLRESPONSE_H_
