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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBERESOURCESREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBERESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/Filter.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeResources请求参数结构体
                */
                class DescribeResourcesRequest : public AbstractModel
                {
                public:
                    DescribeResourcesRequest();
                    ~DescribeResourcesRequest() = default;
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

                    /**
                     * 获取查询可用区资源列表条件，详细的过滤条件如下：
- master-zone
按照【地域可用区】进行过滤，例如：ap-guangzhou-2。
类型：String
必选：否
- ip-version
按照【IP 类型】进行过滤，例如：IPv4。
类型：String
必选：否
可选项：IPv4、IPv6、IPv6_Nat
- isp
按照【ISP 类型】进行过滤，例如：BGP。
类型：String
必选：否
可选项：BGP、CMCC（中国移动）、CUCC（中国联通）、CTCC（中国电信）、BGP_PRO、INTERNAL（内网）
                     * @return Filters 查询可用区资源列表条件，详细的过滤条件如下：
- master-zone
按照【地域可用区】进行过滤，例如：ap-guangzhou-2。
类型：String
必选：否
- ip-version
按照【IP 类型】进行过滤，例如：IPv4。
类型：String
必选：否
可选项：IPv4、IPv6、IPv6_Nat
- isp
按照【ISP 类型】进行过滤，例如：BGP。
类型：String
必选：否
可选项：BGP、CMCC（中国移动）、CUCC（中国联通）、CTCC（中国电信）、BGP_PRO、INTERNAL（内网）
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置查询可用区资源列表条件，详细的过滤条件如下：
- master-zone
按照【地域可用区】进行过滤，例如：ap-guangzhou-2。
类型：String
必选：否
- ip-version
按照【IP 类型】进行过滤，例如：IPv4。
类型：String
必选：否
可选项：IPv4、IPv6、IPv6_Nat
- isp
按照【ISP 类型】进行过滤，例如：BGP。
类型：String
必选：否
可选项：BGP、CMCC（中国移动）、CUCC（中国联通）、CTCC（中国电信）、BGP_PRO、INTERNAL（内网）
                     * @param _filters 查询可用区资源列表条件，详细的过滤条件如下：
- master-zone
按照【地域可用区】进行过滤，例如：ap-guangzhou-2。
类型：String
必选：否
- ip-version
按照【IP 类型】进行过滤，例如：IPv4。
类型：String
必选：否
可选项：IPv4、IPv6、IPv6_Nat
- isp
按照【ISP 类型】进行过滤，例如：BGP。
类型：String
必选：否
可选项：BGP、CMCC（中国移动）、CUCC（中国联通）、CTCC（中国电信）、BGP_PRO、INTERNAL（内网）
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
                     * 返回可用区资源列表数目，默认20，最大值100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 返回可用区资源列表起始偏移量，默认0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询可用区资源列表条件，详细的过滤条件如下：
- master-zone
按照【地域可用区】进行过滤，例如：ap-guangzhou-2。
类型：String
必选：否
- ip-version
按照【IP 类型】进行过滤，例如：IPv4。
类型：String
必选：否
可选项：IPv4、IPv6、IPv6_Nat
- isp
按照【ISP 类型】进行过滤，例如：BGP。
类型：String
必选：否
可选项：BGP、CMCC（中国移动）、CUCC（中国联通）、CTCC（中国电信）、BGP_PRO、INTERNAL（内网）
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBERESOURCESREQUEST_H_
