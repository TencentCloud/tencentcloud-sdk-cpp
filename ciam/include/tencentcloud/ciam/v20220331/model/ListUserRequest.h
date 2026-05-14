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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_LISTUSERREQUEST_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_LISTUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ciam/v20220331/model/Pageable.h>
#include <tencentcloud/ciam/v20220331/model/Filter.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * ListUser请求参数结构体
                */
                class ListUserRequest : public AbstractModel
                {
                public:
                    ListUserRequest();
                    ~ListUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>用户目录ID</p>
                     * @return UserStoreId <p>用户目录ID</p>
                     * 
                     */
                    std::string GetUserStoreId() const;

                    /**
                     * 设置<p>用户目录ID</p>
                     * @param _userStoreId <p>用户目录ID</p>
                     * 
                     */
                    void SetUserStoreId(const std::string& _userStoreId);

                    /**
                     * 判断参数 UserStoreId 是否已赋值
                     * @return UserStoreId 是否已赋值
                     * 
                     */
                    bool UserStoreIdHasBeenSet() const;

                    /**
                     * 获取<p>分页数据</p>
                     * @return Pageable <p>分页数据</p>
                     * 
                     */
                    Pageable GetPageable() const;

                    /**
                     * 设置<p>分页数据</p>
                     * @param _pageable <p>分页数据</p>
                     * 
                     */
                    void SetPageable(const Pageable& _pageable);

                    /**
                     * 判断参数 Pageable 是否已赋值
                     * @return Pageable 是否已赋值
                     * 
                     */
                    bool PageableHasBeenSet() const;

                    /**
                     * 获取<p>Key可选值为condition、userGroup、userOrg、weComUserOrg<li> <strong>condition</strong> </li>    Values = 查询条件，用户ID，用户名称，手机或邮箱<li> <strong>userGroup</strong> </li>    Values = 用户组ID<li> <strong>userOrg</strong> </li>    Values = 用户所属机构ID<li> <strong>weComUserOrg</strong> </li>    Values = 用户所属企业微信机构ID</p>
                     * @return Filters <p>Key可选值为condition、userGroup、userOrg、weComUserOrg<li> <strong>condition</strong> </li>    Values = 查询条件，用户ID，用户名称，手机或邮箱<li> <strong>userGroup</strong> </li>    Values = 用户组ID<li> <strong>userOrg</strong> </li>    Values = 用户所属机构ID<li> <strong>weComUserOrg</strong> </li>    Values = 用户所属企业微信机构ID</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>Key可选值为condition、userGroup、userOrg、weComUserOrg<li> <strong>condition</strong> </li>    Values = 查询条件，用户ID，用户名称，手机或邮箱<li> <strong>userGroup</strong> </li>    Values = 用户组ID<li> <strong>userOrg</strong> </li>    Values = 用户所属机构ID<li> <strong>weComUserOrg</strong> </li>    Values = 用户所属企业微信机构ID</p>
                     * @param _filters <p>Key可选值为condition、userGroup、userOrg、weComUserOrg<li> <strong>condition</strong> </li>    Values = 查询条件，用户ID，用户名称，手机或邮箱<li> <strong>userGroup</strong> </li>    Values = 用户组ID<li> <strong>userOrg</strong> </li>    Values = 用户所属机构ID<li> <strong>weComUserOrg</strong> </li>    Values = 用户所属企业微信机构ID</p>
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
                     * 获取<p>返回信息是否为原文</p>
                     * @return Original <p>返回信息是否为原文</p>
                     * 
                     */
                    bool GetOriginal() const;

                    /**
                     * 设置<p>返回信息是否为原文</p>
                     * @param _original <p>返回信息是否为原文</p>
                     * 
                     */
                    void SetOriginal(const bool& _original);

                    /**
                     * 判断参数 Original 是否已赋值
                     * @return Original 是否已赋值
                     * 
                     */
                    bool OriginalHasBeenSet() const;

                private:

                    /**
                     * <p>用户目录ID</p>
                     */
                    std::string m_userStoreId;
                    bool m_userStoreIdHasBeenSet;

                    /**
                     * <p>分页数据</p>
                     */
                    Pageable m_pageable;
                    bool m_pageableHasBeenSet;

                    /**
                     * <p>Key可选值为condition、userGroup、userOrg、weComUserOrg<li> <strong>condition</strong> </li>    Values = 查询条件，用户ID，用户名称，手机或邮箱<li> <strong>userGroup</strong> </li>    Values = 用户组ID<li> <strong>userOrg</strong> </li>    Values = 用户所属机构ID<li> <strong>weComUserOrg</strong> </li>    Values = 用户所属企业微信机构ID</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>返回信息是否为原文</p>
                     */
                    bool m_original;
                    bool m_originalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_LISTUSERREQUEST_H_
