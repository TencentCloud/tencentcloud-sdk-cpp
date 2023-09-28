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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEPODSBYSPECREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEPODSBYSPECREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/Filter.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribePodsBySpec请求参数结构体
                */
                class DescribePodsBySpecRequest : public AbstractModel
                {
                public:
                    DescribePodsBySpecRequest();
                    ~DescribePodsBySpecRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取核数
                     * @return Cpu 核数
                     * 
                     */
                    double GetCpu() const;

                    /**
                     * 设置核数
                     * @param _cpu 核数
                     * 
                     */
                    void SetCpu(const double& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取内存
                     * @return Memory 内存
                     * 
                     */
                    double GetMemory() const;

                    /**
                     * 设置内存
                     * @param _memory 内存
                     * 
                     */
                    void SetMemory(const double& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取卡数，有0.25、0.5、1、2、4等
                     * @return GpuNum 卡数，有0.25、0.5、1、2、4等
                     * 
                     */
                    std::string GetGpuNum() const;

                    /**
                     * 设置卡数，有0.25、0.5、1、2、4等
                     * @param _gpuNum 卡数，有0.25、0.5、1、2、4等
                     * 
                     */
                    void SetGpuNum(const std::string& _gpuNum);

                    /**
                     * 判断参数 GpuNum 是否已赋值
                     * @return GpuNum 是否已赋值
                     * 
                     */
                    bool GpuNumHasBeenSet() const;

                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取集群 ID
                     * @return ClusterId 集群 ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群 ID
                     * @param _clusterId 集群 ID
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
                     * 获取节点名称
                     * @return NodeName 节点名称
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置节点名称
                     * @param _nodeName 节点名称
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
                     * 获取偏移量，默认0。
                     * @return Offset 偏移量，默认0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认0。
                     * @param _offset 偏移量，默认0。
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
                     * 获取返回数量，默认为20，最大值为100。
                     * @return Limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。
                     * @param _limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取pod-type
按照**【Pod 类型**】进行过滤。资源类型：intel、amd、v100、t4、a10\*gnv4、a10\*gnv4v等。
类型：String
必选：否

pod-deduct
按照**【上个周期抵扣的Pod**】进行过滤。Values可不设置。
必选：否

pod-not-deduct
按照**【上个周期未抵扣的Pod**】进行过滤。Values可不设置。
必选：否
                     * @return Filters pod-type
按照**【Pod 类型**】进行过滤。资源类型：intel、amd、v100、t4、a10\*gnv4、a10\*gnv4v等。
类型：String
必选：否

pod-deduct
按照**【上个周期抵扣的Pod**】进行过滤。Values可不设置。
必选：否

pod-not-deduct
按照**【上个周期未抵扣的Pod**】进行过滤。Values可不设置。
必选：否
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置pod-type
按照**【Pod 类型**】进行过滤。资源类型：intel、amd、v100、t4、a10\*gnv4、a10\*gnv4v等。
类型：String
必选：否

pod-deduct
按照**【上个周期抵扣的Pod**】进行过滤。Values可不设置。
必选：否

pod-not-deduct
按照**【上个周期未抵扣的Pod**】进行过滤。Values可不设置。
必选：否
                     * @param _filters pod-type
按照**【Pod 类型**】进行过滤。资源类型：intel、amd、v100、t4、a10\*gnv4、a10\*gnv4v等。
类型：String
必选：否

pod-deduct
按照**【上个周期抵扣的Pod**】进行过滤。Values可不设置。
必选：否

pod-not-deduct
按照**【上个周期未抵扣的Pod**】进行过滤。Values可不设置。
必选：否
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 核数
                     */
                    double m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存
                     */
                    double m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 卡数，有0.25、0.5、1、2、4等
                     */
                    std::string m_gpuNum;
                    bool m_gpuNumHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 集群 ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 节点名称
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 偏移量，默认0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * pod-type
按照**【Pod 类型**】进行过滤。资源类型：intel、amd、v100、t4、a10\*gnv4、a10\*gnv4v等。
类型：String
必选：否

pod-deduct
按照**【上个周期抵扣的Pod**】进行过滤。Values可不设置。
必选：否

pod-not-deduct
按照**【上个周期未抵扣的Pod**】进行过滤。Values可不设置。
必选：否
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEPODSBYSPECREQUEST_H_
