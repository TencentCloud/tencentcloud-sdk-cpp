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
                     * 获取用户组id集合
                     * @return GroupIds 用户组id集合
                     * 
                     */
                    std::vector<int64_t> GetGroupIds() const;

                    /**
                     * 设置用户组id集合
                     * @param _groupIds 用户组id集合
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
                     * 获取asc正序,desc倒序
                     * @return CreatedOnOrder asc正序,desc倒序
                     * 
                     */
                    std::string GetCreatedOnOrder() const;

                    /**
                     * 设置asc正序,desc倒序
                     * @param _createdOnOrder asc正序,desc倒序
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
                     * 获取搜索关键字
                     * @return Keyword 搜索关键字
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置搜索关键字
                     * @param _keyword 搜索关键字
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
                     * 获取分页大小
                     * @return PageSize 分页大小
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置分页大小
                     * @param _pageSize 分页大小
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
                     * 获取分页页码
                     * @return PageNo 分页页码
                     * 
                     */
                    uint64_t GetPageNo() const;

                    /**
                     * 设置分页页码
                     * @param _pageNo 分页页码
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
                     * 获取是否需要分页
                     * @return AllPage 是否需要分页
                     * 
                     */
                    bool GetAllPage() const;

                    /**
                     * 设置是否需要分页
                     * @param _allPage 是否需要分页
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
                     * 用户组id集合
                     */
                    std::vector<int64_t> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * asc正序,desc倒序
                     */
                    std::string m_createdOnOrder;
                    bool m_createdOnOrderHasBeenSet;

                    /**
                     * 搜索关键字
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 分页大小
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 分页页码
                     */
                    uint64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * 是否需要分页
                     */
                    bool m_allPage;
                    bool m_allPageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEUSERGROUPMEMBERLISTREQUEST_H_
