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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESAMPLEMATRIXBATCHQUERYREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESAMPLEMATRIXBATCHQUERYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/InternalMetricQuery.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * DescribeSampleMatrixBatchQuery请求参数结构体
                */
                class DescribeSampleMatrixBatchQueryRequest : public AbstractModel
                {
                public:
                    DescribeSampleMatrixBatchQueryRequest();
                    ~DescribeSampleMatrixBatchQueryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务ID
                     * @return JobId 任务ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置任务ID
                     * @param _jobId 任务ID
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取场景ID
                     * @return ScenarioId 场景ID
                     * 
                     */
                    std::string GetScenarioId() const;

                    /**
                     * 设置场景ID
                     * @param _scenarioId 场景ID
                     * 
                     */
                    void SetScenarioId(const std::string& _scenarioId);

                    /**
                     * 判断参数 ScenarioId 是否已赋值
                     * @return ScenarioId 是否已赋值
                     * 
                     */
                    bool ScenarioIdHasBeenSet() const;

                    /**
                     * 获取查询语句
                     * @return Queries 查询语句
                     * 
                     */
                    std::vector<InternalMetricQuery> GetQueries() const;

                    /**
                     * 设置查询语句
                     * @param _queries 查询语句
                     * 
                     */
                    void SetQueries(const std::vector<InternalMetricQuery>& _queries);

                    /**
                     * 判断参数 Queries 是否已赋值
                     * @return Queries 是否已赋值
                     * 
                     */
                    bool QueriesHasBeenSet() const;

                    /**
                     * 获取最多返回的数据点个数
                     * @return MaxPoint 最多返回的数据点个数
                     * 
                     */
                    int64_t GetMaxPoint() const;

                    /**
                     * 设置最多返回的数据点个数
                     * @param _maxPoint 最多返回的数据点个数
                     * 
                     */
                    void SetMaxPoint(const int64_t& _maxPoint);

                    /**
                     * 判断参数 MaxPoint 是否已赋值
                     * @return MaxPoint 是否已赋值
                     * 
                     */
                    bool MaxPointHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 场景ID
                     */
                    std::string m_scenarioId;
                    bool m_scenarioIdHasBeenSet;

                    /**
                     * 查询语句
                     */
                    std::vector<InternalMetricQuery> m_queries;
                    bool m_queriesHasBeenSet;

                    /**
                     * 最多返回的数据点个数
                     */
                    int64_t m_maxPoint;
                    bool m_maxPointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESAMPLEMATRIXBATCHQUERYREQUEST_H_
