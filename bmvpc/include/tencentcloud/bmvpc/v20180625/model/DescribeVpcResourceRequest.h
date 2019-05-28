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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_DESCRIBEVPCRESOURCEREQUEST_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_DESCRIBEVPCRESOURCEREQUEST_H_

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
                * DescribeVpcResource请求参数结构体
                */
                class DescribeVpcResourceRequest : public AbstractModel
                {
                public:
                    DescribeVpcResourceRequest();
                    ~DescribeVpcResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取私有网络实例ID
                     * @return VpcIds 私有网络实例ID
                     */
                    std::vector<std::string> GetVpcIds() const;

                    /**
                     * 设置私有网络实例ID
                     * @param VpcIds 私有网络实例ID
                     */
                    void SetVpcIds(const std::vector<std::string>& _vpcIds);

                    /**
                     * 判断参数 VpcIds 是否已赋值
                     * @return VpcIds 是否已赋值
                     */
                    bool VpcIdsHasBeenSet() const;

                    /**
                     * 获取过滤条件，参数不支持同时指定SubnetIds和Filters。
vpc-id - String - （过滤条件）私有网络实例ID，形如：vpc-f49l6u0z。
vpc-name - String - （过滤条件）私有网络名称。
zone - String - （过滤条件）可用区。
state - String - （过滤条件）VPC状态。
                     * @return Filters 过滤条件，参数不支持同时指定SubnetIds和Filters。
vpc-id - String - （过滤条件）私有网络实例ID，形如：vpc-f49l6u0z。
vpc-name - String - （过滤条件）私有网络名称。
zone - String - （过滤条件）可用区。
state - String - （过滤条件）VPC状态。
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，参数不支持同时指定SubnetIds和Filters。
vpc-id - String - （过滤条件）私有网络实例ID，形如：vpc-f49l6u0z。
vpc-name - String - （过滤条件）私有网络名称。
zone - String - （过滤条件）可用区。
state - String - （过滤条件）VPC状态。
                     * @param Filters 过滤条件，参数不支持同时指定SubnetIds和Filters。
vpc-id - String - （过滤条件）私有网络实例ID，形如：vpc-f49l6u0z。
vpc-name - String - （过滤条件）私有网络名称。
zone - String - （过滤条件）可用区。
state - String - （过滤条件）VPC状态。
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param Offset 偏移量
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量
                     * @return Limit 返回数量
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量
                     * @param Limit 返回数量
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 私有网络实例ID
                     */
                    std::vector<std::string> m_vpcIds;
                    bool m_vpcIdsHasBeenSet;

                    /**
                     * 过滤条件，参数不支持同时指定SubnetIds和Filters。
vpc-id - String - （过滤条件）私有网络实例ID，形如：vpc-f49l6u0z。
vpc-name - String - （过滤条件）私有网络名称。
zone - String - （过滤条件）可用区。
state - String - （过滤条件）VPC状态。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_DESCRIBEVPCRESOURCEREQUEST_H_
