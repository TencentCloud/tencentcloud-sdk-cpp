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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATESIGNURLSREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATESIGNURLSREQUEST_H_

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
                * CreateSignUrls请求参数结构体
                */
                class CreateSignUrlsRequest : public AbstractModel
                {
                public:
                    CreateSignUrlsRequest();
                    ~CreateSignUrlsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取渠道应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     * @return Agent 渠道应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置渠道应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     * @param Agent 渠道应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取签署流程编号数组，最多支持100个。
                     * @return FlowIds 签署流程编号数组，最多支持100个。
                     */
                    std::vector<std::string> GetFlowIds() const;

                    /**
                     * 设置签署流程编号数组，最多支持100个。
                     * @param FlowIds 签署流程编号数组，最多支持100个。
                     */
                    void SetFlowIds(const std::vector<std::string>& _flowIds);

                    /**
                     * 判断参数 FlowIds 是否已赋值
                     * @return FlowIds 是否已赋值
                     */
                    bool FlowIdsHasBeenSet() const;

                    /**
                     * 获取签署链接类型：“WEIXINAPP”-直接跳小程序；“CHANNEL”-跳转H5页面；“APP”-第三方APP或小程序跳转电子签小程序；默认“WEIXINAPP”类型，即跳转至小程序；
                     * @return Endpoint 签署链接类型：“WEIXINAPP”-直接跳小程序；“CHANNEL”-跳转H5页面；“APP”-第三方APP或小程序跳转电子签小程序；默认“WEIXINAPP”类型，即跳转至小程序；
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置签署链接类型：“WEIXINAPP”-直接跳小程序；“CHANNEL”-跳转H5页面；“APP”-第三方APP或小程序跳转电子签小程序；默认“WEIXINAPP”类型，即跳转至小程序；
                     * @param Endpoint 签署链接类型：“WEIXINAPP”-直接跳小程序；“CHANNEL”-跳转H5页面；“APP”-第三方APP或小程序跳转电子签小程序；默认“WEIXINAPP”类型，即跳转至小程序；
                     */
                    void SetEndpoint(const std::string& _endpoint);

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     */
                    bool EndpointHasBeenSet() const;

                    /**
                     * 获取签署链接生成类型，默认是 "ALL"；
"ALL"：全部签署方签署链接；
"CHANNEL"：渠道合作企业；
"NOT_CHANNEL"：非渠道合作企业；
"PERSON"：个人；
                     * @return GenerateType 签署链接生成类型，默认是 "ALL"；
"ALL"：全部签署方签署链接；
"CHANNEL"：渠道合作企业；
"NOT_CHANNEL"：非渠道合作企业；
"PERSON"：个人；
                     */
                    std::string GetGenerateType() const;

                    /**
                     * 设置签署链接生成类型，默认是 "ALL"；
"ALL"：全部签署方签署链接；
"CHANNEL"：渠道合作企业；
"NOT_CHANNEL"：非渠道合作企业；
"PERSON"：个人；
                     * @param GenerateType 签署链接生成类型，默认是 "ALL"；
"ALL"：全部签署方签署链接；
"CHANNEL"：渠道合作企业；
"NOT_CHANNEL"：非渠道合作企业；
"PERSON"：个人；
                     */
                    void SetGenerateType(const std::string& _generateType);

                    /**
                     * 判断参数 GenerateType 是否已赋值
                     * @return GenerateType 是否已赋值
                     */
                    bool GenerateTypeHasBeenSet() const;

                    /**
                     * 获取非渠道合作企业参与方的企业名称，GenerateType为"NOT_CHANNEL"时必填
                     * @return OrganizationName 非渠道合作企业参与方的企业名称，GenerateType为"NOT_CHANNEL"时必填
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置非渠道合作企业参与方的企业名称，GenerateType为"NOT_CHANNEL"时必填
                     * @param OrganizationName 非渠道合作企业参与方的企业名称，GenerateType为"NOT_CHANNEL"时必填
                     */
                    void SetOrganizationName(const std::string& _organizationName);

                    /**
                     * 判断参数 OrganizationName 是否已赋值
                     * @return OrganizationName 是否已赋值
                     */
                    bool OrganizationNameHasBeenSet() const;

                    /**
                     * 获取参与人姓名，GenerateType为"PERSON"时必填
                     * @return Name 参与人姓名，GenerateType为"PERSON"时必填
                     */
                    std::string GetName() const;

                    /**
                     * 设置参与人姓名，GenerateType为"PERSON"时必填
                     * @param Name 参与人姓名，GenerateType为"PERSON"时必填
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取参与人手机号，GenerateType为"PERSON"时必填
                     * @return Mobile 参与人手机号，GenerateType为"PERSON"时必填
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置参与人手机号，GenerateType为"PERSON"时必填
                     * @param Mobile 参与人手机号，GenerateType为"PERSON"时必填
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取渠道合作企业的企业Id，GenerateType为"CHANNEL"时必填
                     * @return OrganizationOpenId 渠道合作企业的企业Id，GenerateType为"CHANNEL"时必填
                     */
                    std::string GetOrganizationOpenId() const;

                    /**
                     * 设置渠道合作企业的企业Id，GenerateType为"CHANNEL"时必填
                     * @param OrganizationOpenId 渠道合作企业的企业Id，GenerateType为"CHANNEL"时必填
                     */
                    void SetOrganizationOpenId(const std::string& _organizationOpenId);

                    /**
                     * 判断参数 OrganizationOpenId 是否已赋值
                     * @return OrganizationOpenId 是否已赋值
                     */
                    bool OrganizationOpenIdHasBeenSet() const;

                    /**
                     * 获取渠道合作企业参与人OpenId，GenerateType为"CHANNEL"时可用，指定到具体参与人
                     * @return OpenId 渠道合作企业参与人OpenId，GenerateType为"CHANNEL"时可用，指定到具体参与人
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置渠道合作企业参与人OpenId，GenerateType为"CHANNEL"时可用，指定到具体参与人
                     * @param OpenId 渠道合作企业参与人OpenId，GenerateType为"CHANNEL"时可用，指定到具体参与人
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取Endpoint为"APP" 类型的签署链接，可以设置此值；支持调用方小程序打开签署链接，在电子签小程序完成签署后自动回跳至调用方小程序
                     * @return AutoJumpBack Endpoint为"APP" 类型的签署链接，可以设置此值；支持调用方小程序打开签署链接，在电子签小程序完成签署后自动回跳至调用方小程序
                     */
                    bool GetAutoJumpBack() const;

                    /**
                     * 设置Endpoint为"APP" 类型的签署链接，可以设置此值；支持调用方小程序打开签署链接，在电子签小程序完成签署后自动回跳至调用方小程序
                     * @param AutoJumpBack Endpoint为"APP" 类型的签署链接，可以设置此值；支持调用方小程序打开签署链接，在电子签小程序完成签署后自动回跳至调用方小程序
                     */
                    void SetAutoJumpBack(const bool& _autoJumpBack);

                    /**
                     * 判断参数 AutoJumpBack 是否已赋值
                     * @return AutoJumpBack 是否已赋值
                     */
                    bool AutoJumpBackHasBeenSet() const;

                    /**
                     * 获取签署完之后的H5页面的跳转链接，针对Endpoint为CHANNEL时有效，最大长度1000个字符。
                     * @return JumpUrl 签署完之后的H5页面的跳转链接，针对Endpoint为CHANNEL时有效，最大长度1000个字符。
                     */
                    std::string GetJumpUrl() const;

                    /**
                     * 设置签署完之后的H5页面的跳转链接，针对Endpoint为CHANNEL时有效，最大长度1000个字符。
                     * @param JumpUrl 签署完之后的H5页面的跳转链接，针对Endpoint为CHANNEL时有效，最大长度1000个字符。
                     */
                    void SetJumpUrl(const std::string& _jumpUrl);

                    /**
                     * 判断参数 JumpUrl 是否已赋值
                     * @return JumpUrl 是否已赋值
                     */
                    bool JumpUrlHasBeenSet() const;

                    /**
                     * 获取操作者的信息
                     * @return Operator 操作者的信息
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作者的信息
                     * @param Operator 操作者的信息
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 渠道应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 签署流程编号数组，最多支持100个。
                     */
                    std::vector<std::string> m_flowIds;
                    bool m_flowIdsHasBeenSet;

                    /**
                     * 签署链接类型：“WEIXINAPP”-直接跳小程序；“CHANNEL”-跳转H5页面；“APP”-第三方APP或小程序跳转电子签小程序；默认“WEIXINAPP”类型，即跳转至小程序；
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * 签署链接生成类型，默认是 "ALL"；
"ALL"：全部签署方签署链接；
"CHANNEL"：渠道合作企业；
"NOT_CHANNEL"：非渠道合作企业；
"PERSON"：个人；
                     */
                    std::string m_generateType;
                    bool m_generateTypeHasBeenSet;

                    /**
                     * 非渠道合作企业参与方的企业名称，GenerateType为"NOT_CHANNEL"时必填
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * 参与人姓名，GenerateType为"PERSON"时必填
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 参与人手机号，GenerateType为"PERSON"时必填
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 渠道合作企业的企业Id，GenerateType为"CHANNEL"时必填
                     */
                    std::string m_organizationOpenId;
                    bool m_organizationOpenIdHasBeenSet;

                    /**
                     * 渠道合作企业参与人OpenId，GenerateType为"CHANNEL"时可用，指定到具体参与人
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * Endpoint为"APP" 类型的签署链接，可以设置此值；支持调用方小程序打开签署链接，在电子签小程序完成签署后自动回跳至调用方小程序
                     */
                    bool m_autoJumpBack;
                    bool m_autoJumpBackHasBeenSet;

                    /**
                     * 签署完之后的H5页面的跳转链接，针对Endpoint为CHANNEL时有效，最大长度1000个字符。
                     */
                    std::string m_jumpUrl;
                    bool m_jumpUrlHasBeenSet;

                    /**
                     * 操作者的信息
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATESIGNURLSREQUEST_H_
