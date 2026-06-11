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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_FILLAPPROVERINFO_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_FILLAPPROVERINFO_H_

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
                * 补充签署人信息
- RecipientId 必须指定
-  通过企业微信自定义账号ID补充签署人时，ApproverSource 和 CustomUserId 必填，ApproverSource取值：WEWORKAPP
- 通过二要素（姓名/手机号）补充签署人时，ApproverName 和 ApproverMobile 必填，ApproverSource设置为空
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
                     * 获取<p>签署方经办人在模板中配置的参与方ID，与控件绑定，是控件的归属方，ID为32位字符串。<br>模板发起合同时，该参数为必填项。<br>文件发起合同时，该参数无需传值。<br>如果开发者后序用合同模板发起合同，建议保存此值，在用合同模板发起合同中需此值绑定对应的签署经办人 。</p>
                     * @return RecipientId <p>签署方经办人在模板中配置的参与方ID，与控件绑定，是控件的归属方，ID为32位字符串。<br>模板发起合同时，该参数为必填项。<br>文件发起合同时，该参数无需传值。<br>如果开发者后序用合同模板发起合同，建议保存此值，在用合同模板发起合同中需此值绑定对应的签署经办人 。</p>
                     * 
                     */
                    std::string GetRecipientId() const;

                    /**
                     * 设置<p>签署方经办人在模板中配置的参与方ID，与控件绑定，是控件的归属方，ID为32位字符串。<br>模板发起合同时，该参数为必填项。<br>文件发起合同时，该参数无需传值。<br>如果开发者后序用合同模板发起合同，建议保存此值，在用合同模板发起合同中需此值绑定对应的签署经办人 。</p>
                     * @param _recipientId <p>签署方经办人在模板中配置的参与方ID，与控件绑定，是控件的归属方，ID为32位字符串。<br>模板发起合同时，该参数为必填项。<br>文件发起合同时，该参数无需传值。<br>如果开发者后序用合同模板发起合同，建议保存此值，在用合同模板发起合同中需此值绑定对应的签署经办人 。</p>
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
                     * 获取<p>签署人来源<br>WEWORKAPP: 企业微信<br><br>仅【企微或签】时指定WEWORKAPP</p>
                     * @return ApproverSource <p>签署人来源<br>WEWORKAPP: 企业微信<br><br>仅【企微或签】时指定WEWORKAPP</p>
                     * 
                     */
                    std::string GetApproverSource() const;

                    /**
                     * 设置<p>签署人来源<br>WEWORKAPP: 企业微信<br><br>仅【企微或签】时指定WEWORKAPP</p>
                     * @param _approverSource <p>签署人来源<br>WEWORKAPP: 企业微信<br><br>仅【企微或签】时指定WEWORKAPP</p>
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
                     * 获取<p>企业微信UserId<br><br>当ApproverSource为WEWORKAPP的企微或签场景下，必须指企业自有应用获取企业微信的UserId</p>
                     * @return CustomUserId <p>企业微信UserId<br><br>当ApproverSource为WEWORKAPP的企微或签场景下，必须指企业自有应用获取企业微信的UserId</p>
                     * 
                     */
                    std::string GetCustomUserId() const;

                    /**
                     * 设置<p>企业微信UserId<br><br>当ApproverSource为WEWORKAPP的企微或签场景下，必须指企业自有应用获取企业微信的UserId</p>
                     * @param _customUserId <p>企业微信UserId<br><br>当ApproverSource为WEWORKAPP的企微或签场景下，必须指企业自有应用获取企业微信的UserId</p>
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
                     * 获取<p>企业签署人的员工姓名。除企业微信应用场景（ApproverSource设置为WEWORKAPP）外，本字段为必填。</p>
                     * @return ApproverName <p>企业签署人的员工姓名。除企业微信应用场景（ApproverSource设置为WEWORKAPP）外，本字段为必填。</p>
                     * 
                     */
                    std::string GetApproverName() const;

                    /**
                     * 设置<p>企业签署人的员工姓名。除企业微信应用场景（ApproverSource设置为WEWORKAPP）外，本字段为必填。</p>
                     * @param _approverName <p>企业签署人的员工姓名。除企业微信应用场景（ApproverSource设置为WEWORKAPP）外，本字段为必填。</p>
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
                     * 获取<p>补充企业签署人员工手机号</p><ul><li>ApproverSource!=WEWORKAPP时，必传</li></ul>
                     * @return ApproverMobile <p>补充企业签署人员工手机号</p><ul><li>ApproverSource!=WEWORKAPP时，必传</li></ul>
                     * 
                     */
                    std::string GetApproverMobile() const;

                    /**
                     * 设置<p>补充企业签署人员工手机号</p><ul><li>ApproverSource!=WEWORKAPP时，必传</li></ul>
                     * @param _approverMobile <p>补充企业签署人员工手机号</p><ul><li>ApproverSource!=WEWORKAPP时，必传</li></ul>
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
                     * 获取<p>补充企业动态签署人时，需要指定对应企业名称</p>
                     * @return OrganizationName <p>补充企业动态签署人时，需要指定对应企业名称</p>
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置<p>补充企业动态签署人时，需要指定对应企业名称</p>
                     * @param _organizationName <p>补充企业动态签署人时，需要指定对应企业名称</p>
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
                     * 获取<p>签署方经办人的证件类型，支持以下类型</p><ul><li>ID_CARD 中国大陆居民身份证</li><li>HONGKONG_AND_MACAO 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul><p>注: 补充个人签署方时，若该用户已在电子签完成实名则可通过指定姓名和证件类型、证件号码完成补充。</p>
                     * @return ApproverIdCardType <p>签署方经办人的证件类型，支持以下类型</p><ul><li>ID_CARD 中国大陆居民身份证</li><li>HONGKONG_AND_MACAO 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul><p>注: 补充个人签署方时，若该用户已在电子签完成实名则可通过指定姓名和证件类型、证件号码完成补充。</p>
                     * 
                     */
                    std::string GetApproverIdCardType() const;

                    /**
                     * 设置<p>签署方经办人的证件类型，支持以下类型</p><ul><li>ID_CARD 中国大陆居民身份证</li><li>HONGKONG_AND_MACAO 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul><p>注: 补充个人签署方时，若该用户已在电子签完成实名则可通过指定姓名和证件类型、证件号码完成补充。</p>
                     * @param _approverIdCardType <p>签署方经办人的证件类型，支持以下类型</p><ul><li>ID_CARD 中国大陆居民身份证</li><li>HONGKONG_AND_MACAO 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul><p>注: 补充个人签署方时，若该用户已在电子签完成实名则可通过指定姓名和证件类型、证件号码完成补充。</p>
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
                     * 获取<p>签署方经办人的证件号码，应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字</li><li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串</li></ul><p>注：<code>补充个人签署方时，若该用户已在电子签完成实名则可通过指定姓名和证件类型、证件号码完成补充。</code></p>
                     * @return ApproverIdCardNumber <p>签署方经办人的证件号码，应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字</li><li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串</li></ul><p>注：<code>补充个人签署方时，若该用户已在电子签完成实名则可通过指定姓名和证件类型、证件号码完成补充。</code></p>
                     * 
                     */
                    std::string GetApproverIdCardNumber() const;

                    /**
                     * 设置<p>签署方经办人的证件号码，应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字</li><li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串</li></ul><p>注：<code>补充个人签署方时，若该用户已在电子签完成实名则可通过指定姓名和证件类型、证件号码完成补充。</code></p>
                     * @param _approverIdCardNumber <p>签署方经办人的证件号码，应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字</li><li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串</li></ul><p>注：<code>补充个人签署方时，若该用户已在电子签完成实名则可通过指定姓名和证件类型、证件号码完成补充。</code></p>
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
                     * 获取<p>合同流程ID</p><ul><li>补充合同组子合同动态签署人时必传。</li><li>补充普通合同时，请阅读：<a href="https://qian.tencent.com/developers/companyApis/operateFlows/CreateFlowApprovers/" target="_blank">补充签署人接口</a>的接口使用说明</li></ul>
                     * @return FlowId <p>合同流程ID</p><ul><li>补充合同组子合同动态签署人时必传。</li><li>补充普通合同时，请阅读：<a href="https://qian.tencent.com/developers/companyApis/operateFlows/CreateFlowApprovers/" target="_blank">补充签署人接口</a>的接口使用说明</li></ul>
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置<p>合同流程ID</p><ul><li>补充合同组子合同动态签署人时必传。</li><li>补充普通合同时，请阅读：<a href="https://qian.tencent.com/developers/companyApis/operateFlows/CreateFlowApprovers/" target="_blank">补充签署人接口</a>的接口使用说明</li></ul>
                     * @param _flowId <p>合同流程ID</p><ul><li>补充合同组子合同动态签署人时必传。</li><li>补充普通合同时，请阅读：<a href="https://qian.tencent.com/developers/companyApis/operateFlows/CreateFlowApprovers/" target="_blank">补充签署人接口</a>的接口使用说明</li></ul>
                     * 
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取<p>通知类型：</p><li>当FillApproverType =0，或签场景补充签署人时，指定是否发送或签领取短信</li><li>SMS：开启或签领取短信通知</li><li>NONE：关闭或签领取短信通知</li><li>当NotifyType=NONE时，可调用<a href="https://qian.tencent.com/developers/companyApis/startFlows/CreateSchemeUrl" target="_blank" rel="noopener noreferrer">获取跳转至腾讯电子签小程序的签署链接</a>接口生成签署链接来完成或签领取</li>
                     * @return NotifyType <p>通知类型：</p><li>当FillApproverType =0，或签场景补充签署人时，指定是否发送或签领取短信</li><li>SMS：开启或签领取短信通知</li><li>NONE：关闭或签领取短信通知</li><li>当NotifyType=NONE时，可调用<a href="https://qian.tencent.com/developers/companyApis/startFlows/CreateSchemeUrl" target="_blank" rel="noopener noreferrer">获取跳转至腾讯电子签小程序的签署链接</a>接口生成签署链接来完成或签领取</li>
                     * 
                     */
                    std::string GetNotifyType() const;

                    /**
                     * 设置<p>通知类型：</p><li>当FillApproverType =0，或签场景补充签署人时，指定是否发送或签领取短信</li><li>SMS：开启或签领取短信通知</li><li>NONE：关闭或签领取短信通知</li><li>当NotifyType=NONE时，可调用<a href="https://qian.tencent.com/developers/companyApis/startFlows/CreateSchemeUrl" target="_blank" rel="noopener noreferrer">获取跳转至腾讯电子签小程序的签署链接</a>接口生成签署链接来完成或签领取</li>
                     * @param _notifyType <p>通知类型：</p><li>当FillApproverType =0，或签场景补充签署人时，指定是否发送或签领取短信</li><li>SMS：开启或签领取短信通知</li><li>NONE：关闭或签领取短信通知</li><li>当NotifyType=NONE时，可调用<a href="https://qian.tencent.com/developers/companyApis/startFlows/CreateSchemeUrl" target="_blank" rel="noopener noreferrer">获取跳转至腾讯电子签小程序的签署链接</a>接口生成签署链接来完成或签领取</li>
                     * 
                     */
                    void SetNotifyType(const std::string& _notifyType);

                    /**
                     * 判断参数 NotifyType 是否已赋值
                     * @return NotifyType 是否已赋值
                     * 
                     */
                    bool NotifyTypeHasBeenSet() const;

                private:

                    /**
                     * <p>签署方经办人在模板中配置的参与方ID，与控件绑定，是控件的归属方，ID为32位字符串。<br>模板发起合同时，该参数为必填项。<br>文件发起合同时，该参数无需传值。<br>如果开发者后序用合同模板发起合同，建议保存此值，在用合同模板发起合同中需此值绑定对应的签署经办人 。</p>
                     */
                    std::string m_recipientId;
                    bool m_recipientIdHasBeenSet;

                    /**
                     * <p>签署人来源<br>WEWORKAPP: 企业微信<br><br>仅【企微或签】时指定WEWORKAPP</p>
                     */
                    std::string m_approverSource;
                    bool m_approverSourceHasBeenSet;

                    /**
                     * <p>企业微信UserId<br><br>当ApproverSource为WEWORKAPP的企微或签场景下，必须指企业自有应用获取企业微信的UserId</p>
                     */
                    std::string m_customUserId;
                    bool m_customUserIdHasBeenSet;

                    /**
                     * <p>企业签署人的员工姓名。除企业微信应用场景（ApproverSource设置为WEWORKAPP）外，本字段为必填。</p>
                     */
                    std::string m_approverName;
                    bool m_approverNameHasBeenSet;

                    /**
                     * <p>补充企业签署人员工手机号</p><ul><li>ApproverSource!=WEWORKAPP时，必传</li></ul>
                     */
                    std::string m_approverMobile;
                    bool m_approverMobileHasBeenSet;

                    /**
                     * <p>补充企业动态签署人时，需要指定对应企业名称</p>
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * <p>签署方经办人的证件类型，支持以下类型</p><ul><li>ID_CARD 中国大陆居民身份证</li><li>HONGKONG_AND_MACAO 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul><p>注: 补充个人签署方时，若该用户已在电子签完成实名则可通过指定姓名和证件类型、证件号码完成补充。</p>
                     */
                    std::string m_approverIdCardType;
                    bool m_approverIdCardTypeHasBeenSet;

                    /**
                     * <p>签署方经办人的证件号码，应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字</li><li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串</li></ul><p>注：<code>补充个人签署方时，若该用户已在电子签完成实名则可通过指定姓名和证件类型、证件号码完成补充。</code></p>
                     */
                    std::string m_approverIdCardNumber;
                    bool m_approverIdCardNumberHasBeenSet;

                    /**
                     * <p>合同流程ID</p><ul><li>补充合同组子合同动态签署人时必传。</li><li>补充普通合同时，请阅读：<a href="https://qian.tencent.com/developers/companyApis/operateFlows/CreateFlowApprovers/" target="_blank">补充签署人接口</a>的接口使用说明</li></ul>
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * <p>通知类型：</p><li>当FillApproverType =0，或签场景补充签署人时，指定是否发送或签领取短信</li><li>SMS：开启或签领取短信通知</li><li>NONE：关闭或签领取短信通知</li><li>当NotifyType=NONE时，可调用<a href="https://qian.tencent.com/developers/companyApis/startFlows/CreateSchemeUrl" target="_blank" rel="noopener noreferrer">获取跳转至腾讯电子签小程序的签署链接</a>接口生成签署链接来完成或签领取</li>
                     */
                    std::string m_notifyType;
                    bool m_notifyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_FILLAPPROVERINFO_H_
