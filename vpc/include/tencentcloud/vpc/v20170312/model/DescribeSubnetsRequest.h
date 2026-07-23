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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESUBNETSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESUBNETSREQUEST_H_

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
                * DescribeSubnets请求参数结构体
                */
                class DescribeSubnetsRequest : public AbstractModel
                {
                public:
                    DescribeSubnetsRequest();
                    ~DescribeSubnetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>子网实例ID查询。形如：subnet-pxir56ns。每次请求的实例的上限为100（该参数指定的子网是否返回，需要结合分页拉取参数Limit和Offset）。参数不支持同时指定SubnetIds和Filters。</p>
                     * @return SubnetIds <p>子网实例ID查询。形如：subnet-pxir56ns。每次请求的实例的上限为100（该参数指定的子网是否返回，需要结合分页拉取参数Limit和Offset）。参数不支持同时指定SubnetIds和Filters。</p>
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置<p>子网实例ID查询。形如：subnet-pxir56ns。每次请求的实例的上限为100（该参数指定的子网是否返回，需要结合分页拉取参数Limit和Offset）。参数不支持同时指定SubnetIds和Filters。</p>
                     * @param _subnetIds <p>子网实例ID查询。形如：subnet-pxir56ns。每次请求的实例的上限为100（该参数指定的子网是否返回，需要结合分页拉取参数Limit和Offset）。参数不支持同时指定SubnetIds和Filters。</p>
                     * 
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件，参数不支持同时指定SubnetIds和Filters。</p><li>subnet-id - String - （过滤条件）Subnet实例名称。</li><li>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。</li><li>cidr-block - String - （过滤条件）子网网段，形如: 192.168.1.0 。</li><li>is-default - Boolean - （过滤条件）是否是默认子网。</li><li>is-remote-vpc-snat - Boolean - （过滤条件）是否为VPC SNAT地址池子网。</li><li>subnet-name - String - （过滤条件）子网名称。</li><li>zone - String - （过滤条件）可用区。</li><li>tag-key - String -是否必填：否- （过滤条件）按照标签键进行过滤。</li><li>tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。使用请参考示例2。</li><li>cdc-id - String - 是否必填：否 - （过滤条件）按照cdc信息进行过滤。过滤出来制定cdc下的子网。</li><li>is-cdc-subnet - String - 是否必填：否 - （过滤条件）按照是否是cdc子网进行过滤。取值：“0”-非cdc子网，“1”--cdc子网</li><li>ipv6-cidr-block - String - （过滤条件）IPv6子网网段，形如: 2402:4e00:1717:8700::/64 。</li><li>isp-type  - String - （过滤条件）运营商类型，形如: BGP 。</li><li>address-type - String - （过滤条件）IPv6 Cidr 的类型，精确匹配。<code>GUA</code>(全球单播地址), <code>ULA</code>(唯一本地地址)。</li>
                     * @return Filters <p>过滤条件，参数不支持同时指定SubnetIds和Filters。</p><li>subnet-id - String - （过滤条件）Subnet实例名称。</li><li>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。</li><li>cidr-block - String - （过滤条件）子网网段，形如: 192.168.1.0 。</li><li>is-default - Boolean - （过滤条件）是否是默认子网。</li><li>is-remote-vpc-snat - Boolean - （过滤条件）是否为VPC SNAT地址池子网。</li><li>subnet-name - String - （过滤条件）子网名称。</li><li>zone - String - （过滤条件）可用区。</li><li>tag-key - String -是否必填：否- （过滤条件）按照标签键进行过滤。</li><li>tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。使用请参考示例2。</li><li>cdc-id - String - 是否必填：否 - （过滤条件）按照cdc信息进行过滤。过滤出来制定cdc下的子网。</li><li>is-cdc-subnet - String - 是否必填：否 - （过滤条件）按照是否是cdc子网进行过滤。取值：“0”-非cdc子网，“1”--cdc子网</li><li>ipv6-cidr-block - String - （过滤条件）IPv6子网网段，形如: 2402:4e00:1717:8700::/64 。</li><li>isp-type  - String - （过滤条件）运营商类型，形如: BGP 。</li><li>address-type - String - （过滤条件）IPv6 Cidr 的类型，精确匹配。<code>GUA</code>(全球单播地址), <code>ULA</code>(唯一本地地址)。</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件，参数不支持同时指定SubnetIds和Filters。</p><li>subnet-id - String - （过滤条件）Subnet实例名称。</li><li>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。</li><li>cidr-block - String - （过滤条件）子网网段，形如: 192.168.1.0 。</li><li>is-default - Boolean - （过滤条件）是否是默认子网。</li><li>is-remote-vpc-snat - Boolean - （过滤条件）是否为VPC SNAT地址池子网。</li><li>subnet-name - String - （过滤条件）子网名称。</li><li>zone - String - （过滤条件）可用区。</li><li>tag-key - String -是否必填：否- （过滤条件）按照标签键进行过滤。</li><li>tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。使用请参考示例2。</li><li>cdc-id - String - 是否必填：否 - （过滤条件）按照cdc信息进行过滤。过滤出来制定cdc下的子网。</li><li>is-cdc-subnet - String - 是否必填：否 - （过滤条件）按照是否是cdc子网进行过滤。取值：“0”-非cdc子网，“1”--cdc子网</li><li>ipv6-cidr-block - String - （过滤条件）IPv6子网网段，形如: 2402:4e00:1717:8700::/64 。</li><li>isp-type  - String - （过滤条件）运营商类型，形如: BGP 。</li><li>address-type - String - （过滤条件）IPv6 Cidr 的类型，精确匹配。<code>GUA</code>(全球单播地址), <code>ULA</code>(唯一本地地址)。</li>
                     * @param _filters <p>过滤条件，参数不支持同时指定SubnetIds和Filters。</p><li>subnet-id - String - （过滤条件）Subnet实例名称。</li><li>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。</li><li>cidr-block - String - （过滤条件）子网网段，形如: 192.168.1.0 。</li><li>is-default - Boolean - （过滤条件）是否是默认子网。</li><li>is-remote-vpc-snat - Boolean - （过滤条件）是否为VPC SNAT地址池子网。</li><li>subnet-name - String - （过滤条件）子网名称。</li><li>zone - String - （过滤条件）可用区。</li><li>tag-key - String -是否必填：否- （过滤条件）按照标签键进行过滤。</li><li>tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。使用请参考示例2。</li><li>cdc-id - String - 是否必填：否 - （过滤条件）按照cdc信息进行过滤。过滤出来制定cdc下的子网。</li><li>is-cdc-subnet - String - 是否必填：否 - （过滤条件）按照是否是cdc子网进行过滤。取值：“0”-非cdc子网，“1”--cdc子网</li><li>ipv6-cidr-block - String - （过滤条件）IPv6子网网段，形如: 2402:4e00:1717:8700::/64 。</li><li>isp-type  - String - （过滤条件）运营商类型，形如: BGP 。</li><li>address-type - String - （过滤条件）IPv6 Cidr 的类型，精确匹配。<code>GUA</code>(全球单播地址), <code>ULA</code>(唯一本地地址)。</li>
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
                     * 获取<p>偏移量，默认为0。</p>
                     * @return Offset <p>偏移量，默认为0。</p>
                     * 
                     */
                    std::string GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认为0。</p>
                     * @param _offset <p>偏移量，默认为0。</p>
                     * 
                     */
                    void SetOffset(const std::string& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>返回数量，默认为20，最大值为100。</p>
                     * @return Limit <p>返回数量，默认为20，最大值为100。</p>
                     * 
                     */
                    std::string GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认为20，最大值为100。</p>
                     * @param _limit <p>返回数量，默认为20，最大值为100。</p>
                     * 
                     */
                    void SetLimit(const std::string& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>每次调用返回的最大结果数。如果查询返回的时候有NextToken返回，您可以使用NextToken值获取更多页结果， 当NextToke返回空或者返回的结果数量小于MaxResults时，表示没有更多数据了。允许的最大页面大小为 100。</p>
                     * @return MaxResults <p>每次调用返回的最大结果数。如果查询返回的时候有NextToken返回，您可以使用NextToken值获取更多页结果， 当NextToke返回空或者返回的结果数量小于MaxResults时，表示没有更多数据了。允许的最大页面大小为 100。</p>
                     * 
                     */
                    uint64_t GetMaxResults() const;

                    /**
                     * 设置<p>每次调用返回的最大结果数。如果查询返回的时候有NextToken返回，您可以使用NextToken值获取更多页结果， 当NextToke返回空或者返回的结果数量小于MaxResults时，表示没有更多数据了。允许的最大页面大小为 100。</p>
                     * @param _maxResults <p>每次调用返回的最大结果数。如果查询返回的时候有NextToken返回，您可以使用NextToken值获取更多页结果， 当NextToke返回空或者返回的结果数量小于MaxResults时，表示没有更多数据了。允许的最大页面大小为 100。</p>
                     * 
                     */
                    void SetMaxResults(const uint64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取<p>如果NextToken返回非空字符串 ，表示还有更多可用结果。 NextToken是每个页面唯一的分页令牌。使用返回的令牌再次调用以检索下一页。需要保持所有其他参数不变。每个分页令牌在 24 小时后过期。</p>
                     * @return NextToken <p>如果NextToken返回非空字符串 ，表示还有更多可用结果。 NextToken是每个页面唯一的分页令牌。使用返回的令牌再次调用以检索下一页。需要保持所有其他参数不变。每个分页令牌在 24 小时后过期。</p>
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置<p>如果NextToken返回非空字符串 ，表示还有更多可用结果。 NextToken是每个页面唯一的分页令牌。使用返回的令牌再次调用以检索下一页。需要保持所有其他参数不变。每个分页令牌在 24 小时后过期。</p>
                     * @param _nextToken <p>如果NextToken返回非空字符串 ，表示还有更多可用结果。 NextToken是每个页面唯一的分页令牌。使用返回的令牌再次调用以检索下一页。需要保持所有其他参数不变。每个分页令牌在 24 小时后过期。</p>
                     * 
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                private:

                    /**
                     * <p>子网实例ID查询。形如：subnet-pxir56ns。每次请求的实例的上限为100（该参数指定的子网是否返回，需要结合分页拉取参数Limit和Offset）。参数不支持同时指定SubnetIds和Filters。</p>
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * <p>过滤条件，参数不支持同时指定SubnetIds和Filters。</p><li>subnet-id - String - （过滤条件）Subnet实例名称。</li><li>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。</li><li>cidr-block - String - （过滤条件）子网网段，形如: 192.168.1.0 。</li><li>is-default - Boolean - （过滤条件）是否是默认子网。</li><li>is-remote-vpc-snat - Boolean - （过滤条件）是否为VPC SNAT地址池子网。</li><li>subnet-name - String - （过滤条件）子网名称。</li><li>zone - String - （过滤条件）可用区。</li><li>tag-key - String -是否必填：否- （过滤条件）按照标签键进行过滤。</li><li>tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。使用请参考示例2。</li><li>cdc-id - String - 是否必填：否 - （过滤条件）按照cdc信息进行过滤。过滤出来制定cdc下的子网。</li><li>is-cdc-subnet - String - 是否必填：否 - （过滤条件）按照是否是cdc子网进行过滤。取值：“0”-非cdc子网，“1”--cdc子网</li><li>ipv6-cidr-block - String - （过滤条件）IPv6子网网段，形如: 2402:4e00:1717:8700::/64 。</li><li>isp-type  - String - （过滤条件）运营商类型，形如: BGP 。</li><li>address-type - String - （过滤条件）IPv6 Cidr 的类型，精确匹配。<code>GUA</code>(全球单播地址), <code>ULA</code>(唯一本地地址)。</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>偏移量，默认为0。</p>
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回数量，默认为20，最大值为100。</p>
                     */
                    std::string m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>每次调用返回的最大结果数。如果查询返回的时候有NextToken返回，您可以使用NextToken值获取更多页结果， 当NextToke返回空或者返回的结果数量小于MaxResults时，表示没有更多数据了。允许的最大页面大小为 100。</p>
                     */
                    uint64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * <p>如果NextToken返回非空字符串 ，表示还有更多可用结果。 NextToken是每个页面唯一的分页令牌。使用返回的令牌再次调用以检索下一页。需要保持所有其他参数不变。每个分页令牌在 24 小时后过期。</p>
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESUBNETSREQUEST_H_
