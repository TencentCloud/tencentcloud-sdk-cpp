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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEORGANIZATIONBATCHSIGNURLREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEORGANIZATIONBATCHSIGNURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
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
                * CreateOrganizationBatchSignUrl请求参数结构体
                */
                class CreateOrganizationBatchSignUrlRequest : public AbstractModel
                {
                public:
                    CreateOrganizationBatchSignUrlRequest();
                    ~CreateOrganizationBatchSignUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取调用方用户信息，UserId 必填，支持填入集团子公司经办人UserId。
                     * @return Operator 调用方用户信息，UserId 必填，支持填入集团子公司经办人UserId。
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置调用方用户信息，UserId 必填，支持填入集团子公司经办人UserId。
                     * @param _operator 调用方用户信息，UserId 必填，支持填入集团子公司经办人UserId。
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
                     * 获取指定需要进行批量签署的流程id，数量1-100，填写后用户将通过链接对这些合同进行批量签署。
                     * @return FlowIds 指定需要进行批量签署的流程id，数量1-100，填写后用户将通过链接对这些合同进行批量签署。
                     * 
                     */
                    std::vector<std::string> GetFlowIds() const;

                    /**
                     * 设置指定需要进行批量签署的流程id，数量1-100，填写后用户将通过链接对这些合同进行批量签署。
                     * @param _flowIds 指定需要进行批量签署的流程id，数量1-100，填写后用户将通过链接对这些合同进行批量签署。
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
                     * 获取代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填。
                     * @return Agent 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填。
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填。
                     * @param _agent 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填。
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
                     * 获取员工的UserId，该UserId对应的员工必须已经加入企业并实名，Name和Mobile为空时该字段不能为空。（优先使用UserId对应的员工）
                     * @return UserId 员工的UserId，该UserId对应的员工必须已经加入企业并实名，Name和Mobile为空时该字段不能为空。（优先使用UserId对应的员工）
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置员工的UserId，该UserId对应的员工必须已经加入企业并实名，Name和Mobile为空时该字段不能为空。（优先使用UserId对应的员工）
                     * @param _userId 员工的UserId，该UserId对应的员工必须已经加入企业并实名，Name和Mobile为空时该字段不能为空。（优先使用UserId对应的员工）
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取员工姓名，该字段需要与Mobile组合使用，UserId为空时该字段不能为空。（UserId为空时，使用Name和Mbile对应的员工）
                     * @return Name 员工姓名，该字段需要与Mobile组合使用，UserId为空时该字段不能为空。（UserId为空时，使用Name和Mbile对应的员工）
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置员工姓名，该字段需要与Mobile组合使用，UserId为空时该字段不能为空。（UserId为空时，使用Name和Mbile对应的员工）
                     * @param _name 员工姓名，该字段需要与Mobile组合使用，UserId为空时该字段不能为空。（UserId为空时，使用Name和Mbile对应的员工）
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
                     * 获取员工手机号码，该字段需要与Name组合使用，UserId为空时该字段不能为空。（UserId为空时，使用Name和Mbile对应的员工）
                     * @return Mobile 员工手机号码，该字段需要与Name组合使用，UserId为空时该字段不能为空。（UserId为空时，使用Name和Mbile对应的员工）
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置员工手机号码，该字段需要与Name组合使用，UserId为空时该字段不能为空。（UserId为空时，使用Name和Mbile对应的员工）
                     * @param _mobile 员工手机号码，该字段需要与Name组合使用，UserId为空时该字段不能为空。（UserId为空时，使用Name和Mbile对应的员工）
                     * 
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     * 
                     */
                    bool MobileHasBeenSet() const;

                private:

                    /**
                     * 调用方用户信息，UserId 必填，支持填入集团子公司经办人UserId。
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 指定需要进行批量签署的流程id，数量1-100，填写后用户将通过链接对这些合同进行批量签署。
                     */
                    std::vector<std::string> m_flowIds;
                    bool m_flowIdsHasBeenSet;

                    /**
                     * 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 员工的UserId，该UserId对应的员工必须已经加入企业并实名，Name和Mobile为空时该字段不能为空。（优先使用UserId对应的员工）
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 员工姓名，该字段需要与Mobile组合使用，UserId为空时该字段不能为空。（UserId为空时，使用Name和Mbile对应的员工）
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 员工手机号码，该字段需要与Name组合使用，UserId为空时该字段不能为空。（UserId为空时，使用Name和Mbile对应的员工）
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEORGANIZATIONBATCHSIGNURLREQUEST_H_
