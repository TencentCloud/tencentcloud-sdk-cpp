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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEUSERGROUPTREELISTREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEUSERGROUPTREELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/ResourceTagValue.h>
#include <tencentcloud/bi/v20220105/model/UserGroupTreeNodeDTO.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * DescribeUserGroupTreeList请求参数结构体
                */
                class DescribeUserGroupTreeListRequest : public AbstractModel
                {
                public:
                    DescribeUserGroupTreeListRequest();
                    ~DescribeUserGroupTreeListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param _projectId 项目Id
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取是否分页
                     * @return AllPage 是否分页
                     * 
                     */
                    int64_t GetAllPage() const;

                    /**
                     * 设置是否分页
                     * @param _allPage 是否分页
                     * 
                     */
                    void SetAllPage(const int64_t& _allPage);

                    /**
                     * 判断参数 AllPage 是否已赋值
                     * @return AllPage 是否已赋值
                     * 
                     */
                    bool AllPageHasBeenSet() const;

                    /**
                     * 获取页码
                     * @return PageNo 页码
                     * 
                     */
                    int64_t GetPageNo() const;

                    /**
                     * 设置页码
                     * @param _pageNo 页码
                     * 
                     */
                    void SetPageNo(const int64_t& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     * 
                     */
                    bool PageNoHasBeenSet() const;

                    /**
                     * 获取每页条数
                     * @return PageSize 每页条数
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页条数
                     * @param _pageSize 每页条数
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取标签过滤条件
                     * @return TagValueList 标签过滤条件
                     * 
                     */
                    std::vector<ResourceTagValue> GetTagValueList() const;

                    /**
                     * 设置标签过滤条件
                     * @param _tagValueList 标签过滤条件
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
                     * 获取节点集合
                     * @return Nodes 节点集合
                     * 
                     */
                    std::vector<UserGroupTreeNodeDTO> GetNodes() const;

                    /**
                     * 设置节点集合
                     * @param _nodes 节点集合
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
                     * 获取查询下一个code
                     * @return QueryNextNode 查询下一个code
                     * 
                     */
                    bool GetQueryNextNode() const;

                    /**
                     * 设置查询下一个code
                     * @param _queryNextNode 查询下一个code
                     * 
                     */
                    void SetQueryNextNode(const bool& _queryNextNode);

                    /**
                     * 判断参数 QueryNextNode 是否已赋值
                     * @return QueryNextNode 是否已赋值
                     * 
                     */
                    bool QueryNextNodeHasBeenSet() const;

                    /**
                     * 获取父id集合
                     * @return ParentIds 父id集合
                     * 
                     */
                    std::vector<int64_t> GetParentIds() const;

                    /**
                     * 设置父id集合
                     * @param _parentIds 父id集合
                     * 
                     */
                    void SetParentIds(const std::vector<int64_t>& _parentIds);

                    /**
                     * 判断参数 ParentIds 是否已赋值
                     * @return ParentIds 是否已赋值
                     * 
                     */
                    bool ParentIdsHasBeenSet() const;

                    /**
                     * 获取是否查询所有节点
                     * @return QueryAllNode 是否查询所有节点
                     * 
                     */
                    bool GetQueryAllNode() const;

                    /**
                     * 设置是否查询所有节点
                     * @param _queryAllNode 是否查询所有节点
                     * 
                     */
                    void SetQueryAllNode(const bool& _queryAllNode);

                    /**
                     * 判断参数 QueryAllNode 是否已赋值
                     * @return QueryAllNode 是否已赋值
                     * 
                     */
                    bool QueryAllNodeHasBeenSet() const;

                    /**
                     * 获取过滤组id集合
                     * @return FilterGroupIds 过滤组id集合
                     * 
                     */
                    std::vector<int64_t> GetFilterGroupIds() const;

                    /**
                     * 设置过滤组id集合
                     * @param _filterGroupIds 过滤组id集合
                     * 
                     */
                    void SetFilterGroupIds(const std::vector<int64_t>& _filterGroupIds);

                    /**
                     * 判断参数 FilterGroupIds 是否已赋值
                     * @return FilterGroupIds 是否已赋值
                     * 
                     */
                    bool FilterGroupIdsHasBeenSet() const;

                    /**
                     * 获取模糊搜索关键字
                     * @return Keyword 模糊搜索关键字
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置模糊搜索关键字
                     * @param _keyword 模糊搜索关键字
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                private:

                    /**
                     * 项目Id
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 是否分页
                     */
                    int64_t m_allPage;
                    bool m_allPageHasBeenSet;

                    /**
                     * 页码
                     */
                    int64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * 每页条数
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 标签过滤条件
                     */
                    std::vector<ResourceTagValue> m_tagValueList;
                    bool m_tagValueListHasBeenSet;

                    /**
                     * 节点集合
                     */
                    std::vector<UserGroupTreeNodeDTO> m_nodes;
                    bool m_nodesHasBeenSet;

                    /**
                     * 用户组id集合
                     */
                    std::vector<int64_t> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * 查询下一个code
                     */
                    bool m_queryNextNode;
                    bool m_queryNextNodeHasBeenSet;

                    /**
                     * 父id集合
                     */
                    std::vector<int64_t> m_parentIds;
                    bool m_parentIdsHasBeenSet;

                    /**
                     * 是否查询所有节点
                     */
                    bool m_queryAllNode;
                    bool m_queryAllNodeHasBeenSet;

                    /**
                     * 过滤组id集合
                     */
                    std::vector<int64_t> m_filterGroupIds;
                    bool m_filterGroupIdsHasBeenSet;

                    /**
                     * 模糊搜索关键字
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEUSERGROUPTREELISTREQUEST_H_
