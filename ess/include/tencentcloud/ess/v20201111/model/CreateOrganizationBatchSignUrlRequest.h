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
                     * 获取执行本接口操作的员工信息。使用此接口时，必须填写userId。
支持填入集团子公司经办人 userId 代发合同。

注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @return Operator 执行本接口操作的员工信息。使用此接口时，必须填写userId。
支持填入集团子公司经办人 userId 代发合同。

注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置执行本接口操作的员工信息。使用此接口时，必须填写userId。
支持填入集团子公司经办人 userId 代发合同。

注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @param _operator 执行本接口操作的员工信息。使用此接口时，必须填写userId。
支持填入集团子公司经办人 userId 代发合同。

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
                     * 获取请指定需执行批量签署的流程ID，数量范围为1-100。
您可登录腾讯电子签控制台，浏览 "合同"->"合同中心" 以查阅某一合同的FlowId（在页面中显示为合同ID）。
用户将利用链接对这些合同实施批量操作。
                     * @return FlowIds 请指定需执行批量签署的流程ID，数量范围为1-100。
您可登录腾讯电子签控制台，浏览 "合同"->"合同中心" 以查阅某一合同的FlowId（在页面中显示为合同ID）。
用户将利用链接对这些合同实施批量操作。
                     * 
                     */
                    std::vector<std::string> GetFlowIds() const;

                    /**
                     * 设置请指定需执行批量签署的流程ID，数量范围为1-100。
您可登录腾讯电子签控制台，浏览 "合同"->"合同中心" 以查阅某一合同的FlowId（在页面中显示为合同ID）。
用户将利用链接对这些合同实施批量操作。
                     * @param _flowIds 请指定需执行批量签署的流程ID，数量范围为1-100。
您可登录腾讯电子签控制台，浏览 "合同"->"合同中心" 以查阅某一合同的FlowId（在页面中显示为合同ID）。
用户将利用链接对这些合同实施批量操作。
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
                     * 获取代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * @return Agent 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * @param _agent 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
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
                     * 获取员工在腾讯电子签平台的独特身份标识，为32位字符串。
您可登录腾讯电子签控制台，在 "更多能力"->"组织管理" 中查阅某位员工的UserId（在页面中显示为用户ID）。
UserId必须是传入合同（FlowId）中的签署人。

<ul>
<li>1. 若UserId为空，Name和Mobile 必须提供。</li>
<li>2. 若UserId 与 Name，Mobile均存在，将优先采用UserId对应的员工。</li>
</ul>
                     * @return UserId 员工在腾讯电子签平台的独特身份标识，为32位字符串。
您可登录腾讯电子签控制台，在 "更多能力"->"组织管理" 中查阅某位员工的UserId（在页面中显示为用户ID）。
UserId必须是传入合同（FlowId）中的签署人。

<ul>
<li>1. 若UserId为空，Name和Mobile 必须提供。</li>
<li>2. 若UserId 与 Name，Mobile均存在，将优先采用UserId对应的员工。</li>
</ul>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置员工在腾讯电子签平台的独特身份标识，为32位字符串。
您可登录腾讯电子签控制台，在 "更多能力"->"组织管理" 中查阅某位员工的UserId（在页面中显示为用户ID）。
UserId必须是传入合同（FlowId）中的签署人。

<ul>
<li>1. 若UserId为空，Name和Mobile 必须提供。</li>
<li>2. 若UserId 与 Name，Mobile均存在，将优先采用UserId对应的员工。</li>
</ul>
                     * @param _userId 员工在腾讯电子签平台的独特身份标识，为32位字符串。
您可登录腾讯电子签控制台，在 "更多能力"->"组织管理" 中查阅某位员工的UserId（在页面中显示为用户ID）。
UserId必须是传入合同（FlowId）中的签署人。

<ul>
<li>1. 若UserId为空，Name和Mobile 必须提供。</li>
<li>2. 若UserId 与 Name，Mobile均存在，将优先采用UserId对应的员工。</li>
</ul>
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
                     * 获取员工姓名，必须与手机号码一起使用。
如果UserId为空，则此字段不能为空。同时，姓名和手机号码必须与传入合同（FlowId）中的签署人信息一致。
                     * @return Name 员工姓名，必须与手机号码一起使用。
如果UserId为空，则此字段不能为空。同时，姓名和手机号码必须与传入合同（FlowId）中的签署人信息一致。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置员工姓名，必须与手机号码一起使用。
如果UserId为空，则此字段不能为空。同时，姓名和手机号码必须与传入合同（FlowId）中的签署人信息一致。
                     * @param _name 员工姓名，必须与手机号码一起使用。
如果UserId为空，则此字段不能为空。同时，姓名和手机号码必须与传入合同（FlowId）中的签署人信息一致。
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
                     * 获取员工手机号，必须与姓名一起使用。
 如果UserId为空，则此字段不能为空。同时，姓名和手机号码必须与传入合同（FlowId）中的签署人信息一致。
                     * @return Mobile 员工手机号，必须与姓名一起使用。
 如果UserId为空，则此字段不能为空。同时，姓名和手机号码必须与传入合同（FlowId）中的签署人信息一致。
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置员工手机号，必须与姓名一起使用。
 如果UserId为空，则此字段不能为空。同时，姓名和手机号码必须与传入合同（FlowId）中的签署人信息一致。
                     * @param _mobile 员工手机号，必须与姓名一起使用。
 如果UserId为空，则此字段不能为空。同时，姓名和手机号码必须与传入合同（FlowId）中的签署人信息一致。
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
                     * 获取为签署方经办人在签署合同中的参与方ID，必须与参数FlowIds数组一一对应。
您可以通过查询合同接口（DescribeFlowInfo）查询此参数。
若传了此参数，则可以不传 UserId, Name, Mobile等参数
                     * @return RecipientIds 为签署方经办人在签署合同中的参与方ID，必须与参数FlowIds数组一一对应。
您可以通过查询合同接口（DescribeFlowInfo）查询此参数。
若传了此参数，则可以不传 UserId, Name, Mobile等参数
                     * 
                     */
                    std::vector<std::string> GetRecipientIds() const;

                    /**
                     * 设置为签署方经办人在签署合同中的参与方ID，必须与参数FlowIds数组一一对应。
您可以通过查询合同接口（DescribeFlowInfo）查询此参数。
若传了此参数，则可以不传 UserId, Name, Mobile等参数
                     * @param _recipientIds 为签署方经办人在签署合同中的参与方ID，必须与参数FlowIds数组一一对应。
您可以通过查询合同接口（DescribeFlowInfo）查询此参数。
若传了此参数，则可以不传 UserId, Name, Mobile等参数
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
                     * 获取合同组Id，传入此参数则可以不传FlowIds
                     * @return FlowGroupId 合同组Id，传入此参数则可以不传FlowIds
                     * 
                     */
                    std::string GetFlowGroupId() const;

                    /**
                     * 设置合同组Id，传入此参数则可以不传FlowIds
                     * @param _flowGroupId 合同组Id，传入此参数则可以不传FlowIds
                     * 
                     */
                    void SetFlowGroupId(const std::string& _flowGroupId);

                    /**
                     * 判断参数 FlowGroupId 是否已赋值
                     * @return FlowGroupId 是否已赋值
                     * 
                     */
                    bool FlowGroupIdHasBeenSet() const;

                private:

                    /**
                     * 执行本接口操作的员工信息。使用此接口时，必须填写userId。
支持填入集团子公司经办人 userId 代发合同。

注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 请指定需执行批量签署的流程ID，数量范围为1-100。
您可登录腾讯电子签控制台，浏览 "合同"->"合同中心" 以查阅某一合同的FlowId（在页面中显示为合同ID）。
用户将利用链接对这些合同实施批量操作。
                     */
                    std::vector<std::string> m_flowIds;
                    bool m_flowIdsHasBeenSet;

                    /**
                     * 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 员工在腾讯电子签平台的独特身份标识，为32位字符串。
您可登录腾讯电子签控制台，在 "更多能力"->"组织管理" 中查阅某位员工的UserId（在页面中显示为用户ID）。
UserId必须是传入合同（FlowId）中的签署人。

<ul>
<li>1. 若UserId为空，Name和Mobile 必须提供。</li>
<li>2. 若UserId 与 Name，Mobile均存在，将优先采用UserId对应的员工。</li>
</ul>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 员工姓名，必须与手机号码一起使用。
如果UserId为空，则此字段不能为空。同时，姓名和手机号码必须与传入合同（FlowId）中的签署人信息一致。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 员工手机号，必须与姓名一起使用。
 如果UserId为空，则此字段不能为空。同时，姓名和手机号码必须与传入合同（FlowId）中的签署人信息一致。
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 为签署方经办人在签署合同中的参与方ID，必须与参数FlowIds数组一一对应。
您可以通过查询合同接口（DescribeFlowInfo）查询此参数。
若传了此参数，则可以不传 UserId, Name, Mobile等参数
                     */
                    std::vector<std::string> m_recipientIds;
                    bool m_recipientIdsHasBeenSet;

                    /**
                     * 合同组Id，传入此参数则可以不传FlowIds
                     */
                    std::string m_flowGroupId;
                    bool m_flowGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEORGANIZATIONBATCHSIGNURLREQUEST_H_
