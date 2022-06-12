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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEMULTIFLOWSIGNQRCODEREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEMULTIFLOWSIGNQRCODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
#include <tencentcloud/essbasic/v20210526/model/UserInfo.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * ChannelCreateMultiFlowSignQRCode请求参数结构体
                */
                class ChannelCreateMultiFlowSignQRCodeRequest : public AbstractModel
                {
                public:
                    ChannelCreateMultiFlowSignQRCodeRequest();
                    ~ChannelCreateMultiFlowSignQRCodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用信息
此接口Agent.ProxyOrganizationOpenId 和 Agent. ProxyOperator.OpenId 必填
                     * @return Agent 应用信息
此接口Agent.ProxyOrganizationOpenId 和 Agent. ProxyOperator.OpenId 必填
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置应用信息
此接口Agent.ProxyOrganizationOpenId 和 Agent. ProxyOperator.OpenId 必填
                     * @param Agent 应用信息
此接口Agent.ProxyOrganizationOpenId 和 Agent. ProxyOperator.OpenId 必填
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取模版ID
                     * @return TemplateId 模版ID
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模版ID
                     * @param TemplateId 模版ID
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取合同名称
                     * @return FlowName 合同名称
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置合同名称
                     * @param FlowName 合同名称
                     */
                    void SetFlowName(const std::string& _flowName);

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     */
                    bool FlowNameHasBeenSet() const;

                    /**
                     * 获取用户信息
                     * @return Operator 用户信息
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置用户信息
                     * @param Operator 用户信息
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取合同有效天数 默认7天 最高设置不超过30天
                     * @return FlowEffectiveDay 合同有效天数 默认7天 最高设置不超过30天
                     */
                    int64_t GetFlowEffectiveDay() const;

                    /**
                     * 设置合同有效天数 默认7天 最高设置不超过30天
                     * @param FlowEffectiveDay 合同有效天数 默认7天 最高设置不超过30天
                     */
                    void SetFlowEffectiveDay(const int64_t& _flowEffectiveDay);

                    /**
                     * 判断参数 FlowEffectiveDay 是否已赋值
                     * @return FlowEffectiveDay 是否已赋值
                     */
                    bool FlowEffectiveDayHasBeenSet() const;

                    /**
                     * 获取二维码有效天数 默认7天 最高设置不超过90天
                     * @return QrEffectiveDay 二维码有效天数 默认7天 最高设置不超过90天
                     */
                    int64_t GetQrEffectiveDay() const;

                    /**
                     * 设置二维码有效天数 默认7天 最高设置不超过90天
                     * @param QrEffectiveDay 二维码有效天数 默认7天 最高设置不超过90天
                     */
                    void SetQrEffectiveDay(const int64_t& _qrEffectiveDay);

                    /**
                     * 判断参数 QrEffectiveDay 是否已赋值
                     * @return QrEffectiveDay 是否已赋值
                     */
                    bool QrEffectiveDayHasBeenSet() const;

                    /**
                     * 获取最大合同份数，默认5份 超过此上限 二维码自动失效
                     * @return MaxFlowNum 最大合同份数，默认5份 超过此上限 二维码自动失效
                     */
                    int64_t GetMaxFlowNum() const;

                    /**
                     * 设置最大合同份数，默认5份 超过此上限 二维码自动失效
                     * @param MaxFlowNum 最大合同份数，默认5份 超过此上限 二维码自动失效
                     */
                    void SetMaxFlowNum(const int64_t& _maxFlowNum);

                    /**
                     * 判断参数 MaxFlowNum 是否已赋值
                     * @return MaxFlowNum 是否已赋值
                     */
                    bool MaxFlowNumHasBeenSet() const;

                    /**
                     * 获取回调地址
                     * @return CallbackUrl 回调地址
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置回调地址
                     * @param CallbackUrl 回调地址
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     */
                    bool CallbackUrlHasBeenSet() const;

                private:

                    /**
                     * 应用信息
此接口Agent.ProxyOrganizationOpenId 和 Agent. ProxyOperator.OpenId 必填
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 模版ID
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 合同名称
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * 用户信息
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 合同有效天数 默认7天 最高设置不超过30天
                     */
                    int64_t m_flowEffectiveDay;
                    bool m_flowEffectiveDayHasBeenSet;

                    /**
                     * 二维码有效天数 默认7天 最高设置不超过90天
                     */
                    int64_t m_qrEffectiveDay;
                    bool m_qrEffectiveDayHasBeenSet;

                    /**
                     * 最大合同份数，默认5份 超过此上限 二维码自动失效
                     */
                    int64_t m_maxFlowNum;
                    bool m_maxFlowNumHasBeenSet;

                    /**
                     * 回调地址
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEMULTIFLOWSIGNQRCODEREQUEST_H_
