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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_UPDATEAIWORKBENCHAGENTRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_UPDATEAIWORKBENCHAGENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/AgentInfo.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * UpdateAIWorkbenchAgent返回参数结构体
                */
                class UpdateAIWorkbenchAgentResponse : public AbstractModel
                {
                public:
                    UpdateAIWorkbenchAgentResponse();
                    ~UpdateAIWorkbenchAgentResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>更新后的 Agent 信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Agent <p>更新后的 Agent 信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AgentInfo GetAgent() const;

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                private:

                    /**
                     * <p>更新后的 Agent 信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AgentInfo m_agent;
                    bool m_agentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_UPDATEAIWORKBENCHAGENTRESPONSE_H_
