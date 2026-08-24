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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEGRAFANAINSTANCESREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEGRAFANAINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusTag.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeGrafanaInstances请求参数结构体
                */
                class DescribeGrafanaInstancesRequest : public AbstractModel
                {
                public:
                    DescribeGrafanaInstancesRequest();
                    ~DescribeGrafanaInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>查询偏移量</p>
                     * @return Offset <p>查询偏移量</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>查询偏移量</p>
                     * @param _offset <p>查询偏移量</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>查询数量</p>
                     * @return Limit <p>查询数量</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>查询数量</p>
                     * @param _limit <p>查询数量</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>Grafana 实例 ID 数组</p>
                     * @return InstanceIds <p>Grafana 实例 ID 数组</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>Grafana 实例 ID 数组</p>
                     * @param _instanceIds <p>Grafana 实例 ID 数组</p>
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取<p>Grafana 实例名，支持前缀模糊搜索</p>
                     * @return InstanceName <p>Grafana 实例名，支持前缀模糊搜索</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Grafana 实例名，支持前缀模糊搜索</p>
                     * @param _instanceName <p>Grafana 实例名，支持前缀模糊搜索</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>查询状态</p>
                     * @return InstanceStatus <p>查询状态</p>
                     * 
                     */
                    std::vector<int64_t> GetInstanceStatus() const;

                    /**
                     * 设置<p>查询状态</p>
                     * @param _instanceStatus <p>查询状态</p>
                     * 
                     */
                    void SetInstanceStatus(const std::vector<int64_t>& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取<p>标签过滤数组</p>
                     * @return TagFilters <p>标签过滤数组</p>
                     * 
                     */
                    std::vector<PrometheusTag> GetTagFilters() const;

                    /**
                     * 设置<p>标签过滤数组</p>
                     * @param _tagFilters <p>标签过滤数组</p>
                     * 
                     */
                    void SetTagFilters(const std::vector<PrometheusTag>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     * 
                     */
                    bool TagFiltersHasBeenSet() const;

                private:

                    /**
                     * <p>查询偏移量</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>查询数量</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Grafana 实例 ID 数组</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>Grafana 实例名，支持前缀模糊搜索</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>查询状态</p>
                     */
                    std::vector<int64_t> m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * <p>标签过滤数组</p>
                     */
                    std::vector<PrometheusTag> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEGRAFANAINSTANCESREQUEST_H_
