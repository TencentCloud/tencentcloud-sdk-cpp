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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTROLECONFIGURATIONAPPLYSCOPESREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTROLECONFIGURATIONAPPLYSCOPESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * ListRoleConfigurationApplyScopes请求参数结构体
                */
                class ListRoleConfigurationApplyScopesRequest : public AbstractModel
                {
                public:
                    ListRoleConfigurationApplyScopesRequest();
                    ~ListRoleConfigurationApplyScopesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>空间 ID</p>
                     * @return ZoneId <p>空间 ID</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>空间 ID</p>
                     * @param _zoneId <p>空间 ID</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>身份 ID</p>
                     * @return PrincipalId <p>身份 ID</p>
                     * 
                     */
                    std::string GetPrincipalId() const;

                    /**
                     * 设置<p>身份 ID</p>
                     * @param _principalId <p>身份 ID</p>
                     * 
                     */
                    void SetPrincipalId(const std::string& _principalId);

                    /**
                     * 判断参数 PrincipalId 是否已赋值
                     * @return PrincipalId 是否已赋值
                     * 
                     */
                    bool PrincipalIdHasBeenSet() const;

                    /**
                     * 获取<p>身份类型</p><p>枚举值：</p><ul><li>User： 用户</li><li>Group： 用户组</li></ul>
                     * @return PrincipalType <p>身份类型</p><p>枚举值：</p><ul><li>User： 用户</li><li>Group： 用户组</li></ul>
                     * 
                     */
                    std::string GetPrincipalType() const;

                    /**
                     * 设置<p>身份类型</p><p>枚举值：</p><ul><li>User： 用户</li><li>Group： 用户组</li></ul>
                     * @param _principalType <p>身份类型</p><p>枚举值：</p><ul><li>User： 用户</li><li>Group： 用户组</li></ul>
                     * 
                     */
                    void SetPrincipalType(const std::string& _principalType);

                    /**
                     * 判断参数 PrincipalType 是否已赋值
                     * @return PrincipalType 是否已赋值
                     * 
                     */
                    bool PrincipalTypeHasBeenSet() const;

                    /**
                     * 获取<p>目标账号 UIN</p>
                     * @return TargetUin <p>目标账号 UIN</p>
                     * 
                     */
                    int64_t GetTargetUin() const;

                    /**
                     * 设置<p>目标账号 UIN</p>
                     * @param _targetUin <p>目标账号 UIN</p>
                     * 
                     */
                    void SetTargetUin(const int64_t& _targetUin);

                    /**
                     * 判断参数 TargetUin 是否已赋值
                     * @return TargetUin 是否已赋值
                     * 
                     */
                    bool TargetUinHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件</p>
                     * @return Filter <p>过滤条件</p>
                     * 
                     */
                    std::string GetFilter() const;

                    /**
                     * 设置<p>过滤条件</p>
                     * @param _filter <p>过滤条件</p>
                     * 
                     */
                    void SetFilter(const std::string& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取<p>每页条数</p><p>取值范围：[1, 100]</p><p>默认值：10</p>
                     * @return MaxResults <p>每页条数</p><p>取值范围：[1, 100]</p><p>默认值：10</p>
                     * 
                     */
                    int64_t GetMaxResults() const;

                    /**
                     * 设置<p>每页条数</p><p>取值范围：[1, 100]</p><p>默认值：10</p>
                     * @param _maxResults <p>每页条数</p><p>取值范围：[1, 100]</p><p>默认值：10</p>
                     * 
                     */
                    void SetMaxResults(const int64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取<p>翻页游标</p>
                     * @return NextToken <p>翻页游标</p>
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置<p>翻页游标</p>
                     * @param _nextToken <p>翻页游标</p>
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
                     * <p>空间 ID</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>身份 ID</p>
                     */
                    std::string m_principalId;
                    bool m_principalIdHasBeenSet;

                    /**
                     * <p>身份类型</p><p>枚举值：</p><ul><li>User： 用户</li><li>Group： 用户组</li></ul>
                     */
                    std::string m_principalType;
                    bool m_principalTypeHasBeenSet;

                    /**
                     * <p>目标账号 UIN</p>
                     */
                    int64_t m_targetUin;
                    bool m_targetUinHasBeenSet;

                    /**
                     * <p>过滤条件</p>
                     */
                    std::string m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * <p>每页条数</p><p>取值范围：[1, 100]</p><p>默认值：10</p>
                     */
                    int64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * <p>翻页游标</p>
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTROLECONFIGURATIONAPPLYSCOPESREQUEST_H_
