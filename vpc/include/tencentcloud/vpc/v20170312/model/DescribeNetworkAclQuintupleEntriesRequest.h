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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENETWORKACLQUINTUPLEENTRIESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENETWORKACLQUINTUPLEENTRIESREQUEST_H_

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
                * DescribeNetworkAclQuintupleEntries请求参数结构体
                */
                class DescribeNetworkAclQuintupleEntriesRequest : public AbstractModel
                {
                public:
                    DescribeNetworkAclQuintupleEntriesRequest();
                    ~DescribeNetworkAclQuintupleEntriesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网络ACL实例ID。形如：acl-12345678。
                     * @return NetworkAclId 网络ACL实例ID。形如：acl-12345678。
                     * 
                     */
                    std::string GetNetworkAclId() const;

                    /**
                     * 设置网络ACL实例ID。形如：acl-12345678。
                     * @param _networkAclId 网络ACL实例ID。形如：acl-12345678。
                     * 
                     */
                    void SetNetworkAclId(const std::string& _networkAclId);

                    /**
                     * 判断参数 NetworkAclId 是否已赋值
                     * @return NetworkAclId 是否已赋值
                     * 
                     */
                    bool NetworkAclIdHasBeenSet() const;

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
                     * 获取过滤条件，参数不支持同时指定`NetworkAclId`和`Filters`。
<li>protocol - String - 协议，形如：`TCP`。</li>
<li>description - String - 描述。</li>
<li>destination-cidr - String - 目的CIDR， 形如：'192.168.0.0/24'。</li>
<li>source-cidr- String - 源CIDR， 形如：'192.168.0.0/24'。</li>
<li>action - String - 动作，形如ACCEPT或DROP。</li>
<li>network-acl-quintuple-entry-id - String - 五元组唯一ID，形如：'acli45-ahnu4rv5'。</li>
<li>network-acl-direction - String - 方向，形如：'INGRESS'或'EGRESS'。</li>
                     * @return Filters 过滤条件，参数不支持同时指定`NetworkAclId`和`Filters`。
<li>protocol - String - 协议，形如：`TCP`。</li>
<li>description - String - 描述。</li>
<li>destination-cidr - String - 目的CIDR， 形如：'192.168.0.0/24'。</li>
<li>source-cidr- String - 源CIDR， 形如：'192.168.0.0/24'。</li>
<li>action - String - 动作，形如ACCEPT或DROP。</li>
<li>network-acl-quintuple-entry-id - String - 五元组唯一ID，形如：'acli45-ahnu4rv5'。</li>
<li>network-acl-direction - String - 方向，形如：'INGRESS'或'EGRESS'。</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，参数不支持同时指定`NetworkAclId`和`Filters`。
<li>protocol - String - 协议，形如：`TCP`。</li>
<li>description - String - 描述。</li>
<li>destination-cidr - String - 目的CIDR， 形如：'192.168.0.0/24'。</li>
<li>source-cidr- String - 源CIDR， 形如：'192.168.0.0/24'。</li>
<li>action - String - 动作，形如ACCEPT或DROP。</li>
<li>network-acl-quintuple-entry-id - String - 五元组唯一ID，形如：'acli45-ahnu4rv5'。</li>
<li>network-acl-direction - String - 方向，形如：'INGRESS'或'EGRESS'。</li>
                     * @param _filters 过滤条件，参数不支持同时指定`NetworkAclId`和`Filters`。
<li>protocol - String - 协议，形如：`TCP`。</li>
<li>description - String - 描述。</li>
<li>destination-cidr - String - 目的CIDR， 形如：'192.168.0.0/24'。</li>
<li>source-cidr- String - 源CIDR， 形如：'192.168.0.0/24'。</li>
<li>action - String - 动作，形如ACCEPT或DROP。</li>
<li>network-acl-quintuple-entry-id - String - 五元组唯一ID，形如：'acli45-ahnu4rv5'。</li>
<li>network-acl-direction - String - 方向，形如：'INGRESS'或'EGRESS'。</li>
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
                     * 网络ACL实例ID。形如：acl-12345678。
                     */
                    std::string m_networkAclId;
                    bool m_networkAclIdHasBeenSet;

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
                     * 过滤条件，参数不支持同时指定`NetworkAclId`和`Filters`。
<li>protocol - String - 协议，形如：`TCP`。</li>
<li>description - String - 描述。</li>
<li>destination-cidr - String - 目的CIDR， 形如：'192.168.0.0/24'。</li>
<li>source-cidr- String - 源CIDR， 形如：'192.168.0.0/24'。</li>
<li>action - String - 动作，形如ACCEPT或DROP。</li>
<li>network-acl-quintuple-entry-id - String - 五元组唯一ID，形如：'acli45-ahnu4rv5'。</li>
<li>network-acl-direction - String - 方向，形如：'INGRESS'或'EGRESS'。</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENETWORKACLQUINTUPLEENTRIESREQUEST_H_
