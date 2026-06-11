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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FILLAPPROVERINFO_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FILLAPPROVERINFO_H_

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
                * 指定补充签署人信息
- RecipientId 必须指定
- 补充个人签署方时，若该用户已在电子签完成实名则可通过指定姓名和证件类型、证件号码完成补充
                */
                class FillApproverInfo : public AbstractModel
                {
                public:
                    FillApproverInfo();
                    ~FillApproverInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>签署方经办人在模板中配置的参与方ID，与控件绑定，是控件的归属方，ID为32位字符串。</p>
                     * @return RecipientId <p>签署方经办人在模板中配置的参与方ID，与控件绑定，是控件的归属方，ID为32位字符串。</p>
                     * 
                     */
                    std::string GetRecipientId() const;

                    /**
                     * 设置<p>签署方经办人在模板中配置的参与方ID，与控件绑定，是控件的归属方，ID为32位字符串。</p>
                     * @param _recipientId <p>签署方经办人在模板中配置的参与方ID，与控件绑定，是控件的归属方，ID为32位字符串。</p>
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
                     * 获取<p>指定企业经办签署人OpenId</p><p>注: <code>签署人OpenId未实名时，需要传入签署人姓名以及手机号码。</code></p>
                     * @return OpenId <p>指定企业经办签署人OpenId</p><p>注: <code>签署人OpenId未实名时，需要传入签署人姓名以及手机号码。</code></p>
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置<p>指定企业经办签署人OpenId</p><p>注: <code>签署人OpenId未实名时，需要传入签署人姓名以及手机号码。</code></p>
                     * @param _openId <p>指定企业经办签署人OpenId</p><p>注: <code>签署人OpenId未实名时，需要传入签署人姓名以及手机号码。</code></p>
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
                     * 获取<p>签署人姓名</p>
                     * @return ApproverName <p>签署人姓名</p>
                     * 
                     */
                    std::string GetApproverName() const;

                    /**
                     * 设置<p>签署人姓名</p>
                     * @param _approverName <p>签署人姓名</p>
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
                     * 获取<p>签署人手机号码</p>
                     * @return ApproverMobile <p>签署人手机号码</p>
                     * 
                     */
                    std::string GetApproverMobile() const;

                    /**
                     * 设置<p>签署人手机号码</p>
                     * @param _approverMobile <p>签署人手机号码</p>
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
                     * 获取<p>企业名称</p>
                     * @return OrganizationName <p>企业名称</p>
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置<p>企业名称</p>
                     * @param _organizationName <p>企业名称</p>
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
                     * 获取<p>企业OpenId</p>
                     * @return OrganizationOpenId <p>企业OpenId</p>
                     * 
                     */
                    std::string GetOrganizationOpenId() const;

                    /**
                     * 设置<p>企业OpenId</p>
                     * @param _organizationOpenId <p>企业OpenId</p>
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
                     * 获取<p>签署企业非渠道子客，默认为false，即表示同一渠道下的企业；如果为true，则目前表示接收方企业为SaaS企业, 为渠道子客时，OrganizationOpenId 必传</p>
                     * @return NotChannelOrganization <p>签署企业非渠道子客，默认为false，即表示同一渠道下的企业；如果为true，则目前表示接收方企业为SaaS企业, 为渠道子客时，OrganizationOpenId 必传</p>
                     * 
                     */
                    bool GetNotChannelOrganization() const;

                    /**
                     * 设置<p>签署企业非渠道子客，默认为false，即表示同一渠道下的企业；如果为true，则目前表示接收方企业为SaaS企业, 为渠道子客时，OrganizationOpenId 必传</p>
                     * @param _notChannelOrganization <p>签署企业非渠道子客，默认为false，即表示同一渠道下的企业；如果为true，则目前表示接收方企业为SaaS企业, 为渠道子客时，OrganizationOpenId 必传</p>
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
                     * 获取<p>签署方经办人的证件类型，支持以下类型</p><ul><li>ID_CARD 中国大陆居民身份证</li><li>HONGKONG_AND_MACAO 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul><p>注:补充个人签署方时，若该用户已在电子签完成实名则可通过指定姓名和证件类型、证件号码完成补充。</p>
                     * @return ApproverIdCardType <p>签署方经办人的证件类型，支持以下类型</p><ul><li>ID_CARD 中国大陆居民身份证</li><li>HONGKONG_AND_MACAO 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul><p>注:补充个人签署方时，若该用户已在电子签完成实名则可通过指定姓名和证件类型、证件号码完成补充。</p>
                     * 
                     */
                    std::string GetApproverIdCardType() const;

                    /**
                     * 设置<p>签署方经办人的证件类型，支持以下类型</p><ul><li>ID_CARD 中国大陆居民身份证</li><li>HONGKONG_AND_MACAO 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul><p>注:补充个人签署方时，若该用户已在电子签完成实名则可通过指定姓名和证件类型、证件号码完成补充。</p>
                     * @param _approverIdCardType <p>签署方经办人的证件类型，支持以下类型</p><ul><li>ID_CARD 中国大陆居民身份证</li><li>HONGKONG_AND_MACAO 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul><p>注:补充个人签署方时，若该用户已在电子签完成实名则可通过指定姓名和证件类型、证件号码完成补充。</p>
                     * 
                     */
                    void SetApproverIdCardType(const std::string& _approverIdCardType);

                    /**
                     * 判断参数 ApproverIdCardType 是否已赋值
                     * @return ApproverIdCardType 是否已赋值
                     * 
                     */
                    bool ApproverIdCardTypeHasBeenSet() const;

                    /**
                     * 获取<p>签署方经办人的证件号码，应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li><li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul><p>注：<code>补充个人签署方时，若该用户已在电子签完成实名则可通过指定姓名和证件类型、证件号码完成补充。</code></p>
                     * @return ApproverIdCardNumber <p>签署方经办人的证件号码，应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li><li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul><p>注：<code>补充个人签署方时，若该用户已在电子签完成实名则可通过指定姓名和证件类型、证件号码完成补充。</code></p>
                     * 
                     */
                    std::string GetApproverIdCardNumber() const;

                    /**
                     * 设置<p>签署方经办人的证件号码，应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li><li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul><p>注：<code>补充个人签署方时，若该用户已在电子签完成实名则可通过指定姓名和证件类型、证件号码完成补充。</code></p>
                     * @param _approverIdCardNumber <p>签署方经办人的证件号码，应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li><li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul><p>注：<code>补充个人签署方时，若该用户已在电子签完成实名则可通过指定姓名和证件类型、证件号码完成补充。</code></p>
                     * 
                     */
                    void SetApproverIdCardNumber(const std::string& _approverIdCardNumber);

                    /**
                     * 判断参数 ApproverIdCardNumber 是否已赋值
                     * @return ApproverIdCardNumber 是否已赋值
                     * 
                     */
                    bool ApproverIdCardNumberHasBeenSet() const;

                    /**
                     * 获取<p>合同流程ID</p><ul><li>补充合同组子合同动态签署人时必传。</li><li>补充正常合同，请阅读：<a href="https://qian.tencent.com/developers/partnerApis/flows/ChannelCreateFlowApprovers/" target="_blank">补充签署人接口</a>接口使用说明</li></ul>
                     * @return FlowId <p>合同流程ID</p><ul><li>补充合同组子合同动态签署人时必传。</li><li>补充正常合同，请阅读：<a href="https://qian.tencent.com/developers/partnerApis/flows/ChannelCreateFlowApprovers/" target="_blank">补充签署人接口</a>接口使用说明</li></ul>
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置<p>合同流程ID</p><ul><li>补充合同组子合同动态签署人时必传。</li><li>补充正常合同，请阅读：<a href="https://qian.tencent.com/developers/partnerApis/flows/ChannelCreateFlowApprovers/" target="_blank">补充签署人接口</a>接口使用说明</li></ul>
                     * @param _flowId <p>合同流程ID</p><ul><li>补充合同组子合同动态签署人时必传。</li><li>补充正常合同，请阅读：<a href="https://qian.tencent.com/developers/partnerApis/flows/ChannelCreateFlowApprovers/" target="_blank">补充签署人接口</a>接口使用说明</li></ul>
                     * 
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                private:

                    /**
                     * <p>签署方经办人在模板中配置的参与方ID，与控件绑定，是控件的归属方，ID为32位字符串。</p>
                     */
                    std::string m_recipientId;
                    bool m_recipientIdHasBeenSet;

                    /**
                     * <p>指定企业经办签署人OpenId</p><p>注: <code>签署人OpenId未实名时，需要传入签署人姓名以及手机号码。</code></p>
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * <p>签署人姓名</p>
                     */
                    std::string m_approverName;
                    bool m_approverNameHasBeenSet;

                    /**
                     * <p>签署人手机号码</p>
                     */
                    std::string m_approverMobile;
                    bool m_approverMobileHasBeenSet;

                    /**
                     * <p>企业名称</p>
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * <p>企业OpenId</p>
                     */
                    std::string m_organizationOpenId;
                    bool m_organizationOpenIdHasBeenSet;

                    /**
                     * <p>签署企业非渠道子客，默认为false，即表示同一渠道下的企业；如果为true，则目前表示接收方企业为SaaS企业, 为渠道子客时，OrganizationOpenId 必传</p>
                     */
                    bool m_notChannelOrganization;
                    bool m_notChannelOrganizationHasBeenSet;

                    /**
                     * <p>签署方经办人的证件类型，支持以下类型</p><ul><li>ID_CARD 中国大陆居民身份证</li><li>HONGKONG_AND_MACAO 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul><p>注:补充个人签署方时，若该用户已在电子签完成实名则可通过指定姓名和证件类型、证件号码完成补充。</p>
                     */
                    std::string m_approverIdCardType;
                    bool m_approverIdCardTypeHasBeenSet;

                    /**
                     * <p>签署方经办人的证件号码，应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li><li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul><p>注：<code>补充个人签署方时，若该用户已在电子签完成实名则可通过指定姓名和证件类型、证件号码完成补充。</code></p>
                     */
                    std::string m_approverIdCardNumber;
                    bool m_approverIdCardNumberHasBeenSet;

                    /**
                     * <p>合同流程ID</p><ul><li>补充合同组子合同动态签署人时必传。</li><li>补充正常合同，请阅读：<a href="https://qian.tencent.com/developers/partnerApis/flows/ChannelCreateFlowApprovers/" target="_blank">补充签署人接口</a>接口使用说明</li></ul>
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FILLAPPROVERINFO_H_
