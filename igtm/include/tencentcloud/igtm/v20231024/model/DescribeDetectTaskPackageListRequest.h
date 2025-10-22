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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBEDETECTTASKPACKAGELISTREQUEST_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBEDETECTTASKPACKAGELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/igtm/v20231024/model/ResourceFilter.h>


namespace TencentCloud
{
    namespace Igtm
    {
        namespace V20231024
        {
            namespace Model
            {
                /**
                * DescribeDetectTaskPackageList请求参数结构体
                */
                class DescribeDetectTaskPackageListRequest : public AbstractModel
                {
                public:
                    DescribeDetectTaskPackageListRequest();
                    ~DescribeDetectTaskPackageListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取每页条数
                     * @return Limit 每页条数
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页条数
                     * @param _limit 每页条数
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
                     * 获取探测任务过滤条件：ResourceId 探测任务的资源id，PeriodStart 最小过期时间,PeriodEnd 最大过期时间
                     * @return Filters 探测任务过滤条件：ResourceId 探测任务的资源id，PeriodStart 最小过期时间,PeriodEnd 最大过期时间
                     * 
                     */
                    std::vector<ResourceFilter> GetFilters() const;

                    /**
                     * 设置探测任务过滤条件：ResourceId 探测任务的资源id，PeriodStart 最小过期时间,PeriodEnd 最大过期时间
                     * @param _filters 探测任务过滤条件：ResourceId 探测任务的资源id，PeriodStart 最小过期时间,PeriodEnd 最大过期时间
                     * 
                     */
                    void SetFilters(const std::vector<ResourceFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 每页条数
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 探测任务过滤条件：ResourceId 探测任务的资源id，PeriodStart 最小过期时间,PeriodEnd 最大过期时间
                     */
                    std::vector<ResourceFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBEDETECTTASKPACKAGELISTREQUEST_H_
