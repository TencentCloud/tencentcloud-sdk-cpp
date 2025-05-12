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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATECODETEMPLATEVERSIONREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATECODETEMPLATEVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskFormParams.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CreateCodeTemplateVersion请求参数结构体
                */
                class CreateCodeTemplateVersionRequest : public AbstractModel
                {
                public:
                    CreateCodeTemplateVersionRequest();
                    ~CreateCodeTemplateVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模版Id
                     * @return CodeTemplateId 模版Id
                     * 
                     */
                    std::string GetCodeTemplateId() const;

                    /**
                     * 设置模版Id
                     * @param _codeTemplateId 模版Id
                     * 
                     */
                    void SetCodeTemplateId(const std::string& _codeTemplateId);

                    /**
                     * 判断参数 CodeTemplateId 是否已赋值
                     * @return CodeTemplateId 是否已赋值
                     * 
                     */
                    bool CodeTemplateIdHasBeenSet() const;

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
                     * 获取模版关联的任务以及调度参数设置
                     * @return Tasks 模版关联的任务以及调度参数设置
                     * 
                     */
                    std::vector<TaskFormParams> GetTasks() const;

                    /**
                     * 设置模版关联的任务以及调度参数设置
                     * @param _tasks 模版关联的任务以及调度参数设置
                     * 
                     */
                    void SetTasks(const std::vector<TaskFormParams>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取代码模本脚本内置参数
                     * @return OriginalParams 代码模本脚本内置参数
                     * 
                     */
                    std::vector<std::string> GetOriginalParams() const;

                    /**
                     * 设置代码模本脚本内置参数
                     * @param _originalParams 代码模本脚本内置参数
                     * 
                     */
                    void SetOriginalParams(const std::vector<std::string>& _originalParams);

                    /**
                     * 判断参数 OriginalParams 是否已赋值
                     * @return OriginalParams 是否已赋值
                     * 
                     */
                    bool OriginalParamsHasBeenSet() const;

                    /**
                     * 获取提交描述
                     * @return VersionRemark 提交描述
                     * 
                     */
                    std::string GetVersionRemark() const;

                    /**
                     * 设置提交描述
                     * @param _versionRemark 提交描述
                     * 
                     */
                    void SetVersionRemark(const std::string& _versionRemark);

                    /**
                     * 判断参数 VersionRemark 是否已赋值
                     * @return VersionRemark 是否已赋值
                     * 
                     */
                    bool VersionRemarkHasBeenSet() const;

                    /**
                     * 获取true表示：针对新建、已下线状态的任务仅生成开发态保存版本，您可在任务中自行提交到生产。针对调度中、已暂停、已失效的任务生成开发态保存版本并提交到生产（即本次代码模板的改动在调度中生效）； 
false表示：针对所有状态的任务均仅生成开发态保存版本。
                     * @return NeedSubmitScheduleForTemplate true表示：针对新建、已下线状态的任务仅生成开发态保存版本，您可在任务中自行提交到生产。针对调度中、已暂停、已失效的任务生成开发态保存版本并提交到生产（即本次代码模板的改动在调度中生效）； 
false表示：针对所有状态的任务均仅生成开发态保存版本。
                     * 
                     */
                    bool GetNeedSubmitScheduleForTemplate() const;

                    /**
                     * 设置true表示：针对新建、已下线状态的任务仅生成开发态保存版本，您可在任务中自行提交到生产。针对调度中、已暂停、已失效的任务生成开发态保存版本并提交到生产（即本次代码模板的改动在调度中生效）； 
false表示：针对所有状态的任务均仅生成开发态保存版本。
                     * @param _needSubmitScheduleForTemplate true表示：针对新建、已下线状态的任务仅生成开发态保存版本，您可在任务中自行提交到生产。针对调度中、已暂停、已失效的任务生成开发态保存版本并提交到生产（即本次代码模板的改动在调度中生效）； 
false表示：针对所有状态的任务均仅生成开发态保存版本。
                     * 
                     */
                    void SetNeedSubmitScheduleForTemplate(const bool& _needSubmitScheduleForTemplate);

                    /**
                     * 判断参数 NeedSubmitScheduleForTemplate 是否已赋值
                     * @return NeedSubmitScheduleForTemplate 是否已赋值
                     * 
                     */
                    bool NeedSubmitScheduleForTemplateHasBeenSet() const;

                private:

                    /**
                     * 模版Id
                     */
                    std::string m_codeTemplateId;
                    bool m_codeTemplateIdHasBeenSet;

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 模版关联的任务以及调度参数设置
                     */
                    std::vector<TaskFormParams> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * 代码模本脚本内置参数
                     */
                    std::vector<std::string> m_originalParams;
                    bool m_originalParamsHasBeenSet;

                    /**
                     * 提交描述
                     */
                    std::string m_versionRemark;
                    bool m_versionRemarkHasBeenSet;

                    /**
                     * true表示：针对新建、已下线状态的任务仅生成开发态保存版本，您可在任务中自行提交到生产。针对调度中、已暂停、已失效的任务生成开发态保存版本并提交到生产（即本次代码模板的改动在调度中生效）； 
false表示：针对所有状态的任务均仅生成开发态保存版本。
                     */
                    bool m_needSubmitScheduleForTemplate;
                    bool m_needSubmitScheduleForTemplateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATECODETEMPLATEVERSIONREQUEST_H_
