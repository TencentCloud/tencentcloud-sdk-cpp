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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_MULTISMSINFO_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_MULTISMSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20210111
        {
            namespace Model
            {
                /**
                * 批量发送中每个手机号的发送信息。
                */
                class MultiSmsInfo : public AbstractModel
                {
                public:
                    MultiSmsInfo();
                    ~MultiSmsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>下发手机号码，采用 E.164 标准，格式为+[国家或地区码][手机号]，单次请求最多支持200个手机号且要求全为国际/港澳台手机号。 例如：+60198890000， 其中前面有一个+号 ，60为国家码，198890000为手机号。</p>
                     * @return PhoneNumber <p>下发手机号码，采用 E.164 标准，格式为+[国家或地区码][手机号]，单次请求最多支持200个手机号且要求全为国际/港澳台手机号。 例如：+60198890000， 其中前面有一个+号 ，60为国家码，198890000为手机号。</p>
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置<p>下发手机号码，采用 E.164 标准，格式为+[国家或地区码][手机号]，单次请求最多支持200个手机号且要求全为国际/港澳台手机号。 例如：+60198890000， 其中前面有一个+号 ，60为国家码，198890000为手机号。</p>
                     * @param _phoneNumber <p>下发手机号码，采用 E.164 标准，格式为+[国家或地区码][手机号]，单次请求最多支持200个手机号且要求全为国际/港澳台手机号。 例如：+60198890000， 其中前面有一个+号 ，60为国家码，198890000为手机号。</p>
                     * 
                     */
                    void SetPhoneNumber(const std::string& _phoneNumber);

                    /**
                     * 判断参数 PhoneNumber 是否已赋值
                     * @return PhoneNumber 是否已赋值
                     * 
                     */
                    bool PhoneNumberHasBeenSet() const;

                    /**
                     * 获取<p>模板 ID，必须填写已审核通过的模板 ID。模板 ID 可前往 <a href="https://console.cloud.tencent.com/smsv2/isms-template">国际/港澳台短信</a> 的正文模板管理查看，仅支持使用国际/港澳台短信模板。</p>
                     * @return TemplateId <p>模板 ID，必须填写已审核通过的模板 ID。模板 ID 可前往 <a href="https://console.cloud.tencent.com/smsv2/isms-template">国际/港澳台短信</a> 的正文模板管理查看，仅支持使用国际/港澳台短信模板。</p>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>模板 ID，必须填写已审核通过的模板 ID。模板 ID 可前往 <a href="https://console.cloud.tencent.com/smsv2/isms-template">国际/港澳台短信</a> 的正文模板管理查看，仅支持使用国际/港澳台短信模板。</p>
                     * @param _templateId <p>模板 ID，必须填写已审核通过的模板 ID。模板 ID 可前往 <a href="https://console.cloud.tencent.com/smsv2/isms-template">国际/港澳台短信</a> 的正文模板管理查看，仅支持使用国际/港澳台短信模板。</p>
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>模板参数，若无模板参数，则设置为空。<blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">注意</div>        <div class="rno-document-tip-desc"><p>模板参数的个数需要与 TemplateId 对应模板的变量个数保持一致。</p></div>    </div></blockquote></p>
                     * @return TemplateParamSet <p>模板参数，若无模板参数，则设置为空。<blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">注意</div>        <div class="rno-document-tip-desc"><p>模板参数的个数需要与 TemplateId 对应模板的变量个数保持一致。</p></div>    </div></blockquote></p>
                     * 
                     */
                    std::vector<std::string> GetTemplateParamSet() const;

                    /**
                     * 设置<p>模板参数，若无模板参数，则设置为空。<blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">注意</div>        <div class="rno-document-tip-desc"><p>模板参数的个数需要与 TemplateId 对应模板的变量个数保持一致。</p></div>    </div></blockquote></p>
                     * @param _templateParamSet <p>模板参数，若无模板参数，则设置为空。<blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">注意</div>        <div class="rno-document-tip-desc"><p>模板参数的个数需要与 TemplateId 对应模板的变量个数保持一致。</p></div>    </div></blockquote></p>
                     * 
                     */
                    void SetTemplateParamSet(const std::vector<std::string>& _templateParamSet);

                    /**
                     * 判断参数 TemplateParamSet 是否已赋值
                     * @return TemplateParamSet 是否已赋值
                     * 
                     */
                    bool TemplateParamSetHasBeenSet() const;

                    /**
                     * 获取<p>国际/港澳台短信 Sender ID。可参考 <a href="https://cloud.tencent.com/document/product/382/102831">Sender ID 说明</a>。注：国际/港澳台短信已申请独立 SenderId 需要填写该字段，默认使用公共 SenderId，无需填写该字段。</p>
                     * @return SenderId <p>国际/港澳台短信 Sender ID。可参考 <a href="https://cloud.tencent.com/document/product/382/102831">Sender ID 说明</a>。注：国际/港澳台短信已申请独立 SenderId 需要填写该字段，默认使用公共 SenderId，无需填写该字段。</p>
                     * 
                     */
                    std::string GetSenderId() const;

                    /**
                     * 设置<p>国际/港澳台短信 Sender ID。可参考 <a href="https://cloud.tencent.com/document/product/382/102831">Sender ID 说明</a>。注：国际/港澳台短信已申请独立 SenderId 需要填写该字段，默认使用公共 SenderId，无需填写该字段。</p>
                     * @param _senderId <p>国际/港澳台短信 Sender ID。可参考 <a href="https://cloud.tencent.com/document/product/382/102831">Sender ID 说明</a>。注：国际/港澳台短信已申请独立 SenderId 需要填写该字段，默认使用公共 SenderId，无需填写该字段。</p>
                     * 
                     */
                    void SetSenderId(const std::string& _senderId);

                    /**
                     * 判断参数 SenderId 是否已赋值
                     * @return SenderId 是否已赋值
                     * 
                     */
                    bool SenderIdHasBeenSet() const;

                    /**
                     * 获取<p>用户的 session 内容，可以携带用户侧 ID 等上下文信息，server 会原样返回。注意长度需小于512字节。</p>
                     * @return SessionContext <p>用户的 session 内容，可以携带用户侧 ID 等上下文信息，server 会原样返回。注意长度需小于512字节。</p>
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置<p>用户的 session 内容，可以携带用户侧 ID 等上下文信息，server 会原样返回。注意长度需小于512字节。</p>
                     * @param _sessionContext <p>用户的 session 内容，可以携带用户侧 ID 等上下文信息，server 会原样返回。注意长度需小于512字节。</p>
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                private:

                    /**
                     * <p>下发手机号码，采用 E.164 标准，格式为+[国家或地区码][手机号]，单次请求最多支持200个手机号且要求全为国际/港澳台手机号。 例如：+60198890000， 其中前面有一个+号 ，60为国家码，198890000为手机号。</p>
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * <p>模板 ID，必须填写已审核通过的模板 ID。模板 ID 可前往 <a href="https://console.cloud.tencent.com/smsv2/isms-template">国际/港澳台短信</a> 的正文模板管理查看，仅支持使用国际/港澳台短信模板。</p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>模板参数，若无模板参数，则设置为空。<blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">注意</div>        <div class="rno-document-tip-desc"><p>模板参数的个数需要与 TemplateId 对应模板的变量个数保持一致。</p></div>    </div></blockquote></p>
                     */
                    std::vector<std::string> m_templateParamSet;
                    bool m_templateParamSetHasBeenSet;

                    /**
                     * <p>国际/港澳台短信 Sender ID。可参考 <a href="https://cloud.tencent.com/document/product/382/102831">Sender ID 说明</a>。注：国际/港澳台短信已申请独立 SenderId 需要填写该字段，默认使用公共 SenderId，无需填写该字段。</p>
                     */
                    std::string m_senderId;
                    bool m_senderIdHasBeenSet;

                    /**
                     * <p>用户的 session 内容，可以携带用户侧 ID 等上下文信息，server 会原样返回。注意长度需小于512字节。</p>
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_MULTISMSINFO_H_
