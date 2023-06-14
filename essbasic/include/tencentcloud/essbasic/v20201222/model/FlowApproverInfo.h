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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_FLOWAPPROVERINFO_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_FLOWAPPROVERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20201222/model/ComponentSeal.h>
#include <tencentcloud/essbasic/v20201222/model/SmsTemplate.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * 此结构体 (FlowApproverInfo) 用于描述流程参与者信息。
                */
                class FlowApproverInfo : public AbstractModel
                {
                public:
                    FlowApproverInfo();
                    ~FlowApproverInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户ID
                     * @return UserId 用户ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户ID
                     * @param _userId 用户ID
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取认证方式：
WEIXINAPP - 微信小程序；
FACEID - 慧眼 (默认)；
VERIFYCODE - 验证码；
THIRD - 第三方 (暂不支持)
                     * @return VerifyChannel 认证方式：
WEIXINAPP - 微信小程序；
FACEID - 慧眼 (默认)；
VERIFYCODE - 验证码；
THIRD - 第三方 (暂不支持)
                     * 
                     */
                    std::vector<std::string> GetVerifyChannel() const;

                    /**
                     * 设置认证方式：
WEIXINAPP - 微信小程序；
FACEID - 慧眼 (默认)；
VERIFYCODE - 验证码；
THIRD - 第三方 (暂不支持)
                     * @param _verifyChannel 认证方式：
WEIXINAPP - 微信小程序；
FACEID - 慧眼 (默认)；
VERIFYCODE - 验证码；
THIRD - 第三方 (暂不支持)
                     * 
                     */
                    void SetVerifyChannel(const std::vector<std::string>& _verifyChannel);

                    /**
                     * 判断参数 VerifyChannel 是否已赋值
                     * @return VerifyChannel 是否已赋值
                     * 
                     */
                    bool VerifyChannelHasBeenSet() const;

                    /**
                     * 获取签署状态：
0 - 待签署；
1- 已签署；
2 - 拒绝；
3 - 过期未处理；
4 - 流程已撤回,
12-审核中,
13-审核驳回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproveStatus 签署状态：
0 - 待签署；
1- 已签署；
2 - 拒绝；
3 - 过期未处理；
4 - 流程已撤回,
12-审核中,
13-审核驳回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetApproveStatus() const;

                    /**
                     * 设置签署状态：
0 - 待签署；
1- 已签署；
2 - 拒绝；
3 - 过期未处理；
4 - 流程已撤回,
12-审核中,
13-审核驳回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _approveStatus 签署状态：
0 - 待签署；
1- 已签署；
2 - 拒绝；
3 - 过期未处理；
4 - 流程已撤回,
12-审核中,
13-审核驳回
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取拒签/签署/审核驳回原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproveMessage 拒签/签署/审核驳回原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApproveMessage() const;

                    /**
                     * 设置拒签/签署/审核驳回原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _approveMessage 拒签/签署/审核驳回原因
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
                     * 获取签约时间的时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproveTime 签约时间的时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetApproveTime() const;

                    /**
                     * 设置签约时间的时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _approveTime 签约时间的时间戳
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取签署企业ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubOrganizationId 签署企业ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubOrganizationId() const;

                    /**
                     * 设置签署企业ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subOrganizationId 签署企业ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubOrganizationId(const std::string& _subOrganizationId);

                    /**
                     * 判断参数 SubOrganizationId 是否已赋值
                     * @return SubOrganizationId 是否已赋值
                     * 
                     */
                    bool SubOrganizationIdHasBeenSet() const;

                    /**
                     * 获取签署完成后跳转的URL
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JumpUrl 签署完成后跳转的URL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJumpUrl() const;

                    /**
                     * 设置签署完成后跳转的URL
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jumpUrl 签署完成后跳转的URL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJumpUrl(const std::string& _jumpUrl);

                    /**
                     * 判断参数 JumpUrl 是否已赋值
                     * @return JumpUrl 是否已赋值
                     * 
                     */
                    bool JumpUrlHasBeenSet() const;

                    /**
                     * 获取用户签署区ID到印章ID的映射集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComponentSeals 用户签署区ID到印章ID的映射集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ComponentSeal> GetComponentSeals() const;

                    /**
                     * 设置用户签署区ID到印章ID的映射集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _componentSeals 用户签署区ID到印章ID的映射集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComponentSeals(const std::vector<ComponentSeal>& _componentSeals);

                    /**
                     * 判断参数 ComponentSeals 是否已赋值
                     * @return ComponentSeals 是否已赋值
                     * 
                     */
                    bool ComponentSealsHasBeenSet() const;

                    /**
                     * 获取签署前置条件：是否强制用户全文阅读，即阅读到待签署文档的最后一页。默认FALSE
                     * @return IsFullText 签署前置条件：是否强制用户全文阅读，即阅读到待签署文档的最后一页。默认FALSE
                     * 
                     */
                    bool GetIsFullText() const;

                    /**
                     * 设置签署前置条件：是否强制用户全文阅读，即阅读到待签署文档的最后一页。默认FALSE
                     * @param _isFullText 签署前置条件：是否强制用户全文阅读，即阅读到待签署文档的最后一页。默认FALSE
                     * 
                     */
                    void SetIsFullText(const bool& _isFullText);

                    /**
                     * 判断参数 IsFullText 是否已赋值
                     * @return IsFullText 是否已赋值
                     * 
                     */
                    bool IsFullTextHasBeenSet() const;

                    /**
                     * 获取签署前置条件：强制阅读时长，页面停留时长不足则不允许签署。默认不限制
                     * @return PreReadTime 签署前置条件：强制阅读时长，页面停留时长不足则不允许签署。默认不限制
                     * 
                     */
                    int64_t GetPreReadTime() const;

                    /**
                     * 设置签署前置条件：强制阅读时长，页面停留时长不足则不允许签署。默认不限制
                     * @param _preReadTime 签署前置条件：强制阅读时长，页面停留时长不足则不允许签署。默认不限制
                     * 
                     */
                    void SetPreReadTime(const int64_t& _preReadTime);

                    /**
                     * 判断参数 PreReadTime 是否已赋值
                     * @return PreReadTime 是否已赋值
                     * 
                     */
                    bool PreReadTimeHasBeenSet() const;

                    /**
                     * 获取签署人手机号，脱敏显示
                     * @return Mobile 签署人手机号，脱敏显示
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置签署人手机号，脱敏显示
                     * @param _mobile 签署人手机号，脱敏显示
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
                     * 获取签署链接截止时间，默认签署流程发起后7天失效
                     * @return Deadline 签署链接截止时间，默认签署流程发起后7天失效
                     * 
                     */
                    int64_t GetDeadline() const;

                    /**
                     * 设置签署链接截止时间，默认签署流程发起后7天失效
                     * @param _deadline 签署链接截止时间，默认签署流程发起后7天失效
                     * 
                     */
                    void SetDeadline(const int64_t& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     * 
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取是否为最后一个签署人, 若为最后一人，则其签署完成后自动归档
                     * @return IsLastApprover 是否为最后一个签署人, 若为最后一人，则其签署完成后自动归档
                     * 
                     */
                    bool GetIsLastApprover() const;

                    /**
                     * 设置是否为最后一个签署人, 若为最后一人，则其签署完成后自动归档
                     * @param _isLastApprover 是否为最后一个签署人, 若为最后一人，则其签署完成后自动归档
                     * 
                     */
                    void SetIsLastApprover(const bool& _isLastApprover);

                    /**
                     * 判断参数 IsLastApprover 是否已赋值
                     * @return IsLastApprover 是否已赋值
                     * 
                     */
                    bool IsLastApproverHasBeenSet() const;

                    /**
                     * 获取短信模板
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SmsTemplate 短信模板
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SmsTemplate GetSmsTemplate() const;

                    /**
                     * 设置短信模板
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _smsTemplate 短信模板
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSmsTemplate(const SmsTemplate& _smsTemplate);

                    /**
                     * 判断参数 SmsTemplate 是否已赋值
                     * @return SmsTemplate 是否已赋值
                     * 
                     */
                    bool SmsTemplateHasBeenSet() const;

                    /**
                     * 获取身份证号，脱敏显示
                     * @return IdCardNumber 身份证号，脱敏显示
                     * 
                     */
                    std::string GetIdCardNumber() const;

                    /**
                     * 设置身份证号，脱敏显示
                     * @param _idCardNumber 身份证号，脱敏显示
                     * 
                     */
                    void SetIdCardNumber(const std::string& _idCardNumber);

                    /**
                     * 判断参数 IdCardNumber 是否已赋值
                     * @return IdCardNumber 是否已赋值
                     * 
                     */
                    bool IdCardNumberHasBeenSet() const;

                    /**
                     * 获取用户姓名
                     * @return Name 用户姓名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置用户姓名
                     * @param _name 用户姓名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取是否支持线下核身
                     * @return CanOffLine 是否支持线下核身
                     * 
                     */
                    bool GetCanOffLine() const;

                    /**
                     * 设置是否支持线下核身
                     * @param _canOffLine 是否支持线下核身
                     * 
                     */
                    void SetCanOffLine(const bool& _canOffLine);

                    /**
                     * 判断参数 CanOffLine 是否已赋值
                     * @return CanOffLine 是否已赋值
                     * 
                     */
                    bool CanOffLineHasBeenSet() const;

                    /**
                     * 获取证件号码类型：ID_CARD - 身份证，PASSPORT - 护照，MAINLAND_TRAVEL_PERMIT_FOR_HONGKONG_AND_MACAO_RESIDENTS - 港澳居民来往内地通行证; 暂不支持用于电子签自有平台实名认证，MAINLAND_TRAVEL_PERMIT_FOR_TAIWAN_RESIDENTS - 台湾居民来往大陆通行证; 暂不支持用于电子签自有平台实名认证，HOUSEHOLD_REGISTER - 户口本; 暂不支持用于电子签自有平台实名认证，TEMP_ID_CARD - 临时居民身份证; 暂不支持用于电子签自有平台实名认证
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdCardType 证件号码类型：ID_CARD - 身份证，PASSPORT - 护照，MAINLAND_TRAVEL_PERMIT_FOR_HONGKONG_AND_MACAO_RESIDENTS - 港澳居民来往内地通行证; 暂不支持用于电子签自有平台实名认证，MAINLAND_TRAVEL_PERMIT_FOR_TAIWAN_RESIDENTS - 台湾居民来往大陆通行证; 暂不支持用于电子签自有平台实名认证，HOUSEHOLD_REGISTER - 户口本; 暂不支持用于电子签自有平台实名认证，TEMP_ID_CARD - 临时居民身份证; 暂不支持用于电子签自有平台实名认证
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIdCardType() const;

                    /**
                     * 设置证件号码类型：ID_CARD - 身份证，PASSPORT - 护照，MAINLAND_TRAVEL_PERMIT_FOR_HONGKONG_AND_MACAO_RESIDENTS - 港澳居民来往内地通行证; 暂不支持用于电子签自有平台实名认证，MAINLAND_TRAVEL_PERMIT_FOR_TAIWAN_RESIDENTS - 台湾居民来往大陆通行证; 暂不支持用于电子签自有平台实名认证，HOUSEHOLD_REGISTER - 户口本; 暂不支持用于电子签自有平台实名认证，TEMP_ID_CARD - 临时居民身份证; 暂不支持用于电子签自有平台实名认证
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _idCardType 证件号码类型：ID_CARD - 身份证，PASSPORT - 护照，MAINLAND_TRAVEL_PERMIT_FOR_HONGKONG_AND_MACAO_RESIDENTS - 港澳居民来往内地通行证; 暂不支持用于电子签自有平台实名认证，MAINLAND_TRAVEL_PERMIT_FOR_TAIWAN_RESIDENTS - 台湾居民来往大陆通行证; 暂不支持用于电子签自有平台实名认证，HOUSEHOLD_REGISTER - 户口本; 暂不支持用于电子签自有平台实名认证，TEMP_ID_CARD - 临时居民身份证; 暂不支持用于电子签自有平台实名认证
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIdCardType(const std::string& _idCardType);

                    /**
                     * 判断参数 IdCardType 是否已赋值
                     * @return IdCardType 是否已赋值
                     * 
                     */
                    bool IdCardTypeHasBeenSet() const;

                    /**
                     * 获取签署回调地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CallbackUrl 签署回调地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置签署回调地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _callbackUrl 签署回调地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取签署任务ID，标识每一次的流程发送
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SignId 签署任务ID，标识每一次的流程发送
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSignId() const;

                    /**
                     * 设置签署任务ID，标识每一次的流程发送
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _signId 签署任务ID，标识每一次的流程发送
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSignId(const std::string& _signId);

                    /**
                     * 判断参数 SignId 是否已赋值
                     * @return SignId 是否已赋值
                     * 
                     */
                    bool SignIdHasBeenSet() const;

                private:

                    /**
                     * 用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 认证方式：
WEIXINAPP - 微信小程序；
FACEID - 慧眼 (默认)；
VERIFYCODE - 验证码；
THIRD - 第三方 (暂不支持)
                     */
                    std::vector<std::string> m_verifyChannel;
                    bool m_verifyChannelHasBeenSet;

                    /**
                     * 签署状态：
0 - 待签署；
1- 已签署；
2 - 拒绝；
3 - 过期未处理；
4 - 流程已撤回,
12-审核中,
13-审核驳回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_approveStatus;
                    bool m_approveStatusHasBeenSet;

                    /**
                     * 拒签/签署/审核驳回原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_approveMessage;
                    bool m_approveMessageHasBeenSet;

                    /**
                     * 签约时间的时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_approveTime;
                    bool m_approveTimeHasBeenSet;

                    /**
                     * 签署企业ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subOrganizationId;
                    bool m_subOrganizationIdHasBeenSet;

                    /**
                     * 签署完成后跳转的URL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jumpUrl;
                    bool m_jumpUrlHasBeenSet;

                    /**
                     * 用户签署区ID到印章ID的映射集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ComponentSeal> m_componentSeals;
                    bool m_componentSealsHasBeenSet;

                    /**
                     * 签署前置条件：是否强制用户全文阅读，即阅读到待签署文档的最后一页。默认FALSE
                     */
                    bool m_isFullText;
                    bool m_isFullTextHasBeenSet;

                    /**
                     * 签署前置条件：强制阅读时长，页面停留时长不足则不允许签署。默认不限制
                     */
                    int64_t m_preReadTime;
                    bool m_preReadTimeHasBeenSet;

                    /**
                     * 签署人手机号，脱敏显示
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 签署链接截止时间，默认签署流程发起后7天失效
                     */
                    int64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 是否为最后一个签署人, 若为最后一人，则其签署完成后自动归档
                     */
                    bool m_isLastApprover;
                    bool m_isLastApproverHasBeenSet;

                    /**
                     * 短信模板
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SmsTemplate m_smsTemplate;
                    bool m_smsTemplateHasBeenSet;

                    /**
                     * 身份证号，脱敏显示
                     */
                    std::string m_idCardNumber;
                    bool m_idCardNumberHasBeenSet;

                    /**
                     * 用户姓名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 是否支持线下核身
                     */
                    bool m_canOffLine;
                    bool m_canOffLineHasBeenSet;

                    /**
                     * 证件号码类型：ID_CARD - 身份证，PASSPORT - 护照，MAINLAND_TRAVEL_PERMIT_FOR_HONGKONG_AND_MACAO_RESIDENTS - 港澳居民来往内地通行证; 暂不支持用于电子签自有平台实名认证，MAINLAND_TRAVEL_PERMIT_FOR_TAIWAN_RESIDENTS - 台湾居民来往大陆通行证; 暂不支持用于电子签自有平台实名认证，HOUSEHOLD_REGISTER - 户口本; 暂不支持用于电子签自有平台实名认证，TEMP_ID_CARD - 临时居民身份证; 暂不支持用于电子签自有平台实名认证
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_idCardType;
                    bool m_idCardTypeHasBeenSet;

                    /**
                     * 签署回调地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 签署任务ID，标识每一次的流程发送
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_signId;
                    bool m_signIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_FLOWAPPROVERINFO_H_
