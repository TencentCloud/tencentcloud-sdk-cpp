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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_QUALITYSQLEXPRESSION_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_QUALITYSQLEXPRESSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/QualitySqlExpressionTable.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 数据质量自定义规则时的sql表达式解析对象
                */
                class QualitySqlExpression : public AbstractModel
                {
                public:
                    QualitySqlExpression();
                    ~QualitySqlExpression() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取sql表达式表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableExpressions sql表达式表名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<QualitySqlExpressionTable> GetTableExpressions() const;

                    /**
                     * 设置sql表达式表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableExpressions sql表达式表名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableExpressions(const std::vector<QualitySqlExpressionTable>& _tableExpressions);

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

                    /**
                     * 获取新增模型检测类系统模板sql中占位符集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SystemTemplateExpressions 新增模型检测类系统模板sql中占位符集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSystemTemplateExpressions() const;

                    /**
                     * 设置新增模型检测类系统模板sql中占位符集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _systemTemplateExpressions 新增模型检测类系统模板sql中占位符集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSystemTemplateExpressions(const std::vector<std::string>& _systemTemplateExpressions);

                    /**
                     * 判断参数 SystemTemplateExpressions 是否已赋值
                     * @return SystemTemplateExpressions 是否已赋值
                     * 
                     */
                    bool SystemTemplateExpressionsHasBeenSet() const;

                private:

                    /**
                     * sql表达式表名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<QualitySqlExpressionTable> m_tableExpressions;
                    bool m_tableExpressionsHasBeenSet;

                    /**
                     * sql表达式字段名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_paramExpressions;
                    bool m_paramExpressionsHasBeenSet;

                    /**
                     * 新增模型检测类系统模板sql中占位符集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_systemTemplateExpressions;
                    bool m_systemTemplateExpressionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_QUALITYSQLEXPRESSION_H_
