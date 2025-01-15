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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_STARTFLOWREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_STARTFLOWREQUEST_H_

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
                * StartFlow请求参数结构体
                */
                class StartFlowRequest : public AbstractModel
                {
                public:
                    StartFlowRequest();
                    ~StartFlowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取本合同的发起人，<a href="https://qcloudimg.tencent-cloud.cn/raw/f850cfbe163a1cb38439a9f551c2505c.png" target="_blank">点击查看合同发起人展示的位置</a>
                     * @return Operator 本合同的发起人，<a href="https://qcloudimg.tencent-cloud.cn/raw/f850cfbe163a1cb38439a9f551c2505c.png" target="_blank">点击查看合同发起人展示的位置</a>
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置本合同的发起人，<a href="https://qcloudimg.tencent-cloud.cn/raw/f850cfbe163a1cb38439a9f551c2505c.png" target="_blank">点击查看合同发起人展示的位置</a>
                     * @param _operator 本合同的发起人，<a href="https://qcloudimg.tencent-cloud.cn/raw/f850cfbe163a1cb38439a9f551c2505c.png" target="_blank">点击查看合同发起人展示的位置</a>
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
                     * 获取合同流程ID，为32位字符串。
此处需要传入[创建签署流程接口](https://qian.tencent.com/developers/companyApis/startFlows/CreateFlow)得到的FlowId。
                     * @return FlowId 合同流程ID，为32位字符串。
此处需要传入[创建签署流程接口](https://qian.tencent.com/developers/companyApis/startFlows/CreateFlow)得到的FlowId。
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置合同流程ID，为32位字符串。
此处需要传入[创建签署流程接口](https://qian.tencent.com/developers/companyApis/startFlows/CreateFlow)得到的FlowId。
                     * @param _flowId 合同流程ID，为32位字符串。
此处需要传入[创建签署流程接口](https://qian.tencent.com/developers/companyApis/startFlows/CreateFlow)得到的FlowId。
                     * 
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取客户端Token，保持接口幂等性,最大长度64个字符
                     * @return ClientToken 客户端Token，保持接口幂等性,最大长度64个字符
                     * @deprecated
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置客户端Token，保持接口幂等性,最大长度64个字符
                     * @param _clientToken 客户端Token，保持接口幂等性,最大长度64个字符
                     * @deprecated
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * @deprecated
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * @return Agent 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * @param _agent 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
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
                     * 获取若在创建签署流程时指定了关注人CcInfos，此参数可设定向关注人发送短信通知的类型：
<ul><li> **0** :合同发起时通知通知对方来查看合同（默认）</li>
<li> **1** : 签署完成后通知对方来查看合同</li></ul>
                     * @return CcNotifyType 若在创建签署流程时指定了关注人CcInfos，此参数可设定向关注人发送短信通知的类型：
<ul><li> **0** :合同发起时通知通知对方来查看合同（默认）</li>
<li> **1** : 签署完成后通知对方来查看合同</li></ul>
                     * 
                     */
                    int64_t GetCcNotifyType() const;

                    /**
                     * 设置若在创建签署流程时指定了关注人CcInfos，此参数可设定向关注人发送短信通知的类型：
<ul><li> **0** :合同发起时通知通知对方来查看合同（默认）</li>
<li> **1** : 签署完成后通知对方来查看合同</li></ul>
                     * @param _ccNotifyType 若在创建签署流程时指定了关注人CcInfos，此参数可设定向关注人发送短信通知的类型：
<ul><li> **0** :合同发起时通知通知对方来查看合同（默认）</li>
<li> **1** : 签署完成后通知对方来查看合同</li></ul>
                     * 
                     */
                    void SetCcNotifyType(const int64_t& _ccNotifyType);

                    /**
                     * 判断参数 CcNotifyType 是否已赋值
                     * @return CcNotifyType 是否已赋值
                     * 
                     */
                    bool CcNotifyTypeHasBeenSet() const;

                private:

                    /**
                     * 本合同的发起人，<a href="https://qcloudimg.tencent-cloud.cn/raw/f850cfbe163a1cb38439a9f551c2505c.png" target="_blank">点击查看合同发起人展示的位置</a>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 合同流程ID，为32位字符串。
此处需要传入[创建签署流程接口](https://qian.tencent.com/developers/companyApis/startFlows/CreateFlow)得到的FlowId。
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 客户端Token，保持接口幂等性,最大长度64个字符
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 若在创建签署流程时指定了关注人CcInfos，此参数可设定向关注人发送短信通知的类型：
<ul><li> **0** :合同发起时通知通知对方来查看合同（默认）</li>
<li> **1** : 签署完成后通知对方来查看合同</li></ul>
                     */
                    int64_t m_ccNotifyType;
                    bool m_ccNotifyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_STARTFLOWREQUEST_H_
