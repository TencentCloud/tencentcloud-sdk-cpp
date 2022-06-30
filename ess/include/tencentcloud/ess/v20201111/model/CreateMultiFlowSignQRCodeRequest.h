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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEMULTIFLOWSIGNQRCODEREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEMULTIFLOWSIGNQRCODEREQUEST_H_

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
                * CreateMultiFlowSignQRCode请求参数结构体
                */
                class CreateMultiFlowSignQRCodeRequest : public AbstractModel
                {
                public:
                    CreateMultiFlowSignQRCodeRequest();
                    ~CreateMultiFlowSignQRCodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模板ID
                     * @return TemplateId 模板ID
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板ID
                     * @param TemplateId 模板ID
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取签署流程名称，最大长度不超过200字符
                     * @return FlowName 签署流程名称，最大长度不超过200字符
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置签署流程名称，最大长度不超过200字符
                     * @param FlowName 签署流程名称，最大长度不超过200字符
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
                     * 获取应用信息
                     * @return Agent 应用信息
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置应用信息
                     * @param Agent 应用信息
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取回调地址,最大长度1000字符串
回调时机：
用户通过签署二维码发起签署流程时，企业额度不足导致失败
                     * @return CallbackUrl 回调地址,最大长度1000字符串
回调时机：
用户通过签署二维码发起签署流程时，企业额度不足导致失败
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置回调地址,最大长度1000字符串
回调时机：
用户通过签署二维码发起签署流程时，企业额度不足导致失败
                     * @param CallbackUrl 回调地址,最大长度1000字符串
回调时机：
用户通过签署二维码发起签署流程时，企业额度不足导致失败
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取最大可发起签署流程份数，默认5份 
发起流程数量超过此上限后二维码自动失效
                     * @return MaxFlowNum 最大可发起签署流程份数，默认5份 
发起流程数量超过此上限后二维码自动失效
                     */
                    int64_t GetMaxFlowNum() const;

                    /**
                     * 设置最大可发起签署流程份数，默认5份 
发起流程数量超过此上限后二维码自动失效
                     * @param MaxFlowNum 最大可发起签署流程份数，默认5份 
发起流程数量超过此上限后二维码自动失效
                     */
                    void SetMaxFlowNum(const int64_t& _maxFlowNum);

                    /**
                     * 判断参数 MaxFlowNum 是否已赋值
                     * @return MaxFlowNum 是否已赋值
                     */
                    bool MaxFlowNumHasBeenSet() const;

                    /**
                     * 获取签署流程有效天数 默认7天 最高设置不超过30天
                     * @return FlowEffectiveDay 签署流程有效天数 默认7天 最高设置不超过30天
                     */
                    int64_t GetFlowEffectiveDay() const;

                    /**
                     * 设置签署流程有效天数 默认7天 最高设置不超过30天
                     * @param FlowEffectiveDay 签署流程有效天数 默认7天 最高设置不超过30天
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

                private:

                    /**
                     * 模板ID
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 签署流程名称，最大长度不超过200字符
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * 用户信息
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 应用信息
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 回调地址,最大长度1000字符串
回调时机：
用户通过签署二维码发起签署流程时，企业额度不足导致失败
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 最大可发起签署流程份数，默认5份 
发起流程数量超过此上限后二维码自动失效
                     */
                    int64_t m_maxFlowNum;
                    bool m_maxFlowNumHasBeenSet;

                    /**
                     * 签署流程有效天数 默认7天 最高设置不超过30天
                     */
                    int64_t m_flowEffectiveDay;
                    bool m_flowEffectiveDayHasBeenSet;

                    /**
                     * 二维码有效天数 默认7天 最高设置不超过90天
                     */
                    int64_t m_qrEffectiveDay;
                    bool m_qrEffectiveDayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEMULTIFLOWSIGNQRCODEREQUEST_H_
