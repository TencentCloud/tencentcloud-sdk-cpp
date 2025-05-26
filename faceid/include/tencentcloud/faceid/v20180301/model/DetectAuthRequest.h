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
                     * 获取业务流程ID。
- 用于细分客户使用场景, 可为业务配置不同的业务流程。
- 申请开通服务后，登录腾讯云[慧眼人脸核身控制](https://console.cloud.tencent.com/faceid)进行创建，审核通过后即可调用。
- 如有疑问，请添加[腾讯云人脸核身小助手](https://cloud.tencent.com/document/product/1007/56130)进行咨询。
                     * @return RuleId 业务流程ID。
- 用于细分客户使用场景, 可为业务配置不同的业务流程。
- 申请开通服务后，登录腾讯云[慧眼人脸核身控制](https://console.cloud.tencent.com/faceid)进行创建，审核通过后即可调用。
- 如有疑问，请添加[腾讯云人脸核身小助手](https://cloud.tencent.com/document/product/1007/56130)进行咨询。
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置业务流程ID。
- 用于细分客户使用场景, 可为业务配置不同的业务流程。
- 申请开通服务后，登录腾讯云[慧眼人脸核身控制](https://console.cloud.tencent.com/faceid)进行创建，审核通过后即可调用。
- 如有疑问，请添加[腾讯云人脸核身小助手](https://cloud.tencent.com/document/product/1007/56130)进行咨询。
                     * @param _ruleId 业务流程ID。
- 用于细分客户使用场景, 可为业务配置不同的业务流程。
- 申请开通服务后，登录腾讯云[慧眼人脸核身控制](https://console.cloud.tencent.com/faceid)进行创建，审核通过后即可调用。
- 如有疑问，请添加[腾讯云人脸核身小助手](https://cloud.tencent.com/document/product/1007/56130)进行咨询。
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
                     * 获取本接口不需要传递此参数。
                     * @return TerminalType 本接口不需要传递此参数。
                     * 
                     */
                    std::string GetTerminalType() const;

                    /**
                     * 设置本接口不需要传递此参数。
                     * @param _terminalType 本接口不需要传递此参数。
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
                     * 获取验证人的身份证号码。
- 是否必传基于[控制台](https://console.cloud.tencent.com/faceid/access)申请业务流程时配置的提示。

                     * @return IdCard 验证人的身份证号码。
- 是否必传基于[控制台](https://console.cloud.tencent.com/faceid/access)申请业务流程时配置的提示。

                     * 
                     */
                    std::string GetIdCard() const;

                    /**
                     * 设置验证人的身份证号码。
- 是否必传基于[控制台](https://console.cloud.tencent.com/faceid/access)申请业务流程时配置的提示。

                     * @param _idCard 验证人的身份证号码。
- 是否必传基于[控制台](https://console.cloud.tencent.com/faceid/access)申请业务流程时配置的提示。

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
                     * 获取验证人的姓名。
- 是否必传基于[控制台](https://console.cloud.tencent.com/faceid/access)申请业务流程时配置的提示。
- 最长长度32位。中文请使用UTF-8编码。
                     * @return Name 验证人的姓名。
- 是否必传基于[控制台](https://console.cloud.tencent.com/faceid/access)申请业务流程时配置的提示。
- 最长长度32位。中文请使用UTF-8编码。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置验证人的姓名。
- 是否必传基于[控制台](https://console.cloud.tencent.com/faceid/access)申请业务流程时配置的提示。
- 最长长度32位。中文请使用UTF-8编码。
                     * @param _name 验证人的姓名。
- 是否必传基于[控制台](https://console.cloud.tencent.com/faceid/access)申请业务流程时配置的提示。
- 最长长度32位。中文请使用UTF-8编码。
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
                     * 获取认证结束后重定向的回调链接地址。
- 最长长度1024位。
                     * @return RedirectUrl 认证结束后重定向的回调链接地址。
- 最长长度1024位。
                     * 
                     */
                    std::string GetRedirectUrl() const;

                    /**
                     * 设置认证结束后重定向的回调链接地址。
- 最长长度1024位。
                     * @param _redirectUrl 认证结束后重定向的回调链接地址。
- 最长长度1024位。
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
                     * 获取透传字段，在获取验证结果时返回。
- 最长长度1024位。
                     * @return Extra 透传字段，在获取验证结果时返回。
- 最长长度1024位。
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置透传字段，在获取验证结果时返回。
- 最长长度1024位。
                     * @param _extra 透传字段，在获取验证结果时返回。
- 最长长度1024位。
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
                     * 获取用于人脸比对的图像数据，使用base64编码。
- Base64编码后的图片数据大小不超过3M。
- 仅支持jpg、png格式。
- 请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。
                     * @return ImageBase64 用于人脸比对的图像数据，使用base64编码。
- Base64编码后的图片数据大小不超过3M。
- 仅支持jpg、png格式。
- 请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置用于人脸比对的图像数据，使用base64编码。
- Base64编码后的图片数据大小不超过3M。
- 仅支持jpg、png格式。
- 请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。
                     * @param _imageBase64 用于人脸比对的图像数据，使用base64编码。
- Base64编码后的图片数据大小不超过3M。
- 仅支持jpg、png格式。
- 请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。
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
                     * 获取敏感数据加密信息。对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。
                     * @return Encryption 敏感数据加密信息。对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。
                     * 
                     */
                    Encryption GetEncryption() const;

                    /**
                     * 设置敏感数据加密信息。对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。
                     * @param _encryption 敏感数据加密信息。对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。
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
                     * 获取意愿核身（朗读模式）使用的文案。
- 若未使用意愿核身（朗读模式），则该字段无需传入。
- 最长可接受120的字符串长度。
                     * @return IntentionVerifyText 意愿核身（朗读模式）使用的文案。
- 若未使用意愿核身（朗读模式），则该字段无需传入。
- 最长可接受120的字符串长度。
                     * 
                     */
                    std::string GetIntentionVerifyText() const;

                    /**
                     * 设置意愿核身（朗读模式）使用的文案。
- 若未使用意愿核身（朗读模式），则该字段无需传入。
- 最长可接受120的字符串长度。
                     * @param _intentionVerifyText 意愿核身（朗读模式）使用的文案。
- 若未使用意愿核身（朗读模式），则该字段无需传入。
- 最长可接受120的字符串长度。
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
                     * 获取意愿核身（语音播报+语音回答模式）使用的文案。
- 包括：系统语音播报的文本、需要核验的标准文本。
- 问答模式支持1-10轮（不超过10轮）的意愿确认。
                     * @return IntentionQuestions 意愿核身（语音播报+语音回答模式）使用的文案。
- 包括：系统语音播报的文本、需要核验的标准文本。
- 问答模式支持1-10轮（不超过10轮）的意愿确认。
                     * 
                     */
                    std::vector<IntentionQuestion> GetIntentionQuestions() const;

                    /**
                     * 设置意愿核身（语音播报+语音回答模式）使用的文案。
- 包括：系统语音播报的文本、需要核验的标准文本。
- 问答模式支持1-10轮（不超过10轮）的意愿确认。
                     * @param _intentionQuestions 意愿核身（语音播报+语音回答模式）使用的文案。
- 包括：系统语音播报的文本、需要核验的标准文本。
- 问答模式支持1-10轮（不超过10轮）的意愿确认。
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
                     * 获取意愿核身（点头确认模式）使用的文案。
- 若未使用意愿核身（点头确认模式），则该字段无需传入。
- 点头确认模式支持1-10轮（不超过10轮）的意愿确认。
                     * @return IntentionActions 意愿核身（点头确认模式）使用的文案。
- 若未使用意愿核身（点头确认模式），则该字段无需传入。
- 点头确认模式支持1-10轮（不超过10轮）的意愿确认。
                     * 
                     */
                    std::vector<IntentionActionConfig> GetIntentionActions() const;

                    /**
                     * 设置意愿核身（点头确认模式）使用的文案。
- 若未使用意愿核身（点头确认模式），则该字段无需传入。
- 点头确认模式支持1-10轮（不超过10轮）的意愿确认。
                     * @param _intentionActions 意愿核身（点头确认模式）使用的文案。
- 若未使用意愿核身（点头确认模式），则该字段无需传入。
- 点头确认模式支持1-10轮（不超过10轮）的意愿确认。
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
                     * 获取意愿核身流程配置。
                     * @return Config 意愿核身流程配置。
                     * 
                     */
                    RuleIdConfig GetConfig() const;

                    /**
                     * 设置意愿核身流程配置。
                     * @param _config 意愿核身流程配置。
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
                     * 业务流程ID。
- 用于细分客户使用场景, 可为业务配置不同的业务流程。
- 申请开通服务后，登录腾讯云[慧眼人脸核身控制](https://console.cloud.tencent.com/faceid)进行创建，审核通过后即可调用。
- 如有疑问，请添加[腾讯云人脸核身小助手](https://cloud.tencent.com/document/product/1007/56130)进行咨询。
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 本接口不需要传递此参数。
                     */
                    std::string m_terminalType;
                    bool m_terminalTypeHasBeenSet;

                    /**
                     * 验证人的身份证号码。
- 是否必传基于[控制台](https://console.cloud.tencent.com/faceid/access)申请业务流程时配置的提示。

                     */
                    std::string m_idCard;
                    bool m_idCardHasBeenSet;

                    /**
                     * 验证人的姓名。
- 是否必传基于[控制台](https://console.cloud.tencent.com/faceid/access)申请业务流程时配置的提示。
- 最长长度32位。中文请使用UTF-8编码。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 认证结束后重定向的回调链接地址。
- 最长长度1024位。
                     */
                    std::string m_redirectUrl;
                    bool m_redirectUrlHasBeenSet;

                    /**
                     * 透传字段，在获取验证结果时返回。
- 最长长度1024位。
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * 用于人脸比对的图像数据，使用base64编码。
- Base64编码后的图片数据大小不超过3M。
- 仅支持jpg、png格式。
- 请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * 敏感数据加密信息。对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。
                     */
                    Encryption m_encryption;
                    bool m_encryptionHasBeenSet;

                    /**
                     * 意愿核身（朗读模式）使用的文案。
- 若未使用意愿核身（朗读模式），则该字段无需传入。
- 最长可接受120的字符串长度。
                     */
                    std::string m_intentionVerifyText;
                    bool m_intentionVerifyTextHasBeenSet;

                    /**
                     * 意愿核身（语音播报+语音回答模式）使用的文案。
- 包括：系统语音播报的文本、需要核验的标准文本。
- 问答模式支持1-10轮（不超过10轮）的意愿确认。
                     */
                    std::vector<IntentionQuestion> m_intentionQuestions;
                    bool m_intentionQuestionsHasBeenSet;

                    /**
                     * 意愿核身（点头确认模式）使用的文案。
- 若未使用意愿核身（点头确认模式），则该字段无需传入。
- 点头确认模式支持1-10轮（不超过10轮）的意愿确认。
                     */
                    std::vector<IntentionActionConfig> m_intentionActions;
                    bool m_intentionActionsHasBeenSet;

                    /**
                     * 意愿核身流程配置。
                     */
                    RuleIdConfig m_config;
                    bool m_configHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTAUTHREQUEST_H_
