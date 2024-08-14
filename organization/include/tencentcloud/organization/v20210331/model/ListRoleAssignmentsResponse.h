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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTROLEASSIGNMENTSRESPONSE_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTROLEASSIGNMENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/RoleAssignments.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * ListRoleAssignments返回参数结构体
                */
                class ListRoleAssignmentsResponse : public AbstractModel
                {
                public:
                    ListRoleAssignmentsResponse();
                    ~ListRoleAssignmentsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询返回结果下一页的令牌。  说明 只有IsTruncated为true时，才显示该参数。
                     * @return NextToken 查询返回结果下一页的令牌。  说明 只有IsTruncated为true时，才显示该参数。
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取符合请求参数条件的数据总条数。
                     * @return TotalCounts 符合请求参数条件的数据总条数。
                     * 
                     */
                    int64_t GetTotalCounts() const;

                    /**
                     * 判断参数 TotalCounts 是否已赋值
                     * @return TotalCounts 是否已赋值
                     * 
                     */
                    bool TotalCountsHasBeenSet() const;

                    /**
                     * 获取每页的最大数据条数。
                     * @return MaxResults 每页的最大数据条数。
                     * 
                     */
                    int64_t GetMaxResults() const;

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取返回结果是否被截断。取值：  true：已截断。 false：未截断。
                     * @return IsTruncated 返回结果是否被截断。取值：  true：已截断。 false：未截断。
                     * 
                     */
                    bool GetIsTruncated() const;

                    /**
                     * 判断参数 IsTruncated 是否已赋值
                     * @return IsTruncated 是否已赋值
                     * 
                     */
                    bool IsTruncatedHasBeenSet() const;

                    /**
                     * 获取集团账号目标账号的授权列表。
                     * @return RoleAssignments 集团账号目标账号的授权列表。
                     * 
                     */
                    std::vector<RoleAssignments> GetRoleAssignments() const;

                    /**
                     * 判断参数 RoleAssignments 是否已赋值
                     * @return RoleAssignments 是否已赋值
                     * 
                     */
                    bool RoleAssignmentsHasBeenSet() const;

                private:

                    /**
                     * 查询返回结果下一页的令牌。  说明 只有IsTruncated为true时，才显示该参数。
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * 符合请求参数条件的数据总条数。
                     */
                    int64_t m_totalCounts;
                    bool m_totalCountsHasBeenSet;

                    /**
                     * 每页的最大数据条数。
                     */
                    int64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * 返回结果是否被截断。取值：  true：已截断。 false：未截断。
                     */
                    bool m_isTruncated;
                    bool m_isTruncatedHasBeenSet;

                    /**
                     * 集团账号目标账号的授权列表。
                     */
                    std::vector<RoleAssignments> m_roleAssignments;
                    bool m_roleAssignmentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTROLEASSIGNMENTSRESPONSE_H_
