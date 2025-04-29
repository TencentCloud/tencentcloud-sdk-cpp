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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_SENDEMAILREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_SENDEMAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ses/v20201002/model/Template.h>
#include <tencentcloud/ses/v20201002/model/Simple.h>
#include <tencentcloud/ses/v20201002/model/Attachment.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * SendEmail请求参数结构体
                */
                class SendEmailRequest : public AbstractModel
                {
                public:
                    SendEmailRequest();
                    ~SendEmailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取发件人邮箱地址。不使用别名时请直接填写发件人邮箱地址，例如：noreply@mail.qcloud.com如需填写发件人别名时，请按照如下方式（注意别名与邮箱地址之间必须使用一个空格隔开）：别名+一个空格+<邮箱地址>，别名中不能带有冒号(:)。
                     * @return FromEmailAddress 发件人邮箱地址。不使用别名时请直接填写发件人邮箱地址，例如：noreply@mail.qcloud.com如需填写发件人别名时，请按照如下方式（注意别名与邮箱地址之间必须使用一个空格隔开）：别名+一个空格+<邮箱地址>，别名中不能带有冒号(:)。
                     * 
                     */
                    std::string GetFromEmailAddress() const;

                    /**
                     * 设置发件人邮箱地址。不使用别名时请直接填写发件人邮箱地址，例如：noreply@mail.qcloud.com如需填写发件人别名时，请按照如下方式（注意别名与邮箱地址之间必须使用一个空格隔开）：别名+一个空格+<邮箱地址>，别名中不能带有冒号(:)。
                     * @param _fromEmailAddress 发件人邮箱地址。不使用别名时请直接填写发件人邮箱地址，例如：noreply@mail.qcloud.com如需填写发件人别名时，请按照如下方式（注意别名与邮箱地址之间必须使用一个空格隔开）：别名+一个空格+<邮箱地址>，别名中不能带有冒号(:)。
                     * 
                     */
                    void SetFromEmailAddress(const std::string& _fromEmailAddress);

                    /**
                     * 判断参数 FromEmailAddress 是否已赋值
                     * @return FromEmailAddress 是否已赋值
                     * 
                     */
                    bool FromEmailAddressHasBeenSet() const;

                    /**
                     * 获取收信人邮箱地址，最多支持群发50人。注意：邮件内容会显示所有收件人地址，非群发邮件请多次调用API发送。
                     * @return Destination 收信人邮箱地址，最多支持群发50人。注意：邮件内容会显示所有收件人地址，非群发邮件请多次调用API发送。
                     * 
                     */
                    std::vector<std::string> GetDestination() const;

                    /**
                     * 设置收信人邮箱地址，最多支持群发50人。注意：邮件内容会显示所有收件人地址，非群发邮件请多次调用API发送。
                     * @param _destination 收信人邮箱地址，最多支持群发50人。注意：邮件内容会显示所有收件人地址，非群发邮件请多次调用API发送。
                     * 
                     */
                    void SetDestination(const std::vector<std::string>& _destination);

                    /**
                     * 判断参数 Destination 是否已赋值
                     * @return Destination 是否已赋值
                     * 
                     */
                    bool DestinationHasBeenSet() const;

                    /**
                     * 获取邮件主题
                     * @return Subject 邮件主题
                     * 
                     */
                    std::string GetSubject() const;

                    /**
                     * 设置邮件主题
                     * @param _subject 邮件主题
                     * 
                     */
                    void SetSubject(const std::string& _subject);

                    /**
                     * 判断参数 Subject 是否已赋值
                     * @return Subject 是否已赋值
                     * 
                     */
                    bool SubjectHasBeenSet() const;

                    /**
                     * 获取邮件的“回复”电子邮件地址。可以填写您能收到邮件的邮箱地址，可以是个人邮箱。如果不填，收件人的回复邮件将会发送失败。
                     * @return ReplyToAddresses 邮件的“回复”电子邮件地址。可以填写您能收到邮件的邮箱地址，可以是个人邮箱。如果不填，收件人的回复邮件将会发送失败。
                     * 
                     */
                    std::string GetReplyToAddresses() const;

                    /**
                     * 设置邮件的“回复”电子邮件地址。可以填写您能收到邮件的邮箱地址，可以是个人邮箱。如果不填，收件人的回复邮件将会发送失败。
                     * @param _replyToAddresses 邮件的“回复”电子邮件地址。可以填写您能收到邮件的邮箱地址，可以是个人邮箱。如果不填，收件人的回复邮件将会发送失败。
                     * 
                     */
                    void SetReplyToAddresses(const std::string& _replyToAddresses);

                    /**
                     * 判断参数 ReplyToAddresses 是否已赋值
                     * @return ReplyToAddresses 是否已赋值
                     * 
                     */
                    bool ReplyToAddressesHasBeenSet() const;

                    /**
                     * 获取抄送人邮箱地址，最多支持抄送20人。
                     * @return Cc 抄送人邮箱地址，最多支持抄送20人。
                     * 
                     */
                    std::vector<std::string> GetCc() const;

                    /**
                     * 设置抄送人邮箱地址，最多支持抄送20人。
                     * @param _cc 抄送人邮箱地址，最多支持抄送20人。
                     * 
                     */
                    void SetCc(const std::vector<std::string>& _cc);

                    /**
                     * 判断参数 Cc 是否已赋值
                     * @return Cc 是否已赋值
                     * 
                     */
                    bool CcHasBeenSet() const;

                    /**
                     * 获取密送人邮箱地址，最多支持抄送20人,Bcc和Destination不能重复。
                     * @return Bcc 密送人邮箱地址，最多支持抄送20人,Bcc和Destination不能重复。
                     * 
                     */
                    std::vector<std::string> GetBcc() const;

                    /**
                     * 设置密送人邮箱地址，最多支持抄送20人,Bcc和Destination不能重复。
                     * @param _bcc 密送人邮箱地址，最多支持抄送20人,Bcc和Destination不能重复。
                     * 
                     */
                    void SetBcc(const std::vector<std::string>& _bcc);

                    /**
                     * 判断参数 Bcc 是否已赋值
                     * @return Bcc 是否已赋值
                     * 
                     */
                    bool BccHasBeenSet() const;

                    /**
                     * 获取使用模板发送时，填写模板相关参数。
<dx-alert infotype="notice" title="注意"> 如您未申请过特殊配置，则该字段为必填 </dx-alert>
                     * @return Template 使用模板发送时，填写模板相关参数。
<dx-alert infotype="notice" title="注意"> 如您未申请过特殊配置，则该字段为必填 </dx-alert>
                     * 
                     */
                    Template GetTemplate() const;

                    /**
                     * 设置使用模板发送时，填写模板相关参数。
<dx-alert infotype="notice" title="注意"> 如您未申请过特殊配置，则该字段为必填 </dx-alert>
                     * @param _template 使用模板发送时，填写模板相关参数。
<dx-alert infotype="notice" title="注意"> 如您未申请过特殊配置，则该字段为必填 </dx-alert>
                     * 
                     */
                    void SetTemplate(const Template& _template);

                    /**
                     * 判断参数 Template 是否已赋值
                     * @return Template 是否已赋值
                     * 
                     */
                    bool TemplateHasBeenSet() const;

                    /**
                     * 获取已废弃
<dx-alert infotype="notice" title="说明"> 仅部分历史上申请了特殊配置的客户需要使用。如您未申请过特殊配置，则不存在该字段。</dx-alert>
                     * @return Simple 已废弃
<dx-alert infotype="notice" title="说明"> 仅部分历史上申请了特殊配置的客户需要使用。如您未申请过特殊配置，则不存在该字段。</dx-alert>
                     * 
                     */
                    Simple GetSimple() const;

                    /**
                     * 设置已废弃
<dx-alert infotype="notice" title="说明"> 仅部分历史上申请了特殊配置的客户需要使用。如您未申请过特殊配置，则不存在该字段。</dx-alert>
                     * @param _simple 已废弃
<dx-alert infotype="notice" title="说明"> 仅部分历史上申请了特殊配置的客户需要使用。如您未申请过特殊配置，则不存在该字段。</dx-alert>
                     * 
                     */
                    void SetSimple(const Simple& _simple);

                    /**
                     * 判断参数 Simple 是否已赋值
                     * @return Simple 是否已赋值
                     * 
                     */
                    bool SimpleHasBeenSet() const;

                    /**
                     * 获取需要发送附件时，填写附件相关参数。腾讯云接口请求最大支持 8M 的请求包，附件内容经过 Base64 预期扩大1.5倍，应该控制所有附件的总大小最大在 4M 以内，整体请求超出 8M 时接口会返回错误
                     * @return Attachments 需要发送附件时，填写附件相关参数。腾讯云接口请求最大支持 8M 的请求包，附件内容经过 Base64 预期扩大1.5倍，应该控制所有附件的总大小最大在 4M 以内，整体请求超出 8M 时接口会返回错误
                     * 
                     */
                    std::vector<Attachment> GetAttachments() const;

                    /**
                     * 设置需要发送附件时，填写附件相关参数。腾讯云接口请求最大支持 8M 的请求包，附件内容经过 Base64 预期扩大1.5倍，应该控制所有附件的总大小最大在 4M 以内，整体请求超出 8M 时接口会返回错误
                     * @param _attachments 需要发送附件时，填写附件相关参数。腾讯云接口请求最大支持 8M 的请求包，附件内容经过 Base64 预期扩大1.5倍，应该控制所有附件的总大小最大在 4M 以内，整体请求超出 8M 时接口会返回错误
                     * 
                     */
                    void SetAttachments(const std::vector<Attachment>& _attachments);

                    /**
                     * 判断参数 Attachments 是否已赋值
                     * @return Attachments 是否已赋值
                     * 
                     */
                    bool AttachmentsHasBeenSet() const;

                    /**
                     * 获取退订链接选项 0: 不加入退订链接 1: 简体中文 2: 英文 3: 繁体中文 4: 西班牙语 5: 法语 6: 德语 7: 日语 8: 韩语 9: 阿拉伯语 10: 泰语
                     * @return Unsubscribe 退订链接选项 0: 不加入退订链接 1: 简体中文 2: 英文 3: 繁体中文 4: 西班牙语 5: 法语 6: 德语 7: 日语 8: 韩语 9: 阿拉伯语 10: 泰语
                     * 
                     */
                    std::string GetUnsubscribe() const;

                    /**
                     * 设置退订链接选项 0: 不加入退订链接 1: 简体中文 2: 英文 3: 繁体中文 4: 西班牙语 5: 法语 6: 德语 7: 日语 8: 韩语 9: 阿拉伯语 10: 泰语
                     * @param _unsubscribe 退订链接选项 0: 不加入退订链接 1: 简体中文 2: 英文 3: 繁体中文 4: 西班牙语 5: 法语 6: 德语 7: 日语 8: 韩语 9: 阿拉伯语 10: 泰语
                     * 
                     */
                    void SetUnsubscribe(const std::string& _unsubscribe);

                    /**
                     * 判断参数 Unsubscribe 是否已赋值
                     * @return Unsubscribe 是否已赋值
                     * 
                     */
                    bool UnsubscribeHasBeenSet() const;

                    /**
                     * 获取邮件触发类型 0:非触发类，默认类型，营销类邮件、非即时类邮件等选择此类型  1:触发类，验证码等即时发送类邮件，若邮件超过一定大小，系统会自动选择非触发类型通道
                     * @return TriggerType 邮件触发类型 0:非触发类，默认类型，营销类邮件、非即时类邮件等选择此类型  1:触发类，验证码等即时发送类邮件，若邮件超过一定大小，系统会自动选择非触发类型通道
                     * 
                     */
                    uint64_t GetTriggerType() const;

                    /**
                     * 设置邮件触发类型 0:非触发类，默认类型，营销类邮件、非即时类邮件等选择此类型  1:触发类，验证码等即时发送类邮件，若邮件超过一定大小，系统会自动选择非触发类型通道
                     * @param _triggerType 邮件触发类型 0:非触发类，默认类型，营销类邮件、非即时类邮件等选择此类型  1:触发类，验证码等即时发送类邮件，若邮件超过一定大小，系统会自动选择非触发类型通道
                     * 
                     */
                    void SetTriggerType(const uint64_t& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取smtp头中的Message-Id字段
                     * @return SmtpMessageId smtp头中的Message-Id字段
                     * 
                     */
                    std::string GetSmtpMessageId() const;

                    /**
                     * 设置smtp头中的Message-Id字段
                     * @param _smtpMessageId smtp头中的Message-Id字段
                     * 
                     */
                    void SetSmtpMessageId(const std::string& _smtpMessageId);

                    /**
                     * 判断参数 SmtpMessageId 是否已赋值
                     * @return SmtpMessageId 是否已赋值
                     * 
                     */
                    bool SmtpMessageIdHasBeenSet() const;

                    /**
                     * 获取smtp头中可以设置的其它字段
                     * @return SmtpHeaders smtp头中可以设置的其它字段
                     * 
                     */
                    std::string GetSmtpHeaders() const;

                    /**
                     * 设置smtp头中可以设置的其它字段
                     * @param _smtpHeaders smtp头中可以设置的其它字段
                     * 
                     */
                    void SetSmtpHeaders(const std::string& _smtpHeaders);

                    /**
                     * 判断参数 SmtpHeaders 是否已赋值
                     * @return SmtpHeaders 是否已赋值
                     * 
                     */
                    bool SmtpHeadersHasBeenSet() const;

                    /**
                     * 获取smtp头中的from字段，建议域名与FromEmailAddress保持一致
                     * @return HeaderFrom smtp头中的from字段，建议域名与FromEmailAddress保持一致
                     * 
                     */
                    std::string GetHeaderFrom() const;

                    /**
                     * 设置smtp头中的from字段，建议域名与FromEmailAddress保持一致
                     * @param _headerFrom smtp头中的from字段，建议域名与FromEmailAddress保持一致
                     * 
                     */
                    void SetHeaderFrom(const std::string& _headerFrom);

                    /**
                     * 判断参数 HeaderFrom 是否已赋值
                     * @return HeaderFrom 是否已赋值
                     * 
                     */
                    bool HeaderFromHasBeenSet() const;

                private:

                    /**
                     * 发件人邮箱地址。不使用别名时请直接填写发件人邮箱地址，例如：noreply@mail.qcloud.com如需填写发件人别名时，请按照如下方式（注意别名与邮箱地址之间必须使用一个空格隔开）：别名+一个空格+<邮箱地址>，别名中不能带有冒号(:)。
                     */
                    std::string m_fromEmailAddress;
                    bool m_fromEmailAddressHasBeenSet;

                    /**
                     * 收信人邮箱地址，最多支持群发50人。注意：邮件内容会显示所有收件人地址，非群发邮件请多次调用API发送。
                     */
                    std::vector<std::string> m_destination;
                    bool m_destinationHasBeenSet;

                    /**
                     * 邮件主题
                     */
                    std::string m_subject;
                    bool m_subjectHasBeenSet;

                    /**
                     * 邮件的“回复”电子邮件地址。可以填写您能收到邮件的邮箱地址，可以是个人邮箱。如果不填，收件人的回复邮件将会发送失败。
                     */
                    std::string m_replyToAddresses;
                    bool m_replyToAddressesHasBeenSet;

                    /**
                     * 抄送人邮箱地址，最多支持抄送20人。
                     */
                    std::vector<std::string> m_cc;
                    bool m_ccHasBeenSet;

                    /**
                     * 密送人邮箱地址，最多支持抄送20人,Bcc和Destination不能重复。
                     */
                    std::vector<std::string> m_bcc;
                    bool m_bccHasBeenSet;

                    /**
                     * 使用模板发送时，填写模板相关参数。
<dx-alert infotype="notice" title="注意"> 如您未申请过特殊配置，则该字段为必填 </dx-alert>
                     */
                    Template m_template;
                    bool m_templateHasBeenSet;

                    /**
                     * 已废弃
<dx-alert infotype="notice" title="说明"> 仅部分历史上申请了特殊配置的客户需要使用。如您未申请过特殊配置，则不存在该字段。</dx-alert>
                     */
                    Simple m_simple;
                    bool m_simpleHasBeenSet;

                    /**
                     * 需要发送附件时，填写附件相关参数。腾讯云接口请求最大支持 8M 的请求包，附件内容经过 Base64 预期扩大1.5倍，应该控制所有附件的总大小最大在 4M 以内，整体请求超出 8M 时接口会返回错误
                     */
                    std::vector<Attachment> m_attachments;
                    bool m_attachmentsHasBeenSet;

                    /**
                     * 退订链接选项 0: 不加入退订链接 1: 简体中文 2: 英文 3: 繁体中文 4: 西班牙语 5: 法语 6: 德语 7: 日语 8: 韩语 9: 阿拉伯语 10: 泰语
                     */
                    std::string m_unsubscribe;
                    bool m_unsubscribeHasBeenSet;

                    /**
                     * 邮件触发类型 0:非触发类，默认类型，营销类邮件、非即时类邮件等选择此类型  1:触发类，验证码等即时发送类邮件，若邮件超过一定大小，系统会自动选择非触发类型通道
                     */
                    uint64_t m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * smtp头中的Message-Id字段
                     */
                    std::string m_smtpMessageId;
                    bool m_smtpMessageIdHasBeenSet;

                    /**
                     * smtp头中可以设置的其它字段
                     */
                    std::string m_smtpHeaders;
                    bool m_smtpHeadersHasBeenSet;

                    /**
                     * smtp头中的from字段，建议域名与FromEmailAddress保持一致
                     */
                    std::string m_headerFrom;
                    bool m_headerFromHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_SENDEMAILREQUEST_H_
