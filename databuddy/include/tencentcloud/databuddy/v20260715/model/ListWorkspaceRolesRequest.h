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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKSPACEROLESREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKSPACEROLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * ListWorkspaceRoles请求参数结构体
                */
                class ListWorkspaceRolesRequest : public AbstractModel
                {
                public:
                    ListWorkspaceRolesRequest();
                    ~ListWorkspaceRolesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>工作空间ID</p>
                     * @return WorkspaceId <p>工作空间ID</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>工作空间ID</p>
                     * @param _workspaceId <p>工作空间ID</p>
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
                     * 获取<p>关键字，支持按角色名称模糊搜索</p>
                     * @return NameKeyword <p>关键字，支持按角色名称模糊搜索</p>
                     * 
                     */
                    std::string GetNameKeyword() const;

                    /**
                     * 设置<p>关键字，支持按角色名称模糊搜索</p>
                     * @param _nameKeyword <p>关键字，支持按角色名称模糊搜索</p>
                     * 
                     */
                    void SetNameKeyword(const std::string& _nameKeyword);

                    /**
                     * 判断参数 NameKeyword 是否已赋值
                     * @return NameKeyword 是否已赋值
                     * 
                     */
                    bool NameKeywordHasBeenSet() const;

                    /**
                     * 获取<p>页码，从1开始，默认1</p><p>默认值：1</p>
                     * @return PageNumber <p>页码，从1开始，默认1</p><p>默认值：1</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>页码，从1开始，默认1</p><p>默认值：1</p>
                     * @param _pageNumber <p>页码，从1开始，默认1</p><p>默认值：1</p>
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取<p>每页大小，默认10，取值范围为 [1,100]，越界时自动收敛到边界值</p><p>默认值：10</p>
                     * @return PageSize <p>每页大小，默认10，取值范围为 [1,100]，越界时自动收敛到边界值</p><p>默认值：10</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>每页大小，默认10，取值范围为 [1,100]，越界时自动收敛到边界值</p><p>默认值：10</p>
                     * @param _pageSize <p>每页大小，默认10，取值范围为 [1,100]，越界时自动收敛到边界值</p><p>默认值：10</p>
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * <p>工作空间ID</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>关键字，支持按角色名称模糊搜索</p>
                     */
                    std::string m_nameKeyword;
                    bool m_nameKeywordHasBeenSet;

                    /**
                     * <p>页码，从1开始，默认1</p><p>默认值：1</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>每页大小，默认10，取值范围为 [1,100]，越界时自动收敛到边界值</p><p>默认值：10</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKSPACEROLESREQUEST_H_
