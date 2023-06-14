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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_COPYSCENARIOREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_COPYSCENARIOREQUEST_H_

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
                * CopyScenario请求参数结构体
                */
                class CopyScenarioRequest : public AbstractModel
                {
                public:
                    CopyScenarioRequest();
                    ~CopyScenarioRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目 ID
                     * @return ProjectId 项目 ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目 ID
                     * @param _projectId 项目 ID
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
                     * 获取场景 ID
                     * @return ScenarioId 场景 ID
                     * 
                     */
                    std::string GetScenarioId() const;

                    /**
                     * 设置场景 ID
                     * @param _scenarioId 场景 ID
                     * 
                     */
                    void SetScenarioId(const std::string& _scenarioId);

                    /**
                     * 判断参数 ScenarioId 是否已赋值
                     * @return ScenarioId 是否已赋值
                     * 
                     */
                    bool ScenarioIdHasBeenSet() const;

                private:

                    /**
                     * 项目 ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 场景 ID
                     */
                    std::string m_scenarioId;
                    bool m_scenarioIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_COPYSCENARIOREQUEST_H_
