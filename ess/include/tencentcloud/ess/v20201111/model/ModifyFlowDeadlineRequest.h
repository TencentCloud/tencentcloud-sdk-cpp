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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_MODIFYFLOWDEADLINEREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_MODIFYFLOWDEADLINEREQUEST_H_

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
                * ModifyFlowDeadline请求参数结构体
                */
                class ModifyFlowDeadlineRequest : public AbstractModel
                {
                public:
                    ModifyFlowDeadlineRequest();
                    ~ModifyFlowDeadlineRequest() = default;
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
                     * 获取合同流程ID，为32位字符串。
<ul><li>建议开发者妥善保存此流程ID，以便于顺利进行后续操作。</li>
<li>可登录腾讯电子签控制台，在 "合同"->"合同中心" 中查看某个合同的FlowId(在页面中展示为合同ID)。</li></ul>
                     * @return FlowId 合同流程ID，为32位字符串。
<ul><li>建议开发者妥善保存此流程ID，以便于顺利进行后续操作。</li>
<li>可登录腾讯电子签控制台，在 "合同"->"合同中心" 中查看某个合同的FlowId(在页面中展示为合同ID)。</li></ul>
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置合同流程ID，为32位字符串。
<ul><li>建议开发者妥善保存此流程ID，以便于顺利进行后续操作。</li>
<li>可登录腾讯电子签控制台，在 "合同"->"合同中心" 中查看某个合同的FlowId(在页面中展示为合同ID)。</li></ul>
                     * @param _flowId 合同流程ID，为32位字符串。
<ul><li>建议开发者妥善保存此流程ID，以便于顺利进行后续操作。</li>
<li>可登录腾讯电子签控制台，在 "合同"->"合同中心" 中查看某个合同的FlowId(在页面中展示为合同ID)。</li></ul>
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
                     * 获取签署流程或签署人新的签署截止时间，格式为Unix标准时间戳（秒）
                     * @return Deadline 签署流程或签署人新的签署截止时间，格式为Unix标准时间戳（秒）
                     * 
                     */
                    int64_t GetDeadline() const;

                    /**
                     * 设置签署流程或签署人新的签署截止时间，格式为Unix标准时间戳（秒）
                     * @param _deadline 签署流程或签署人新的签署截止时间，格式为Unix标准时间戳（秒）
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
                     * 获取签署方角色编号，为32位字符串
<ul><li>若指定了此参数，则只调整签署流程中此签署人的签署截止时间，否则调整合同整体的签署截止时间（合同截止时间+发起时未设置签署人截止时间的参与人的签署截止时间）</li>
<li>通过[用PDF文件创建签署流程](https://qian.tencent.com/developers/companyApis/startFlows/CreateFlowByFiles)发起合同，或通过[模板发起合同-创建电子文档](https://qian.tencent.com/developers/companyApis/startFlows/CreateDocument)时，返回参数[Approvers](https://qian.tencent.com/developers/companyApis/dataTypes/#approveritem)会返回此信息，建议开发者妥善保存</li>
<li>也可通过[查询合同流程的详情信息](https://qian.tencent.com/developers/companyApis/queryFlows/DescribeFlowInfo)接口查询签署人的RecipientId编号</li></ul>
                     * @return RecipientId 签署方角色编号，为32位字符串
<ul><li>若指定了此参数，则只调整签署流程中此签署人的签署截止时间，否则调整合同整体的签署截止时间（合同截止时间+发起时未设置签署人截止时间的参与人的签署截止时间）</li>
<li>通过[用PDF文件创建签署流程](https://qian.tencent.com/developers/companyApis/startFlows/CreateFlowByFiles)发起合同，或通过[模板发起合同-创建电子文档](https://qian.tencent.com/developers/companyApis/startFlows/CreateDocument)时，返回参数[Approvers](https://qian.tencent.com/developers/companyApis/dataTypes/#approveritem)会返回此信息，建议开发者妥善保存</li>
<li>也可通过[查询合同流程的详情信息](https://qian.tencent.com/developers/companyApis/queryFlows/DescribeFlowInfo)接口查询签署人的RecipientId编号</li></ul>
                     * 
                     */
                    std::string GetRecipientId() const;

                    /**
                     * 设置签署方角色编号，为32位字符串
<ul><li>若指定了此参数，则只调整签署流程中此签署人的签署截止时间，否则调整合同整体的签署截止时间（合同截止时间+发起时未设置签署人截止时间的参与人的签署截止时间）</li>
<li>通过[用PDF文件创建签署流程](https://qian.tencent.com/developers/companyApis/startFlows/CreateFlowByFiles)发起合同，或通过[模板发起合同-创建电子文档](https://qian.tencent.com/developers/companyApis/startFlows/CreateDocument)时，返回参数[Approvers](https://qian.tencent.com/developers/companyApis/dataTypes/#approveritem)会返回此信息，建议开发者妥善保存</li>
<li>也可通过[查询合同流程的详情信息](https://qian.tencent.com/developers/companyApis/queryFlows/DescribeFlowInfo)接口查询签署人的RecipientId编号</li></ul>
                     * @param _recipientId 签署方角色编号，为32位字符串
<ul><li>若指定了此参数，则只调整签署流程中此签署人的签署截止时间，否则调整合同整体的签署截止时间（合同截止时间+发起时未设置签署人截止时间的参与人的签署截止时间）</li>
<li>通过[用PDF文件创建签署流程](https://qian.tencent.com/developers/companyApis/startFlows/CreateFlowByFiles)发起合同，或通过[模板发起合同-创建电子文档](https://qian.tencent.com/developers/companyApis/startFlows/CreateDocument)时，返回参数[Approvers](https://qian.tencent.com/developers/companyApis/dataTypes/#approveritem)会返回此信息，建议开发者妥善保存</li>
<li>也可通过[查询合同流程的详情信息](https://qian.tencent.com/developers/companyApis/queryFlows/DescribeFlowInfo)接口查询签署人的RecipientId编号</li></ul>
                     * 
                     */
                    void SetRecipientId(const std::string& _recipientId);

                    /**
                     * 判断参数 RecipientId 是否已赋值
                     * @return RecipientId 是否已赋值
                     * 
                     */
                    bool RecipientIdHasBeenSet() const;

                private:

                    /**
                     * 执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 合同流程ID，为32位字符串。
<ul><li>建议开发者妥善保存此流程ID，以便于顺利进行后续操作。</li>
<li>可登录腾讯电子签控制台，在 "合同"->"合同中心" 中查看某个合同的FlowId(在页面中展示为合同ID)。</li></ul>
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 签署流程或签署人新的签署截止时间，格式为Unix标准时间戳（秒）
                     */
                    int64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 签署方角色编号，为32位字符串
<ul><li>若指定了此参数，则只调整签署流程中此签署人的签署截止时间，否则调整合同整体的签署截止时间（合同截止时间+发起时未设置签署人截止时间的参与人的签署截止时间）</li>
<li>通过[用PDF文件创建签署流程](https://qian.tencent.com/developers/companyApis/startFlows/CreateFlowByFiles)发起合同，或通过[模板发起合同-创建电子文档](https://qian.tencent.com/developers/companyApis/startFlows/CreateDocument)时，返回参数[Approvers](https://qian.tencent.com/developers/companyApis/dataTypes/#approveritem)会返回此信息，建议开发者妥善保存</li>
<li>也可通过[查询合同流程的详情信息](https://qian.tencent.com/developers/companyApis/queryFlows/DescribeFlowInfo)接口查询签署人的RecipientId编号</li></ul>
                     */
                    std::string m_recipientId;
                    bool m_recipientIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_MODIFYFLOWDEADLINEREQUEST_H_
