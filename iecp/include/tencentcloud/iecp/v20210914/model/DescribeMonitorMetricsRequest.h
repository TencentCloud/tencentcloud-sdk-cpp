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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEMONITORMETRICSREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEMONITORMETRICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * DescribeMonitorMetrics请求参数结构体
                */
                class DescribeMonitorMetricsRequest : public AbstractModel
                {
                public:
                    DescribeMonitorMetricsRequest();
                    ~DescribeMonitorMetricsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取IECP边缘单元ID
                     * @return EdgeUnitId IECP边缘单元ID
                     * 
                     */
                    uint64_t GetEdgeUnitId() const;

                    /**
                     * 设置IECP边缘单元ID
                     * @param _edgeUnitId IECP边缘单元ID
                     * 
                     */
                    void SetEdgeUnitId(const uint64_t& _edgeUnitId);

                    /**
                     * 判断参数 EdgeUnitId 是否已赋值
                     * @return EdgeUnitId 是否已赋值
                     * 
                     */
                    bool EdgeUnitIdHasBeenSet() const;

                    /**
                     * 获取查询维度
                     * @return QueryType 查询维度
                     * 
                     */
                    std::string GetQueryType() const;

                    /**
                     * 设置查询维度
                     * @param _queryType 查询维度
                     * 
                     */
                    void SetQueryType(const std::string& _queryType);

                    /**
                     * 判断参数 QueryType 是否已赋值
                     * @return QueryType 是否已赋值
                     * 
                     */
                    bool QueryTypeHasBeenSet() const;

                    /**
                     * 获取起始时间Unix秒时间戳
                     * @return StartTime 起始时间Unix秒时间戳
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置起始时间Unix秒时间戳
                     * @param _startTime 起始时间Unix秒时间戳
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取终止时间Unix秒时间戳
                     * @return EndTime 终止时间Unix秒时间戳
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置终止时间Unix秒时间戳
                     * @param _endTime 终止时间Unix秒时间戳
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取步长（分钟）
                     * @return Interval 步长（分钟）
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置步长（分钟）
                     * @param _interval 步长（分钟）
                     * 
                     */
                    void SetInterval(const int64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取节点名称，查询节点监控时必填
                     * @return NodeName 节点名称，查询节点监控时必填
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置节点名称，查询节点监控时必填
                     * @param _nodeName 节点名称，查询节点监控时必填
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取命名空间，不填则默认为default
                     * @return Namespace 命名空间，不填则默认为default
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间，不填则默认为default
                     * @param _namespace 命名空间，不填则默认为default
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Pod名称，查询Pod监控时必填
                     * @return PodName Pod名称，查询Pod监控时必填
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置Pod名称，查询Pod监控时必填
                     * @param _podName Pod名称，查询Pod监控时必填
                     * 
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取Workload名称，查询Workload监控时必填
                     * @return WorkloadName Workload名称，查询Workload监控时必填
                     * 
                     */
                    std::string GetWorkloadName() const;

                    /**
                     * 设置Workload名称，查询Workload监控时必填
                     * @param _workloadName Workload名称，查询Workload监控时必填
                     * 
                     */
                    void SetWorkloadName(const std::string& _workloadName);

                    /**
                     * 判断参数 WorkloadName 是否已赋值
                     * @return WorkloadName 是否已赋值
                     * 
                     */
                    bool WorkloadNameHasBeenSet() const;

                private:

                    /**
                     * IECP边缘单元ID
                     */
                    uint64_t m_edgeUnitId;
                    bool m_edgeUnitIdHasBeenSet;

                    /**
                     * 查询维度
                     */
                    std::string m_queryType;
                    bool m_queryTypeHasBeenSet;

                    /**
                     * 起始时间Unix秒时间戳
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 终止时间Unix秒时间戳
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 步长（分钟）
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 节点名称，查询节点监控时必填
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 命名空间，不填则默认为default
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Pod名称，查询Pod监控时必填
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * Workload名称，查询Workload监控时必填
                     */
                    std::string m_workloadName;
                    bool m_workloadNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEMONITORMETRICSREQUEST_H_
