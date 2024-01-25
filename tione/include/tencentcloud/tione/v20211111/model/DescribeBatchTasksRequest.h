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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEBATCHTASKSREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEBATCHTASKSREQUEST_H_

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
                * DescribeBatchTasks请求参数结构体
                */
                class DescribeBatchTasksRequest : public AbstractModel
                {
                public:
                    DescribeBatchTasksRequest();
                    ~DescribeBatchTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤器

Name支持的取值范围：
BatchTaskId, BatchTaskName, Status, ModelVersionId

其中Status 的有效取值范围:
INIT, STARTING, RUNNING, FAILED, STOPPING, STOPPED, SUCCEED
                     * @return Filters 过滤器

Name支持的取值范围：
BatchTaskId, BatchTaskName, Status, ModelVersionId

其中Status 的有效取值范围:
INIT, STARTING, RUNNING, FAILED, STOPPING, STOPPED, SUCCEED
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤器

Name支持的取值范围：
BatchTaskId, BatchTaskName, Status, ModelVersionId

其中Status 的有效取值范围:
INIT, STARTING, RUNNING, FAILED, STOPPING, STOPPED, SUCCEED
                     * @param _filters 过滤器

Name支持的取值范围：
BatchTaskId, BatchTaskName, Status, ModelVersionId

其中Status 的有效取值范围:
INIT, STARTING, RUNNING, FAILED, STOPPING, STOPPED, SUCCEED
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
                     * 获取标签过滤器
                     * @return TagFilters 标签过滤器
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置标签过滤器
                     * @param _tagFilters 标签过滤器
                     * 
                     */
                    void SetTagFilters(const std::vector<TagFilter>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     * 
                     */
                    bool TagFiltersHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0
                     * @return Offset 偏移量，默认为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0
                     * @param _offset 偏移量，默认为0
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
                     * 获取限制数目，默认为20
                     * @return Limit 限制数目，默认为20
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制数目，默认为20
                     * @param _limit 限制数目，默认为20
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
                     * 获取输出列表的排列顺序。取值范围：ASC（升序排列）/ DESC（降序排列），默认为DESC
                     * @return Order 输出列表的排列顺序。取值范围：ASC（升序排列）/ DESC（降序排列），默认为DESC
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置输出列表的排列顺序。取值范围：ASC（升序排列）/ DESC（降序排列），默认为DESC
                     * @param _order 输出列表的排列顺序。取值范围：ASC（升序排列）/ DESC（降序排列），默认为DESC
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
                     * 获取排序字段。当前仅支持 "CreateTime"。
不传此字段则按照DB默认排序结果返回
                     * @return OrderField 排序字段。当前仅支持 "CreateTime"。
不传此字段则按照DB默认排序结果返回
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置排序字段。当前仅支持 "CreateTime"。
不传此字段则按照DB默认排序结果返回
                     * @param _orderField 排序字段。当前仅支持 "CreateTime"。
不传此字段则按照DB默认排序结果返回
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                private:

                    /**
                     * 过滤器

Name支持的取值范围：
BatchTaskId, BatchTaskName, Status, ModelVersionId

其中Status 的有效取值范围:
INIT, STARTING, RUNNING, FAILED, STOPPING, STOPPED, SUCCEED
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 标签过滤器
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                    /**
                     * 偏移量，默认为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制数目，默认为20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 输出列表的排列顺序。取值范围：ASC（升序排列）/ DESC（降序排列），默认为DESC
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序字段。当前仅支持 "CreateTime"。
不传此字段则按照DB默认排序结果返回
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEBATCHTASKSREQUEST_H_
