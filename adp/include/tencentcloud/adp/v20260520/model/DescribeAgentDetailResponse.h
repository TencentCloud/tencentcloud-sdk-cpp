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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAGENTDETAILRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAGENTDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AgentDetail.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeAgentDetail返回参数结构体
                */
                class DescribeAgentDetailResponse : public AbstractModel
                {
                public:
                    DescribeAgentDetailResponse();
                    ~DescribeAgentDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Agent信息</p>
                     * @return Agent <p>Agent信息</p>
                     * 
                     */
                    AgentDetail GetAgent() const;

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                private:

                    /**
                     * <p>Agent信息</p>
                     */
                    AgentDetail m_agent;
                    bool m_agentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAGENTDETAILRESPONSE_H_
