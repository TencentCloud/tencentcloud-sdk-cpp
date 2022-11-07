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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEINLONGAGENTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEINLONGAGENTREQUEST_H_

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
                * UpdateInLongAgent请求参数结构体
                */
                class UpdateInLongAgentRequest : public AbstractModel
                {
                public:
                    UpdateInLongAgentRequest();
                    ~UpdateInLongAgentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取采集器ID
                     * @return AgentId 采集器ID
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置采集器ID
                     * @param AgentId 采集器ID
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取WeData项目ID
                     * @return ProjectId WeData项目ID
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置WeData项目ID
                     * @param ProjectId WeData项目ID
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取采集器名称
                     * @return AgentName 采集器名称
                     */
                    std::string GetAgentName() const;

                    /**
                     * 设置采集器名称
                     * @param AgentName 采集器名称
                     */
                    void SetAgentName(const std::string& _agentName);

                    /**
                     * 判断参数 AgentName 是否已赋值
                     * @return AgentName 是否已赋值
                     */
                    bool AgentNameHasBeenSet() const;

                    /**
                     * 获取集成资源组ID
                     * @return ExecutorGroupId 集成资源组ID
                     */
                    std::string GetExecutorGroupId() const;

                    /**
                     * 设置集成资源组ID
                     * @param ExecutorGroupId 集成资源组ID
                     */
                    void SetExecutorGroupId(const std::string& _executorGroupId);

                    /**
                     * 判断参数 ExecutorGroupId 是否已赋值
                     * @return ExecutorGroupId 是否已赋值
                     */
                    bool ExecutorGroupIdHasBeenSet() const;

                private:

                    /**
                     * 采集器ID
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * WeData项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 采集器名称
                     */
                    std::string m_agentName;
                    bool m_agentNameHasBeenSet;

                    /**
                     * 集成资源组ID
                     */
                    std::string m_executorGroupId;
                    bool m_executorGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEINLONGAGENTREQUEST_H_
