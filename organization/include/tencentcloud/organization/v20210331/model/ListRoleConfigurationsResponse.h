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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTROLECONFIGURATIONSRESPONSE_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTROLECONFIGURATIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/RoleConfiguration.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * ListRoleConfigurations返回参数结构体
                */
                class ListRoleConfigurationsResponse : public AbstractModel
                {
                public:
                    ListRoleConfigurationsResponse();
                    ~ListRoleConfigurationsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>符合请求参数条件的数据总条数。</p>
                     * @return TotalCounts <p>符合请求参数条件的数据总条数。</p>
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
                     * 获取<p>每页的最大数据条数。</p>
                     * @return MaxResults <p>每页的最大数据条数。</p>
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
                     * 获取<p>返回结果是否被截断。取值：  true：已截断。 false：未截断。</p>
                     * @return IsTruncated <p>返回结果是否被截断。取值：  true：已截断。 false：未截断。</p>
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
                     * 获取<p>查询返回结果下一页的令牌。  说明 只有IsTruncated为true时，才显示该参数。</p>
                     * @return NextToken <p>查询返回结果下一页的令牌。  说明 只有IsTruncated为true时，才显示该参数。</p>
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
                     * 获取<p>权限配置列表。</p>
                     * @return RoleConfigurations <p>权限配置列表。</p>
                     * 
                     */
                    std::vector<RoleConfiguration> GetRoleConfigurations() const;

                    /**
                     * 判断参数 RoleConfigurations 是否已赋值
                     * @return RoleConfigurations 是否已赋值
                     * 
                     */
                    bool RoleConfigurationsHasBeenSet() const;

                private:

                    /**
                     * <p>符合请求参数条件的数据总条数。</p>
                     */
                    int64_t m_totalCounts;
                    bool m_totalCountsHasBeenSet;

                    /**
                     * <p>每页的最大数据条数。</p>
                     */
                    int64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * <p>返回结果是否被截断。取值：  true：已截断。 false：未截断。</p>
                     */
                    bool m_isTruncated;
                    bool m_isTruncatedHasBeenSet;

                    /**
                     * <p>查询返回结果下一页的令牌。  说明 只有IsTruncated为true时，才显示该参数。</p>
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * <p>权限配置列表。</p>
                     */
                    std::vector<RoleConfiguration> m_roleConfigurations;
                    bool m_roleConfigurationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTROLECONFIGURATIONSRESPONSE_H_
