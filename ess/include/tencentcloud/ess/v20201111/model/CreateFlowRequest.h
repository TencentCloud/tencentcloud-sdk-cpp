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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/FlowCreateApprover.h>
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
                * CreateFlow请求参数结构体
                */
                class CreateFlowRequest : public AbstractModel
                {
                public:
                    CreateFlowRequest();
                    ~CreateFlowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取操作人信息
                     * @return Operator 操作人信息
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作人信息
                     * @param Operator 操作人信息
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取流程的名字, 长度不能超过200，中文字母数字下划线
                     * @return FlowName 流程的名字, 长度不能超过200，中文字母数字下划线
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置流程的名字, 长度不能超过200，中文字母数字下划线
                     * @param FlowName 流程的名字, 长度不能超过200，中文字母数字下划线
                     */
                    void SetFlowName(const std::string& _flowName);

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     */
                    bool FlowNameHasBeenSet() const;

                    /**
                     * 获取参与者信息
                     * @return Approvers 参与者信息
                     */
                    std::vector<FlowCreateApprover> GetApprovers() const;

                    /**
                     * 设置参与者信息
                     * @param Approvers 参与者信息
                     */
                    void SetApprovers(const std::vector<FlowCreateApprover>& _approvers);

                    /**
                     * 判断参数 Approvers 是否已赋值
                     * @return Approvers 是否已赋值
                     */
                    bool ApproversHasBeenSet() const;

                    /**
                     * 获取流程的描述, 长度不能超过1000
                     * @return FlowDescription 流程的描述, 长度不能超过1000
                     */
                    std::string GetFlowDescription() const;

                    /**
                     * 设置流程的描述, 长度不能超过1000
                     * @param FlowDescription 流程的描述, 长度不能超过1000
                     */
                    void SetFlowDescription(const std::string& _flowDescription);

                    /**
                     * 判断参数 FlowDescription 是否已赋值
                     * @return FlowDescription 是否已赋值
                     */
                    bool FlowDescriptionHasBeenSet() const;

                    /**
                     * 获取发送类型(true为无序签,false为顺序签)
                     * @return Unordered 发送类型(true为无序签,false为顺序签)
                     */
                    bool GetUnordered() const;

                    /**
                     * 设置发送类型(true为无序签,false为顺序签)
                     * @param Unordered 发送类型(true为无序签,false为顺序签)
                     */
                    void SetUnordered(const bool& _unordered);

                    /**
                     * 判断参数 Unordered 是否已赋值
                     * @return Unordered 是否已赋值
                     */
                    bool UnorderedHasBeenSet() const;

                    /**
                     * 获取流程的种类(如销售合同/入职合同等)
                     * @return FlowType 流程的种类(如销售合同/入职合同等)
                     */
                    std::string GetFlowType() const;

                    /**
                     * 设置流程的种类(如销售合同/入职合同等)
                     * @param FlowType 流程的种类(如销售合同/入职合同等)
                     */
                    void SetFlowType(const std::string& _flowType);

                    /**
                     * 判断参数 FlowType 是否已赋值
                     * @return FlowType 是否已赋值
                     */
                    bool FlowTypeHasBeenSet() const;

                    /**
                     * 获取过期时间戳,如果是0则为不过期
                     * @return DeadLine 过期时间戳,如果是0则为不过期
                     */
                    int64_t GetDeadLine() const;

                    /**
                     * 设置过期时间戳,如果是0则为不过期
                     * @param DeadLine 过期时间戳,如果是0则为不过期
                     */
                    void SetDeadLine(const int64_t& _deadLine);

                    /**
                     * 判断参数 DeadLine 是否已赋值
                     * @return DeadLine 是否已赋值
                     */
                    bool DeadLineHasBeenSet() const;

                    /**
                     * 获取执行结果的回调URL(需要以http://或者https://)开头
                     * @return CallbackUrl 执行结果的回调URL(需要以http://或者https://)开头
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置执行结果的回调URL(需要以http://或者https://)开头
                     * @param CallbackUrl 执行结果的回调URL(需要以http://或者https://)开头
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取用户自定义字段(需进行base64 encode),回调的时候会进行透传, 长度需要小于20480
                     * @return UserData 用户自定义字段(需进行base64 encode),回调的时候会进行透传, 长度需要小于20480
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置用户自定义字段(需进行base64 encode),回调的时候会进行透传, 长度需要小于20480
                     * @param UserData 用户自定义字段(需进行base64 encode),回调的时候会进行透传, 长度需要小于20480
                     */
                    void SetUserData(const std::string& _userData);

                    /**
                     * 判断参数 UserData 是否已赋值
                     * @return UserData 是否已赋值
                     */
                    bool UserDataHasBeenSet() const;

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
                     * 获取客户端Token，保持接口幂等性
                     * @return ClientToken 客户端Token，保持接口幂等性
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置客户端Token，保持接口幂等性
                     * @param ClientToken 客户端Token，保持接口幂等性
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     */
                    bool ClientTokenHasBeenSet() const;

                private:

                    /**
                     * 操作人信息
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 流程的名字, 长度不能超过200，中文字母数字下划线
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * 参与者信息
                     */
                    std::vector<FlowCreateApprover> m_approvers;
                    bool m_approversHasBeenSet;

                    /**
                     * 流程的描述, 长度不能超过1000
                     */
                    std::string m_flowDescription;
                    bool m_flowDescriptionHasBeenSet;

                    /**
                     * 发送类型(true为无序签,false为顺序签)
                     */
                    bool m_unordered;
                    bool m_unorderedHasBeenSet;

                    /**
                     * 流程的种类(如销售合同/入职合同等)
                     */
                    std::string m_flowType;
                    bool m_flowTypeHasBeenSet;

                    /**
                     * 过期时间戳,如果是0则为不过期
                     */
                    int64_t m_deadLine;
                    bool m_deadLineHasBeenSet;

                    /**
                     * 执行结果的回调URL(需要以http://或者https://)开头
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 用户自定义字段(需进行base64 encode),回调的时候会进行透传, 长度需要小于20480
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * 应用相关信息
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 客户端Token，保持接口幂等性
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWREQUEST_H_
