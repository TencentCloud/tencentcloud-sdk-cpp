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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_CREATEAGENTSESSIONRESPONSE_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_CREATEAGENTSESSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/ChatEndpoint.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * CreateAgentSession返回参数结构体
                */
                class CreateAgentSessionResponse : public AbstractModel
                {
                public:
                    CreateAgentSessionResponse();
                    ~CreateAgentSessionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>会话 ID</p>
                     * @return SessionId <p>会话 ID</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>可用的聊天接入点列表（当前仅含一个 PUBLIC 公网接入点；空数组 = 无可用接入点）</p>
                     * @return EndpointSet <p>可用的聊天接入点列表（当前仅含一个 PUBLIC 公网接入点；空数组 = 无可用接入点）</p>
                     * 
                     */
                    std::vector<ChatEndpoint> GetEndpointSet() const;

                    /**
                     * 判断参数 EndpointSet 是否已赋值
                     * @return EndpointSet 是否已赋值
                     * 
                     */
                    bool EndpointSetHasBeenSet() const;

                private:

                    /**
                     * <p>会话 ID</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>可用的聊天接入点列表（当前仅含一个 PUBLIC 公网接入点；空数组 = 无可用接入点）</p>
                     */
                    std::vector<ChatEndpoint> m_endpointSet;
                    bool m_endpointSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_CREATEAGENTSESSIONRESPONSE_H_
