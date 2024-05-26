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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBECHANNELSEALPOLICYWORKFLOWURLREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBECHANNELSEALPOLICYWORKFLOWURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * DescribeChannelSealPolicyWorkflowUrl请求参数结构体
                */
                class DescribeChannelSealPolicyWorkflowUrlRequest : public AbstractModel
                {
                public:
                    DescribeChannelSealPolicyWorkflowUrlRequest();
                    ~DescribeChannelSealPolicyWorkflowUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。

渠道应用标识: Agent.AppId
第三方平台子客企业标识: Agent.ProxyOrganizationOpenId
第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId
第三方平台子客企业和员工必须已经经过实名认证
                     * @return Agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。

渠道应用标识: Agent.AppId
第三方平台子客企业标识: Agent.ProxyOrganizationOpenId
第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId
第三方平台子客企业和员工必须已经经过实名认证
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。

渠道应用标识: Agent.AppId
第三方平台子客企业标识: Agent.ProxyOrganizationOpenId
第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId
第三方平台子客企业和员工必须已经经过实名认证
                     * @param _agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。

渠道应用标识: Agent.AppId
第三方平台子客企业标识: Agent.ProxyOrganizationOpenId
第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId
第三方平台子客企业和员工必须已经经过实名认证
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
                     * 获取用印审批单的ID，可通过用印[申请回调](https://qian.tencent.com/developers/partner/callback_types_seals#%E4%B8%89-%E7%94%A8%E5%8D%B0%E7%94%B3%E8%AF%B7%E5%AE%A1%E6%89%B9%E7%8A%B6%E6%80%81%E9%80%9A%E7%9F%A5)获取。
                     * @return WorkflowInstanceId 用印审批单的ID，可通过用印[申请回调](https://qian.tencent.com/developers/partner/callback_types_seals#%E4%B8%89-%E7%94%A8%E5%8D%B0%E7%94%B3%E8%AF%B7%E5%AE%A1%E6%89%B9%E7%8A%B6%E6%80%81%E9%80%9A%E7%9F%A5)获取。
                     * 
                     */
                    std::string GetWorkflowInstanceId() const;

                    /**
                     * 设置用印审批单的ID，可通过用印[申请回调](https://qian.tencent.com/developers/partner/callback_types_seals#%E4%B8%89-%E7%94%A8%E5%8D%B0%E7%94%B3%E8%AF%B7%E5%AE%A1%E6%89%B9%E7%8A%B6%E6%80%81%E9%80%9A%E7%9F%A5)获取。
                     * @param _workflowInstanceId 用印审批单的ID，可通过用印[申请回调](https://qian.tencent.com/developers/partner/callback_types_seals#%E4%B8%89-%E7%94%A8%E5%8D%B0%E7%94%B3%E8%AF%B7%E5%AE%A1%E6%89%B9%E7%8A%B6%E6%80%81%E9%80%9A%E7%9F%A5)获取。
                     * 
                     */
                    void SetWorkflowInstanceId(const std::string& _workflowInstanceId);

                    /**
                     * 判断参数 WorkflowInstanceId 是否已赋值
                     * @return WorkflowInstanceId 是否已赋值
                     * 
                     */
                    bool WorkflowInstanceIdHasBeenSet() const;

                    /**
                     * 获取生成链接的类型：
生成链接的类型
<ul><li>**LongLink**：(默认)长链接，H5跳转到电子签小程序链接，链接有效期为1年</li>
<li>**ShortLink**：H5跳转到电子签小程序链接，一般用于发送短信中带的链接，打开后进入腾讯电子签小程序，链接有效期为7天</li>
<li>**App**：第三方APP或小程序跳转电子签小程序链接，一般用于贵方小程序或者APP跳转过来，打开后进入腾讯电子签小程序，链接有效期为1年</li></ul>
                     * @return Endpoint 生成链接的类型：
生成链接的类型
<ul><li>**LongLink**：(默认)长链接，H5跳转到电子签小程序链接，链接有效期为1年</li>
<li>**ShortLink**：H5跳转到电子签小程序链接，一般用于发送短信中带的链接，打开后进入腾讯电子签小程序，链接有效期为7天</li>
<li>**App**：第三方APP或小程序跳转电子签小程序链接，一般用于贵方小程序或者APP跳转过来，打开后进入腾讯电子签小程序，链接有效期为1年</li></ul>
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置生成链接的类型：
生成链接的类型
<ul><li>**LongLink**：(默认)长链接，H5跳转到电子签小程序链接，链接有效期为1年</li>
<li>**ShortLink**：H5跳转到电子签小程序链接，一般用于发送短信中带的链接，打开后进入腾讯电子签小程序，链接有效期为7天</li>
<li>**App**：第三方APP或小程序跳转电子签小程序链接，一般用于贵方小程序或者APP跳转过来，打开后进入腾讯电子签小程序，链接有效期为1年</li></ul>
                     * @param _endpoint 生成链接的类型：
生成链接的类型
<ul><li>**LongLink**：(默认)长链接，H5跳转到电子签小程序链接，链接有效期为1年</li>
<li>**ShortLink**：H5跳转到电子签小程序链接，一般用于发送短信中带的链接，打开后进入腾讯电子签小程序，链接有效期为7天</li>
<li>**App**：第三方APP或小程序跳转电子签小程序链接，一般用于贵方小程序或者APP跳转过来，打开后进入腾讯电子签小程序，链接有效期为1年</li></ul>
                     * 
                     */
                    void SetEndpoint(const std::string& _endpoint);

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     * 
                     */
                    bool EndpointHasBeenSet() const;

                private:

                    /**
                     * 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。

渠道应用标识: Agent.AppId
第三方平台子客企业标识: Agent.ProxyOrganizationOpenId
第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId
第三方平台子客企业和员工必须已经经过实名认证
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 用印审批单的ID，可通过用印[申请回调](https://qian.tencent.com/developers/partner/callback_types_seals#%E4%B8%89-%E7%94%A8%E5%8D%B0%E7%94%B3%E8%AF%B7%E5%AE%A1%E6%89%B9%E7%8A%B6%E6%80%81%E9%80%9A%E7%9F%A5)获取。
                     */
                    std::string m_workflowInstanceId;
                    bool m_workflowInstanceIdHasBeenSet;

                    /**
                     * 生成链接的类型：
生成链接的类型
<ul><li>**LongLink**：(默认)长链接，H5跳转到电子签小程序链接，链接有效期为1年</li>
<li>**ShortLink**：H5跳转到电子签小程序链接，一般用于发送短信中带的链接，打开后进入腾讯电子签小程序，链接有效期为7天</li>
<li>**App**：第三方APP或小程序跳转电子签小程序链接，一般用于贵方小程序或者APP跳转过来，打开后进入腾讯电子签小程序，链接有效期为1年</li></ul>
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBECHANNELSEALPOLICYWORKFLOWURLREQUEST_H_
