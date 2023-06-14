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
                     * 获取查询偏移量
                     * @return Offset 查询偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置查询偏移量
                     * @param _offset 查询偏移量
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
                     * 获取查询数量
                     * @return Limit 查询数量
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置查询数量
                     * @param _limit 查询数量
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
                     * 获取Grafana 实例 ID 数组
                     * @return InstanceIds Grafana 实例 ID 数组
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Grafana 实例 ID 数组
                     * @param _instanceIds Grafana 实例 ID 数组
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
                     * 获取Grafana 实例名，支持前缀模糊搜索
                     * @return InstanceName Grafana 实例名，支持前缀模糊搜索
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Grafana 实例名，支持前缀模糊搜索
                     * @param _instanceName Grafana 实例名，支持前缀模糊搜索
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
                     * 获取查询状态
                     * @return InstanceStatus 查询状态
                     * 
                     */
                    std::vector<int64_t> GetInstanceStatus() const;

                    /**
                     * 设置查询状态
                     * @param _instanceStatus 查询状态
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
                     * 获取标签过滤数组
                     * @return TagFilters 标签过滤数组
                     * 
                     */
                    std::vector<PrometheusTag> GetTagFilters() const;

                    /**
                     * 设置标签过滤数组
                     * @param _tagFilters 标签过滤数组
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
                     * 查询偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询数量
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Grafana 实例 ID 数组
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Grafana 实例名，支持前缀模糊搜索
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 查询状态
                     */
                    std::vector<int64_t> m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * 标签过滤数组
                     */
                    std::vector<PrometheusTag> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEGRAFANAINSTANCESREQUEST_H_
