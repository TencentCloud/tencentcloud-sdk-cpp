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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEWORKSPACEUSERLISTREQUEST_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEWORKSPACEUSERLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * DescribeWorkspaceUserList请求参数结构体
                */
                class DescribeWorkspaceUserListRequest : public AbstractModel
                {
                public:
                    DescribeWorkspaceUserListRequest();
                    ~DescribeWorkspaceUserListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取翻页页码
                     * @return Offset 翻页页码
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置翻页页码
                     * @param _offset 翻页页码
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
                     * 获取翻页大小
                     * @return Limit 翻页大小
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置翻页大小
                     * @param _limit 翻页大小
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
                     * 获取工作空间ID
                     * @return WorkspaceId 工作空间ID
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置工作空间ID
                     * @param _workspaceId 工作空间ID
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取token
                     * @return ApplicationToken token
                     * 
                     */
                    std::string GetApplicationToken() const;

                    /**
                     * 设置token
                     * @param _applicationToken token
                     * 
                     */
                    void SetApplicationToken(const std::string& _applicationToken);

                    /**
                     * 判断参数 ApplicationToken 是否已赋值
                     * @return ApplicationToken 是否已赋值
                     * 
                     */
                    bool ApplicationTokenHasBeenSet() const;

                    /**
                     * 获取租户ID
                     * @return TenantId 租户ID
                     * 
                     */
                    std::string GetTenantId() const;

                    /**
                     * 设置租户ID
                     * @param _tenantId 租户ID
                     * 
                     */
                    void SetTenantId(const std::string& _tenantId);

                    /**
                     * 判断参数 TenantId 是否已赋值
                     * @return TenantId 是否已赋值
                     * 
                     */
                    bool TenantIdHasBeenSet() const;

                    /**
                     * 获取更新时间戳，单位秒
                     * @return UpdateAt 更新时间戳，单位秒
                     * 
                     */
                    int64_t GetUpdateAt() const;

                    /**
                     * 设置更新时间戳，单位秒
                     * @param _updateAt 更新时间戳，单位秒
                     * 
                     */
                    void SetUpdateAt(const int64_t& _updateAt);

                    /**
                     * 判断参数 UpdateAt 是否已赋值
                     * @return UpdateAt 是否已赋值
                     * 
                     */
                    bool UpdateAtHasBeenSet() const;

                private:

                    /**
                     * 翻页页码
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 翻页大小
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 工作空间ID
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * token
                     */
                    std::string m_applicationToken;
                    bool m_applicationTokenHasBeenSet;

                    /**
                     * 租户ID
                     */
                    std::string m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * 更新时间戳，单位秒
                     */
                    int64_t m_updateAt;
                    bool m_updateAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEWORKSPACEUSERLISTREQUEST_H_
