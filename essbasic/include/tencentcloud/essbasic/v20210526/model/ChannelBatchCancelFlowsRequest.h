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
                     * 获取应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     * @return Agent 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     * @param Agent 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取签署流程Id数组，最多100个，超过100不处理
                     * @return FlowIds 签署流程Id数组，最多100个，超过100不处理
                     */
                    std::vector<std::string> GetFlowIds() const;

                    /**
                     * 设置签署流程Id数组，最多100个，超过100不处理
                     * @param FlowIds 签署流程Id数组，最多100个，超过100不处理
                     */
                    void SetFlowIds(const std::vector<std::string>& _flowIds);

                    /**
                     * 判断参数 FlowIds 是否已赋值
                     * @return FlowIds 是否已赋值
                     */
                    bool FlowIdsHasBeenSet() const;

                    /**
                     * 获取撤销理由,不超过200个字符
                     * @return CancelMessage 撤销理由,不超过200个字符
                     */
                    std::string GetCancelMessage() const;

                    /**
                     * 设置撤销理由,不超过200个字符
                     * @param CancelMessage 撤销理由,不超过200个字符
                     */
                    void SetCancelMessage(const std::string& _cancelMessage);

                    /**
                     * 判断参数 CancelMessage 是否已赋值
                     * @return CancelMessage 是否已赋值
                     */
                    bool CancelMessageHasBeenSet() const;

                    /**
                     * 获取撤销理由自定义格式；选项：
0 默认格式
1 只保留身份信息：展示为【发起方】
2 保留身份信息+企业名称：展示为【发起方xxx公司】
3 保留身份信息+企业名称+经办人名称：展示为【发起方xxxx公司-经办人姓名】
                     * @return CancelMessageFormat 撤销理由自定义格式；选项：
0 默认格式
1 只保留身份信息：展示为【发起方】
2 保留身份信息+企业名称：展示为【发起方xxx公司】
3 保留身份信息+企业名称+经办人名称：展示为【发起方xxxx公司-经办人姓名】
                     */
                    int64_t GetCancelMessageFormat() const;

                    /**
                     * 设置撤销理由自定义格式；选项：
0 默认格式
1 只保留身份信息：展示为【发起方】
2 保留身份信息+企业名称：展示为【发起方xxx公司】
3 保留身份信息+企业名称+经办人名称：展示为【发起方xxxx公司-经办人姓名】
                     * @param CancelMessageFormat 撤销理由自定义格式；选项：
0 默认格式
1 只保留身份信息：展示为【发起方】
2 保留身份信息+企业名称：展示为【发起方xxx公司】
3 保留身份信息+企业名称+经办人名称：展示为【发起方xxxx公司-经办人姓名】
                     */
                    void SetCancelMessageFormat(const int64_t& _cancelMessageFormat);

                    /**
                     * 判断参数 CancelMessageFormat 是否已赋值
                     * @return CancelMessageFormat 是否已赋值
                     */
                    bool CancelMessageFormatHasBeenSet() const;

                    /**
                     * 获取暂未开放
                     * @return Operator 暂未开放
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置暂未开放
                     * @param Operator 暂未开放
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
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
                     * 撤销理由自定义格式；选项：
0 默认格式
1 只保留身份信息：展示为【发起方】
2 保留身份信息+企业名称：展示为【发起方xxx公司】
3 保留身份信息+企业名称+经办人名称：展示为【发起方xxxx公司-经办人姓名】
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
