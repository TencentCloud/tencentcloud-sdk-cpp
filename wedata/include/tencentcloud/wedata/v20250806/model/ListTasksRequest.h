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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTASKSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTASKSREQUEST_H_

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
                * ListTasks请求参数结构体
                */
                class ListTasksRequest : public AbstractModel
                {
                public:
                    ListTasksRequest();
                    ~ListTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>项目ID</p>
                     * @return ProjectId <p>项目ID</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目ID</p>
                     * @param _projectId <p>项目ID</p>
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
                     * 获取<p>请求的数据页数。默认值为1，取值大于等于1</p>
                     * @return PageNumber <p>请求的数据页数。默认值为1，取值大于等于1</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>请求的数据页数。默认值为1，取值大于等于1</p>
                     * @param _pageNumber <p>请求的数据页数。默认值为1，取值大于等于1</p>
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
                     * 获取<p>每页显示的数据条数。默认值为10 ，最小值为10，最大值为200</p>
                     * @return PageSize <p>每页显示的数据条数。默认值为10 ，最小值为10，最大值为200</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>每页显示的数据条数。默认值为10 ，最小值为10，最大值为200</p>
                     * @param _pageSize <p>每页显示的数据条数。默认值为10 ，最小值为10，最大值为200</p>
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
                     * 获取<p>任务名称</p>
                     * @return TaskName <p>任务名称</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>任务名称</p>
                     * @param _taskName <p>任务名称</p>
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取<p>所属工作流ID</p>
                     * @return WorkflowId <p>所属工作流ID</p>
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置<p>所属工作流ID</p>
                     * @param _workflowId <p>所属工作流ID</p>
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取<p>责任人ID</p>
                     * @return OwnerUin <p>责任人ID</p>
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>责任人ID</p>
                     * @param _ownerUin <p>责任人ID</p>
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
                     * 获取<p>任务类型</p>
                     * @return TaskTypeId <p>任务类型</p>
                     * 
                     */
                    int64_t GetTaskTypeId() const;

                    /**
                     * 设置<p>任务类型</p>
                     * @param _taskTypeId <p>任务类型</p>
                     * 
                     */
                    void SetTaskTypeId(const int64_t& _taskTypeId);

                    /**
                     * 判断参数 TaskTypeId 是否已赋值
                     * @return TaskTypeId 是否已赋值
                     * 
                     */
                    bool TaskTypeIdHasBeenSet() const;

                    /**
                     * 获取<p>任务状态</p><ul><li>N: 新建 </li><li>Y: 调度中 </li><li>F: 已下线 </li><li>O: 已暂停 </li><li>T: 下线中 </li><li>INVALID: 已失效</li></ul>
                     * @return Status <p>任务状态</p><ul><li>N: 新建 </li><li>Y: 调度中 </li><li>F: 已下线 </li><li>O: 已暂停 </li><li>T: 下线中 </li><li>INVALID: 已失效</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>任务状态</p><ul><li>N: 新建 </li><li>Y: 调度中 </li><li>F: 已下线 </li><li>O: 已暂停 </li><li>T: 下线中 </li><li>INVALID: 已失效</li></ul>
                     * @param _status <p>任务状态</p><ul><li>N: 新建 </li><li>Y: 调度中 </li><li>F: 已下线 </li><li>O: 已暂停 </li><li>T: 下线中 </li><li>INVALID: 已失效</li></ul>
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
                     * 获取<p>提交状态</p>
                     * @return Submit <p>提交状态</p>
                     * 
                     */
                    bool GetSubmit() const;

                    /**
                     * 设置<p>提交状态</p>
                     * @param _submit <p>提交状态</p>
                     * 
                     */
                    void SetSubmit(const bool& _submit);

                    /**
                     * 判断参数 Submit 是否已赋值
                     * @return Submit 是否已赋值
                     * 
                     */
                    bool SubmitHasBeenSet() const;

                    /**
                     * 获取<p>BundleId信息</p>
                     * @return BundleId <p>BundleId信息</p>
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置<p>BundleId信息</p>
                     * @param _bundleId <p>BundleId信息</p>
                     * 
                     */
                    void SetBundleId(const std::string& _bundleId);

                    /**
                     * 判断参数 BundleId 是否已赋值
                     * @return BundleId 是否已赋值
                     * 
                     */
                    bool BundleIdHasBeenSet() const;

                    /**
                     * 获取<p>创建人ID</p>
                     * @return CreateUserUin <p>创建人ID</p>
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置<p>创建人ID</p>
                     * @param _createUserUin <p>创建人ID</p>
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
                     * 获取<p>修改时间区间 yyyy-MM-dd HH:mm:ss，需要在数组填入两个时间</p>
                     * @return ModifyTime <p>修改时间区间 yyyy-MM-dd HH:mm:ss，需要在数组填入两个时间</p>
                     * 
                     */
                    std::vector<std::string> GetModifyTime() const;

                    /**
                     * 设置<p>修改时间区间 yyyy-MM-dd HH:mm:ss，需要在数组填入两个时间</p>
                     * @param _modifyTime <p>修改时间区间 yyyy-MM-dd HH:mm:ss，需要在数组填入两个时间</p>
                     * 
                     */
                    void SetModifyTime(const std::vector<std::string>& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取<p>创建时间区间 yyyy-MM-dd HH:mm:ss，需要在数组填入两个时间</p>
                     * @return CreateTime <p>创建时间区间 yyyy-MM-dd HH:mm:ss，需要在数组填入两个时间</p>
                     * 
                     */
                    std::vector<std::string> GetCreateTime() const;

                    /**
                     * 设置<p>创建时间区间 yyyy-MM-dd HH:mm:ss，需要在数组填入两个时间</p>
                     * @param _createTime <p>创建时间区间 yyyy-MM-dd HH:mm:ss，需要在数组填入两个时间</p>
                     * 
                     */
                    void SetCreateTime(const std::vector<std::string>& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>任务文件夹路径列表，支持多选，从工作流下的目录开始填写，节点类型无需填写。选择上层文件夹时，自动包含所有子文件夹下的任务。 路径格式为绝对路径，如 &quot;/子目录A&quot;，根目录为 &quot;/&quot;</p>
                     * @return TaskFolderPathList <p>任务文件夹路径列表，支持多选，从工作流下的目录开始填写，节点类型无需填写。选择上层文件夹时，自动包含所有子文件夹下的任务。 路径格式为绝对路径，如 &quot;/子目录A&quot;，根目录为 &quot;/&quot;</p>
                     * 
                     */
                    std::vector<std::string> GetTaskFolderPathList() const;

                    /**
                     * 设置<p>任务文件夹路径列表，支持多选，从工作流下的目录开始填写，节点类型无需填写。选择上层文件夹时，自动包含所有子文件夹下的任务。 路径格式为绝对路径，如 &quot;/子目录A&quot;，根目录为 &quot;/&quot;</p>
                     * @param _taskFolderPathList <p>任务文件夹路径列表，支持多选，从工作流下的目录开始填写，节点类型无需填写。选择上层文件夹时，自动包含所有子文件夹下的任务。 路径格式为绝对路径，如 &quot;/子目录A&quot;，根目录为 &quot;/&quot;</p>
                     * 
                     */
                    void SetTaskFolderPathList(const std::vector<std::string>& _taskFolderPathList);

                    /**
                     * 判断参数 TaskFolderPathList 是否已赋值
                     * @return TaskFolderPathList 是否已赋值
                     * 
                     */
                    bool TaskFolderPathListHasBeenSet() const;

                    /**
                     * 获取<p>工作流文件夹路径列表，支持多选。选择上层文件夹时，自动包含所有子文件夹下工作流的任务。 路径格式为绝对路径，如 &quot;/数据开发/子目录&quot;，根目录为 &quot;/&quot;。</p>
                     * @return WorkflowFolderPathList <p>工作流文件夹路径列表，支持多选。选择上层文件夹时，自动包含所有子文件夹下工作流的任务。 路径格式为绝对路径，如 &quot;/数据开发/子目录&quot;，根目录为 &quot;/&quot;。</p>
                     * 
                     */
                    std::vector<std::string> GetWorkflowFolderPathList() const;

                    /**
                     * 设置<p>工作流文件夹路径列表，支持多选。选择上层文件夹时，自动包含所有子文件夹下工作流的任务。 路径格式为绝对路径，如 &quot;/数据开发/子目录&quot;，根目录为 &quot;/&quot;。</p>
                     * @param _workflowFolderPathList <p>工作流文件夹路径列表，支持多选。选择上层文件夹时，自动包含所有子文件夹下工作流的任务。 路径格式为绝对路径，如 &quot;/数据开发/子目录&quot;，根目录为 &quot;/&quot;。</p>
                     * 
                     */
                    void SetWorkflowFolderPathList(const std::vector<std::string>& _workflowFolderPathList);

                    /**
                     * 判断参数 WorkflowFolderPathList 是否已赋值
                     * @return WorkflowFolderPathList 是否已赋值
                     * 
                     */
                    bool WorkflowFolderPathListHasBeenSet() const;

                    /**
                     * 获取<p>节点类型列表，用于按任务节点分类筛选，支持多选， 可选值参考下面枚举类型 。 传入后将根据这些节点类型包含的任务类型ID列表进行筛选。</p><p>枚举值：</p><ul><li>ETL： 数据集成节点</li><li>EMR： EMR节点</li><li>DLC： DLC节点</li><li>SETATS： SETATS节点</li><li>TDSQL： TDSQL节点</li><li>TCHOUSE： TCHOUSE节点</li><li>GENERAL： 通用节点</li><li>DATA_QUALITY： 数据质量节点</li><li>INDICATOR： 指标节点</li><li>TI_ONE： TI-ONE机器学习节点</li></ul>
                     * @return TaskNodeTypeList <p>节点类型列表，用于按任务节点分类筛选，支持多选， 可选值参考下面枚举类型 。 传入后将根据这些节点类型包含的任务类型ID列表进行筛选。</p><p>枚举值：</p><ul><li>ETL： 数据集成节点</li><li>EMR： EMR节点</li><li>DLC： DLC节点</li><li>SETATS： SETATS节点</li><li>TDSQL： TDSQL节点</li><li>TCHOUSE： TCHOUSE节点</li><li>GENERAL： 通用节点</li><li>DATA_QUALITY： 数据质量节点</li><li>INDICATOR： 指标节点</li><li>TI_ONE： TI-ONE机器学习节点</li></ul>
                     * 
                     */
                    std::vector<std::string> GetTaskNodeTypeList() const;

                    /**
                     * 设置<p>节点类型列表，用于按任务节点分类筛选，支持多选， 可选值参考下面枚举类型 。 传入后将根据这些节点类型包含的任务类型ID列表进行筛选。</p><p>枚举值：</p><ul><li>ETL： 数据集成节点</li><li>EMR： EMR节点</li><li>DLC： DLC节点</li><li>SETATS： SETATS节点</li><li>TDSQL： TDSQL节点</li><li>TCHOUSE： TCHOUSE节点</li><li>GENERAL： 通用节点</li><li>DATA_QUALITY： 数据质量节点</li><li>INDICATOR： 指标节点</li><li>TI_ONE： TI-ONE机器学习节点</li></ul>
                     * @param _taskNodeTypeList <p>节点类型列表，用于按任务节点分类筛选，支持多选， 可选值参考下面枚举类型 。 传入后将根据这些节点类型包含的任务类型ID列表进行筛选。</p><p>枚举值：</p><ul><li>ETL： 数据集成节点</li><li>EMR： EMR节点</li><li>DLC： DLC节点</li><li>SETATS： SETATS节点</li><li>TDSQL： TDSQL节点</li><li>TCHOUSE： TCHOUSE节点</li><li>GENERAL： 通用节点</li><li>DATA_QUALITY： 数据质量节点</li><li>INDICATOR： 指标节点</li><li>TI_ONE： TI-ONE机器学习节点</li></ul>
                     * 
                     */
                    void SetTaskNodeTypeList(const std::vector<std::string>& _taskNodeTypeList);

                    /**
                     * 判断参数 TaskNodeTypeList 是否已赋值
                     * @return TaskNodeTypeList 是否已赋值
                     * 
                     */
                    bool TaskNodeTypeListHasBeenSet() const;

                private:

                    /**
                     * <p>项目ID</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>请求的数据页数。默认值为1，取值大于等于1</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>每页显示的数据条数。默认值为10 ，最小值为10，最大值为200</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>任务名称</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>所属工作流ID</p>
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * <p>责任人ID</p>
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>任务类型</p>
                     */
                    int64_t m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * <p>任务状态</p><ul><li>N: 新建 </li><li>Y: 调度中 </li><li>F: 已下线 </li><li>O: 已暂停 </li><li>T: 下线中 </li><li>INVALID: 已失效</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>提交状态</p>
                     */
                    bool m_submit;
                    bool m_submitHasBeenSet;

                    /**
                     * <p>BundleId信息</p>
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * <p>创建人ID</p>
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * <p>修改时间区间 yyyy-MM-dd HH:mm:ss，需要在数组填入两个时间</p>
                     */
                    std::vector<std::string> m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>创建时间区间 yyyy-MM-dd HH:mm:ss，需要在数组填入两个时间</p>
                     */
                    std::vector<std::string> m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>任务文件夹路径列表，支持多选，从工作流下的目录开始填写，节点类型无需填写。选择上层文件夹时，自动包含所有子文件夹下的任务。 路径格式为绝对路径，如 &quot;/子目录A&quot;，根目录为 &quot;/&quot;</p>
                     */
                    std::vector<std::string> m_taskFolderPathList;
                    bool m_taskFolderPathListHasBeenSet;

                    /**
                     * <p>工作流文件夹路径列表，支持多选。选择上层文件夹时，自动包含所有子文件夹下工作流的任务。 路径格式为绝对路径，如 &quot;/数据开发/子目录&quot;，根目录为 &quot;/&quot;。</p>
                     */
                    std::vector<std::string> m_workflowFolderPathList;
                    bool m_workflowFolderPathListHasBeenSet;

                    /**
                     * <p>节点类型列表，用于按任务节点分类筛选，支持多选， 可选值参考下面枚举类型 。 传入后将根据这些节点类型包含的任务类型ID列表进行筛选。</p><p>枚举值：</p><ul><li>ETL： 数据集成节点</li><li>EMR： EMR节点</li><li>DLC： DLC节点</li><li>SETATS： SETATS节点</li><li>TDSQL： TDSQL节点</li><li>TCHOUSE： TCHOUSE节点</li><li>GENERAL： 通用节点</li><li>DATA_QUALITY： 数据质量节点</li><li>INDICATOR： 指标节点</li><li>TI_ONE： TI-ONE机器学习节点</li></ul>
                     */
                    std::vector<std::string> m_taskNodeTypeList;
                    bool m_taskNodeTypeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTASKSREQUEST_H_
