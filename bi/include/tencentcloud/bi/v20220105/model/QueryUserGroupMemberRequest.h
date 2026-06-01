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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_QUERYUSERGROUPMEMBERREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_QUERYUSERGROUPMEMBERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/UserGroupTreeNodeDTO.h>
#include <tencentcloud/bi/v20220105/model/ResourceTagValue.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * QueryUserGroupMember请求参数结构体
                */
                class QueryUserGroupMemberRequest : public AbstractModel
                {
                public:
                    QueryUserGroupMemberRequest();
                    ~QueryUserGroupMemberRequest() = default;
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

                    /**
                     * 获取<p>用户组节点信息</p>
                     * @return Nodes <p>用户组节点信息</p>
                     * 
                     */
                    std::vector<UserGroupTreeNodeDTO> GetNodes() const;

                    /**
                     * 设置<p>用户组节点信息</p>
                     * @param _nodes <p>用户组节点信息</p>
                     * 
                     */
                    void SetNodes(const std::vector<UserGroupTreeNodeDTO>& _nodes);

                    /**
                     * 判断参数 Nodes 是否已赋值
                     * @return Nodes 是否已赋值
                     * 
                     */
                    bool NodesHasBeenSet() const;

                    /**
                     * 获取<p>标签值</p>
                     * @return TagValueList <p>标签值</p>
                     * 
                     */
                    std::vector<ResourceTagValue> GetTagValueList() const;

                    /**
                     * 设置<p>标签值</p>
                     * @param _tagValueList <p>标签值</p>
                     * 
                     */
                    void SetTagValueList(const std::vector<ResourceTagValue>& _tagValueList);

                    /**
                     * 判断参数 TagValueList 是否已赋值
                     * @return TagValueList 是否已赋值
                     * 
                     */
                    bool TagValueListHasBeenSet() const;

                    /**
                     * 获取<p>需要过滤的用户组</p>
                     * @return FilterGroupIds <p>需要过滤的用户组</p>
                     * 
                     */
                    std::vector<int64_t> GetFilterGroupIds() const;

                    /**
                     * 设置<p>需要过滤的用户组</p>
                     * @param _filterGroupIds <p>需要过滤的用户组</p>
                     * 
                     */
                    void SetFilterGroupIds(const std::vector<int64_t>& _filterGroupIds);

                    /**
                     * 判断参数 FilterGroupIds 是否已赋值
                     * @return FilterGroupIds 是否已赋值
                     * 
                     */
                    bool FilterGroupIdsHasBeenSet() const;

                private:

                    /**
                     * <p>用户组id集合</p>
                     */
                    std::vector<int64_t> m_groupIds;
                    bool m_groupIdsHasBeenSet;

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

                    /**
                     * <p>用户组节点信息</p>
                     */
                    std::vector<UserGroupTreeNodeDTO> m_nodes;
                    bool m_nodesHasBeenSet;

                    /**
                     * <p>标签值</p>
                     */
                    std::vector<ResourceTagValue> m_tagValueList;
                    bool m_tagValueListHasBeenSet;

                    /**
                     * <p>需要过滤的用户组</p>
                     */
                    std::vector<int64_t> m_filterGroupIds;
                    bool m_filterGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_QUERYUSERGROUPMEMBERREQUEST_H_
