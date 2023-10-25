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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENETWORKACLSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENETWORKACLSREQUEST_H_

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
                * DescribeNetworkAcls请求参数结构体
                */
                class DescribeNetworkAclsRequest : public AbstractModel
                {
                public:
                    DescribeNetworkAclsRequest();
                    ~DescribeNetworkAclsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件，参数不支持同时指定NetworkAclIds和Filters。
<li>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-12345678。</li>
<li>network-acl-id - String - （过滤条件）网络ACL实例ID，形如：acl-12345678。</li>
<li>network-acl-name - String - （过滤条件）网络ACL实例名称。</li>
                     * @return Filters 过滤条件，参数不支持同时指定NetworkAclIds和Filters。
<li>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-12345678。</li>
<li>network-acl-id - String - （过滤条件）网络ACL实例ID，形如：acl-12345678。</li>
<li>network-acl-name - String - （过滤条件）网络ACL实例名称。</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，参数不支持同时指定NetworkAclIds和Filters。
<li>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-12345678。</li>
<li>network-acl-id - String - （过滤条件）网络ACL实例ID，形如：acl-12345678。</li>
<li>network-acl-name - String - （过滤条件）网络ACL实例名称。</li>
                     * @param _filters 过滤条件，参数不支持同时指定NetworkAclIds和Filters。
<li>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-12345678。</li>
<li>network-acl-id - String - （过滤条件）网络ACL实例ID，形如：acl-12345678。</li>
<li>network-acl-name - String - （过滤条件）网络ACL实例名称。</li>
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
                     * 获取网络ACL实例ID数组。形如：[acl-12345678]。每次请求的实例的上限为100。参数不支持同时指定NetworkAclIds和Filters。
                     * @return NetworkAclIds 网络ACL实例ID数组。形如：[acl-12345678]。每次请求的实例的上限为100。参数不支持同时指定NetworkAclIds和Filters。
                     * 
                     */
                    std::vector<std::string> GetNetworkAclIds() const;

                    /**
                     * 设置网络ACL实例ID数组。形如：[acl-12345678]。每次请求的实例的上限为100。参数不支持同时指定NetworkAclIds和Filters。
                     * @param _networkAclIds 网络ACL实例ID数组。形如：[acl-12345678]。每次请求的实例的上限为100。参数不支持同时指定NetworkAclIds和Filters。
                     * 
                     */
                    void SetNetworkAclIds(const std::vector<std::string>& _networkAclIds);

                    /**
                     * 判断参数 NetworkAclIds 是否已赋值
                     * @return NetworkAclIds 是否已赋值
                     * 
                     */
                    bool NetworkAclIdsHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
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
                     * 获取返回数量，默认为20，最小值为1，最大值为100。
                     * @return Limit 返回数量，默认为20，最小值为1，最大值为100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最小值为1，最大值为100。
                     * @param _limit 返回数量，默认为20，最小值为1，最大值为100。
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
                     * 获取排序字段。支持：NetworkAclId,NetworkAclName,CreatedTime
                     * @return OrderField 排序字段。支持：NetworkAclId,NetworkAclName,CreatedTime
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置排序字段。支持：NetworkAclId,NetworkAclName,CreatedTime
                     * @param _orderField 排序字段。支持：NetworkAclId,NetworkAclName,CreatedTime
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取排序方法。顺序：ASC，倒序：DESC。
                     * @return OrderDirection 排序方法。顺序：ASC，倒序：DESC。
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置排序方法。顺序：ASC，倒序：DESC。
                     * @param _orderDirection 排序方法。顺序：ASC，倒序：DESC。
                     * 
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     * 
                     */
                    bool OrderDirectionHasBeenSet() const;

                private:

                    /**
                     * 过滤条件，参数不支持同时指定NetworkAclIds和Filters。
<li>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-12345678。</li>
<li>network-acl-id - String - （过滤条件）网络ACL实例ID，形如：acl-12345678。</li>
<li>network-acl-name - String - （过滤条件）网络ACL实例名称。</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 网络ACL实例ID数组。形如：[acl-12345678]。每次请求的实例的上限为100。参数不支持同时指定NetworkAclIds和Filters。
                     */
                    std::vector<std::string> m_networkAclIds;
                    bool m_networkAclIdsHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最小值为1，最大值为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序字段。支持：NetworkAclId,NetworkAclName,CreatedTime
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 排序方法。顺序：ASC，倒序：DESC。
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENETWORKACLSREQUEST_H_
