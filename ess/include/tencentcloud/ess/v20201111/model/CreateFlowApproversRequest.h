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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWAPPROVERSREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWAPPROVERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/FillApproverInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateFlowApprovers请求参数结构体
                */
                class CreateFlowApproversRequest : public AbstractModel
                {
                public:
                    CreateFlowApproversRequest();
                    ~CreateFlowApproversRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取调用方用户信息，userId 必填
                     * @return Operator 调用方用户信息，userId 必填
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置调用方用户信息，userId 必填
                     * @param Operator 调用方用户信息，userId 必填
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取签署流程编号
                     * @return FlowId 签署流程编号
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置签署流程编号
                     * @param FlowId 签署流程编号
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取补充签署人信息
                     * @return Approvers 补充签署人信息
                     */
                    std::vector<FillApproverInfo> GetApprovers() const;

                    /**
                     * 设置补充签署人信息
                     * @param Approvers 补充签署人信息
                     */
                    void SetApprovers(const std::vector<FillApproverInfo>& _approvers);

                    /**
                     * 判断参数 Approvers 是否已赋值
                     * @return Approvers 是否已赋值
                     */
                    bool ApproversHasBeenSet() const;

                    /**
                     * 获取企微消息中的发起人
                     * @return Initiator 企微消息中的发起人
                     */
                    std::string GetInitiator() const;

                    /**
                     * 设置企微消息中的发起人
                     * @param Initiator 企微消息中的发起人
                     */
                    void SetInitiator(const std::string& _initiator);

                    /**
                     * 判断参数 Initiator 是否已赋值
                     * @return Initiator 是否已赋值
                     */
                    bool InitiatorHasBeenSet() const;

                private:

                    /**
                     * 调用方用户信息，userId 必填
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 签署流程编号
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 补充签署人信息
                     */
                    std::vector<FillApproverInfo> m_approvers;
                    bool m_approversHasBeenSet;

                    /**
                     * 企微消息中的发起人
                     */
                    std::string m_initiator;
                    bool m_initiatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWAPPROVERSREQUEST_H_
