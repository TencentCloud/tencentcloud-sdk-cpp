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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_MODIFYEXTENDEDSERVICEREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_MODIFYEXTENDEDSERVICEREQUEST_H_

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
                * ModifyExtendedService请求参数结构体
                */
                class ModifyExtendedServiceRequest : public AbstractModel
                {
                public:
                    ModifyExtendedServiceRequest();
                    ~ModifyExtendedServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业标识: Agent. ProxyOperator.OpenId</li>
<li>第三方平台子客企业中的员工标识: Agent.AppId</li>
</ul>
                     * @return Agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业标识: Agent. ProxyOperator.OpenId</li>
<li>第三方平台子客企业中的员工标识: Agent.AppId</li>
</ul>
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业标识: Agent. ProxyOperator.OpenId</li>
<li>第三方平台子客企业中的员工标识: Agent.AppId</li>
</ul>
                     * @param _agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业标识: Agent. ProxyOperator.OpenId</li>
<li>第三方平台子客企业中的员工标识: Agent.AppId</li>
</ul>
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
                     * 获取  扩展服务类型
<ul>
<li>AUTO_SIGN             企业自动签（自动签署）</li>
<li>  OVERSEA_SIGN          企业与港澳台居民*签署合同</li>
<li>  MOBILE_CHECK_APPROVER 使用手机号验证签署方身份</li>
<li> PAGING_SEAL           骑缝章</li>
<li> DOWNLOAD_FLOW         授权渠道下载合同 </li>
<li>AGE_LIMIT_EXPANSION 拓宽签署方年龄限制</li>
</ul>
                     * @return ServiceType   扩展服务类型
<ul>
<li>AUTO_SIGN             企业自动签（自动签署）</li>
<li>  OVERSEA_SIGN          企业与港澳台居民*签署合同</li>
<li>  MOBILE_CHECK_APPROVER 使用手机号验证签署方身份</li>
<li> PAGING_SEAL           骑缝章</li>
<li> DOWNLOAD_FLOW         授权渠道下载合同 </li>
<li>AGE_LIMIT_EXPANSION 拓宽签署方年龄限制</li>
</ul>
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置  扩展服务类型
<ul>
<li>AUTO_SIGN             企业自动签（自动签署）</li>
<li>  OVERSEA_SIGN          企业与港澳台居民*签署合同</li>
<li>  MOBILE_CHECK_APPROVER 使用手机号验证签署方身份</li>
<li> PAGING_SEAL           骑缝章</li>
<li> DOWNLOAD_FLOW         授权渠道下载合同 </li>
<li>AGE_LIMIT_EXPANSION 拓宽签署方年龄限制</li>
</ul>
                     * @param _serviceType   扩展服务类型
<ul>
<li>AUTO_SIGN             企业自动签（自动签署）</li>
<li>  OVERSEA_SIGN          企业与港澳台居民*签署合同</li>
<li>  MOBILE_CHECK_APPROVER 使用手机号验证签署方身份</li>
<li> PAGING_SEAL           骑缝章</li>
<li> DOWNLOAD_FLOW         授权渠道下载合同 </li>
<li>AGE_LIMIT_EXPANSION 拓宽签署方年龄限制</li>
</ul>
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取操作类型 
OPEN:开通 
CLOSE:关闭
                     * @return Operate 操作类型 
OPEN:开通 
CLOSE:关闭
                     * 
                     */
                    std::string GetOperate() const;

                    /**
                     * 设置操作类型 
OPEN:开通 
CLOSE:关闭
                     * @param _operate 操作类型 
OPEN:开通 
CLOSE:关闭
                     * 
                     */
                    void SetOperate(const std::string& _operate);

                    /**
                     * 判断参数 Operate 是否已赋值
                     * @return Operate 是否已赋值
                     * 
                     */
                    bool OperateHasBeenSet() const;

                    /**
                     * 获取链接跳转类型，支持以下类型
<ul>
<li>WEIXINAPP : 短链直接跳转到电子签小程序  (默认值)</li>
<li>APP : 第三方APP或小程序跳转电子签小程序</li>
</ul>
                     * @return Endpoint 链接跳转类型，支持以下类型
<ul>
<li>WEIXINAPP : 短链直接跳转到电子签小程序  (默认值)</li>
<li>APP : 第三方APP或小程序跳转电子签小程序</li>
</ul>
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置链接跳转类型，支持以下类型
<ul>
<li>WEIXINAPP : 短链直接跳转到电子签小程序  (默认值)</li>
<li>APP : 第三方APP或小程序跳转电子签小程序</li>
</ul>
                     * @param _endpoint 链接跳转类型，支持以下类型
<ul>
<li>WEIXINAPP : 短链直接跳转到电子签小程序  (默认值)</li>
<li>APP : 第三方APP或小程序跳转电子签小程序</li>
</ul>
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
<ul>
<li>渠道应用标识:  Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业标识: Agent. ProxyOperator.OpenId</li>
<li>第三方平台子客企业中的员工标识: Agent.AppId</li>
</ul>
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     *   扩展服务类型
<ul>
<li>AUTO_SIGN             企业自动签（自动签署）</li>
<li>  OVERSEA_SIGN          企业与港澳台居民*签署合同</li>
<li>  MOBILE_CHECK_APPROVER 使用手机号验证签署方身份</li>
<li> PAGING_SEAL           骑缝章</li>
<li> DOWNLOAD_FLOW         授权渠道下载合同 </li>
<li>AGE_LIMIT_EXPANSION 拓宽签署方年龄限制</li>
</ul>
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 操作类型 
OPEN:开通 
CLOSE:关闭
                     */
                    std::string m_operate;
                    bool m_operateHasBeenSet;

                    /**
                     * 链接跳转类型，支持以下类型
<ul>
<li>WEIXINAPP : 短链直接跳转到电子签小程序  (默认值)</li>
<li>APP : 第三方APP或小程序跳转电子签小程序</li>
</ul>
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_MODIFYEXTENDEDSERVICEREQUEST_H_
