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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CANCELFLOWREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CANCELFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CancelFlow请求参数结构体
                */
                class CancelFlowRequest : public AbstractModel
                {
                public:
                    CancelFlowRequest();
                    ~CancelFlowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取操作用户id
                     * @return Operator 操作用户id
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作用户id
                     * @param Operator 操作用户id
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取应用相关信息
                     * @return Agent 应用相关信息
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置应用相关信息
                     * @param Agent 应用相关信息
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取流程id
                     * @return FlowId 流程id
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置流程id
                     * @param FlowId 流程id
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取撤销原因
                     * @return CancelMessage 撤销原因
                     */
                    std::string GetCancelMessage() const;

                    /**
                     * 设置撤销原因
                     * @param CancelMessage 撤销原因
                     */
                    void SetCancelMessage(const std::string& _cancelMessage);

                    /**
                     * 判断参数 CancelMessage 是否已赋值
                     * @return CancelMessage 是否已赋值
                     */
                    bool CancelMessageHasBeenSet() const;

                private:

                    /**
                     * 操作用户id
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 应用相关信息
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 流程id
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 撤销原因
                     */
                    std::string m_cancelMessage;
                    bool m_cancelMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CANCELFLOWREQUEST_H_
