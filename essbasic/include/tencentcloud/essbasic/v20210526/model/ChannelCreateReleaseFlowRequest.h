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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATERELEASEFLOWREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATERELEASEFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
#include <tencentcloud/essbasic/v20210526/model/RelieveInfo.h>
#include <tencentcloud/essbasic/v20210526/model/ReleasedApprover.h>
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
                * ChannelCreateReleaseFlow请求参数结构体
                */
                class ChannelCreateReleaseFlowRequest : public AbstractModel
                {
                public:
                    ChannelCreateReleaseFlowRequest();
                    ~ChannelCreateReleaseFlowRequest() = default;
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
                     * 获取待解除的签署流程编号(即原签署流程的编号)。


[点击查看流程编号在控制台上的位置](https://qcloudimg.tencent-cloud.cn/raw/05af26573d5106763b4cfbb9f7c64b41.png)
                     * @return NeedRelievedFlowId 待解除的签署流程编号(即原签署流程的编号)。


[点击查看流程编号在控制台上的位置](https://qcloudimg.tencent-cloud.cn/raw/05af26573d5106763b4cfbb9f7c64b41.png)
                     * 
                     */
                    std::string GetNeedRelievedFlowId() const;

                    /**
                     * 设置待解除的签署流程编号(即原签署流程的编号)。


[点击查看流程编号在控制台上的位置](https://qcloudimg.tencent-cloud.cn/raw/05af26573d5106763b4cfbb9f7c64b41.png)
                     * @param _needRelievedFlowId 待解除的签署流程编号(即原签署流程的编号)。


[点击查看流程编号在控制台上的位置](https://qcloudimg.tencent-cloud.cn/raw/05af26573d5106763b4cfbb9f7c64b41.png)
                     * 
                     */
                    void SetNeedRelievedFlowId(const std::string& _needRelievedFlowId);

                    /**
                     * 判断参数 NeedRelievedFlowId 是否已赋值
                     * @return NeedRelievedFlowId 是否已赋值
                     * 
                     */
                    bool NeedRelievedFlowIdHasBeenSet() const;

                    /**
                     * 获取解除协议内容, 包括解除理由等信息。
                     * @return ReliveInfo 解除协议内容, 包括解除理由等信息。
                     * 
                     */
                    RelieveInfo GetReliveInfo() const;

                    /**
                     * 设置解除协议内容, 包括解除理由等信息。
                     * @param _reliveInfo 解除协议内容, 包括解除理由等信息。
                     * 
                     */
                    void SetReliveInfo(const RelieveInfo& _reliveInfo);

                    /**
                     * 判断参数 ReliveInfo 是否已赋值
                     * @return ReliveInfo 是否已赋值
                     * 
                     */
                    bool ReliveInfoHasBeenSet() const;

                    /**
                     * 获取替换解除协议的签署人， 如不指定新的签署人，将继续使用原流程的签署人作为本解除协议的参与方。 <br/>
如需更换原合同中的企业端签署人，可通过指定该签署人在原合同列表中的ApproverNumber编号来更换此企业端签署人。(可通过接口<a href="https://qian.tencent.com/developers/partnerApis/flows/DescribeFlowDetailInfo/">DescribeFlowDetailInfo</a>查询签署人的ApproverNumber编号，默认从0开始，顺序递增)<br/>

注：
1. 支持更换企业的签署人，不支持更换个人类型的签署人。
2. 己方企业支持自动签署，他方企业不支持自动签署。
3. <b>仅将需要替换的签署人添加至此列表</b>，无需替换的签署人无需添加进来。
                     * @return ReleasedApprovers 替换解除协议的签署人， 如不指定新的签署人，将继续使用原流程的签署人作为本解除协议的参与方。 <br/>
如需更换原合同中的企业端签署人，可通过指定该签署人在原合同列表中的ApproverNumber编号来更换此企业端签署人。(可通过接口<a href="https://qian.tencent.com/developers/partnerApis/flows/DescribeFlowDetailInfo/">DescribeFlowDetailInfo</a>查询签署人的ApproverNumber编号，默认从0开始，顺序递增)<br/>

注：
1. 支持更换企业的签署人，不支持更换个人类型的签署人。
2. 己方企业支持自动签署，他方企业不支持自动签署。
3. <b>仅将需要替换的签署人添加至此列表</b>，无需替换的签署人无需添加进来。
                     * 
                     */
                    std::vector<ReleasedApprover> GetReleasedApprovers() const;

                    /**
                     * 设置替换解除协议的签署人， 如不指定新的签署人，将继续使用原流程的签署人作为本解除协议的参与方。 <br/>
如需更换原合同中的企业端签署人，可通过指定该签署人在原合同列表中的ApproverNumber编号来更换此企业端签署人。(可通过接口<a href="https://qian.tencent.com/developers/partnerApis/flows/DescribeFlowDetailInfo/">DescribeFlowDetailInfo</a>查询签署人的ApproverNumber编号，默认从0开始，顺序递增)<br/>

注：
1. 支持更换企业的签署人，不支持更换个人类型的签署人。
2. 己方企业支持自动签署，他方企业不支持自动签署。
3. <b>仅将需要替换的签署人添加至此列表</b>，无需替换的签署人无需添加进来。
                     * @param _releasedApprovers 替换解除协议的签署人， 如不指定新的签署人，将继续使用原流程的签署人作为本解除协议的参与方。 <br/>
如需更换原合同中的企业端签署人，可通过指定该签署人在原合同列表中的ApproverNumber编号来更换此企业端签署人。(可通过接口<a href="https://qian.tencent.com/developers/partnerApis/flows/DescribeFlowDetailInfo/">DescribeFlowDetailInfo</a>查询签署人的ApproverNumber编号，默认从0开始，顺序递增)<br/>

注：
1. 支持更换企业的签署人，不支持更换个人类型的签署人。
2. 己方企业支持自动签署，他方企业不支持自动签署。
3. <b>仅将需要替换的签署人添加至此列表</b>，无需替换的签署人无需添加进来。
                     * 
                     */
                    void SetReleasedApprovers(const std::vector<ReleasedApprover>& _releasedApprovers);

                    /**
                     * 判断参数 ReleasedApprovers 是否已赋值
                     * @return ReleasedApprovers 是否已赋值
                     * 
                     */
                    bool ReleasedApproversHasBeenSet() const;

                    /**
                     * 获取签署完回调url，最大长度1000个字符
                     * @return CallbackUrl 签署完回调url，最大长度1000个字符
                     * @deprecated
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置签署完回调url，最大长度1000个字符
                     * @param _callbackUrl 签署完回调url，最大长度1000个字符
                     * @deprecated
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * @deprecated
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取暂未开放
                     * @return Organization 暂未开放
                     * @deprecated
                     */
                    OrganizationInfo GetOrganization() const;

                    /**
                     * 设置暂未开放
                     * @param _organization 暂未开放
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
                     * 获取合同流程的签署截止时间，格式为Unix标准时间戳(秒)，如果未设置签署截止时间，则默认为合同流程创建后的7天时截止。
如果在签署截止时间前未完成签署，则合同状态会变为已过期，导致合同作废。
                     * @return Deadline 合同流程的签署截止时间，格式为Unix标准时间戳(秒)，如果未设置签署截止时间，则默认为合同流程创建后的7天时截止。
如果在签署截止时间前未完成签署，则合同状态会变为已过期，导致合同作废。
                     * 
                     */
                    int64_t GetDeadline() const;

                    /**
                     * 设置合同流程的签署截止时间，格式为Unix标准时间戳(秒)，如果未设置签署截止时间，则默认为合同流程创建后的7天时截止。
如果在签署截止时间前未完成签署，则合同状态会变为已过期，导致合同作废。
                     * @param _deadline 合同流程的签署截止时间，格式为Unix标准时间戳(秒)，如果未设置签署截止时间，则默认为合同流程创建后的7天时截止。
如果在签署截止时间前未完成签署，则合同状态会变为已过期，导致合同作废。
                     * 
                     */
                    void SetDeadline(const int64_t& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     * 
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取调用方自定义的个性化字段，该字段的值可以是字符串JSON或其他字符串形式，客户可以根据自身需求自定义数据格式并在需要时进行解析。该字段的信息将以Base64编码的形式传输，支持的最大数据大小为20480长度。

在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。

回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2" target="_blank">回调通知</a>模块。
                     * @return UserData 调用方自定义的个性化字段，该字段的值可以是字符串JSON或其他字符串形式，客户可以根据自身需求自定义数据格式并在需要时进行解析。该字段的信息将以Base64编码的形式传输，支持的最大数据大小为20480长度。

在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。

回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2" target="_blank">回调通知</a>模块。
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置调用方自定义的个性化字段，该字段的值可以是字符串JSON或其他字符串形式，客户可以根据自身需求自定义数据格式并在需要时进行解析。该字段的信息将以Base64编码的形式传输，支持的最大数据大小为20480长度。

在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。

回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2" target="_blank">回调通知</a>模块。
                     * @param _userData 调用方自定义的个性化字段，该字段的值可以是字符串JSON或其他字符串形式，客户可以根据自身需求自定义数据格式并在需要时进行解析。该字段的信息将以Base64编码的形式传输，支持的最大数据大小为20480长度。

在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。

回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2" target="_blank">回调通知</a>模块。
                     * 
                     */
                    void SetUserData(const std::string& _userData);

                    /**
                     * 判断参数 UserData 是否已赋值
                     * @return UserData 是否已赋值
                     * 
                     */
                    bool UserDataHasBeenSet() const;

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
                     * 待解除的签署流程编号(即原签署流程的编号)。


[点击查看流程编号在控制台上的位置](https://qcloudimg.tencent-cloud.cn/raw/05af26573d5106763b4cfbb9f7c64b41.png)
                     */
                    std::string m_needRelievedFlowId;
                    bool m_needRelievedFlowIdHasBeenSet;

                    /**
                     * 解除协议内容, 包括解除理由等信息。
                     */
                    RelieveInfo m_reliveInfo;
                    bool m_reliveInfoHasBeenSet;

                    /**
                     * 替换解除协议的签署人， 如不指定新的签署人，将继续使用原流程的签署人作为本解除协议的参与方。 <br/>
如需更换原合同中的企业端签署人，可通过指定该签署人在原合同列表中的ApproverNumber编号来更换此企业端签署人。(可通过接口<a href="https://qian.tencent.com/developers/partnerApis/flows/DescribeFlowDetailInfo/">DescribeFlowDetailInfo</a>查询签署人的ApproverNumber编号，默认从0开始，顺序递增)<br/>

注：
1. 支持更换企业的签署人，不支持更换个人类型的签署人。
2. 己方企业支持自动签署，他方企业不支持自动签署。
3. <b>仅将需要替换的签署人添加至此列表</b>，无需替换的签署人无需添加进来。
                     */
                    std::vector<ReleasedApprover> m_releasedApprovers;
                    bool m_releasedApproversHasBeenSet;

                    /**
                     * 签署完回调url，最大长度1000个字符
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 暂未开放
                     */
                    OrganizationInfo m_organization;
                    bool m_organizationHasBeenSet;

                    /**
                     * 暂未开放
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 合同流程的签署截止时间，格式为Unix标准时间戳(秒)，如果未设置签署截止时间，则默认为合同流程创建后的7天时截止。
如果在签署截止时间前未完成签署，则合同状态会变为已过期，导致合同作废。
                     */
                    int64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 调用方自定义的个性化字段，该字段的值可以是字符串JSON或其他字符串形式，客户可以根据自身需求自定义数据格式并在需要时进行解析。该字段的信息将以Base64编码的形式传输，支持的最大数据大小为20480长度。

在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。

回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2" target="_blank">回调通知</a>模块。
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATERELEASEFLOWREQUEST_H_
