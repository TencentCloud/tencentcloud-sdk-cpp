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
                     * 获取应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 必填。
                     * @return Agent 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 必填。
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 必填。
                     * @param _agent 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 必填。
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
                     * 获取流程(合同)的编号列表，最多支持100个。(备注：该参数和合同组编号必须二选一)
                     * @return FlowIds 流程(合同)的编号列表，最多支持100个。(备注：该参数和合同组编号必须二选一)
                     * 
                     */
                    std::vector<std::string> GetFlowIds() const;

                    /**
                     * 设置流程(合同)的编号列表，最多支持100个。(备注：该参数和合同组编号必须二选一)
                     * @param _flowIds 流程(合同)的编号列表，最多支持100个。(备注：该参数和合同组编号必须二选一)
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
                     * 获取合同组编号(备注：该参数和合同(流程)编号数组必须二选一)
                     * @return FlowGroupId 合同组编号(备注：该参数和合同(流程)编号数组必须二选一)
                     * 
                     */
                    std::string GetFlowGroupId() const;

                    /**
                     * 设置合同组编号(备注：该参数和合同(流程)编号数组必须二选一)
                     * @param _flowGroupId 合同组编号(备注：该参数和合同(流程)编号数组必须二选一)
                     * 
                     */
                    void SetFlowGroupId(const std::string& _flowGroupId);

                    /**
                     * 判断参数 FlowGroupId 是否已赋值
                     * @return FlowGroupId 是否已赋值
                     * 
                     */
                    bool FlowGroupIdHasBeenSet() const;

                    /**
                     * 获取签署链接类型,可以设置的参数如下

- WEIXINAPP:短链直接跳小程序 (默认类型)
- CHANNEL:跳转H5页面
- APP:第三方APP或小程序跳转电子签小程序
- LONGURL2WEIXINAPP:长链接跳转小程序
                     * @return Endpoint 签署链接类型,可以设置的参数如下

- WEIXINAPP:短链直接跳小程序 (默认类型)
- CHANNEL:跳转H5页面
- APP:第三方APP或小程序跳转电子签小程序
- LONGURL2WEIXINAPP:长链接跳转小程序
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置签署链接类型,可以设置的参数如下

- WEIXINAPP:短链直接跳小程序 (默认类型)
- CHANNEL:跳转H5页面
- APP:第三方APP或小程序跳转电子签小程序
- LONGURL2WEIXINAPP:长链接跳转小程序
                     * @param _endpoint 签署链接类型,可以设置的参数如下

- WEIXINAPP:短链直接跳小程序 (默认类型)
- CHANNEL:跳转H5页面
- APP:第三方APP或小程序跳转电子签小程序
- LONGURL2WEIXINAPP:长链接跳转小程序
                     * 
                     */
                    void SetEndpoint(const std::string& _endpoint);

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     * 
                     */
                    bool EndpointHasBeenSet() const;

                    /**
                     * 获取签署链接生成类型，可以选择的类型如下

- ALL：全部签署方签署链接，此时不会给自动签署的签署方创建签署链接(默认类型)
- CHANNEL：第三方平台子客企业企业
- NOT_CHANNEL：非第三方平台子客企业企业
- PERSON：个人
- FOLLOWER：关注方，目前是合同抄送方
                     * @return GenerateType 签署链接生成类型，可以选择的类型如下

- ALL：全部签署方签署链接，此时不会给自动签署的签署方创建签署链接(默认类型)
- CHANNEL：第三方平台子客企业企业
- NOT_CHANNEL：非第三方平台子客企业企业
- PERSON：个人
- FOLLOWER：关注方，目前是合同抄送方
                     * 
                     */
                    std::string GetGenerateType() const;

                    /**
                     * 设置签署链接生成类型，可以选择的类型如下

- ALL：全部签署方签署链接，此时不会给自动签署的签署方创建签署链接(默认类型)
- CHANNEL：第三方平台子客企业企业
- NOT_CHANNEL：非第三方平台子客企业企业
- PERSON：个人
- FOLLOWER：关注方，目前是合同抄送方
                     * @param _generateType 签署链接生成类型，可以选择的类型如下

- ALL：全部签署方签署链接，此时不会给自动签署的签署方创建签署链接(默认类型)
- CHANNEL：第三方平台子客企业企业
- NOT_CHANNEL：非第三方平台子客企业企业
- PERSON：个人
- FOLLOWER：关注方，目前是合同抄送方
                     * 
                     */
                    void SetGenerateType(const std::string& _generateType);

                    /**
                     * 判断参数 GenerateType 是否已赋值
                     * @return GenerateType 是否已赋值
                     * 
                     */
                    bool GenerateTypeHasBeenSet() const;

                    /**
                     * 获取非第三方平台子客企业参与方的企业名称，GenerateType为"NOT_CHANNEL"时必填
                     * @return OrganizationName 非第三方平台子客企业参与方的企业名称，GenerateType为"NOT_CHANNEL"时必填
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置非第三方平台子客企业参与方的企业名称，GenerateType为"NOT_CHANNEL"时必填
                     * @param _organizationName 非第三方平台子客企业参与方的企业名称，GenerateType为"NOT_CHANNEL"时必填
                     * 
                     */
                    void SetOrganizationName(const std::string& _organizationName);

                    /**
                     * 判断参数 OrganizationName 是否已赋值
                     * @return OrganizationName 是否已赋值
                     * 
                     */
                    bool OrganizationNameHasBeenSet() const;

                    /**
                     * 获取参与人姓名
GenerateType为"PERSON"(即个人签署方)时必填
                     * @return Name 参与人姓名
GenerateType为"PERSON"(即个人签署方)时必填
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置参与人姓名
GenerateType为"PERSON"(即个人签署方)时必填
                     * @param _name 参与人姓名
GenerateType为"PERSON"(即个人签署方)时必填
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取参与人手机号
GenerateType为"PERSON"或"FOLLOWER"时必填
                     * @return Mobile 参与人手机号
GenerateType为"PERSON"或"FOLLOWER"时必填
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置参与人手机号
GenerateType为"PERSON"或"FOLLOWER"时必填
                     * @param _mobile 参与人手机号
GenerateType为"PERSON"或"FOLLOWER"时必填
                     * 
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     * 
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取第三方平台子客企业的企业OpenId，GenerateType为"CHANNEL"时必填
                     * @return OrganizationOpenId 第三方平台子客企业的企业OpenId，GenerateType为"CHANNEL"时必填
                     * 
                     */
                    std::string GetOrganizationOpenId() const;

                    /**
                     * 设置第三方平台子客企业的企业OpenId，GenerateType为"CHANNEL"时必填
                     * @param _organizationOpenId 第三方平台子客企业的企业OpenId，GenerateType为"CHANNEL"时必填
                     * 
                     */
                    void SetOrganizationOpenId(const std::string& _organizationOpenId);

                    /**
                     * 判断参数 OrganizationOpenId 是否已赋值
                     * @return OrganizationOpenId 是否已赋值
                     * 
                     */
                    bool OrganizationOpenIdHasBeenSet() const;

                    /**
                     * 获取第三方平台子客企业参与人OpenId，GenerateType为"CHANNEL"时可用，指定到具体参与人, 仅展示已经实名的经办人信息
                     * @return OpenId 第三方平台子客企业参与人OpenId，GenerateType为"CHANNEL"时可用，指定到具体参与人, 仅展示已经实名的经办人信息
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置第三方平台子客企业参与人OpenId，GenerateType为"CHANNEL"时可用，指定到具体参与人, 仅展示已经实名的经办人信息
                     * @param _openId 第三方平台子客企业参与人OpenId，GenerateType为"CHANNEL"时可用，指定到具体参与人, 仅展示已经实名的经办人信息
                     * 
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     * 
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取Endpoint为"APP" 类型的签署链接，可以设置此值；支持调用方小程序打开签署链接，在电子签小程序完成签署后自动回跳至调用方小程序
                     * @return AutoJumpBack Endpoint为"APP" 类型的签署链接，可以设置此值；支持调用方小程序打开签署链接，在电子签小程序完成签署后自动回跳至调用方小程序
                     * 
                     */
                    bool GetAutoJumpBack() const;

                    /**
                     * 设置Endpoint为"APP" 类型的签署链接，可以设置此值；支持调用方小程序打开签署链接，在电子签小程序完成签署后自动回跳至调用方小程序
                     * @param _autoJumpBack Endpoint为"APP" 类型的签署链接，可以设置此值；支持调用方小程序打开签署链接，在电子签小程序完成签署后自动回跳至调用方小程序
                     * 
                     */
                    void SetAutoJumpBack(const bool& _autoJumpBack);

                    /**
                     * 判断参数 AutoJumpBack 是否已赋值
                     * @return AutoJumpBack 是否已赋值
                     * 
                     */
                    bool AutoJumpBackHasBeenSet() const;

                    /**
                     * 获取签署完之后的H5页面的跳转链接，针对Endpoint为CHANNEL时有效，最大长度1000个字符。
                     * @return JumpUrl 签署完之后的H5页面的跳转链接，针对Endpoint为CHANNEL时有效，最大长度1000个字符。
                     * 
                     */
                    std::string GetJumpUrl() const;

                    /**
                     * 设置签署完之后的H5页面的跳转链接，针对Endpoint为CHANNEL时有效，最大长度1000个字符。
                     * @param _jumpUrl 签署完之后的H5页面的跳转链接，针对Endpoint为CHANNEL时有效，最大长度1000个字符。
                     * 
                     */
                    void SetJumpUrl(const std::string& _jumpUrl);

                    /**
                     * 判断参数 JumpUrl 是否已赋值
                     * @return JumpUrl 是否已赋值
                     * 
                     */
                    bool JumpUrlHasBeenSet() const;

                    /**
                     * 获取暂未开放
                     * @return Operator 暂未开放
                     * @deprecated
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置暂未开放
                     * @param _operator 暂未开放
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
                     * 获取生成的签署链接在签署过程隐藏的按钮列表, 可以设置隐藏的按钮列表如下

- 0:合同签署页面更多操作按钮
- 1:合同签署页面更多操作的拒绝签署按钮
- 2:合同签署页面更多操作的转他人处理按钮
- 3:签署成功页的查看详情按钮
                     * @return Hides 生成的签署链接在签署过程隐藏的按钮列表, 可以设置隐藏的按钮列表如下

- 0:合同签署页面更多操作按钮
- 1:合同签署页面更多操作的拒绝签署按钮
- 2:合同签署页面更多操作的转他人处理按钮
- 3:签署成功页的查看详情按钮
                     * 
                     */
                    std::vector<int64_t> GetHides() const;

                    /**
                     * 设置生成的签署链接在签署过程隐藏的按钮列表, 可以设置隐藏的按钮列表如下

- 0:合同签署页面更多操作按钮
- 1:合同签署页面更多操作的拒绝签署按钮
- 2:合同签署页面更多操作的转他人处理按钮
- 3:签署成功页的查看详情按钮
                     * @param _hides 生成的签署链接在签署过程隐藏的按钮列表, 可以设置隐藏的按钮列表如下

- 0:合同签署页面更多操作按钮
- 1:合同签署页面更多操作的拒绝签署按钮
- 2:合同签署页面更多操作的转他人处理按钮
- 3:签署成功页的查看详情按钮
                     * 
                     */
                    void SetHides(const std::vector<int64_t>& _hides);

                    /**
                     * 判断参数 Hides 是否已赋值
                     * @return Hides 是否已赋值
                     * 
                     */
                    bool HidesHasBeenSet() const;

                    /**
                     * 获取签署节点ID，用于补充动态签署人，使用此参数需要与flow_ids数量一致
                     * @return RecipientIds 签署节点ID，用于补充动态签署人，使用此参数需要与flow_ids数量一致
                     * 
                     */
                    std::vector<std::string> GetRecipientIds() const;

                    /**
                     * 设置签署节点ID，用于补充动态签署人，使用此参数需要与flow_ids数量一致
                     * @param _recipientIds 签署节点ID，用于补充动态签署人，使用此参数需要与flow_ids数量一致
                     * 
                     */
                    void SetRecipientIds(const std::vector<std::string>& _recipientIds);

                    /**
                     * 判断参数 RecipientIds 是否已赋值
                     * @return RecipientIds 是否已赋值
                     * 
                     */
                    bool RecipientIdsHasBeenSet() const;

                private:

                    /**
                     * 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 必填。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 流程(合同)的编号列表，最多支持100个。(备注：该参数和合同组编号必须二选一)
                     */
                    std::vector<std::string> m_flowIds;
                    bool m_flowIdsHasBeenSet;

                    /**
                     * 合同组编号(备注：该参数和合同(流程)编号数组必须二选一)
                     */
                    std::string m_flowGroupId;
                    bool m_flowGroupIdHasBeenSet;

                    /**
                     * 签署链接类型,可以设置的参数如下

- WEIXINAPP:短链直接跳小程序 (默认类型)
- CHANNEL:跳转H5页面
- APP:第三方APP或小程序跳转电子签小程序
- LONGURL2WEIXINAPP:长链接跳转小程序
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * 签署链接生成类型，可以选择的类型如下

- ALL：全部签署方签署链接，此时不会给自动签署的签署方创建签署链接(默认类型)
- CHANNEL：第三方平台子客企业企业
- NOT_CHANNEL：非第三方平台子客企业企业
- PERSON：个人
- FOLLOWER：关注方，目前是合同抄送方
                     */
                    std::string m_generateType;
                    bool m_generateTypeHasBeenSet;

                    /**
                     * 非第三方平台子客企业参与方的企业名称，GenerateType为"NOT_CHANNEL"时必填
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * 参与人姓名
GenerateType为"PERSON"(即个人签署方)时必填
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 参与人手机号
GenerateType为"PERSON"或"FOLLOWER"时必填
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 第三方平台子客企业的企业OpenId，GenerateType为"CHANNEL"时必填
                     */
                    std::string m_organizationOpenId;
                    bool m_organizationOpenIdHasBeenSet;

                    /**
                     * 第三方平台子客企业参与人OpenId，GenerateType为"CHANNEL"时可用，指定到具体参与人, 仅展示已经实名的经办人信息
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
                     * 暂未开放
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 生成的签署链接在签署过程隐藏的按钮列表, 可以设置隐藏的按钮列表如下

- 0:合同签署页面更多操作按钮
- 1:合同签署页面更多操作的拒绝签署按钮
- 2:合同签署页面更多操作的转他人处理按钮
- 3:签署成功页的查看详情按钮
                     */
                    std::vector<int64_t> m_hides;
                    bool m_hidesHasBeenSet;

                    /**
                     * 签署节点ID，用于补充动态签署人，使用此参数需要与flow_ids数量一致
                     */
                    std::vector<std::string> m_recipientIds;
                    bool m_recipientIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATESIGNURLSREQUEST_H_
