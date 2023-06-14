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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMODELACCELERATETASKSREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMODELACCELERATETASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/Filter.h>
#include <tencentcloud/tione/v20211111/model/TagFilter.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeModelAccelerateTasks请求参数结构体
                */
                class DescribeModelAccelerateTasksRequest : public AbstractModel
                {
                public:
                    DescribeModelAccelerateTasksRequest();
                    ~DescribeModelAccelerateTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤器
ModelAccTaskName 任务名称
ModelSource 模型来源
                     * @return Filters 过滤器
ModelAccTaskName 任务名称
ModelSource 模型来源
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤器
ModelAccTaskName 任务名称
ModelSource 模型来源
                     * @param _filters 过滤器
ModelAccTaskName 任务名称
ModelSource 模型来源
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
                     * 获取排序字段，默认CreateTime
                     * @return OrderField 排序字段，默认CreateTime
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置排序字段，默认CreateTime
                     * @param _orderField 排序字段，默认CreateTime
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取排序方式：ASC/DESC，默认DESC
                     * @return Order 排序方式：ASC/DESC，默认DESC
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式：ASC/DESC，默认DESC
                     * @param _order 排序方式：ASC/DESC，默认DESC
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
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
                     * 获取返回记录条数，默认10
                     * @return Limit 返回记录条数，默认10
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回记录条数，默认10
                     * @param _limit 返回记录条数，默认10
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
                     * 获取标签过滤
                     * @return TagFilters 标签过滤
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置标签过滤
                     * @param _tagFilters 标签过滤
                     * 
                     */
                    void SetTagFilters(const std::vector<TagFilter>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     * 
                     */
                    bool TagFiltersHasBeenSet() const;

                private:

                    /**
                     * 过滤器
ModelAccTaskName 任务名称
ModelSource 模型来源
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序字段，默认CreateTime
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 排序方式：ASC/DESC，默认DESC
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回记录条数，默认10
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 标签过滤
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMODELACCELERATETASKSREQUEST_H_
