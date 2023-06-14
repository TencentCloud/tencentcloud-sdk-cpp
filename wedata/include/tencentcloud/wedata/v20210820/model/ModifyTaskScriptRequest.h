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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYTASKSCRIPTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYTASKSCRIPTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/IntegrationNodeDetail.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ModifyTaskScript请求参数结构体
                */
                class ModifyTaskScriptRequest : public AbstractModel
                {
                public:
                    ModifyTaskScriptRequest();
                    ~ModifyTaskScriptRequest() = default;
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
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取脚本内容 base64编码
                     * @return ScriptContent 脚本内容 base64编码
                     * 
                     */
                    std::string GetScriptContent() const;

                    /**
                     * 设置脚本内容 base64编码
                     * @param _scriptContent 脚本内容 base64编码
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
                     * 获取集成任务脚本配置
                     * @return IntegrationNodeDetails 集成任务脚本配置
                     * 
                     */
                    std::vector<IntegrationNodeDetail> GetIntegrationNodeDetails() const;

                    /**
                     * 设置集成任务脚本配置
                     * @param _integrationNodeDetails 集成任务脚本配置
                     * 
                     */
                    void SetIntegrationNodeDetails(const std::vector<IntegrationNodeDetail>& _integrationNodeDetails);

                    /**
                     * 判断参数 IntegrationNodeDetails 是否已赋值
                     * @return IntegrationNodeDetails 是否已赋值
                     * 
                     */
                    bool IntegrationNodeDetailsHasBeenSet() const;

                private:

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 脚本内容 base64编码
                     */
                    std::string m_scriptContent;
                    bool m_scriptContentHasBeenSet;

                    /**
                     * 集成任务脚本配置
                     */
                    std::vector<IntegrationNodeDetail> m_integrationNodeDetails;
                    bool m_integrationNodeDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYTASKSCRIPTREQUEST_H_
