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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBETWETALKAGENTREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBETWETALKAGENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * DescribeTWeTalkAgent请求参数结构体
                */
                class DescribeTWeTalkAgentRequest : public AbstractModel
                {
                public:
                    DescribeTWeTalkAgentRequest();
                    ~DescribeTWeTalkAgentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>智能体ID</p>
                     * @return AgentId <p>智能体ID</p>
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置<p>智能体ID</p>
                     * @param _agentId <p>智能体ID</p>
                     * 
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

                private:

                    /**
                     * <p>智能体ID</p>
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBETWETALKAGENTREQUEST_H_
