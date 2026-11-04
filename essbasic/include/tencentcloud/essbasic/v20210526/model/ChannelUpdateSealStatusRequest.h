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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELUPDATESEALSTATUSREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELUPDATESEALSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
#include <tencentcloud/essbasic/v20210526/model/UserInfo.h>
#include <tencentcloud/essbasic/v20210526/model/Option.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * ChannelUpdateSealStatus请求参数结构体
                */
                class ChannelUpdateSealStatusRequest : public AbstractModel
                {
                public:
                    ChannelUpdateSealStatusRequest();
                    ~ChannelUpdateSealStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p>
                     * @return Agent <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p>
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置<p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p>
                     * @param _agent <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p>
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
                     * 获取<p>印章状态，目前支持传入以下类型：</p><ul><li>ENABLE-启用印章</li><li>DISABLE-停用印章</li></ul>
                     * @return Status <p>印章状态，目前支持传入以下类型：</p><ul><li>ENABLE-启用印章</li><li>DISABLE-停用印章</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>印章状态，目前支持传入以下类型：</p><ul><li>ENABLE-启用印章</li><li>DISABLE-停用印章</li></ul>
                     * @param _status <p>印章状态，目前支持传入以下类型：</p><ul><li>ENABLE-启用印章</li><li>DISABLE-停用印章</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>印章ID</p>
                     * @return SealId <p>印章ID</p>
                     * 
                     */
                    std::string GetSealId() const;

                    /**
                     * 设置<p>印章ID</p>
                     * @param _sealId <p>印章ID</p>
                     * 
                     */
                    void SetSealId(const std::string& _sealId);

                    /**
                     * 判断参数 SealId 是否已赋值
                     * @return SealId 是否已赋值
                     * 
                     */
                    bool SealIdHasBeenSet() const;

                    /**
                     * 获取<p>更新印章状态原因说明</p>
                     * @return Reason <p>更新印章状态原因说明</p>
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置<p>更新印章状态原因说明</p>
                     * @param _reason <p>更新印章状态原因说明</p>
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取<p>操作者的信息</p>
                     * @return Operator <p>操作者的信息</p>
                     * @deprecated
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置<p>操作者的信息</p>
                     * @param _operator <p>操作者的信息</p>
                     * @deprecated
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * @deprecated
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取<p>个性化配置字段，默认不传。</p>
                     * @return Options <p>个性化配置字段，默认不传。</p>
                     * 
                     */
                    std::vector<Option> GetOptions() const;

                    /**
                     * 设置<p>个性化配置字段，默认不传。</p>
                     * @param _options <p>个性化配置字段，默认不传。</p>
                     * 
                     */
                    void SetOptions(const std::vector<Option>& _options);

                    /**
                     * 判断参数 Options 是否已赋值
                     * @return Options 是否已赋值
                     * 
                     */
                    bool OptionsHasBeenSet() const;

                private:

                    /**
                     * <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p>
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>印章状态，目前支持传入以下类型：</p><ul><li>ENABLE-启用印章</li><li>DISABLE-停用印章</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>印章ID</p>
                     */
                    std::string m_sealId;
                    bool m_sealIdHasBeenSet;

                    /**
                     * <p>更新印章状态原因说明</p>
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * <p>操作者的信息</p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>个性化配置字段，默认不传。</p>
                     */
                    std::vector<Option> m_options;
                    bool m_optionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELUPDATESEALSTATUSREQUEST_H_
