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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEPREPAREFLOWREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEPREPAREFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/BaseFlowInfo.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
#include <tencentcloud/essbasic/v20210526/model/CreateFlowOption.h>
#include <tencentcloud/essbasic/v20210526/model/CommonFlowApprover.h>
#include <tencentcloud/essbasic/v20210526/model/OrganizationInfo.h>
#include <tencentcloud/essbasic/v20210526/model/UserInfo.h>
#include <tencentcloud/essbasic/v20210526/model/SignComponentConfig.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * ChannelCreatePrepareFlow请求参数结构体
                */
                class ChannelCreatePrepareFlowRequest : public AbstractModel
                {
                public:
                    ChannelCreatePrepareFlowRequest();
                    ~ChannelCreatePrepareFlowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源类型，取值有：
<ul><li> **1**：模板</li>
<li> **2**：文件（默认值）</li></ul>
                     * @return ResourceType 资源类型，取值有：
<ul><li> **1**：模板</li>
<li> **2**：文件（默认值）</li></ul>
                     * 
                     */
                    int64_t GetResourceType() const;

                    /**
                     * 设置资源类型，取值有：
<ul><li> **1**：模板</li>
<li> **2**：文件（默认值）</li></ul>
                     * @param _resourceType 资源类型，取值有：
<ul><li> **1**：模板</li>
<li> **2**：文件（默认值）</li></ul>
                     * 
                     */
                    void SetResourceType(const int64_t& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取要创建的合同信息
                     * @return FlowInfo 要创建的合同信息
                     * 
                     */
                    BaseFlowInfo GetFlowInfo() const;

                    /**
                     * 设置要创建的合同信息
                     * @param _flowInfo 要创建的合同信息
                     * 
                     */
                    void SetFlowInfo(const BaseFlowInfo& _flowInfo);

                    /**
                     * 判断参数 FlowInfo 是否已赋值
                     * @return FlowInfo 是否已赋值
                     * 
                     */
                    bool FlowInfoHasBeenSet() const;

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
                     * 获取资源id，与ResourceType相对应，取值范围：
<ul>
<li>文件Id（通过UploadFiles获取文件资源Id）</li>
<li>模板Id（通过控制台创建模板后获取模板Id）</li>
</ul>
注意：需要同时设置 ResourceType 参数指定资源类型
                     * @return ResourceId 资源id，与ResourceType相对应，取值范围：
<ul>
<li>文件Id（通过UploadFiles获取文件资源Id）</li>
<li>模板Id（通过控制台创建模板后获取模板Id）</li>
</ul>
注意：需要同时设置 ResourceType 参数指定资源类型
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源id，与ResourceType相对应，取值范围：
<ul>
<li>文件Id（通过UploadFiles获取文件资源Id）</li>
<li>模板Id（通过控制台创建模板后获取模板Id）</li>
</ul>
注意：需要同时设置 ResourceType 参数指定资源类型
                     * @param _resourceId 资源id，与ResourceType相对应，取值范围：
<ul>
<li>文件Id（通过UploadFiles获取文件资源Id）</li>
<li>模板Id（通过控制台创建模板后获取模板Id）</li>
</ul>
注意：需要同时设置 ResourceType 参数指定资源类型
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取合同流程配置信息，用于配置发起合同时定制化如是否允许修改，某些按钮的隐藏等逻辑
                     * @return FlowOption 合同流程配置信息，用于配置发起合同时定制化如是否允许修改，某些按钮的隐藏等逻辑
                     * 
                     */
                    CreateFlowOption GetFlowOption() const;

                    /**
                     * 设置合同流程配置信息，用于配置发起合同时定制化如是否允许修改，某些按钮的隐藏等逻辑
                     * @param _flowOption 合同流程配置信息，用于配置发起合同时定制化如是否允许修改，某些按钮的隐藏等逻辑
                     * 
                     */
                    void SetFlowOption(const CreateFlowOption& _flowOption);

                    /**
                     * 判断参数 FlowOption 是否已赋值
                     * @return FlowOption 是否已赋值
                     * 
                     */
                    bool FlowOptionHasBeenSet() const;

                    /**
                     * 获取已废弃，请用FlowInfo.Approvers
                     * @return FlowApproverList 已废弃，请用FlowInfo.Approvers
                     * @deprecated
                     */
                    std::vector<CommonFlowApprover> GetFlowApproverList() const;

                    /**
                     * 设置已废弃，请用FlowInfo.Approvers
                     * @param _flowApproverList 已废弃，请用FlowInfo.Approvers
                     * @deprecated
                     */
                    void SetFlowApproverList(const std::vector<CommonFlowApprover>& _flowApproverList);

                    /**
                     * 判断参数 FlowApproverList 是否已赋值
                     * @return FlowApproverList 是否已赋值
                     * @deprecated
                     */
                    bool FlowApproverListHasBeenSet() const;

                    /**
                     * 获取合同Id：用于通过一个已发起的合同快速生成一个发起流程web链接
注: `该参数必须是一个待发起审核的合同id，并且还未审核通过`
                     * @return FlowId 合同Id：用于通过一个已发起的合同快速生成一个发起流程web链接
注: `该参数必须是一个待发起审核的合同id，并且还未审核通过`
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置合同Id：用于通过一个已发起的合同快速生成一个发起流程web链接
注: `该参数必须是一个待发起审核的合同id，并且还未审核通过`
                     * @param _flowId 合同Id：用于通过一个已发起的合同快速生成一个发起流程web链接
注: `该参数必须是一个待发起审核的合同id，并且还未审核通过`
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
                     * 获取该参数不可用，请通过获取 web 可嵌入接口获取合同流程预览 URL
                     * @return NeedPreview 该参数不可用，请通过获取 web 可嵌入接口获取合同流程预览 URL
                     * @deprecated
                     */
                    bool GetNeedPreview() const;

                    /**
                     * 设置该参数不可用，请通过获取 web 可嵌入接口获取合同流程预览 URL
                     * @param _needPreview 该参数不可用，请通过获取 web 可嵌入接口获取合同流程预览 URL
                     * @deprecated
                     */
                    void SetNeedPreview(const bool& _needPreview);

                    /**
                     * 判断参数 NeedPreview 是否已赋值
                     * @return NeedPreview 是否已赋值
                     * @deprecated
                     */
                    bool NeedPreviewHasBeenSet() const;

                    /**
                     * 获取企业机构信息，不用传
                     * @return Organization 企业机构信息，不用传
                     * @deprecated
                     */
                    OrganizationInfo GetOrganization() const;

                    /**
                     * 设置企业机构信息，不用传
                     * @param _organization 企业机构信息，不用传
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
                     * 获取操作人（用户）信息，不用传
                     * @return Operator 操作人（用户）信息，不用传
                     * @deprecated
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作人（用户）信息，不用传
                     * @param _operator 操作人（用户）信息，不用传
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
                     * 获取<font color="red">此参数已经废弃，请使用 CreateFlowOption 里面的 SignComponentConfig</font>
签署控件的配置信息，用在嵌入式发起的页面配置，包括

- 签署控件 是否默认展示日期.
                     * @return SignComponentConfig <font color="red">此参数已经废弃，请使用 CreateFlowOption 里面的 SignComponentConfig</font>
签署控件的配置信息，用在嵌入式发起的页面配置，包括

- 签署控件 是否默认展示日期.
                     * @deprecated
                     */
                    SignComponentConfig GetSignComponentConfig() const;

                    /**
                     * 设置<font color="red">此参数已经废弃，请使用 CreateFlowOption 里面的 SignComponentConfig</font>
签署控件的配置信息，用在嵌入式发起的页面配置，包括

- 签署控件 是否默认展示日期.
                     * @param _signComponentConfig <font color="red">此参数已经废弃，请使用 CreateFlowOption 里面的 SignComponentConfig</font>
签署控件的配置信息，用在嵌入式发起的页面配置，包括

- 签署控件 是否默认展示日期.
                     * @deprecated
                     */
                    void SetSignComponentConfig(const SignComponentConfig& _signComponentConfig);

                    /**
                     * 判断参数 SignComponentConfig 是否已赋值
                     * @return SignComponentConfig 是否已赋值
                     * @deprecated
                     */
                    bool SignComponentConfigHasBeenSet() const;

                private:

                    /**
                     * 资源类型，取值有：
<ul><li> **1**：模板</li>
<li> **2**：文件（默认值）</li></ul>
                     */
                    int64_t m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 要创建的合同信息
                     */
                    BaseFlowInfo m_flowInfo;
                    bool m_flowInfoHasBeenSet;

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
                     * 资源id，与ResourceType相对应，取值范围：
<ul>
<li>文件Id（通过UploadFiles获取文件资源Id）</li>
<li>模板Id（通过控制台创建模板后获取模板Id）</li>
</ul>
注意：需要同时设置 ResourceType 参数指定资源类型
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 合同流程配置信息，用于配置发起合同时定制化如是否允许修改，某些按钮的隐藏等逻辑
                     */
                    CreateFlowOption m_flowOption;
                    bool m_flowOptionHasBeenSet;

                    /**
                     * 已废弃，请用FlowInfo.Approvers
                     */
                    std::vector<CommonFlowApprover> m_flowApproverList;
                    bool m_flowApproverListHasBeenSet;

                    /**
                     * 合同Id：用于通过一个已发起的合同快速生成一个发起流程web链接
注: `该参数必须是一个待发起审核的合同id，并且还未审核通过`
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 该参数不可用，请通过获取 web 可嵌入接口获取合同流程预览 URL
                     */
                    bool m_needPreview;
                    bool m_needPreviewHasBeenSet;

                    /**
                     * 企业机构信息，不用传
                     */
                    OrganizationInfo m_organization;
                    bool m_organizationHasBeenSet;

                    /**
                     * 操作人（用户）信息，不用传
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <font color="red">此参数已经废弃，请使用 CreateFlowOption 里面的 SignComponentConfig</font>
签署控件的配置信息，用在嵌入式发起的页面配置，包括

- 签署控件 是否默认展示日期.
                     */
                    SignComponentConfig m_signComponentConfig;
                    bool m_signComponentConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEPREPAREFLOWREQUEST_H_
