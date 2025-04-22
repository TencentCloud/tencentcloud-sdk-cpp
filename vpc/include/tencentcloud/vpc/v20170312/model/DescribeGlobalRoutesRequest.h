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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEGLOBALROUTESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEGLOBALROUTESREQUEST_H_

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
                * DescribeGlobalRoutes请求参数结构体
                */
                class DescribeGlobalRoutesRequest : public AbstractModel
                {
                public:
                    DescribeGlobalRoutesRequest();
                    ~DescribeGlobalRoutesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件。
<li>global-route-id - String - （过滤条件）如全局路由唯一 Id，形如：gr-bmenrwu2。</li>
<li>vpc-id - String - （过滤条件）VPC唯一Id， 形如： vpc-mcqaoy0f。</li>
<li>gateway-id - String - （过滤条件）下一跳对象。</li>
<li>gateway-type - String -  是否必填：否 - （过滤条件）按下一跳类型进行过滤。支持 NORMAL_CVM
</li>
<li>cdc-id - String - （过滤条件）CDC实例ID，形如：cluster-gbo27yc4。</li>
<li>description - String - （过滤条件）描述。</li>
<li>dest-cidr - String - （过滤条件）Ipv4目标网段。</li>
<li>subnet-route-algorithm - String - （过滤条件）支持的 ECMP算法有：

   - ECMP_QUINTUPLE_HASH：五元组hash
   - ECMP_SOURCE_DESTINATION_IP_HASH：源和目的IP hash
   - ECMP_DESTINATION_IP_HASH：目的IP hash
   - ECMP_SOURCE_IP_HASH：源IP hash
</li>

                     * @return Filters 过滤条件。
<li>global-route-id - String - （过滤条件）如全局路由唯一 Id，形如：gr-bmenrwu2。</li>
<li>vpc-id - String - （过滤条件）VPC唯一Id， 形如： vpc-mcqaoy0f。</li>
<li>gateway-id - String - （过滤条件）下一跳对象。</li>
<li>gateway-type - String -  是否必填：否 - （过滤条件）按下一跳类型进行过滤。支持 NORMAL_CVM
</li>
<li>cdc-id - String - （过滤条件）CDC实例ID，形如：cluster-gbo27yc4。</li>
<li>description - String - （过滤条件）描述。</li>
<li>dest-cidr - String - （过滤条件）Ipv4目标网段。</li>
<li>subnet-route-algorithm - String - （过滤条件）支持的 ECMP算法有：

   - ECMP_QUINTUPLE_HASH：五元组hash
   - ECMP_SOURCE_DESTINATION_IP_HASH：源和目的IP hash
   - ECMP_DESTINATION_IP_HASH：目的IP hash
   - ECMP_SOURCE_IP_HASH：源IP hash
</li>

                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li>global-route-id - String - （过滤条件）如全局路由唯一 Id，形如：gr-bmenrwu2。</li>
<li>vpc-id - String - （过滤条件）VPC唯一Id， 形如： vpc-mcqaoy0f。</li>
<li>gateway-id - String - （过滤条件）下一跳对象。</li>
<li>gateway-type - String -  是否必填：否 - （过滤条件）按下一跳类型进行过滤。支持 NORMAL_CVM
</li>
<li>cdc-id - String - （过滤条件）CDC实例ID，形如：cluster-gbo27yc4。</li>
<li>description - String - （过滤条件）描述。</li>
<li>dest-cidr - String - （过滤条件）Ipv4目标网段。</li>
<li>subnet-route-algorithm - String - （过滤条件）支持的 ECMP算法有：

   - ECMP_QUINTUPLE_HASH：五元组hash
   - ECMP_SOURCE_DESTINATION_IP_HASH：源和目的IP hash
   - ECMP_DESTINATION_IP_HASH：目的IP hash
   - ECMP_SOURCE_IP_HASH：源IP hash
</li>

                     * @param _filters 过滤条件。
<li>global-route-id - String - （过滤条件）如全局路由唯一 Id，形如：gr-bmenrwu2。</li>
<li>vpc-id - String - （过滤条件）VPC唯一Id， 形如： vpc-mcqaoy0f。</li>
<li>gateway-id - String - （过滤条件）下一跳对象。</li>
<li>gateway-type - String -  是否必填：否 - （过滤条件）按下一跳类型进行过滤。支持 NORMAL_CVM
</li>
<li>cdc-id - String - （过滤条件）CDC实例ID，形如：cluster-gbo27yc4。</li>
<li>description - String - （过滤条件）描述。</li>
<li>dest-cidr - String - （过滤条件）Ipv4目标网段。</li>
<li>subnet-route-algorithm - String - （过滤条件）支持的 ECMP算法有：

   - ECMP_QUINTUPLE_HASH：五元组hash
   - ECMP_SOURCE_DESTINATION_IP_HASH：源和目的IP hash
   - ECMP_DESTINATION_IP_HASH：目的IP hash
   - ECMP_SOURCE_IP_HASH：源IP hash
</li>

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
                     * 获取偏移量。
                     * @return Offset 偏移量。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量。
                     * @param _offset 偏移量。
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
                     * 获取请求对象个数。
                     * @return Limit 请求对象个数。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置请求对象个数。
                     * @param _limit 请求对象个数。
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
                     * 获取全局路由唯一Id列表。
                     * @return GlobalRouteIds 全局路由唯一Id列表。
                     * 
                     */
                    std::vector<std::string> GetGlobalRouteIds() const;

                    /**
                     * 设置全局路由唯一Id列表。
                     * @param _globalRouteIds 全局路由唯一Id列表。
                     * 
                     */
                    void SetGlobalRouteIds(const std::vector<std::string>& _globalRouteIds);

                    /**
                     * 判断参数 GlobalRouteIds 是否已赋值
                     * @return GlobalRouteIds 是否已赋值
                     * 
                     */
                    bool GlobalRouteIdsHasBeenSet() const;

                private:

                    /**
                     * 过滤条件。
<li>global-route-id - String - （过滤条件）如全局路由唯一 Id，形如：gr-bmenrwu2。</li>
<li>vpc-id - String - （过滤条件）VPC唯一Id， 形如： vpc-mcqaoy0f。</li>
<li>gateway-id - String - （过滤条件）下一跳对象。</li>
<li>gateway-type - String -  是否必填：否 - （过滤条件）按下一跳类型进行过滤。支持 NORMAL_CVM
</li>
<li>cdc-id - String - （过滤条件）CDC实例ID，形如：cluster-gbo27yc4。</li>
<li>description - String - （过滤条件）描述。</li>
<li>dest-cidr - String - （过滤条件）Ipv4目标网段。</li>
<li>subnet-route-algorithm - String - （过滤条件）支持的 ECMP算法有：

   - ECMP_QUINTUPLE_HASH：五元组hash
   - ECMP_SOURCE_DESTINATION_IP_HASH：源和目的IP hash
   - ECMP_DESTINATION_IP_HASH：目的IP hash
   - ECMP_SOURCE_IP_HASH：源IP hash
</li>

                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 请求对象个数。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 全局路由唯一Id列表。
                     */
                    std::vector<std::string> m_globalRouteIds;
                    bool m_globalRouteIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEGLOBALROUTESREQUEST_H_
