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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEUSERSQLADVICERESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEUSERSQLADVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeUserSqlAdvice返回参数结构体
                */
                class DescribeUserSqlAdviceResponse : public AbstractModel
                {
                public:
                    DescribeUserSqlAdviceResponse();
                    ~DescribeUserSqlAdviceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取SQL优化建议，可解析为JSON数组，无需优化时输出为空。
                     * @return Advices SQL优化建议，可解析为JSON数组，无需优化时输出为空。
                     * 
                     */
                    std::string GetAdvices() const;

                    /**
                     * 判断参数 Advices 是否已赋值
                     * @return Advices 是否已赋值
                     * 
                     */
                    bool AdvicesHasBeenSet() const;

                    /**
                     * 获取SQL优化建议备注，可解析为String数组，无需优化时输出为空。
                     * @return Comments SQL优化建议备注，可解析为String数组，无需优化时输出为空。
                     * 
                     */
                    std::string GetComments() const;

                    /**
                     * 判断参数 Comments 是否已赋值
                     * @return Comments 是否已赋值
                     * 
                     */
                    bool CommentsHasBeenSet() const;

                    /**
                     * 获取SQL语句。
                     * @return SqlText SQL语句。
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
                     * 获取库名。
                     * @return Schema 库名。
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
                     * 获取相关表的DDL信息，可解析为JSON数组。
                     * @return Tables 相关表的DDL信息，可解析为JSON数组。
                     * 
                     */
                    std::string GetTables() const;

                    /**
                     * 判断参数 Tables 是否已赋值
                     * @return Tables 是否已赋值
                     * 
                     */
                    bool TablesHasBeenSet() const;

                    /**
                     * 获取SQL执行计划，可解析为JSON，无需优化时输出为空。
                     * @return SqlPlan SQL执行计划，可解析为JSON，无需优化时输出为空。
                     * 
                     */
                    std::string GetSqlPlan() const;

                    /**
                     * 判断参数 SqlPlan 是否已赋值
                     * @return SqlPlan 是否已赋值
                     * 
                     */
                    bool SqlPlanHasBeenSet() const;

                    /**
                     * 获取SQL优化后的成本节约详情，可解析为JSON，无需优化时输出为空。
                     * @return Cost SQL优化后的成本节约详情，可解析为JSON，无需优化时输出为空。
                     * 
                     */
                    std::string GetCost() const;

                    /**
                     * 判断参数 Cost 是否已赋值
                     * @return Cost 是否已赋值
                     * 
                     */
                    bool CostHasBeenSet() const;

                private:

                    /**
                     * SQL优化建议，可解析为JSON数组，无需优化时输出为空。
                     */
                    std::string m_advices;
                    bool m_advicesHasBeenSet;

                    /**
                     * SQL优化建议备注，可解析为String数组，无需优化时输出为空。
                     */
                    std::string m_comments;
                    bool m_commentsHasBeenSet;

                    /**
                     * SQL语句。
                     */
                    std::string m_sqlText;
                    bool m_sqlTextHasBeenSet;

                    /**
                     * 库名。
                     */
                    std::string m_schema;
                    bool m_schemaHasBeenSet;

                    /**
                     * 相关表的DDL信息，可解析为JSON数组。
                     */
                    std::string m_tables;
                    bool m_tablesHasBeenSet;

                    /**
                     * SQL执行计划，可解析为JSON，无需优化时输出为空。
                     */
                    std::string m_sqlPlan;
                    bool m_sqlPlanHasBeenSet;

                    /**
                     * SQL优化后的成本节约详情，可解析为JSON，无需优化时输出为空。
                     */
                    std::string m_cost;
                    bool m_costHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEUSERSQLADVICERESPONSE_H_
