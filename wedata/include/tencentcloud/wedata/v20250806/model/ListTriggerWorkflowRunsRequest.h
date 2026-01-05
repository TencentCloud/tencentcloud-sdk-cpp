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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTRIGGERWORKFLOWRUNSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTRIGGERWORKFLOWRUNSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/Filter.h>
#include <tencentcloud/wedata/v20250806/model/OrderField.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * ListTriggerWorkflowRuns请求参数结构体
                */
                class ListTriggerWorkflowRunsRequest : public AbstractModel
                {
                public:
                    ListTriggerWorkflowRunsRequest();
                    ~ListTriggerWorkflowRunsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取过滤参数,工作流名称或ID查询名称：Keyword,工作流ID查询名称：WorkflowId,文件夹查询名称：FolderId,负责人查询名称：InChargeUin, 工作流执行id: ExecutionId
                     * @return Filters 过滤参数,工作流名称或ID查询名称：Keyword,工作流ID查询名称：WorkflowId,文件夹查询名称：FolderId,负责人查询名称：InChargeUin, 工作流执行id: ExecutionId
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤参数,工作流名称或ID查询名称：Keyword,工作流ID查询名称：WorkflowId,文件夹查询名称：FolderId,负责人查询名称：InChargeUin, 工作流执行id: ExecutionId
                     * @param _filters 过滤参数,工作流名称或ID查询名称：Keyword,工作流ID查询名称：WorkflowId,文件夹查询名称：FolderId,负责人查询名称：InChargeUin, 工作流执行id: ExecutionId
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
                     * 获取排序字段，排序字段名称	如下开始时间：CreateTime，结束时间：EndTime
                     * @return OrderFields 排序字段，排序字段名称	如下开始时间：CreateTime，结束时间：EndTime
                     * 
                     */
                    std::vector<OrderField> GetOrderFields() const;

                    /**
                     * 设置排序字段，排序字段名称	如下开始时间：CreateTime，结束时间：EndTime
                     * @param _orderFields 排序字段，排序字段名称	如下开始时间：CreateTime，结束时间：EndTime
                     * 
                     */
                    void SetOrderFields(const std::vector<OrderField>& _orderFields);

                    /**
                     * 判断参数 OrderFields 是否已赋值
                     * @return OrderFields 是否已赋值
                     * 
                     */
                    bool OrderFieldsHasBeenSet() const;

                    /**
                     * 获取页码
                     * @return PageNumber 页码
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页码
                     * @param _pageNumber 页码
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

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

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 过滤参数,工作流名称或ID查询名称：Keyword,工作流ID查询名称：WorkflowId,文件夹查询名称：FolderId,负责人查询名称：InChargeUin, 工作流执行id: ExecutionId
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序字段，排序字段名称	如下开始时间：CreateTime，结束时间：EndTime
                     */
                    std::vector<OrderField> m_orderFields;
                    bool m_orderFieldsHasBeenSet;

                    /**
                     * 页码
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 页大小
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTRIGGERWORKFLOWRUNSREQUEST_H_
