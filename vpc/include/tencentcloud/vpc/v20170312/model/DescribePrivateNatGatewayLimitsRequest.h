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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEPRIVATENATGATEWAYLIMITSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEPRIVATENATGATEWAYLIMITSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribePrivateNatGatewayLimits请求参数结构体
                */
                class DescribePrivateNatGatewayLimitsRequest : public AbstractModel
                {
                public:
                    DescribePrivateNatGatewayLimitsRequest();
                    ~DescribePrivateNatGatewayLimitsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询VPC下可创建的私网网关配额数量，可选值：
<li>VpcId - String - 所在VpcId</li>
                     * @return Filters 查询VPC下可创建的私网网关配额数量，可选值：
<li>VpcId - String - 所在VpcId</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置查询VPC下可创建的私网网关配额数量，可选值：
<li>VpcId - String - 所在VpcId</li>
                     * @param _filters 查询VPC下可创建的私网网关配额数量，可选值：
<li>VpcId - String - 所在VpcId</li>
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
                     * 获取偏移量，默认值为0。
                     * @return Offset 偏移量，默认值为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认值为0。
                     * @param _offset 偏移量，默认值为0。
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
                     * 获取返回数目，默认值为20。
                     * @return Limit 返回数目，默认值为20。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数目，默认值为20。
                     * @param _limit 返回数目，默认值为20。
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
                     * 查询VPC下可创建的私网网关配额数量，可选值：
<li>VpcId - String - 所在VpcId</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认值为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数目，默认值为20。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEPRIVATENATGATEWAYLIMITSREQUEST_H_
