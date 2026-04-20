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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWREMINDSREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWREMINDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>
#include <tencentcloud/ess/v20201111/model/RemindEmailInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateFlowReminds请求参数结构体
                */
                class CreateFlowRemindsRequest : public AbstractModel
                {
                public:
                    CreateFlowRemindsRequest();
                    ~CreateFlowRemindsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * @return Operator <p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置<p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * @param _operator <p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * 
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取<p>需执行催办的签署流程ID数组，最多包含100个。</p>
                     * @return FlowIds <p>需执行催办的签署流程ID数组，最多包含100个。</p>
                     * 
                     */
                    std::vector<std::string> GetFlowIds() const;

                    /**
                     * 设置<p>需执行催办的签署流程ID数组，最多包含100个。</p>
                     * @param _flowIds <p>需执行催办的签署流程ID数组，最多包含100个。</p>
                     * 
                     */
                    void SetFlowIds(const std::vector<std::string>& _flowIds);

                    /**
                     * 判断参数 FlowIds 是否已赋值
                     * @return FlowIds 是否已赋值
                     * 
                     */
                    bool FlowIdsHasBeenSet() const;

                    /**
                     * 获取<p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * @return Agent <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置<p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * @param _agent <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * 
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取<p>指定通知方式，枚举值：SMS / EMAIL；为空则按签署人原始 NotifyType 处理</p>
                     * @return RemindTypes <p>指定通知方式，枚举值：SMS / EMAIL；为空则按签署人原始 NotifyType 处理</p>
                     * 
                     */
                    std::vector<std::string> GetRemindTypes() const;

                    /**
                     * 设置<p>指定通知方式，枚举值：SMS / EMAIL；为空则按签署人原始 NotifyType 处理</p>
                     * @param _remindTypes <p>指定通知方式，枚举值：SMS / EMAIL；为空则按签署人原始 NotifyType 处理</p>
                     * 
                     */
                    void SetRemindTypes(const std::vector<std::string>& _remindTypes);

                    /**
                     * 判断参数 RemindTypes 是否已赋值
                     * @return RemindTypes 是否已赋值
                     * 
                     */
                    bool RemindTypesHasBeenSet() const;

                    /**
                     * 获取<p>邮箱覆盖列表，为指定签署人使用特定邮箱发送邮件催办</p>
                     * @return RemindEmailInfos <p>邮箱覆盖列表，为指定签署人使用特定邮箱发送邮件催办</p>
                     * 
                     */
                    std::vector<RemindEmailInfo> GetRemindEmailInfos() const;

                    /**
                     * 设置<p>邮箱覆盖列表，为指定签署人使用特定邮箱发送邮件催办</p>
                     * @param _remindEmailInfos <p>邮箱覆盖列表，为指定签署人使用特定邮箱发送邮件催办</p>
                     * 
                     */
                    void SetRemindEmailInfos(const std::vector<RemindEmailInfo>& _remindEmailInfos);

                    /**
                     * 判断参数 RemindEmailInfos 是否已赋值
                     * @return RemindEmailInfos 是否已赋值
                     * 
                     */
                    bool RemindEmailInfosHasBeenSet() const;

                private:

                    /**
                     * <p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>需执行催办的签署流程ID数组，最多包含100个。</p>
                     */
                    std::vector<std::string> m_flowIds;
                    bool m_flowIdsHasBeenSet;

                    /**
                     * <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>指定通知方式，枚举值：SMS / EMAIL；为空则按签署人原始 NotifyType 处理</p>
                     */
                    std::vector<std::string> m_remindTypes;
                    bool m_remindTypesHasBeenSet;

                    /**
                     * <p>邮箱覆盖列表，为指定签署人使用特定邮箱发送邮件催办</p>
                     */
                    std::vector<RemindEmailInfo> m_remindEmailInfos;
                    bool m_remindEmailInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWREMINDSREQUEST_H_
