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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEORGANIZATIONBATCHSIGNURLREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEORGANIZATIONBATCHSIGNURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>
#include <tencentcloud/ess/v20201111/model/DynamicSignOption.h>


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
                     * 获取<p>执行本接口操作的员工信息。使用此接口时，必须填写userId。<br>支持填入集团子公司经办人 userId 代发合同。</p><p>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * @return Operator <p>执行本接口操作的员工信息。使用此接口时，必须填写userId。<br>支持填入集团子公司经办人 userId 代发合同。</p><p>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置<p>执行本接口操作的员工信息。使用此接口时，必须填写userId。<br>支持填入集团子公司经办人 userId 代发合同。</p><p>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * @param _operator <p>执行本接口操作的员工信息。使用此接口时，必须填写userId。<br>支持填入集团子公司经办人 userId 代发合同。</p><p>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
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
                     * 获取<p>请指定需执行批量签署的流程ID，数量范围为1-100。您可登录腾讯电子签控制台，浏览 &quot;合同&quot;-&gt;&quot;合同中心&quot; 以查阅某一合同的FlowId（在页面中显示为合同ID）。用户将利用链接对这些合同实施批量操作。  注：生成动态签署方领取时此参数必传。</p>
                     * @return FlowIds <p>请指定需执行批量签署的流程ID，数量范围为1-100。您可登录腾讯电子签控制台，浏览 &quot;合同&quot;-&gt;&quot;合同中心&quot; 以查阅某一合同的FlowId（在页面中显示为合同ID）。用户将利用链接对这些合同实施批量操作。  注：生成动态签署方领取时此参数必传。</p>
                     * 
                     */
                    std::vector<std::string> GetFlowIds() const;

                    /**
                     * 设置<p>请指定需执行批量签署的流程ID，数量范围为1-100。您可登录腾讯电子签控制台，浏览 &quot;合同&quot;-&gt;&quot;合同中心&quot; 以查阅某一合同的FlowId（在页面中显示为合同ID）。用户将利用链接对这些合同实施批量操作。  注：生成动态签署方领取时此参数必传。</p>
                     * @param _flowIds <p>请指定需执行批量签署的流程ID，数量范围为1-100。您可登录腾讯电子签控制台，浏览 &quot;合同&quot;-&gt;&quot;合同中心&quot; 以查阅某一合同的FlowId（在页面中显示为合同ID）。用户将利用链接对这些合同实施批量操作。  注：生成动态签署方领取时此参数必传。</p>
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
                     * 获取<p>员工在腾讯电子签平台的独特身份标识，为32位字符串。<br>您可登录腾讯电子签控制台，在 &quot;更多能力&quot;-&gt;&quot;组织管理&quot; 中查阅某位员工的UserId（在页面中显示为用户ID）。<br>UserId必须是传入合同（FlowId）中的签署人。</p><ul><li>1. 若UserId为空，Name和Mobile 必须提供。</li><li>2. 若UserId 与 Name，Mobile均存在，将优先采用UserId对应的员工。</li></ul>
                     * @return UserId <p>员工在腾讯电子签平台的独特身份标识，为32位字符串。<br>您可登录腾讯电子签控制台，在 &quot;更多能力&quot;-&gt;&quot;组织管理&quot; 中查阅某位员工的UserId（在页面中显示为用户ID）。<br>UserId必须是传入合同（FlowId）中的签署人。</p><ul><li>1. 若UserId为空，Name和Mobile 必须提供。</li><li>2. 若UserId 与 Name，Mobile均存在，将优先采用UserId对应的员工。</li></ul>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>员工在腾讯电子签平台的独特身份标识，为32位字符串。<br>您可登录腾讯电子签控制台，在 &quot;更多能力&quot;-&gt;&quot;组织管理&quot; 中查阅某位员工的UserId（在页面中显示为用户ID）。<br>UserId必须是传入合同（FlowId）中的签署人。</p><ul><li>1. 若UserId为空，Name和Mobile 必须提供。</li><li>2. 若UserId 与 Name，Mobile均存在，将优先采用UserId对应的员工。</li></ul>
                     * @param _userId <p>员工在腾讯电子签平台的独特身份标识，为32位字符串。<br>您可登录腾讯电子签控制台，在 &quot;更多能力&quot;-&gt;&quot;组织管理&quot; 中查阅某位员工的UserId（在页面中显示为用户ID）。<br>UserId必须是传入合同（FlowId）中的签署人。</p><ul><li>1. 若UserId为空，Name和Mobile 必须提供。</li><li>2. 若UserId 与 Name，Mobile均存在，将优先采用UserId对应的员工。</li></ul>
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
                     * 获取<p>员工姓名，必须与手机号码一起使用。<br>如果UserId为空，则此字段不能为空。同时，姓名和手机号码必须与传入合同（FlowId）中的签署人信息一致。</p>
                     * @return Name <p>员工姓名，必须与手机号码一起使用。<br>如果UserId为空，则此字段不能为空。同时，姓名和手机号码必须与传入合同（FlowId）中的签署人信息一致。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>员工姓名，必须与手机号码一起使用。<br>如果UserId为空，则此字段不能为空。同时，姓名和手机号码必须与传入合同（FlowId）中的签署人信息一致。</p>
                     * @param _name <p>员工姓名，必须与手机号码一起使用。<br>如果UserId为空，则此字段不能为空。同时，姓名和手机号码必须与传入合同（FlowId）中的签署人信息一致。</p>
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
                     * 获取<p>员工手机号，必须与姓名一起使用。<br> 如果UserId为空，则此字段不能为空。同时，姓名和手机号码必须与传入合同（FlowId）中的签署人信息一致。</p>
                     * @return Mobile <p>员工手机号，必须与姓名一起使用。<br> 如果UserId为空，则此字段不能为空。同时，姓名和手机号码必须与传入合同（FlowId）中的签署人信息一致。</p>
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置<p>员工手机号，必须与姓名一起使用。<br> 如果UserId为空，则此字段不能为空。同时，姓名和手机号码必须与传入合同（FlowId）中的签署人信息一致。</p>
                     * @param _mobile <p>员工手机号，必须与姓名一起使用。<br> 如果UserId为空，则此字段不能为空。同时，姓名和手机号码必须与传入合同（FlowId）中的签署人信息一致。</p>
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
                     * 获取<p>为签署方经办人在签署合同中的参与方ID，必须与参数FlowIds数组一一对应。您可以通过查询合同接口（DescribeFlowInfo）查询此参数。若传了此参数，则可以不传 UserId, Name, Mobile等参数  注：生成动态签署方领取时此参数必传。</p>
                     * @return RecipientIds <p>为签署方经办人在签署合同中的参与方ID，必须与参数FlowIds数组一一对应。您可以通过查询合同接口（DescribeFlowInfo）查询此参数。若传了此参数，则可以不传 UserId, Name, Mobile等参数  注：生成动态签署方领取时此参数必传。</p>
                     * 
                     */
                    std::vector<std::string> GetRecipientIds() const;

                    /**
                     * 设置<p>为签署方经办人在签署合同中的参与方ID，必须与参数FlowIds数组一一对应。您可以通过查询合同接口（DescribeFlowInfo）查询此参数。若传了此参数，则可以不传 UserId, Name, Mobile等参数  注：生成动态签署方领取时此参数必传。</p>
                     * @param _recipientIds <p>为签署方经办人在签署合同中的参与方ID，必须与参数FlowIds数组一一对应。您可以通过查询合同接口（DescribeFlowInfo）查询此参数。若传了此参数，则可以不传 UserId, Name, Mobile等参数  注：生成动态签署方领取时此参数必传。</p>
                     * 
                     */
                    void SetRecipientIds(const std::vector<std::string>& _recipientIds);

                    /**
                     * 判断参数 RecipientIds 是否已赋值
                     * @return RecipientIds 是否已赋值
                     * 
                     */
                    bool RecipientIdsHasBeenSet() const;

                    /**
                     * 获取<p>合同组Id，传入此参数则可以不传FlowIds</p>
                     * @return FlowGroupId <p>合同组Id，传入此参数则可以不传FlowIds</p>
                     * 
                     */
                    std::string GetFlowGroupId() const;

                    /**
                     * 设置<p>合同组Id，传入此参数则可以不传FlowIds</p>
                     * @param _flowGroupId <p>合同组Id，传入此参数则可以不传FlowIds</p>
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
                     * 获取<p>是否允许此链接中签署方批量拒签。 <ul><li>false (默认): 不允许批量拒签</li> <li>true : 允许批量拒签。</li></ul></p>
                     * @return CanBatchReject <p>是否允许此链接中签署方批量拒签。 <ul><li>false (默认): 不允许批量拒签</li> <li>true : 允许批量拒签。</li></ul></p>
                     * 
                     */
                    bool GetCanBatchReject() const;

                    /**
                     * 设置<p>是否允许此链接中签署方批量拒签。 <ul><li>false (默认): 不允许批量拒签</li> <li>true : 允许批量拒签。</li></ul></p>
                     * @param _canBatchReject <p>是否允许此链接中签署方批量拒签。 <ul><li>false (默认): 不允许批量拒签</li> <li>true : 允许批量拒签。</li></ul></p>
                     * 
                     */
                    void SetCanBatchReject(const bool& _canBatchReject);

                    /**
                     * 判断参数 CanBatchReject 是否已赋值
                     * @return CanBatchReject 是否已赋值
                     * 
                     */
                    bool CanBatchRejectHasBeenSet() const;

                    /**
                     * 获取<p>动态签署方领取链接配置。</p>
                     * @return DynamicSignOption <p>动态签署方领取链接配置。</p>
                     * 
                     */
                    DynamicSignOption GetDynamicSignOption() const;

                    /**
                     * 设置<p>动态签署方领取链接配置。</p>
                     * @param _dynamicSignOption <p>动态签署方领取链接配置。</p>
                     * 
                     */
                    void SetDynamicSignOption(const DynamicSignOption& _dynamicSignOption);

                    /**
                     * 判断参数 DynamicSignOption 是否已赋值
                     * @return DynamicSignOption 是否已赋值
                     * 
                     */
                    bool DynamicSignOptionHasBeenSet() const;

                private:

                    /**
                     * <p>执行本接口操作的员工信息。使用此接口时，必须填写userId。<br>支持填入集团子公司经办人 userId 代发合同。</p><p>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>请指定需执行批量签署的流程ID，数量范围为1-100。您可登录腾讯电子签控制台，浏览 &quot;合同&quot;-&gt;&quot;合同中心&quot; 以查阅某一合同的FlowId（在页面中显示为合同ID）。用户将利用链接对这些合同实施批量操作。  注：生成动态签署方领取时此参数必传。</p>
                     */
                    std::vector<std::string> m_flowIds;
                    bool m_flowIdsHasBeenSet;

                    /**
                     * <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>员工在腾讯电子签平台的独特身份标识，为32位字符串。<br>您可登录腾讯电子签控制台，在 &quot;更多能力&quot;-&gt;&quot;组织管理&quot; 中查阅某位员工的UserId（在页面中显示为用户ID）。<br>UserId必须是传入合同（FlowId）中的签署人。</p><ul><li>1. 若UserId为空，Name和Mobile 必须提供。</li><li>2. 若UserId 与 Name，Mobile均存在，将优先采用UserId对应的员工。</li></ul>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>员工姓名，必须与手机号码一起使用。<br>如果UserId为空，则此字段不能为空。同时，姓名和手机号码必须与传入合同（FlowId）中的签署人信息一致。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>员工手机号，必须与姓名一起使用。<br> 如果UserId为空，则此字段不能为空。同时，姓名和手机号码必须与传入合同（FlowId）中的签署人信息一致。</p>
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * <p>为签署方经办人在签署合同中的参与方ID，必须与参数FlowIds数组一一对应。您可以通过查询合同接口（DescribeFlowInfo）查询此参数。若传了此参数，则可以不传 UserId, Name, Mobile等参数  注：生成动态签署方领取时此参数必传。</p>
                     */
                    std::vector<std::string> m_recipientIds;
                    bool m_recipientIdsHasBeenSet;

                    /**
                     * <p>合同组Id，传入此参数则可以不传FlowIds</p>
                     */
                    std::string m_flowGroupId;
                    bool m_flowGroupIdHasBeenSet;

                    /**
                     * <p>是否允许此链接中签署方批量拒签。 <ul><li>false (默认): 不允许批量拒签</li> <li>true : 允许批量拒签。</li></ul></p>
                     */
                    bool m_canBatchReject;
                    bool m_canBatchRejectHasBeenSet;

                    /**
                     * <p>动态签署方领取链接配置。</p>
                     */
                    DynamicSignOption m_dynamicSignOption;
                    bool m_dynamicSignOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEORGANIZATIONBATCHSIGNURLREQUEST_H_
