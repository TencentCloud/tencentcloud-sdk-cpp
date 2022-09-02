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
                     * 获取签署人信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproveMessage 签署人信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetApproveMessage() const;

                    /**
                     * 设置签署人信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApproveMessage 签署人信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApproveMessage(const std::string& _approveMessage);

                    /**
                     * 判断参数 ApproveMessage 是否已赋值
                     * @return ApproveMessage 是否已赋值
                     */
                    bool ApproveMessageHasBeenSet() const;

                    /**
                     * 获取签署人名字
                     * @return ApproveName 签署人名字
                     */
                    std::string GetApproveName() const;

                    /**
                     * 设置签署人名字
                     * @param ApproveName 签署人名字
                     */
                    void SetApproveName(const std::string& _approveName);

                    /**
                     * 判断参数 ApproveName 是否已赋值
                     * @return ApproveName 是否已赋值
                     */
                    bool ApproveNameHasBeenSet() const;

                    /**
                     * 获取签署人的状态
                     * @return ApproveStatus 签署人的状态
                     */
                    int64_t GetApproveStatus() const;

                    /**
                     * 设置签署人的状态
                     * @param ApproveStatus 签署人的状态
                     */
                    void SetApproveStatus(const int64_t& _approveStatus);

                    /**
                     * 判断参数 ApproveStatus 是否已赋值
                     * @return ApproveStatus 是否已赋值
                     */
                    bool ApproveStatusHasBeenSet() const;

                    /**
                     * 获取模板配置时候的签署人id,与控件绑定
                     * @return ReceiptId 模板配置时候的签署人id,与控件绑定
                     */
                    std::string GetReceiptId() const;

                    /**
                     * 设置模板配置时候的签署人id,与控件绑定
                     * @param ReceiptId 模板配置时候的签署人id,与控件绑定
                     */
                    void SetReceiptId(const std::string& _receiptId);

                    /**
                     * 判断参数 ReceiptId 是否已赋值
                     * @return ReceiptId 是否已赋值
                     */
                    bool ReceiptIdHasBeenSet() const;

                    /**
                     * 获取客户自定义userId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomUserId 客户自定义userId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCustomUserId() const;

                    /**
                     * 设置客户自定义userId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CustomUserId 客户自定义userId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCustomUserId(const std::string& _customUserId);

                    /**
                     * 判断参数 CustomUserId 是否已赋值
                     * @return CustomUserId 是否已赋值
                     */
                    bool CustomUserIdHasBeenSet() const;

                    /**
                     * 获取签署人手机号
                     * @return Mobile 签署人手机号
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置签署人手机号
                     * @param Mobile 签署人手机号
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取签署顺序
                     * @return SignOrder 签署顺序
                     */
                    int64_t GetSignOrder() const;

                    /**
                     * 设置签署顺序
                     * @param SignOrder 签署顺序
                     */
                    void SetSignOrder(const int64_t& _signOrder);

                    /**
                     * 判断参数 SignOrder 是否已赋值
                     * @return SignOrder 是否已赋值
                     */
                    bool SignOrderHasBeenSet() const;

                    /**
                     * 获取签署人签署时间
                     * @return ApproveTime 签署人签署时间
                     */
                    int64_t GetApproveTime() const;

                    /**
                     * 设置签署人签署时间
                     * @param ApproveTime 签署人签署时间
                     */
                    void SetApproveTime(const int64_t& _approveTime);

                    /**
                     * 判断参数 ApproveTime 是否已赋值
                     * @return ApproveTime 是否已赋值
                     */
                    bool ApproveTimeHasBeenSet() const;

                    /**
                     * 获取参与者类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproveType 参与者类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetApproveType() const;

                    /**
                     * 设置参与者类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApproveType 参与者类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApproveType(const std::string& _approveType);

                    /**
                     * 判断参数 ApproveType 是否已赋值
                     * @return ApproveType 是否已赋值
                     */
                    bool ApproveTypeHasBeenSet() const;

                    /**
                     * 获取签署人侧用户来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproverSource 签署人侧用户来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetApproverSource() const;

                    /**
                     * 设置签署人侧用户来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApproverSource 签署人侧用户来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApproverSource(const std::string& _approverSource);

                    /**
                     * 判断参数 ApproverSource 是否已赋值
                     * @return ApproverSource 是否已赋值
                     */
                    bool ApproverSourceHasBeenSet() const;

                    /**
                     * 获取客户自定义签署人标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomApproverTag 客户自定义签署人标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCustomApproverTag() const;

                    /**
                     * 设置客户自定义签署人标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CustomApproverTag 客户自定义签署人标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCustomApproverTag(const std::string& _customApproverTag);

                    /**
                     * 判断参数 CustomApproverTag 是否已赋值
                     * @return CustomApproverTag 是否已赋值
                     */
                    bool CustomApproverTagHasBeenSet() const;

                    /**
                     * 获取签署人企业Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrganizationId 签署人企业Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOrganizationId() const;

                    /**
                     * 设置签署人企业Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OrganizationId 签署人企业Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOrganizationId(const std::string& _organizationId);

                    /**
                     * 判断参数 OrganizationId 是否已赋值
                     * @return OrganizationId 是否已赋值
                     */
                    bool OrganizationIdHasBeenSet() const;

                    /**
                     * 获取签署人企业名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrganizationName 签署人企业名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置签署人企业名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OrganizationName 签署人企业名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOrganizationName(const std::string& _organizationName);

                    /**
                     * 判断参数 OrganizationName 是否已赋值
                     * @return OrganizationName 是否已赋值
                     */
                    bool OrganizationNameHasBeenSet() const;

                private:

                    /**
                     * 签署人信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_approveMessage;
                    bool m_approveMessageHasBeenSet;

                    /**
                     * 签署人名字
                     */
                    std::string m_approveName;
                    bool m_approveNameHasBeenSet;

                    /**
                     * 签署人的状态
                     */
                    int64_t m_approveStatus;
                    bool m_approveStatusHasBeenSet;

                    /**
                     * 模板配置时候的签署人id,与控件绑定
                     */
                    std::string m_receiptId;
                    bool m_receiptIdHasBeenSet;

                    /**
                     * 客户自定义userId
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
                     * 签署顺序
                     */
                    int64_t m_signOrder;
                    bool m_signOrderHasBeenSet;

                    /**
                     * 签署人签署时间
                     */
                    int64_t m_approveTime;
                    bool m_approveTimeHasBeenSet;

                    /**
                     * 参与者类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_approveType;
                    bool m_approveTypeHasBeenSet;

                    /**
                     * 签署人侧用户来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_approverSource;
                    bool m_approverSourceHasBeenSet;

                    /**
                     * 客户自定义签署人标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_customApproverTag;
                    bool m_customApproverTagHasBeenSet;

                    /**
                     * 签署人企业Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_organizationId;
                    bool m_organizationIdHasBeenSet;

                    /**
                     * 签署人企业名称
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
