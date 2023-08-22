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
                     * 获取待解除的流程编号（即原流程的编号）
                     * @return NeedRelievedFlowId 待解除的流程编号（即原流程的编号）
                     * 
                     */
                    std::string GetNeedRelievedFlowId() const;

                    /**
                     * 设置待解除的流程编号（即原流程的编号）
                     * @param _needRelievedFlowId 待解除的流程编号（即原流程的编号）
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
                     * 获取解除协议内容
                     * @return ReliveInfo 解除协议内容
                     * 
                     */
                    RelieveInfo GetReliveInfo() const;

                    /**
                     * 设置解除协议内容
                     * @param _reliveInfo 解除协议内容
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
                     * 获取非必须，解除协议的本企业签署人列表，默认使用原流程的签署人列表；当解除协议的签署人与原流程的签署人不能相同时（例如原流程签署人离职了），需要指定本企业的其他签署人来替换原流程中的原签署人，注意需要指明ApproverNumber来代表需要替换哪一个签署人，已转发的签署人不包含在内，解除协议的签署人数量不能多于原流程的签署人数量
                     * @return ReleasedApprovers 非必须，解除协议的本企业签署人列表，默认使用原流程的签署人列表；当解除协议的签署人与原流程的签署人不能相同时（例如原流程签署人离职了），需要指定本企业的其他签署人来替换原流程中的原签署人，注意需要指明ApproverNumber来代表需要替换哪一个签署人，已转发的签署人不包含在内，解除协议的签署人数量不能多于原流程的签署人数量
                     * 
                     */
                    std::vector<ReleasedApprover> GetReleasedApprovers() const;

                    /**
                     * 设置非必须，解除协议的本企业签署人列表，默认使用原流程的签署人列表；当解除协议的签署人与原流程的签署人不能相同时（例如原流程签署人离职了），需要指定本企业的其他签署人来替换原流程中的原签署人，注意需要指明ApproverNumber来代表需要替换哪一个签署人，已转发的签署人不包含在内，解除协议的签署人数量不能多于原流程的签署人数量
                     * @param _releasedApprovers 非必须，解除协议的本企业签署人列表，默认使用原流程的签署人列表；当解除协议的签署人与原流程的签署人不能相同时（例如原流程签署人离职了），需要指定本企业的其他签署人来替换原流程中的原签署人，注意需要指明ApproverNumber来代表需要替换哪一个签署人，已转发的签署人不包含在内，解除协议的签署人数量不能多于原流程的签署人数量
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
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置签署完回调url，最大长度1000个字符
                     * @param _callbackUrl 签署完回调url，最大长度1000个字符
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
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
                     * 获取签署流程的签署截止时间。 值为unix时间戳,精确到秒,不传默认为当前时间七天后
                     * @return Deadline 签署流程的签署截止时间。 值为unix时间戳,精确到秒,不传默认为当前时间七天后
                     * 
                     */
                    int64_t GetDeadline() const;

                    /**
                     * 设置签署流程的签署截止时间。 值为unix时间戳,精确到秒,不传默认为当前时间七天后
                     * @param _deadline 签署流程的签署截止时间。 值为unix时间戳,精确到秒,不传默认为当前时间七天后
                     * 
                     */
                    void SetDeadline(const int64_t& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     * 
                     */
                    bool DeadlineHasBeenSet() const;

                private:

                    /**
                     * 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 必填。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 待解除的流程编号（即原流程的编号）
                     */
                    std::string m_needRelievedFlowId;
                    bool m_needRelievedFlowIdHasBeenSet;

                    /**
                     * 解除协议内容
                     */
                    RelieveInfo m_reliveInfo;
                    bool m_reliveInfoHasBeenSet;

                    /**
                     * 非必须，解除协议的本企业签署人列表，默认使用原流程的签署人列表；当解除协议的签署人与原流程的签署人不能相同时（例如原流程签署人离职了），需要指定本企业的其他签署人来替换原流程中的原签署人，注意需要指明ApproverNumber来代表需要替换哪一个签署人，已转发的签署人不包含在内，解除协议的签署人数量不能多于原流程的签署人数量
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
                     * 签署流程的签署截止时间。 值为unix时间戳,精确到秒,不传默认为当前时间七天后
                     */
                    int64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATERELEASEFLOWREQUEST_H_
