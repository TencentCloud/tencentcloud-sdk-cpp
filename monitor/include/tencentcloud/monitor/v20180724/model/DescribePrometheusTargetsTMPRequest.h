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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSTARGETSTMPREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSTARGETSTMPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/Filter.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePrometheusTargetsTMP请求参数结构体
                */
                class DescribePrometheusTargetsTMPRequest : public AbstractModel
                {
                public:
                    DescribePrometheusTargetsTMPRequest();
                    ~DescribePrometheusTargetsTMPRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取集成容器服务填绑定的集群id；
集成中心填 non-cluster
                     * @return ClusterId 集成容器服务填绑定的集群id；
集成中心填 non-cluster
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集成容器服务填绑定的集群id；
集成中心填 non-cluster
                     * @param _clusterId 集成容器服务填绑定的集群id；
集成中心填 non-cluster
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取集群类型(可不填)
                     * @return ClusterType 集群类型(可不填)
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置集群类型(可不填)
                     * @param _clusterType 集群类型(可不填)
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取过滤条件，支持Name=ServiceMonitor/PodMonitor/Probe/RawJob/Job, Value为采集配置名称；Name=Health, Value=up, down, unknown；Name=EndPoint, Value为EndPoint地址
                     * @return Filters 过滤条件，支持Name=ServiceMonitor/PodMonitor/Probe/RawJob/Job, Value为采集配置名称；Name=Health, Value=up, down, unknown；Name=EndPoint, Value为EndPoint地址
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，支持Name=ServiceMonitor/PodMonitor/Probe/RawJob/Job, Value为采集配置名称；Name=Health, Value=up, down, unknown；Name=EndPoint, Value为EndPoint地址
                     * @param _filters 过滤条件，支持Name=ServiceMonitor/PodMonitor/Probe/RawJob/Job, Value为采集配置名称；Name=Health, Value=up, down, unknown；Name=EndPoint, Value为EndPoint地址
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取targets分页偏移量，默认为0
                     * @return Offset targets分页偏移量，默认为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置targets分页偏移量，默认为0
                     * @param _offset targets分页偏移量，默认为0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取targets返回数量，默认为20，最大值200
                     * @return Limit targets返回数量，默认为20，最大值200
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置targets返回数量，默认为20，最大值200
                     * @param _limit targets返回数量，默认为20，最大值200
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 集成容器服务填绑定的集群id；
集成中心填 non-cluster
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群类型(可不填)
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 过滤条件，支持Name=ServiceMonitor/PodMonitor/Probe/RawJob/Job, Value为采集配置名称；Name=Health, Value=up, down, unknown；Name=EndPoint, Value为EndPoint地址
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * targets分页偏移量，默认为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * targets返回数量，默认为20，最大值200
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSTARGETSTMPREQUEST_H_
