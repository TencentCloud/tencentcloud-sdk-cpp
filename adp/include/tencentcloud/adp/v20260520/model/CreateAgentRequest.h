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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CREATEAGENTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CREATEAGENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AgentSpec.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * CreateAgent请求参数结构体
                */
                class CreateAgentRequest : public AbstractModel
                {
                public:
                    CreateAgentRequest();
                    ~CreateAgentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用Id</p>
                     * @return AppId <p>应用Id</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用Id</p>
                     * @param _appId <p>应用Id</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>Agent 配置</p>
                     * @return Agent <p>Agent 配置</p>
                     * 
                     */
                    AgentSpec GetAgent() const;

                    /**
                     * 设置<p>Agent 配置</p>
                     * @param _agent <p>Agent 配置</p>
                     * 
                     */
                    void SetAgent(const AgentSpec& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                private:

                    /**
                     * <p>应用Id</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Agent 配置</p>
                     */
                    AgentSpec m_agent;
                    bool m_agentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CREATEAGENTREQUEST_H_
