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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEUSERGROUPMEMBERLISTREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEUSERGROUPMEMBERLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * DescribeUserGroupMemberList请求参数结构体
                */
                class DescribeUserGroupMemberListRequest : public AbstractModel
                {
                public:
                    DescribeUserGroupMemberListRequest();
                    ~DescribeUserGroupMemberListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>用户组id集合</p>
                     * @return GroupIds <p>用户组id集合</p>
                     * 
                     */
                    std::vector<int64_t> GetGroupIds() const;

                    /**
                     * 设置<p>用户组id集合</p>
                     * @param _groupIds <p>用户组id集合</p>
                     * 
                     */
                    void SetGroupIds(const std::vector<int64_t>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     * 
                     */
                    bool GroupIdsHasBeenSet() const;

                    /**
                     * 获取<p>asc正序,desc倒序</p>
                     * @return CreatedOnOrder <p>asc正序,desc倒序</p>
                     * 
                     */
                    std::string GetCreatedOnOrder() const;

                    /**
                     * 设置<p>asc正序,desc倒序</p>
                     * @param _createdOnOrder <p>asc正序,desc倒序</p>
                     * 
                     */
                    void SetCreatedOnOrder(const std::string& _createdOnOrder);

                    /**
                     * 判断参数 CreatedOnOrder 是否已赋值
                     * @return CreatedOnOrder 是否已赋值
                     * 
                     */
                    bool CreatedOnOrderHasBeenSet() const;

                    /**
                     * 获取<p>搜索关键字</p>
                     * @return Keyword <p>搜索关键字</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>搜索关键字</p>
                     * @param _keyword <p>搜索关键字</p>
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取<p>分页大小</p>
                     * @return PageSize <p>分页大小</p>
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置<p>分页大小</p>
                     * @param _pageSize <p>分页大小</p>
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>分页页码</p>
                     * @return PageNo <p>分页页码</p>
                     * 
                     */
                    uint64_t GetPageNo() const;

                    /**
                     * 设置<p>分页页码</p>
                     * @param _pageNo <p>分页页码</p>
                     * 
                     */
                    void SetPageNo(const uint64_t& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     * 
                     */
                    bool PageNoHasBeenSet() const;

                    /**
                     * 获取<p>是否需要分页</p>
                     * @return AllPage <p>是否需要分页</p>
                     * 
                     */
                    bool GetAllPage() const;

                    /**
                     * 设置<p>是否需要分页</p>
                     * @param _allPage <p>是否需要分页</p>
                     * 
                     */
                    void SetAllPage(const bool& _allPage);

                    /**
                     * 判断参数 AllPage 是否已赋值
                     * @return AllPage 是否已赋值
                     * 
                     */
                    bool AllPageHasBeenSet() const;

                private:

                    /**
                     * <p>用户组id集合</p>
                     */
                    std::vector<int64_t> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * <p>asc正序,desc倒序</p>
                     */
                    std::string m_createdOnOrder;
                    bool m_createdOnOrderHasBeenSet;

                    /**
                     * <p>搜索关键字</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>分页大小</p>
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>分页页码</p>
                     */
                    uint64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * <p>是否需要分页</p>
                     */
                    bool m_allPage;
                    bool m_allPageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEUSERGROUPMEMBERLISTREQUEST_H_
