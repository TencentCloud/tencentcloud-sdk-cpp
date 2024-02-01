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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBECHANNELFLOWEVIDENCEREPORTREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBECHANNELFLOWEVIDENCEREPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
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
                * DescribeChannelFlowEvidenceReport请求参数结构体
                */
                class DescribeChannelFlowEvidenceReportRequest : public AbstractModel
                {
                public:
                    DescribeChannelFlowEvidenceReportRequest();
                    ~DescribeChannelFlowEvidenceReportRequest() = default;
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
                     * 获取签署报告编号, 由<a href="https://qian.tencent.com/developers/partnerApis/certificate/CreateChannelFlowEvidenceReport" target="_blank">提交申请出证报告任务</a>产生
                     * @return ReportId 签署报告编号, 由<a href="https://qian.tencent.com/developers/partnerApis/certificate/CreateChannelFlowEvidenceReport" target="_blank">提交申请出证报告任务</a>产生
                     * 
                     */
                    std::string GetReportId() const;

                    /**
                     * 设置签署报告编号, 由<a href="https://qian.tencent.com/developers/partnerApis/certificate/CreateChannelFlowEvidenceReport" target="_blank">提交申请出证报告任务</a>产生
                     * @param _reportId 签署报告编号, 由<a href="https://qian.tencent.com/developers/partnerApis/certificate/CreateChannelFlowEvidenceReport" target="_blank">提交申请出证报告任务</a>产生
                     * 
                     */
                    void SetReportId(const std::string& _reportId);

                    /**
                     * 判断参数 ReportId 是否已赋值
                     * @return ReportId 是否已赋值
                     * 
                     */
                    bool ReportIdHasBeenSet() const;

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
                     * 获取指定申请的报告类型，可选类型如下：
<ul><li> **0** :合同签署报告（默认）</li>
<li> **1** :公证处核验报告</li></ul>
                     * @return ReportType 指定申请的报告类型，可选类型如下：
<ul><li> **0** :合同签署报告（默认）</li>
<li> **1** :公证处核验报告</li></ul>
                     * 
                     */
                    int64_t GetReportType() const;

                    /**
                     * 设置指定申请的报告类型，可选类型如下：
<ul><li> **0** :合同签署报告（默认）</li>
<li> **1** :公证处核验报告</li></ul>
                     * @param _reportType 指定申请的报告类型，可选类型如下：
<ul><li> **0** :合同签署报告（默认）</li>
<li> **1** :公证处核验报告</li></ul>
                     * 
                     */
                    void SetReportType(const int64_t& _reportType);

                    /**
                     * 判断参数 ReportType 是否已赋值
                     * @return ReportType 是否已赋值
                     * 
                     */
                    bool ReportTypeHasBeenSet() const;

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
                     * 签署报告编号, 由<a href="https://qian.tencent.com/developers/partnerApis/certificate/CreateChannelFlowEvidenceReport" target="_blank">提交申请出证报告任务</a>产生
                     */
                    std::string m_reportId;
                    bool m_reportIdHasBeenSet;

                    /**
                     * 暂未开放
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 指定申请的报告类型，可选类型如下：
<ul><li> **0** :合同签署报告（默认）</li>
<li> **1** :公证处核验报告</li></ul>
                     */
                    int64_t m_reportType;
                    bool m_reportTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBECHANNELFLOWEVIDENCEREPORTREQUEST_H_
