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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTAUTHREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTAUTHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/Encryption.h>
#include <tencentcloud/faceid/v20180301/model/IntentionQuestion.h>
#include <tencentcloud/faceid/v20180301/model/IntentionActionConfig.h>
#include <tencentcloud/faceid/v20180301/model/RuleIdConfig.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * DetectAuth请求参数结构体
                */
                class DetectAuthRequest : public AbstractModel
                {
                public:
                    DetectAuthRequest();
                    ~DetectAuthRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>业务流程ID。</p><ul><li>用于细分客户使用场景, 可为业务配置不同的业务流程。</li><li>申请开通服务后，登录腾讯云<a href="https://console.cloud.tencent.com/faceid">慧眼人脸核身控制</a>进行创建，审核通过后即可调用。</li><li>如有疑问，请添加<a href="https://cloud.tencent.com/document/product/1007/56130">腾讯云人脸核身小助手</a>进行咨询。</li></ul>
                     * @return RuleId <p>业务流程ID。</p><ul><li>用于细分客户使用场景, 可为业务配置不同的业务流程。</li><li>申请开通服务后，登录腾讯云<a href="https://console.cloud.tencent.com/faceid">慧眼人脸核身控制</a>进行创建，审核通过后即可调用。</li><li>如有疑问，请添加<a href="https://cloud.tencent.com/document/product/1007/56130">腾讯云人脸核身小助手</a>进行咨询。</li></ul>
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置<p>业务流程ID。</p><ul><li>用于细分客户使用场景, 可为业务配置不同的业务流程。</li><li>申请开通服务后，登录腾讯云<a href="https://console.cloud.tencent.com/faceid">慧眼人脸核身控制</a>进行创建，审核通过后即可调用。</li><li>如有疑问，请添加<a href="https://cloud.tencent.com/document/product/1007/56130">腾讯云人脸核身小助手</a>进行咨询。</li></ul>
                     * @param _ruleId <p>业务流程ID。</p><ul><li>用于细分客户使用场景, 可为业务配置不同的业务流程。</li><li>申请开通服务后，登录腾讯云<a href="https://console.cloud.tencent.com/faceid">慧眼人脸核身控制</a>进行创建，审核通过后即可调用。</li><li>如有疑问，请添加<a href="https://cloud.tencent.com/document/product/1007/56130">腾讯云人脸核身小助手</a>进行咨询。</li></ul>
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取<p>本接口不需要传递此参数。</p>
                     * @return TerminalType <p>本接口不需要传递此参数。</p>
                     * 
                     */
                    std::string GetTerminalType() const;

                    /**
                     * 设置<p>本接口不需要传递此参数。</p>
                     * @param _terminalType <p>本接口不需要传递此参数。</p>
                     * 
                     */
                    void SetTerminalType(const std::string& _terminalType);

                    /**
                     * 判断参数 TerminalType 是否已赋值
                     * @return TerminalType 是否已赋值
                     * 
                     */
                    bool TerminalTypeHasBeenSet() const;

                    /**
                     * 获取<p>验证人的身份证号码。</p><ul><li>调用 detectAuth 时，该字段是否必传，以在<a href="https://console.cloud.tencent.com/faceid/access">控制台</a>申请 ruleId 时的配置提示为准，具体必填字段请参阅控制台界面。</li><li>若身份证号包含字母，该字母必须为大写 X，小写 x 将无法通过校验。</li></ul>
                     * @return IdCard <p>验证人的身份证号码。</p><ul><li>调用 detectAuth 时，该字段是否必传，以在<a href="https://console.cloud.tencent.com/faceid/access">控制台</a>申请 ruleId 时的配置提示为准，具体必填字段请参阅控制台界面。</li><li>若身份证号包含字母，该字母必须为大写 X，小写 x 将无法通过校验。</li></ul>
                     * 
                     */
                    std::string GetIdCard() const;

                    /**
                     * 设置<p>验证人的身份证号码。</p><ul><li>调用 detectAuth 时，该字段是否必传，以在<a href="https://console.cloud.tencent.com/faceid/access">控制台</a>申请 ruleId 时的配置提示为准，具体必填字段请参阅控制台界面。</li><li>若身份证号包含字母，该字母必须为大写 X，小写 x 将无法通过校验。</li></ul>
                     * @param _idCard <p>验证人的身份证号码。</p><ul><li>调用 detectAuth 时，该字段是否必传，以在<a href="https://console.cloud.tencent.com/faceid/access">控制台</a>申请 ruleId 时的配置提示为准，具体必填字段请参阅控制台界面。</li><li>若身份证号包含字母，该字母必须为大写 X，小写 x 将无法通过校验。</li></ul>
                     * 
                     */
                    void SetIdCard(const std::string& _idCard);

                    /**
                     * 判断参数 IdCard 是否已赋值
                     * @return IdCard 是否已赋值
                     * 
                     */
                    bool IdCardHasBeenSet() const;

                    /**
                     * 获取<p>验证人的姓名。</p><ul><li>调用 detectAuth 时，该字段是否必传，以在<a href="https://console.cloud.tencent.com/faceid/access">控制台</a>申请 ruleId 时的配置提示为准，具体必填字段请参阅控制台界面。</li><li>最长长度32位。中文请使用UTF-8编码。</li></ul>
                     * @return Name <p>验证人的姓名。</p><ul><li>调用 detectAuth 时，该字段是否必传，以在<a href="https://console.cloud.tencent.com/faceid/access">控制台</a>申请 ruleId 时的配置提示为准，具体必填字段请参阅控制台界面。</li><li>最长长度32位。中文请使用UTF-8编码。</li></ul>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>验证人的姓名。</p><ul><li>调用 detectAuth 时，该字段是否必传，以在<a href="https://console.cloud.tencent.com/faceid/access">控制台</a>申请 ruleId 时的配置提示为准，具体必填字段请参阅控制台界面。</li><li>最长长度32位。中文请使用UTF-8编码。</li></ul>
                     * @param _name <p>验证人的姓名。</p><ul><li>调用 detectAuth 时，该字段是否必传，以在<a href="https://console.cloud.tencent.com/faceid/access">控制台</a>申请 ruleId 时的配置提示为准，具体必填字段请参阅控制台界面。</li><li>最长长度32位。中文请使用UTF-8编码。</li></ul>
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
                     * 获取<p>认证结束后重定向的回调链接地址，仅微信H5场景使用。</p><ul><li>最长长度1024位。</li><li>默认值：[腾讯云人脸核身产品介绍页](URL Here)https://cloud.tencent.com/product/faceid?Is=sdk-topnav</li></ul>
                     * @return RedirectUrl <p>认证结束后重定向的回调链接地址，仅微信H5场景使用。</p><ul><li>最长长度1024位。</li><li>默认值：[腾讯云人脸核身产品介绍页](URL Here)https://cloud.tencent.com/product/faceid?Is=sdk-topnav</li></ul>
                     * 
                     */
                    std::string GetRedirectUrl() const;

                    /**
                     * 设置<p>认证结束后重定向的回调链接地址，仅微信H5场景使用。</p><ul><li>最长长度1024位。</li><li>默认值：[腾讯云人脸核身产品介绍页](URL Here)https://cloud.tencent.com/product/faceid?Is=sdk-topnav</li></ul>
                     * @param _redirectUrl <p>认证结束后重定向的回调链接地址，仅微信H5场景使用。</p><ul><li>最长长度1024位。</li><li>默认值：[腾讯云人脸核身产品介绍页](URL Here)https://cloud.tencent.com/product/faceid?Is=sdk-topnav</li></ul>
                     * 
                     */
                    void SetRedirectUrl(const std::string& _redirectUrl);

                    /**
                     * 判断参数 RedirectUrl 是否已赋值
                     * @return RedirectUrl 是否已赋值
                     * 
                     */
                    bool RedirectUrlHasBeenSet() const;

                    /**
                     * 获取<p>透传字段，在获取验证结果时返回。</p><ul><li>最长长度1024位。</li></ul>
                     * @return Extra <p>透传字段，在获取验证结果时返回。</p><ul><li>最长长度1024位。</li></ul>
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置<p>透传字段，在获取验证结果时返回。</p><ul><li>最长长度1024位。</li></ul>
                     * @param _extra <p>透传字段，在获取验证结果时返回。</p><ul><li>最长长度1024位。</li></ul>
                     * 
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                    /**
                     * 获取<p>用于人脸比对的图像数据，使用base64编码。</p><ul><li>Base64编码后的图片数据大小不超过3M。</li><li>仅支持jpg、png格式。</li><li>请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。</li></ul>
                     * @return ImageBase64 <p>用于人脸比对的图像数据，使用base64编码。</p><ul><li>Base64编码后的图片数据大小不超过3M。</li><li>仅支持jpg、png格式。</li><li>请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。</li></ul>
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置<p>用于人脸比对的图像数据，使用base64编码。</p><ul><li>Base64编码后的图片数据大小不超过3M。</li><li>仅支持jpg、png格式。</li><li>请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。</li></ul>
                     * @param _imageBase64 <p>用于人脸比对的图像数据，使用base64编码。</p><ul><li>Base64编码后的图片数据大小不超过3M。</li><li>仅支持jpg、png格式。</li><li>请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。</li></ul>
                     * 
                     */
                    void SetImageBase64(const std::string& _imageBase64);

                    /**
                     * 判断参数 ImageBase64 是否已赋值
                     * @return ImageBase64 是否已赋值
                     * 
                     */
                    bool ImageBase64HasBeenSet() const;

                    /**
                     * 获取<p>敏感数据加密信息。对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。</p>
                     * @return Encryption <p>敏感数据加密信息。对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。</p>
                     * 
                     */
                    Encryption GetEncryption() const;

                    /**
                     * 设置<p>敏感数据加密信息。对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。</p>
                     * @param _encryption <p>敏感数据加密信息。对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。</p>
                     * 
                     */
                    void SetEncryption(const Encryption& _encryption);

                    /**
                     * 判断参数 Encryption 是否已赋值
                     * @return Encryption 是否已赋值
                     * 
                     */
                    bool EncryptionHasBeenSet() const;

                    /**
                     * 获取<p>意愿核身（朗读模式）使用的文案。</p><ul><li>若未使用意愿核身（朗读模式），则该字段无需传入。</li><li>最长可接受120的字符串长度。</li></ul>
                     * @return IntentionVerifyText <p>意愿核身（朗读模式）使用的文案。</p><ul><li>若未使用意愿核身（朗读模式），则该字段无需传入。</li><li>最长可接受120的字符串长度。</li></ul>
                     * 
                     */
                    std::string GetIntentionVerifyText() const;

                    /**
                     * 设置<p>意愿核身（朗读模式）使用的文案。</p><ul><li>若未使用意愿核身（朗读模式），则该字段无需传入。</li><li>最长可接受120的字符串长度。</li></ul>
                     * @param _intentionVerifyText <p>意愿核身（朗读模式）使用的文案。</p><ul><li>若未使用意愿核身（朗读模式），则该字段无需传入。</li><li>最长可接受120的字符串长度。</li></ul>
                     * 
                     */
                    void SetIntentionVerifyText(const std::string& _intentionVerifyText);

                    /**
                     * 判断参数 IntentionVerifyText 是否已赋值
                     * @return IntentionVerifyText 是否已赋值
                     * 
                     */
                    bool IntentionVerifyTextHasBeenSet() const;

                    /**
                     * 获取<p>意愿核身（语音播报+语音回答模式）使用的文案。</p><ul><li>包括：系统语音播报的文本、需要核验的标准文本。</li><li>问答模式支持1-10轮（不超过10轮）的意愿确认。</li></ul>
                     * @return IntentionQuestions <p>意愿核身（语音播报+语音回答模式）使用的文案。</p><ul><li>包括：系统语音播报的文本、需要核验的标准文本。</li><li>问答模式支持1-10轮（不超过10轮）的意愿确认。</li></ul>
                     * 
                     */
                    std::vector<IntentionQuestion> GetIntentionQuestions() const;

                    /**
                     * 设置<p>意愿核身（语音播报+语音回答模式）使用的文案。</p><ul><li>包括：系统语音播报的文本、需要核验的标准文本。</li><li>问答模式支持1-10轮（不超过10轮）的意愿确认。</li></ul>
                     * @param _intentionQuestions <p>意愿核身（语音播报+语音回答模式）使用的文案。</p><ul><li>包括：系统语音播报的文本、需要核验的标准文本。</li><li>问答模式支持1-10轮（不超过10轮）的意愿确认。</li></ul>
                     * 
                     */
                    void SetIntentionQuestions(const std::vector<IntentionQuestion>& _intentionQuestions);

                    /**
                     * 判断参数 IntentionQuestions 是否已赋值
                     * @return IntentionQuestions 是否已赋值
                     * 
                     */
                    bool IntentionQuestionsHasBeenSet() const;

                    /**
                     * 获取<p>意愿核身（点头确认模式）使用的文案。</p><ul><li>若未使用意愿核身（点头确认模式），则该字段无需传入。</li><li>点头确认模式支持1-10轮（不超过10轮）的意愿确认。</li></ul>
                     * @return IntentionActions <p>意愿核身（点头确认模式）使用的文案。</p><ul><li>若未使用意愿核身（点头确认模式），则该字段无需传入。</li><li>点头确认模式支持1-10轮（不超过10轮）的意愿确认。</li></ul>
                     * 
                     */
                    std::vector<IntentionActionConfig> GetIntentionActions() const;

                    /**
                     * 设置<p>意愿核身（点头确认模式）使用的文案。</p><ul><li>若未使用意愿核身（点头确认模式），则该字段无需传入。</li><li>点头确认模式支持1-10轮（不超过10轮）的意愿确认。</li></ul>
                     * @param _intentionActions <p>意愿核身（点头确认模式）使用的文案。</p><ul><li>若未使用意愿核身（点头确认模式），则该字段无需传入。</li><li>点头确认模式支持1-10轮（不超过10轮）的意愿确认。</li></ul>
                     * 
                     */
                    void SetIntentionActions(const std::vector<IntentionActionConfig>& _intentionActions);

                    /**
                     * 判断参数 IntentionActions 是否已赋值
                     * @return IntentionActions 是否已赋值
                     * 
                     */
                    bool IntentionActionsHasBeenSet() const;

                    /**
                     * 获取<p>意愿核身流程配置。</p>
                     * @return Config <p>意愿核身流程配置。</p>
                     * 
                     */
                    RuleIdConfig GetConfig() const;

                    /**
                     * 设置<p>意愿核身流程配置。</p>
                     * @param _config <p>意愿核身流程配置。</p>
                     * 
                     */
                    void SetConfig(const RuleIdConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                private:

                    /**
                     * <p>业务流程ID。</p><ul><li>用于细分客户使用场景, 可为业务配置不同的业务流程。</li><li>申请开通服务后，登录腾讯云<a href="https://console.cloud.tencent.com/faceid">慧眼人脸核身控制</a>进行创建，审核通过后即可调用。</li><li>如有疑问，请添加<a href="https://cloud.tencent.com/document/product/1007/56130">腾讯云人脸核身小助手</a>进行咨询。</li></ul>
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>本接口不需要传递此参数。</p>
                     */
                    std::string m_terminalType;
                    bool m_terminalTypeHasBeenSet;

                    /**
                     * <p>验证人的身份证号码。</p><ul><li>调用 detectAuth 时，该字段是否必传，以在<a href="https://console.cloud.tencent.com/faceid/access">控制台</a>申请 ruleId 时的配置提示为准，具体必填字段请参阅控制台界面。</li><li>若身份证号包含字母，该字母必须为大写 X，小写 x 将无法通过校验。</li></ul>
                     */
                    std::string m_idCard;
                    bool m_idCardHasBeenSet;

                    /**
                     * <p>验证人的姓名。</p><ul><li>调用 detectAuth 时，该字段是否必传，以在<a href="https://console.cloud.tencent.com/faceid/access">控制台</a>申请 ruleId 时的配置提示为准，具体必填字段请参阅控制台界面。</li><li>最长长度32位。中文请使用UTF-8编码。</li></ul>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>认证结束后重定向的回调链接地址，仅微信H5场景使用。</p><ul><li>最长长度1024位。</li><li>默认值：[腾讯云人脸核身产品介绍页](URL Here)https://cloud.tencent.com/product/faceid?Is=sdk-topnav</li></ul>
                     */
                    std::string m_redirectUrl;
                    bool m_redirectUrlHasBeenSet;

                    /**
                     * <p>透传字段，在获取验证结果时返回。</p><ul><li>最长长度1024位。</li></ul>
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * <p>用于人脸比对的图像数据，使用base64编码。</p><ul><li>Base64编码后的图片数据大小不超过3M。</li><li>仅支持jpg、png格式。</li><li>请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。</li></ul>
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * <p>敏感数据加密信息。对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。</p>
                     */
                    Encryption m_encryption;
                    bool m_encryptionHasBeenSet;

                    /**
                     * <p>意愿核身（朗读模式）使用的文案。</p><ul><li>若未使用意愿核身（朗读模式），则该字段无需传入。</li><li>最长可接受120的字符串长度。</li></ul>
                     */
                    std::string m_intentionVerifyText;
                    bool m_intentionVerifyTextHasBeenSet;

                    /**
                     * <p>意愿核身（语音播报+语音回答模式）使用的文案。</p><ul><li>包括：系统语音播报的文本、需要核验的标准文本。</li><li>问答模式支持1-10轮（不超过10轮）的意愿确认。</li></ul>
                     */
                    std::vector<IntentionQuestion> m_intentionQuestions;
                    bool m_intentionQuestionsHasBeenSet;

                    /**
                     * <p>意愿核身（点头确认模式）使用的文案。</p><ul><li>若未使用意愿核身（点头确认模式），则该字段无需传入。</li><li>点头确认模式支持1-10轮（不超过10轮）的意愿确认。</li></ul>
                     */
                    std::vector<IntentionActionConfig> m_intentionActions;
                    bool m_intentionActionsHasBeenSet;

                    /**
                     * <p>意愿核身流程配置。</p>
                     */
                    RuleIdConfig m_config;
                    bool m_configHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTAUTHREQUEST_H_
