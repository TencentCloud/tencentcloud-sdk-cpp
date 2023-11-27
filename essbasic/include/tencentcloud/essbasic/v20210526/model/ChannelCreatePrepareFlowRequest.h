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
                     * 获取合同模板ID，为32位字符串。
                     * @return ResourceId 合同模板ID，为32位字符串。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置合同模板ID，为32位字符串。
                     * @param _resourceId 合同模板ID，为32位字符串。
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
                     * 获取资源类型，此接口固定为**1**表示为用模板发起
                     * @return ResourceType 资源类型，此接口固定为**1**表示为用模板发起
                     * 
                     */
                    int64_t GetResourceType() const;

                    /**
                     * 设置资源类型，此接口固定为**1**表示为用模板发起
                     * @param _resourceType 资源类型，此接口固定为**1**表示为用模板发起
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
                     * 获取合同签署人信息
                     * @return FlowApproverList 合同签署人信息
                     * 
                     */
                    std::vector<CommonFlowApprover> GetFlowApproverList() const;

                    /**
                     * 设置合同签署人信息
                     * @param _flowApproverList 合同签署人信息
                     * 
                     */
                    void SetFlowApproverList(const std::vector<CommonFlowApprover>& _flowApproverList);

                    /**
                     * 判断参数 FlowApproverList 是否已赋值
                     * @return FlowApproverList 是否已赋值
                     * 
                     */
                    bool FlowApproverListHasBeenSet() const;

                    /**
                     * 获取用过去已经通过此接口发起的合同的ID复制个新的合同创建链接
                     * @return FlowId 用过去已经通过此接口发起的合同的ID复制个新的合同创建链接
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置用过去已经通过此接口发起的合同的ID复制个新的合同创建链接
                     * @param _flowId 用过去已经通过此接口发起的合同的ID复制个新的合同创建链接
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

                private:

                    /**
                     * 合同模板ID，为32位字符串。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源类型，此接口固定为**1**表示为用模板发起
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
                     * 合同流程配置信息，用于配置发起合同时定制化如是否允许修改，某些按钮的隐藏等逻辑
                     */
                    CreateFlowOption m_flowOption;
                    bool m_flowOptionHasBeenSet;

                    /**
                     * 合同签署人信息
                     */
                    std::vector<CommonFlowApprover> m_flowApproverList;
                    bool m_flowApproverListHasBeenSet;

                    /**
                     * 用过去已经通过此接口发起的合同的ID复制个新的合同创建链接
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEPREPAREFLOWREQUEST_H_
