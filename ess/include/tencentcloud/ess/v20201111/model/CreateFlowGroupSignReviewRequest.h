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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWGROUPSIGNREVIEWREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWGROUPSIGNREVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/NeedReviewApproverInfo.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateFlowGroupSignReview请求参数结构体
                */
                class CreateFlowGroupSignReviewRequest : public AbstractModel
                {
                public:
                    CreateFlowGroupSignReviewRequest();
                    ~CreateFlowGroupSignReviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @return Operator 执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @param _operator 执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取合同(流程)组的合同组Id，为32位字符串，通过接口[通过多文件创建合同组签署流程](https://qian.tencent.com/developers/companyApis/startFlows/CreateFlowGroupByFiles) 或[通过多模板创建合同组签署流程](https://qian.tencent.com/developers/companyApis/startFlows/CreateFlowGroupByTemplates)创建合同组签署流程时返回。
                     * @return FlowGroupId 合同(流程)组的合同组Id，为32位字符串，通过接口[通过多文件创建合同组签署流程](https://qian.tencent.com/developers/companyApis/startFlows/CreateFlowGroupByFiles) 或[通过多模板创建合同组签署流程](https://qian.tencent.com/developers/companyApis/startFlows/CreateFlowGroupByTemplates)创建合同组签署流程时返回。
                     * 
                     */
                    std::string GetFlowGroupId() const;

                    /**
                     * 设置合同(流程)组的合同组Id，为32位字符串，通过接口[通过多文件创建合同组签署流程](https://qian.tencent.com/developers/companyApis/startFlows/CreateFlowGroupByFiles) 或[通过多模板创建合同组签署流程](https://qian.tencent.com/developers/companyApis/startFlows/CreateFlowGroupByTemplates)创建合同组签署流程时返回。
                     * @param _flowGroupId 合同(流程)组的合同组Id，为32位字符串，通过接口[通过多文件创建合同组签署流程](https://qian.tencent.com/developers/companyApis/startFlows/CreateFlowGroupByFiles) 或[通过多模板创建合同组签署流程](https://qian.tencent.com/developers/companyApis/startFlows/CreateFlowGroupByTemplates)创建合同组签署流程时返回。
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
                     * 获取提交的审核结果，审核结果有下面三种情况
<ul><li><b>PASS</b>: 审核通过，合同流程可以继续执行签署等操作</li>
<li><b>REJECT</b>: 审核拒绝，合同流程不会变动</li>
<li><b>SIGN_REJECT</b>:拒签，合同流程直接结束，合同状态变为**合同拒签**</li></ul>
                     * @return ReviewType 提交的审核结果，审核结果有下面三种情况
<ul><li><b>PASS</b>: 审核通过，合同流程可以继续执行签署等操作</li>
<li><b>REJECT</b>: 审核拒绝，合同流程不会变动</li>
<li><b>SIGN_REJECT</b>:拒签，合同流程直接结束，合同状态变为**合同拒签**</li></ul>
                     * 
                     */
                    std::string GetReviewType() const;

                    /**
                     * 设置提交的审核结果，审核结果有下面三种情况
<ul><li><b>PASS</b>: 审核通过，合同流程可以继续执行签署等操作</li>
<li><b>REJECT</b>: 审核拒绝，合同流程不会变动</li>
<li><b>SIGN_REJECT</b>:拒签，合同流程直接结束，合同状态变为**合同拒签**</li></ul>
                     * @param _reviewType 提交的审核结果，审核结果有下面三种情况
<ul><li><b>PASS</b>: 审核通过，合同流程可以继续执行签署等操作</li>
<li><b>REJECT</b>: 审核拒绝，合同流程不会变动</li>
<li><b>SIGN_REJECT</b>:拒签，合同流程直接结束，合同状态变为**合同拒签**</li></ul>
                     * 
                     */
                    void SetReviewType(const std::string& _reviewType);

                    /**
                     * 判断参数 ReviewType 是否已赋值
                     * @return ReviewType 是否已赋值
                     * 
                     */
                    bool ReviewTypeHasBeenSet() const;

                    /**
                     * 获取需要进行签署审核的签署人的个人信息或企业信息，签署方的匹配方式按照以下规则:

个人：二选一（选择其中任意信息组合即可）
<ul><li>姓名+证件类型+证件号</li>
<li>姓名+手机号</li></ul>

企业：二选一  （选择其中任意信息组合即可）
<ul><li>企业名+姓名+证件类型+证件号</li>
<li>企业名+姓名+手机号</li></ul>
                     * @return ApproverInfo 需要进行签署审核的签署人的个人信息或企业信息，签署方的匹配方式按照以下规则:

个人：二选一（选择其中任意信息组合即可）
<ul><li>姓名+证件类型+证件号</li>
<li>姓名+手机号</li></ul>

企业：二选一  （选择其中任意信息组合即可）
<ul><li>企业名+姓名+证件类型+证件号</li>
<li>企业名+姓名+手机号</li></ul>
                     * 
                     */
                    NeedReviewApproverInfo GetApproverInfo() const;

                    /**
                     * 设置需要进行签署审核的签署人的个人信息或企业信息，签署方的匹配方式按照以下规则:

个人：二选一（选择其中任意信息组合即可）
<ul><li>姓名+证件类型+证件号</li>
<li>姓名+手机号</li></ul>

企业：二选一  （选择其中任意信息组合即可）
<ul><li>企业名+姓名+证件类型+证件号</li>
<li>企业名+姓名+手机号</li></ul>
                     * @param _approverInfo 需要进行签署审核的签署人的个人信息或企业信息，签署方的匹配方式按照以下规则:

个人：二选一（选择其中任意信息组合即可）
<ul><li>姓名+证件类型+证件号</li>
<li>姓名+手机号</li></ul>

企业：二选一  （选择其中任意信息组合即可）
<ul><li>企业名+姓名+证件类型+证件号</li>
<li>企业名+姓名+手机号</li></ul>
                     * 
                     */
                    void SetApproverInfo(const NeedReviewApproverInfo& _approverInfo);

                    /**
                     * 判断参数 ApproverInfo 是否已赋值
                     * @return ApproverInfo 是否已赋值
                     * 
                     */
                    bool ApproverInfoHasBeenSet() const;

                    /**
                     * 获取代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     * @return Agent 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     * @param _agent 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
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
                     * 获取审核不通过的原因，该字段的字符串长度不超过200个字符。

注：`当审核类型（ReviewType）为审核拒绝（REJECT）或拒签（SIGN_REJECT）时，审核结果原因字段必须填写`

                     * @return ReviewMessage 审核不通过的原因，该字段的字符串长度不超过200个字符。

注：`当审核类型（ReviewType）为审核拒绝（REJECT）或拒签（SIGN_REJECT）时，审核结果原因字段必须填写`

                     * 
                     */
                    std::string GetReviewMessage() const;

                    /**
                     * 设置审核不通过的原因，该字段的字符串长度不超过200个字符。

注：`当审核类型（ReviewType）为审核拒绝（REJECT）或拒签（SIGN_REJECT）时，审核结果原因字段必须填写`

                     * @param _reviewMessage 审核不通过的原因，该字段的字符串长度不超过200个字符。

注：`当审核类型（ReviewType）为审核拒绝（REJECT）或拒签（SIGN_REJECT）时，审核结果原因字段必须填写`

                     * 
                     */
                    void SetReviewMessage(const std::string& _reviewMessage);

                    /**
                     * 判断参数 ReviewMessage 是否已赋值
                     * @return ReviewMessage 是否已赋值
                     * 
                     */
                    bool ReviewMessageHasBeenSet() const;

                private:

                    /**
                     * 执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 合同(流程)组的合同组Id，为32位字符串，通过接口[通过多文件创建合同组签署流程](https://qian.tencent.com/developers/companyApis/startFlows/CreateFlowGroupByFiles) 或[通过多模板创建合同组签署流程](https://qian.tencent.com/developers/companyApis/startFlows/CreateFlowGroupByTemplates)创建合同组签署流程时返回。
                     */
                    std::string m_flowGroupId;
                    bool m_flowGroupIdHasBeenSet;

                    /**
                     * 提交的审核结果，审核结果有下面三种情况
<ul><li><b>PASS</b>: 审核通过，合同流程可以继续执行签署等操作</li>
<li><b>REJECT</b>: 审核拒绝，合同流程不会变动</li>
<li><b>SIGN_REJECT</b>:拒签，合同流程直接结束，合同状态变为**合同拒签**</li></ul>
                     */
                    std::string m_reviewType;
                    bool m_reviewTypeHasBeenSet;

                    /**
                     * 需要进行签署审核的签署人的个人信息或企业信息，签署方的匹配方式按照以下规则:

个人：二选一（选择其中任意信息组合即可）
<ul><li>姓名+证件类型+证件号</li>
<li>姓名+手机号</li></ul>

企业：二选一  （选择其中任意信息组合即可）
<ul><li>企业名+姓名+证件类型+证件号</li>
<li>企业名+姓名+手机号</li></ul>
                     */
                    NeedReviewApproverInfo m_approverInfo;
                    bool m_approverInfoHasBeenSet;

                    /**
                     * 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 审核不通过的原因，该字段的字符串长度不超过200个字符。

注：`当审核类型（ReviewType）为审核拒绝（REJECT）或拒签（SIGN_REJECT）时，审核结果原因字段必须填写`

                     */
                    std::string m_reviewMessage;
                    bool m_reviewMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWGROUPSIGNREVIEWREQUEST_H_
