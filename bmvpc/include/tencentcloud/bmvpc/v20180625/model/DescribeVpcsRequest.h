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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_DESCRIBEVPCSREQUEST_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_DESCRIBEVPCSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmvpc/v20180625/model/Filter.h>


namespace TencentCloud
{
    namespace Bmvpc
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * DescribeVpcs请求参数结构体
                */
                class DescribeVpcsRequest : public AbstractModel
                {
                public:
                    DescribeVpcsRequest();
                    ~DescribeVpcsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC实例ID。形如：vpc-f49l6u0z。每次请求的实例的上限为100。参数不支持同时指定VpcIds和Filters。
                     * @return VpcIds VPC实例ID。形如：vpc-f49l6u0z。每次请求的实例的上限为100。参数不支持同时指定VpcIds和Filters。
                     * 
                     */
                    std::vector<std::string> GetVpcIds() const;

                    /**
                     * 设置VPC实例ID。形如：vpc-f49l6u0z。每次请求的实例的上限为100。参数不支持同时指定VpcIds和Filters。
                     * @param _vpcIds VPC实例ID。形如：vpc-f49l6u0z。每次请求的实例的上限为100。参数不支持同时指定VpcIds和Filters。
                     * 
                     */
                    void SetVpcIds(const std::vector<std::string>& _vpcIds);

                    /**
                     * 判断参数 VpcIds 是否已赋值
                     * @return VpcIds 是否已赋值
                     * 
                     */
                    bool VpcIdsHasBeenSet() const;

                    /**
                     * 获取过滤条件，参数不支持同时指定VpcIds和Filters。
vpc-name - String - （过滤条件）VPC实例名称。
vpc-id - String - （过滤条件）VPC实例ID形如：vpc-f49l6u0z。
cidr-block - String - （过滤条件）vpc的cidr。
state - String - （过滤条件）VPC状态。(pending | available).
zone -  String - （过滤条件）VPC的可用区。
                     * @return Filters 过滤条件，参数不支持同时指定VpcIds和Filters。
vpc-name - String - （过滤条件）VPC实例名称。
vpc-id - String - （过滤条件）VPC实例ID形如：vpc-f49l6u0z。
cidr-block - String - （过滤条件）vpc的cidr。
state - String - （过滤条件）VPC状态。(pending | available).
zone -  String - （过滤条件）VPC的可用区。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，参数不支持同时指定VpcIds和Filters。
vpc-name - String - （过滤条件）VPC实例名称。
vpc-id - String - （过滤条件）VPC实例ID形如：vpc-f49l6u0z。
cidr-block - String - （过滤条件）vpc的cidr。
state - String - （过滤条件）VPC状态。(pending | available).
zone -  String - （过滤条件）VPC的可用区。
                     * @param _filters 过滤条件，参数不支持同时指定VpcIds和Filters。
vpc-name - String - （过滤条件）VPC实例名称。
vpc-id - String - （过滤条件）VPC实例ID形如：vpc-f49l6u0z。
cidr-block - String - （过滤条件）vpc的cidr。
state - String - （过滤条件）VPC状态。(pending | available).
zone -  String - （过滤条件）VPC的可用区。
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
                     * 获取初始行的偏移量，默认为0。
                     * @return Offset 初始行的偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置初始行的偏移量，默认为0。
                     * @param _offset 初始行的偏移量，默认为0。
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
                     * 获取每页行数，默认为20。
                     * @return Limit 每页行数，默认为20。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页行数，默认为20。
                     * @param _limit 每页行数，默认为20。
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
                     * VPC实例ID。形如：vpc-f49l6u0z。每次请求的实例的上限为100。参数不支持同时指定VpcIds和Filters。
                     */
                    std::vector<std::string> m_vpcIds;
                    bool m_vpcIdsHasBeenSet;

                    /**
                     * 过滤条件，参数不支持同时指定VpcIds和Filters。
vpc-name - String - （过滤条件）VPC实例名称。
vpc-id - String - （过滤条件）VPC实例ID形如：vpc-f49l6u0z。
cidr-block - String - （过滤条件）vpc的cidr。
state - String - （过滤条件）VPC状态。(pending | available).
zone -  String - （过滤条件）VPC的可用区。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 初始行的偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页行数，默认为20。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_DESCRIBEVPCSREQUEST_H_
