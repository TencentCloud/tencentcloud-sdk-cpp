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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEFLOWSIGNURLREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEFLOWSIGNURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
#include <tencentcloud/essbasic/v20210526/model/FlowApproverInfo.h>
#include <tencentcloud/essbasic/v20210526/model/UserInfo.h>
#include <tencentcloud/essbasic/v20210526/model/OrganizationInfo.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * ChannelCreateFlowSignUrl请求参数结构体
                */
                class ChannelCreateFlowSignUrlRequest : public AbstractModel
                {
                public:
                    ChannelCreateFlowSignUrlRequest();
                    ~ChannelCreateFlowSignUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li>
</ul>
第三方平台子客企业和员工必须已经经过实名认证
                     * @return Agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li>
</ul>
第三方平台子客企业和员工必须已经经过实名认证
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li>
</ul>
第三方平台子客企业和员工必须已经经过实名认证
                     * @param _agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li>
</ul>
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
                     * 获取合同流程ID，为32位字符串。
建议开发者妥善保存此流程ID，以便于顺利进行后续操作。
可登录腾讯电子签控制台，在 "合同"->"合同中心" 中查看某个合同的FlowId(在页面中展示为合同ID)。
                     * @return FlowId 合同流程ID，为32位字符串。
建议开发者妥善保存此流程ID，以便于顺利进行后续操作。
可登录腾讯电子签控制台，在 "合同"->"合同中心" 中查看某个合同的FlowId(在页面中展示为合同ID)。
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置合同流程ID，为32位字符串。
建议开发者妥善保存此流程ID，以便于顺利进行后续操作。
可登录腾讯电子签控制台，在 "合同"->"合同中心" 中查看某个合同的FlowId(在页面中展示为合同ID)。
                     * @param _flowId 合同流程ID，为32位字符串。
建议开发者妥善保存此流程ID，以便于顺利进行后续操作。
可登录腾讯电子签控制台，在 "合同"->"合同中心" 中查看某个合同的FlowId(在页面中展示为合同ID)。
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
                     * 获取流程签署人列表，其中结构体的ApproverType必传。
若为个人签署方或saas企业签署方，则Name，Mobile必传。OrganizationName 传对应企业名称。
若为子客企业签署方则需传OpenId、OrganizationOpenId、OrganizationName， 其他可不传。（如果对应OrganizationOpenId 子客已经认证激活了，则可以省去OrganizationName）

此结构体和发起接口参与方结构体复用，除了上述参数外，可传递的参数有：
1. RecipientId: 发起合同会返回，可以直接用于指定需要生成链接的签署方。
2. ApproverSignTypes: 指定签署方签署时候的认证方式，仅此链接生效。
3. SignTypeSelector: 可以指定签署方签署合同的认证校验方式的选择模式。
4. Intention: 指定H5签署视频核身的意图配置，仅视频签署需要使用。

注:
`1. 签署人只能有手写签名、时间类型、印章类型、签批类型的签署控件和内容填写控件，其他类型的签署控件暂时未支持。`
`2. 生成发起方预览链接时，该字段（FlowApproverInfos）传空或者不传`
                     * @return FlowApproverInfos 流程签署人列表，其中结构体的ApproverType必传。
若为个人签署方或saas企业签署方，则Name，Mobile必传。OrganizationName 传对应企业名称。
若为子客企业签署方则需传OpenId、OrganizationOpenId、OrganizationName， 其他可不传。（如果对应OrganizationOpenId 子客已经认证激活了，则可以省去OrganizationName）

此结构体和发起接口参与方结构体复用，除了上述参数外，可传递的参数有：
1. RecipientId: 发起合同会返回，可以直接用于指定需要生成链接的签署方。
2. ApproverSignTypes: 指定签署方签署时候的认证方式，仅此链接生效。
3. SignTypeSelector: 可以指定签署方签署合同的认证校验方式的选择模式。
4. Intention: 指定H5签署视频核身的意图配置，仅视频签署需要使用。

注:
`1. 签署人只能有手写签名、时间类型、印章类型、签批类型的签署控件和内容填写控件，其他类型的签署控件暂时未支持。`
`2. 生成发起方预览链接时，该字段（FlowApproverInfos）传空或者不传`
                     * 
                     */
                    std::vector<FlowApproverInfo> GetFlowApproverInfos() const;

                    /**
                     * 设置流程签署人列表，其中结构体的ApproverType必传。
若为个人签署方或saas企业签署方，则Name，Mobile必传。OrganizationName 传对应企业名称。
若为子客企业签署方则需传OpenId、OrganizationOpenId、OrganizationName， 其他可不传。（如果对应OrganizationOpenId 子客已经认证激活了，则可以省去OrganizationName）

此结构体和发起接口参与方结构体复用，除了上述参数外，可传递的参数有：
1. RecipientId: 发起合同会返回，可以直接用于指定需要生成链接的签署方。
2. ApproverSignTypes: 指定签署方签署时候的认证方式，仅此链接生效。
3. SignTypeSelector: 可以指定签署方签署合同的认证校验方式的选择模式。
4. Intention: 指定H5签署视频核身的意图配置，仅视频签署需要使用。

注:
`1. 签署人只能有手写签名、时间类型、印章类型、签批类型的签署控件和内容填写控件，其他类型的签署控件暂时未支持。`
`2. 生成发起方预览链接时，该字段（FlowApproverInfos）传空或者不传`
                     * @param _flowApproverInfos 流程签署人列表，其中结构体的ApproverType必传。
若为个人签署方或saas企业签署方，则Name，Mobile必传。OrganizationName 传对应企业名称。
若为子客企业签署方则需传OpenId、OrganizationOpenId、OrganizationName， 其他可不传。（如果对应OrganizationOpenId 子客已经认证激活了，则可以省去OrganizationName）

此结构体和发起接口参与方结构体复用，除了上述参数外，可传递的参数有：
1. RecipientId: 发起合同会返回，可以直接用于指定需要生成链接的签署方。
2. ApproverSignTypes: 指定签署方签署时候的认证方式，仅此链接生效。
3. SignTypeSelector: 可以指定签署方签署合同的认证校验方式的选择模式。
4. Intention: 指定H5签署视频核身的意图配置，仅视频签署需要使用。

注:
`1. 签署人只能有手写签名、时间类型、印章类型、签批类型的签署控件和内容填写控件，其他类型的签署控件暂时未支持。`
`2. 生成发起方预览链接时，该字段（FlowApproverInfos）传空或者不传`
                     * 
                     */
                    void SetFlowApproverInfos(const std::vector<FlowApproverInfo>& _flowApproverInfos);

                    /**
                     * 判断参数 FlowApproverInfos 是否已赋值
                     * @return FlowApproverInfos 是否已赋值
                     * 
                     */
                    bool FlowApproverInfosHasBeenSet() const;

                    /**
                     * 获取用户信息，暂未开放
                     * @return Operator 用户信息，暂未开放
                     * @deprecated
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置用户信息，暂未开放
                     * @param _operator 用户信息，暂未开放
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
                     * 获取机构信息，暂未开放
                     * @return Organization 机构信息，暂未开放
                     * @deprecated
                     */
                    OrganizationInfo GetOrganization() const;

                    /**
                     * 设置机构信息，暂未开放
                     * @param _organization 机构信息，暂未开放
                     * @deprecated
                     */
                    void SetOrganization(const OrganizationInfo& _organization);

                    /**
                     * 判断参数 Organization 是否已赋值
                     * @return Organization 是否已赋值
                     * @deprecated
                     */
                    bool OrganizationHasBeenSet() const;

                    /**
                     * 获取签署完之后的H5页面的跳转链接，最大长度1000个字符。链接类型请参考 <a href="https://qian.tencent.com/developers/company/openqianh5" target="_blank">跳转电子签H5</a>

                     * @return JumpUrl 签署完之后的H5页面的跳转链接，最大长度1000个字符。链接类型请参考 <a href="https://qian.tencent.com/developers/company/openqianh5" target="_blank">跳转电子签H5</a>

                     * 
                     */
                    std::string GetJumpUrl() const;

                    /**
                     * 设置签署完之后的H5页面的跳转链接，最大长度1000个字符。链接类型请参考 <a href="https://qian.tencent.com/developers/company/openqianh5" target="_blank">跳转电子签H5</a>

                     * @param _jumpUrl 签署完之后的H5页面的跳转链接，最大长度1000个字符。链接类型请参考 <a href="https://qian.tencent.com/developers/company/openqianh5" target="_blank">跳转电子签H5</a>

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
                     * 获取链接类型，支持指定以下类型
<ul><li>0 : 签署链接 (默认值)</li>
<li>1 : 预览链接</li></ul>
注:
`1. 当指定链接类型为1时，链接为预览链接，打开链接无法签署仅支持预览以及查看当前合同状态。`
`2. 如需生成发起方预览链接，则签署方信息传空，即FlowApproverInfos传空或者不传。`
                     * @return UrlType 链接类型，支持指定以下类型
<ul><li>0 : 签署链接 (默认值)</li>
<li>1 : 预览链接</li></ul>
注:
`1. 当指定链接类型为1时，链接为预览链接，打开链接无法签署仅支持预览以及查看当前合同状态。`
`2. 如需生成发起方预览链接，则签署方信息传空，即FlowApproverInfos传空或者不传。`
                     * 
                     */
                    int64_t GetUrlType() const;

                    /**
                     * 设置链接类型，支持指定以下类型
<ul><li>0 : 签署链接 (默认值)</li>
<li>1 : 预览链接</li></ul>
注:
`1. 当指定链接类型为1时，链接为预览链接，打开链接无法签署仅支持预览以及查看当前合同状态。`
`2. 如需生成发起方预览链接，则签署方信息传空，即FlowApproverInfos传空或者不传。`
                     * @param _urlType 链接类型，支持指定以下类型
<ul><li>0 : 签署链接 (默认值)</li>
<li>1 : 预览链接</li></ul>
注:
`1. 当指定链接类型为1时，链接为预览链接，打开链接无法签署仅支持预览以及查看当前合同状态。`
`2. 如需生成发起方预览链接，则签署方信息传空，即FlowApproverInfos传空或者不传。`
                     * 
                     */
                    void SetUrlType(const int64_t& _urlType);

                    /**
                     * 判断参数 UrlType 是否已赋值
                     * @return UrlType 是否已赋值
                     * 
                     */
                    bool UrlTypeHasBeenSet() const;

                private:

                    /**
                     * 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li>
</ul>
第三方平台子客企业和员工必须已经经过实名认证
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 合同流程ID，为32位字符串。
建议开发者妥善保存此流程ID，以便于顺利进行后续操作。
可登录腾讯电子签控制台，在 "合同"->"合同中心" 中查看某个合同的FlowId(在页面中展示为合同ID)。
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 流程签署人列表，其中结构体的ApproverType必传。
若为个人签署方或saas企业签署方，则Name，Mobile必传。OrganizationName 传对应企业名称。
若为子客企业签署方则需传OpenId、OrganizationOpenId、OrganizationName， 其他可不传。（如果对应OrganizationOpenId 子客已经认证激活了，则可以省去OrganizationName）

此结构体和发起接口参与方结构体复用，除了上述参数外，可传递的参数有：
1. RecipientId: 发起合同会返回，可以直接用于指定需要生成链接的签署方。
2. ApproverSignTypes: 指定签署方签署时候的认证方式，仅此链接生效。
3. SignTypeSelector: 可以指定签署方签署合同的认证校验方式的选择模式。
4. Intention: 指定H5签署视频核身的意图配置，仅视频签署需要使用。

注:
`1. 签署人只能有手写签名、时间类型、印章类型、签批类型的签署控件和内容填写控件，其他类型的签署控件暂时未支持。`
`2. 生成发起方预览链接时，该字段（FlowApproverInfos）传空或者不传`
                     */
                    std::vector<FlowApproverInfo> m_flowApproverInfos;
                    bool m_flowApproverInfosHasBeenSet;

                    /**
                     * 用户信息，暂未开放
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 机构信息，暂未开放
                     */
                    OrganizationInfo m_organization;
                    bool m_organizationHasBeenSet;

                    /**
                     * 签署完之后的H5页面的跳转链接，最大长度1000个字符。链接类型请参考 <a href="https://qian.tencent.com/developers/company/openqianh5" target="_blank">跳转电子签H5</a>

                     */
                    std::string m_jumpUrl;
                    bool m_jumpUrlHasBeenSet;

                    /**
                     * 链接类型，支持指定以下类型
<ul><li>0 : 签署链接 (默认值)</li>
<li>1 : 预览链接</li></ul>
注:
`1. 当指定链接类型为1时，链接为预览链接，打开链接无法签署仅支持预览以及查看当前合同状态。`
`2. 如需生成发起方预览链接，则签署方信息传空，即FlowApproverInfos传空或者不传。`
                     */
                    int64_t m_urlType;
                    bool m_urlTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEFLOWSIGNURLREQUEST_H_
