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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEBATCHOPERATETASKREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEBATCHOPERATETASKREQUEST_H_

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
                * DescribeBatchOperateTask请求参数结构体
                */
                class DescribeBatchOperateTaskRequest : public AbstractModel
                {
                public:
                    DescribeBatchOperateTaskRequest();
                    ~DescribeBatchOperateTaskRequest() = default;
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
                     * 获取页码
                     * @return Page 页码
                     * 
                     */
                    std::string GetPage() const;

                    /**
                     * 设置页码
                     * @param _page 页码
                     * 
                     */
                    void SetPage(const std::string& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取页号
                     * @return Size 页号
                     * 
                     */
                    std::string GetSize() const;

                    /**
                     * 设置页号
                     * @param _size 页号
                     * 
                     */
                    void SetSize(const std::string& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取状态列表
草稿：'NS'，'N','P','R'
运行：''Y'
停止：'F'
冻结：'O'
停止中：'T'
                     * @return StatusList 状态列表
草稿：'NS'，'N','P','R'
运行：''Y'
停止：'F'
冻结：'O'
停止中：'T'
                     * 
                     */
                    std::vector<std::string> GetStatusList() const;

                    /**
                     * 设置状态列表
草稿：'NS'，'N','P','R'
运行：''Y'
停止：'F'
冻结：'O'
停止中：'T'
                     * @param _statusList 状态列表
草稿：'NS'，'N','P','R'
运行：''Y'
停止：'F'
冻结：'O'
停止中：'T'
                     * 
                     */
                    void SetStatusList(const std::vector<std::string>& _statusList);

                    /**
                     * 判断参数 StatusList 是否已赋值
                     * @return StatusList 是否已赋值
                     * 
                     */
                    bool StatusListHasBeenSet() const;

                    /**
                     * 获取责任人名列表
                     * @return OwnerNameList 责任人名列表
                     * 
                     */
                    std::vector<std::string> GetOwnerNameList() const;

                    /**
                     * 设置责任人名列表
                     * @param _ownerNameList 责任人名列表
                     * 
                     */
                    void SetOwnerNameList(const std::vector<std::string>& _ownerNameList);

                    /**
                     * 判断参数 OwnerNameList 是否已赋值
                     * @return OwnerNameList 是否已赋值
                     * 
                     */
                    bool OwnerNameListHasBeenSet() const;

                    /**
                     * 获取工作流列表
                     * @return WorkflowIdList 工作流列表
                     * 
                     */
                    std::vector<std::string> GetWorkflowIdList() const;

                    /**
                     * 设置工作流列表
                     * @param _workflowIdList 工作流列表
                     * 
                     */
                    void SetWorkflowIdList(const std::vector<std::string>& _workflowIdList);

                    /**
                     * 判断参数 WorkflowIdList 是否已赋值
                     * @return WorkflowIdList 是否已赋值
                     * 
                     */
                    bool WorkflowIdListHasBeenSet() const;

                    /**
                     * 获取任务名称搜索
                     * @return TaskNameFilter 任务名称搜索
                     * 
                     */
                    std::string GetTaskNameFilter() const;

                    /**
                     * 设置任务名称搜索
                     * @param _taskNameFilter 任务名称搜索
                     * 
                     */
                    void SetTaskNameFilter(const std::string& _taskNameFilter);

                    /**
                     * 判断参数 TaskNameFilter 是否已赋值
                     * @return TaskNameFilter 是否已赋值
                     * 
                     */
                    bool TaskNameFilterHasBeenSet() const;

                    /**
                     * 获取任务类型列表
                     * @return TaskTypeList 任务类型列表
                     * 
                     */
                    std::vector<std::string> GetTaskTypeList() const;

                    /**
                     * 设置任务类型列表
                     * @param _taskTypeList 任务类型列表
                     * 
                     */
                    void SetTaskTypeList(const std::vector<std::string>& _taskTypeList);

                    /**
                     * 判断参数 TaskTypeList 是否已赋值
                     * @return TaskTypeList 是否已赋值
                     * 
                     */
                    bool TaskTypeListHasBeenSet() const;

                    /**
                     * 获取文件夹列表
                     * @return FordIdList 文件夹列表
                     * 
                     */
                    std::vector<std::string> GetFordIdList() const;

                    /**
                     * 设置文件夹列表
                     * @param _fordIdList 文件夹列表
                     * 
                     */
                    void SetFordIdList(const std::vector<std::string>& _fordIdList);

                    /**
                     * 判断参数 FordIdList 是否已赋值
                     * @return FordIdList 是否已赋值
                     * 
                     */
                    bool FordIdListHasBeenSet() const;

                    /**
                     * 获取任务Id搜索
                     * @return TaskIdFilter 任务Id搜索
                     * 
                     */
                    std::string GetTaskIdFilter() const;

                    /**
                     * 设置任务Id搜索
                     * @param _taskIdFilter 任务Id搜索
                     * 
                     */
                    void SetTaskIdFilter(const std::string& _taskIdFilter);

                    /**
                     * 判断参数 TaskIdFilter 是否已赋值
                     * @return TaskIdFilter 是否已赋值
                     * 
                     */
                    bool TaskIdFilterHasBeenSet() const;

                    /**
                     * 获取责任人搜索
                     * @return OwnerNameFilter 责任人搜索
                     * 
                     */
                    std::string GetOwnerNameFilter() const;

                    /**
                     * 设置责任人搜索
                     * @param _ownerNameFilter 责任人搜索
                     * 
                     */
                    void SetOwnerNameFilter(const std::string& _ownerNameFilter);

                    /**
                     * 判断参数 OwnerNameFilter 是否已赋值
                     * @return OwnerNameFilter 是否已赋值
                     * 
                     */
                    bool OwnerNameFilterHasBeenSet() const;

                    /**
                     * 获取排序字段：
UpdateTime
CreateTime
                     * @return SortItem 排序字段：
UpdateTime
CreateTime
                     * 
                     */
                    std::string GetSortItem() const;

                    /**
                     * 设置排序字段：
UpdateTime
CreateTime
                     * @param _sortItem 排序字段：
UpdateTime
CreateTime
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
                     * 获取asc:升序
desc:降序
                     * @return SortType asc:升序
desc:降序
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置asc:升序
desc:降序
                     * @param _sortType asc:升序
desc:降序
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
                     * 获取引擎类型列表：三种
SparkJob
SparkSql
presto
                     * @return DataEngineList 引擎类型列表：三种
SparkJob
SparkSql
presto
                     * 
                     */
                    std::vector<std::string> GetDataEngineList() const;

                    /**
                     * 设置引擎类型列表：三种
SparkJob
SparkSql
presto
                     * @param _dataEngineList 引擎类型列表：三种
SparkJob
SparkSql
presto
                     * 
                     */
                    void SetDataEngineList(const std::vector<std::string>& _dataEngineList);

                    /**
                     * 判断参数 DataEngineList 是否已赋值
                     * @return DataEngineList 是否已赋值
                     * 
                     */
                    bool DataEngineListHasBeenSet() const;

                    /**
                     * 获取操作人名
                     * @return UserId 操作人名
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置操作人名
                     * @param _userId 操作人名
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取1
                     * @return OwnerId 1
                     * 
                     */
                    std::string GetOwnerId() const;

                    /**
                     * 设置1
                     * @param _ownerId 1
                     * 
                     */
                    void SetOwnerId(const std::string& _ownerId);

                    /**
                     * 判断参数 OwnerId 是否已赋值
                     * @return OwnerId 是否已赋值
                     * 
                     */
                    bool OwnerIdHasBeenSet() const;

                    /**
                     * 获取1
                     * @return TenantId 1
                     * 
                     */
                    std::string GetTenantId() const;

                    /**
                     * 设置1
                     * @param _tenantId 1
                     * 
                     */
                    void SetTenantId(const std::string& _tenantId);

                    /**
                     * 判断参数 TenantId 是否已赋值
                     * @return TenantId 是否已赋值
                     * 
                     */
                    bool TenantIdHasBeenSet() const;

                    /**
                     * 获取数据源ID列表
                     * @return DatasourceIdList 数据源ID列表
                     * 
                     */
                    std::vector<std::string> GetDatasourceIdList() const;

                    /**
                     * 设置数据源ID列表
                     * @param _datasourceIdList 数据源ID列表
                     * 
                     */
                    void SetDatasourceIdList(const std::vector<std::string>& _datasourceIdList);

                    /**
                     * 判断参数 DatasourceIdList 是否已赋值
                     * @return DatasourceIdList 是否已赋值
                     * 
                     */
                    bool DatasourceIdListHasBeenSet() const;

                    /**
                     * 获取数据源类型列表
                     * @return DatasourceTypeList 数据源类型列表
                     * 
                     */
                    std::vector<std::string> GetDatasourceTypeList() const;

                    /**
                     * 设置数据源类型列表
                     * @param _datasourceTypeList 数据源类型列表
                     * 
                     */
                    void SetDatasourceTypeList(const std::vector<std::string>& _datasourceTypeList);

                    /**
                     * 判断参数 DatasourceTypeList 是否已赋值
                     * @return DatasourceTypeList 是否已赋值
                     * 
                     */
                    bool DatasourceTypeListHasBeenSet() const;

                    /**
                     * 获取调度单位类型列表
                     * @return CycleUnitList 调度单位类型列表
                     * 
                     */
                    std::vector<std::string> GetCycleUnitList() const;

                    /**
                     * 设置调度单位类型列表
                     * @param _cycleUnitList 调度单位类型列表
                     * 
                     */
                    void SetCycleUnitList(const std::vector<std::string>& _cycleUnitList);

                    /**
                     * 判断参数 CycleUnitList 是否已赋值
                     * @return CycleUnitList 是否已赋值
                     * 
                     */
                    bool CycleUnitListHasBeenSet() const;

                    /**
                     * 获取是否筛选出可提交的任务
                     * @return CanSubmit 是否筛选出可提交的任务
                     * 
                     */
                    bool GetCanSubmit() const;

                    /**
                     * 设置是否筛选出可提交的任务
                     * @param _canSubmit 是否筛选出可提交的任务
                     * 
                     */
                    void SetCanSubmit(const bool& _canSubmit);

                    /**
                     * 判断参数 CanSubmit 是否已赋值
                     * @return CanSubmit 是否已赋值
                     * 
                     */
                    bool CanSubmitHasBeenSet() const;

                private:

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 页码
                     */
                    std::string m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 页号
                     */
                    std::string m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 状态列表
草稿：'NS'，'N','P','R'
运行：''Y'
停止：'F'
冻结：'O'
停止中：'T'
                     */
                    std::vector<std::string> m_statusList;
                    bool m_statusListHasBeenSet;

                    /**
                     * 责任人名列表
                     */
                    std::vector<std::string> m_ownerNameList;
                    bool m_ownerNameListHasBeenSet;

                    /**
                     * 工作流列表
                     */
                    std::vector<std::string> m_workflowIdList;
                    bool m_workflowIdListHasBeenSet;

                    /**
                     * 任务名称搜索
                     */
                    std::string m_taskNameFilter;
                    bool m_taskNameFilterHasBeenSet;

                    /**
                     * 任务类型列表
                     */
                    std::vector<std::string> m_taskTypeList;
                    bool m_taskTypeListHasBeenSet;

                    /**
                     * 文件夹列表
                     */
                    std::vector<std::string> m_fordIdList;
                    bool m_fordIdListHasBeenSet;

                    /**
                     * 任务Id搜索
                     */
                    std::string m_taskIdFilter;
                    bool m_taskIdFilterHasBeenSet;

                    /**
                     * 责任人搜索
                     */
                    std::string m_ownerNameFilter;
                    bool m_ownerNameFilterHasBeenSet;

                    /**
                     * 排序字段：
UpdateTime
CreateTime
                     */
                    std::string m_sortItem;
                    bool m_sortItemHasBeenSet;

                    /**
                     * asc:升序
desc:降序
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * 引擎类型列表：三种
SparkJob
SparkSql
presto
                     */
                    std::vector<std::string> m_dataEngineList;
                    bool m_dataEngineListHasBeenSet;

                    /**
                     * 操作人名
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 1
                     */
                    std::string m_ownerId;
                    bool m_ownerIdHasBeenSet;

                    /**
                     * 1
                     */
                    std::string m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * 数据源ID列表
                     */
                    std::vector<std::string> m_datasourceIdList;
                    bool m_datasourceIdListHasBeenSet;

                    /**
                     * 数据源类型列表
                     */
                    std::vector<std::string> m_datasourceTypeList;
                    bool m_datasourceTypeListHasBeenSet;

                    /**
                     * 调度单位类型列表
                     */
                    std::vector<std::string> m_cycleUnitList;
                    bool m_cycleUnitListHasBeenSet;

                    /**
                     * 是否筛选出可提交的任务
                     */
                    bool m_canSubmit;
                    bool m_canSubmitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEBATCHOPERATETASKREQUEST_H_
