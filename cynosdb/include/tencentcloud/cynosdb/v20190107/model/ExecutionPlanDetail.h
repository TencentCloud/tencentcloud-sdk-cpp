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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_EXECUTIONPLANDETAIL_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_EXECUTIONPLANDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ExplainRow.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 执行计划详情
                */
                class ExecutionPlanDetail : public AbstractModel
                {
                public:
                    ExecutionPlanDetail();
                    ~ExecutionPlanDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模板ID</p>
                     * @return TemplateID <p>模板ID</p>
                     * 
                     */
                    std::string GetTemplateID() const;

                    /**
                     * 设置<p>模板ID</p>
                     * @param _templateID <p>模板ID</p>
                     * 
                     */
                    void SetTemplateID(const std::string& _templateID);

                    /**
                     * 判断参数 TemplateID 是否已赋值
                     * @return TemplateID 是否已赋值
                     * 
                     */
                    bool TemplateIDHasBeenSet() const;

                    /**
                     * 获取<p>数据库名</p>
                     * @return Db <p>数据库名</p>
                     * 
                     */
                    std::string GetDb() const;

                    /**
                     * 设置<p>数据库名</p>
                     * @param _db <p>数据库名</p>
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
                     * 获取<p>原始SQL样例</p>
                     * @return SQLSample <p>原始SQL样例</p>
                     * 
                     */
                    std::string GetSQLSample() const;

                    /**
                     * 设置<p>原始SQL样例</p>
                     * @param _sQLSample <p>原始SQL样例</p>
                     * 
                     */
                    void SetSQLSample(const std::string& _sQLSample);

                    /**
                     * 判断参数 SQLSample 是否已赋值
                     * @return SQLSample 是否已赋值
                     * 
                     */
                    bool SQLSampleHasBeenSet() const;

                    /**
                     * 获取<p>改写后SQL样例</p>
                     * @return SQLSampleRewritten <p>改写后SQL样例</p>
                     * 
                     */
                    std::string GetSQLSampleRewritten() const;

                    /**
                     * 设置<p>改写后SQL样例</p>
                     * @param _sQLSampleRewritten <p>改写后SQL样例</p>
                     * 
                     */
                    void SetSQLSampleRewritten(const std::string& _sQLSampleRewritten);

                    /**
                     * 判断参数 SQLSampleRewritten 是否已赋值
                     * @return SQLSampleRewritten 是否已赋值
                     * 
                     */
                    bool SQLSampleRewrittenHasBeenSet() const;

                    /**
                     * 获取<p>优化前执行计划- 列表</p>
                     * @return TablePlanBefore <p>优化前执行计划- 列表</p>
                     * 
                     */
                    std::vector<ExplainRow> GetTablePlanBefore() const;

                    /**
                     * 设置<p>优化前执行计划- 列表</p>
                     * @param _tablePlanBefore <p>优化前执行计划- 列表</p>
                     * 
                     */
                    void SetTablePlanBefore(const std::vector<ExplainRow>& _tablePlanBefore);

                    /**
                     * 判断参数 TablePlanBefore 是否已赋值
                     * @return TablePlanBefore 是否已赋值
                     * 
                     */
                    bool TablePlanBeforeHasBeenSet() const;

                    /**
                     * 获取<p>优化后执行计划 - 列表</p>
                     * @return TablePlanAfter <p>优化后执行计划 - 列表</p>
                     * 
                     */
                    std::vector<ExplainRow> GetTablePlanAfter() const;

                    /**
                     * 设置<p>优化后执行计划 - 列表</p>
                     * @param _tablePlanAfter <p>优化后执行计划 - 列表</p>
                     * 
                     */
                    void SetTablePlanAfter(const std::vector<ExplainRow>& _tablePlanAfter);

                    /**
                     * 判断参数 TablePlanAfter 是否已赋值
                     * @return TablePlanAfter 是否已赋值
                     * 
                     */
                    bool TablePlanAfterHasBeenSet() const;

                    /**
                     * 获取<p>优化前树形执行计划</p>
                     * @return TreePlanBefore <p>优化前树形执行计划</p>
                     * 
                     */
                    std::string GetTreePlanBefore() const;

                    /**
                     * 设置<p>优化前树形执行计划</p>
                     * @param _treePlanBefore <p>优化前树形执行计划</p>
                     * 
                     */
                    void SetTreePlanBefore(const std::string& _treePlanBefore);

                    /**
                     * 判断参数 TreePlanBefore 是否已赋值
                     * @return TreePlanBefore 是否已赋值
                     * 
                     */
                    bool TreePlanBeforeHasBeenSet() const;

                    /**
                     * 获取<p>优化后树形执行计划</p>
                     * @return TreePlanAfter <p>优化后树形执行计划</p>
                     * 
                     */
                    std::string GetTreePlanAfter() const;

                    /**
                     * 设置<p>优化后树形执行计划</p>
                     * @param _treePlanAfter <p>优化后树形执行计划</p>
                     * 
                     */
                    void SetTreePlanAfter(const std::string& _treePlanAfter);

                    /**
                     * 判断参数 TreePlanAfter 是否已赋值
                     * @return TreePlanAfter 是否已赋值
                     * 
                     */
                    bool TreePlanAfterHasBeenSet() const;

                    /**
                     * 获取<p>优化前查询时间</p>
                     * @return QueryTimeBefore <p>优化前查询时间</p>
                     * 
                     */
                    double GetQueryTimeBefore() const;

                    /**
                     * 设置<p>优化前查询时间</p>
                     * @param _queryTimeBefore <p>优化前查询时间</p>
                     * 
                     */
                    void SetQueryTimeBefore(const double& _queryTimeBefore);

                    /**
                     * 判断参数 QueryTimeBefore 是否已赋值
                     * @return QueryTimeBefore 是否已赋值
                     * 
                     */
                    bool QueryTimeBeforeHasBeenSet() const;

                    /**
                     * 获取<p>优化后查询时间</p>
                     * @return QueryTimeAfter <p>优化后查询时间</p>
                     * 
                     */
                    double GetQueryTimeAfter() const;

                    /**
                     * 设置<p>优化后查询时间</p>
                     * @param _queryTimeAfter <p>优化后查询时间</p>
                     * 
                     */
                    void SetQueryTimeAfter(const double& _queryTimeAfter);

                    /**
                     * 判断参数 QueryTimeAfter 是否已赋值
                     * @return QueryTimeAfter 是否已赋值
                     * 
                     */
                    bool QueryTimeAfterHasBeenSet() const;

                    /**
                     * 获取<p>优化前扫描行数</p>
                     * @return SQLScanRowsBefore <p>优化前扫描行数</p>
                     * 
                     */
                    int64_t GetSQLScanRowsBefore() const;

                    /**
                     * 设置<p>优化前扫描行数</p>
                     * @param _sQLScanRowsBefore <p>优化前扫描行数</p>
                     * 
                     */
                    void SetSQLScanRowsBefore(const int64_t& _sQLScanRowsBefore);

                    /**
                     * 判断参数 SQLScanRowsBefore 是否已赋值
                     * @return SQLScanRowsBefore 是否已赋值
                     * 
                     */
                    bool SQLScanRowsBeforeHasBeenSet() const;

                    /**
                     * 获取<p>优化后扫描行数</p>
                     * @return SQLScanRowsAfter <p>优化后扫描行数</p>
                     * 
                     */
                    int64_t GetSQLScanRowsAfter() const;

                    /**
                     * 设置<p>优化后扫描行数</p>
                     * @param _sQLScanRowsAfter <p>优化后扫描行数</p>
                     * 
                     */
                    void SetSQLScanRowsAfter(const int64_t& _sQLScanRowsAfter);

                    /**
                     * 判断参数 SQLScanRowsAfter 是否已赋值
                     * @return SQLScanRowsAfter 是否已赋值
                     * 
                     */
                    bool SQLScanRowsAfterHasBeenSet() const;

                private:

                    /**
                     * <p>模板ID</p>
                     */
                    std::string m_templateID;
                    bool m_templateIDHasBeenSet;

                    /**
                     * <p>数据库名</p>
                     */
                    std::string m_db;
                    bool m_dbHasBeenSet;

                    /**
                     * <p>原始SQL样例</p>
                     */
                    std::string m_sQLSample;
                    bool m_sQLSampleHasBeenSet;

                    /**
                     * <p>改写后SQL样例</p>
                     */
                    std::string m_sQLSampleRewritten;
                    bool m_sQLSampleRewrittenHasBeenSet;

                    /**
                     * <p>优化前执行计划- 列表</p>
                     */
                    std::vector<ExplainRow> m_tablePlanBefore;
                    bool m_tablePlanBeforeHasBeenSet;

                    /**
                     * <p>优化后执行计划 - 列表</p>
                     */
                    std::vector<ExplainRow> m_tablePlanAfter;
                    bool m_tablePlanAfterHasBeenSet;

                    /**
                     * <p>优化前树形执行计划</p>
                     */
                    std::string m_treePlanBefore;
                    bool m_treePlanBeforeHasBeenSet;

                    /**
                     * <p>优化后树形执行计划</p>
                     */
                    std::string m_treePlanAfter;
                    bool m_treePlanAfterHasBeenSet;

                    /**
                     * <p>优化前查询时间</p>
                     */
                    double m_queryTimeBefore;
                    bool m_queryTimeBeforeHasBeenSet;

                    /**
                     * <p>优化后查询时间</p>
                     */
                    double m_queryTimeAfter;
                    bool m_queryTimeAfterHasBeenSet;

                    /**
                     * <p>优化前扫描行数</p>
                     */
                    int64_t m_sQLScanRowsBefore;
                    bool m_sQLScanRowsBeforeHasBeenSet;

                    /**
                     * <p>优化后扫描行数</p>
                     */
                    int64_t m_sQLScanRowsAfter;
                    bool m_sQLScanRowsAfterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_EXECUTIONPLANDETAIL_H_
