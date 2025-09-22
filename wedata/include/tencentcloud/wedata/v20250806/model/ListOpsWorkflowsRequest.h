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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTOPSWORKFLOWSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTOPSWORKFLOWSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * ListOpsWorkflows请求参数结构体
                */
                class ListOpsWorkflowsRequest : public AbstractModel
                {
                public:
                    ListOpsWorkflowsRequest();
                    ~ListOpsWorkflowsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param _projectId 项目Id
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
                     * 获取文件Id
                     * @return FolderId 文件Id
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置文件Id
                     * @param _folderId 文件Id
                     * 
                     */
                    void SetFolderId(const std::string& _folderId);

                    /**
                     * 判断参数 FolderId 是否已赋值
                     * @return FolderId 是否已赋值
                     * 
                     */
                    bool FolderIdHasBeenSet() const;

                    /**
                     * 获取工作流状态筛选
* ALL_RUNNING : 全部调度中
* ALL_FREEZED : 全部已暂停
* ALL_STOPPTED : 全部已下线
* PART_RUNNING : 部分调度中
* ALL_NO_RUNNING : 全部未调度
* ALL_INVALID : 全部已失效
                     * @return Status 工作流状态筛选
* ALL_RUNNING : 全部调度中
* ALL_FREEZED : 全部已暂停
* ALL_STOPPTED : 全部已下线
* PART_RUNNING : 部分调度中
* ALL_NO_RUNNING : 全部未调度
* ALL_INVALID : 全部已失效
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置工作流状态筛选
* ALL_RUNNING : 全部调度中
* ALL_FREEZED : 全部已暂停
* ALL_STOPPTED : 全部已下线
* PART_RUNNING : 部分调度中
* ALL_NO_RUNNING : 全部未调度
* ALL_INVALID : 全部已失效
                     * @param _status 工作流状态筛选
* ALL_RUNNING : 全部调度中
* ALL_FREEZED : 全部已暂停
* ALL_STOPPTED : 全部已下线
* PART_RUNNING : 部分调度中
* ALL_NO_RUNNING : 全部未调度
* ALL_INVALID : 全部已失效
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取负责人Id
                     * @return OwnerUin 负责人Id
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置负责人Id
                     * @param _ownerUin 负责人Id
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取工作流类型筛选, 支持值 Cycle或Manual. 默认只查询 Cycle
                     * @return WorkflowType 工作流类型筛选, 支持值 Cycle或Manual. 默认只查询 Cycle
                     * 
                     */
                    std::string GetWorkflowType() const;

                    /**
                     * 设置工作流类型筛选, 支持值 Cycle或Manual. 默认只查询 Cycle
                     * @param _workflowType 工作流类型筛选, 支持值 Cycle或Manual. 默认只查询 Cycle
                     * 
                     */
                    void SetWorkflowType(const std::string& _workflowType);

                    /**
                     * 判断参数 WorkflowType 是否已赋值
                     * @return WorkflowType 是否已赋值
                     * 
                     */
                    bool WorkflowTypeHasBeenSet() const;

                    /**
                     * 获取工作流关键词过滤，支持工作流 Id/name 模糊匹配
                     * @return KeyWord 工作流关键词过滤，支持工作流 Id/name 模糊匹配
                     * 
                     */
                    std::string GetKeyWord() const;

                    /**
                     * 设置工作流关键词过滤，支持工作流 Id/name 模糊匹配
                     * @param _keyWord 工作流关键词过滤，支持工作流 Id/name 模糊匹配
                     * 
                     */
                    void SetKeyWord(const std::string& _keyWord);

                    /**
                     * 判断参数 KeyWord 是否已赋值
                     * @return KeyWord 是否已赋值
                     * 
                     */
                    bool KeyWordHasBeenSet() const;

                    /**
                     * 获取排序项，可选CreateTime、TaskCount
                     * @return SortItem 排序项，可选CreateTime、TaskCount
                     * 
                     */
                    std::string GetSortItem() const;

                    /**
                     * 设置排序项，可选CreateTime、TaskCount
                     * @param _sortItem 排序项，可选CreateTime、TaskCount
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
                     * 获取排序方式，DESC或ASC, 大写
                     * @return SortType 排序方式，DESC或ASC, 大写
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置排序方式，DESC或ASC, 大写
                     * @param _sortType 排序方式，DESC或ASC, 大写
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
                     * 获取创建人Id
                     * @return CreateUserUin 创建人Id
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置创建人Id
                     * @param _createUserUin 创建人Id
                     * 
                     */
                    void SetCreateUserUin(const std::string& _createUserUin);

                    /**
                     * 判断参数 CreateUserUin 是否已赋值
                     * @return CreateUserUin 是否已赋值
                     * 
                     */
                    bool CreateUserUinHasBeenSet() const;

                    /**
                     * 获取更新时间，格式yyyy-MM-dd HH:mm:ss
                     * @return ModifyTime 更新时间，格式yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置更新时间，格式yyyy-MM-dd HH:mm:ss
                     * @param _modifyTime 更新时间，格式yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取创建时间，格式yyyy-MM-dd HH:mm:ss
                     * @return CreateTime 创建时间，格式yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间，格式yyyy-MM-dd HH:mm:ss
                     * @param _createTime 创建时间，格式yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

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
                     * 文件Id
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * 工作流状态筛选
* ALL_RUNNING : 全部调度中
* ALL_FREEZED : 全部已暂停
* ALL_STOPPTED : 全部已下线
* PART_RUNNING : 部分调度中
* ALL_NO_RUNNING : 全部未调度
* ALL_INVALID : 全部已失效
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 负责人Id
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 工作流类型筛选, 支持值 Cycle或Manual. 默认只查询 Cycle
                     */
                    std::string m_workflowType;
                    bool m_workflowTypeHasBeenSet;

                    /**
                     * 工作流关键词过滤，支持工作流 Id/name 模糊匹配
                     */
                    std::string m_keyWord;
                    bool m_keyWordHasBeenSet;

                    /**
                     * 排序项，可选CreateTime、TaskCount
                     */
                    std::string m_sortItem;
                    bool m_sortItemHasBeenSet;

                    /**
                     * 排序方式，DESC或ASC, 大写
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * 创建人Id
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * 更新时间，格式yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 创建时间，格式yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTOPSWORKFLOWSREQUEST_H_
