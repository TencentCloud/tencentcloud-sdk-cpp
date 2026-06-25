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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEUSERGROUPSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEUSERGROUPSREQUEST_H_

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
                * DescribeUserGroups请求参数结构体
                */
                class DescribeUserGroupsRequest : public AbstractModel
                {
                public:
                    DescribeUserGroupsRequest();
                    ~DescribeUserGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模型路由实例ID。</p>
                     * @return ModelRouterId <p>模型路由实例ID。</p>
                     * 
                     */
                    std::string GetModelRouterId() const;

                    /**
                     * 设置<p>模型路由实例ID。</p>
                     * @param _modelRouterId <p>模型路由实例ID。</p>
                     * 
                     */
                    void SetModelRouterId(const std::string& _modelRouterId);

                    /**
                     * 判断参数 ModelRouterId 是否已赋值
                     * @return ModelRouterId 是否已赋值
                     * 
                     */
                    bool ModelRouterIdHasBeenSet() const;

                    /**
                     * 获取<p>用户组ID列表，用于按ID过滤，单次最多100个；可包含「未分组」虚拟分组 ugrp-ungrouped。</p>
                     * @return UserGroupIds <p>用户组ID列表，用于按ID过滤，单次最多100个；可包含「未分组」虚拟分组 ugrp-ungrouped。</p>
                     * 
                     */
                    std::vector<std::string> GetUserGroupIds() const;

                    /**
                     * 设置<p>用户组ID列表，用于按ID过滤，单次最多100个；可包含「未分组」虚拟分组 ugrp-ungrouped。</p>
                     * @param _userGroupIds <p>用户组ID列表，用于按ID过滤，单次最多100个；可包含「未分组」虚拟分组 ugrp-ungrouped。</p>
                     * 
                     */
                    void SetUserGroupIds(const std::vector<std::string>& _userGroupIds);

                    /**
                     * 判断参数 UserGroupIds 是否已赋值
                     * @return UserGroupIds 是否已赋值
                     * 
                     */
                    bool UserGroupIdsHasBeenSet() const;

                    /**
                     * 获取<p>过滤列表。支持：UserGroupName、Status、tag-key、tag:&lt;tag-key&gt;。</p>
                     * @return Filters <p>过滤列表。支持：UserGroupName、Status、tag-key、tag:&lt;tag-key&gt;。</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤列表。支持：UserGroupName、Status、tag-key、tag:&lt;tag-key&gt;。</p>
                     * @param _filters <p>过滤列表。支持：UserGroupName、Status、tag-key、tag:&lt;tag-key&gt;。</p>
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
                     * 获取<p>本次查询限制的数量</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     * @return Limit <p>本次查询限制的数量</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>本次查询限制的数量</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     * @param _limit <p>本次查询限制的数量</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
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
                     * 获取<p>本次查询偏移量</p><p>默认值：0</p>
                     * @return Offset <p>本次查询偏移量</p><p>默认值：0</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>本次查询偏移量</p><p>默认值：0</p>
                     * @param _offset <p>本次查询偏移量</p><p>默认值：0</p>
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
                     * <p>模型路由实例ID。</p>
                     */
                    std::string m_modelRouterId;
                    bool m_modelRouterIdHasBeenSet;

                    /**
                     * <p>用户组ID列表，用于按ID过滤，单次最多100个；可包含「未分组」虚拟分组 ugrp-ungrouped。</p>
                     */
                    std::vector<std::string> m_userGroupIds;
                    bool m_userGroupIdsHasBeenSet;

                    /**
                     * <p>过滤列表。支持：UserGroupName、Status、tag-key、tag:&lt;tag-key&gt;。</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>本次查询限制的数量</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>本次查询偏移量</p><p>默认值：0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEUSERGROUPSREQUEST_H_
