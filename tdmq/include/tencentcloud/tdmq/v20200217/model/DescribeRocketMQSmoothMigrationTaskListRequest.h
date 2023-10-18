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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQSMOOTHMIGRATIONTASKLISTREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQSMOOTHMIGRATIONTASKLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/Filter.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeRocketMQSmoothMigrationTaskList请求参数结构体
                */
                class DescribeRocketMQSmoothMigrationTaskListRequest : public AbstractModel
                {
                public:
                    DescribeRocketMQSmoothMigrationTaskListRequest();
                    ~DescribeRocketMQSmoothMigrationTaskListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询起始偏移量
                     * @return Offset 查询起始偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置查询起始偏移量
                     * @param _offset 查询起始偏移量
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
                     * 获取查询最大数量
                     * @return Limit 查询最大数量
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置查询最大数量
                     * @param _limit 查询最大数量
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
                     * 获取查询过滤器，
支持的字段如下
TaskStatus, 支持多选
ConnectionType，支持多选
ClusterId，精确搜索
TaskName，支持模糊搜索
                     * @return Filters 查询过滤器，
支持的字段如下
TaskStatus, 支持多选
ConnectionType，支持多选
ClusterId，精确搜索
TaskName，支持模糊搜索
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置查询过滤器，
支持的字段如下
TaskStatus, 支持多选
ConnectionType，支持多选
ClusterId，精确搜索
TaskName，支持模糊搜索
                     * @param _filters 查询过滤器，
支持的字段如下
TaskStatus, 支持多选
ConnectionType，支持多选
ClusterId，精确搜索
TaskName，支持模糊搜索
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
                     * 查询起始偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询最大数量
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 查询过滤器，
支持的字段如下
TaskStatus, 支持多选
ConnectionType，支持多选
ClusterId，精确搜索
TaskName，支持模糊搜索
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQSMOOTHMIGRATIONTASKLISTREQUEST_H_
