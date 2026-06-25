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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEUSERGROUPSRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEUSERGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/UserGroupInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeUserGroups返回参数结构体
                */
                class DescribeUserGroupsResponse : public AbstractModel
                {
                public:
                    DescribeUserGroupsResponse();
                    ~DescribeUserGroupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>用户组列表。</p>
                     * @return UserGroups <p>用户组列表。</p>
                     * 
                     */
                    std::vector<UserGroupInfo> GetUserGroups() const;

                    /**
                     * 判断参数 UserGroups 是否已赋值
                     * @return UserGroups 是否已赋值
                     * 
                     */
                    bool UserGroupsHasBeenSet() const;

                    /**
                     * 获取<p>符合条件的总数（含「未分组」逻辑组 ugrp-ungrouped：当其未被过滤条件排除时计入，即 TotalCount = 真实用户组数 + 1）。</p>
                     * @return TotalCount <p>符合条件的总数（含「未分组」逻辑组 ugrp-ungrouped：当其未被过滤条件排除时计入，即 TotalCount = 真实用户组数 + 1）。</p>
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>用户组列表。</p>
                     */
                    std::vector<UserGroupInfo> m_userGroups;
                    bool m_userGroupsHasBeenSet;

                    /**
                     * <p>符合条件的总数（含「未分组」逻辑组 ugrp-ungrouped：当其未被过滤条件排除时计入，即 TotalCount = 真实用户组数 + 1）。</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEUSERGROUPSRESPONSE_H_
