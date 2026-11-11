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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESQLEXPLAINV2RESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESQLEXPLAINV2RESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/SqlExplainTableRefV2.h>
#include <tencentcloud/dbbrain/v20210527/model/SqlExplainResultV2.h>
#include <tencentcloud/dbbrain/v20210527/model/SqlExplainFieldDescV2.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeSqlExplainV2返回参数结构体
                */
                class DescribeSqlExplainV2Response : public AbstractModel
                {
                public:
                    DescribeSqlExplainV2Response();
                    ~DescribeSqlExplainV2Response() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>数据库名，回显请求中的 Schema。</p>
                     * @return Schema <p>数据库名，回显请求中的 Schema。</p>
                     * 
                     */
                    std::string GetSchema() const;

                    /**
                     * 判断参数 Schema 是否已赋值
                     * @return Schema 是否已赋值
                     * 
                     */
                    bool SchemaHasBeenSet() const;

                    /**
                     * 获取<p>SQL 文本，回显请求中的 SqlText。</p>
                     * @return SqlText <p>SQL 文本，回显请求中的 SqlText。</p>
                     * 
                     */
                    std::string GetSqlText() const;

                    /**
                     * 判断参数 SqlText 是否已赋值
                     * @return SqlText 是否已赋值
                     * 
                     */
                    bool SqlTextHasBeenSet() const;

                    /**
                     * 获取<p>SQL 涉及的表名列表。</p>
                     * @return Tables <p>SQL 涉及的表名列表。</p>
                     * 
                     */
                    std::vector<SqlExplainTableRefV2> GetTables() const;

                    /**
                     * 判断参数 Tables 是否已赋值
                     * @return Tables 是否已赋值
                     * 
                     */
                    bool TablesHasBeenSet() const;

                    /**
                     * 获取<p>执行计划详细信息。由数据库 EXPLAIN 输出透传，内容为 JSON 字符串，包含 Meta（列定义）与 Data（执行计划行）两部分；Format=JSON 时为 EXPLAIN FORMAT=JSON 的原始结果。</p>
                     * @return Explain <p>执行计划详细信息。由数据库 EXPLAIN 输出透传，内容为 JSON 字符串，包含 Meta（列定义）与 Data（执行计划行）两部分；Format=JSON 时为 EXPLAIN FORMAT=JSON 的原始结果。</p>
                     * 
                     */
                    SqlExplainResultV2 GetExplain() const;

                    /**
                     * 判断参数 Explain 是否已赋值
                     * @return Explain 是否已赋值
                     * 
                     */
                    bool ExplainHasBeenSet() const;

                    /**
                     * 获取<p>执行计划字段说明列表。仅当请求 Visual=true 或走 SqlTemplateKey 路径时返回，用于前端展示字段中文释义。</p>
                     * @return FieldDesc <p>执行计划字段说明列表。仅当请求 Visual=true 或走 SqlTemplateKey 路径时返回，用于前端展示字段中文释义。</p>
                     * 
                     */
                    std::vector<SqlExplainFieldDescV2> GetFieldDesc() const;

                    /**
                     * 判断参数 FieldDesc 是否已赋值
                     * @return FieldDesc 是否已赋值
                     * 
                     */
                    bool FieldDescHasBeenSet() const;

                    /**
                     * 获取<p>可视化执行计划树，当Visual=true时返回</p>
                     * @return VisualExplain <p>可视化执行计划树，当Visual=true时返回</p>
                     * 
                     */
                    std::string GetVisualExplain() const;

                    /**
                     * 判断参数 VisualExplain 是否已赋值
                     * @return VisualExplain 是否已赋值
                     * 
                     */
                    bool VisualExplainHasBeenSet() const;

                private:

                    /**
                     * <p>数据库名，回显请求中的 Schema。</p>
                     */
                    std::string m_schema;
                    bool m_schemaHasBeenSet;

                    /**
                     * <p>SQL 文本，回显请求中的 SqlText。</p>
                     */
                    std::string m_sqlText;
                    bool m_sqlTextHasBeenSet;

                    /**
                     * <p>SQL 涉及的表名列表。</p>
                     */
                    std::vector<SqlExplainTableRefV2> m_tables;
                    bool m_tablesHasBeenSet;

                    /**
                     * <p>执行计划详细信息。由数据库 EXPLAIN 输出透传，内容为 JSON 字符串，包含 Meta（列定义）与 Data（执行计划行）两部分；Format=JSON 时为 EXPLAIN FORMAT=JSON 的原始结果。</p>
                     */
                    SqlExplainResultV2 m_explain;
                    bool m_explainHasBeenSet;

                    /**
                     * <p>执行计划字段说明列表。仅当请求 Visual=true 或走 SqlTemplateKey 路径时返回，用于前端展示字段中文释义。</p>
                     */
                    std::vector<SqlExplainFieldDescV2> m_fieldDesc;
                    bool m_fieldDescHasBeenSet;

                    /**
                     * <p>可视化执行计划树，当Visual=true时返回</p>
                     */
                    std::string m_visualExplain;
                    bool m_visualExplainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESQLEXPLAINV2RESPONSE_H_
