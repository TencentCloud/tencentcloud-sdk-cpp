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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESAMPLEQUERYREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESAMPLEQUERYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/Label.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * DescribeSampleQuery请求参数结构体
                */
                class DescribeSampleQueryRequest : public AbstractModel
                {
                public:
                    DescribeSampleQueryRequest();
                    ~DescribeSampleQueryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取job id
                     * @return JobId job id
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置job id
                     * @param _jobId job id
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
                     * 获取场景Id
                     * @return ScenarioId 场景Id
                     * 
                     */
                    std::string GetScenarioId() const;

                    /**
                     * 设置场景Id
                     * @param _scenarioId 场景Id
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
                     * 获取指标名
                     * @return Metric 指标名
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置指标名
                     * @param _metric 指标名
                     * 
                     */
                    void SetMetric(const std::string& _metric);

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     * 
                     */
                    bool MetricHasBeenSet() const;

                    /**
                     * 获取聚合条件
                     * @return Aggregation 聚合条件
                     * 
                     */
                    std::string GetAggregation() const;

                    /**
                     * 设置聚合条件
                     * @param _aggregation 聚合条件
                     * 
                     */
                    void SetAggregation(const std::string& _aggregation);

                    /**
                     * 判断参数 Aggregation 是否已赋值
                     * @return Aggregation 是否已赋值
                     * 
                     */
                    bool AggregationHasBeenSet() const;

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
                     * 获取过滤条件
                     * @return Labels 过滤条件
                     * 
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置过滤条件
                     * @param _labels 过滤条件
                     * 
                     */
                    void SetLabels(const std::vector<Label>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                private:

                    /**
                     * job id
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 场景Id
                     */
                    std::string m_scenarioId;
                    bool m_scenarioIdHasBeenSet;

                    /**
                     * 指标名
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * 聚合条件
                     */
                    std::string m_aggregation;
                    bool m_aggregationHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 过滤条件
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESAMPLEQUERYREQUEST_H_
