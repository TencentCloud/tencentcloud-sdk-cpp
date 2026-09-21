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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTCONSOLEGROUPUSERSREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTCONSOLEGROUPUSERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/OrderBy.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * ListConsoleGroupUsers请求参数结构体
                */
                class ListConsoleGroupUsersRequest : public AbstractModel
                {
                public:
                    ListConsoleGroupUsersRequest();
                    ~ListConsoleGroupUsersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>用户组 ID</p>
                     * @return GroupId <p>用户组 ID</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>用户组 ID</p>
                     * @param _groupId <p>用户组 ID</p>
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>用户名称或 UIN 模糊匹配</p>
                     * @return UserKeyword <p>用户名称或 UIN 模糊匹配</p>
                     * 
                     */
                    std::string GetUserKeyword() const;

                    /**
                     * 设置<p>用户名称或 UIN 模糊匹配</p>
                     * @param _userKeyword <p>用户名称或 UIN 模糊匹配</p>
                     * 
                     */
                    void SetUserKeyword(const std::string& _userKeyword);

                    /**
                     * 判断参数 UserKeyword 是否已赋值
                     * @return UserKeyword 是否已赋值
                     * 
                     */
                    bool UserKeywordHasBeenSet() const;

                    /**
                     * 获取<p>通过 UIN 批量查询用户信息</p>
                     * @return UserUins <p>通过 UIN 批量查询用户信息</p>
                     * 
                     */
                    std::vector<std::string> GetUserUins() const;

                    /**
                     * 设置<p>通过 UIN 批量查询用户信息</p>
                     * @param _userUins <p>通过 UIN 批量查询用户信息</p>
                     * 
                     */
                    void SetUserUins(const std::vector<std::string>& _userUins);

                    /**
                     * 判断参数 UserUins 是否已赋值
                     * @return UserUins 是否已赋值
                     * 
                     */
                    bool UserUinsHasBeenSet() const;

                    /**
                     * 获取<p>多字段排序，如 [{Name: &#39;CreateTime&#39;, Direction: &#39;DESC&#39;}, {Name: &#39;UserName&#39;, Direction: &#39;ASC&#39;}]，默认按创建时间降序</p>
                     * @return OrderBys <p>多字段排序，如 [{Name: &#39;CreateTime&#39;, Direction: &#39;DESC&#39;}, {Name: &#39;UserName&#39;, Direction: &#39;ASC&#39;}]，默认按创建时间降序</p>
                     * 
                     */
                    std::vector<OrderBy> GetOrderBys() const;

                    /**
                     * 设置<p>多字段排序，如 [{Name: &#39;CreateTime&#39;, Direction: &#39;DESC&#39;}, {Name: &#39;UserName&#39;, Direction: &#39;ASC&#39;}]，默认按创建时间降序</p>
                     * @param _orderBys <p>多字段排序，如 [{Name: &#39;CreateTime&#39;, Direction: &#39;DESC&#39;}, {Name: &#39;UserName&#39;, Direction: &#39;ASC&#39;}]，默认按创建时间降序</p>
                     * 
                     */
                    void SetOrderBys(const std::vector<OrderBy>& _orderBys);

                    /**
                     * 判断参数 OrderBys 是否已赋值
                     * @return OrderBys 是否已赋值
                     * 
                     */
                    bool OrderBysHasBeenSet() const;

                    /**
                     * 获取<p>页码，从1开始，默认1</p>
                     * @return PageNumber <p>页码，从1开始，默认1</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>页码，从1开始，默认1</p>
                     * @param _pageNumber <p>页码，从1开始，默认1</p>
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
                     * 获取<p>每页大小，默认10，最小10，最大200</p>
                     * @return PageSize <p>每页大小，默认10，最小10，最大200</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>每页大小，默认10，最小10，最大200</p>
                     * @param _pageSize <p>每页大小，默认10，最小10，最大200</p>
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
                     * <p>用户组 ID</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>用户名称或 UIN 模糊匹配</p>
                     */
                    std::string m_userKeyword;
                    bool m_userKeywordHasBeenSet;

                    /**
                     * <p>通过 UIN 批量查询用户信息</p>
                     */
                    std::vector<std::string> m_userUins;
                    bool m_userUinsHasBeenSet;

                    /**
                     * <p>多字段排序，如 [{Name: &#39;CreateTime&#39;, Direction: &#39;DESC&#39;}, {Name: &#39;UserName&#39;, Direction: &#39;ASC&#39;}]，默认按创建时间降序</p>
                     */
                    std::vector<OrderBy> m_orderBys;
                    bool m_orderBysHasBeenSet;

                    /**
                     * <p>页码，从1开始，默认1</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>每页大小，默认10，最小10，最大200</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTCONSOLEGROUPUSERSREQUEST_H_
