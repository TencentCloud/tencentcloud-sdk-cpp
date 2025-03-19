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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDSFOLDERTREEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDSFOLDERTREEREQUEST_H_

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
                * DescribeDsFolderTree请求参数结构体
                */
                class DescribeDsFolderTreeRequest : public AbstractModel
                {
                public:
                    DescribeDsFolderTreeRequest();
                    ~DescribeDsFolderTreeRequest() = default;
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
                     * 获取是否一级拉取 true 是 
false 否
                     * @return FirstLevelPull 是否一级拉取 true 是 
false 否
                     * 
                     */
                    bool GetFirstLevelPull() const;

                    /**
                     * 设置是否一级拉取 true 是 
false 否
                     * @param _firstLevelPull 是否一级拉取 true 是 
false 否
                     * 
                     */
                    void SetFirstLevelPull(const bool& _firstLevelPull);

                    /**
                     * 判断参数 FirstLevelPull 是否已赋值
                     * @return FirstLevelPull 是否已赋值
                     * 
                     */
                    bool FirstLevelPullHasBeenSet() const;

                    /**
                     * 获取文件夹ID
                     * @return FolderId 文件夹ID
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置文件夹ID
                     * @param _folderId 文件夹ID
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
                     * 获取工作流ID
                     * @return WorkflowId 工作流ID
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置工作流ID
                     * @param _workflowId 工作流ID
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
                     * 获取关键字搜索
                     * @return Keyword 关键字搜索
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置关键字搜索
                     * @param _keyword 关键字搜索
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取是否包含工作流 true 是 
false 否
                     * @return IncludeWorkflow 是否包含工作流 true 是 
false 否
                     * 
                     */
                    bool GetIncludeWorkflow() const;

                    /**
                     * 设置是否包含工作流 true 是 
false 否
                     * @param _includeWorkflow 是否包含工作流 true 是 
false 否
                     * 
                     */
                    void SetIncludeWorkflow(const bool& _includeWorkflow);

                    /**
                     * 判断参数 IncludeWorkflow 是否已赋值
                     * @return IncludeWorkflow 是否已赋值
                     * 
                     */
                    bool IncludeWorkflowHasBeenSet() const;

                    /**
                     * 获取是否包含任务 true 是 
false 否
                     * @return IncludeTask 是否包含任务 true 是 
false 否
                     * 
                     */
                    bool GetIncludeTask() const;

                    /**
                     * 设置是否包含任务 true 是 
false 否
                     * @param _includeTask 是否包含任务 true 是 
false 否
                     * 
                     */
                    void SetIncludeTask(const bool& _includeTask);

                    /**
                     * 判断参数 IncludeTask 是否已赋值
                     * @return IncludeTask 是否已赋值
                     * 
                     */
                    bool IncludeTaskHasBeenSet() const;

                    /**
                     * 获取是否包含虚拟任务，当 IncludeTask 为 true 的时候，该参数才生效，默认为 true
                     * @return IncludeVirtualTask 是否包含虚拟任务，当 IncludeTask 为 true 的时候，该参数才生效，默认为 true
                     * 
                     */
                    bool GetIncludeVirtualTask() const;

                    /**
                     * 设置是否包含虚拟任务，当 IncludeTask 为 true 的时候，该参数才生效，默认为 true
                     * @param _includeVirtualTask 是否包含虚拟任务，当 IncludeTask 为 true 的时候，该参数才生效，默认为 true
                     * 
                     */
                    void SetIncludeVirtualTask(const bool& _includeVirtualTask);

                    /**
                     * 判断参数 IncludeVirtualTask 是否已赋值
                     * @return IncludeVirtualTask 是否已赋值
                     * 
                     */
                    bool IncludeVirtualTaskHasBeenSet() const;

                    /**
                     * 获取任务目录id
                     * @return TaskFolderId 任务目录id
                     * 
                     */
                    std::string GetTaskFolderId() const;

                    /**
                     * 设置任务目录id
                     * @param _taskFolderId 任务目录id
                     * 
                     */
                    void SetTaskFolderId(const std::string& _taskFolderId);

                    /**
                     * 判断参数 TaskFolderId 是否已赋值
                     * @return TaskFolderId 是否已赋值
                     * 
                     */
                    bool TaskFolderIdHasBeenSet() const;

                    /**
                     * 获取classification.分类展示  catalog.目录展示
                     * @return DisplayType classification.分类展示  catalog.目录展示
                     * 
                     */
                    std::string GetDisplayType() const;

                    /**
                     * 设置classification.分类展示  catalog.目录展示
                     * @param _displayType classification.分类展示  catalog.目录展示
                     * 
                     */
                    void SetDisplayType(const std::string& _displayType);

                    /**
                     * 判断参数 DisplayType 是否已赋值
                     * @return DisplayType 是否已赋值
                     * 
                     */
                    bool DisplayTypeHasBeenSet() const;

                    /**
                     * 获取是否包含任务目录 true 是 
false 否
                     * @return IncludeTaskFolder 是否包含任务目录 true 是 
false 否
                     * 
                     */
                    bool GetIncludeTaskFolder() const;

                    /**
                     * 设置是否包含任务目录 true 是 
false 否
                     * @param _includeTaskFolder 是否包含任务目录 true 是 
false 否
                     * 
                     */
                    void SetIncludeTaskFolder(const bool& _includeTaskFolder);

                    /**
                     * 判断参数 IncludeTaskFolder 是否已赋值
                     * @return IncludeTaskFolder 是否已赋值
                     * 
                     */
                    bool IncludeTaskFolderHasBeenSet() const;

                    /**
                     * 获取是否使用最新模式展示目录树
                     * @return NewFolderTreeMode 是否使用最新模式展示目录树
                     * 
                     */
                    bool GetNewFolderTreeMode() const;

                    /**
                     * 设置是否使用最新模式展示目录树
                     * @param _newFolderTreeMode 是否使用最新模式展示目录树
                     * 
                     */
                    void SetNewFolderTreeMode(const bool& _newFolderTreeMode);

                    /**
                     * 判断参数 NewFolderTreeMode 是否已赋值
                     * @return NewFolderTreeMode 是否已赋值
                     * 
                     */
                    bool NewFolderTreeModeHasBeenSet() const;

                    /**
                     * 获取节点分类ID
                     * @return TaskNodeId 节点分类ID
                     * 
                     */
                    std::string GetTaskNodeId() const;

                    /**
                     * 设置节点分类ID
                     * @param _taskNodeId 节点分类ID
                     * 
                     */
                    void SetTaskNodeId(const std::string& _taskNodeId);

                    /**
                     * 判断参数 TaskNodeId 是否已赋值
                     * @return TaskNodeId 是否已赋值
                     * 
                     */
                    bool TaskNodeIdHasBeenSet() const;

                    /**
                     * 获取工作流类型, 使用场景: 任务复制,选择工作流. 取值范围

- cycle    周期工作流
- manual    手动工作流
                     * @return WorkflowType 工作流类型, 使用场景: 任务复制,选择工作流. 取值范围

- cycle    周期工作流
- manual    手动工作流
                     * 
                     */
                    std::string GetWorkflowType() const;

                    /**
                     * 设置工作流类型, 使用场景: 任务复制,选择工作流. 取值范围

- cycle    周期工作流
- manual    手动工作流
                     * @param _workflowType 工作流类型, 使用场景: 任务复制,选择工作流. 取值范围

- cycle    周期工作流
- manual    手动工作流
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
                     * 获取任务类型id列表
                     * @return TaskTypeIdList 任务类型id列表
                     * 
                     */
                    std::vector<int64_t> GetTaskTypeIdList() const;

                    /**
                     * 设置任务类型id列表
                     * @param _taskTypeIdList 任务类型id列表
                     * 
                     */
                    void SetTaskTypeIdList(const std::vector<int64_t>& _taskTypeIdList);

                    /**
                     * 判断参数 TaskTypeIdList 是否已赋值
                     * @return TaskTypeIdList 是否已赋值
                     * 
                     */
                    bool TaskTypeIdListHasBeenSet() const;

                    /**
                     * 获取责任人id列表
                     * @return InChargeIdList 责任人id列表
                     * 
                     */
                    std::vector<std::string> GetInChargeIdList() const;

                    /**
                     * 设置责任人id列表
                     * @param _inChargeIdList 责任人id列表
                     * 
                     */
                    void SetInChargeIdList(const std::vector<std::string>& _inChargeIdList);

                    /**
                     * 判断参数 InChargeIdList 是否已赋值
                     * @return InChargeIdList 是否已赋值
                     * 
                     */
                    bool InChargeIdListHasBeenSet() const;

                    /**
                     * 获取自身责任人
                     * @return OnlyMe 自身责任人
                     * 
                     */
                    bool GetOnlyMe() const;

                    /**
                     * 设置自身责任人
                     * @param _onlyMe 自身责任人
                     * 
                     */
                    void SetOnlyMe(const bool& _onlyMe);

                    /**
                     * 判断参数 OnlyMe 是否已赋值
                     * @return OnlyMe 是否已赋值
                     * 
                     */
                    bool OnlyMeHasBeenSet() const;

                    /**
                     * 获取是否包含代码模版
                     * @return IncludeCodeTemplate 是否包含代码模版
                     * 
                     */
                    bool GetIncludeCodeTemplate() const;

                    /**
                     * 设置是否包含代码模版
                     * @param _includeCodeTemplate 是否包含代码模版
                     * 
                     */
                    void SetIncludeCodeTemplate(const bool& _includeCodeTemplate);

                    /**
                     * 判断参数 IncludeCodeTemplate 是否已赋值
                     * @return IncludeCodeTemplate 是否已赋值
                     * 
                     */
                    bool IncludeCodeTemplateHasBeenSet() const;

                    /**
                     * 获取编排空间 或代码模版 orchestrationSpace 编排空间 template模版管理
                     * @return FolderForm 编排空间 或代码模版 orchestrationSpace 编排空间 template模版管理
                     * 
                     */
                    std::string GetFolderForm() const;

                    /**
                     * 设置编排空间 或代码模版 orchestrationSpace 编排空间 template模版管理
                     * @param _folderForm 编排空间 或代码模版 orchestrationSpace 编排空间 template模版管理
                     * 
                     */
                    void SetFolderForm(const std::string& _folderForm);

                    /**
                     * 判断参数 FolderForm 是否已赋值
                     * @return FolderForm 是否已赋值
                     * 
                     */
                    bool FolderFormHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 是否一级拉取 true 是 
false 否
                     */
                    bool m_firstLevelPull;
                    bool m_firstLevelPullHasBeenSet;

                    /**
                     * 文件夹ID
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * 工作流ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 关键字搜索
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 是否包含工作流 true 是 
false 否
                     */
                    bool m_includeWorkflow;
                    bool m_includeWorkflowHasBeenSet;

                    /**
                     * 是否包含任务 true 是 
false 否
                     */
                    bool m_includeTask;
                    bool m_includeTaskHasBeenSet;

                    /**
                     * 是否包含虚拟任务，当 IncludeTask 为 true 的时候，该参数才生效，默认为 true
                     */
                    bool m_includeVirtualTask;
                    bool m_includeVirtualTaskHasBeenSet;

                    /**
                     * 任务目录id
                     */
                    std::string m_taskFolderId;
                    bool m_taskFolderIdHasBeenSet;

                    /**
                     * classification.分类展示  catalog.目录展示
                     */
                    std::string m_displayType;
                    bool m_displayTypeHasBeenSet;

                    /**
                     * 是否包含任务目录 true 是 
false 否
                     */
                    bool m_includeTaskFolder;
                    bool m_includeTaskFolderHasBeenSet;

                    /**
                     * 是否使用最新模式展示目录树
                     */
                    bool m_newFolderTreeMode;
                    bool m_newFolderTreeModeHasBeenSet;

                    /**
                     * 节点分类ID
                     */
                    std::string m_taskNodeId;
                    bool m_taskNodeIdHasBeenSet;

                    /**
                     * 工作流类型, 使用场景: 任务复制,选择工作流. 取值范围

- cycle    周期工作流
- manual    手动工作流
                     */
                    std::string m_workflowType;
                    bool m_workflowTypeHasBeenSet;

                    /**
                     * 任务类型id列表
                     */
                    std::vector<int64_t> m_taskTypeIdList;
                    bool m_taskTypeIdListHasBeenSet;

                    /**
                     * 责任人id列表
                     */
                    std::vector<std::string> m_inChargeIdList;
                    bool m_inChargeIdListHasBeenSet;

                    /**
                     * 自身责任人
                     */
                    bool m_onlyMe;
                    bool m_onlyMeHasBeenSet;

                    /**
                     * 是否包含代码模版
                     */
                    bool m_includeCodeTemplate;
                    bool m_includeCodeTemplateHasBeenSet;

                    /**
                     * 编排空间 或代码模版 orchestrationSpace 编排空间 template模版管理
                     */
                    std::string m_folderForm;
                    bool m_folderFormHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDSFOLDERTREEREQUEST_H_
