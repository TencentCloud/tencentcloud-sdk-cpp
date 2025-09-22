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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMSERVICEMETRICRESPONSE_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMSERVICEMETRICRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/ApmServiceMetric.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeApmServiceMetric返回参数结构体
                */
                class DescribeApmServiceMetricResponse : public AbstractModel
                {
                public:
                    DescribeApmServiceMetricResponse();
                    ~DescribeApmServiceMetricResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取应用指标列表
                     * @return ServiceMetricList 应用指标列表
                     * 
                     */
                    std::vector<ApmServiceMetric> GetServiceMetricList() const;

                    /**
                     * 判断参数 ServiceMetricList 是否已赋值
                     * @return ServiceMetricList 是否已赋值
                     * 
                     */
                    bool ServiceMetricListHasBeenSet() const;

                    /**
                     * 获取符合筛选条件的应用数
                     * @return TotalCount 符合筛选条件的应用数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取警示异常应用数
                     * @return WarningErrorCount 警示异常应用数
                     * 
                     */
                    int64_t GetWarningErrorCount() const;

                    /**
                     * 判断参数 WarningErrorCount 是否已赋值
                     * @return WarningErrorCount 是否已赋值
                     * 
                     */
                    bool WarningErrorCountHasBeenSet() const;

                    /**
                     * 获取应用总数
                     * @return ApplicationCount 应用总数
                     * 
                     */
                    int64_t GetApplicationCount() const;

                    /**
                     * 判断参数 ApplicationCount 是否已赋值
                     * @return ApplicationCount 是否已赋值
                     * 
                     */
                    bool ApplicationCountHasBeenSet() const;

                    /**
                     * 获取页码
                     * @return Page 页码
                     * 
                     */
                    int64_t GetPage() const;

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
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取异常应用数
                     * @return ErrorCount 异常应用数
                     * 
                     */
                    int64_t GetErrorCount() const;

                    /**
                     * 判断参数 ErrorCount 是否已赋值
                     * @return ErrorCount 是否已赋值
                     * 
                     */
                    bool ErrorCountHasBeenSet() const;

                    /**
                     * 获取警示应用数
                     * @return WarningCount 警示应用数
                     * 
                     */
                    int64_t GetWarningCount() const;

                    /**
                     * 判断参数 WarningCount 是否已赋值
                     * @return WarningCount 是否已赋值
                     * 
                     */
                    bool WarningCountHasBeenSet() const;

                private:

                    /**
                     * 应用指标列表
                     */
                    std::vector<ApmServiceMetric> m_serviceMetricList;
                    bool m_serviceMetricListHasBeenSet;

                    /**
                     * 符合筛选条件的应用数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 警示异常应用数
                     */
                    int64_t m_warningErrorCount;
                    bool m_warningErrorCountHasBeenSet;

                    /**
                     * 应用总数
                     */
                    int64_t m_applicationCount;
                    bool m_applicationCountHasBeenSet;

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
                     * 异常应用数
                     */
                    int64_t m_errorCount;
                    bool m_errorCountHasBeenSet;

                    /**
                     * 警示应用数
                     */
                    int64_t m_warningCount;
                    bool m_warningCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMSERVICEMETRICRESPONSE_H_
