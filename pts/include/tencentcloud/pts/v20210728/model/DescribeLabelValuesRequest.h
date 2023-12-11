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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBELABELVALUESREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBELABELVALUESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * DescribeLabelValues请求参数结构体
                */
                class DescribeLabelValuesRequest : public AbstractModel
                {
                public:
                    DescribeLabelValuesRequest();
                    ~DescribeLabelValuesRequest() = default;
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
                     * 获取指标名。取值范围参见 DescribeMetricLabelWithValues 接口返回的所有指标名
                     * @return Metric 指标名。取值范围参见 DescribeMetricLabelWithValues 接口返回的所有指标名
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置指标名。取值范围参见 DescribeMetricLabelWithValues 接口返回的所有指标名
                     * @param _metric 指标名。取值范围参见 DescribeMetricLabelWithValues 接口返回的所有指标名
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
                     * 获取标签名。取值范围参见 DescribeMetricLabelWithValues 接口返回的指标及其支持的标签名
                     * @return LabelName 标签名。取值范围参见 DescribeMetricLabelWithValues 接口返回的指标及其支持的标签名
                     * 
                     */
                    std::string GetLabelName() const;

                    /**
                     * 设置标签名。取值范围参见 DescribeMetricLabelWithValues 接口返回的指标及其支持的标签名
                     * @param _labelName 标签名。取值范围参见 DescribeMetricLabelWithValues 接口返回的指标及其支持的标签名
                     * 
                     */
                    void SetLabelName(const std::string& _labelName);

                    /**
                     * 判断参数 LabelName 是否已赋值
                     * @return LabelName 是否已赋值
                     * 
                     */
                    bool LabelNameHasBeenSet() const;

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

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 场景ID
                     */
                    std::string m_scenarioId;
                    bool m_scenarioIdHasBeenSet;

                    /**
                     * 指标名。取值范围参见 DescribeMetricLabelWithValues 接口返回的所有指标名
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * 标签名。取值范围参见 DescribeMetricLabelWithValues 接口返回的指标及其支持的标签名
                     */
                    std::string m_labelName;
                    bool m_labelNameHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBELABELVALUESREQUEST_H_
