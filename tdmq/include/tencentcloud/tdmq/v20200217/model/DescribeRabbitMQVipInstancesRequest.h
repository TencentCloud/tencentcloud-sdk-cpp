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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQVIPINSTANCESREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQVIPINSTANCESREQUEST_H_

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
                * DescribeRabbitMQVipInstances请求参数结构体
                */
                class DescribeRabbitMQVipInstancesRequest : public AbstractModel
                {
                public:
                    DescribeRabbitMQVipInstancesRequest();
                    ~DescribeRabbitMQVipInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询条件过滤器
                     * @return Filters 查询条件过滤器
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置查询条件过滤器
                     * @param _filters 查询条件过滤器
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
                     * 获取查询数目上限，默认 20
                     * @return Limit 查询数目上限，默认 20
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置查询数目上限，默认 20
                     * @param _limit 查询数目上限，默认 20
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
                     * 获取查询起始位置，默认 0
                     * @return Offset 查询起始位置，默认 0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置查询起始位置，默认 0
                     * @param _offset 查询起始位置，默认 0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 查询条件过滤器
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 查询数目上限，默认 20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 查询起始位置，默认 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQVIPINSTANCESREQUEST_H_
