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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEHOSTSREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEHOSTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeHosts请求参数结构体
                */
                class DescribeHostsRequest : public AbstractModel
                {
                public:
                    DescribeHostsRequest();
                    ~DescribeHostsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件。
<li> zone - String - 是否必填：否 - （过滤条件）按照可用区过滤。</li>
<li> project-id - Integer - 是否必填：否 - （过滤条件）按照项目ID过滤。可通过调用 DescribeProject 查询已创建的项目列表或登录控制台进行查看；也可以调用 AddProject 创建新的项目。</li>
<li> host-id - String - 是否必填：否 - （过滤条件）按照CDH ID过滤。CDH ID形如：host-11112222。</li>
<li> host-name - String - 是否必填：否 - （过滤条件）按照CDH实例名称过滤。</li>
<li> host-state - String - 是否必填：否 - （过滤条件）按照CDH实例状态进行过滤。（PENDING：创建中|LAUNCH_FAILURE：创建失败|RUNNING：运行中|EXPIRED：已过期）</li>
                     * @return Filters 过滤条件。
<li> zone - String - 是否必填：否 - （过滤条件）按照可用区过滤。</li>
<li> project-id - Integer - 是否必填：否 - （过滤条件）按照项目ID过滤。可通过调用 DescribeProject 查询已创建的项目列表或登录控制台进行查看；也可以调用 AddProject 创建新的项目。</li>
<li> host-id - String - 是否必填：否 - （过滤条件）按照CDH ID过滤。CDH ID形如：host-11112222。</li>
<li> host-name - String - 是否必填：否 - （过滤条件）按照CDH实例名称过滤。</li>
<li> host-state - String - 是否必填：否 - （过滤条件）按照CDH实例状态进行过滤。（PENDING：创建中|LAUNCH_FAILURE：创建失败|RUNNING：运行中|EXPIRED：已过期）</li>
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li> zone - String - 是否必填：否 - （过滤条件）按照可用区过滤。</li>
<li> project-id - Integer - 是否必填：否 - （过滤条件）按照项目ID过滤。可通过调用 DescribeProject 查询已创建的项目列表或登录控制台进行查看；也可以调用 AddProject 创建新的项目。</li>
<li> host-id - String - 是否必填：否 - （过滤条件）按照CDH ID过滤。CDH ID形如：host-11112222。</li>
<li> host-name - String - 是否必填：否 - （过滤条件）按照CDH实例名称过滤。</li>
<li> host-state - String - 是否必填：否 - （过滤条件）按照CDH实例状态进行过滤。（PENDING：创建中|LAUNCH_FAILURE：创建失败|RUNNING：运行中|EXPIRED：已过期）</li>
                     * @param Filters 过滤条件。
<li> zone - String - 是否必填：否 - （过滤条件）按照可用区过滤。</li>
<li> project-id - Integer - 是否必填：否 - （过滤条件）按照项目ID过滤。可通过调用 DescribeProject 查询已创建的项目列表或登录控制台进行查看；也可以调用 AddProject 创建新的项目。</li>
<li> host-id - String - 是否必填：否 - （过滤条件）按照CDH ID过滤。CDH ID形如：host-11112222。</li>
<li> host-name - String - 是否必填：否 - （过滤条件）按照CDH实例名称过滤。</li>
<li> host-state - String - 是否必填：否 - （过滤条件）按照CDH实例状态进行过滤。（PENDING：创建中|LAUNCH_FAILURE：创建失败|RUNNING：运行中|EXPIRED：已过期）</li>
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param Offset 偏移量，默认为0。
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为20，最大值为100。
                     * @return Limit 返回数量，默认为20，最大值为100。
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。
                     * @param Limit 返回数量，默认为20，最大值为100。
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 过滤条件。
<li> zone - String - 是否必填：否 - （过滤条件）按照可用区过滤。</li>
<li> project-id - Integer - 是否必填：否 - （过滤条件）按照项目ID过滤。可通过调用 DescribeProject 查询已创建的项目列表或登录控制台进行查看；也可以调用 AddProject 创建新的项目。</li>
<li> host-id - String - 是否必填：否 - （过滤条件）按照CDH ID过滤。CDH ID形如：host-11112222。</li>
<li> host-name - String - 是否必填：否 - （过滤条件）按照CDH实例名称过滤。</li>
<li> host-state - String - 是否必填：否 - （过滤条件）按照CDH实例状态进行过滤。（PENDING：创建中|LAUNCH_FAILURE：创建失败|RUNNING：运行中|EXPIRED：已过期）</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEHOSTSREQUEST_H_
