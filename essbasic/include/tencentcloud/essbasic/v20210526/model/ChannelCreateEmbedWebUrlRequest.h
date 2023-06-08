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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEEMBEDWEBURLREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEEMBEDWEBURLREQUEST_H_

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
                * ChannelCreateEmbedWebUrl请求参数结构体
                */
                class ChannelCreateEmbedWebUrlRequest : public AbstractModel
                {
                public:
                    ChannelCreateEmbedWebUrlRequest();
                    ~ChannelCreateEmbedWebUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取渠道应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 必填。
                     * @return Agent 渠道应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 必填。
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置渠道应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 必填。
                     * @param Agent 渠道应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 必填。
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取WEB嵌入资源类型，取值范围：CREATE_SEAL创建印章，CREATE_TEMPLATE创建模板，MODIFY_TEMPLATE修改模板，PREVIEW_TEMPLATE预览模板，PREVIEW_FLOW预览流程
                     * @return EmbedType WEB嵌入资源类型，取值范围：CREATE_SEAL创建印章，CREATE_TEMPLATE创建模板，MODIFY_TEMPLATE修改模板，PREVIEW_TEMPLATE预览模板，PREVIEW_FLOW预览流程
                     */
                    std::string GetEmbedType() const;

                    /**
                     * 设置WEB嵌入资源类型，取值范围：CREATE_SEAL创建印章，CREATE_TEMPLATE创建模板，MODIFY_TEMPLATE修改模板，PREVIEW_TEMPLATE预览模板，PREVIEW_FLOW预览流程
                     * @param EmbedType WEB嵌入资源类型，取值范围：CREATE_SEAL创建印章，CREATE_TEMPLATE创建模板，MODIFY_TEMPLATE修改模板，PREVIEW_TEMPLATE预览模板，PREVIEW_FLOW预览流程
                     */
                    void SetEmbedType(const std::string& _embedType);

                    /**
                     * 判断参数 EmbedType 是否已赋值
                     * @return EmbedType 是否已赋值
                     */
                    bool EmbedTypeHasBeenSet() const;

                    /**
                     * 获取WEB嵌入的业务资源ID，EmbedType取值MODIFY_TEMPLATE或PREVIEW_TEMPLATE或 PREVIEW_FLOW时BusinessId必填
                     * @return BusinessId WEB嵌入的业务资源ID，EmbedType取值MODIFY_TEMPLATE或PREVIEW_TEMPLATE或 PREVIEW_FLOW时BusinessId必填
                     */
                    std::string GetBusinessId() const;

                    /**
                     * 设置WEB嵌入的业务资源ID，EmbedType取值MODIFY_TEMPLATE或PREVIEW_TEMPLATE或 PREVIEW_FLOW时BusinessId必填
                     * @param BusinessId WEB嵌入的业务资源ID，EmbedType取值MODIFY_TEMPLATE或PREVIEW_TEMPLATE或 PREVIEW_FLOW时BusinessId必填
                     */
                    void SetBusinessId(const std::string& _businessId);

                    /**
                     * 判断参数 BusinessId 是否已赋值
                     * @return BusinessId 是否已赋值
                     */
                    bool BusinessIdHasBeenSet() const;

                    /**
                     * 获取是否隐藏控件，只有预览模板时生效
                     * @return HiddenComponents 是否隐藏控件，只有预览模板时生效
                     */
                    bool GetHiddenComponents() const;

                    /**
                     * 设置是否隐藏控件，只有预览模板时生效
                     * @param HiddenComponents 是否隐藏控件，只有预览模板时生效
                     */
                    void SetHiddenComponents(const bool& _hiddenComponents);

                    /**
                     * 判断参数 HiddenComponents 是否已赋值
                     * @return HiddenComponents 是否已赋值
                     */
                    bool HiddenComponentsHasBeenSet() const;

                    /**
                     * 获取渠道操作者信息
                     * @return Operator 渠道操作者信息
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置渠道操作者信息
                     * @param Operator 渠道操作者信息
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 渠道应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 必填。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * WEB嵌入资源类型，取值范围：CREATE_SEAL创建印章，CREATE_TEMPLATE创建模板，MODIFY_TEMPLATE修改模板，PREVIEW_TEMPLATE预览模板，PREVIEW_FLOW预览流程
                     */
                    std::string m_embedType;
                    bool m_embedTypeHasBeenSet;

                    /**
                     * WEB嵌入的业务资源ID，EmbedType取值MODIFY_TEMPLATE或PREVIEW_TEMPLATE或 PREVIEW_FLOW时BusinessId必填
                     */
                    std::string m_businessId;
                    bool m_businessIdHasBeenSet;

                    /**
                     * 是否隐藏控件，只有预览模板时生效
                     */
                    bool m_hiddenComponents;
                    bool m_hiddenComponentsHasBeenSet;

                    /**
                     * 渠道操作者信息
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEEMBEDWEBURLREQUEST_H_
