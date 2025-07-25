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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSTEMPREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSTEMPREQUEST_H_

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
                * DescribePrometheusTemp请求参数结构体
                */
                class DescribePrometheusTempRequest : public AbstractModel
                {
                public:
                    DescribePrometheusTempRequest();
                    ~DescribePrometheusTempRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取仅支持按Name, Values字段过滤:
* Name = Name
  按照给定的模板名称列表匹配
* Name = ID
  按照给定的模板ID列表匹配
* Name = Describe
  按照给定的模板描述列表匹配
* Name = Level
  按照给定的模板维度(instance, cluster)列表匹配
                     * @return Filters 仅支持按Name, Values字段过滤:
* Name = Name
  按照给定的模板名称列表匹配
* Name = ID
  按照给定的模板ID列表匹配
* Name = Describe
  按照给定的模板描述列表匹配
* Name = Level
  按照给定的模板维度(instance, cluster)列表匹配
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置仅支持按Name, Values字段过滤:
* Name = Name
  按照给定的模板名称列表匹配
* Name = ID
  按照给定的模板ID列表匹配
* Name = Describe
  按照给定的模板描述列表匹配
* Name = Level
  按照给定的模板维度(instance, cluster)列表匹配
                     * @param _filters 仅支持按Name, Values字段过滤:
* Name = Name
  按照给定的模板名称列表匹配
* Name = ID
  按照给定的模板ID列表匹配
* Name = Describe
  按照给定的模板描述列表匹配
* Name = Level
  按照给定的模板维度(instance, cluster)列表匹配
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
                     * 获取分页偏移量，默认为0
                     * @return Offset 分页偏移量，默认为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，默认为0
                     * @param _offset 分页偏移量，默认为0
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
                     * 获取分页返回数量，默认为20，最大值为100
                     * @return Limit 分页返回数量，默认为20，最大值为100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页返回数量，默认为20，最大值为100
                     * @param _limit 分页返回数量，默认为20，最大值为100
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
                     * 仅支持按Name, Values字段过滤:
* Name = Name
  按照给定的模板名称列表匹配
* Name = ID
  按照给定的模板ID列表匹配
* Name = Describe
  按照给定的模板描述列表匹配
* Name = Level
  按照给定的模板维度(instance, cluster)列表匹配
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 分页偏移量，默认为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页返回数量，默认为20，最大值为100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSTEMPREQUEST_H_
