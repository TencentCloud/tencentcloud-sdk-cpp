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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELBATCHCANCELFLOWSREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELBATCHCANCELFLOWSREQUEST_H_

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
                * ChannelBatchCancelFlows请求参数结构体
                */
                class ChannelBatchCancelFlowsRequest : public AbstractModel
                {
                public:
                    ChannelBatchCancelFlowsRequest();
                    ~ChannelBatchCancelFlowsRequest() = default;
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
                     * 获取签署流程Id数组，最多100个，超过100不处理
                     * @return FlowIds 签署流程Id数组，最多100个，超过100不处理
                     * 
                     */
                    std::vector<std::string> GetFlowIds() const;

                    /**
                     * 设置签署流程Id数组，最多100个，超过100不处理
                     * @param _flowIds 签署流程Id数组，最多100个，超过100不处理
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
                     * 获取撤销理由,不超过200个字符
                     * @return CancelMessage 撤销理由,不超过200个字符
                     * 
                     */
                    std::string GetCancelMessage() const;

                    /**
                     * 设置撤销理由,不超过200个字符
                     * @param _cancelMessage 撤销理由,不超过200个字符
                     * 
                     */
                    void SetCancelMessage(const std::string& _cancelMessage);

                    /**
                     * 判断参数 CancelMessage 是否已赋值
                     * @return CancelMessage 是否已赋值
                     * 
                     */
                    bool CancelMessageHasBeenSet() const;

                    /**
                     * 获取撤销理由自定义格式，支持以下格式
<ul><li>0 : 默认值</li>
<li>1 : 只保留身份信息</li>
<li>2 : 保留身份信息+企业名称</li>
<li>3 : 保留身份信息+企业名称+经办人名称</li></ul>
例如,假设合同的发起方是典子谦示例企业的经办人张三，撤销理由是"合同内容错误，需要修正",合同撤销后，各签署方看到的撤销理由是会是

0: 发起方-典子谦示例企业-张三以"合同内容错误，需要修正"的理由撤销当前合同
1: 发起方以"合同内容错误，需要修正"的理由撤销当前合同
2: 发起方-典子谦示例企业以"合同内容错误，需要修正"的理由撤销当前合同
3: 发起方-典子谦示例企业-张三以"合同内容错误，需要修正"的理由撤销当前合同</br>

备注:`如果不传递撤销理由，那么默认撤销理由是 "自动撤销（通过接口实现）"`
                     * @return CancelMessageFormat 撤销理由自定义格式，支持以下格式
<ul><li>0 : 默认值</li>
<li>1 : 只保留身份信息</li>
<li>2 : 保留身份信息+企业名称</li>
<li>3 : 保留身份信息+企业名称+经办人名称</li></ul>
例如,假设合同的发起方是典子谦示例企业的经办人张三，撤销理由是"合同内容错误，需要修正",合同撤销后，各签署方看到的撤销理由是会是

0: 发起方-典子谦示例企业-张三以"合同内容错误，需要修正"的理由撤销当前合同
1: 发起方以"合同内容错误，需要修正"的理由撤销当前合同
2: 发起方-典子谦示例企业以"合同内容错误，需要修正"的理由撤销当前合同
3: 发起方-典子谦示例企业-张三以"合同内容错误，需要修正"的理由撤销当前合同</br>

备注:`如果不传递撤销理由，那么默认撤销理由是 "自动撤销（通过接口实现）"`
                     * 
                     */
                    int64_t GetCancelMessageFormat() const;

                    /**
                     * 设置撤销理由自定义格式，支持以下格式
<ul><li>0 : 默认值</li>
<li>1 : 只保留身份信息</li>
<li>2 : 保留身份信息+企业名称</li>
<li>3 : 保留身份信息+企业名称+经办人名称</li></ul>
例如,假设合同的发起方是典子谦示例企业的经办人张三，撤销理由是"合同内容错误，需要修正",合同撤销后，各签署方看到的撤销理由是会是

0: 发起方-典子谦示例企业-张三以"合同内容错误，需要修正"的理由撤销当前合同
1: 发起方以"合同内容错误，需要修正"的理由撤销当前合同
2: 发起方-典子谦示例企业以"合同内容错误，需要修正"的理由撤销当前合同
3: 发起方-典子谦示例企业-张三以"合同内容错误，需要修正"的理由撤销当前合同</br>

备注:`如果不传递撤销理由，那么默认撤销理由是 "自动撤销（通过接口实现）"`
                     * @param _cancelMessageFormat 撤销理由自定义格式，支持以下格式
<ul><li>0 : 默认值</li>
<li>1 : 只保留身份信息</li>
<li>2 : 保留身份信息+企业名称</li>
<li>3 : 保留身份信息+企业名称+经办人名称</li></ul>
例如,假设合同的发起方是典子谦示例企业的经办人张三，撤销理由是"合同内容错误，需要修正",合同撤销后，各签署方看到的撤销理由是会是

0: 发起方-典子谦示例企业-张三以"合同内容错误，需要修正"的理由撤销当前合同
1: 发起方以"合同内容错误，需要修正"的理由撤销当前合同
2: 发起方-典子谦示例企业以"合同内容错误，需要修正"的理由撤销当前合同
3: 发起方-典子谦示例企业-张三以"合同内容错误，需要修正"的理由撤销当前合同</br>

备注:`如果不传递撤销理由，那么默认撤销理由是 "自动撤销（通过接口实现）"`
                     * 
                     */
                    void SetCancelMessageFormat(const int64_t& _cancelMessageFormat);

                    /**
                     * 判断参数 CancelMessageFormat 是否已赋值
                     * @return CancelMessageFormat 是否已赋值
                     * 
                     */
                    bool CancelMessageFormatHasBeenSet() const;

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

                private:

                    /**
                     * 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 必填。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 签署流程Id数组，最多100个，超过100不处理
                     */
                    std::vector<std::string> m_flowIds;
                    bool m_flowIdsHasBeenSet;

                    /**
                     * 撤销理由,不超过200个字符
                     */
                    std::string m_cancelMessage;
                    bool m_cancelMessageHasBeenSet;

                    /**
                     * 撤销理由自定义格式，支持以下格式
<ul><li>0 : 默认值</li>
<li>1 : 只保留身份信息</li>
<li>2 : 保留身份信息+企业名称</li>
<li>3 : 保留身份信息+企业名称+经办人名称</li></ul>
例如,假设合同的发起方是典子谦示例企业的经办人张三，撤销理由是"合同内容错误，需要修正",合同撤销后，各签署方看到的撤销理由是会是

0: 发起方-典子谦示例企业-张三以"合同内容错误，需要修正"的理由撤销当前合同
1: 发起方以"合同内容错误，需要修正"的理由撤销当前合同
2: 发起方-典子谦示例企业以"合同内容错误，需要修正"的理由撤销当前合同
3: 发起方-典子谦示例企业-张三以"合同内容错误，需要修正"的理由撤销当前合同</br>

备注:`如果不传递撤销理由，那么默认撤销理由是 "自动撤销（通过接口实现）"`
                     */
                    int64_t m_cancelMessageFormat;
                    bool m_cancelMessageFormatHasBeenSet;

                    /**
                     * 暂未开放
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELBATCHCANCELFLOWSREQUEST_H_
