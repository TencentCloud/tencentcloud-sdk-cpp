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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_COMMONFLOWAPPROVER_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_COMMONFLOWAPPROVER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/CommonApproverOption.h>
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
                * 通用签署人信息
                */
                class CommonFlowApprover : public AbstractModel
                {
                public:
                    CommonFlowApprover();
                    ~CommonFlowApprover() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指定当前签署人为第三方应用集成子客，默认false：当前签署人为第三方应用集成子客，true：当前签署人为saas企业用户
                     * @return NotChannelOrganization 指定当前签署人为第三方应用集成子客，默认false：当前签署人为第三方应用集成子客，true：当前签署人为saas企业用户
                     * 
                     */
                    bool GetNotChannelOrganization() const;

                    /**
                     * 设置指定当前签署人为第三方应用集成子客，默认false：当前签署人为第三方应用集成子客，true：当前签署人为saas企业用户
                     * @param _notChannelOrganization 指定当前签署人为第三方应用集成子客，默认false：当前签署人为第三方应用集成子客，true：当前签署人为saas企业用户
                     * 
                     */
                    void SetNotChannelOrganization(const bool& _notChannelOrganization);

                    /**
                     * 判断参数 NotChannelOrganization 是否已赋值
                     * @return NotChannelOrganization 是否已赋值
                     * 
                     */
                    bool NotChannelOrganizationHasBeenSet() const;

                    /**
                     * 获取签署人类型,目前支持：0-企业签署人，1-个人签署人，3-企业静默签署人
                     * @return ApproverType 签署人类型,目前支持：0-企业签署人，1-个人签署人，3-企业静默签署人
                     * 
                     */
                    int64_t GetApproverType() const;

                    /**
                     * 设置签署人类型,目前支持：0-企业签署人，1-个人签署人，3-企业静默签署人
                     * @param _approverType 签署人类型,目前支持：0-企业签署人，1-个人签署人，3-企业静默签署人
                     * 
                     */
                    void SetApproverType(const int64_t& _approverType);

                    /**
                     * 判断参数 ApproverType 是否已赋值
                     * @return ApproverType 是否已赋值
                     * 
                     */
                    bool ApproverTypeHasBeenSet() const;

                    /**
                     * 获取企业id
                     * @return OrganizationId 企业id
                     * 
                     */
                    std::string GetOrganizationId() const;

                    /**
                     * 设置企业id
                     * @param _organizationId 企业id
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
                     * 获取企业OpenId，第三方应用集成非静默签子客企业签署人发起合同必传
                     * @return OrganizationOpenId 企业OpenId，第三方应用集成非静默签子客企业签署人发起合同必传
                     * 
                     */
                    std::string GetOrganizationOpenId() const;

                    /**
                     * 设置企业OpenId，第三方应用集成非静默签子客企业签署人发起合同必传
                     * @param _organizationOpenId 企业OpenId，第三方应用集成非静默签子客企业签署人发起合同必传
                     * 
                     */
                    void SetOrganizationOpenId(const std::string& _organizationOpenId);

                    /**
                     * 判断参数 OrganizationOpenId 是否已赋值
                     * @return OrganizationOpenId 是否已赋值
                     * 
                     */
                    bool OrganizationOpenIdHasBeenSet() const;

                    /**
                     * 获取企业名称，第三方应用集成非静默签子客企业签署人必传，saas企业签署人必传
                     * @return OrganizationName 企业名称，第三方应用集成非静默签子客企业签署人必传，saas企业签署人必传
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置企业名称，第三方应用集成非静默签子客企业签署人必传，saas企业签署人必传
                     * @param _organizationName 企业名称，第三方应用集成非静默签子客企业签署人必传，saas企业签署人必传
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
                     * 获取用户id
                     * @return UserId 用户id
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户id
                     * @param _userId 用户id
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
                     * 获取用户openId，第三方应用集成非静默签子客企业签署人必传
                     * @return OpenId 用户openId，第三方应用集成非静默签子客企业签署人必传
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置用户openId，第三方应用集成非静默签子客企业签署人必传
                     * @param _openId 用户openId，第三方应用集成非静默签子客企业签署人必传
                     * 
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     * 
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取签署人名称，saas企业签署人，个人签署人必传
                     * @return ApproverName 签署人名称，saas企业签署人，个人签署人必传
                     * 
                     */
                    std::string GetApproverName() const;

                    /**
                     * 设置签署人名称，saas企业签署人，个人签署人必传
                     * @param _approverName 签署人名称，saas企业签署人，个人签署人必传
                     * 
                     */
                    void SetApproverName(const std::string& _approverName);

                    /**
                     * 判断参数 ApproverName 是否已赋值
                     * @return ApproverName 是否已赋值
                     * 
                     */
                    bool ApproverNameHasBeenSet() const;

                    /**
                     * 获取签署人手机号，saas企业签署人，个人签署人必传
                     * @return ApproverMobile 签署人手机号，saas企业签署人，个人签署人必传
                     * 
                     */
                    std::string GetApproverMobile() const;

                    /**
                     * 设置签署人手机号，saas企业签署人，个人签署人必传
                     * @param _approverMobile 签署人手机号，saas企业签署人，个人签署人必传
                     * 
                     */
                    void SetApproverMobile(const std::string& _approverMobile);

                    /**
                     * 判断参数 ApproverMobile 是否已赋值
                     * @return ApproverMobile 是否已赋值
                     * 
                     */
                    bool ApproverMobileHasBeenSet() const;

                    /**
                     * 获取签署人Id，使用模板发起是，对应模板配置中的签署人RecipientId
注意：模板发起时该字段必填
                     * @return RecipientId 签署人Id，使用模板发起是，对应模板配置中的签署人RecipientId
注意：模板发起时该字段必填
                     * 
                     */
                    std::string GetRecipientId() const;

                    /**
                     * 设置签署人Id，使用模板发起是，对应模板配置中的签署人RecipientId
注意：模板发起时该字段必填
                     * @param _recipientId 签署人Id，使用模板发起是，对应模板配置中的签署人RecipientId
注意：模板发起时该字段必填
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
                     * 获取签署前置条件：阅读时长限制，不传默认10s,最大300s，最小3s
                     * @return PreReadTime 签署前置条件：阅读时长限制，不传默认10s,最大300s，最小3s
                     * 
                     */
                    int64_t GetPreReadTime() const;

                    /**
                     * 设置签署前置条件：阅读时长限制，不传默认10s,最大300s，最小3s
                     * @param _preReadTime 签署前置条件：阅读时长限制，不传默认10s,最大300s，最小3s
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
                     * 获取签署前置条件：阅读全文限制
                     * @return IsFullText 签署前置条件：阅读全文限制
                     * 
                     */
                    bool GetIsFullText() const;

                    /**
                     * 设置签署前置条件：阅读全文限制
                     * @param _isFullText 签署前置条件：阅读全文限制
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
                     * 获取通知类型：SMS（短信） NONE（不做通知）, 不传 默认SMS
                     * @return NotifyType 通知类型：SMS（短信） NONE（不做通知）, 不传 默认SMS
                     * @deprecated
                     */
                    std::string GetNotifyType() const;

                    /**
                     * 设置通知类型：SMS（短信） NONE（不做通知）, 不传 默认SMS
                     * @param _notifyType 通知类型：SMS（短信） NONE（不做通知）, 不传 默认SMS
                     * @deprecated
                     */
                    void SetNotifyType(const std::string& _notifyType);

                    /**
                     * 判断参数 NotifyType 是否已赋值
                     * @return NotifyType 是否已赋值
                     * @deprecated
                     */
                    bool NotifyTypeHasBeenSet() const;

                    /**
                     * 获取签署人配置
                     * @return ApproverOption 签署人配置
                     * 
                     */
                    CommonApproverOption GetApproverOption() const;

                    /**
                     * 设置签署人配置
                     * @param _approverOption 签署人配置
                     * 
                     */
                    void SetApproverOption(const CommonApproverOption& _approverOption);

                    /**
                     * 判断参数 ApproverOption 是否已赋值
                     * @return ApproverOption 是否已赋值
                     * 
                     */
                    bool ApproverOptionHasBeenSet() const;

                    /**
                     * 获取签署控件：文件发起使用
                     * @return SignComponents 签署控件：文件发起使用
                     * 
                     */
                    std::vector<Component> GetSignComponents() const;

                    /**
                     * 设置签署控件：文件发起使用
                     * @param _signComponents 签署控件：文件发起使用
                     * 
                     */
                    void SetSignComponents(const std::vector<Component>& _signComponents);

                    /**
                     * 判断参数 SignComponents 是否已赋值
                     * @return SignComponents 是否已赋值
                     * 
                     */
                    bool SignComponentsHasBeenSet() const;

                private:

                    /**
                     * 指定当前签署人为第三方应用集成子客，默认false：当前签署人为第三方应用集成子客，true：当前签署人为saas企业用户
                     */
                    bool m_notChannelOrganization;
                    bool m_notChannelOrganizationHasBeenSet;

                    /**
                     * 签署人类型,目前支持：0-企业签署人，1-个人签署人，3-企业静默签署人
                     */
                    int64_t m_approverType;
                    bool m_approverTypeHasBeenSet;

                    /**
                     * 企业id
                     */
                    std::string m_organizationId;
                    bool m_organizationIdHasBeenSet;

                    /**
                     * 企业OpenId，第三方应用集成非静默签子客企业签署人发起合同必传
                     */
                    std::string m_organizationOpenId;
                    bool m_organizationOpenIdHasBeenSet;

                    /**
                     * 企业名称，第三方应用集成非静默签子客企业签署人必传，saas企业签署人必传
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * 用户id
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户openId，第三方应用集成非静默签子客企业签署人必传
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 签署人名称，saas企业签署人，个人签署人必传
                     */
                    std::string m_approverName;
                    bool m_approverNameHasBeenSet;

                    /**
                     * 签署人手机号，saas企业签署人，个人签署人必传
                     */
                    std::string m_approverMobile;
                    bool m_approverMobileHasBeenSet;

                    /**
                     * 签署人Id，使用模板发起是，对应模板配置中的签署人RecipientId
注意：模板发起时该字段必填
                     */
                    std::string m_recipientId;
                    bool m_recipientIdHasBeenSet;

                    /**
                     * 签署前置条件：阅读时长限制，不传默认10s,最大300s，最小3s
                     */
                    int64_t m_preReadTime;
                    bool m_preReadTimeHasBeenSet;

                    /**
                     * 签署前置条件：阅读全文限制
                     */
                    bool m_isFullText;
                    bool m_isFullTextHasBeenSet;

                    /**
                     * 通知类型：SMS（短信） NONE（不做通知）, 不传 默认SMS
                     */
                    std::string m_notifyType;
                    bool m_notifyTypeHasBeenSet;

                    /**
                     * 签署人配置
                     */
                    CommonApproverOption m_approverOption;
                    bool m_approverOptionHasBeenSet;

                    /**
                     * 签署控件：文件发起使用
                     */
                    std::vector<Component> m_signComponents;
                    bool m_signComponentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_COMMONFLOWAPPROVER_H_
