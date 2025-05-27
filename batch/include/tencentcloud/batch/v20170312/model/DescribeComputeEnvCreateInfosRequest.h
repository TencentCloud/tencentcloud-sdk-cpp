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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBECOMPUTEENVCREATEINFOSREQUEST_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBECOMPUTEENVCREATEINFOSREQUEST_H_

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
                * DescribeComputeEnvCreateInfos请求参数结构体
                */
                class DescribeComputeEnvCreateInfosRequest : public AbstractModel
                {
                public:
                    DescribeComputeEnvCreateInfosRequest();
                    ~DescribeComputeEnvCreateInfosRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取计算环境ID列表，与Filters参数不能同时指定，最大限制100，环境ID通过调用接口 [DescribeComputeEnvs](https://cloud.tencent.com/document/api/599/15893)获取。
                     * @return EnvIds 计算环境ID列表，与Filters参数不能同时指定，最大限制100，环境ID通过调用接口 [DescribeComputeEnvs](https://cloud.tencent.com/document/api/599/15893)获取。
                     * 
                     */
                    std::vector<std::string> GetEnvIds() const;

                    /**
                     * 设置计算环境ID列表，与Filters参数不能同时指定，最大限制100，环境ID通过调用接口 [DescribeComputeEnvs](https://cloud.tencent.com/document/api/599/15893)获取。
                     * @param _envIds 计算环境ID列表，与Filters参数不能同时指定，最大限制100，环境ID通过调用接口 [DescribeComputeEnvs](https://cloud.tencent.com/document/api/599/15893)获取。
                     * 
                     */
                    void SetEnvIds(const std::vector<std::string>& _envIds);

                    /**
                     * 判断参数 EnvIds 是否已赋值
                     * @return EnvIds 是否已赋值
                     * 
                     */
                    bool EnvIdsHasBeenSet() const;

                    /**
                     * 获取过滤条件<li> zone - String - 是否必填：否 -（过滤条件）按照可用区过滤，可用区通过调用接口 [DescribeZones](https://cloud.tencent.com/document/api/213/15707)获取。</li><li> env-id - String - 是否必填：否 -（过滤条件）按照计算环境ID过滤。</li><li> env-name - String - 是否必填：否 -（过滤条件）按照计算环境名称过滤。</li>与EnvIds参数不能同时指定。
                     * @return Filters 过滤条件<li> zone - String - 是否必填：否 -（过滤条件）按照可用区过滤，可用区通过调用接口 [DescribeZones](https://cloud.tencent.com/document/api/213/15707)获取。</li><li> env-id - String - 是否必填：否 -（过滤条件）按照计算环境ID过滤。</li><li> env-name - String - 是否必填：否 -（过滤条件）按照计算环境名称过滤。</li>与EnvIds参数不能同时指定。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件<li> zone - String - 是否必填：否 -（过滤条件）按照可用区过滤，可用区通过调用接口 [DescribeZones](https://cloud.tencent.com/document/api/213/15707)获取。</li><li> env-id - String - 是否必填：否 -（过滤条件）按照计算环境ID过滤。</li><li> env-name - String - 是否必填：否 -（过滤条件）按照计算环境名称过滤。</li>与EnvIds参数不能同时指定。
                     * @param _filters 过滤条件<li> zone - String - 是否必填：否 -（过滤条件）按照可用区过滤，可用区通过调用接口 [DescribeZones](https://cloud.tencent.com/document/api/213/15707)获取。</li><li> env-id - String - 是否必填：否 -（过滤条件）按照计算环境ID过滤。</li><li> env-name - String - 是否必填：否 -（过滤条件）按照计算环境名称过滤。</li>与EnvIds参数不能同时指定。
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
                     * 获取返回数量，默认值20，最大值100。
                     * @return Limit 返回数量，默认值20，最大值100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认值20，最大值100。
                     * @param _limit 返回数量，默认值20，最大值100。
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
                     * 计算环境ID列表，与Filters参数不能同时指定，最大限制100，环境ID通过调用接口 [DescribeComputeEnvs](https://cloud.tencent.com/document/api/599/15893)获取。
                     */
                    std::vector<std::string> m_envIds;
                    bool m_envIdsHasBeenSet;

                    /**
                     * 过滤条件<li> zone - String - 是否必填：否 -（过滤条件）按照可用区过滤，可用区通过调用接口 [DescribeZones](https://cloud.tencent.com/document/api/213/15707)获取。</li><li> env-id - String - 是否必填：否 -（过滤条件）按照计算环境ID过滤。</li><li> env-name - String - 是否必填：否 -（过滤条件）按照计算环境名称过滤。</li>与EnvIds参数不能同时指定。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认值20，最大值100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBECOMPUTEENVCREATEINFOSREQUEST_H_
