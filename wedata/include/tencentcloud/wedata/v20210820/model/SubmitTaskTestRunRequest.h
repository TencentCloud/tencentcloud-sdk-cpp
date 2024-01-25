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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBMITTASKTESTRUNREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBMITTASKTESTRUNREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/StageCloudApiRequest.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * SubmitTaskTestRun请求参数结构体
                */
                class SubmitTaskTestRunRequest : public AbstractModel
                {
                public:
                    SubmitTaskTestRunRequest();
                    ~SubmitTaskTestRunRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取taskId列表
                     * @return TaskIds taskId列表
                     * 
                     */
                    std::string GetTaskIds() const;

                    /**
                     * 设置taskId列表
                     * @param _taskIds taskId列表
                     * 
                     */
                    void SetTaskIds(const std::string& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

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
                     * 获取工作流id
                     * @return WorkFlowId 工作流id
                     * 
                     */
                    std::string GetWorkFlowId() const;

                    /**
                     * 设置工作流id
                     * @param _workFlowId 工作流id
                     * 
                     */
                    void SetWorkFlowId(const std::string& _workFlowId);

                    /**
                     * 判断参数 WorkFlowId 是否已赋值
                     * @return WorkFlowId 是否已赋值
                     * 
                     */
                    bool WorkFlowIdHasBeenSet() const;

                    /**
                     * 获取工作流名称
                     * @return Name 工作流名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置工作流名称
                     * @param _name 工作流名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取工作流任务列表
                     * @return Tasks 工作流任务列表
                     * 
                     */
                    std::vector<StageCloudApiRequest> GetTasks() const;

                    /**
                     * 设置工作流任务列表
                     * @param _tasks 工作流任务列表
                     * 
                     */
                    void SetTasks(const std::vector<StageCloudApiRequest>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Description 备注
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置备注
                     * @param _description 备注
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取运行参数，map的Json形式
                     * @return RunParams 运行参数，map的Json形式
                     * 
                     */
                    std::string GetRunParams() const;

                    /**
                     * 设置运行参数，map的Json形式
                     * @param _runParams 运行参数，map的Json形式
                     * 
                     */
                    void SetRunParams(const std::string& _runParams);

                    /**
                     * 判断参数 RunParams 是否已赋值
                     * @return RunParams 是否已赋值
                     * 
                     */
                    bool RunParamsHasBeenSet() const;

                    /**
                     * 获取脚本内容
                     * @return ScriptContent 脚本内容
                     * 
                     */
                    std::string GetScriptContent() const;

                    /**
                     * 设置脚本内容
                     * @param _scriptContent 脚本内容
                     * 
                     */
                    void SetScriptContent(const std::string& _scriptContent);

                    /**
                     * 判断参数 ScriptContent 是否已赋值
                     * @return ScriptContent 是否已赋值
                     * 
                     */
                    bool ScriptContentHasBeenSet() const;

                    /**
                     * 获取版本号
                     * @return VersionId 版本号
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置版本号
                     * @param _versionId 版本号
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                private:

                    /**
                     * taskId列表
                     */
                    std::string m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 工作流id
                     */
                    std::string m_workFlowId;
                    bool m_workFlowIdHasBeenSet;

                    /**
                     * 工作流名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 工作流任务列表
                     */
                    std::vector<StageCloudApiRequest> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 运行参数，map的Json形式
                     */
                    std::string m_runParams;
                    bool m_runParamsHasBeenSet;

                    /**
                     * 脚本内容
                     */
                    std::string m_scriptContent;
                    bool m_scriptContentHasBeenSet;

                    /**
                     * 版本号
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBMITTASKTESTRUNREQUEST_H_
