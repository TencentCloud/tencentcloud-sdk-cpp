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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKFLOWSREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKFLOWSREQUEST_H_

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
                * ListWorkflows请求参数结构体
                */
                class ListWorkflowsRequest : public AbstractModel
                {
                public:
                    ListWorkflowsRequest();
                    ~ListWorkflowsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>工作空间ID，可通过 ListWorkspaces 获取。必填</p>
                     * @return WorkspaceId <p>工作空间ID，可通过 ListWorkspaces 获取。必填</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>工作空间ID，可通过 ListWorkspaces 获取。必填</p>
                     * @param _workspaceId <p>工作空间ID，可通过 ListWorkspaces 获取。必填</p>
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
                     * 获取<p>分页页码，从 1 开始。非必填，默认 1</p>
                     * @return PageNumber <p>分页页码，从 1 开始。非必填，默认 1</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>分页页码，从 1 开始。非必填，默认 1</p>
                     * @param _pageNumber <p>分页页码，从 1 开始。非必填，默认 1</p>
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
                     * 获取<p>每页大小。非必填，默认 10，取值范围 [10, 200]</p>
                     * @return PageSize <p>每页大小。非必填，默认 10，取值范围 [10, 200]</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>每页大小。非必填，默认 10，取值范围 [10, 200]</p>
                     * @param _pageSize <p>每页大小。非必填，默认 10，取值范围 [10, 200]</p>
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
                     * 获取<p>工作流名称关键字，对 WorkflowName 做模糊匹配。非必填，单值</p>
                     * @return WorkflowNameKeyword <p>工作流名称关键字，对 WorkflowName 做模糊匹配。非必填，单值</p>
                     * 
                     */
                    std::string GetWorkflowNameKeyword() const;

                    /**
                     * 设置<p>工作流名称关键字，对 WorkflowName 做模糊匹配。非必填，单值</p>
                     * @param _workflowNameKeyword <p>工作流名称关键字，对 WorkflowName 做模糊匹配。非必填，单值</p>
                     * 
                     */
                    void SetWorkflowNameKeyword(const std::string& _workflowNameKeyword);

                    /**
                     * 判断参数 WorkflowNameKeyword 是否已赋值
                     * @return WorkflowNameKeyword 是否已赋值
                     * 
                     */
                    bool WorkflowNameKeywordHasBeenSet() const;

                    /**
                     * 获取<p>工作流名称，精确匹配。非必填，多选（多个值之间为 OR 关系）</p>
                     * @return WorkflowNames <p>工作流名称，精确匹配。非必填，多选（多个值之间为 OR 关系）</p>
                     * 
                     */
                    std::vector<std::string> GetWorkflowNames() const;

                    /**
                     * 设置<p>工作流名称，精确匹配。非必填，多选（多个值之间为 OR 关系）</p>
                     * @param _workflowNames <p>工作流名称，精确匹配。非必填，多选（多个值之间为 OR 关系）</p>
                     * 
                     */
                    void SetWorkflowNames(const std::vector<std::string>& _workflowNames);

                    /**
                     * 判断参数 WorkflowNames 是否已赋值
                     * @return WorkflowNames 是否已赋值
                     * 
                     */
                    bool WorkflowNamesHasBeenSet() const;

                    /**
                     * 获取<p>工作流ID，精确匹配。非必填，多选（多个值之间为 OR 关系）</p>
                     * @return WorkflowIds <p>工作流ID，精确匹配。非必填，多选（多个值之间为 OR 关系）</p>
                     * 
                     */
                    std::vector<std::string> GetWorkflowIds() const;

                    /**
                     * 设置<p>工作流ID，精确匹配。非必填，多选（多个值之间为 OR 关系）</p>
                     * @param _workflowIds <p>工作流ID，精确匹配。非必填，多选（多个值之间为 OR 关系）</p>
                     * 
                     */
                    void SetWorkflowIds(const std::vector<std::string>& _workflowIds);

                    /**
                     * 判断参数 WorkflowIds 是否已赋值
                     * @return WorkflowIds 是否已赋值
                     * 
                     */
                    bool WorkflowIdsHasBeenSet() const;

                    /**
                     * 获取<p>工作流运行人UIN，精确匹配。非必填，多选（多个值之间为 OR 关系）</p>
                     * @return RunUserUins <p>工作流运行人UIN，精确匹配。非必填，多选（多个值之间为 OR 关系）</p>
                     * 
                     */
                    std::vector<std::string> GetRunUserUins() const;

                    /**
                     * 设置<p>工作流运行人UIN，精确匹配。非必填，多选（多个值之间为 OR 关系）</p>
                     * @param _runUserUins <p>工作流运行人UIN，精确匹配。非必填，多选（多个值之间为 OR 关系）</p>
                     * 
                     */
                    void SetRunUserUins(const std::vector<std::string>& _runUserUins);

                    /**
                     * 判断参数 RunUserUins 是否已赋值
                     * @return RunUserUins 是否已赋值
                     * 
                     */
                    bool RunUserUinsHasBeenSet() const;

                    /**
                     * 获取<p>标签名称ID，精确匹配，可通过标签相关接口获取。非必填，多选（多个值之间为 OR 关系）</p>
                     * @return LabelKeyIds <p>标签名称ID，精确匹配，可通过标签相关接口获取。非必填，多选（多个值之间为 OR 关系）</p>
                     * 
                     */
                    std::vector<std::string> GetLabelKeyIds() const;

                    /**
                     * 设置<p>标签名称ID，精确匹配，可通过标签相关接口获取。非必填，多选（多个值之间为 OR 关系）</p>
                     * @param _labelKeyIds <p>标签名称ID，精确匹配，可通过标签相关接口获取。非必填，多选（多个值之间为 OR 关系）</p>
                     * 
                     */
                    void SetLabelKeyIds(const std::vector<std::string>& _labelKeyIds);

                    /**
                     * 判断参数 LabelKeyIds 是否已赋值
                     * @return LabelKeyIds 是否已赋值
                     * 
                     */
                    bool LabelKeyIdsHasBeenSet() const;

                    /**
                     * 获取<p>标签值ID，精确匹配，可通过标签相关接口获取。非必填，多选（多个值之间为 OR 关系）</p>
                     * @return LabelValueIds <p>标签值ID，精确匹配，可通过标签相关接口获取。非必填，多选（多个值之间为 OR 关系）</p>
                     * 
                     */
                    std::vector<std::string> GetLabelValueIds() const;

                    /**
                     * 设置<p>标签值ID，精确匹配，可通过标签相关接口获取。非必填，多选（多个值之间为 OR 关系）</p>
                     * @param _labelValueIds <p>标签值ID，精确匹配，可通过标签相关接口获取。非必填，多选（多个值之间为 OR 关系）</p>
                     * 
                     */
                    void SetLabelValueIds(const std::vector<std::string>& _labelValueIds);

                    /**
                     * 判断参数 LabelValueIds 是否已赋值
                     * @return LabelValueIds 是否已赋值
                     * 
                     */
                    bool LabelValueIdsHasBeenSet() const;

                    /**
                     * 获取<p>快速筛选类型。非必填，单值</p><p>对齐老云 API（wedata/2025-10-10）文档示例值：</p><ul><li>MY_FAVORITE：我收藏的</li><li>MY_OWNER：我负责的</li><li>MY_AUTHORITY：我有权限</li><li>WorkflowId：支持多个工作流ID筛选</li></ul><p>后端实现现状：当前仅 MY_FAVORITE 生效（设置 favoriteUserUin 过滤当前用户收藏），MY_OWNER / MY_AUTHORITY 暂未在 Service 层实现，传入会被忽略（按全量返回）。</p>
                     * @return QuickSelectionType <p>快速筛选类型。非必填，单值</p><p>对齐老云 API（wedata/2025-10-10）文档示例值：</p><ul><li>MY_FAVORITE：我收藏的</li><li>MY_OWNER：我负责的</li><li>MY_AUTHORITY：我有权限</li><li>WorkflowId：支持多个工作流ID筛选</li></ul><p>后端实现现状：当前仅 MY_FAVORITE 生效（设置 favoriteUserUin 过滤当前用户收藏），MY_OWNER / MY_AUTHORITY 暂未在 Service 层实现，传入会被忽略（按全量返回）。</p>
                     * 
                     */
                    std::string GetQuickSelectionType() const;

                    /**
                     * 设置<p>快速筛选类型。非必填，单值</p><p>对齐老云 API（wedata/2025-10-10）文档示例值：</p><ul><li>MY_FAVORITE：我收藏的</li><li>MY_OWNER：我负责的</li><li>MY_AUTHORITY：我有权限</li><li>WorkflowId：支持多个工作流ID筛选</li></ul><p>后端实现现状：当前仅 MY_FAVORITE 生效（设置 favoriteUserUin 过滤当前用户收藏），MY_OWNER / MY_AUTHORITY 暂未在 Service 层实现，传入会被忽略（按全量返回）。</p>
                     * @param _quickSelectionType <p>快速筛选类型。非必填，单值</p><p>对齐老云 API（wedata/2025-10-10）文档示例值：</p><ul><li>MY_FAVORITE：我收藏的</li><li>MY_OWNER：我负责的</li><li>MY_AUTHORITY：我有权限</li><li>WorkflowId：支持多个工作流ID筛选</li></ul><p>后端实现现状：当前仅 MY_FAVORITE 生效（设置 favoriteUserUin 过滤当前用户收藏），MY_OWNER / MY_AUTHORITY 暂未在 Service 层实现，传入会被忽略（按全量返回）。</p>
                     * 
                     */
                    void SetQuickSelectionType(const std::string& _quickSelectionType);

                    /**
                     * 判断参数 QuickSelectionType 是否已赋值
                     * @return QuickSelectionType 是否已赋值
                     * 
                     */
                    bool QuickSelectionTypeHasBeenSet() const;

                    /**
                     * 获取<p>排序条件，多个之间按数组顺序表示优先级。非必填。<br>可排序字段白名单：CreateTime</p>
                     * @return OrderBys <p>排序条件，多个之间按数组顺序表示优先级。非必填。<br>可排序字段白名单：CreateTime</p>
                     * 
                     */
                    std::vector<OrderBy> GetOrderBys() const;

                    /**
                     * 设置<p>排序条件，多个之间按数组顺序表示优先级。非必填。<br>可排序字段白名单：CreateTime</p>
                     * @param _orderBys <p>排序条件，多个之间按数组顺序表示优先级。非必填。<br>可排序字段白名单：CreateTime</p>
                     * 
                     */
                    void SetOrderBys(const std::vector<OrderBy>& _orderBys);

                    /**
                     * 判断参数 OrderBys 是否已赋值
                     * @return OrderBys 是否已赋值
                     * 
                     */
                    bool OrderBysHasBeenSet() const;

                private:

                    /**
                     * <p>工作空间ID，可通过 ListWorkspaces 获取。必填</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>分页页码，从 1 开始。非必填，默认 1</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>每页大小。非必填，默认 10，取值范围 [10, 200]</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>工作流名称关键字，对 WorkflowName 做模糊匹配。非必填，单值</p>
                     */
                    std::string m_workflowNameKeyword;
                    bool m_workflowNameKeywordHasBeenSet;

                    /**
                     * <p>工作流名称，精确匹配。非必填，多选（多个值之间为 OR 关系）</p>
                     */
                    std::vector<std::string> m_workflowNames;
                    bool m_workflowNamesHasBeenSet;

                    /**
                     * <p>工作流ID，精确匹配。非必填，多选（多个值之间为 OR 关系）</p>
                     */
                    std::vector<std::string> m_workflowIds;
                    bool m_workflowIdsHasBeenSet;

                    /**
                     * <p>工作流运行人UIN，精确匹配。非必填，多选（多个值之间为 OR 关系）</p>
                     */
                    std::vector<std::string> m_runUserUins;
                    bool m_runUserUinsHasBeenSet;

                    /**
                     * <p>标签名称ID，精确匹配，可通过标签相关接口获取。非必填，多选（多个值之间为 OR 关系）</p>
                     */
                    std::vector<std::string> m_labelKeyIds;
                    bool m_labelKeyIdsHasBeenSet;

                    /**
                     * <p>标签值ID，精确匹配，可通过标签相关接口获取。非必填，多选（多个值之间为 OR 关系）</p>
                     */
                    std::vector<std::string> m_labelValueIds;
                    bool m_labelValueIdsHasBeenSet;

                    /**
                     * <p>快速筛选类型。非必填，单值</p><p>对齐老云 API（wedata/2025-10-10）文档示例值：</p><ul><li>MY_FAVORITE：我收藏的</li><li>MY_OWNER：我负责的</li><li>MY_AUTHORITY：我有权限</li><li>WorkflowId：支持多个工作流ID筛选</li></ul><p>后端实现现状：当前仅 MY_FAVORITE 生效（设置 favoriteUserUin 过滤当前用户收藏），MY_OWNER / MY_AUTHORITY 暂未在 Service 层实现，传入会被忽略（按全量返回）。</p>
                     */
                    std::string m_quickSelectionType;
                    bool m_quickSelectionTypeHasBeenSet;

                    /**
                     * <p>排序条件，多个之间按数组顺序表示优先级。非必填。<br>可排序字段白名单：CreateTime</p>
                     */
                    std::vector<OrderBy> m_orderBys;
                    bool m_orderBysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKFLOWSREQUEST_H_
