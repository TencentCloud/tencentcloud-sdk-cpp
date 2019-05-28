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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBECOMPUTEENVACTIVITIESREQUEST_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBECOMPUTEENVACTIVITIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeComputeEnvActivities请求参数结构体
                */
                class DescribeComputeEnvActivitiesRequest : public AbstractModel
                {
                public:
                    DescribeComputeEnvActivitiesRequest();
                    ~DescribeComputeEnvActivitiesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取计算环境ID
                     * @return EnvId 计算环境ID
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置计算环境ID
                     * @param EnvId 计算环境ID
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param Offset 偏移量
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量
                     * @return Limit 返回数量
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量
                     * @param Limit 返回数量
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取过滤条件
<li> compute-node-id - String - 是否必填：否 -（过滤条件）按照计算节点ID过滤。</li>
                     * @return Filters 过滤条件
<li> compute-node-id - String - 是否必填：否 -（过滤条件）按照计算节点ID过滤。</li>
                     */
                    Filter GetFilters() const;

                    /**
                     * 设置过滤条件
<li> compute-node-id - String - 是否必填：否 -（过滤条件）按照计算节点ID过滤。</li>
                     * @param Filters 过滤条件
<li> compute-node-id - String - 是否必填：否 -（过滤条件）按照计算节点ID过滤。</li>
                     */
                    void SetFilters(const Filter& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 计算环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤条件
<li> compute-node-id - String - 是否必填：否 -（过滤条件）按照计算节点ID过滤。</li>
                     */
                    Filter m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBECOMPUTEENVACTIVITIESREQUEST_H_
