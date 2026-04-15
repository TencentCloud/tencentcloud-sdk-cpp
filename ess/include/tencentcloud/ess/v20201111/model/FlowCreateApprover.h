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
#include <tencentcloud/ess/v20201111/model/ApproverOption.h>
#include <tencentcloud/ess/v20201111/model/Component.h>
#include <tencentcloud/ess/v20201111/model/Intention.h>


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
                     * 获取<p>在指定签署方时，可以选择企业B端或个人C端等不同的参与者类型，可选类型如下：</p><ul><li> <b>0</b> :企业B端。</li><li> <b>1</b> :个人C端。</li><li> <b>3</b> :企业B端静默（自动）签署，无需签署人参与，自动签署可以参考<a href="https://qian.tencent.com/developers/company/autosign_guide" target="_blank" rel="noopener noreferrer">自动签署使用说明</a>文档。</li><li> <b>7</b> :个人C端自动签署，适用于个人自动签场景。注: <b>个人自动签场景为白名单功能，使用前请联系对接的客户经理沟通。</b> </li></ul>
                     * @return ApproverType <p>在指定签署方时，可以选择企业B端或个人C端等不同的参与者类型，可选类型如下：</p><ul><li> <b>0</b> :企业B端。</li><li> <b>1</b> :个人C端。</li><li> <b>3</b> :企业B端静默（自动）签署，无需签署人参与，自动签署可以参考<a href="https://qian.tencent.com/developers/company/autosign_guide" target="_blank" rel="noopener noreferrer">自动签署使用说明</a>文档。</li><li> <b>7</b> :个人C端自动签署，适用于个人自动签场景。注: <b>个人自动签场景为白名单功能，使用前请联系对接的客户经理沟通。</b> </li></ul>
                     * 
                     */
                    int64_t GetApproverType() const;

                    /**
                     * 设置<p>在指定签署方时，可以选择企业B端或个人C端等不同的参与者类型，可选类型如下：</p><ul><li> <b>0</b> :企业B端。</li><li> <b>1</b> :个人C端。</li><li> <b>3</b> :企业B端静默（自动）签署，无需签署人参与，自动签署可以参考<a href="https://qian.tencent.com/developers/company/autosign_guide" target="_blank" rel="noopener noreferrer">自动签署使用说明</a>文档。</li><li> <b>7</b> :个人C端自动签署，适用于个人自动签场景。注: <b>个人自动签场景为白名单功能，使用前请联系对接的客户经理沟通。</b> </li></ul>
                     * @param _approverType <p>在指定签署方时，可以选择企业B端或个人C端等不同的参与者类型，可选类型如下：</p><ul><li> <b>0</b> :企业B端。</li><li> <b>1</b> :个人C端。</li><li> <b>3</b> :企业B端静默（自动）签署，无需签署人参与，自动签署可以参考<a href="https://qian.tencent.com/developers/company/autosign_guide" target="_blank" rel="noopener noreferrer">自动签署使用说明</a>文档。</li><li> <b>7</b> :个人C端自动签署，适用于个人自动签场景。注: <b>个人自动签场景为白名单功能，使用前请联系对接的客户经理沟通。</b> </li></ul>
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
                     * 获取<p>组织机构名称。<br>请确认该名称与企业营业执照中注册的名称一致。<br>如果名称中包含英文括号()，请使用中文括号（）代替。</p><p>注: <code>当approverType=0(企业签署方) 或 approverType=3(企业静默签署)时，必须指定</code></p>
                     * @return OrganizationName <p>组织机构名称。<br>请确认该名称与企业营业执照中注册的名称一致。<br>如果名称中包含英文括号()，请使用中文括号（）代替。</p><p>注: <code>当approverType=0(企业签署方) 或 approverType=3(企业静默签署)时，必须指定</code></p>
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置<p>组织机构名称。<br>请确认该名称与企业营业执照中注册的名称一致。<br>如果名称中包含英文括号()，请使用中文括号（）代替。</p><p>注: <code>当approverType=0(企业签署方) 或 approverType=3(企业静默签署)时，必须指定</code></p>
                     * @param _organizationName <p>组织机构名称。<br>请确认该名称与企业营业执照中注册的名称一致。<br>如果名称中包含英文括号()，请使用中文括号（）代替。</p><p>注: <code>当approverType=0(企业签署方) 或 approverType=3(企业静默签署)时，必须指定</code></p>
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
                     * 获取<p>签署方经办人的姓名。<br>经办人的姓名将用于身份认证和电子签名，请确保填写的姓名为签署方的真实姓名，而非昵称等代名。</p><p>在未指定签署人电子签UserId情况下，为必填参数</p>
                     * @return ApproverName <p>签署方经办人的姓名。<br>经办人的姓名将用于身份认证和电子签名，请确保填写的姓名为签署方的真实姓名，而非昵称等代名。</p><p>在未指定签署人电子签UserId情况下，为必填参数</p>
                     * 
                     */
                    std::string GetApproverName() const;

                    /**
                     * 设置<p>签署方经办人的姓名。<br>经办人的姓名将用于身份认证和电子签名，请确保填写的姓名为签署方的真实姓名，而非昵称等代名。</p><p>在未指定签署人电子签UserId情况下，为必填参数</p>
                     * @param _approverName <p>签署方经办人的姓名。<br>经办人的姓名将用于身份认证和电子签名，请确保填写的姓名为签署方的真实姓名，而非昵称等代名。</p><p>在未指定签署人电子签UserId情况下，为必填参数</p>
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
                     * 获取<p>签署方经办人手机号码， 支持中国大陆手机号11位数字(无需加+86前缀或其他字符)。 此手机号用于通知和用户的实名认证等环境，请确认手机号所有方为此合同签署方。</p><p>注：<code>在未指定签署人电子签UserId情况下，为必填参数</code></p>
                     * @return ApproverMobile <p>签署方经办人手机号码， 支持中国大陆手机号11位数字(无需加+86前缀或其他字符)。 此手机号用于通知和用户的实名认证等环境，请确认手机号所有方为此合同签署方。</p><p>注：<code>在未指定签署人电子签UserId情况下，为必填参数</code></p>
                     * 
                     */
                    std::string GetApproverMobile() const;

                    /**
                     * 设置<p>签署方经办人手机号码， 支持中国大陆手机号11位数字(无需加+86前缀或其他字符)。 此手机号用于通知和用户的实名认证等环境，请确认手机号所有方为此合同签署方。</p><p>注：<code>在未指定签署人电子签UserId情况下，为必填参数</code></p>
                     * @param _approverMobile <p>签署方经办人手机号码， 支持中国大陆手机号11位数字(无需加+86前缀或其他字符)。 此手机号用于通知和用户的实名认证等环境，请确认手机号所有方为此合同签署方。</p><p>注：<code>在未指定签署人电子签UserId情况下，为必填参数</code></p>
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
                     * 获取<p>证件类型，支持以下类型</p><ul><li><b>ID_CARD</b>: 居民身份证 (默认值)</li><li><b>HONGKONG_AND_MACAO</b> : 港澳居民来往内地通行证</li><li><b>HONGKONG_MACAO_AND_TAIWAN</b> : 港澳台居民居住证(格式同居民身份证)</li></ul>
                     * @return ApproverIdCardType <p>证件类型，支持以下类型</p><ul><li><b>ID_CARD</b>: 居民身份证 (默认值)</li><li><b>HONGKONG_AND_MACAO</b> : 港澳居民来往内地通行证</li><li><b>HONGKONG_MACAO_AND_TAIWAN</b> : 港澳台居民居住证(格式同居民身份证)</li></ul>
                     * 
                     */
                    std::string GetApproverIdCardType() const;

                    /**
                     * 设置<p>证件类型，支持以下类型</p><ul><li><b>ID_CARD</b>: 居民身份证 (默认值)</li><li><b>HONGKONG_AND_MACAO</b> : 港澳居民来往内地通行证</li><li><b>HONGKONG_MACAO_AND_TAIWAN</b> : 港澳台居民居住证(格式同居民身份证)</li></ul>
                     * @param _approverIdCardType <p>证件类型，支持以下类型</p><ul><li><b>ID_CARD</b>: 居民身份证 (默认值)</li><li><b>HONGKONG_AND_MACAO</b> : 港澳居民来往内地通行证</li><li><b>HONGKONG_MACAO_AND_TAIWAN</b> : 港澳台居民居住证(格式同居民身份证)</li></ul>
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
                     * 获取<p>证件号码，应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li><li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     * @return ApproverIdCardNumber <p>证件号码，应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li><li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     * 
                     */
                    std::string GetApproverIdCardNumber() const;

                    /**
                     * 设置<p>证件号码，应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li><li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     * @param _approverIdCardNumber <p>证件号码，应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li><li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
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
                     * 获取<p>签署方经办人在模板中配置的参与方ID，与控件绑定，是控件的归属方，ID为32位字符串。</p><p><b>模板发起合同时，该参数为必填项，可以通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/DescribeFlowTemplates">查询模板信息接口</a>获得。</b><br><b>文件发起合同时，该参数无需传值。</b></p><p>如果开发者后续用合同模板发起合同，建议保存此值，在用合同模板发起合同中需此值绑定对应的签署经办人 。</p>
                     * @return RecipientId <p>签署方经办人在模板中配置的参与方ID，与控件绑定，是控件的归属方，ID为32位字符串。</p><p><b>模板发起合同时，该参数为必填项，可以通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/DescribeFlowTemplates">查询模板信息接口</a>获得。</b><br><b>文件发起合同时，该参数无需传值。</b></p><p>如果开发者后续用合同模板发起合同，建议保存此值，在用合同模板发起合同中需此值绑定对应的签署经办人 。</p>
                     * 
                     */
                    std::string GetRecipientId() const;

                    /**
                     * 设置<p>签署方经办人在模板中配置的参与方ID，与控件绑定，是控件的归属方，ID为32位字符串。</p><p><b>模板发起合同时，该参数为必填项，可以通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/DescribeFlowTemplates">查询模板信息接口</a>获得。</b><br><b>文件发起合同时，该参数无需传值。</b></p><p>如果开发者后续用合同模板发起合同，建议保存此值，在用合同模板发起合同中需此值绑定对应的签署经办人 。</p>
                     * @param _recipientId <p>签署方经办人在模板中配置的参与方ID，与控件绑定，是控件的归属方，ID为32位字符串。</p><p><b>模板发起合同时，该参数为必填项，可以通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/DescribeFlowTemplates">查询模板信息接口</a>获得。</b><br><b>文件发起合同时，该参数无需传值。</b></p><p>如果开发者后续用合同模板发起合同，建议保存此值，在用合同模板发起合同中需此值绑定对应的签署经办人 。</p>
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
                     * 获取<p>签署意愿确认渠道，默认为WEIXINAPP:人脸识别</p><p>注: &lt;font color=&quot;red&quot;&gt;不再使用, <code>用ApproverSignTypes签署人签署合同时的认证方式代替, 新客户可请用ApproverSignTypes来设置</code></p>
                     * @return VerifyChannel <p>签署意愿确认渠道，默认为WEIXINAPP:人脸识别</p><p>注: &lt;font color=&quot;red&quot;&gt;不再使用, <code>用ApproverSignTypes签署人签署合同时的认证方式代替, 新客户可请用ApproverSignTypes来设置</code></p>
                     * 
                     */
                    std::vector<std::string> GetVerifyChannel() const;

                    /**
                     * 设置<p>签署意愿确认渠道，默认为WEIXINAPP:人脸识别</p><p>注: &lt;font color=&quot;red&quot;&gt;不再使用, <code>用ApproverSignTypes签署人签署合同时的认证方式代替, 新客户可请用ApproverSignTypes来设置</code></p>
                     * @param _verifyChannel <p>签署意愿确认渠道，默认为WEIXINAPP:人脸识别</p><p>注: &lt;font color=&quot;red&quot;&gt;不再使用, <code>用ApproverSignTypes签署人签署合同时的认证方式代替, 新客户可请用ApproverSignTypes来设置</code></p>
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
                     * 获取<p>通知签署方经办人的方式,  有以下途径:</p><ul><li>  **sms**  :  (默认)短信</li><li>  **email**  :  邮件</li><li>  **all**  :  邮件+短信</li><li>   **none**   : 不通知</li></ul><p>注: <code>既是发起方又是签署方时，不给此签署方发送短信</code></p><p>枚举值：</p><ul><li>sms： 短信通知</li><li>email： 邮件通知</li><li>all： 邮件通知+短信通知</li><li>none： 不做任何形式的通知</li></ul>
                     * @return NotifyType <p>通知签署方经办人的方式,  有以下途径:</p><ul><li>  **sms**  :  (默认)短信</li><li>  **email**  :  邮件</li><li>  **all**  :  邮件+短信</li><li>   **none**   : 不通知</li></ul><p>注: <code>既是发起方又是签署方时，不给此签署方发送短信</code></p><p>枚举值：</p><ul><li>sms： 短信通知</li><li>email： 邮件通知</li><li>all： 邮件通知+短信通知</li><li>none： 不做任何形式的通知</li></ul>
                     * 
                     */
                    std::string GetNotifyType() const;

                    /**
                     * 设置<p>通知签署方经办人的方式,  有以下途径:</p><ul><li>  **sms**  :  (默认)短信</li><li>  **email**  :  邮件</li><li>  **all**  :  邮件+短信</li><li>   **none**   : 不通知</li></ul><p>注: <code>既是发起方又是签署方时，不给此签署方发送短信</code></p><p>枚举值：</p><ul><li>sms： 短信通知</li><li>email： 邮件通知</li><li>all： 邮件通知+短信通知</li><li>none： 不做任何形式的通知</li></ul>
                     * @param _notifyType <p>通知签署方经办人的方式,  有以下途径:</p><ul><li>  **sms**  :  (默认)短信</li><li>  **email**  :  邮件</li><li>  **all**  :  邮件+短信</li><li>   **none**   : 不通知</li></ul><p>注: <code>既是发起方又是签署方时，不给此签署方发送短信</code></p><p>枚举值：</p><ul><li>sms： 短信通知</li><li>email： 邮件通知</li><li>all： 邮件通知+短信通知</li><li>none： 不做任何形式的通知</li></ul>
                     * 
                     */
                    void SetNotifyType(const std::string& _notifyType);

                    /**
                     * 判断参数 NotifyType 是否已赋值
                     * @return NotifyType 是否已赋值
                     * 
                     */
                    bool NotifyTypeHasBeenSet() const;

                    /**
                     * 获取<p>合同强制需要阅读全文，无需传此参数</p>
                     * @return IsFullText <p>合同强制需要阅读全文，无需传此参数</p>
                     * 
                     */
                    bool GetIsFullText() const;

                    /**
                     * 设置<p>合同强制需要阅读全文，无需传此参数</p>
                     * @param _isFullText <p>合同强制需要阅读全文，无需传此参数</p>
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
                     * 获取<p>签署方在签署合同之前，需要强制阅读合同的时长，可指定为3秒至300秒之间的任意值。</p><p>若未指定阅读时间，则会按照合同页数大小计算阅读时间，计算规则如下：</p><ul><li>合同页数少于等于2页，阅读时间为3秒；</li><li>合同页数为3到5页，阅读时间为5秒；</li><li>合同页数大于等于6页，阅读时间为10秒。</li></ul>
                     * @return PreReadTime <p>签署方在签署合同之前，需要强制阅读合同的时长，可指定为3秒至300秒之间的任意值。</p><p>若未指定阅读时间，则会按照合同页数大小计算阅读时间，计算规则如下：</p><ul><li>合同页数少于等于2页，阅读时间为3秒；</li><li>合同页数为3到5页，阅读时间为5秒；</li><li>合同页数大于等于6页，阅读时间为10秒。</li></ul>
                     * 
                     */
                    uint64_t GetPreReadTime() const;

                    /**
                     * 设置<p>签署方在签署合同之前，需要强制阅读合同的时长，可指定为3秒至300秒之间的任意值。</p><p>若未指定阅读时间，则会按照合同页数大小计算阅读时间，计算规则如下：</p><ul><li>合同页数少于等于2页，阅读时间为3秒；</li><li>合同页数为3到5页，阅读时间为5秒；</li><li>合同页数大于等于6页，阅读时间为10秒。</li></ul>
                     * @param _preReadTime <p>签署方在签署合同之前，需要强制阅读合同的时长，可指定为3秒至300秒之间的任意值。</p><p>若未指定阅读时间，则会按照合同页数大小计算阅读时间，计算规则如下：</p><ul><li>合同页数少于等于2页，阅读时间为3秒；</li><li>合同页数为3到5页，阅读时间为5秒；</li><li>合同页数大于等于6页，阅读时间为10秒。</li></ul>
                     * 
                     */
                    void SetPreReadTime(const uint64_t& _preReadTime);

                    /**
                     * 判断参数 PreReadTime 是否已赋值
                     * @return PreReadTime 是否已赋值
                     * 
                     */
                    bool PreReadTimeHasBeenSet() const;

                    /**
                     * 获取<p>签署人userId，仅支持本企业的员工userid， 可在控制台组织管理处获得</p><p>注：<br>如果传进来的<font color="red">UserId已经实名， 则忽略ApproverName，ApproverIdCardType，ApproverIdCardNumber，ApproverMobile这四个入参</font>（会用此UserId实名的身份证和登录的手机号覆盖）</p>
                     * @return UserId <p>签署人userId，仅支持本企业的员工userid， 可在控制台组织管理处获得</p><p>注：<br>如果传进来的<font color="red">UserId已经实名， 则忽略ApproverName，ApproverIdCardType，ApproverIdCardNumber，ApproverMobile这四个入参</font>（会用此UserId实名的身份证和登录的手机号覆盖）</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>签署人userId，仅支持本企业的员工userid， 可在控制台组织管理处获得</p><p>注：<br>如果传进来的<font color="red">UserId已经实名， 则忽略ApproverName，ApproverIdCardType，ApproverIdCardNumber，ApproverMobile这四个入参</font>（会用此UserId实名的身份证和登录的手机号覆盖）</p>
                     * @param _userId <p>签署人userId，仅支持本企业的员工userid， 可在控制台组织管理处获得</p><p>注：<br>如果传进来的<font color="red">UserId已经实名， 则忽略ApproverName，ApproverIdCardType，ApproverIdCardNumber，ApproverMobile这四个入参</font>（会用此UserId实名的身份证和登录的手机号覆盖）</p>
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
                     * 获取<p><font color="red">字段不再使用</font>，当前只支持true，默认为true</p>
                     * @return Required <p><font color="red">字段不再使用</font>，当前只支持true，默认为true</p>
                     * 
                     */
                    bool GetRequired() const;

                    /**
                     * 设置<p><font color="red">字段不再使用</font>，当前只支持true，默认为true</p>
                     * @param _required <p><font color="red">字段不再使用</font>，当前只支持true，默认为true</p>
                     * 
                     */
                    void SetRequired(const bool& _required);

                    /**
                     * 判断参数 Required 是否已赋值
                     * @return Required 是否已赋值
                     * 
                     */
                    bool RequiredHasBeenSet() const;

                    /**
                     * 获取<p>在企微场景下使用，需设置参数为<strong>WEWORKAPP</strong>，以表明合同来源于企微。</p>
                     * @return ApproverSource <p>在企微场景下使用，需设置参数为<strong>WEWORKAPP</strong>，以表明合同来源于企微。</p>
                     * 
                     */
                    std::string GetApproverSource() const;

                    /**
                     * 设置<p>在企微场景下使用，需设置参数为<strong>WEWORKAPP</strong>，以表明合同来源于企微。</p>
                     * @param _approverSource <p>在企微场景下使用，需设置参数为<strong>WEWORKAPP</strong>，以表明合同来源于企微。</p>
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
                     * 获取<p>在企业微信场景下，表明该合同流程为或签，其最大长度为64位字符串。<br>所有参与或签的人员均需具备该标识。<br>注意，在合同中，不同的或签参与人必须保证其CustomApproverTag唯一。<br>如果或签签署人为本方企业微信参与人，则需要指定ApproverSource参数为WEWORKAPP。</p>
                     * @return CustomApproverTag <p>在企业微信场景下，表明该合同流程为或签，其最大长度为64位字符串。<br>所有参与或签的人员均需具备该标识。<br>注意，在合同中，不同的或签参与人必须保证其CustomApproverTag唯一。<br>如果或签签署人为本方企业微信参与人，则需要指定ApproverSource参数为WEWORKAPP。</p>
                     * 
                     */
                    std::string GetCustomApproverTag() const;

                    /**
                     * 设置<p>在企业微信场景下，表明该合同流程为或签，其最大长度为64位字符串。<br>所有参与或签的人员均需具备该标识。<br>注意，在合同中，不同的或签参与人必须保证其CustomApproverTag唯一。<br>如果或签签署人为本方企业微信参与人，则需要指定ApproverSource参数为WEWORKAPP。</p>
                     * @param _customApproverTag <p>在企业微信场景下，表明该合同流程为或签，其最大长度为64位字符串。<br>所有参与或签的人员均需具备该标识。<br>注意，在合同中，不同的或签参与人必须保证其CustomApproverTag唯一。<br>如果或签签署人为本方企业微信参与人，则需要指定ApproverSource参数为WEWORKAPP。</p>
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
                     * 获取<p>快速注册相关信息</p>
                     * @return RegisterInfo <p>快速注册相关信息</p>
                     * 
                     */
                    RegisterInfo GetRegisterInfo() const;

                    /**
                     * 设置<p>快速注册相关信息</p>
                     * @param _registerInfo <p>快速注册相关信息</p>
                     * 
                     */
                    void SetRegisterInfo(const RegisterInfo& _registerInfo);

                    /**
                     * 判断参数 RegisterInfo 是否已赋值
                     * @return RegisterInfo 是否已赋值
                     * 
                     */
                    bool RegisterInfoHasBeenSet() const;

                    /**
                     * 获取<p>签署人个性化能力值，如是否可以转发他人处理、是否可以拒签、是否为动态补充签署人等功能开关。</p>
                     * @return ApproverOption <p>签署人个性化能力值，如是否可以转发他人处理、是否可以拒签、是否为动态补充签署人等功能开关。</p>
                     * 
                     */
                    ApproverOption GetApproverOption() const;

                    /**
                     * 设置<p>签署人个性化能力值，如是否可以转发他人处理、是否可以拒签、是否为动态补充签署人等功能开关。</p>
                     * @param _approverOption <p>签署人个性化能力值，如是否可以转发他人处理、是否可以拒签、是否为动态补充签署人等功能开关。</p>
                     * 
                     */
                    void SetApproverOption(const ApproverOption& _approverOption);

                    /**
                     * 判断参数 ApproverOption 是否已赋值
                     * @return ApproverOption 是否已赋值
                     * 
                     */
                    bool ApproverOptionHasBeenSet() const;

                    /**
                     * 获取<p>签署完前端跳转的url，暂未使用</p>
                     * @return JumpUrl <p>签署完前端跳转的url，暂未使用</p>
                     * @deprecated
                     */
                    std::string GetJumpUrl() const;

                    /**
                     * 设置<p>签署完前端跳转的url，暂未使用</p>
                     * @param _jumpUrl <p>签署完前端跳转的url，暂未使用</p>
                     * @deprecated
                     */
                    void SetJumpUrl(const std::string& _jumpUrl);

                    /**
                     * 判断参数 JumpUrl 是否已赋值
                     * @return JumpUrl 是否已赋值
                     * @deprecated
                     */
                    bool JumpUrlHasBeenSet() const;

                    /**
                     * 获取<p>签署人的签署ID</p><ul><li>在CreateFlow、CreatePrepareFlow等发起流程时不需要传入此参数，电子签后台系统会自动生成。</li><li>在CreateFlowSignUrl、CreateBatchQuickSignUrl等生成签署链接时，可以通过查询详情接口获取签署人的SignId，然后可以将此值传入，为该签署人创建签署链接。这样可以避免重复传输姓名、手机号、证件号等其他信息。</li></ul>
                     * @return SignId <p>签署人的签署ID</p><ul><li>在CreateFlow、CreatePrepareFlow等发起流程时不需要传入此参数，电子签后台系统会自动生成。</li><li>在CreateFlowSignUrl、CreateBatchQuickSignUrl等生成签署链接时，可以通过查询详情接口获取签署人的SignId，然后可以将此值传入，为该签署人创建签署链接。这样可以避免重复传输姓名、手机号、证件号等其他信息。</li></ul>
                     * 
                     */
                    std::string GetSignId() const;

                    /**
                     * 设置<p>签署人的签署ID</p><ul><li>在CreateFlow、CreatePrepareFlow等发起流程时不需要传入此参数，电子签后台系统会自动生成。</li><li>在CreateFlowSignUrl、CreateBatchQuickSignUrl等生成签署链接时，可以通过查询详情接口获取签署人的SignId，然后可以将此值传入，为该签署人创建签署链接。这样可以避免重复传输姓名、手机号、证件号等其他信息。</li></ul>
                     * @param _signId <p>签署人的签署ID</p><ul><li>在CreateFlow、CreatePrepareFlow等发起流程时不需要传入此参数，电子签后台系统会自动生成。</li><li>在CreateFlowSignUrl、CreateBatchQuickSignUrl等生成签署链接时，可以通过查询详情接口获取签署人的SignId，然后可以将此值传入，为该签署人创建签署链接。这样可以避免重复传输姓名、手机号、证件号等其他信息。</li></ul>
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
                     * 获取<p>此签署人(员工或者个人)签署时，是否需要发起方企业审批，取值如下：</p><ul><li>**false**：（默认）不需要审批，直接签署。</li><li>**true**：需要走审批流程。当到对应参与人签署时，会阻塞其签署操作，等待企业内部审批完成。</li></ul>企业可以通过CreateFlowSignReview审批接口通知腾讯电子签平台企业内部审批结果<ul><li>如果企业通知腾讯电子签平台审核通过，签署方可继续签署动作。</li><li>如果企业通知腾讯电子签平台审核未通过，平台将继续阻塞签署方的签署动作，直到企业通知平台审核通过。</li></ul><p>注：<code>此功能可用于与发起方企业内部的审批流程进行关联，支持手动、静默签署合同</code></p><p><img src="https://qcloudimg.tencent-cloud.cn/raw/b14d5188ed0229d1401e74a9a49cab6d.png" alt="image"></p>
                     * @return ApproverNeedSignReview <p>此签署人(员工或者个人)签署时，是否需要发起方企业审批，取值如下：</p><ul><li>**false**：（默认）不需要审批，直接签署。</li><li>**true**：需要走审批流程。当到对应参与人签署时，会阻塞其签署操作，等待企业内部审批完成。</li></ul>企业可以通过CreateFlowSignReview审批接口通知腾讯电子签平台企业内部审批结果<ul><li>如果企业通知腾讯电子签平台审核通过，签署方可继续签署动作。</li><li>如果企业通知腾讯电子签平台审核未通过，平台将继续阻塞签署方的签署动作，直到企业通知平台审核通过。</li></ul><p>注：<code>此功能可用于与发起方企业内部的审批流程进行关联，支持手动、静默签署合同</code></p><p><img src="https://qcloudimg.tencent-cloud.cn/raw/b14d5188ed0229d1401e74a9a49cab6d.png" alt="image"></p>
                     * 
                     */
                    bool GetApproverNeedSignReview() const;

                    /**
                     * 设置<p>此签署人(员工或者个人)签署时，是否需要发起方企业审批，取值如下：</p><ul><li>**false**：（默认）不需要审批，直接签署。</li><li>**true**：需要走审批流程。当到对应参与人签署时，会阻塞其签署操作，等待企业内部审批完成。</li></ul>企业可以通过CreateFlowSignReview审批接口通知腾讯电子签平台企业内部审批结果<ul><li>如果企业通知腾讯电子签平台审核通过，签署方可继续签署动作。</li><li>如果企业通知腾讯电子签平台审核未通过，平台将继续阻塞签署方的签署动作，直到企业通知平台审核通过。</li></ul><p>注：<code>此功能可用于与发起方企业内部的审批流程进行关联，支持手动、静默签署合同</code></p><p><img src="https://qcloudimg.tencent-cloud.cn/raw/b14d5188ed0229d1401e74a9a49cab6d.png" alt="image"></p>
                     * @param _approverNeedSignReview <p>此签署人(员工或者个人)签署时，是否需要发起方企业审批，取值如下：</p><ul><li>**false**：（默认）不需要审批，直接签署。</li><li>**true**：需要走审批流程。当到对应参与人签署时，会阻塞其签署操作，等待企业内部审批完成。</li></ul>企业可以通过CreateFlowSignReview审批接口通知腾讯电子签平台企业内部审批结果<ul><li>如果企业通知腾讯电子签平台审核通过，签署方可继续签署动作。</li><li>如果企业通知腾讯电子签平台审核未通过，平台将继续阻塞签署方的签署动作，直到企业通知平台审核通过。</li></ul><p>注：<code>此功能可用于与发起方企业内部的审批流程进行关联，支持手动、静默签署合同</code></p><p><img src="https://qcloudimg.tencent-cloud.cn/raw/b14d5188ed0229d1401e74a9a49cab6d.png" alt="image"></p>
                     * 
                     */
                    void SetApproverNeedSignReview(const bool& _approverNeedSignReview);

                    /**
                     * 判断参数 ApproverNeedSignReview 是否已赋值
                     * @return ApproverNeedSignReview 是否已赋值
                     * 
                     */
                    bool ApproverNeedSignReviewHasBeenSet() const;

                    /**
                     * 获取<p>签署人签署控件， 此参数仅针对文件发起（CreateFlowByFiles）生效</p><p>合同中的签署控件列表，列表中可支持下列多种签署控件,控件的详细定义参考开发者中心的Component结构体</p><ul><li> 个人签名/印章</li><li> 企业印章</li><li> 骑缝章等签署控件</li></ul><p><code>此参数仅针对文件发起设置生效,模板发起合同签署流程, 请以模板配置为主</code></p>
                     * @return SignComponents <p>签署人签署控件， 此参数仅针对文件发起（CreateFlowByFiles）生效</p><p>合同中的签署控件列表，列表中可支持下列多种签署控件,控件的详细定义参考开发者中心的Component结构体</p><ul><li> 个人签名/印章</li><li> 企业印章</li><li> 骑缝章等签署控件</li></ul><p><code>此参数仅针对文件发起设置生效,模板发起合同签署流程, 请以模板配置为主</code></p>
                     * 
                     */
                    std::vector<Component> GetSignComponents() const;

                    /**
                     * 设置<p>签署人签署控件， 此参数仅针对文件发起（CreateFlowByFiles）生效</p><p>合同中的签署控件列表，列表中可支持下列多种签署控件,控件的详细定义参考开发者中心的Component结构体</p><ul><li> 个人签名/印章</li><li> 企业印章</li><li> 骑缝章等签署控件</li></ul><p><code>此参数仅针对文件发起设置生效,模板发起合同签署流程, 请以模板配置为主</code></p>
                     * @param _signComponents <p>签署人签署控件， 此参数仅针对文件发起（CreateFlowByFiles）生效</p><p>合同中的签署控件列表，列表中可支持下列多种签署控件,控件的详细定义参考开发者中心的Component结构体</p><ul><li> 个人签名/印章</li><li> 企业印章</li><li> 骑缝章等签署控件</li></ul><p><code>此参数仅针对文件发起设置生效,模板发起合同签署流程, 请以模板配置为主</code></p>
                     * 
                     */
                    void SetSignComponents(const std::vector<Component>& _signComponents);

                    /**
                     * 判断参数 SignComponents 是否已赋值
                     * @return SignComponents 是否已赋值
                     * 
                     */
                    bool SignComponentsHasBeenSet() const;

                    /**
                     * 获取<p>签署人填写控件 此参数仅针对文件发起（CreateFlowByFiles）生效</p><p>合同中的填写控件列表，列表中可支持下列多种填写控件，控件的详细定义参考开发者中心的Component结构体</p><ul><li>单行文本控件</li><li>多行文本控件</li><li>勾选框控件</li><li>数字控件</li><li>图片控件</li><li>动态表格等填写控件</li></ul><p><code>此参数仅针对文件发起设置生效,模板发起合同签署流程, 请以模板配置为主</code></p>
                     * @return Components <p>签署人填写控件 此参数仅针对文件发起（CreateFlowByFiles）生效</p><p>合同中的填写控件列表，列表中可支持下列多种填写控件，控件的详细定义参考开发者中心的Component结构体</p><ul><li>单行文本控件</li><li>多行文本控件</li><li>勾选框控件</li><li>数字控件</li><li>图片控件</li><li>动态表格等填写控件</li></ul><p><code>此参数仅针对文件发起设置生效,模板发起合同签署流程, 请以模板配置为主</code></p>
                     * 
                     */
                    std::vector<Component> GetComponents() const;

                    /**
                     * 设置<p>签署人填写控件 此参数仅针对文件发起（CreateFlowByFiles）生效</p><p>合同中的填写控件列表，列表中可支持下列多种填写控件，控件的详细定义参考开发者中心的Component结构体</p><ul><li>单行文本控件</li><li>多行文本控件</li><li>勾选框控件</li><li>数字控件</li><li>图片控件</li><li>动态表格等填写控件</li></ul><p><code>此参数仅针对文件发起设置生效,模板发起合同签署流程, 请以模板配置为主</code></p>
                     * @param _components <p>签署人填写控件 此参数仅针对文件发起（CreateFlowByFiles）生效</p><p>合同中的填写控件列表，列表中可支持下列多种填写控件，控件的详细定义参考开发者中心的Component结构体</p><ul><li>单行文本控件</li><li>多行文本控件</li><li>勾选框控件</li><li>数字控件</li><li>图片控件</li><li>动态表格等填写控件</li></ul><p><code>此参数仅针对文件发起设置生效,模板发起合同签署流程, 请以模板配置为主</code></p>
                     * 
                     */
                    void SetComponents(const std::vector<Component>& _components);

                    /**
                     * 判断参数 Components 是否已赋值
                     * @return Components 是否已赋值
                     * 
                     */
                    bool ComponentsHasBeenSet() const;

                    /**
                     * 获取<p>当签署方控件类型为 <b>SIGN_SIGNATURE</b> 时，可以指定签署方签名方式。如果不指定，签署人可以使用所有的签名类型，可指定的签名类型包括：</p><ul><li> <b>HANDWRITE</b> :需要实时手写的手写签名。</li><li> <b>HANDWRITTEN_ESIGN</b> :长效手写签名， 是使用保存到个人中心的印章列表的手写签名。(并且包含HANDWRITE)</li><li> <b>OCR_ESIGN</b> :AI智能识别手写签名。</li><li> <b>ESIGN</b> :个人印章类型。</li><li> <b>IMG_ESIGN</b>  : 图片印章。该类型支持用户在签署将上传的PNG格式的图片作为签名。</li><li> <b>SYSTEM_ESIGN</b> :系统签名。该类型可以在用户签署时根据用户姓名一键生成一个签名来进行签署。</li></ul><p>各种签名的样式可以参考下图：<br><img src="https://qcloudimg.tencent-cloud.cn/raw/ee0498856c060c065628a0c5ba780d6b.jpg" alt="image"></p>
                     * @return ComponentLimitType <p>当签署方控件类型为 <b>SIGN_SIGNATURE</b> 时，可以指定签署方签名方式。如果不指定，签署人可以使用所有的签名类型，可指定的签名类型包括：</p><ul><li> <b>HANDWRITE</b> :需要实时手写的手写签名。</li><li> <b>HANDWRITTEN_ESIGN</b> :长效手写签名， 是使用保存到个人中心的印章列表的手写签名。(并且包含HANDWRITE)</li><li> <b>OCR_ESIGN</b> :AI智能识别手写签名。</li><li> <b>ESIGN</b> :个人印章类型。</li><li> <b>IMG_ESIGN</b>  : 图片印章。该类型支持用户在签署将上传的PNG格式的图片作为签名。</li><li> <b>SYSTEM_ESIGN</b> :系统签名。该类型可以在用户签署时根据用户姓名一键生成一个签名来进行签署。</li></ul><p>各种签名的样式可以参考下图：<br><img src="https://qcloudimg.tencent-cloud.cn/raw/ee0498856c060c065628a0c5ba780d6b.jpg" alt="image"></p>
                     * 
                     */
                    std::vector<std::string> GetComponentLimitType() const;

                    /**
                     * 设置<p>当签署方控件类型为 <b>SIGN_SIGNATURE</b> 时，可以指定签署方签名方式。如果不指定，签署人可以使用所有的签名类型，可指定的签名类型包括：</p><ul><li> <b>HANDWRITE</b> :需要实时手写的手写签名。</li><li> <b>HANDWRITTEN_ESIGN</b> :长效手写签名， 是使用保存到个人中心的印章列表的手写签名。(并且包含HANDWRITE)</li><li> <b>OCR_ESIGN</b> :AI智能识别手写签名。</li><li> <b>ESIGN</b> :个人印章类型。</li><li> <b>IMG_ESIGN</b>  : 图片印章。该类型支持用户在签署将上传的PNG格式的图片作为签名。</li><li> <b>SYSTEM_ESIGN</b> :系统签名。该类型可以在用户签署时根据用户姓名一键生成一个签名来进行签署。</li></ul><p>各种签名的样式可以参考下图：<br><img src="https://qcloudimg.tencent-cloud.cn/raw/ee0498856c060c065628a0c5ba780d6b.jpg" alt="image"></p>
                     * @param _componentLimitType <p>当签署方控件类型为 <b>SIGN_SIGNATURE</b> 时，可以指定签署方签名方式。如果不指定，签署人可以使用所有的签名类型，可指定的签名类型包括：</p><ul><li> <b>HANDWRITE</b> :需要实时手写的手写签名。</li><li> <b>HANDWRITTEN_ESIGN</b> :长效手写签名， 是使用保存到个人中心的印章列表的手写签名。(并且包含HANDWRITE)</li><li> <b>OCR_ESIGN</b> :AI智能识别手写签名。</li><li> <b>ESIGN</b> :个人印章类型。</li><li> <b>IMG_ESIGN</b>  : 图片印章。该类型支持用户在签署将上传的PNG格式的图片作为签名。</li><li> <b>SYSTEM_ESIGN</b> :系统签名。该类型可以在用户签署时根据用户姓名一键生成一个签名来进行签署。</li></ul><p>各种签名的样式可以参考下图：<br><img src="https://qcloudimg.tencent-cloud.cn/raw/ee0498856c060c065628a0c5ba780d6b.jpg" alt="image"></p>
                     * 
                     */
                    void SetComponentLimitType(const std::vector<std::string>& _componentLimitType);

                    /**
                     * 判断参数 ComponentLimitType 是否已赋值
                     * @return ComponentLimitType 是否已赋值
                     * 
                     */
                    bool ComponentLimitTypeHasBeenSet() const;

                    /**
                     * 获取<p>指定个人签署方查看合同的校验方式,可以传值如下:</p><ul><li>  **1**   : （默认）人脸识别,人脸识别后才能合同内容</li><li>  **2**  : 手机号验证, 用户手机号和参与方手机号(ApproverMobile)相同即可查看合同内容（当手写签名方式为OCR_ESIGN时，该校验方式无效，因为这种签名方式依赖实名认证）</li></ul>注: <ul><li>如果合同流程设置ApproverVerifyType查看合同的校验方式,    则忽略此签署人的查看合同的校验方式</li><li>此字段可传多个校验方式</li></ul><p><code>此参数仅针对文件发起设置生效,模板发起合同签署流程, 请以模板配置为主</code></p><p>.</p>
                     * @return ApproverVerifyTypes <p>指定个人签署方查看合同的校验方式,可以传值如下:</p><ul><li>  **1**   : （默认）人脸识别,人脸识别后才能合同内容</li><li>  **2**  : 手机号验证, 用户手机号和参与方手机号(ApproverMobile)相同即可查看合同内容（当手写签名方式为OCR_ESIGN时，该校验方式无效，因为这种签名方式依赖实名认证）</li></ul>注: <ul><li>如果合同流程设置ApproverVerifyType查看合同的校验方式,    则忽略此签署人的查看合同的校验方式</li><li>此字段可传多个校验方式</li></ul><p><code>此参数仅针对文件发起设置生效,模板发起合同签署流程, 请以模板配置为主</code></p><p>.</p>
                     * 
                     */
                    std::vector<int64_t> GetApproverVerifyTypes() const;

                    /**
                     * 设置<p>指定个人签署方查看合同的校验方式,可以传值如下:</p><ul><li>  **1**   : （默认）人脸识别,人脸识别后才能合同内容</li><li>  **2**  : 手机号验证, 用户手机号和参与方手机号(ApproverMobile)相同即可查看合同内容（当手写签名方式为OCR_ESIGN时，该校验方式无效，因为这种签名方式依赖实名认证）</li></ul>注: <ul><li>如果合同流程设置ApproverVerifyType查看合同的校验方式,    则忽略此签署人的查看合同的校验方式</li><li>此字段可传多个校验方式</li></ul><p><code>此参数仅针对文件发起设置生效,模板发起合同签署流程, 请以模板配置为主</code></p><p>.</p>
                     * @param _approverVerifyTypes <p>指定个人签署方查看合同的校验方式,可以传值如下:</p><ul><li>  **1**   : （默认）人脸识别,人脸识别后才能合同内容</li><li>  **2**  : 手机号验证, 用户手机号和参与方手机号(ApproverMobile)相同即可查看合同内容（当手写签名方式为OCR_ESIGN时，该校验方式无效，因为这种签名方式依赖实名认证）</li></ul>注: <ul><li>如果合同流程设置ApproverVerifyType查看合同的校验方式,    则忽略此签署人的查看合同的校验方式</li><li>此字段可传多个校验方式</li></ul><p><code>此参数仅针对文件发起设置生效,模板发起合同签署流程, 请以模板配置为主</code></p><p>.</p>
                     * 
                     */
                    void SetApproverVerifyTypes(const std::vector<int64_t>& _approverVerifyTypes);

                    /**
                     * 判断参数 ApproverVerifyTypes 是否已赋值
                     * @return ApproverVerifyTypes 是否已赋值
                     * 
                     */
                    bool ApproverVerifyTypesHasBeenSet() const;

                    /**
                     * 获取<p>您可以指定签署方签署合同的认证校验方式，可传递以下值：</p><ul><li>**1**：人脸认证，需进行人脸识别成功后才能签署合同；</li><li>**2**：签署密码，需输入与用户在腾讯电子签设置的密码一致才能校验成功进行合同签署；</li><li>**3**：运营商三要素，需到运营商处比对手机号实名信息（名字、手机号、证件号）校验一致才能成功进行合同签署。（如果是港澳台客户，建议不要选择这个）</li><li>**5**：设备指纹识别，需要对比手机机主预留的指纹信息，校验一致才能成功进行合同签署。（iOS系统暂不支持该校验方式）</li><li>**6**：设备面容识别，需要对比手机机主预留的人脸信息，校验一致才能成功进行合同签署。（Android系统暂不支持该校验方式）</li></ul><p>注：</p><ul><li>默认情况下，认证校验方式为人脸认证和签署密码两种形式；</li><li>您可以传递多种值，表示可用多种认证校验方式。</li><li>校验方式不允许只包含设备指纹识别和设备面容识别，至少需要再增加一种其他校验方式。</li><li>设备指纹识别和设备面容识别只支持小程序使用，其他端暂不支持。</li></ul><p>注:<br><code>此参数仅针对文件发起设置生效,模板发起合同签署流程, 请以模板配置为主</code></p>
                     * @return ApproverSignTypes <p>您可以指定签署方签署合同的认证校验方式，可传递以下值：</p><ul><li>**1**：人脸认证，需进行人脸识别成功后才能签署合同；</li><li>**2**：签署密码，需输入与用户在腾讯电子签设置的密码一致才能校验成功进行合同签署；</li><li>**3**：运营商三要素，需到运营商处比对手机号实名信息（名字、手机号、证件号）校验一致才能成功进行合同签署。（如果是港澳台客户，建议不要选择这个）</li><li>**5**：设备指纹识别，需要对比手机机主预留的指纹信息，校验一致才能成功进行合同签署。（iOS系统暂不支持该校验方式）</li><li>**6**：设备面容识别，需要对比手机机主预留的人脸信息，校验一致才能成功进行合同签署。（Android系统暂不支持该校验方式）</li></ul><p>注：</p><ul><li>默认情况下，认证校验方式为人脸认证和签署密码两种形式；</li><li>您可以传递多种值，表示可用多种认证校验方式。</li><li>校验方式不允许只包含设备指纹识别和设备面容识别，至少需要再增加一种其他校验方式。</li><li>设备指纹识别和设备面容识别只支持小程序使用，其他端暂不支持。</li></ul><p>注:<br><code>此参数仅针对文件发起设置生效,模板发起合同签署流程, 请以模板配置为主</code></p>
                     * 
                     */
                    std::vector<uint64_t> GetApproverSignTypes() const;

                    /**
                     * 设置<p>您可以指定签署方签署合同的认证校验方式，可传递以下值：</p><ul><li>**1**：人脸认证，需进行人脸识别成功后才能签署合同；</li><li>**2**：签署密码，需输入与用户在腾讯电子签设置的密码一致才能校验成功进行合同签署；</li><li>**3**：运营商三要素，需到运营商处比对手机号实名信息（名字、手机号、证件号）校验一致才能成功进行合同签署。（如果是港澳台客户，建议不要选择这个）</li><li>**5**：设备指纹识别，需要对比手机机主预留的指纹信息，校验一致才能成功进行合同签署。（iOS系统暂不支持该校验方式）</li><li>**6**：设备面容识别，需要对比手机机主预留的人脸信息，校验一致才能成功进行合同签署。（Android系统暂不支持该校验方式）</li></ul><p>注：</p><ul><li>默认情况下，认证校验方式为人脸认证和签署密码两种形式；</li><li>您可以传递多种值，表示可用多种认证校验方式。</li><li>校验方式不允许只包含设备指纹识别和设备面容识别，至少需要再增加一种其他校验方式。</li><li>设备指纹识别和设备面容识别只支持小程序使用，其他端暂不支持。</li></ul><p>注:<br><code>此参数仅针对文件发起设置生效,模板发起合同签署流程, 请以模板配置为主</code></p>
                     * @param _approverSignTypes <p>您可以指定签署方签署合同的认证校验方式，可传递以下值：</p><ul><li>**1**：人脸认证，需进行人脸识别成功后才能签署合同；</li><li>**2**：签署密码，需输入与用户在腾讯电子签设置的密码一致才能校验成功进行合同签署；</li><li>**3**：运营商三要素，需到运营商处比对手机号实名信息（名字、手机号、证件号）校验一致才能成功进行合同签署。（如果是港澳台客户，建议不要选择这个）</li><li>**5**：设备指纹识别，需要对比手机机主预留的指纹信息，校验一致才能成功进行合同签署。（iOS系统暂不支持该校验方式）</li><li>**6**：设备面容识别，需要对比手机机主预留的人脸信息，校验一致才能成功进行合同签署。（Android系统暂不支持该校验方式）</li></ul><p>注：</p><ul><li>默认情况下，认证校验方式为人脸认证和签署密码两种形式；</li><li>您可以传递多种值，表示可用多种认证校验方式。</li><li>校验方式不允许只包含设备指纹识别和设备面容识别，至少需要再增加一种其他校验方式。</li><li>设备指纹识别和设备面容识别只支持小程序使用，其他端暂不支持。</li></ul><p>注:<br><code>此参数仅针对文件发起设置生效,模板发起合同签署流程, 请以模板配置为主</code></p>
                     * 
                     */
                    void SetApproverSignTypes(const std::vector<uint64_t>& _approverSignTypes);

                    /**
                     * 判断参数 ApproverSignTypes 是否已赋值
                     * @return ApproverSignTypes 是否已赋值
                     * 
                     */
                    bool ApproverSignTypesHasBeenSet() const;

                    /**
                     * 获取<p>生成H5签署链接时，您可以指定签署方签署合同的认证校验方式的选择模式，可传递一下值：</p><ul><li>**0**：签署方自行选择，签署方可以从预先指定的认证方式中自由选择；</li><li>**1**：自动按顺序首位推荐，签署方无需选择，系统会优先推荐使用第一种认证方式。</li></ul>注：<code>不指定该值时，默认为签署方自行选择。</code>
                     * @return SignTypeSelector <p>生成H5签署链接时，您可以指定签署方签署合同的认证校验方式的选择模式，可传递一下值：</p><ul><li>**0**：签署方自行选择，签署方可以从预先指定的认证方式中自由选择；</li><li>**1**：自动按顺序首位推荐，签署方无需选择，系统会优先推荐使用第一种认证方式。</li></ul>注：<code>不指定该值时，默认为签署方自行选择。</code>
                     * 
                     */
                    uint64_t GetSignTypeSelector() const;

                    /**
                     * 设置<p>生成H5签署链接时，您可以指定签署方签署合同的认证校验方式的选择模式，可传递一下值：</p><ul><li>**0**：签署方自行选择，签署方可以从预先指定的认证方式中自由选择；</li><li>**1**：自动按顺序首位推荐，签署方无需选择，系统会优先推荐使用第一种认证方式。</li></ul>注：<code>不指定该值时，默认为签署方自行选择。</code>
                     * @param _signTypeSelector <p>生成H5签署链接时，您可以指定签署方签署合同的认证校验方式的选择模式，可传递一下值：</p><ul><li>**0**：签署方自行选择，签署方可以从预先指定的认证方式中自由选择；</li><li>**1**：自动按顺序首位推荐，签署方无需选择，系统会优先推荐使用第一种认证方式。</li></ul>注：<code>不指定该值时，默认为签署方自行选择。</code>
                     * 
                     */
                    void SetSignTypeSelector(const uint64_t& _signTypeSelector);

                    /**
                     * 判断参数 SignTypeSelector 是否已赋值
                     * @return SignTypeSelector 是否已赋值
                     * 
                     */
                    bool SignTypeSelectorHasBeenSet() const;

                    /**
                     * 获取<p>签署人的签署截止时间，格式为Unix标准时间戳（秒）, 超过此时间未签署的合同变成已过期状态，不能在继续签署</p><p>注: <code>若不设置此参数，则默认使用合同的截止时间，此参数暂不支持合同组子合同</code></p>
                     * @return Deadline <p>签署人的签署截止时间，格式为Unix标准时间戳（秒）, 超过此时间未签署的合同变成已过期状态，不能在继续签署</p><p>注: <code>若不设置此参数，则默认使用合同的截止时间，此参数暂不支持合同组子合同</code></p>
                     * 
                     */
                    int64_t GetDeadline() const;

                    /**
                     * 设置<p>签署人的签署截止时间，格式为Unix标准时间戳（秒）, 超过此时间未签署的合同变成已过期状态，不能在继续签署</p><p>注: <code>若不设置此参数，则默认使用合同的截止时间，此参数暂不支持合同组子合同</code></p>
                     * @param _deadline <p>签署人的签署截止时间，格式为Unix标准时间戳（秒）, 超过此时间未签署的合同变成已过期状态，不能在继续签署</p><p>注: <code>若不设置此参数，则默认使用合同的截止时间，此参数暂不支持合同组子合同</code></p>
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
                     * 获取<p><b>只有在生成H5签署链接的情形下</b>（ 如调用<a href="https://qian.tencent.com/developers/companyApis/startFlows/CreateFlowSignUrl" target="_blank">获取H5签署链接</a>、<a href="https://qian.tencent.com/developers/companyApis/startFlows/CreateBatchQuickSignUrl" target="_blank">获取H5批量签署链接</a>等接口），该配置才会生效。</p><p>您可以指定H5签署视频核身的意图配置，选择问答模式或点头模式的语音文本。</p><p>注意：</p><ol><li>视频认证为<b>白名单功能，使用前请联系对接的客户经理沟通</b>。</li><li>使用视频认证时，<b>生成H5签署链接必须将签署认证方式指定为人脸</b>（即ApproverSignTypes设置成人脸签署）。</li><li>签署完成后，可以通过<a href="https://qian.tencent.com/developers/companyApis/queryFlows/DescribeSignFaceVideo" target="_blank">查询签署认证人脸视频</a>获取到当时的视频。</li></ol>
                     * @return Intention <p><b>只有在生成H5签署链接的情形下</b>（ 如调用<a href="https://qian.tencent.com/developers/companyApis/startFlows/CreateFlowSignUrl" target="_blank">获取H5签署链接</a>、<a href="https://qian.tencent.com/developers/companyApis/startFlows/CreateBatchQuickSignUrl" target="_blank">获取H5批量签署链接</a>等接口），该配置才会生效。</p><p>您可以指定H5签署视频核身的意图配置，选择问答模式或点头模式的语音文本。</p><p>注意：</p><ol><li>视频认证为<b>白名单功能，使用前请联系对接的客户经理沟通</b>。</li><li>使用视频认证时，<b>生成H5签署链接必须将签署认证方式指定为人脸</b>（即ApproverSignTypes设置成人脸签署）。</li><li>签署完成后，可以通过<a href="https://qian.tencent.com/developers/companyApis/queryFlows/DescribeSignFaceVideo" target="_blank">查询签署认证人脸视频</a>获取到当时的视频。</li></ol>
                     * 
                     */
                    Intention GetIntention() const;

                    /**
                     * 设置<p><b>只有在生成H5签署链接的情形下</b>（ 如调用<a href="https://qian.tencent.com/developers/companyApis/startFlows/CreateFlowSignUrl" target="_blank">获取H5签署链接</a>、<a href="https://qian.tencent.com/developers/companyApis/startFlows/CreateBatchQuickSignUrl" target="_blank">获取H5批量签署链接</a>等接口），该配置才会生效。</p><p>您可以指定H5签署视频核身的意图配置，选择问答模式或点头模式的语音文本。</p><p>注意：</p><ol><li>视频认证为<b>白名单功能，使用前请联系对接的客户经理沟通</b>。</li><li>使用视频认证时，<b>生成H5签署链接必须将签署认证方式指定为人脸</b>（即ApproverSignTypes设置成人脸签署）。</li><li>签署完成后，可以通过<a href="https://qian.tencent.com/developers/companyApis/queryFlows/DescribeSignFaceVideo" target="_blank">查询签署认证人脸视频</a>获取到当时的视频。</li></ol>
                     * @param _intention <p><b>只有在生成H5签署链接的情形下</b>（ 如调用<a href="https://qian.tencent.com/developers/companyApis/startFlows/CreateFlowSignUrl" target="_blank">获取H5签署链接</a>、<a href="https://qian.tencent.com/developers/companyApis/startFlows/CreateBatchQuickSignUrl" target="_blank">获取H5批量签署链接</a>等接口），该配置才会生效。</p><p>您可以指定H5签署视频核身的意图配置，选择问答模式或点头模式的语音文本。</p><p>注意：</p><ol><li>视频认证为<b>白名单功能，使用前请联系对接的客户经理沟通</b>。</li><li>使用视频认证时，<b>生成H5签署链接必须将签署认证方式指定为人脸</b>（即ApproverSignTypes设置成人脸签署）。</li><li>签署完成后，可以通过<a href="https://qian.tencent.com/developers/companyApis/queryFlows/DescribeSignFaceVideo" target="_blank">查询签署认证人脸视频</a>获取到当时的视频。</li></ol>
                     * 
                     */
                    void SetIntention(const Intention& _intention);

                    /**
                     * 判断参数 Intention 是否已赋值
                     * @return Intention 是否已赋值
                     * 
                     */
                    bool IntentionHasBeenSet() const;

                    /**
                     * 获取<p>进入签署流程的限制，目前支持以下选项：</p><ul><li> <b>空值（默认）</b> :无限制，可在任何场景进入签署流程。</li><li> <b>link</b> :选择此选项后，将无法通过控制台或电子签小程序列表进入填写或签署操作，仅可预览合同。填写或签署流程只能通过短信或发起方提供的专用链接进行。</li></ul>
                     * @return SignEndpoints <p>进入签署流程的限制，目前支持以下选项：</p><ul><li> <b>空值（默认）</b> :无限制，可在任何场景进入签署流程。</li><li> <b>link</b> :选择此选项后，将无法通过控制台或电子签小程序列表进入填写或签署操作，仅可预览合同。填写或签署流程只能通过短信或发起方提供的专用链接进行。</li></ul>
                     * 
                     */
                    std::vector<std::string> GetSignEndpoints() const;

                    /**
                     * 设置<p>进入签署流程的限制，目前支持以下选项：</p><ul><li> <b>空值（默认）</b> :无限制，可在任何场景进入签署流程。</li><li> <b>link</b> :选择此选项后，将无法通过控制台或电子签小程序列表进入填写或签署操作，仅可预览合同。填写或签署流程只能通过短信或发起方提供的专用链接进行。</li></ul>
                     * @param _signEndpoints <p>进入签署流程的限制，目前支持以下选项：</p><ul><li> <b>空值（默认）</b> :无限制，可在任何场景进入签署流程。</li><li> <b>link</b> :选择此选项后，将无法通过控制台或电子签小程序列表进入填写或签署操作，仅可预览合同。填写或签署流程只能通过短信或发起方提供的专用链接进行。</li></ul>
                     * 
                     */
                    void SetSignEndpoints(const std::vector<std::string>& _signEndpoints);

                    /**
                     * 判断参数 SignEndpoints 是否已赋值
                     * @return SignEndpoints 是否已赋值
                     * 
                     */
                    bool SignEndpointsHasBeenSet() const;

                    /**
                     * 获取<p>是否不保存联系人<br>默认 false 保存联系人  true 不保存联系人</p><p>设置这个参数为保存联系人的时候,他方企业签署人会被保存进发起人的联系人中。<br>联系人查看可登录<a href="https://test.qian.tencent.cn/console/">电子签控制台</a> 进行查看。<br>如下图位置：<br><img src="https://qcloudimg.tencent-cloud.cn/raw/fb8a22cd615d24c21acfa0e37e2cd873.png" alt=""></p>
                     * @return NotSaveContact <p>是否不保存联系人<br>默认 false 保存联系人  true 不保存联系人</p><p>设置这个参数为保存联系人的时候,他方企业签署人会被保存进发起人的联系人中。<br>联系人查看可登录<a href="https://test.qian.tencent.cn/console/">电子签控制台</a> 进行查看。<br>如下图位置：<br><img src="https://qcloudimg.tencent-cloud.cn/raw/fb8a22cd615d24c21acfa0e37e2cd873.png" alt=""></p>
                     * 
                     */
                    bool GetNotSaveContact() const;

                    /**
                     * 设置<p>是否不保存联系人<br>默认 false 保存联系人  true 不保存联系人</p><p>设置这个参数为保存联系人的时候,他方企业签署人会被保存进发起人的联系人中。<br>联系人查看可登录<a href="https://test.qian.tencent.cn/console/">电子签控制台</a> 进行查看。<br>如下图位置：<br><img src="https://qcloudimg.tencent-cloud.cn/raw/fb8a22cd615d24c21acfa0e37e2cd873.png" alt=""></p>
                     * @param _notSaveContact <p>是否不保存联系人<br>默认 false 保存联系人  true 不保存联系人</p><p>设置这个参数为保存联系人的时候,他方企业签署人会被保存进发起人的联系人中。<br>联系人查看可登录<a href="https://test.qian.tencent.cn/console/">电子签控制台</a> 进行查看。<br>如下图位置：<br><img src="https://qcloudimg.tencent-cloud.cn/raw/fb8a22cd615d24c21acfa0e37e2cd873.png" alt=""></p>
                     * 
                     */
                    void SetNotSaveContact(const bool& _notSaveContact);

                    /**
                     * 判断参数 NotSaveContact 是否已赋值
                     * @return NotSaveContact 是否已赋值
                     * 
                     */
                    bool NotSaveContactHasBeenSet() const;

                    /**
                     * 获取<p>客户指定的邮箱信息</p>
                     * @return ApproverEmail <p>客户指定的邮箱信息</p>
                     * 
                     */
                    std::string GetApproverEmail() const;

                    /**
                     * 设置<p>客户指定的邮箱信息</p>
                     * @param _approverEmail <p>客户指定的邮箱信息</p>
                     * 
                     */
                    void SetApproverEmail(const std::string& _approverEmail);

                    /**
                     * 判断参数 ApproverEmail 是否已赋值
                     * @return ApproverEmail 是否已赋值
                     * 
                     */
                    bool ApproverEmailHasBeenSet() const;

                private:

                    /**
                     * <p>在指定签署方时，可以选择企业B端或个人C端等不同的参与者类型，可选类型如下：</p><ul><li> <b>0</b> :企业B端。</li><li> <b>1</b> :个人C端。</li><li> <b>3</b> :企业B端静默（自动）签署，无需签署人参与，自动签署可以参考<a href="https://qian.tencent.com/developers/company/autosign_guide" target="_blank" rel="noopener noreferrer">自动签署使用说明</a>文档。</li><li> <b>7</b> :个人C端自动签署，适用于个人自动签场景。注: <b>个人自动签场景为白名单功能，使用前请联系对接的客户经理沟通。</b> </li></ul>
                     */
                    int64_t m_approverType;
                    bool m_approverTypeHasBeenSet;

                    /**
                     * <p>组织机构名称。<br>请确认该名称与企业营业执照中注册的名称一致。<br>如果名称中包含英文括号()，请使用中文括号（）代替。</p><p>注: <code>当approverType=0(企业签署方) 或 approverType=3(企业静默签署)时，必须指定</code></p>
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * <p>签署方经办人的姓名。<br>经办人的姓名将用于身份认证和电子签名，请确保填写的姓名为签署方的真实姓名，而非昵称等代名。</p><p>在未指定签署人电子签UserId情况下，为必填参数</p>
                     */
                    std::string m_approverName;
                    bool m_approverNameHasBeenSet;

                    /**
                     * <p>签署方经办人手机号码， 支持中国大陆手机号11位数字(无需加+86前缀或其他字符)。 此手机号用于通知和用户的实名认证等环境，请确认手机号所有方为此合同签署方。</p><p>注：<code>在未指定签署人电子签UserId情况下，为必填参数</code></p>
                     */
                    std::string m_approverMobile;
                    bool m_approverMobileHasBeenSet;

                    /**
                     * <p>证件类型，支持以下类型</p><ul><li><b>ID_CARD</b>: 居民身份证 (默认值)</li><li><b>HONGKONG_AND_MACAO</b> : 港澳居民来往内地通行证</li><li><b>HONGKONG_MACAO_AND_TAIWAN</b> : 港澳台居民居住证(格式同居民身份证)</li></ul>
                     */
                    std::string m_approverIdCardType;
                    bool m_approverIdCardTypeHasBeenSet;

                    /**
                     * <p>证件号码，应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li><li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     */
                    std::string m_approverIdCardNumber;
                    bool m_approverIdCardNumberHasBeenSet;

                    /**
                     * <p>签署方经办人在模板中配置的参与方ID，与控件绑定，是控件的归属方，ID为32位字符串。</p><p><b>模板发起合同时，该参数为必填项，可以通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/DescribeFlowTemplates">查询模板信息接口</a>获得。</b><br><b>文件发起合同时，该参数无需传值。</b></p><p>如果开发者后续用合同模板发起合同，建议保存此值，在用合同模板发起合同中需此值绑定对应的签署经办人 。</p>
                     */
                    std::string m_recipientId;
                    bool m_recipientIdHasBeenSet;

                    /**
                     * <p>签署意愿确认渠道，默认为WEIXINAPP:人脸识别</p><p>注: &lt;font color=&quot;red&quot;&gt;不再使用, <code>用ApproverSignTypes签署人签署合同时的认证方式代替, 新客户可请用ApproverSignTypes来设置</code></p>
                     */
                    std::vector<std::string> m_verifyChannel;
                    bool m_verifyChannelHasBeenSet;

                    /**
                     * <p>通知签署方经办人的方式,  有以下途径:</p><ul><li>  **sms**  :  (默认)短信</li><li>  **email**  :  邮件</li><li>  **all**  :  邮件+短信</li><li>   **none**   : 不通知</li></ul><p>注: <code>既是发起方又是签署方时，不给此签署方发送短信</code></p><p>枚举值：</p><ul><li>sms： 短信通知</li><li>email： 邮件通知</li><li>all： 邮件通知+短信通知</li><li>none： 不做任何形式的通知</li></ul>
                     */
                    std::string m_notifyType;
                    bool m_notifyTypeHasBeenSet;

                    /**
                     * <p>合同强制需要阅读全文，无需传此参数</p>
                     */
                    bool m_isFullText;
                    bool m_isFullTextHasBeenSet;

                    /**
                     * <p>签署方在签署合同之前，需要强制阅读合同的时长，可指定为3秒至300秒之间的任意值。</p><p>若未指定阅读时间，则会按照合同页数大小计算阅读时间，计算规则如下：</p><ul><li>合同页数少于等于2页，阅读时间为3秒；</li><li>合同页数为3到5页，阅读时间为5秒；</li><li>合同页数大于等于6页，阅读时间为10秒。</li></ul>
                     */
                    uint64_t m_preReadTime;
                    bool m_preReadTimeHasBeenSet;

                    /**
                     * <p>签署人userId，仅支持本企业的员工userid， 可在控制台组织管理处获得</p><p>注：<br>如果传进来的<font color="red">UserId已经实名， 则忽略ApproverName，ApproverIdCardType，ApproverIdCardNumber，ApproverMobile这四个入参</font>（会用此UserId实名的身份证和登录的手机号覆盖）</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p><font color="red">字段不再使用</font>，当前只支持true，默认为true</p>
                     */
                    bool m_required;
                    bool m_requiredHasBeenSet;

                    /**
                     * <p>在企微场景下使用，需设置参数为<strong>WEWORKAPP</strong>，以表明合同来源于企微。</p>
                     */
                    std::string m_approverSource;
                    bool m_approverSourceHasBeenSet;

                    /**
                     * <p>在企业微信场景下，表明该合同流程为或签，其最大长度为64位字符串。<br>所有参与或签的人员均需具备该标识。<br>注意，在合同中，不同的或签参与人必须保证其CustomApproverTag唯一。<br>如果或签签署人为本方企业微信参与人，则需要指定ApproverSource参数为WEWORKAPP。</p>
                     */
                    std::string m_customApproverTag;
                    bool m_customApproverTagHasBeenSet;

                    /**
                     * <p>快速注册相关信息</p>
                     */
                    RegisterInfo m_registerInfo;
                    bool m_registerInfoHasBeenSet;

                    /**
                     * <p>签署人个性化能力值，如是否可以转发他人处理、是否可以拒签、是否为动态补充签署人等功能开关。</p>
                     */
                    ApproverOption m_approverOption;
                    bool m_approverOptionHasBeenSet;

                    /**
                     * <p>签署完前端跳转的url，暂未使用</p>
                     */
                    std::string m_jumpUrl;
                    bool m_jumpUrlHasBeenSet;

                    /**
                     * <p>签署人的签署ID</p><ul><li>在CreateFlow、CreatePrepareFlow等发起流程时不需要传入此参数，电子签后台系统会自动生成。</li><li>在CreateFlowSignUrl、CreateBatchQuickSignUrl等生成签署链接时，可以通过查询详情接口获取签署人的SignId，然后可以将此值传入，为该签署人创建签署链接。这样可以避免重复传输姓名、手机号、证件号等其他信息。</li></ul>
                     */
                    std::string m_signId;
                    bool m_signIdHasBeenSet;

                    /**
                     * <p>此签署人(员工或者个人)签署时，是否需要发起方企业审批，取值如下：</p><ul><li>**false**：（默认）不需要审批，直接签署。</li><li>**true**：需要走审批流程。当到对应参与人签署时，会阻塞其签署操作，等待企业内部审批完成。</li></ul>企业可以通过CreateFlowSignReview审批接口通知腾讯电子签平台企业内部审批结果<ul><li>如果企业通知腾讯电子签平台审核通过，签署方可继续签署动作。</li><li>如果企业通知腾讯电子签平台审核未通过，平台将继续阻塞签署方的签署动作，直到企业通知平台审核通过。</li></ul><p>注：<code>此功能可用于与发起方企业内部的审批流程进行关联，支持手动、静默签署合同</code></p><p><img src="https://qcloudimg.tencent-cloud.cn/raw/b14d5188ed0229d1401e74a9a49cab6d.png" alt="image"></p>
                     */
                    bool m_approverNeedSignReview;
                    bool m_approverNeedSignReviewHasBeenSet;

                    /**
                     * <p>签署人签署控件， 此参数仅针对文件发起（CreateFlowByFiles）生效</p><p>合同中的签署控件列表，列表中可支持下列多种签署控件,控件的详细定义参考开发者中心的Component结构体</p><ul><li> 个人签名/印章</li><li> 企业印章</li><li> 骑缝章等签署控件</li></ul><p><code>此参数仅针对文件发起设置生效,模板发起合同签署流程, 请以模板配置为主</code></p>
                     */
                    std::vector<Component> m_signComponents;
                    bool m_signComponentsHasBeenSet;

                    /**
                     * <p>签署人填写控件 此参数仅针对文件发起（CreateFlowByFiles）生效</p><p>合同中的填写控件列表，列表中可支持下列多种填写控件，控件的详细定义参考开发者中心的Component结构体</p><ul><li>单行文本控件</li><li>多行文本控件</li><li>勾选框控件</li><li>数字控件</li><li>图片控件</li><li>动态表格等填写控件</li></ul><p><code>此参数仅针对文件发起设置生效,模板发起合同签署流程, 请以模板配置为主</code></p>
                     */
                    std::vector<Component> m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * <p>当签署方控件类型为 <b>SIGN_SIGNATURE</b> 时，可以指定签署方签名方式。如果不指定，签署人可以使用所有的签名类型，可指定的签名类型包括：</p><ul><li> <b>HANDWRITE</b> :需要实时手写的手写签名。</li><li> <b>HANDWRITTEN_ESIGN</b> :长效手写签名， 是使用保存到个人中心的印章列表的手写签名。(并且包含HANDWRITE)</li><li> <b>OCR_ESIGN</b> :AI智能识别手写签名。</li><li> <b>ESIGN</b> :个人印章类型。</li><li> <b>IMG_ESIGN</b>  : 图片印章。该类型支持用户在签署将上传的PNG格式的图片作为签名。</li><li> <b>SYSTEM_ESIGN</b> :系统签名。该类型可以在用户签署时根据用户姓名一键生成一个签名来进行签署。</li></ul><p>各种签名的样式可以参考下图：<br><img src="https://qcloudimg.tencent-cloud.cn/raw/ee0498856c060c065628a0c5ba780d6b.jpg" alt="image"></p>
                     */
                    std::vector<std::string> m_componentLimitType;
                    bool m_componentLimitTypeHasBeenSet;

                    /**
                     * <p>指定个人签署方查看合同的校验方式,可以传值如下:</p><ul><li>  **1**   : （默认）人脸识别,人脸识别后才能合同内容</li><li>  **2**  : 手机号验证, 用户手机号和参与方手机号(ApproverMobile)相同即可查看合同内容（当手写签名方式为OCR_ESIGN时，该校验方式无效，因为这种签名方式依赖实名认证）</li></ul>注: <ul><li>如果合同流程设置ApproverVerifyType查看合同的校验方式,    则忽略此签署人的查看合同的校验方式</li><li>此字段可传多个校验方式</li></ul><p><code>此参数仅针对文件发起设置生效,模板发起合同签署流程, 请以模板配置为主</code></p><p>.</p>
                     */
                    std::vector<int64_t> m_approverVerifyTypes;
                    bool m_approverVerifyTypesHasBeenSet;

                    /**
                     * <p>您可以指定签署方签署合同的认证校验方式，可传递以下值：</p><ul><li>**1**：人脸认证，需进行人脸识别成功后才能签署合同；</li><li>**2**：签署密码，需输入与用户在腾讯电子签设置的密码一致才能校验成功进行合同签署；</li><li>**3**：运营商三要素，需到运营商处比对手机号实名信息（名字、手机号、证件号）校验一致才能成功进行合同签署。（如果是港澳台客户，建议不要选择这个）</li><li>**5**：设备指纹识别，需要对比手机机主预留的指纹信息，校验一致才能成功进行合同签署。（iOS系统暂不支持该校验方式）</li><li>**6**：设备面容识别，需要对比手机机主预留的人脸信息，校验一致才能成功进行合同签署。（Android系统暂不支持该校验方式）</li></ul><p>注：</p><ul><li>默认情况下，认证校验方式为人脸认证和签署密码两种形式；</li><li>您可以传递多种值，表示可用多种认证校验方式。</li><li>校验方式不允许只包含设备指纹识别和设备面容识别，至少需要再增加一种其他校验方式。</li><li>设备指纹识别和设备面容识别只支持小程序使用，其他端暂不支持。</li></ul><p>注:<br><code>此参数仅针对文件发起设置生效,模板发起合同签署流程, 请以模板配置为主</code></p>
                     */
                    std::vector<uint64_t> m_approverSignTypes;
                    bool m_approverSignTypesHasBeenSet;

                    /**
                     * <p>生成H5签署链接时，您可以指定签署方签署合同的认证校验方式的选择模式，可传递一下值：</p><ul><li>**0**：签署方自行选择，签署方可以从预先指定的认证方式中自由选择；</li><li>**1**：自动按顺序首位推荐，签署方无需选择，系统会优先推荐使用第一种认证方式。</li></ul>注：<code>不指定该值时，默认为签署方自行选择。</code>
                     */
                    uint64_t m_signTypeSelector;
                    bool m_signTypeSelectorHasBeenSet;

                    /**
                     * <p>签署人的签署截止时间，格式为Unix标准时间戳（秒）, 超过此时间未签署的合同变成已过期状态，不能在继续签署</p><p>注: <code>若不设置此参数，则默认使用合同的截止时间，此参数暂不支持合同组子合同</code></p>
                     */
                    int64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * <p><b>只有在生成H5签署链接的情形下</b>（ 如调用<a href="https://qian.tencent.com/developers/companyApis/startFlows/CreateFlowSignUrl" target="_blank">获取H5签署链接</a>、<a href="https://qian.tencent.com/developers/companyApis/startFlows/CreateBatchQuickSignUrl" target="_blank">获取H5批量签署链接</a>等接口），该配置才会生效。</p><p>您可以指定H5签署视频核身的意图配置，选择问答模式或点头模式的语音文本。</p><p>注意：</p><ol><li>视频认证为<b>白名单功能，使用前请联系对接的客户经理沟通</b>。</li><li>使用视频认证时，<b>生成H5签署链接必须将签署认证方式指定为人脸</b>（即ApproverSignTypes设置成人脸签署）。</li><li>签署完成后，可以通过<a href="https://qian.tencent.com/developers/companyApis/queryFlows/DescribeSignFaceVideo" target="_blank">查询签署认证人脸视频</a>获取到当时的视频。</li></ol>
                     */
                    Intention m_intention;
                    bool m_intentionHasBeenSet;

                    /**
                     * <p>进入签署流程的限制，目前支持以下选项：</p><ul><li> <b>空值（默认）</b> :无限制，可在任何场景进入签署流程。</li><li> <b>link</b> :选择此选项后，将无法通过控制台或电子签小程序列表进入填写或签署操作，仅可预览合同。填写或签署流程只能通过短信或发起方提供的专用链接进行。</li></ul>
                     */
                    std::vector<std::string> m_signEndpoints;
                    bool m_signEndpointsHasBeenSet;

                    /**
                     * <p>是否不保存联系人<br>默认 false 保存联系人  true 不保存联系人</p><p>设置这个参数为保存联系人的时候,他方企业签署人会被保存进发起人的联系人中。<br>联系人查看可登录<a href="https://test.qian.tencent.cn/console/">电子签控制台</a> 进行查看。<br>如下图位置：<br><img src="https://qcloudimg.tencent-cloud.cn/raw/fb8a22cd615d24c21acfa0e37e2cd873.png" alt=""></p>
                     */
                    bool m_notSaveContact;
                    bool m_notSaveContactHasBeenSet;

                    /**
                     * <p>客户指定的邮箱信息</p>
                     */
                    std::string m_approverEmail;
                    bool m_approverEmailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_FLOWCREATEAPPROVER_H_
