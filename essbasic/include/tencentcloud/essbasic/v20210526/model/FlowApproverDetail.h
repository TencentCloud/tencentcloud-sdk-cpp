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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWAPPROVERDETAIL_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWAPPROVERDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 签署人的流程信息明细
                */
                class FlowApproverDetail : public AbstractModel
                {
                public:
                    FlowApproverDetail();
                    ~FlowApproverDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模板配置时候的签署人id,与控件绑定
                     * @return ReceiptId 模板配置时候的签署人id,与控件绑定
                     * 
                     */
                    std::string GetReceiptId() const;

                    /**
                     * 设置模板配置时候的签署人id,与控件绑定
                     * @param _receiptId 模板配置时候的签署人id,与控件绑定
                     * 
                     */
                    void SetReceiptId(const std::string& _receiptId);

                    /**
                     * 判断参数 ReceiptId 是否已赋值
                     * @return ReceiptId 是否已赋值
                     * 
                     */
                    bool ReceiptIdHasBeenSet() const;

                    /**
                     * 获取平台企业的第三方id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxyOrganizationOpenId 平台企业的第三方id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProxyOrganizationOpenId() const;

                    /**
                     * 设置平台企业的第三方id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _proxyOrganizationOpenId 平台企业的第三方id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProxyOrganizationOpenId(const std::string& _proxyOrganizationOpenId);

                    /**
                     * 判断参数 ProxyOrganizationOpenId 是否已赋值
                     * @return ProxyOrganizationOpenId 是否已赋值
                     * 
                     */
                    bool ProxyOrganizationOpenIdHasBeenSet() const;

                    /**
                     * 获取平台企业操作人的第三方id
                     * @return ProxyOperatorOpenId 平台企业操作人的第三方id
                     * 
                     */
                    std::string GetProxyOperatorOpenId() const;

                    /**
                     * 设置平台企业操作人的第三方id
                     * @param _proxyOperatorOpenId 平台企业操作人的第三方id
                     * 
                     */
                    void SetProxyOperatorOpenId(const std::string& _proxyOperatorOpenId);

                    /**
                     * 判断参数 ProxyOperatorOpenId 是否已赋值
                     * @return ProxyOperatorOpenId 是否已赋值
                     * 
                     */
                    bool ProxyOperatorOpenIdHasBeenSet() const;

                    /**
                     * 获取平台企业名称
                     * @return ProxyOrganizationName 平台企业名称
                     * 
                     */
                    std::string GetProxyOrganizationName() const;

                    /**
                     * 设置平台企业名称
                     * @param _proxyOrganizationName 平台企业名称
                     * 
                     */
                    void SetProxyOrganizationName(const std::string& _proxyOrganizationName);

                    /**
                     * 判断参数 ProxyOrganizationName 是否已赋值
                     * @return ProxyOrganizationName 是否已赋值
                     * 
                     */
                    bool ProxyOrganizationNameHasBeenSet() const;

                    /**
                     * 获取签署人手机号
                     * @return Mobile 签署人手机号
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置签署人手机号
                     * @param _mobile 签署人手机号
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
                     * 获取签署人签署顺序
                     * @return SignOrder 签署人签署顺序
                     * 
                     */
                    int64_t GetSignOrder() const;

                    /**
                     * 设置签署人签署顺序
                     * @param _signOrder 签署人签署顺序
                     * 
                     */
                    void SetSignOrder(const int64_t& _signOrder);

                    /**
                     * 判断参数 SignOrder 是否已赋值
                     * @return SignOrder 是否已赋值
                     * 
                     */
                    bool SignOrderHasBeenSet() const;

                    /**
                     * 获取签署人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproveName 签署人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApproveName() const;

                    /**
                     * 设置签署人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _approveName 签署人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApproveName(const std::string& _approveName);

                    /**
                     * 判断参数 ApproveName 是否已赋值
                     * @return ApproveName 是否已赋值
                     * 
                     */
                    bool ApproveNameHasBeenSet() const;

                    /**
                     * 获取当前签署人的状态, 状态如下

PENDING 流程等待中 
FILLPENDING 待填写状态
FILLACCEPT 参与人已经填写
FILLREJECT 参与人解决填写
WAITPICKUP 待签收
ACCEPT 签收 
REJECT 拒签 
DEADLINE 过期没有处理 
CANCEL 取消
FORWARD 已经转他人处理
STOP 流程因为其他原因终止
RELIEVED 已经解除

注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproveStatus 当前签署人的状态, 状态如下

PENDING 流程等待中 
FILLPENDING 待填写状态
FILLACCEPT 参与人已经填写
FILLREJECT 参与人解决填写
WAITPICKUP 待签收
ACCEPT 签收 
REJECT 拒签 
DEADLINE 过期没有处理 
CANCEL 取消
FORWARD 已经转他人处理
STOP 流程因为其他原因终止
RELIEVED 已经解除

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApproveStatus() const;

                    /**
                     * 设置当前签署人的状态, 状态如下

PENDING 流程等待中 
FILLPENDING 待填写状态
FILLACCEPT 参与人已经填写
FILLREJECT 参与人解决填写
WAITPICKUP 待签收
ACCEPT 签收 
REJECT 拒签 
DEADLINE 过期没有处理 
CANCEL 取消
FORWARD 已经转他人处理
STOP 流程因为其他原因终止
RELIEVED 已经解除

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _approveStatus 当前签署人的状态, 状态如下

PENDING 流程等待中 
FILLPENDING 待填写状态
FILLACCEPT 参与人已经填写
FILLREJECT 参与人解决填写
WAITPICKUP 待签收
ACCEPT 签收 
REJECT 拒签 
DEADLINE 过期没有处理 
CANCEL 取消
FORWARD 已经转他人处理
STOP 流程因为其他原因终止
RELIEVED 已经解除

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApproveStatus(const std::string& _approveStatus);

                    /**
                     * 判断参数 ApproveStatus 是否已赋值
                     * @return ApproveStatus 是否已赋值
                     * 
                     */
                    bool ApproveStatusHasBeenSet() const;

                    /**
                     * 获取签署人信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproveMessage 签署人信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApproveMessage() const;

                    /**
                     * 设置签署人信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _approveMessage 签署人信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApproveMessage(const std::string& _approveMessage);

                    /**
                     * 判断参数 ApproveMessage 是否已赋值
                     * @return ApproveMessage 是否已赋值
                     * 
                     */
                    bool ApproveMessageHasBeenSet() const;

                    /**
                     * 获取签署人签署时间戳，单位秒
                     * @return ApproveTime 签署人签署时间戳，单位秒
                     * 
                     */
                    int64_t GetApproveTime() const;

                    /**
                     * 设置签署人签署时间戳，单位秒
                     * @param _approveTime 签署人签署时间戳，单位秒
                     * 
                     */
                    void SetApproveTime(const int64_t& _approveTime);

                    /**
                     * 判断参数 ApproveTime 是否已赋值
                     * @return ApproveTime 是否已赋值
                     * 
                     */
                    bool ApproveTimeHasBeenSet() const;

                    /**
                     * 获取参与者类型 (ORGANIZATION企业/PERSON个人)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproveType 参与者类型 (ORGANIZATION企业/PERSON个人)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApproveType() const;

                    /**
                     * 设置参与者类型 (ORGANIZATION企业/PERSON个人)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _approveType 参与者类型 (ORGANIZATION企业/PERSON个人)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApproveType(const std::string& _approveType);

                    /**
                     * 判断参数 ApproveType 是否已赋值
                     * @return ApproveType 是否已赋值
                     * 
                     */
                    bool ApproveTypeHasBeenSet() const;

                private:

                    /**
                     * 模板配置时候的签署人id,与控件绑定
                     */
                    std::string m_receiptId;
                    bool m_receiptIdHasBeenSet;

                    /**
                     * 平台企业的第三方id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_proxyOrganizationOpenId;
                    bool m_proxyOrganizationOpenIdHasBeenSet;

                    /**
                     * 平台企业操作人的第三方id
                     */
                    std::string m_proxyOperatorOpenId;
                    bool m_proxyOperatorOpenIdHasBeenSet;

                    /**
                     * 平台企业名称
                     */
                    std::string m_proxyOrganizationName;
                    bool m_proxyOrganizationNameHasBeenSet;

                    /**
                     * 签署人手机号
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 签署人签署顺序
                     */
                    int64_t m_signOrder;
                    bool m_signOrderHasBeenSet;

                    /**
                     * 签署人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_approveName;
                    bool m_approveNameHasBeenSet;

                    /**
                     * 当前签署人的状态, 状态如下

PENDING 流程等待中 
FILLPENDING 待填写状态
FILLACCEPT 参与人已经填写
FILLREJECT 参与人解决填写
WAITPICKUP 待签收
ACCEPT 签收 
REJECT 拒签 
DEADLINE 过期没有处理 
CANCEL 取消
FORWARD 已经转他人处理
STOP 流程因为其他原因终止
RELIEVED 已经解除

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_approveStatus;
                    bool m_approveStatusHasBeenSet;

                    /**
                     * 签署人信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_approveMessage;
                    bool m_approveMessageHasBeenSet;

                    /**
                     * 签署人签署时间戳，单位秒
                     */
                    int64_t m_approveTime;
                    bool m_approveTimeHasBeenSet;

                    /**
                     * 参与者类型 (ORGANIZATION企业/PERSON个人)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_approveType;
                    bool m_approveTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWAPPROVERDETAIL_H_
