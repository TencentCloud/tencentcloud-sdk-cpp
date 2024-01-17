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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SQLEXPRESSION_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SQLEXPRESSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/SqlExpressionTable.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 数据质量自定义规则时的sql表达式解析对象
                */
                class SqlExpression : public AbstractModel
                {
                public:
                    SqlExpression();
                    ~SqlExpression() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取sql表达式表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableExpressions sql表达式表名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SqlExpressionTable> GetTableExpressions() const;

                    /**
                     * 设置sql表达式表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableExpressions sql表达式表名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableExpressions(const std::vector<SqlExpressionTable>& _tableExpressions);

                    /**
                     * 判断参数 TableExpressions 是否已赋值
                     * @return TableExpressions 是否已赋值
                     * 
                     */
                    bool TableExpressionsHasBeenSet() const;

                    /**
                     * 获取sql表达式字段名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamExpressions sql表达式字段名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetParamExpressions() const;

                    /**
                     * 设置sql表达式字段名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramExpressions sql表达式字段名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamExpressions(const std::vector<std::string>& _paramExpressions);

                    /**
                     * 判断参数 ParamExpressions 是否已赋值
                     * @return ParamExpressions 是否已赋值
                     * 
                     */
                    bool ParamExpressionsHasBeenSet() const;

                private:

                    /**
                     * sql表达式表名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SqlExpressionTable> m_tableExpressions;
                    bool m_tableExpressionsHasBeenSet;

                    /**
                     * sql表达式字段名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_paramExpressions;
                    bool m_paramExpressionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SQLEXPRESSION_H_
