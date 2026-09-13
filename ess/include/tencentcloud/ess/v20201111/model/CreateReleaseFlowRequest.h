/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATERELEASEFLOWREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATERELEASEFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/RelieveInfo.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>
#include <tencentcloud/ess/v20201111/model/ReleasedApprover.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateReleaseFlow请求参数结构体
                */
                class CreateReleaseFlowRequest : public AbstractModel
                {
                public:
                    CreateReleaseFlowRequest();
                    ~CreateReleaseFlowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * @return Operator <p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置<p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * @param _operator <p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
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
                     * 获取<p>待解除的签署流程编号（即原签署流程的编号）。</p>
                     * @return NeedRelievedFlowId <p>待解除的签署流程编号（即原签署流程的编号）。</p>
                     * 
                     */
                    std::string GetNeedRelievedFlowId() const;

                    /**
                     * 设置<p>待解除的签署流程编号（即原签署流程的编号）。</p>
                     * @param _needRelievedFlowId <p>待解除的签署流程编号（即原签署流程的编号）。</p>
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
                     * 获取<p>解除协议内容, 包括解除理由等信息。</p>
                     * @return ReliveInfo <p>解除协议内容, 包括解除理由等信息。</p>
                     * 
                     */
                    RelieveInfo GetReliveInfo() const;

                    /**
                     * 设置<p>解除协议内容, 包括解除理由等信息。</p>
                     * @param _reliveInfo <p>解除协议内容, 包括解除理由等信息。</p>
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
                     * 获取<p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * @return Agent <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置<p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * @param _agent <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
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
                     * 获取<p>替换解除协议的签署人， 如不指定新的签署人，将继续使用原流程的签署人作为本解除协议的参与方。 <br>如需更换原合同中的企业端签署人，可通过指定该签署人的RecipientId编号更换此企业端签署人。(可通过接口<a href="https://qian.tencent.com/developers/companyApis/queryFlows/DescribeFlowInfo/">DescribeFlowInfo</a>查询签署人的RecipientId编号)<br>注：1. 支持更换企业的签署人，不支持更换个人类型的签署人。2. 己方企业支持“授权签”，他方企业不支持“授权签”。3. <b>仅将需要替换的签署人添加至此列表</b>，无需替换的签署人无需添加进来。</p>
                     * @return ReleasedApprovers <p>替换解除协议的签署人， 如不指定新的签署人，将继续使用原流程的签署人作为本解除协议的参与方。 <br>如需更换原合同中的企业端签署人，可通过指定该签署人的RecipientId编号更换此企业端签署人。(可通过接口<a href="https://qian.tencent.com/developers/companyApis/queryFlows/DescribeFlowInfo/">DescribeFlowInfo</a>查询签署人的RecipientId编号)<br>注：1. 支持更换企业的签署人，不支持更换个人类型的签署人。2. 己方企业支持“授权签”，他方企业不支持“授权签”。3. <b>仅将需要替换的签署人添加至此列表</b>，无需替换的签署人无需添加进来。</p>
                     * 
                     */
                    std::vector<ReleasedApprover> GetReleasedApprovers() const;

                    /**
                     * 设置<p>替换解除协议的签署人， 如不指定新的签署人，将继续使用原流程的签署人作为本解除协议的参与方。 <br>如需更换原合同中的企业端签署人，可通过指定该签署人的RecipientId编号更换此企业端签署人。(可通过接口<a href="https://qian.tencent.com/developers/companyApis/queryFlows/DescribeFlowInfo/">DescribeFlowInfo</a>查询签署人的RecipientId编号)<br>注：1. 支持更换企业的签署人，不支持更换个人类型的签署人。2. 己方企业支持“授权签”，他方企业不支持“授权签”。3. <b>仅将需要替换的签署人添加至此列表</b>，无需替换的签署人无需添加进来。</p>
                     * @param _releasedApprovers <p>替换解除协议的签署人， 如不指定新的签署人，将继续使用原流程的签署人作为本解除协议的参与方。 <br>如需更换原合同中的企业端签署人，可通过指定该签署人的RecipientId编号更换此企业端签署人。(可通过接口<a href="https://qian.tencent.com/developers/companyApis/queryFlows/DescribeFlowInfo/">DescribeFlowInfo</a>查询签署人的RecipientId编号)<br>注：1. 支持更换企业的签署人，不支持更换个人类型的签署人。2. 己方企业支持“授权签”，他方企业不支持“授权签”。3. <b>仅将需要替换的签署人添加至此列表</b>，无需替换的签署人无需添加进来。</p>
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
                     * 获取<p>合同流程的签署截止时间，格式为Unix标准时间戳（秒），如果未设置签署截止时间，则默认为合同流程创建后的7天时截止。<br>如果在签署截止时间前未完成签署，则合同状态会变为已过期，导致合同作废。</p>
                     * @return Deadline <p>合同流程的签署截止时间，格式为Unix标准时间戳（秒），如果未设置签署截止时间，则默认为合同流程创建后的7天时截止。<br>如果在签署截止时间前未完成签署，则合同状态会变为已过期，导致合同作废。</p>
                     * 
                     */
                    int64_t GetDeadline() const;

                    /**
                     * 设置<p>合同流程的签署截止时间，格式为Unix标准时间戳（秒），如果未设置签署截止时间，则默认为合同流程创建后的7天时截止。<br>如果在签署截止时间前未完成签署，则合同状态会变为已过期，导致合同作废。</p>
                     * @param _deadline <p>合同流程的签署截止时间，格式为Unix标准时间戳（秒），如果未设置签署截止时间，则默认为合同流程创建后的7天时截止。<br>如果在签署截止时间前未完成签署，则合同状态会变为已过期，导致合同作废。</p>
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
                     * 获取<p>调用方自定义的个性化字段，该字段的值可以是字符串JSON或其他字符串形式，客户可以根据自身需求自定义数据格式并在需要时进行解析。该字段的信息将以Base64编码的形式传输，支持的最大数据大小为20480长度。</p><p>在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。</p><p>回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2" target="_blank">回调通知</a>模块。</p>
                     * @return UserData <p>调用方自定义的个性化字段，该字段的值可以是字符串JSON或其他字符串形式，客户可以根据自身需求自定义数据格式并在需要时进行解析。该字段的信息将以Base64编码的形式传输，支持的最大数据大小为20480长度。</p><p>在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。</p><p>回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2" target="_blank">回调通知</a>模块。</p>
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置<p>调用方自定义的个性化字段，该字段的值可以是字符串JSON或其他字符串形式，客户可以根据自身需求自定义数据格式并在需要时进行解析。该字段的信息将以Base64编码的形式传输，支持的最大数据大小为20480长度。</p><p>在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。</p><p>回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2" target="_blank">回调通知</a>模块。</p>
                     * @param _userData <p>调用方自定义的个性化字段，该字段的值可以是字符串JSON或其他字符串形式，客户可以根据自身需求自定义数据格式并在需要时进行解析。该字段的信息将以Base64编码的形式传输，支持的最大数据大小为20480长度。</p><p>在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。</p><p>回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2" target="_blank">回调通知</a>模块。</p>
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
                     * <p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>待解除的签署流程编号（即原签署流程的编号）。</p>
                     */
                    std::string m_needRelievedFlowId;
                    bool m_needRelievedFlowIdHasBeenSet;

                    /**
                     * <p>解除协议内容, 包括解除理由等信息。</p>
                     */
                    RelieveInfo m_reliveInfo;
                    bool m_reliveInfoHasBeenSet;

                    /**
                     * <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>替换解除协议的签署人， 如不指定新的签署人，将继续使用原流程的签署人作为本解除协议的参与方。 <br>如需更换原合同中的企业端签署人，可通过指定该签署人的RecipientId编号更换此企业端签署人。(可通过接口<a href="https://qian.tencent.com/developers/companyApis/queryFlows/DescribeFlowInfo/">DescribeFlowInfo</a>查询签署人的RecipientId编号)<br>注：1. 支持更换企业的签署人，不支持更换个人类型的签署人。2. 己方企业支持“授权签”，他方企业不支持“授权签”。3. <b>仅将需要替换的签署人添加至此列表</b>，无需替换的签署人无需添加进来。</p>
                     */
                    std::vector<ReleasedApprover> m_releasedApprovers;
                    bool m_releasedApproversHasBeenSet;

                    /**
                     * <p>合同流程的签署截止时间，格式为Unix标准时间戳（秒），如果未设置签署截止时间，则默认为合同流程创建后的7天时截止。<br>如果在签署截止时间前未完成签署，则合同状态会变为已过期，导致合同作废。</p>
                     */
                    int64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * <p>调用方自定义的个性化字段，该字段的值可以是字符串JSON或其他字符串形式，客户可以根据自身需求自定义数据格式并在需要时进行解析。该字段的信息将以Base64编码的形式传输，支持的最大数据大小为20480长度。</p><p>在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。</p><p>回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2" target="_blank">回调通知</a>模块。</p>
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATERELEASEFLOWREQUEST_H_
