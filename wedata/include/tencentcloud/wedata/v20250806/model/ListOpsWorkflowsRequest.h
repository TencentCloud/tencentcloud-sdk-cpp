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
                     * 获取<p>项目Id</p>
                     * @return ProjectId <p>项目Id</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目Id</p>
                     * @param _projectId <p>项目Id</p>
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
                     * 获取<p>分页页码</p>
                     * @return PageNumber <p>分页页码</p>
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置<p>分页页码</p>
                     * @param _pageNumber <p>分页页码</p>
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
                     * 获取<p>文件Id</p>
                     * @return FolderId <p>文件Id</p>
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置<p>文件Id</p>
                     * @param _folderId <p>文件Id</p>
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
                     * 获取<p>工作流状态筛选</p><ul><li>ALL_RUNNING : 全部调度中</li><li>ALL_FREEZED : 全部已暂停</li><li>ALL_STOPPTED : 全部已下线</li><li>PART_RUNNING : 部分调度中</li><li>ALL_NO_RUNNING : 全部未调度</li><li>ALL_INVALID : 全部已失效</li></ul>
                     * @return Status <p>工作流状态筛选</p><ul><li>ALL_RUNNING : 全部调度中</li><li>ALL_FREEZED : 全部已暂停</li><li>ALL_STOPPTED : 全部已下线</li><li>PART_RUNNING : 部分调度中</li><li>ALL_NO_RUNNING : 全部未调度</li><li>ALL_INVALID : 全部已失效</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>工作流状态筛选</p><ul><li>ALL_RUNNING : 全部调度中</li><li>ALL_FREEZED : 全部已暂停</li><li>ALL_STOPPTED : 全部已下线</li><li>PART_RUNNING : 部分调度中</li><li>ALL_NO_RUNNING : 全部未调度</li><li>ALL_INVALID : 全部已失效</li></ul>
                     * @param _status <p>工作流状态筛选</p><ul><li>ALL_RUNNING : 全部调度中</li><li>ALL_FREEZED : 全部已暂停</li><li>ALL_STOPPTED : 全部已下线</li><li>PART_RUNNING : 部分调度中</li><li>ALL_NO_RUNNING : 全部未调度</li><li>ALL_INVALID : 全部已失效</li></ul>
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
                     * 获取<p>负责人Id</p>
                     * @return OwnerUin <p>负责人Id</p>
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>负责人Id</p>
                     * @param _ownerUin <p>负责人Id</p>
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
                     * 获取<p>工作流类型筛选, 支持值 Cycle或Manual. 默认只查询 Cycle</p>
                     * @return WorkflowType <p>工作流类型筛选, 支持值 Cycle或Manual. 默认只查询 Cycle</p>
                     * 
                     */
                    std::string GetWorkflowType() const;

                    /**
                     * 设置<p>工作流类型筛选, 支持值 Cycle或Manual. 默认只查询 Cycle</p>
                     * @param _workflowType <p>工作流类型筛选, 支持值 Cycle或Manual. 默认只查询 Cycle</p>
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
                     * 获取<p>工作流关键词过滤，支持工作流 Id/name 模糊匹配</p>
                     * @return KeyWord <p>工作流关键词过滤，支持工作流 Id/name 模糊匹配</p>
                     * 
                     */
                    std::string GetKeyWord() const;

                    /**
                     * 设置<p>工作流关键词过滤，支持工作流 Id/name 模糊匹配</p>
                     * @param _keyWord <p>工作流关键词过滤，支持工作流 Id/name 模糊匹配</p>
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
                     * 获取<p>排序项，可选CreateTime、TaskCount</p>
                     * @return SortItem <p>排序项，可选CreateTime、TaskCount</p>
                     * 
                     */
                    std::string GetSortItem() const;

                    /**
                     * 设置<p>排序项，可选CreateTime、TaskCount</p>
                     * @param _sortItem <p>排序项，可选CreateTime、TaskCount</p>
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
                     * 获取<p>排序方式，DESC或ASC, 大写</p>
                     * @return SortType <p>排序方式，DESC或ASC, 大写</p>
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置<p>排序方式，DESC或ASC, 大写</p>
                     * @param _sortType <p>排序方式，DESC或ASC, 大写</p>
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
                     * 获取<p>创建人Id</p>
                     * @return CreateUserUin <p>创建人Id</p>
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置<p>创建人Id</p>
                     * @param _createUserUin <p>创建人Id</p>
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
                     * 获取<p>更新时间，格式yyyy-MM-dd HH:mm:ss</p>
                     * @return ModifyTime <p>更新时间，格式yyyy-MM-dd HH:mm:ss</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>更新时间，格式yyyy-MM-dd HH:mm:ss</p>
                     * @param _modifyTime <p>更新时间，格式yyyy-MM-dd HH:mm:ss</p>
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
                     * 获取<p>创建时间，格式yyyy-MM-dd HH:mm:ss</p>
                     * @return CreateTime <p>创建时间，格式yyyy-MM-dd HH:mm:ss</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间，格式yyyy-MM-dd HH:mm:ss</p>
                     * @param _createTime <p>创建时间，格式yyyy-MM-dd HH:mm:ss</p>
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
                     * <p>项目Id</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>分页页码</p>
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>分页大小</p>
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>文件Id</p>
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * <p>工作流状态筛选</p><ul><li>ALL_RUNNING : 全部调度中</li><li>ALL_FREEZED : 全部已暂停</li><li>ALL_STOPPTED : 全部已下线</li><li>PART_RUNNING : 部分调度中</li><li>ALL_NO_RUNNING : 全部未调度</li><li>ALL_INVALID : 全部已失效</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>负责人Id</p>
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>工作流类型筛选, 支持值 Cycle或Manual. 默认只查询 Cycle</p>
                     */
                    std::string m_workflowType;
                    bool m_workflowTypeHasBeenSet;

                    /**
                     * <p>工作流关键词过滤，支持工作流 Id/name 模糊匹配</p>
                     */
                    std::string m_keyWord;
                    bool m_keyWordHasBeenSet;

                    /**
                     * <p>排序项，可选CreateTime、TaskCount</p>
                     */
                    std::string m_sortItem;
                    bool m_sortItemHasBeenSet;

                    /**
                     * <p>排序方式，DESC或ASC, 大写</p>
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * <p>创建人Id</p>
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * <p>更新时间，格式yyyy-MM-dd HH:mm:ss</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>创建时间，格式yyyy-MM-dd HH:mm:ss</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTOPSWORKFLOWSREQUEST_H_
