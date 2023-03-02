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
#include <tencentcloud/essbasic/v20210526/model/FlowApproverInfo.h>
#include <tencentcloud/essbasic/v20210526/model/Component.h>
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
                * ChannelCreateFlowByFiles请求参数结构体
                */
                class ChannelCreateFlowByFilesRequest : public AbstractModel
                {
                public:
                    ChannelCreateFlowByFilesRequest();
                    ~ChannelCreateFlowByFilesRequest() = default;
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
                     * 获取签署流程名称，长度不超过200个字符
                     * @return FlowName 签署流程名称，长度不超过200个字符
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置签署流程名称，长度不超过200个字符
                     * @param FlowName 签署流程名称，长度不超过200个字符
                     */
                    void SetFlowName(const std::string& _flowName);

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     */
                    bool FlowNameHasBeenSet() const;

                    /**
                     * 获取签署流程签约方列表，最多不超过5个参与方
                     * @return FlowApprovers 签署流程签约方列表，最多不超过5个参与方
                     */
                    std::vector<FlowApproverInfo> GetFlowApprovers() const;

                    /**
                     * 设置签署流程签约方列表，最多不超过5个参与方
                     * @param FlowApprovers 签署流程签约方列表，最多不超过5个参与方
                     */
                    void SetFlowApprovers(const std::vector<FlowApproverInfo>& _flowApprovers);

                    /**
                     * 判断参数 FlowApprovers 是否已赋值
                     * @return FlowApprovers 是否已赋值
                     */
                    bool FlowApproversHasBeenSet() const;

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
                     * 获取签署文件中的发起方的填写控件，需要在发起的时候进行填充
                     * @return Components 签署文件中的发起方的填写控件，需要在发起的时候进行填充
                     */
                    std::vector<Component> GetComponents() const;

                    /**
                     * 设置签署文件中的发起方的填写控件，需要在发起的时候进行填充
                     * @param Components 签署文件中的发起方的填写控件，需要在发起的时候进行填充
                     */
                    void SetComponents(const std::vector<Component>& _components);

                    /**
                     * 判断参数 Components 是否已赋值
                     * @return Components 是否已赋值
                     */
                    bool ComponentsHasBeenSet() const;

                    /**
                     * 获取签署流程截止时间，十位数时间戳，最大值为33162419560，即3020年
                     * @return Deadline 签署流程截止时间，十位数时间戳，最大值为33162419560，即3020年
                     */
                    int64_t GetDeadline() const;

                    /**
                     * 设置签署流程截止时间，十位数时间戳，最大值为33162419560，即3020年
                     * @param Deadline 签署流程截止时间，十位数时间戳，最大值为33162419560，即3020年
                     */
                    void SetDeadline(const int64_t& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取签署流程回调地址，长度不超过255个字符
                     * @return CallbackUrl 签署流程回调地址，长度不超过255个字符
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置签署流程回调地址，长度不超过255个字符
                     * @param CallbackUrl 签署流程回调地址，长度不超过255个字符
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取合同签署顺序类型(无序签,顺序签)，默认为false，即有序签署。有序签署时以传入FlowApprovers数组的顺序作为签署顺序
                     * @return Unordered 合同签署顺序类型(无序签,顺序签)，默认为false，即有序签署。有序签署时以传入FlowApprovers数组的顺序作为签署顺序
                     */
                    bool GetUnordered() const;

                    /**
                     * 设置合同签署顺序类型(无序签,顺序签)，默认为false，即有序签署。有序签署时以传入FlowApprovers数组的顺序作为签署顺序
                     * @param Unordered 合同签署顺序类型(无序签,顺序签)，默认为false，即有序签署。有序签署时以传入FlowApprovers数组的顺序作为签署顺序
                     */
                    void SetUnordered(const bool& _unordered);

                    /**
                     * 判断参数 Unordered 是否已赋值
                     * @return Unordered 是否已赋值
                     */
                    bool UnorderedHasBeenSet() const;

                    /**
                     * 获取签署流程的类型，长度不超过255个字符
                     * @return FlowType 签署流程的类型，长度不超过255个字符
                     */
                    std::string GetFlowType() const;

                    /**
                     * 设置签署流程的类型，长度不超过255个字符
                     * @param FlowType 签署流程的类型，长度不超过255个字符
                     */
                    void SetFlowType(const std::string& _flowType);

                    /**
                     * 判断参数 FlowType 是否已赋值
                     * @return FlowType 是否已赋值
                     */
                    bool FlowTypeHasBeenSet() const;

                    /**
                     * 获取签署流程的描述，长度不超过1000个字符
                     * @return FlowDescription 签署流程的描述，长度不超过1000个字符
                     */
                    std::string GetFlowDescription() const;

                    /**
                     * 设置签署流程的描述，长度不超过1000个字符
                     * @param FlowDescription 签署流程的描述，长度不超过1000个字符
                     */
                    void SetFlowDescription(const std::string& _flowDescription);

                    /**
                     * 判断参数 FlowDescription 是否已赋值
                     * @return FlowDescription 是否已赋值
                     */
                    bool FlowDescriptionHasBeenSet() const;

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
                     * 获取渠道的业务信息，最大长度1000个字符。发起自动签署时，需设置对应自动签署场景，目前仅支持场景：处方单-E_PRESCRIPTION_AUTO_SIGN
                     * @return CustomerData 渠道的业务信息，最大长度1000个字符。发起自动签署时，需设置对应自动签署场景，目前仅支持场景：处方单-E_PRESCRIPTION_AUTO_SIGN
                     */
                    std::string GetCustomerData() const;

                    /**
                     * 设置渠道的业务信息，最大长度1000个字符。发起自动签署时，需设置对应自动签署场景，目前仅支持场景：处方单-E_PRESCRIPTION_AUTO_SIGN
                     * @param CustomerData 渠道的业务信息，最大长度1000个字符。发起自动签署时，需设置对应自动签署场景，目前仅支持场景：处方单-E_PRESCRIPTION_AUTO_SIGN
                     */
                    void SetCustomerData(const std::string& _customerData);

                    /**
                     * 判断参数 CustomerData 是否已赋值
                     * @return CustomerData 是否已赋值
                     */
                    bool CustomerDataHasBeenSet() const;

                    /**
                     * 获取发起方企业的签署人进行签署操作是否需要企业内部审批。 若设置为true,审核结果需通过接口 ChannelCreateFlowSignReview 通知电子签，审核通过后，发起方企业签署人方可进行签署操作，否则会阻塞其签署操作。  注：企业可以通过此功能与企业内部的审批流程进行关联，支持手动、静默签署合同。
                     * @return NeedSignReview 发起方企业的签署人进行签署操作是否需要企业内部审批。 若设置为true,审核结果需通过接口 ChannelCreateFlowSignReview 通知电子签，审核通过后，发起方企业签署人方可进行签署操作，否则会阻塞其签署操作。  注：企业可以通过此功能与企业内部的审批流程进行关联，支持手动、静默签署合同。
                     */
                    bool GetNeedSignReview() const;

                    /**
                     * 设置发起方企业的签署人进行签署操作是否需要企业内部审批。 若设置为true,审核结果需通过接口 ChannelCreateFlowSignReview 通知电子签，审核通过后，发起方企业签署人方可进行签署操作，否则会阻塞其签署操作。  注：企业可以通过此功能与企业内部的审批流程进行关联，支持手动、静默签署合同。
                     * @param NeedSignReview 发起方企业的签署人进行签署操作是否需要企业内部审批。 若设置为true,审核结果需通过接口 ChannelCreateFlowSignReview 通知电子签，审核通过后，发起方企业签署人方可进行签署操作，否则会阻塞其签署操作。  注：企业可以通过此功能与企业内部的审批流程进行关联，支持手动、静默签署合同。
                     */
                    void SetNeedSignReview(const bool& _needSignReview);

                    /**
                     * 判断参数 NeedSignReview 是否已赋值
                     * @return NeedSignReview 是否已赋值
                     */
                    bool NeedSignReviewHasBeenSet() const;

                    /**
                     * 获取签署人校验方式
VerifyCheck: 人脸识别（默认）
MobileCheck：手机号验证
参数说明：可选人脸识别或手机号验证两种方式，若选择后者，未实名个人签署方在签署合同时，无需经过实名认证和意愿确认两次人脸识别，该能力仅适用于个人签署方。
                     * @return ApproverVerifyType 签署人校验方式
VerifyCheck: 人脸识别（默认）
MobileCheck：手机号验证
参数说明：可选人脸识别或手机号验证两种方式，若选择后者，未实名个人签署方在签署合同时，无需经过实名认证和意愿确认两次人脸识别，该能力仅适用于个人签署方。
                     */
                    std::string GetApproverVerifyType() const;

                    /**
                     * 设置签署人校验方式
VerifyCheck: 人脸识别（默认）
MobileCheck：手机号验证
参数说明：可选人脸识别或手机号验证两种方式，若选择后者，未实名个人签署方在签署合同时，无需经过实名认证和意愿确认两次人脸识别，该能力仅适用于个人签署方。
                     * @param ApproverVerifyType 签署人校验方式
VerifyCheck: 人脸识别（默认）
MobileCheck：手机号验证
参数说明：可选人脸识别或手机号验证两种方式，若选择后者，未实名个人签署方在签署合同时，无需经过实名认证和意愿确认两次人脸识别，该能力仅适用于个人签署方。
                     */
                    void SetApproverVerifyType(const std::string& _approverVerifyType);

                    /**
                     * 判断参数 ApproverVerifyType 是否已赋值
                     * @return ApproverVerifyType 是否已赋值
                     */
                    bool ApproverVerifyTypeHasBeenSet() const;

                    /**
                     * 获取标识是否允许发起后添加控件。0为不允许1为允许。如果为1，创建的时候不能有签署控件，只能创建后添加。注意发起后添加控件功能不支持添加骑缝章和签批控件
                     * @return SignBeanTag 标识是否允许发起后添加控件。0为不允许1为允许。如果为1，创建的时候不能有签署控件，只能创建后添加。注意发起后添加控件功能不支持添加骑缝章和签批控件
                     */
                    int64_t GetSignBeanTag() const;

                    /**
                     * 设置标识是否允许发起后添加控件。0为不允许1为允许。如果为1，创建的时候不能有签署控件，只能创建后添加。注意发起后添加控件功能不支持添加骑缝章和签批控件
                     * @param SignBeanTag 标识是否允许发起后添加控件。0为不允许1为允许。如果为1，创建的时候不能有签署控件，只能创建后添加。注意发起后添加控件功能不支持添加骑缝章和签批控件
                     */
                    void SetSignBeanTag(const int64_t& _signBeanTag);

                    /**
                     * 判断参数 SignBeanTag 是否已赋值
                     * @return SignBeanTag 是否已赋值
                     */
                    bool SignBeanTagHasBeenSet() const;

                    /**
                     * 获取操作者的信息，不用传
                     * @return Operator 操作者的信息，不用传
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作者的信息，不用传
                     * @param Operator 操作者的信息，不用传
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
                     * 签署流程名称，长度不超过200个字符
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * 签署流程签约方列表，最多不超过5个参与方
                     */
                    std::vector<FlowApproverInfo> m_flowApprovers;
                    bool m_flowApproversHasBeenSet;

                    /**
                     * 签署文件资源Id列表，目前仅支持单个文件
                     */
                    std::vector<std::string> m_fileIds;
                    bool m_fileIdsHasBeenSet;

                    /**
                     * 签署文件中的发起方的填写控件，需要在发起的时候进行填充
                     */
                    std::vector<Component> m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * 签署流程截止时间，十位数时间戳，最大值为33162419560，即3020年
                     */
                    int64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 签署流程回调地址，长度不超过255个字符
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 合同签署顺序类型(无序签,顺序签)，默认为false，即有序签署。有序签署时以传入FlowApprovers数组的顺序作为签署顺序
                     */
                    bool m_unordered;
                    bool m_unorderedHasBeenSet;

                    /**
                     * 签署流程的类型，长度不超过255个字符
                     */
                    std::string m_flowType;
                    bool m_flowTypeHasBeenSet;

                    /**
                     * 签署流程的描述，长度不超过1000个字符
                     */
                    std::string m_flowDescription;
                    bool m_flowDescriptionHasBeenSet;

                    /**
                     * 合同显示的页卡模板，说明：只支持{合同名称}, {发起方企业}, {发起方姓名}, {签署方N企业}, {签署方N姓名}，且N不能超过签署人的数量，N从1开始
                     */
                    std::string m_customShowMap;
                    bool m_customShowMapHasBeenSet;

                    /**
                     * 渠道的业务信息，最大长度1000个字符。发起自动签署时，需设置对应自动签署场景，目前仅支持场景：处方单-E_PRESCRIPTION_AUTO_SIGN
                     */
                    std::string m_customerData;
                    bool m_customerDataHasBeenSet;

                    /**
                     * 发起方企业的签署人进行签署操作是否需要企业内部审批。 若设置为true,审核结果需通过接口 ChannelCreateFlowSignReview 通知电子签，审核通过后，发起方企业签署人方可进行签署操作，否则会阻塞其签署操作。  注：企业可以通过此功能与企业内部的审批流程进行关联，支持手动、静默签署合同。
                     */
                    bool m_needSignReview;
                    bool m_needSignReviewHasBeenSet;

                    /**
                     * 签署人校验方式
VerifyCheck: 人脸识别（默认）
MobileCheck：手机号验证
参数说明：可选人脸识别或手机号验证两种方式，若选择后者，未实名个人签署方在签署合同时，无需经过实名认证和意愿确认两次人脸识别，该能力仅适用于个人签署方。
                     */
                    std::string m_approverVerifyType;
                    bool m_approverVerifyTypeHasBeenSet;

                    /**
                     * 标识是否允许发起后添加控件。0为不允许1为允许。如果为1，创建的时候不能有签署控件，只能创建后添加。注意发起后添加控件功能不支持添加骑缝章和签批控件
                     */
                    int64_t m_signBeanTag;
                    bool m_signBeanTagHasBeenSet;

                    /**
                     * 操作者的信息，不用传
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEFLOWBYFILESREQUEST_H_
