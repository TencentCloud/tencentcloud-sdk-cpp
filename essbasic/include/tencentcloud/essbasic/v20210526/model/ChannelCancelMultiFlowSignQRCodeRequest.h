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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCANCELMULTIFLOWSIGNQRCODEREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCANCELMULTIFLOWSIGNQRCODEREQUEST_H_

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
                * ChannelCancelMultiFlowSignQRCode请求参数结构体
                */
                class ChannelCancelMultiFlowSignQRCodeRequest : public AbstractModel
                {
                public:
                    ChannelCancelMultiFlowSignQRCodeRequest();
                    ~ChannelCancelMultiFlowSignQRCodeRequest() = default;
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
                     * 获取二维码id
                     * @return QrCodeId 二维码id
                     */
                    std::string GetQrCodeId() const;

                    /**
                     * 设置二维码id
                     * @param QrCodeId 二维码id
                     */
                    void SetQrCodeId(const std::string& _qrCodeId);

                    /**
                     * 判断参数 QrCodeId 是否已赋值
                     * @return QrCodeId 是否已赋值
                     */
                    bool QrCodeIdHasBeenSet() const;

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

                private:

                    /**
                     * 应用信息
此接口Agent.ProxyOrganizationOpenId 和 Agent. ProxyOperator.OpenId 必填
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 二维码id
                     */
                    std::string m_qrCodeId;
                    bool m_qrCodeIdHasBeenSet;

                    /**
                     * 用户信息
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCANCELMULTIFLOWSIGNQRCODEREQUEST_H_
