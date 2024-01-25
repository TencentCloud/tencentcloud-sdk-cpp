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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_PROJECTCLONEWORKFLOWINFOPAGENEW_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_PROJECTCLONEWORKFLOWINFOPAGENEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ProjectCloneWorkflowInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 【项目克隆】工作流分页返回数据（新版）
                */
                class ProjectCloneWorkflowInfoPageNew : public AbstractModel
                {
                public:
                    ProjectCloneWorkflowInfoPageNew();
                    ~ProjectCloneWorkflowInfoPageNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取item 总数量
                     * @return TotalItems item 总数量
                     * 
                     */
                    uint64_t GetTotalItems() const;

                    /**
                     * 设置item 总数量
                     * @param _totalItems item 总数量
                     * 
                     */
                    void SetTotalItems(const uint64_t& _totalItems);

                    /**
                     * 判断参数 TotalItems 是否已赋值
                     * @return TotalItems 是否已赋值
                     * 
                     */
                    bool TotalItemsHasBeenSet() const;

                    /**
                     * 获取总页数
                     * @return TotalPages 总页数
                     * 
                     */
                    uint64_t GetTotalPages() const;

                    /**
                     * 设置总页数
                     * @param _totalPages 总页数
                     * 
                     */
                    void SetTotalPages(const uint64_t& _totalPages);

                    /**
                     * 判断参数 TotalPages 是否已赋值
                     * @return TotalPages 是否已赋值
                     * 
                     */
                    bool TotalPagesHasBeenSet() const;

                    /**
                     * 获取当前页号
                     * @return CurrentPage 当前页号
                     * 
                     */
                    uint64_t GetCurrentPage() const;

                    /**
                     * 设置当前页号
                     * @param _currentPage 当前页号
                     * 
                     */
                    void SetCurrentPage(const uint64_t& _currentPage);

                    /**
                     * 判断参数 CurrentPage 是否已赋值
                     * @return CurrentPage 是否已赋值
                     * 
                     */
                    bool CurrentPageHasBeenSet() const;

                    /**
                     * 获取页大小
                     * @return PageSize 页大小
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置页大小
                     * @param _pageSize 页大小
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
                     * 获取当前页实际 item 数量
                     * @return CurrentPageItems 当前页实际 item 数量
                     * 
                     */
                    uint64_t GetCurrentPageItems() const;

                    /**
                     * 设置当前页实际 item 数量
                     * @param _currentPageItems 当前页实际 item 数量
                     * 
                     */
                    void SetCurrentPageItems(const uint64_t& _currentPageItems);

                    /**
                     * 判断参数 CurrentPageItems 是否已赋值
                     * @return CurrentPageItems 是否已赋值
                     * 
                     */
                    bool CurrentPageItemsHasBeenSet() const;

                    /**
                     * 获取工作流列表信息-项目克隆
                     * @return Items 工作流列表信息-项目克隆
                     * 
                     */
                    std::vector<ProjectCloneWorkflowInfo> GetItems() const;

                    /**
                     * 设置工作流列表信息-项目克隆
                     * @param _items 工作流列表信息-项目克隆
                     * 
                     */
                    void SetItems(const std::vector<ProjectCloneWorkflowInfo>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * item 总数量
                     */
                    uint64_t m_totalItems;
                    bool m_totalItemsHasBeenSet;

                    /**
                     * 总页数
                     */
                    uint64_t m_totalPages;
                    bool m_totalPagesHasBeenSet;

                    /**
                     * 当前页号
                     */
                    uint64_t m_currentPage;
                    bool m_currentPageHasBeenSet;

                    /**
                     * 页大小
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 当前页实际 item 数量
                     */
                    uint64_t m_currentPageItems;
                    bool m_currentPageItemsHasBeenSet;

                    /**
                     * 工作流列表信息-项目克隆
                     */
                    std::vector<ProjectCloneWorkflowInfo> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_PROJECTCLONEWORKFLOWINFOPAGENEW_H_
