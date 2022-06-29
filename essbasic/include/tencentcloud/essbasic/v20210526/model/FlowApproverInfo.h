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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWAPPROVERINFO_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWAPPROVERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * 创建流程签署人入参
                */
                class FlowApproverInfo : public AbstractModel
                {
                public:
                    FlowApproverInfo();
                    ~FlowApproverInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取签署人姓名
                     * @return Name 签署人姓名
                     */
                    std::string GetName() const;

                    /**
                     * 设置签署人姓名
                     * @param Name 签署人姓名
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取经办人身份证号
                     * @return IdCardNumber 经办人身份证号
                     */
                    std::string GetIdCardNumber() const;

                    /**
                     * 设置经办人身份证号
                     * @param IdCardNumber 经办人身份证号
                     */
                    void SetIdCardNumber(const std::string& _idCardNumber);

                    /**
                     * 判断参数 IdCardNumber 是否已赋值
                     * @return IdCardNumber 是否已赋值
                     */
                    bool IdCardNumberHasBeenSet() const;

                    /**
                     * 获取签署人手机号，脱敏显示
                     * @return Mobile 签署人手机号，脱敏显示
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置签署人手机号，脱敏显示
                     * @param Mobile 签署人手机号，脱敏显示
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取签署完前端跳转的url，暂未使用
                     * @return JumpUrl 签署完前端跳转的url，暂未使用
                     */
                    std::string GetJumpUrl() const;

                    /**
                     * 设置签署完前端跳转的url，暂未使用
                     * @param JumpUrl 签署完前端跳转的url，暂未使用
                     */
                    void SetJumpUrl(const std::string& _jumpUrl);

                    /**
                     * 判断参数 JumpUrl 是否已赋值
                     * @return JumpUrl 是否已赋值
                     */
                    bool JumpUrlHasBeenSet() const;

                    /**
                     * 获取签署截止时间
                     * @return Deadline 签署截止时间
                     */
                    int64_t GetDeadline() const;

                    /**
                     * 设置签署截止时间
                     * @param Deadline 签署截止时间
                     */
                    void SetDeadline(const int64_t& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取签署完回调url
                     * @return CallbackUrl 签署完回调url
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置签署完回调url
                     * @param CallbackUrl 签署完回调url
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取签署人类型，PERSON-个人；ORGANIZATION-企业；
ENTERPRISESERVER-企业静默签;
注：ENTERPRISESERVER 类型仅用于使用文件创建流程（ChannelCreateFlowByFiles）接口；并且仅能指定发起方企业签署方为静默签署；
                     * @return ApproverType 签署人类型，PERSON-个人；ORGANIZATION-企业；
ENTERPRISESERVER-企业静默签;
注：ENTERPRISESERVER 类型仅用于使用文件创建流程（ChannelCreateFlowByFiles）接口；并且仅能指定发起方企业签署方为静默签署；
                     */
                    std::string GetApproverType() const;

                    /**
                     * 设置签署人类型，PERSON-个人；ORGANIZATION-企业；
ENTERPRISESERVER-企业静默签;
注：ENTERPRISESERVER 类型仅用于使用文件创建流程（ChannelCreateFlowByFiles）接口；并且仅能指定发起方企业签署方为静默签署；
                     * @param ApproverType 签署人类型，PERSON-个人；ORGANIZATION-企业；
ENTERPRISESERVER-企业静默签;
注：ENTERPRISESERVER 类型仅用于使用文件创建流程（ChannelCreateFlowByFiles）接口；并且仅能指定发起方企业签署方为静默签署；
                     */
                    void SetApproverType(const std::string& _approverType);

                    /**
                     * 判断参数 ApproverType 是否已赋值
                     * @return ApproverType 是否已赋值
                     */
                    bool ApproverTypeHasBeenSet() const;

                    /**
                     * 获取用户侧第三方id
                     * @return OpenId 用户侧第三方id
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置用户侧第三方id
                     * @param OpenId 用户侧第三方id
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取合同的强制预览时间：3~300s，未指定则按合同页数计算
                     * @return PreReadTime 合同的强制预览时间：3~300s，未指定则按合同页数计算
                     */
                    int64_t GetPreReadTime() const;

                    /**
                     * 设置合同的强制预览时间：3~300s，未指定则按合同页数计算
                     * @param PreReadTime 合同的强制预览时间：3~300s，未指定则按合同页数计算
                     */
                    void SetPreReadTime(const int64_t& _preReadTime);

                    /**
                     * 判断参数 PreReadTime 是否已赋值
                     * @return PreReadTime 是否已赋值
                     */
                    bool PreReadTimeHasBeenSet() const;

                    /**
                     * 获取个人签署方指定签署控件类型，目前仅支持：OCR_ESIGN(AI智慧手写签名)
                     * @return ComponentLimitType 个人签署方指定签署控件类型，目前仅支持：OCR_ESIGN(AI智慧手写签名)
                     */
                    std::vector<std::string> GetComponentLimitType() const;

                    /**
                     * 设置个人签署方指定签署控件类型，目前仅支持：OCR_ESIGN(AI智慧手写签名)
                     * @param ComponentLimitType 个人签署方指定签署控件类型，目前仅支持：OCR_ESIGN(AI智慧手写签名)
                     */
                    void SetComponentLimitType(const std::vector<std::string>& _componentLimitType);

                    /**
                     * 判断参数 ComponentLimitType 是否已赋值
                     * @return ComponentLimitType 是否已赋值
                     */
                    bool ComponentLimitTypeHasBeenSet() const;

                    /**
                     * 获取流程签署人在模板中对应的签署人Id；在非单方签署、以及非B2C签署的场景下必传，用于指定当前签署方在流程中的位置；
                     * @return RecipientId 流程签署人在模板中对应的签署人Id；在非单方签署、以及非B2C签署的场景下必传，用于指定当前签署方在流程中的位置；
                     */
                    std::string GetRecipientId() const;

                    /**
                     * 设置流程签署人在模板中对应的签署人Id；在非单方签署、以及非B2C签署的场景下必传，用于指定当前签署方在流程中的位置；
                     * @param RecipientId 流程签署人在模板中对应的签署人Id；在非单方签署、以及非B2C签署的场景下必传，用于指定当前签署方在流程中的位置；
                     */
                    void SetRecipientId(const std::string& _recipientId);

                    /**
                     * 判断参数 RecipientId 是否已赋值
                     * @return RecipientId 是否已赋值
                     */
                    bool RecipientIdHasBeenSet() const;

                    /**
                     * 获取企业签署方工商营业执照上的企业名称，签署方为非发起方企业场景下必传；
                     * @return OrganizationName 企业签署方工商营业执照上的企业名称，签署方为非发起方企业场景下必传；
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置企业签署方工商营业执照上的企业名称，签署方为非发起方企业场景下必传；
                     * @param OrganizationName 企业签署方工商营业执照上的企业名称，签署方为非发起方企业场景下必传；
                     */
                    void SetOrganizationName(const std::string& _organizationName);

                    /**
                     * 判断参数 OrganizationName 是否已赋值
                     * @return OrganizationName 是否已赋值
                     */
                    bool OrganizationNameHasBeenSet() const;

                    /**
                     * 获取企业签署方在同一渠道下的其他合作企业OpenId，签署方为非发起方企业场景下必传；
                     * @return OrganizationOpenId 企业签署方在同一渠道下的其他合作企业OpenId，签署方为非发起方企业场景下必传；
                     */
                    std::string GetOrganizationOpenId() const;

                    /**
                     * 设置企业签署方在同一渠道下的其他合作企业OpenId，签署方为非发起方企业场景下必传；
                     * @param OrganizationOpenId 企业签署方在同一渠道下的其他合作企业OpenId，签署方为非发起方企业场景下必传；
                     */
                    void SetOrganizationOpenId(const std::string& _organizationOpenId);

                    /**
                     * 判断参数 OrganizationOpenId 是否已赋值
                     * @return OrganizationOpenId 是否已赋值
                     */
                    bool OrganizationOpenIdHasBeenSet() const;

                    /**
                     * 获取指定签署人非渠道企业下员工，在ApproverType为ORGANIZATION时指定。
默认为false，即签署人位于同一个渠道应用号下；
                     * @return NotChannelOrganization 指定签署人非渠道企业下员工，在ApproverType为ORGANIZATION时指定。
默认为false，即签署人位于同一个渠道应用号下；
                     */
                    bool GetNotChannelOrganization() const;

                    /**
                     * 设置指定签署人非渠道企业下员工，在ApproverType为ORGANIZATION时指定。
默认为false，即签署人位于同一个渠道应用号下；
                     * @param NotChannelOrganization 指定签署人非渠道企业下员工，在ApproverType为ORGANIZATION时指定。
默认为false，即签署人位于同一个渠道应用号下；
                     */
                    void SetNotChannelOrganization(const bool& _notChannelOrganization);

                    /**
                     * 判断参数 NotChannelOrganization 是否已赋值
                     * @return NotChannelOrganization 是否已赋值
                     */
                    bool NotChannelOrganizationHasBeenSet() const;

                    /**
                     * 获取使用PDF文件直接发起合同时，签署人指定的签署控件
                     * @return SignComponents 使用PDF文件直接发起合同时，签署人指定的签署控件
                     */
                    std::vector<Component> GetSignComponents() const;

                    /**
                     * 设置使用PDF文件直接发起合同时，签署人指定的签署控件
                     * @param SignComponents 使用PDF文件直接发起合同时，签署人指定的签署控件
                     */
                    void SetSignComponents(const std::vector<Component>& _signComponents);

                    /**
                     * 判断参数 SignComponents 是否已赋值
                     * @return SignComponents 是否已赋值
                     */
                    bool SignComponentsHasBeenSet() const;

                private:

                    /**
                     * 签署人姓名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 经办人身份证号
                     */
                    std::string m_idCardNumber;
                    bool m_idCardNumberHasBeenSet;

                    /**
                     * 签署人手机号，脱敏显示
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 签署完前端跳转的url，暂未使用
                     */
                    std::string m_jumpUrl;
                    bool m_jumpUrlHasBeenSet;

                    /**
                     * 签署截止时间
                     */
                    int64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 签署完回调url
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 签署人类型，PERSON-个人；ORGANIZATION-企业；
ENTERPRISESERVER-企业静默签;
注：ENTERPRISESERVER 类型仅用于使用文件创建流程（ChannelCreateFlowByFiles）接口；并且仅能指定发起方企业签署方为静默签署；
                     */
                    std::string m_approverType;
                    bool m_approverTypeHasBeenSet;

                    /**
                     * 用户侧第三方id
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 合同的强制预览时间：3~300s，未指定则按合同页数计算
                     */
                    int64_t m_preReadTime;
                    bool m_preReadTimeHasBeenSet;

                    /**
                     * 个人签署方指定签署控件类型，目前仅支持：OCR_ESIGN(AI智慧手写签名)
                     */
                    std::vector<std::string> m_componentLimitType;
                    bool m_componentLimitTypeHasBeenSet;

                    /**
                     * 流程签署人在模板中对应的签署人Id；在非单方签署、以及非B2C签署的场景下必传，用于指定当前签署方在流程中的位置；
                     */
                    std::string m_recipientId;
                    bool m_recipientIdHasBeenSet;

                    /**
                     * 企业签署方工商营业执照上的企业名称，签署方为非发起方企业场景下必传；
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * 企业签署方在同一渠道下的其他合作企业OpenId，签署方为非发起方企业场景下必传；
                     */
                    std::string m_organizationOpenId;
                    bool m_organizationOpenIdHasBeenSet;

                    /**
                     * 指定签署人非渠道企业下员工，在ApproverType为ORGANIZATION时指定。
默认为false，即签署人位于同一个渠道应用号下；
                     */
                    bool m_notChannelOrganization;
                    bool m_notChannelOrganizationHasBeenSet;

                    /**
                     * 使用PDF文件直接发起合同时，签署人指定的签署控件
                     */
                    std::vector<Component> m_signComponents;
                    bool m_signComponentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWAPPROVERINFO_H_
