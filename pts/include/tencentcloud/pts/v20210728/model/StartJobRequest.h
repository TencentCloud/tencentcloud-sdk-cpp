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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_STARTJOBREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_STARTJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * StartJob请求参数结构体
                */
                class StartJobRequest : public AbstractModel
                {
                public:
                    StartJobRequest();
                    ~StartJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取场景ID
                     * @return ScenarioId 场景ID
                     * 
                     */
                    std::string GetScenarioId() const;

                    /**
                     * 设置场景ID
                     * @param _scenarioId 场景ID
                     * 
                     */
                    void SetScenarioId(const std::string& _scenarioId);

                    /**
                     * 判断参数 ScenarioId 是否已赋值
                     * @return ScenarioId 是否已赋值
                     * 
                     */
                    bool ScenarioIdHasBeenSet() const;

                    /**
                     * 获取任务发起人
                     * @return JobOwner 任务发起人
                     * 
                     */
                    std::string GetJobOwner() const;

                    /**
                     * 设置任务发起人
                     * @param _jobOwner 任务发起人
                     * 
                     */
                    void SetJobOwner(const std::string& _jobOwner);

                    /**
                     * 判断参数 JobOwner 是否已赋值
                     * @return JobOwner 是否已赋值
                     * 
                     */
                    bool JobOwnerHasBeenSet() const;

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
                     * 获取是否调试
                     * @return Debug 是否调试
                     * 
                     */
                    bool GetDebug() const;

                    /**
                     * 设置是否调试
                     * @param _debug 是否调试
                     * 
                     */
                    void SetDebug(const bool& _debug);

                    /**
                     * 判断参数 Debug 是否已赋值
                     * @return Debug 是否已赋值
                     * 
                     */
                    bool DebugHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Note 备注
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置备注
                     * @param _note 备注
                     * 
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                private:

                    /**
                     * 场景ID
                     */
                    std::string m_scenarioId;
                    bool m_scenarioIdHasBeenSet;

                    /**
                     * 任务发起人
                     */
                    std::string m_jobOwner;
                    bool m_jobOwnerHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 是否调试
                     */
                    bool m_debug;
                    bool m_debugHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_STARTJOBREQUEST_H_
