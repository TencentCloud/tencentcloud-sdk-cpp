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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_DESCRIBEGATEWAYLOADBALANCERSRESOURCESREQUEST_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_DESCRIBEGATEWAYLOADBALANCERSRESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gwlb
    {
        namespace V20240906
        {
            namespace Model
            {
                /**
                * DescribeGatewayLoadBalancersResources请求参数结构体
                */
                class DescribeGatewayLoadBalancersResourcesRequest : public AbstractModel
                {
                public:
                    DescribeGatewayLoadBalancersResourcesRequest();
                    ~DescribeGatewayLoadBalancersResourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取返回可用区资源列表数目，默认20，最大值100。
                     * @return Limit 返回可用区资源列表数目，默认20，最大值100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回可用区资源列表数目，默认20，最大值100。
                     * @param _limit 返回可用区资源列表数目，默认20，最大值100。
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
                     * 获取返回可用区资源列表起始偏移量，默认0。
                     * @return Offset 返回可用区资源列表起始偏移量，默认0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置返回可用区资源列表起始偏移量，默认0。
                     * @param _offset 返回可用区资源列表起始偏移量，默认0。
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
                     * 返回可用区资源列表数目，默认20，最大值100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 返回可用区资源列表起始偏移量，默认0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_DESCRIBEGATEWAYLOADBALANCERSRESOURCESREQUEST_H_
