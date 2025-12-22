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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_LISTQAREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_LISTQAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ListQA请求参数结构体
                */
                class ListQARequest : public AbstractModel
                {
                public:
                    ListQARequest();
                    ~ListQARequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
若要操作共享知识库，传KnowledgeBizId
                     * @return BotBizId 应用ID
若要操作共享知识库，传KnowledgeBizId
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置应用ID
若要操作共享知识库，传KnowledgeBizId
                     * @param _botBizId 应用ID
若要操作共享知识库，传KnowledgeBizId
                     * 
                     */
                    void SetBotBizId(const std::string& _botBizId);

                    /**
                     * 判断参数 BotBizId 是否已赋值
                     * @return BotBizId 是否已赋值
                     * 
                     */
                    bool BotBizIdHasBeenSet() const;

                    /**
                     * 获取页码（取值范围>0）
                     * @return PageNumber 页码（取值范围>0）
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置页码（取值范围>0）
                     * @param _pageNumber 页码（取值范围>0）
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
                     * 获取每页大小(取值范围1-200)
                     * @return PageSize 每页大小(取值范围1-200)
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页大小(取值范围1-200)
                     * @param _pageSize 每页大小(取值范围1-200)
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
                     * 获取查询问题

输入特定标识 lke:system:untagged  将查询所有未关联标签的问答
                     * @return Query 查询问题

输入特定标识 lke:system:untagged  将查询所有未关联标签的问答
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置查询问题

输入特定标识 lke:system:untagged  将查询所有未关联标签的问答
                     * @param _query 查询问题

输入特定标识 lke:system:untagged  将查询所有未关联标签的问答
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取校验状态(1未校验2采纳3不采纳)
如果不填默认值为空数组，表示不筛选，返回所有状态
                     * @return AcceptStatus 校验状态(1未校验2采纳3不采纳)
如果不填默认值为空数组，表示不筛选，返回所有状态
                     * 
                     */
                    std::vector<int64_t> GetAcceptStatus() const;

                    /**
                     * 设置校验状态(1未校验2采纳3不采纳)
如果不填默认值为空数组，表示不筛选，返回所有状态
                     * @param _acceptStatus 校验状态(1未校验2采纳3不采纳)
如果不填默认值为空数组，表示不筛选，返回所有状态
                     * 
                     */
                    void SetAcceptStatus(const std::vector<int64_t>& _acceptStatus);

                    /**
                     * 判断参数 AcceptStatus 是否已赋值
                     * @return AcceptStatus 是否已赋值
                     * 
                     */
                    bool AcceptStatusHasBeenSet() const;

                    /**
                     * 获取发布状态(2待发布 3发布中 4已发布 7审核中 8审核失败 9人工申述中 11人工申述失败 12已过期 13超量失效 14超量失效恢复)
如果不填默认值为空数组，表示不筛选返回所有状态
                     * @return ReleaseStatus 发布状态(2待发布 3发布中 4已发布 7审核中 8审核失败 9人工申述中 11人工申述失败 12已过期 13超量失效 14超量失效恢复)
如果不填默认值为空数组，表示不筛选返回所有状态
                     * 
                     */
                    std::vector<int64_t> GetReleaseStatus() const;

                    /**
                     * 设置发布状态(2待发布 3发布中 4已发布 7审核中 8审核失败 9人工申述中 11人工申述失败 12已过期 13超量失效 14超量失效恢复)
如果不填默认值为空数组，表示不筛选返回所有状态
                     * @param _releaseStatus 发布状态(2待发布 3发布中 4已发布 7审核中 8审核失败 9人工申述中 11人工申述失败 12已过期 13超量失效 14超量失效恢复)
如果不填默认值为空数组，表示不筛选返回所有状态
                     * 
                     */
                    void SetReleaseStatus(const std::vector<int64_t>& _releaseStatus);

                    /**
                     * 判断参数 ReleaseStatus 是否已赋值
                     * @return ReleaseStatus 是否已赋值
                     * 
                     */
                    bool ReleaseStatusHasBeenSet() const;

                    /**
                     * 获取文档ID
                     * @return DocBizId 文档ID
                     * 
                     */
                    std::string GetDocBizId() const;

                    /**
                     * 设置文档ID
                     * @param _docBizId 文档ID
                     * 
                     */
                    void SetDocBizId(const std::string& _docBizId);

                    /**
                     * 判断参数 DocBizId 是否已赋值
                     * @return DocBizId 是否已赋值
                     * 
                     */
                    bool DocBizIdHasBeenSet() const;

                    /**
                     * 获取来源(1 文档生成 2 批量导入 3 手动添加)
不填默认值为0，表示不过滤，返回所有状态
                     * @return Source 来源(1 文档生成 2 批量导入 3 手动添加)
不填默认值为0，表示不过滤，返回所有状态
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置来源(1 文档生成 2 批量导入 3 手动添加)
不填默认值为0，表示不过滤，返回所有状态
                     * @param _source 来源(1 文档生成 2 批量导入 3 手动添加)
不填默认值为0，表示不过滤，返回所有状态
                     * 
                     */
                    void SetSource(const int64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取查询答案
                     * @return QueryAnswer 查询答案
                     * 
                     */
                    std::string GetQueryAnswer() const;

                    /**
                     * 设置查询答案
                     * @param _queryAnswer 查询答案
                     * 
                     */
                    void SetQueryAnswer(const std::string& _queryAnswer);

                    /**
                     * 判断参数 QueryAnswer 是否已赋值
                     * @return QueryAnswer 是否已赋值
                     * 
                     */
                    bool QueryAnswerHasBeenSet() const;

                    /**
                     * 获取分类ID
                     * @return CateBizId 分类ID
                     * 
                     */
                    std::string GetCateBizId() const;

                    /**
                     * 设置分类ID
                     * @param _cateBizId 分类ID
                     * 
                     */
                    void SetCateBizId(const std::string& _cateBizId);

                    /**
                     * 判断参数 CateBizId 是否已赋值
                     * @return CateBizId 是否已赋值
                     * 
                     */
                    bool CateBizIdHasBeenSet() const;

                    /**
                     * 获取QA业务ID列表
                     * @return QaBizIds QA业务ID列表
                     * 
                     */
                    std::vector<std::string> GetQaBizIds() const;

                    /**
                     * 设置QA业务ID列表
                     * @param _qaBizIds QA业务ID列表
                     * 
                     */
                    void SetQaBizIds(const std::vector<std::string>& _qaBizIds);

                    /**
                     * 判断参数 QaBizIds 是否已赋值
                     * @return QaBizIds 是否已赋值
                     * 
                     */
                    bool QaBizIdsHasBeenSet() const;

                    /**
                     * 获取查询类型 filename 名称、 attribute 标签
如果不填默认值为"filename"
                     * @return QueryType 查询类型 filename 名称、 attribute 标签
如果不填默认值为"filename"
                     * 
                     */
                    std::string GetQueryType() const;

                    /**
                     * 设置查询类型 filename 名称、 attribute 标签
如果不填默认值为"filename"
                     * @param _queryType 查询类型 filename 名称、 attribute 标签
如果不填默认值为"filename"
                     * 
                     */
                    void SetQueryType(const std::string& _queryType);

                    /**
                     * 判断参数 QueryType 是否已赋值
                     * @return QueryType 是否已赋值
                     * 
                     */
                    bool QueryTypeHasBeenSet() const;

                    /**
                     * 获取是否只展示当前分类的数据 0不是，1是
                     * @return ShowCurrCate 是否只展示当前分类的数据 0不是，1是
                     * 
                     */
                    uint64_t GetShowCurrCate() const;

                    /**
                     * 设置是否只展示当前分类的数据 0不是，1是
                     * @param _showCurrCate 是否只展示当前分类的数据 0不是，1是
                     * 
                     */
                    void SetShowCurrCate(const uint64_t& _showCurrCate);

                    /**
                     * 判断参数 ShowCurrCate 是否已赋值
                     * @return ShowCurrCate 是否已赋值
                     * 
                     */
                    bool ShowCurrCateHasBeenSet() const;

                    /**
                     * 获取// 知识生效作用域枚举值 enum RetrievalEnableScope {   ENABLE_SCOPE_TYPE_UNKNOWN = 0; // 未知类型   ENABLE_SCOPE_TYPE_NONE = 1; // 停用   ENABLE_SCOPE_TYPE_DEV = 2; // 仅开发域   ENABLE_SCOPE_TYPE_RELEASE = 3; // 仅发布域   ENABLE_SCOPE_TYPE_ALL = 4; // 全域 }  问答生效域: 1-停用；2-仅开发域；3-仅发布域；4-全域
                     * @return EnableScope // 知识生效作用域枚举值 enum RetrievalEnableScope {   ENABLE_SCOPE_TYPE_UNKNOWN = 0; // 未知类型   ENABLE_SCOPE_TYPE_NONE = 1; // 停用   ENABLE_SCOPE_TYPE_DEV = 2; // 仅开发域   ENABLE_SCOPE_TYPE_RELEASE = 3; // 仅发布域   ENABLE_SCOPE_TYPE_ALL = 4; // 全域 }  问答生效域: 1-停用；2-仅开发域；3-仅发布域；4-全域
                     * 
                     */
                    int64_t GetEnableScope() const;

                    /**
                     * 设置// 知识生效作用域枚举值 enum RetrievalEnableScope {   ENABLE_SCOPE_TYPE_UNKNOWN = 0; // 未知类型   ENABLE_SCOPE_TYPE_NONE = 1; // 停用   ENABLE_SCOPE_TYPE_DEV = 2; // 仅开发域   ENABLE_SCOPE_TYPE_RELEASE = 3; // 仅发布域   ENABLE_SCOPE_TYPE_ALL = 4; // 全域 }  问答生效域: 1-停用；2-仅开发域；3-仅发布域；4-全域
                     * @param _enableScope // 知识生效作用域枚举值 enum RetrievalEnableScope {   ENABLE_SCOPE_TYPE_UNKNOWN = 0; // 未知类型   ENABLE_SCOPE_TYPE_NONE = 1; // 停用   ENABLE_SCOPE_TYPE_DEV = 2; // 仅开发域   ENABLE_SCOPE_TYPE_RELEASE = 3; // 仅发布域   ENABLE_SCOPE_TYPE_ALL = 4; // 全域 }  问答生效域: 1-停用；2-仅开发域；3-仅发布域；4-全域
                     * 
                     */
                    void SetEnableScope(const int64_t& _enableScope);

                    /**
                     * 判断参数 EnableScope 是否已赋值
                     * @return EnableScope 是否已赋值
                     * 
                     */
                    bool EnableScopeHasBeenSet() const;

                private:

                    /**
                     * 应用ID
若要操作共享知识库，传KnowledgeBizId
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * 页码（取值范围>0）
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页大小(取值范围1-200)
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 查询问题

输入特定标识 lke:system:untagged  将查询所有未关联标签的问答
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 校验状态(1未校验2采纳3不采纳)
如果不填默认值为空数组，表示不筛选，返回所有状态
                     */
                    std::vector<int64_t> m_acceptStatus;
                    bool m_acceptStatusHasBeenSet;

                    /**
                     * 发布状态(2待发布 3发布中 4已发布 7审核中 8审核失败 9人工申述中 11人工申述失败 12已过期 13超量失效 14超量失效恢复)
如果不填默认值为空数组，表示不筛选返回所有状态
                     */
                    std::vector<int64_t> m_releaseStatus;
                    bool m_releaseStatusHasBeenSet;

                    /**
                     * 文档ID
                     */
                    std::string m_docBizId;
                    bool m_docBizIdHasBeenSet;

                    /**
                     * 来源(1 文档生成 2 批量导入 3 手动添加)
不填默认值为0，表示不过滤，返回所有状态
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 查询答案
                     */
                    std::string m_queryAnswer;
                    bool m_queryAnswerHasBeenSet;

                    /**
                     * 分类ID
                     */
                    std::string m_cateBizId;
                    bool m_cateBizIdHasBeenSet;

                    /**
                     * QA业务ID列表
                     */
                    std::vector<std::string> m_qaBizIds;
                    bool m_qaBizIdsHasBeenSet;

                    /**
                     * 查询类型 filename 名称、 attribute 标签
如果不填默认值为"filename"
                     */
                    std::string m_queryType;
                    bool m_queryTypeHasBeenSet;

                    /**
                     * 是否只展示当前分类的数据 0不是，1是
                     */
                    uint64_t m_showCurrCate;
                    bool m_showCurrCateHasBeenSet;

                    /**
                     * // 知识生效作用域枚举值 enum RetrievalEnableScope {   ENABLE_SCOPE_TYPE_UNKNOWN = 0; // 未知类型   ENABLE_SCOPE_TYPE_NONE = 1; // 停用   ENABLE_SCOPE_TYPE_DEV = 2; // 仅开发域   ENABLE_SCOPE_TYPE_RELEASE = 3; // 仅发布域   ENABLE_SCOPE_TYPE_ALL = 4; // 全域 }  问答生效域: 1-停用；2-仅开发域；3-仅发布域；4-全域
                     */
                    int64_t m_enableScope;
                    bool m_enableScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_LISTQAREQUEST_H_
