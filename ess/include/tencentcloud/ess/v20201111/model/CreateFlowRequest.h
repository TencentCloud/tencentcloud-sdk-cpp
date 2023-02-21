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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/FlowCreateApprover.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>
#include <tencentcloud/ess/v20201111/model/CcInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateFlow请求参数结构体
                */
                class CreateFlowRequest : public AbstractModel
                {
                public:
                    CreateFlowRequest();
                    ~CreateFlowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取调用方用户信息，userId 必填。支持填入集团子公司经办人 userId代发合同。
                     * @return Operator 调用方用户信息，userId 必填。支持填入集团子公司经办人 userId代发合同。
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置调用方用户信息，userId 必填。支持填入集团子公司经办人 userId代发合同。
                     * @param Operator 调用方用户信息，userId 必填。支持填入集团子公司经办人 userId代发合同。
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取签署流程名称,最大长度200个字符
                     * @return FlowName 签署流程名称,最大长度200个字符
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置签署流程名称,最大长度200个字符
                     * @param FlowName 签署流程名称,最大长度200个字符
                     */
                    void SetFlowName(const std::string& _flowName);

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     */
                    bool FlowNameHasBeenSet() const;

                    /**
                     * 获取签署流程参与者信息，最大限制50方
                     * @return Approvers 签署流程参与者信息，最大限制50方
                     */
                    std::vector<FlowCreateApprover> GetApprovers() const;

                    /**
                     * 设置签署流程参与者信息，最大限制50方
                     * @param Approvers 签署流程参与者信息，最大限制50方
                     */
                    void SetApprovers(const std::vector<FlowCreateApprover>& _approvers);

                    /**
                     * 判断参数 Approvers 是否已赋值
                     * @return Approvers 是否已赋值
                     */
                    bool ApproversHasBeenSet() const;

                    /**
                     * 获取签署流程的类型(如销售合同/入职合同等)，最大长度200个字符
                     * @return FlowType 签署流程的类型(如销售合同/入职合同等)，最大长度200个字符
                     */
                    std::string GetFlowType() const;

                    /**
                     * 设置签署流程的类型(如销售合同/入职合同等)，最大长度200个字符
                     * @param FlowType 签署流程的类型(如销售合同/入职合同等)，最大长度200个字符
                     */
                    void SetFlowType(const std::string& _flowType);

                    /**
                     * 判断参数 FlowType 是否已赋值
                     * @return FlowType 是否已赋值
                     */
                    bool FlowTypeHasBeenSet() const;

                    /**
                     * 获取客户端Token，保持接口幂等性,最大长度64个字符
                     * @return ClientToken 客户端Token，保持接口幂等性,最大长度64个字符
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置客户端Token，保持接口幂等性,最大长度64个字符
                     * @param ClientToken 客户端Token，保持接口幂等性,最大长度64个字符
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取暂未开放
                     * @return RelatedFlowId 暂未开放
                     */
                    std::string GetRelatedFlowId() const;

                    /**
                     * 设置暂未开放
                     * @param RelatedFlowId 暂未开放
                     */
                    void SetRelatedFlowId(const std::string& _relatedFlowId);

                    /**
                     * 判断参数 RelatedFlowId 是否已赋值
                     * @return RelatedFlowId 是否已赋值
                     */
                    bool RelatedFlowIdHasBeenSet() const;

                    /**
                     * 获取签署流程的签署截止时间。
值为unix时间戳,精确到秒,不传默认为当前时间一年后
                     * @return DeadLine 签署流程的签署截止时间。
值为unix时间戳,精确到秒,不传默认为当前时间一年后
                     */
                    int64_t GetDeadLine() const;

                    /**
                     * 设置签署流程的签署截止时间。
值为unix时间戳,精确到秒,不传默认为当前时间一年后
                     * @param DeadLine 签署流程的签署截止时间。
值为unix时间戳,精确到秒,不传默认为当前时间一年后
                     */
                    void SetDeadLine(const int64_t& _deadLine);

                    /**
                     * 判断参数 DeadLine 是否已赋值
                     * @return DeadLine 是否已赋值
                     */
                    bool DeadLineHasBeenSet() const;

                    /**
                     * 获取用户自定义字段，回调的时候会进行透传，长度需要小于20480
                     * @return UserData 用户自定义字段，回调的时候会进行透传，长度需要小于20480
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置用户自定义字段，回调的时候会进行透传，长度需要小于20480
                     * @param UserData 用户自定义字段，回调的时候会进行透传，长度需要小于20480
                     */
                    void SetUserData(const std::string& _userData);

                    /**
                     * 判断参数 UserData 是否已赋值
                     * @return UserData 是否已赋值
                     */
                    bool UserDataHasBeenSet() const;

                    /**
                     * 获取签署流程描述,最大长度1000个字符
                     * @return FlowDescription 签署流程描述,最大长度1000个字符
                     */
                    std::string GetFlowDescription() const;

                    /**
                     * 设置签署流程描述,最大长度1000个字符
                     * @param FlowDescription 签署流程描述,最大长度1000个字符
                     */
                    void SetFlowDescription(const std::string& _flowDescription);

                    /**
                     * 判断参数 FlowDescription 是否已赋值
                     * @return FlowDescription 是否已赋值
                     */
                    bool FlowDescriptionHasBeenSet() const;

                    /**
                     * 获取发送类型：
true：无序签
false：有序签
注：默认为false（有序签），请和模板中的配置保持一致
                     * @return Unordered 发送类型：
true：无序签
false：有序签
注：默认为false（有序签），请和模板中的配置保持一致
                     */
                    bool GetUnordered() const;

                    /**
                     * 设置发送类型：
true：无序签
false：有序签
注：默认为false（有序签），请和模板中的配置保持一致
                     * @param Unordered 发送类型：
true：无序签
false：有序签
注：默认为false（有序签），请和模板中的配置保持一致
                     */
                    void SetUnordered(const bool& _unordered);

                    /**
                     * 判断参数 Unordered 是否已赋值
                     * @return Unordered 是否已赋值
                     */
                    bool UnorderedHasBeenSet() const;

                    /**
                     * 获取合同显示的页卡模板，说明：只支持{合同名称}, {发起方企业}, {发起方姓名}, {签署方N企业}, {签署方N姓名}，且N不能超过签署人的数量，N从1开始
                     * @return CustomShowMap 合同显示的页卡模板，说明：只支持{合同名称}, {发起方企业}, {发起方姓名}, {签署方N企业}, {签署方N姓名}，且N不能超过签署人的数量，N从1开始
                     */
                    std::string GetCustomShowMap() const;

                    /**
                     * 设置合同显示的页卡模板，说明：只支持{合同名称}, {发起方企业}, {发起方姓名}, {签署方N企业}, {签署方N姓名}，且N不能超过签署人的数量，N从1开始
                     * @param CustomShowMap 合同显示的页卡模板，说明：只支持{合同名称}, {发起方企业}, {发起方姓名}, {签署方N企业}, {签署方N姓名}，且N不能超过签署人的数量，N从1开始
                     */
                    void SetCustomShowMap(const std::string& _customShowMap);

                    /**
                     * 判断参数 CustomShowMap 是否已赋值
                     * @return CustomShowMap 是否已赋值
                     */
                    bool CustomShowMapHasBeenSet() const;

                    /**
                     * 获取发起方企业的签署人进行签署操作是否需要企业内部审批。使用此功能需要发起方企业有参与签署。
若设置为true，审核结果需通过接口 CreateFlowSignReview 通知电子签，审核通过后，发起方企业签署人方可进行签署操作，否则会阻塞其签署操作。

注：企业可以通过此功能与企业内部的审批流程进行关联，支持手动、静默签署合同。
                     * @return NeedSignReview 发起方企业的签署人进行签署操作是否需要企业内部审批。使用此功能需要发起方企业有参与签署。
若设置为true，审核结果需通过接口 CreateFlowSignReview 通知电子签，审核通过后，发起方企业签署人方可进行签署操作，否则会阻塞其签署操作。

注：企业可以通过此功能与企业内部的审批流程进行关联，支持手动、静默签署合同。
                     */
                    bool GetNeedSignReview() const;

                    /**
                     * 设置发起方企业的签署人进行签署操作是否需要企业内部审批。使用此功能需要发起方企业有参与签署。
若设置为true，审核结果需通过接口 CreateFlowSignReview 通知电子签，审核通过后，发起方企业签署人方可进行签署操作，否则会阻塞其签署操作。

注：企业可以通过此功能与企业内部的审批流程进行关联，支持手动、静默签署合同。
                     * @param NeedSignReview 发起方企业的签署人进行签署操作是否需要企业内部审批。使用此功能需要发起方企业有参与签署。
若设置为true，审核结果需通过接口 CreateFlowSignReview 通知电子签，审核通过后，发起方企业签署人方可进行签署操作，否则会阻塞其签署操作。

注：企业可以通过此功能与企业内部的审批流程进行关联，支持手动、静默签署合同。
                     */
                    void SetNeedSignReview(const bool& _needSignReview);

                    /**
                     * 判断参数 NeedSignReview 是否已赋值
                     * @return NeedSignReview 是否已赋值
                     */
                    bool NeedSignReviewHasBeenSet() const;

                    /**
                     * 获取暂未开放
                     * @return CallbackUrl 暂未开放
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置暂未开放
                     * @param CallbackUrl 暂未开放
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取应用相关信息
                     * @return Agent 应用相关信息
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置应用相关信息
                     * @param Agent 应用相关信息
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取被抄送人的信息列表。
注: 此功能为白名单功能，若有需要，请联系电子签客服开白使用。
                     * @return CcInfos 被抄送人的信息列表。
注: 此功能为白名单功能，若有需要，请联系电子签客服开白使用。
                     */
                    std::vector<CcInfo> GetCcInfos() const;

                    /**
                     * 设置被抄送人的信息列表。
注: 此功能为白名单功能，若有需要，请联系电子签客服开白使用。
                     * @param CcInfos 被抄送人的信息列表。
注: 此功能为白名单功能，若有需要，请联系电子签客服开白使用。
                     */
                    void SetCcInfos(const std::vector<CcInfo>& _ccInfos);

                    /**
                     * 判断参数 CcInfos 是否已赋值
                     * @return CcInfos 是否已赋值
                     */
                    bool CcInfosHasBeenSet() const;

                private:

                    /**
                     * 调用方用户信息，userId 必填。支持填入集团子公司经办人 userId代发合同。
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 签署流程名称,最大长度200个字符
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * 签署流程参与者信息，最大限制50方
                     */
                    std::vector<FlowCreateApprover> m_approvers;
                    bool m_approversHasBeenSet;

                    /**
                     * 签署流程的类型(如销售合同/入职合同等)，最大长度200个字符
                     */
                    std::string m_flowType;
                    bool m_flowTypeHasBeenSet;

                    /**
                     * 客户端Token，保持接口幂等性,最大长度64个字符
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * 暂未开放
                     */
                    std::string m_relatedFlowId;
                    bool m_relatedFlowIdHasBeenSet;

                    /**
                     * 签署流程的签署截止时间。
值为unix时间戳,精确到秒,不传默认为当前时间一年后
                     */
                    int64_t m_deadLine;
                    bool m_deadLineHasBeenSet;

                    /**
                     * 用户自定义字段，回调的时候会进行透传，长度需要小于20480
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * 签署流程描述,最大长度1000个字符
                     */
                    std::string m_flowDescription;
                    bool m_flowDescriptionHasBeenSet;

                    /**
                     * 发送类型：
true：无序签
false：有序签
注：默认为false（有序签），请和模板中的配置保持一致
                     */
                    bool m_unordered;
                    bool m_unorderedHasBeenSet;

                    /**
                     * 合同显示的页卡模板，说明：只支持{合同名称}, {发起方企业}, {发起方姓名}, {签署方N企业}, {签署方N姓名}，且N不能超过签署人的数量，N从1开始
                     */
                    std::string m_customShowMap;
                    bool m_customShowMapHasBeenSet;

                    /**
                     * 发起方企业的签署人进行签署操作是否需要企业内部审批。使用此功能需要发起方企业有参与签署。
若设置为true，审核结果需通过接口 CreateFlowSignReview 通知电子签，审核通过后，发起方企业签署人方可进行签署操作，否则会阻塞其签署操作。

注：企业可以通过此功能与企业内部的审批流程进行关联，支持手动、静默签署合同。
                     */
                    bool m_needSignReview;
                    bool m_needSignReviewHasBeenSet;

                    /**
                     * 暂未开放
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 应用相关信息
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 被抄送人的信息列表。
注: 此功能为白名单功能，若有需要，请联系电子签客服开白使用。
                     */
                    std::vector<CcInfo> m_ccInfos;
                    bool m_ccInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWREQUEST_H_
