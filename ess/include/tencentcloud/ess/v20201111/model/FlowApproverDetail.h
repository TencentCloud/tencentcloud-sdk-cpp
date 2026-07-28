/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
#include <tencentcloud/ess/v20201111/model/ForwardRecord.h>


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
                     * 获取<p>签署时的相关信息</p>
                     * @return ApproveMessage <p>签署时的相关信息</p>
                     * 
                     */
                    std::string GetApproveMessage() const;

                    /**
                     * 设置<p>签署时的相关信息</p>
                     * @param _approveMessage <p>签署时的相关信息</p>
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
                     * 获取<p>签署方姓名</p>
                     * @return ApproveName <p>签署方姓名</p>
                     * 
                     */
                    std::string GetApproveName() const;

                    /**
                     * 设置<p>签署方姓名</p>
                     * @param _approveName <p>签署方姓名</p>
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
                     * 获取<p>签署方的签署状态<br>0：还没有发起<br>1：流程中 没有开始处理<br>2：待签署<br>3：已签署<br>4：已拒绝<br>5：已过期<br>6：已撤销<br>7：还没有预发起<br>8：待填写<br>9：因为各种原因而终止<br>10：填写完成<br>15：已解除<br>19：转他人处理</p>
                     * @return ApproveStatus <p>签署方的签署状态<br>0：还没有发起<br>1：流程中 没有开始处理<br>2：待签署<br>3：已签署<br>4：已拒绝<br>5：已过期<br>6：已撤销<br>7：还没有预发起<br>8：待填写<br>9：因为各种原因而终止<br>10：填写完成<br>15：已解除<br>19：转他人处理</p>
                     * 
                     */
                    int64_t GetApproveStatus() const;

                    /**
                     * 设置<p>签署方的签署状态<br>0：还没有发起<br>1：流程中 没有开始处理<br>2：待签署<br>3：已签署<br>4：已拒绝<br>5：已过期<br>6：已撤销<br>7：还没有预发起<br>8：待填写<br>9：因为各种原因而终止<br>10：填写完成<br>15：已解除<br>19：转他人处理</p>
                     * @param _approveStatus <p>签署方的签署状态<br>0：还没有发起<br>1：流程中 没有开始处理<br>2：待签署<br>3：已签署<br>4：已拒绝<br>5：已过期<br>6：已撤销<br>7：还没有预发起<br>8：待填写<br>9：因为各种原因而终止<br>10：填写完成<br>15：已解除<br>19：转他人处理</p>
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
                     * 获取<p>模板配置中的参与方ID,与控件绑定</p>
                     * @return ReceiptId <p>模板配置中的参与方ID,与控件绑定</p>
                     * @deprecated
                     */
                    std::string GetReceiptId() const;

                    /**
                     * 设置<p>模板配置中的参与方ID,与控件绑定</p>
                     * @param _receiptId <p>模板配置中的参与方ID,与控件绑定</p>
                     * @deprecated
                     */
                    void SetReceiptId(const std::string& _receiptId);

                    /**
                     * 判断参数 ReceiptId 是否已赋值
                     * @return ReceiptId 是否已赋值
                     * @deprecated
                     */
                    bool ReceiptIdHasBeenSet() const;

                    /**
                     * 获取<p>客户自定义的用户ID</p>
                     * @return CustomUserId <p>客户自定义的用户ID</p>
                     * 
                     */
                    std::string GetCustomUserId() const;

                    /**
                     * 设置<p>客户自定义的用户ID</p>
                     * @param _customUserId <p>客户自定义的用户ID</p>
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
                     * 获取<p>签署人手机号</p>
                     * @return Mobile <p>签署人手机号</p>
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置<p>签署人手机号</p>
                     * @param _mobile <p>签署人手机号</p>
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
                     * 获取<p>签署顺序，如果是有序签署，签署顺序从小到大</p>
                     * @return SignOrder <p>签署顺序，如果是有序签署，签署顺序从小到大</p>
                     * 
                     */
                    int64_t GetSignOrder() const;

                    /**
                     * 设置<p>签署顺序，如果是有序签署，签署顺序从小到大</p>
                     * @param _signOrder <p>签署顺序，如果是有序签署，签署顺序从小到大</p>
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
                     * 获取<p>签署人签署时间，时间戳，单位秒</p>
                     * @return ApproveTime <p>签署人签署时间，时间戳，单位秒</p>
                     * 
                     */
                    int64_t GetApproveTime() const;

                    /**
                     * 设置<p>签署人签署时间，时间戳，单位秒</p>
                     * @param _approveTime <p>签署人签署时间，时间戳，单位秒</p>
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
                     * 获取<p>签署方类型，ORGANIZATION-企业员工，PERSON-个人，ENTERPRISESERVER-企业静默签</p>
                     * @return ApproveType <p>签署方类型，ORGANIZATION-企业员工，PERSON-个人，ENTERPRISESERVER-企业静默签</p>
                     * 
                     */
                    std::string GetApproveType() const;

                    /**
                     * 设置<p>签署方类型，ORGANIZATION-企业员工，PERSON-个人，ENTERPRISESERVER-企业静默签</p>
                     * @param _approveType <p>签署方类型，ORGANIZATION-企业员工，PERSON-个人，ENTERPRISESERVER-企业静默签</p>
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
                     * 获取<p>签署方侧用户来源，如WEWORKAPP-企业微信等</p>
                     * @return ApproverSource <p>签署方侧用户来源，如WEWORKAPP-企业微信等</p>
                     * 
                     */
                    std::string GetApproverSource() const;

                    /**
                     * 设置<p>签署方侧用户来源，如WEWORKAPP-企业微信等</p>
                     * @param _approverSource <p>签署方侧用户来源，如WEWORKAPP-企业微信等</p>
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
                     * 获取<p>客户自定义签署方标识</p>
                     * @return CustomApproverTag <p>客户自定义签署方标识</p>
                     * 
                     */
                    std::string GetCustomApproverTag() const;

                    /**
                     * 设置<p>客户自定义签署方标识</p>
                     * @param _customApproverTag <p>客户自定义签署方标识</p>
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
                     * 获取<p>签署方企业Id</p>
                     * @return OrganizationId <p>签署方企业Id</p>
                     * 
                     */
                    std::string GetOrganizationId() const;

                    /**
                     * 设置<p>签署方企业Id</p>
                     * @param _organizationId <p>签署方企业Id</p>
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
                     * 获取<p>签署方企业名称</p>
                     * @return OrganizationName <p>签署方企业名称</p>
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置<p>签署方企业名称</p>
                     * @param _organizationName <p>签署方企业名称</p>
                     * 
                     */
                    void SetOrganizationName(const std::string& _organizationName);

                    /**
                     * 判断参数 OrganizationName 是否已赋值
                     * @return OrganizationName 是否已赋值
                     * 
                     */
                    bool OrganizationNameHasBeenSet() const;

                    /**
                     * 获取<p>签署参与人在本流程中的编号ID（每个流程不同），可用此ID来定位签署参与人在本流程的签署节点，也可用于后续创建签署链接等操作。</p>
                     * @return SignId <p>签署参与人在本流程中的编号ID（每个流程不同），可用此ID来定位签署参与人在本流程的签署节点，也可用于后续创建签署链接等操作。</p>
                     * 
                     */
                    std::string GetSignId() const;

                    /**
                     * 设置<p>签署参与人在本流程中的编号ID（每个流程不同），可用此ID来定位签署参与人在本流程的签署节点，也可用于后续创建签署链接等操作。</p>
                     * @param _signId <p>签署参与人在本流程中的编号ID（每个流程不同），可用此ID来定位签署参与人在本流程的签署节点，也可用于后续创建签署链接等操作。</p>
                     * 
                     */
                    void SetSignId(const std::string& _signId);

                    /**
                     * 判断参数 SignId 是否已赋值
                     * @return SignId 是否已赋值
                     * 
                     */
                    bool SignIdHasBeenSet() const;

                    /**
                     * 获取<p>自定义签署人角色</p>
                     * @return ApproverRoleName <p>自定义签署人角色</p>
                     * 
                     */
                    std::string GetApproverRoleName() const;

                    /**
                     * 设置<p>自定义签署人角色</p>
                     * @param _approverRoleName <p>自定义签署人角色</p>
                     * 
                     */
                    void SetApproverRoleName(const std::string& _approverRoleName);

                    /**
                     * 判断参数 ApproverRoleName 是否已赋值
                     * @return ApproverRoleName 是否已赋值
                     * 
                     */
                    bool ApproverRoleNameHasBeenSet() const;

                    /**
                     * 获取<p>模板配置中的参与方ID,与控件绑定</p>
                     * @return RecipientId <p>模板配置中的参与方ID,与控件绑定</p>
                     * 
                     */
                    std::string GetRecipientId() const;

                    /**
                     * 设置<p>模板配置中的参与方ID,与控件绑定</p>
                     * @param _recipientId <p>模板配置中的参与方ID,与控件绑定</p>
                     * 
                     */
                    void SetRecipientId(const std::string& _recipientId);

                    /**
                     * 判断参数 RecipientId 是否已赋值
                     * @return RecipientId 是否已赋值
                     * 
                     */
                    bool RecipientIdHasBeenSet() const;

                    /**
                     * 获取<p>签署方转交记录列表，标识该签署方是由谁转交而来，按转交时间由远到近进行排序</p>
                     * @return ForwardRecords <p>签署方转交记录列表，标识该签署方是由谁转交而来，按转交时间由远到近进行排序</p>
                     * 
                     */
                    std::vector<ForwardRecord> GetForwardRecords() const;

                    /**
                     * 设置<p>签署方转交记录列表，标识该签署方是由谁转交而来，按转交时间由远到近进行排序</p>
                     * @param _forwardRecords <p>签署方转交记录列表，标识该签署方是由谁转交而来，按转交时间由远到近进行排序</p>
                     * 
                     */
                    void SetForwardRecords(const std::vector<ForwardRecord>& _forwardRecords);

                    /**
                     * 判断参数 ForwardRecords 是否已赋值
                     * @return ForwardRecords 是否已赋值
                     * 
                     */
                    bool ForwardRecordsHasBeenSet() const;

                private:

                    /**
                     * <p>签署时的相关信息</p>
                     */
                    std::string m_approveMessage;
                    bool m_approveMessageHasBeenSet;

                    /**
                     * <p>签署方姓名</p>
                     */
                    std::string m_approveName;
                    bool m_approveNameHasBeenSet;

                    /**
                     * <p>签署方的签署状态<br>0：还没有发起<br>1：流程中 没有开始处理<br>2：待签署<br>3：已签署<br>4：已拒绝<br>5：已过期<br>6：已撤销<br>7：还没有预发起<br>8：待填写<br>9：因为各种原因而终止<br>10：填写完成<br>15：已解除<br>19：转他人处理</p>
                     */
                    int64_t m_approveStatus;
                    bool m_approveStatusHasBeenSet;

                    /**
                     * <p>模板配置中的参与方ID,与控件绑定</p>
                     */
                    std::string m_receiptId;
                    bool m_receiptIdHasBeenSet;

                    /**
                     * <p>客户自定义的用户ID</p>
                     */
                    std::string m_customUserId;
                    bool m_customUserIdHasBeenSet;

                    /**
                     * <p>签署人手机号</p>
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * <p>签署顺序，如果是有序签署，签署顺序从小到大</p>
                     */
                    int64_t m_signOrder;
                    bool m_signOrderHasBeenSet;

                    /**
                     * <p>签署人签署时间，时间戳，单位秒</p>
                     */
                    int64_t m_approveTime;
                    bool m_approveTimeHasBeenSet;

                    /**
                     * <p>签署方类型，ORGANIZATION-企业员工，PERSON-个人，ENTERPRISESERVER-企业静默签</p>
                     */
                    std::string m_approveType;
                    bool m_approveTypeHasBeenSet;

                    /**
                     * <p>签署方侧用户来源，如WEWORKAPP-企业微信等</p>
                     */
                    std::string m_approverSource;
                    bool m_approverSourceHasBeenSet;

                    /**
                     * <p>客户自定义签署方标识</p>
                     */
                    std::string m_customApproverTag;
                    bool m_customApproverTagHasBeenSet;

                    /**
                     * <p>签署方企业Id</p>
                     */
                    std::string m_organizationId;
                    bool m_organizationIdHasBeenSet;

                    /**
                     * <p>签署方企业名称</p>
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * <p>签署参与人在本流程中的编号ID（每个流程不同），可用此ID来定位签署参与人在本流程的签署节点，也可用于后续创建签署链接等操作。</p>
                     */
                    std::string m_signId;
                    bool m_signIdHasBeenSet;

                    /**
                     * <p>自定义签署人角色</p>
                     */
                    std::string m_approverRoleName;
                    bool m_approverRoleNameHasBeenSet;

                    /**
                     * <p>模板配置中的参与方ID,与控件绑定</p>
                     */
                    std::string m_recipientId;
                    bool m_recipientIdHasBeenSet;

                    /**
                     * <p>签署方转交记录列表，标识该签署方是由谁转交而来，按转交时间由远到近进行排序</p>
                     */
                    std::vector<ForwardRecord> m_forwardRecords;
                    bool m_forwardRecordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_FLOWAPPROVERDETAIL_H_
