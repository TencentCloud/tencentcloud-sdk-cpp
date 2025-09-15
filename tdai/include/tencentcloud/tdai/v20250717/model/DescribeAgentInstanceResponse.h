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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBEAGENTINSTANCERESPONSE_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBEAGENTINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdai/v20250717/model/AgentInstance.h>


namespace TencentCloud
{
    namespace Tdai
    {
        namespace V20250717
        {
            namespace Model
            {
                /**
                * DescribeAgentInstance返回参数结构体
                */
                class DescribeAgentInstanceResponse : public AbstractModel
                {
                public:
                    DescribeAgentInstanceResponse();
                    ~DescribeAgentInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取智能体实例详情
                     * @return AgentInstance 智能体实例详情
                     * 
                     */
                    AgentInstance GetAgentInstance() const;

                    /**
                     * 判断参数 AgentInstance 是否已赋值
                     * @return AgentInstance 是否已赋值
                     * 
                     */
                    bool AgentInstanceHasBeenSet() const;

                private:

                    /**
                     * 智能体实例详情
                     */
                    AgentInstance m_agentInstance;
                    bool m_agentInstanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBEAGENTINSTANCERESPONSE_H_
