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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEGLOBALMAINTENANCEWINDOWANDEXCLUSIONSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEGLOBALMAINTENANCEWINDOWANDEXCLUSIONSREQUEST_H_

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
                * DescribeGlobalMaintenanceWindowAndExclusions请求参数结构体
                */
                class DescribeGlobalMaintenanceWindowAndExclusionsRequest : public AbstractModel
                {
                public:
                    DescribeGlobalMaintenanceWindowAndExclusionsRequest();
                    ~DescribeGlobalMaintenanceWindowAndExclusionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量，默认为0
                     * @return Offset 偏移量，默认为0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0
                     * @param _offset 偏移量，默认为0
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
                     * 获取最大输出条目数，默认为20
                     * @return Limit 最大输出条目数，默认为20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置最大输出条目数，默认为20
                     * @param _limit 最大输出条目数，默认为20
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
                     * 获取筛选项，支持按照以下字段过滤：
- "ID"：维护窗口ID，如：10
                     * @return Filters 筛选项，支持按照以下字段过滤：
- "ID"：维护窗口ID，如：10
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置筛选项，支持按照以下字段过滤：
- "ID"：维护窗口ID，如：10
                     * @param _filters 筛选项，支持按照以下字段过滤：
- "ID"：维护窗口ID，如：10
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
                     * 偏移量，默认为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 最大输出条目数，默认为20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 筛选项，支持按照以下字段过滤：
- "ID"：维护窗口ID，如：10
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEGLOBALMAINTENANCEWINDOWANDEXCLUSIONSREQUEST_H_
