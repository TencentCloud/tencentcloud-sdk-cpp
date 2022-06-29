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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEFLOWBYFILESREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEFLOWBYFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
#include <tencentcloud/essbasic/v20210526/model/UserInfo.h>
#include <tencentcloud/essbasic/v20210526/model/FlowApproverInfo.h>
#include <tencentcloud/essbasic/v20210526/model/Component.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * ChannelCreateFlowByFiles请求参数结构体
                */
                class ChannelCreateFlowByFilesRequest : public AbstractModel
                {
                public:
                    ChannelCreateFlowByFilesRequest();
                    ~ChannelCreateFlowByFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取渠道应用相关信息
                     * @return Agent 渠道应用相关信息
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置渠道应用相关信息
                     * @param Agent 渠道应用相关信息
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取操作者的信息
                     * @return Operator 操作者的信息
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作者的信息
                     * @param Operator 操作者的信息
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取签署文件资源Id列表，目前仅支持单个文件
                     * @return FileIds 签署文件资源Id列表，目前仅支持单个文件
                     */
                    std::vector<std::string> GetFileIds() const;

                    /**
                     * 设置签署文件资源Id列表，目前仅支持单个文件
                     * @param FileIds 签署文件资源Id列表，目前仅支持单个文件
                     */
                    void SetFileIds(const std::vector<std::string>& _fileIds);

                    /**
                     * 判断参数 FileIds 是否已赋值
                     * @return FileIds 是否已赋值
                     */
                    bool FileIdsHasBeenSet() const;

                    /**
                     * 获取流程名称，长度不超过200个字符
                     * @return FlowName 流程名称，长度不超过200个字符
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置流程名称，长度不超过200个字符
                     * @param FlowName 流程名称，长度不超过200个字符
                     */
                    void SetFlowName(const std::string& _flowName);

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     */
                    bool FlowNameHasBeenSet() const;

                    /**
                     * 获取流程截止时间，十位数时间戳，最大值为33162419560，即3020年
                     * @return Deadline 流程截止时间，十位数时间戳，最大值为33162419560，即3020年
                     */
                    int64_t GetDeadline() const;

                    /**
                     * 设置流程截止时间，十位数时间戳，最大值为33162419560，即3020年
                     * @param Deadline 流程截止时间，十位数时间戳，最大值为33162419560，即3020年
                     */
                    void SetDeadline(const int64_t& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取流程的描述，长度不超过1000个字符
                     * @return FlowDescription 流程的描述，长度不超过1000个字符
                     */
                    std::string GetFlowDescription() const;

                    /**
                     * 设置流程的描述，长度不超过1000个字符
                     * @param FlowDescription 流程的描述，长度不超过1000个字符
                     */
                    void SetFlowDescription(const std::string& _flowDescription);

                    /**
                     * 判断参数 FlowDescription 是否已赋值
                     * @return FlowDescription 是否已赋值
                     */
                    bool FlowDescriptionHasBeenSet() const;

                    /**
                     * 获取流程的类型，长度不超过255个字符
                     * @return FlowType 流程的类型，长度不超过255个字符
                     */
                    std::string GetFlowType() const;

                    /**
                     * 设置流程的类型，长度不超过255个字符
                     * @param FlowType 流程的类型，长度不超过255个字符
                     */
                    void SetFlowType(const std::string& _flowType);

                    /**
                     * 判断参数 FlowType 是否已赋值
                     * @return FlowType 是否已赋值
                     */
                    bool FlowTypeHasBeenSet() const;

                    /**
                     * 获取流程回调地址，长度不超过255个字符
                     * @return CallbackUrl 流程回调地址，长度不超过255个字符
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置流程回调地址，长度不超过255个字符
                     * @param CallbackUrl 流程回调地址，长度不超过255个字符
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取流程签约方列表，最多不超过5个参与方
                     * @return FlowApprovers 流程签约方列表，最多不超过5个参与方
                     */
                    std::vector<FlowApproverInfo> GetFlowApprovers() const;

                    /**
                     * 设置流程签约方列表，最多不超过5个参与方
                     * @param FlowApprovers 流程签约方列表，最多不超过5个参与方
                     */
                    void SetFlowApprovers(const std::vector<FlowApproverInfo>& _flowApprovers);

                    /**
                     * 判断参数 FlowApprovers 是否已赋值
                     * @return FlowApprovers 是否已赋值
                     */
                    bool FlowApproversHasBeenSet() const;

                    /**
                     * 获取合同签署顺序类型(无序签,顺序签)，默认为false，即有序签署
                     * @return Unordered 合同签署顺序类型(无序签,顺序签)，默认为false，即有序签署
                     */
                    bool GetUnordered() const;

                    /**
                     * 设置合同签署顺序类型(无序签,顺序签)，默认为false，即有序签署
                     * @param Unordered 合同签署顺序类型(无序签,顺序签)，默认为false，即有序签署
                     */
                    void SetUnordered(const bool& _unordered);

                    /**
                     * 判断参数 Unordered 是否已赋值
                     * @return Unordered 是否已赋值
                     */
                    bool UnorderedHasBeenSet() const;

                    /**
                     * 获取签署文件中的控件，如：填写控件等
                     * @return Components 签署文件中的控件，如：填写控件等
                     */
                    std::vector<Component> GetComponents() const;

                    /**
                     * 设置签署文件中的控件，如：填写控件等
                     * @param Components 签署文件中的控件，如：填写控件等
                     */
                    void SetComponents(const std::vector<Component>& _components);

                    /**
                     * 判断参数 Components 是否已赋值
                     * @return Components 是否已赋值
                     */
                    bool ComponentsHasBeenSet() const;

                private:

                    /**
                     * 渠道应用相关信息
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 操作者的信息
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 签署文件资源Id列表，目前仅支持单个文件
                     */
                    std::vector<std::string> m_fileIds;
                    bool m_fileIdsHasBeenSet;

                    /**
                     * 流程名称，长度不超过200个字符
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * 流程截止时间，十位数时间戳，最大值为33162419560，即3020年
                     */
                    int64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 流程的描述，长度不超过1000个字符
                     */
                    std::string m_flowDescription;
                    bool m_flowDescriptionHasBeenSet;

                    /**
                     * 流程的类型，长度不超过255个字符
                     */
                    std::string m_flowType;
                    bool m_flowTypeHasBeenSet;

                    /**
                     * 流程回调地址，长度不超过255个字符
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 流程签约方列表，最多不超过5个参与方
                     */
                    std::vector<FlowApproverInfo> m_flowApprovers;
                    bool m_flowApproversHasBeenSet;

                    /**
                     * 合同签署顺序类型(无序签,顺序签)，默认为false，即有序签署
                     */
                    bool m_unordered;
                    bool m_unorderedHasBeenSet;

                    /**
                     * 签署文件中的控件，如：填写控件等
                     */
                    std::vector<Component> m_components;
                    bool m_componentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEFLOWBYFILESREQUEST_H_
