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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_FLOWAPPROVERDETAIL_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_FLOWAPPROVERDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 签署人详情信息
                */
                class FlowApproverDetail : public AbstractModel
                {
                public:
                    FlowApproverDetail();
                    ~FlowApproverDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取签署时的相关信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproveMessage 签署时的相关信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApproveMessage() const;

                    /**
                     * 设置签署时的相关信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _approveMessage 签署时的相关信息
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
                     * 获取签署方姓名
                     * @return ApproveName 签署方姓名
                     * 
                     */
                    std::string GetApproveName() const;

                    /**
                     * 设置签署方姓名
                     * @param _approveName 签署方姓名
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
                     * 获取签署方的签署状态
0：还没有发起
1：流程中 没有开始处理
2：待签署
3：已签署
4：已拒绝
5：已过期
6：已撤销
7：还没有预发起
8：待填写
9：因为各种原因而终止
10：填写完成
15：已解除
19：转他人处理
                     * @return ApproveStatus 签署方的签署状态
0：还没有发起
1：流程中 没有开始处理
2：待签署
3：已签署
4：已拒绝
5：已过期
6：已撤销
7：还没有预发起
8：待填写
9：因为各种原因而终止
10：填写完成
15：已解除
19：转他人处理
                     * 
                     */
                    int64_t GetApproveStatus() const;

                    /**
                     * 设置签署方的签署状态
0：还没有发起
1：流程中 没有开始处理
2：待签署
3：已签署
4：已拒绝
5：已过期
6：已撤销
7：还没有预发起
8：待填写
9：因为各种原因而终止
10：填写完成
15：已解除
19：转他人处理
                     * @param _approveStatus 签署方的签署状态
0：还没有发起
1：流程中 没有开始处理
2：待签署
3：已签署
4：已拒绝
5：已过期
6：已撤销
7：还没有预发起
8：待填写
9：因为各种原因而终止
10：填写完成
15：已解除
19：转他人处理
                     * 
                     */
                    void SetApproveStatus(const int64_t& _approveStatus);

                    /**
                     * 判断参数 ApproveStatus 是否已赋值
                     * @return ApproveStatus 是否已赋值
                     * 
                     */
                    bool ApproveStatusHasBeenSet() const;

                    /**
                     * 获取模板配置中的参与方ID,与控件绑定
                     * @return ReceiptId 模板配置中的参与方ID,与控件绑定
                     * 
                     */
                    std::string GetReceiptId() const;

                    /**
                     * 设置模板配置中的参与方ID,与控件绑定
                     * @param _receiptId 模板配置中的参与方ID,与控件绑定
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
                     * 获取客户自定义的用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomUserId 客户自定义的用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCustomUserId() const;

                    /**
                     * 设置客户自定义的用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customUserId 客户自定义的用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomUserId(const std::string& _customUserId);

                    /**
                     * 判断参数 CustomUserId 是否已赋值
                     * @return CustomUserId 是否已赋值
                     * 
                     */
                    bool CustomUserIdHasBeenSet() const;

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
                     * 获取签署顺序，如果是有序签署，签署顺序从小到大
                     * @return SignOrder 签署顺序，如果是有序签署，签署顺序从小到大
                     * 
                     */
                    int64_t GetSignOrder() const;

                    /**
                     * 设置签署顺序，如果是有序签署，签署顺序从小到大
                     * @param _signOrder 签署顺序，如果是有序签署，签署顺序从小到大
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
                     * 获取签署人签署时间，时间戳，单位秒
                     * @return ApproveTime 签署人签署时间，时间戳，单位秒
                     * 
                     */
                    int64_t GetApproveTime() const;

                    /**
                     * 设置签署人签署时间，时间戳，单位秒
                     * @param _approveTime 签署人签署时间，时间戳，单位秒
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
                     * 获取签署方类型，ORGANIZATION-企业员工，PERSON-个人，ENTERPRISESERVER-企业静默签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproveType 签署方类型，ORGANIZATION-企业员工，PERSON-个人，ENTERPRISESERVER-企业静默签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApproveType() const;

                    /**
                     * 设置签署方类型，ORGANIZATION-企业员工，PERSON-个人，ENTERPRISESERVER-企业静默签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _approveType 签署方类型，ORGANIZATION-企业员工，PERSON-个人，ENTERPRISESERVER-企业静默签
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

                    /**
                     * 获取签署方侧用户来源，如WEWORKAPP-企业微信等
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproverSource 签署方侧用户来源，如WEWORKAPP-企业微信等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApproverSource() const;

                    /**
                     * 设置签署方侧用户来源，如WEWORKAPP-企业微信等
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _approverSource 签署方侧用户来源，如WEWORKAPP-企业微信等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApproverSource(const std::string& _approverSource);

                    /**
                     * 判断参数 ApproverSource 是否已赋值
                     * @return ApproverSource 是否已赋值
                     * 
                     */
                    bool ApproverSourceHasBeenSet() const;

                    /**
                     * 获取客户自定义签署方标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomApproverTag 客户自定义签署方标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCustomApproverTag() const;

                    /**
                     * 设置客户自定义签署方标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customApproverTag 客户自定义签署方标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomApproverTag(const std::string& _customApproverTag);

                    /**
                     * 判断参数 CustomApproverTag 是否已赋值
                     * @return CustomApproverTag 是否已赋值
                     * 
                     */
                    bool CustomApproverTagHasBeenSet() const;

                    /**
                     * 获取签署方企业Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrganizationId 签署方企业Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrganizationId() const;

                    /**
                     * 设置签署方企业Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _organizationId 签署方企业Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrganizationId(const std::string& _organizationId);

                    /**
                     * 判断参数 OrganizationId 是否已赋值
                     * @return OrganizationId 是否已赋值
                     * 
                     */
                    bool OrganizationIdHasBeenSet() const;

                    /**
                     * 获取签署方企业名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrganizationName 签署方企业名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置签署方企业名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _organizationName 签署方企业名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrganizationName(const std::string& _organizationName);

                    /**
                     * 判断参数 OrganizationName 是否已赋值
                     * @return OrganizationName 是否已赋值
                     * 
                     */
                    bool OrganizationNameHasBeenSet() const;

                private:

                    /**
                     * 签署时的相关信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_approveMessage;
                    bool m_approveMessageHasBeenSet;

                    /**
                     * 签署方姓名
                     */
                    std::string m_approveName;
                    bool m_approveNameHasBeenSet;

                    /**
                     * 签署方的签署状态
0：还没有发起
1：流程中 没有开始处理
2：待签署
3：已签署
4：已拒绝
5：已过期
6：已撤销
7：还没有预发起
8：待填写
9：因为各种原因而终止
10：填写完成
15：已解除
19：转他人处理
                     */
                    int64_t m_approveStatus;
                    bool m_approveStatusHasBeenSet;

                    /**
                     * 模板配置中的参与方ID,与控件绑定
                     */
                    std::string m_receiptId;
                    bool m_receiptIdHasBeenSet;

                    /**
                     * 客户自定义的用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_customUserId;
                    bool m_customUserIdHasBeenSet;

                    /**
                     * 签署人手机号
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 签署顺序，如果是有序签署，签署顺序从小到大
                     */
                    int64_t m_signOrder;
                    bool m_signOrderHasBeenSet;

                    /**
                     * 签署人签署时间，时间戳，单位秒
                     */
                    int64_t m_approveTime;
                    bool m_approveTimeHasBeenSet;

                    /**
                     * 签署方类型，ORGANIZATION-企业员工，PERSON-个人，ENTERPRISESERVER-企业静默签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_approveType;
                    bool m_approveTypeHasBeenSet;

                    /**
                     * 签署方侧用户来源，如WEWORKAPP-企业微信等
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_approverSource;
                    bool m_approverSourceHasBeenSet;

                    /**
                     * 客户自定义签署方标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_customApproverTag;
                    bool m_customApproverTagHasBeenSet;

                    /**
                     * 签署方企业Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_organizationId;
                    bool m_organizationIdHasBeenSet;

                    /**
                     * 签署方企业名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_FLOWAPPROVERDETAIL_H_
