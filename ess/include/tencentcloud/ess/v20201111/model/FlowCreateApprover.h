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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_FLOWCREATEAPPROVER_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_FLOWCREATEAPPROVER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/RegisterInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 创建流程的签署方信息
                */
                class FlowCreateApprover : public AbstractModel
                {
                public:
                    FlowCreateApprover();
                    ~FlowCreateApprover() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参与者类型：
0：企业
1：个人
3：企业静默签署
注：类型为3（企业静默签署）时，此接口会默认完成该签署方的签署。静默签署仅进行盖章操作，不能自动签名。
                     * @return ApproverType 参与者类型：
0：企业
1：个人
3：企业静默签署
注：类型为3（企业静默签署）时，此接口会默认完成该签署方的签署。静默签署仅进行盖章操作，不能自动签名。
                     */
                    int64_t GetApproverType() const;

                    /**
                     * 设置参与者类型：
0：企业
1：个人
3：企业静默签署
注：类型为3（企业静默签署）时，此接口会默认完成该签署方的签署。静默签署仅进行盖章操作，不能自动签名。
                     * @param ApproverType 参与者类型：
0：企业
1：个人
3：企业静默签署
注：类型为3（企业静默签署）时，此接口会默认完成该签署方的签署。静默签署仅进行盖章操作，不能自动签名。
                     */
                    void SetApproverType(const int64_t& _approverType);

                    /**
                     * 判断参数 ApproverType 是否已赋值
                     * @return ApproverType 是否已赋值
                     */
                    bool ApproverTypeHasBeenSet() const;

                    /**
                     * 获取如果签署方为企业，需要填入企业全称
                     * @return OrganizationName 如果签署方为企业，需要填入企业全称
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置如果签署方为企业，需要填入企业全称
                     * @param OrganizationName 如果签署方为企业，需要填入企业全称
                     */
                    void SetOrganizationName(const std::string& _organizationName);

                    /**
                     * 判断参数 OrganizationName 是否已赋值
                     * @return OrganizationName 是否已赋值
                     */
                    bool OrganizationNameHasBeenSet() const;

                    /**
                     * 获取签署方经办人姓名
                     * @return ApproverName 签署方经办人姓名
                     */
                    std::string GetApproverName() const;

                    /**
                     * 设置签署方经办人姓名
                     * @param ApproverName 签署方经办人姓名
                     */
                    void SetApproverName(const std::string& _approverName);

                    /**
                     * 判断参数 ApproverName 是否已赋值
                     * @return ApproverName 是否已赋值
                     */
                    bool ApproverNameHasBeenSet() const;

                    /**
                     * 获取签署方经办人手机号码
                     * @return ApproverMobile 签署方经办人手机号码
                     */
                    std::string GetApproverMobile() const;

                    /**
                     * 设置签署方经办人手机号码
                     * @param ApproverMobile 签署方经办人手机号码
                     */
                    void SetApproverMobile(const std::string& _approverMobile);

                    /**
                     * 判断参数 ApproverMobile 是否已赋值
                     * @return ApproverMobile 是否已赋值
                     */
                    bool ApproverMobileHasBeenSet() const;

                    /**
                     * 获取签署方经办人证件类型ID_CARD 身份证
HONGKONG_AND_MACAO 港澳居民来往内地通行证
HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)
                     * @return ApproverIdCardType 签署方经办人证件类型ID_CARD 身份证
HONGKONG_AND_MACAO 港澳居民来往内地通行证
HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)
                     */
                    std::string GetApproverIdCardType() const;

                    /**
                     * 设置签署方经办人证件类型ID_CARD 身份证
HONGKONG_AND_MACAO 港澳居民来往内地通行证
HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)
                     * @param ApproverIdCardType 签署方经办人证件类型ID_CARD 身份证
HONGKONG_AND_MACAO 港澳居民来往内地通行证
HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)
                     */
                    void SetApproverIdCardType(const std::string& _approverIdCardType);

                    /**
                     * 判断参数 ApproverIdCardType 是否已赋值
                     * @return ApproverIdCardType 是否已赋值
                     */
                    bool ApproverIdCardTypeHasBeenSet() const;

                    /**
                     * 获取签署方经办人证件号码
                     * @return ApproverIdCardNumber 签署方经办人证件号码
                     */
                    std::string GetApproverIdCardNumber() const;

                    /**
                     * 设置签署方经办人证件号码
                     * @param ApproverIdCardNumber 签署方经办人证件号码
                     */
                    void SetApproverIdCardNumber(const std::string& _approverIdCardNumber);

                    /**
                     * 判断参数 ApproverIdCardNumber 是否已赋值
                     * @return ApproverIdCardNumber 是否已赋值
                     */
                    bool ApproverIdCardNumberHasBeenSet() const;

                    /**
                     * 获取签署方经办人在模板中的角色ID
                     * @return RecipientId 签署方经办人在模板中的角色ID
                     */
                    std::string GetRecipientId() const;

                    /**
                     * 设置签署方经办人在模板中的角色ID
                     * @param RecipientId 签署方经办人在模板中的角色ID
                     */
                    void SetRecipientId(const std::string& _recipientId);

                    /**
                     * 判断参数 RecipientId 是否已赋值
                     * @return RecipientId 是否已赋值
                     */
                    bool RecipientIdHasBeenSet() const;

                    /**
                     * 获取签署意愿确认渠道,WEIXINAPP:人脸识别
                     * @return VerifyChannel 签署意愿确认渠道,WEIXINAPP:人脸识别
                     */
                    std::vector<std::string> GetVerifyChannel() const;

                    /**
                     * 设置签署意愿确认渠道,WEIXINAPP:人脸识别
                     * @param VerifyChannel 签署意愿确认渠道,WEIXINAPP:人脸识别
                     */
                    void SetVerifyChannel(const std::vector<std::string>& _verifyChannel);

                    /**
                     * 判断参数 VerifyChannel 是否已赋值
                     * @return VerifyChannel 是否已赋值
                     */
                    bool VerifyChannelHasBeenSet() const;

                    /**
                     * 获取是否发送短信，sms--短信通知，none--不通知，默认为sms
                     * @return NotifyType 是否发送短信，sms--短信通知，none--不通知，默认为sms
                     */
                    std::string GetNotifyType() const;

                    /**
                     * 设置是否发送短信，sms--短信通知，none--不通知，默认为sms
                     * @param NotifyType 是否发送短信，sms--短信通知，none--不通知，默认为sms
                     */
                    void SetNotifyType(const std::string& _notifyType);

                    /**
                     * 判断参数 NotifyType 是否已赋值
                     * @return NotifyType 是否已赋值
                     */
                    bool NotifyTypeHasBeenSet() const;

                    /**
                     * 获取签署前置条件：是否需要阅读全文，默认为不需要
                     * @return IsFullText 签署前置条件：是否需要阅读全文，默认为不需要
                     */
                    bool GetIsFullText() const;

                    /**
                     * 设置签署前置条件：是否需要阅读全文，默认为不需要
                     * @param IsFullText 签署前置条件：是否需要阅读全文，默认为不需要
                     */
                    void SetIsFullText(const bool& _isFullText);

                    /**
                     * 判断参数 IsFullText 是否已赋值
                     * @return IsFullText 是否已赋值
                     */
                    bool IsFullTextHasBeenSet() const;

                    /**
                     * 获取签署前置条件：阅读时长限制，默认为不需要
                     * @return PreReadTime 签署前置条件：阅读时长限制，默认为不需要
                     */
                    uint64_t GetPreReadTime() const;

                    /**
                     * 设置签署前置条件：阅读时长限制，默认为不需要
                     * @param PreReadTime 签署前置条件：阅读时长限制，默认为不需要
                     */
                    void SetPreReadTime(const uint64_t& _preReadTime);

                    /**
                     * 判断参数 PreReadTime 是否已赋值
                     * @return PreReadTime 是否已赋值
                     */
                    bool PreReadTimeHasBeenSet() const;

                    /**
                     * 获取签署方经办人的用户ID,和签署方经办人姓名+手机号+证件必须有一个。非企微场景不使用此字段
                     * @return UserId 签署方经办人的用户ID,和签署方经办人姓名+手机号+证件必须有一个。非企微场景不使用此字段
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置签署方经办人的用户ID,和签署方经办人姓名+手机号+证件必须有一个。非企微场景不使用此字段
                     * @param UserId 签署方经办人的用户ID,和签署方经办人姓名+手机号+证件必须有一个。非企微场景不使用此字段
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取当前只支持true，默认为true
                     * @return Required 当前只支持true，默认为true
                     */
                    bool GetRequired() const;

                    /**
                     * 设置当前只支持true，默认为true
                     * @param Required 当前只支持true，默认为true
                     */
                    void SetRequired(const bool& _required);

                    /**
                     * 判断参数 Required 是否已赋值
                     * @return Required 是否已赋值
                     */
                    bool RequiredHasBeenSet() const;

                    /**
                     * 获取签署人用户来源,企微侧用户请传入：WEWORKAPP
                     * @return ApproverSource 签署人用户来源,企微侧用户请传入：WEWORKAPP
                     */
                    std::string GetApproverSource() const;

                    /**
                     * 设置签署人用户来源,企微侧用户请传入：WEWORKAPP
                     * @param ApproverSource 签署人用户来源,企微侧用户请传入：WEWORKAPP
                     */
                    void SetApproverSource(const std::string& _approverSource);

                    /**
                     * 判断参数 ApproverSource 是否已赋值
                     * @return ApproverSource 是否已赋值
                     */
                    bool ApproverSourceHasBeenSet() const;

                    /**
                     * 获取客户自定义签署人标识，64位长度，保证唯一。非企微场景不使用此字段
                     * @return CustomApproverTag 客户自定义签署人标识，64位长度，保证唯一。非企微场景不使用此字段
                     */
                    std::string GetCustomApproverTag() const;

                    /**
                     * 设置客户自定义签署人标识，64位长度，保证唯一。非企微场景不使用此字段
                     * @param CustomApproverTag 客户自定义签署人标识，64位长度，保证唯一。非企微场景不使用此字段
                     */
                    void SetCustomApproverTag(const std::string& _customApproverTag);

                    /**
                     * 判断参数 CustomApproverTag 是否已赋值
                     * @return CustomApproverTag 是否已赋值
                     */
                    bool CustomApproverTagHasBeenSet() const;

                    /**
                     * 获取快速注册相关信息，目前暂未开放！
                     * @return RegisterInfo 快速注册相关信息，目前暂未开放！
                     */
                    RegisterInfo GetRegisterInfo() const;

                    /**
                     * 设置快速注册相关信息，目前暂未开放！
                     * @param RegisterInfo 快速注册相关信息，目前暂未开放！
                     */
                    void SetRegisterInfo(const RegisterInfo& _registerInfo);

                    /**
                     * 判断参数 RegisterInfo 是否已赋值
                     * @return RegisterInfo 是否已赋值
                     */
                    bool RegisterInfoHasBeenSet() const;

                private:

                    /**
                     * 参与者类型：
0：企业
1：个人
3：企业静默签署
注：类型为3（企业静默签署）时，此接口会默认完成该签署方的签署。静默签署仅进行盖章操作，不能自动签名。
                     */
                    int64_t m_approverType;
                    bool m_approverTypeHasBeenSet;

                    /**
                     * 如果签署方为企业，需要填入企业全称
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * 签署方经办人姓名
                     */
                    std::string m_approverName;
                    bool m_approverNameHasBeenSet;

                    /**
                     * 签署方经办人手机号码
                     */
                    std::string m_approverMobile;
                    bool m_approverMobileHasBeenSet;

                    /**
                     * 签署方经办人证件类型ID_CARD 身份证
HONGKONG_AND_MACAO 港澳居民来往内地通行证
HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)
                     */
                    std::string m_approverIdCardType;
                    bool m_approverIdCardTypeHasBeenSet;

                    /**
                     * 签署方经办人证件号码
                     */
                    std::string m_approverIdCardNumber;
                    bool m_approverIdCardNumberHasBeenSet;

                    /**
                     * 签署方经办人在模板中的角色ID
                     */
                    std::string m_recipientId;
                    bool m_recipientIdHasBeenSet;

                    /**
                     * 签署意愿确认渠道,WEIXINAPP:人脸识别
                     */
                    std::vector<std::string> m_verifyChannel;
                    bool m_verifyChannelHasBeenSet;

                    /**
                     * 是否发送短信，sms--短信通知，none--不通知，默认为sms
                     */
                    std::string m_notifyType;
                    bool m_notifyTypeHasBeenSet;

                    /**
                     * 签署前置条件：是否需要阅读全文，默认为不需要
                     */
                    bool m_isFullText;
                    bool m_isFullTextHasBeenSet;

                    /**
                     * 签署前置条件：阅读时长限制，默认为不需要
                     */
                    uint64_t m_preReadTime;
                    bool m_preReadTimeHasBeenSet;

                    /**
                     * 签署方经办人的用户ID,和签署方经办人姓名+手机号+证件必须有一个。非企微场景不使用此字段
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 当前只支持true，默认为true
                     */
                    bool m_required;
                    bool m_requiredHasBeenSet;

                    /**
                     * 签署人用户来源,企微侧用户请传入：WEWORKAPP
                     */
                    std::string m_approverSource;
                    bool m_approverSourceHasBeenSet;

                    /**
                     * 客户自定义签署人标识，64位长度，保证唯一。非企微场景不使用此字段
                     */
                    std::string m_customApproverTag;
                    bool m_customApproverTagHasBeenSet;

                    /**
                     * 快速注册相关信息，目前暂未开放！
                     */
                    RegisterInfo m_registerInfo;
                    bool m_registerInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_FLOWCREATEAPPROVER_H_
