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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDBInstances请求参数结构体
                */
                class DescribeDBInstancesRequest : public AbstractModel
                {
                public:
                    DescribeDBInstancesRequest();
                    ~DescribeDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件，目前支持：db-instance-id、db-instance-name两种。
                     * @return Filters 过滤条件，目前支持：db-instance-id、db-instance-name两种。
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，目前支持：db-instance-id、db-instance-name两种。
                     * @param Filters 过滤条件，目前支持：db-instance-id、db-instance-name两种。
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取每页显示数量，默认返回10条。
                     * @return Limit 每页显示数量，默认返回10条。
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页显示数量，默认返回10条。
                     * @param Limit 每页显示数量，默认返回10条。
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页序号，从0开始。
                     * @return Offset 分页序号，从0开始。
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页序号，从0开始。
                     * @param Offset 分页序号，从0开始。
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 过滤条件，目前支持：db-instance-id、db-instance-name两种。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 每页显示数量，默认返回10条。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页序号，从0开始。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
