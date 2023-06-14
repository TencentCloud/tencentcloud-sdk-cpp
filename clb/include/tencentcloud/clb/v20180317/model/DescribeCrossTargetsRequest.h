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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECROSSTARGETSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECROSSTARGETSREQUEST_H_

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
                * DescribeCrossTargets请求参数结构体
                */
                class DescribeCrossTargetsRequest : public AbstractModel
                {
                public:
                    DescribeCrossTargetsRequest();
                    ~DescribeCrossTargetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取返回后端服务列表数目，默认20，最大值100。
                     * @return Limit 返回后端服务列表数目，默认20，最大值100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回后端服务列表数目，默认20，最大值100。
                     * @param _limit 返回后端服务列表数目，默认20，最大值100。
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
                     * 获取返回后端服务列表起始偏移量，默认0。
                     * @return Offset 返回后端服务列表起始偏移量，默认0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置返回后端服务列表起始偏移量，默认0。
                     * @param _offset 返回后端服务列表起始偏移量，默认0。
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
                     * 获取查询跨域2.0版本云联网后端子机和网卡服务列表条件，详细的过滤条件如下：
<li> vpc-id - String - 是否必填：否 - （过滤条件）按照 本地私有网络ID，即负载均衡的VpcId 过滤，如："vpc-12345678"。</li>
<li> ip - String - 是否必填：否 - （过滤条件）按照 后端服务ip 过滤，如："192.168.0.1"。</li>
<li> listener-id - String - 是否必填：否 - （过滤条件）按照 监听器ID 过滤，如："lbl-12345678"。</li>
<li> location-id - String - 是否必填：否 - （过滤条件）按照 七层监听器规则ID 过滤，如："loc-12345678"。</li>
                     * @return Filters 查询跨域2.0版本云联网后端子机和网卡服务列表条件，详细的过滤条件如下：
<li> vpc-id - String - 是否必填：否 - （过滤条件）按照 本地私有网络ID，即负载均衡的VpcId 过滤，如："vpc-12345678"。</li>
<li> ip - String - 是否必填：否 - （过滤条件）按照 后端服务ip 过滤，如："192.168.0.1"。</li>
<li> listener-id - String - 是否必填：否 - （过滤条件）按照 监听器ID 过滤，如："lbl-12345678"。</li>
<li> location-id - String - 是否必填：否 - （过滤条件）按照 七层监听器规则ID 过滤，如："loc-12345678"。</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置查询跨域2.0版本云联网后端子机和网卡服务列表条件，详细的过滤条件如下：
<li> vpc-id - String - 是否必填：否 - （过滤条件）按照 本地私有网络ID，即负载均衡的VpcId 过滤，如："vpc-12345678"。</li>
<li> ip - String - 是否必填：否 - （过滤条件）按照 后端服务ip 过滤，如："192.168.0.1"。</li>
<li> listener-id - String - 是否必填：否 - （过滤条件）按照 监听器ID 过滤，如："lbl-12345678"。</li>
<li> location-id - String - 是否必填：否 - （过滤条件）按照 七层监听器规则ID 过滤，如："loc-12345678"。</li>
                     * @param _filters 查询跨域2.0版本云联网后端子机和网卡服务列表条件，详细的过滤条件如下：
<li> vpc-id - String - 是否必填：否 - （过滤条件）按照 本地私有网络ID，即负载均衡的VpcId 过滤，如："vpc-12345678"。</li>
<li> ip - String - 是否必填：否 - （过滤条件）按照 后端服务ip 过滤，如："192.168.0.1"。</li>
<li> listener-id - String - 是否必填：否 - （过滤条件）按照 监听器ID 过滤，如："lbl-12345678"。</li>
<li> location-id - String - 是否必填：否 - （过滤条件）按照 七层监听器规则ID 过滤，如："loc-12345678"。</li>
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
                     * 返回后端服务列表数目，默认20，最大值100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 返回后端服务列表起始偏移量，默认0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询跨域2.0版本云联网后端子机和网卡服务列表条件，详细的过滤条件如下：
<li> vpc-id - String - 是否必填：否 - （过滤条件）按照 本地私有网络ID，即负载均衡的VpcId 过滤，如："vpc-12345678"。</li>
<li> ip - String - 是否必填：否 - （过滤条件）按照 后端服务ip 过滤，如："192.168.0.1"。</li>
<li> listener-id - String - 是否必填：否 - （过滤条件）按照 监听器ID 过滤，如："lbl-12345678"。</li>
<li> location-id - String - 是否必填：否 - （过滤条件）按照 七层监听器规则ID 过滤，如："loc-12345678"。</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECROSSTARGETSREQUEST_H_
