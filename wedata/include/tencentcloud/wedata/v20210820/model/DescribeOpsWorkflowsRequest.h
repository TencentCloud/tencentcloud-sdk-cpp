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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEOPSWORKFLOWSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEOPSWORKFLOWSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeOpsWorkflows请求参数结构体
                */
                class DescribeOpsWorkflowsRequest : public AbstractModel
                {
                public:
                    DescribeOpsWorkflowsRequest();
                    ~DescribeOpsWorkflowsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
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
                     * 获取任务产品类型名称列表，以 ',' 号分割
                     * @return ProductNameList 任务产品类型名称列表，以 ',' 号分割
                     * 
                     */
                    std::string GetProductNameList() const;

                    /**
                     * 设置任务产品类型名称列表，以 ',' 号分割
                     * @param _productNameList 任务产品类型名称列表，以 ',' 号分割
                     * 
                     */
                    void SetProductNameList(const std::string& _productNameList);

                    /**
                     * 判断参数 ProductNameList 是否已赋值
                     * @return ProductNameList 是否已赋值
                     * 
                     */
                    bool ProductNameListHasBeenSet() const;

                    /**
                     * 获取文件id列表，以 ',' 号分割
                     * @return FolderIdList 文件id列表，以 ',' 号分割
                     * 
                     */
                    std::string GetFolderIdList() const;

                    /**
                     * 设置文件id列表，以 ',' 号分割
                     * @param _folderIdList 文件id列表，以 ',' 号分割
                     * 
                     */
                    void SetFolderIdList(const std::string& _folderIdList);

                    /**
                     * 判断参数 FolderIdList 是否已赋值
                     * @return FolderIdList 是否已赋值
                     * 
                     */
                    bool FolderIdListHasBeenSet() const;

                    /**
                     * 获取工作流id，以 ',' 号分割
                     * @return WorkFlowIdList 工作流id，以 ',' 号分割
                     * 
                     */
                    std::string GetWorkFlowIdList() const;

                    /**
                     * 设置工作流id，以 ',' 号分割
                     * @param _workFlowIdList 工作流id，以 ',' 号分割
                     * 
                     */
                    void SetWorkFlowIdList(const std::string& _workFlowIdList);

                    /**
                     * 判断参数 WorkFlowIdList 是否已赋值
                     * @return WorkFlowIdList 是否已赋值
                     * 
                     */
                    bool WorkFlowIdListHasBeenSet() const;

                    /**
                     * 获取工作流名称列表，以 ',' 号分割
                     * @return WorkFlowNameList 工作流名称列表，以 ',' 号分割
                     * 
                     */
                    std::string GetWorkFlowNameList() const;

                    /**
                     * 设置工作流名称列表，以 ',' 号分割
                     * @param _workFlowNameList 工作流名称列表，以 ',' 号分割
                     * 
                     */
                    void SetWorkFlowNameList(const std::string& _workFlowNameList);

                    /**
                     * 判断参数 WorkFlowNameList 是否已赋值
                     * @return WorkFlowNameList 是否已赋值
                     * 
                     */
                    bool WorkFlowNameListHasBeenSet() const;

                    /**
                     * 获取任务名称列表，以 ',' 号分割
                     * @return TaskNameList 任务名称列表，以 ',' 号分割
                     * 
                     */
                    std::string GetTaskNameList() const;

                    /**
                     * 设置任务名称列表，以 ',' 号分割
                     * @param _taskNameList 任务名称列表，以 ',' 号分割
                     * 
                     */
                    void SetTaskNameList(const std::string& _taskNameList);

                    /**
                     * 判断参数 TaskNameList 是否已赋值
                     * @return TaskNameList 是否已赋值
                     * 
                     */
                    bool TaskNameListHasBeenSet() const;

                    /**
                     * 获取任务id列表，以 ',' 号分割
                     * @return TaskIdList 任务id列表，以 ',' 号分割
                     * 
                     */
                    std::string GetTaskIdList() const;

                    /**
                     * 设置任务id列表，以 ',' 号分割
                     * @param _taskIdList 任务id列表，以 ',' 号分割
                     * 
                     */
                    void SetTaskIdList(const std::string& _taskIdList);

                    /**
                     * 判断参数 TaskIdList 是否已赋值
                     * @return TaskIdList 是否已赋值
                     * 
                     */
                    bool TaskIdListHasBeenSet() const;

                    /**
                     * 获取状态列表，以 ',' 号分割
                     * @return StatusList 状态列表，以 ',' 号分割
                     * 
                     */
                    std::string GetStatusList() const;

                    /**
                     * 设置状态列表，以 ',' 号分割
                     * @param _statusList 状态列表，以 ',' 号分割
                     * 
                     */
                    void SetStatusList(const std::string& _statusList);

                    /**
                     * 判断参数 StatusList 是否已赋值
                     * @return StatusList 是否已赋值
                     * 
                     */
                    bool StatusListHasBeenSet() const;

                    /**
                     * 获取负责人列表，以 ',' 号分割
                     * @return InChargeList 负责人列表，以 ',' 号分割
                     * 
                     */
                    std::string GetInChargeList() const;

                    /**
                     * 设置负责人列表，以 ',' 号分割
                     * @param _inChargeList 负责人列表，以 ',' 号分割
                     * 
                     */
                    void SetInChargeList(const std::string& _inChargeList);

                    /**
                     * 判断参数 InChargeList 是否已赋值
                     * @return InChargeList 是否已赋值
                     * 
                     */
                    bool InChargeListHasBeenSet() const;

                    /**
                     * 获取分页页码
                     * @return PageNumber 分页页码
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置分页页码
                     * @param _pageNumber 分页页码
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
                     * 获取排序项
                     * @return SortItem 排序项
                     * 
                     */
                    std::string GetSortItem() const;

                    /**
                     * 设置排序项
                     * @param _sortItem 排序项
                     * 
                     */
                    void SetSortItem(const std::string& _sortItem);

                    /**
                     * 判断参数 SortItem 是否已赋值
                     * @return SortItem 是否已赋值
                     * 
                     */
                    bool SortItemHasBeenSet() const;

                    /**
                     * 获取排序方式，DESC或ASC
                     * @return SortType 排序方式，DESC或ASC
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置排序方式，DESC或ASC
                     * @param _sortType 排序方式，DESC或ASC
                     * 
                     */
                    void SetSortType(const std::string& _sortType);

                    /**
                     * 判断参数 SortType 是否已赋值
                     * @return SortType 是否已赋值
                     * 
                     */
                    bool SortTypeHasBeenSet() const;

                    /**
                     * 获取项目ID列表，用于多项目工作流筛选
                     * @return ProjectIds 项目ID列表，用于多项目工作流筛选
                     * 
                     */
                    std::vector<std::string> GetProjectIds() const;

                    /**
                     * 设置项目ID列表，用于多项目工作流筛选
                     * @param _projectIds 项目ID列表，用于多项目工作流筛选
                     * 
                     */
                    void SetProjectIds(const std::vector<std::string>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取工作流类型列表 多个用英文逗号连接 cycle,manual. 默认只查询 cycle
                     * @return WorkflowTypeList 工作流类型列表 多个用英文逗号连接 cycle,manual. 默认只查询 cycle
                     * 
                     */
                    std::vector<std::string> GetWorkflowTypeList() const;

                    /**
                     * 设置工作流类型列表 多个用英文逗号连接 cycle,manual. 默认只查询 cycle
                     * @param _workflowTypeList 工作流类型列表 多个用英文逗号连接 cycle,manual. 默认只查询 cycle
                     * 
                     */
                    void SetWorkflowTypeList(const std::vector<std::string>& _workflowTypeList);

                    /**
                     * 判断参数 WorkflowTypeList 是否已赋值
                     * @return WorkflowTypeList 是否已赋值
                     * 
                     */
                    bool WorkflowTypeListHasBeenSet() const;

                    /**
                     * 获取工作流过滤keyword，支持工作流 id/name 模糊匹配， 多个用|分割
                     * @return KeyWord 工作流过滤keyword，支持工作流 id/name 模糊匹配， 多个用|分割
                     * 
                     */
                    std::string GetKeyWord() const;

                    /**
                     * 设置工作流过滤keyword，支持工作流 id/name 模糊匹配， 多个用|分割
                     * @param _keyWord 工作流过滤keyword，支持工作流 id/name 模糊匹配， 多个用|分割
                     * 
                     */
                    void SetKeyWord(const std::string& _keyWord);

                    /**
                     * 判断参数 KeyWord 是否已赋值
                     * @return KeyWord 是否已赋值
                     * 
                     */
                    bool KeyWordHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务产品类型名称列表，以 ',' 号分割
                     */
                    std::string m_productNameList;
                    bool m_productNameListHasBeenSet;

                    /**
                     * 文件id列表，以 ',' 号分割
                     */
                    std::string m_folderIdList;
                    bool m_folderIdListHasBeenSet;

                    /**
                     * 工作流id，以 ',' 号分割
                     */
                    std::string m_workFlowIdList;
                    bool m_workFlowIdListHasBeenSet;

                    /**
                     * 工作流名称列表，以 ',' 号分割
                     */
                    std::string m_workFlowNameList;
                    bool m_workFlowNameListHasBeenSet;

                    /**
                     * 任务名称列表，以 ',' 号分割
                     */
                    std::string m_taskNameList;
                    bool m_taskNameListHasBeenSet;

                    /**
                     * 任务id列表，以 ',' 号分割
                     */
                    std::string m_taskIdList;
                    bool m_taskIdListHasBeenSet;

                    /**
                     * 状态列表，以 ',' 号分割
                     */
                    std::string m_statusList;
                    bool m_statusListHasBeenSet;

                    /**
                     * 负责人列表，以 ',' 号分割
                     */
                    std::string m_inChargeList;
                    bool m_inChargeListHasBeenSet;

                    /**
                     * 分页页码
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 分页大小
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 排序项
                     */
                    std::string m_sortItem;
                    bool m_sortItemHasBeenSet;

                    /**
                     * 排序方式，DESC或ASC
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * 项目ID列表，用于多项目工作流筛选
                     */
                    std::vector<std::string> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * 工作流类型列表 多个用英文逗号连接 cycle,manual. 默认只查询 cycle
                     */
                    std::vector<std::string> m_workflowTypeList;
                    bool m_workflowTypeListHasBeenSet;

                    /**
                     * 工作流过滤keyword，支持工作流 id/name 模糊匹配， 多个用|分割
                     */
                    std::string m_keyWord;
                    bool m_keyWordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEOPSWORKFLOWSREQUEST_H_
