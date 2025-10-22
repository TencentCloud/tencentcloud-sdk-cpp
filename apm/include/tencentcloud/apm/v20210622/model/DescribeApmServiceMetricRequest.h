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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMSERVICEMETRICREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMSERVICEMETRICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/OrderBy.h>
#include <tencentcloud/apm/v20210622/model/ApmTag.h>
#include <tencentcloud/apm/v20210622/model/Filter.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeApmServiceMetric请求参数结构体
                */
                class DescribeApmServiceMetricRequest : public AbstractModel
                {
                public:
                    DescribeApmServiceMetricRequest();
                    ~DescribeApmServiceMetricRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务系统ID
                     * @return InstanceId 业务系统ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置业务系统ID
                     * @param _instanceId 业务系统ID
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
                     * 获取应用名
                     * @return ServiceName 应用名
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置应用名
                     * @param _serviceName 应用名
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取应用ID
                     * @return ServiceID 应用ID
                     * 
                     */
                    std::string GetServiceID() const;

                    /**
                     * 设置应用ID
                     * @param _serviceID 应用ID
                     * 
                     */
                    void SetServiceID(const std::string& _serviceID);

                    /**
                     * 判断参数 ServiceID 是否已赋值
                     * @return ServiceID 是否已赋值
                     * 
                     */
                    bool ServiceIDHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
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
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
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
                     * 获取排序
                     * @return OrderBy 排序
                     * 
                     */
                    OrderBy GetOrderBy() const;

                    /**
                     * 设置排序
                     * @param _orderBy 排序
                     * 
                     */
                    void SetOrderBy(const OrderBy& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取是否demo模式
                     * @return Demo 是否demo模式
                     * 
                     */
                    bool GetDemo() const;

                    /**
                     * 设置是否demo模式
                     * @param _demo 是否demo模式
                     * 
                     */
                    void SetDemo(const bool& _demo);

                    /**
                     * 判断参数 Demo 是否已赋值
                     * @return Demo 是否已赋值
                     * 
                     */
                    bool DemoHasBeenSet() const;

                    /**
                     * 获取应用状态筛选，可枚举的值为：health、warning、error。如果选中多个状态用逗号隔开，例如："warning,error"
                     * @return ServiceStatus 应用状态筛选，可枚举的值为：health、warning、error。如果选中多个状态用逗号隔开，例如："warning,error"
                     * 
                     */
                    std::string GetServiceStatus() const;

                    /**
                     * 设置应用状态筛选，可枚举的值为：health、warning、error。如果选中多个状态用逗号隔开，例如："warning,error"
                     * @param _serviceStatus 应用状态筛选，可枚举的值为：health、warning、error。如果选中多个状态用逗号隔开，例如："warning,error"
                     * 
                     */
                    void SetServiceStatus(const std::string& _serviceStatus);

                    /**
                     * 判断参数 ServiceStatus 是否已赋值
                     * @return ServiceStatus 是否已赋值
                     * 
                     */
                    bool ServiceStatusHasBeenSet() const;

                    /**
                     * 获取标签列表
                     * @return Tags 标签列表
                     * 
                     */
                    std::vector<ApmTag> GetTags() const;

                    /**
                     * 设置标签列表
                     * @param _tags 标签列表
                     * 
                     */
                    void SetTags(const std::vector<ApmTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取页码
                     * @return Page 页码
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置页码
                     * @param _page 页码
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取页大小
                     * @return PageSize 页大小
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置页大小
                     * @param _pageSize 页大小
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取过滤条件
                     * @return Filters 过滤条件
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件
                     * @param _filters 过滤条件
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
                     * 业务系统ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 应用名
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 应用ID
                     */
                    std::string m_serviceID;
                    bool m_serviceIDHasBeenSet;

                    /**
                     * 开始时间
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 排序
                     */
                    OrderBy m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 是否demo模式
                     */
                    bool m_demo;
                    bool m_demoHasBeenSet;

                    /**
                     * 应用状态筛选，可枚举的值为：health、warning、error。如果选中多个状态用逗号隔开，例如："warning,error"
                     */
                    std::string m_serviceStatus;
                    bool m_serviceStatusHasBeenSet;

                    /**
                     * 标签列表
                     */
                    std::vector<ApmTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 页码
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 页大小
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 过滤条件
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMSERVICEMETRICREQUEST_H_
