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
                     * 获取<p>发件人邮箱地址。不使用别名时请直接填写发件人邮箱地址，例如：noreply@mail.qcloud.com如需填写发件人别名时，请按照如下方式（注意别名与邮箱地址之间必须使用一个空格隔开）：别名+一个空格+&lt;邮箱地址&gt;，别名中不能带有冒号(:)。</p>
                     * @return FromEmailAddress <p>发件人邮箱地址。不使用别名时请直接填写发件人邮箱地址，例如：noreply@mail.qcloud.com如需填写发件人别名时，请按照如下方式（注意别名与邮箱地址之间必须使用一个空格隔开）：别名+一个空格+&lt;邮箱地址&gt;，别名中不能带有冒号(:)。</p>
                     * 
                     */
                    std::string GetFromEmailAddress() const;

                    /**
                     * 设置<p>发件人邮箱地址。不使用别名时请直接填写发件人邮箱地址，例如：noreply@mail.qcloud.com如需填写发件人别名时，请按照如下方式（注意别名与邮箱地址之间必须使用一个空格隔开）：别名+一个空格+&lt;邮箱地址&gt;，别名中不能带有冒号(:)。</p>
                     * @param _fromEmailAddress <p>发件人邮箱地址。不使用别名时请直接填写发件人邮箱地址，例如：noreply@mail.qcloud.com如需填写发件人别名时，请按照如下方式（注意别名与邮箱地址之间必须使用一个空格隔开）：别名+一个空格+&lt;邮箱地址&gt;，别名中不能带有冒号(:)。</p>
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
                     * 获取<p>邮件主题</p>
                     * @return Subject <p>邮件主题</p>
                     * 
                     */
                    std::string GetSubject() const;

                    /**
                     * 设置<p>邮件主题</p>
                     * @param _subject <p>邮件主题</p>
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
                     * 获取<p>收信人邮箱地址，最多支持群发50人。注意：邮件内容会显示所有收件人地址，非群发邮件请多次调用API发送。<br>Destination/Cc/Bcc三个参数必须至少存在一个。</p>
                     * @return Destination <p>收信人邮箱地址，最多支持群发50人。注意：邮件内容会显示所有收件人地址，非群发邮件请多次调用API发送。<br>Destination/Cc/Bcc三个参数必须至少存在一个。</p>
                     * 
                     */
                    std::vector<std::string> GetDestination() const;

                    /**
                     * 设置<p>收信人邮箱地址，最多支持群发50人。注意：邮件内容会显示所有收件人地址，非群发邮件请多次调用API发送。<br>Destination/Cc/Bcc三个参数必须至少存在一个。</p>
                     * @param _destination <p>收信人邮箱地址，最多支持群发50人。注意：邮件内容会显示所有收件人地址，非群发邮件请多次调用API发送。<br>Destination/Cc/Bcc三个参数必须至少存在一个。</p>
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
                     * 获取<p>邮件的“回复”电子邮件地址。可以填写您能收到邮件的邮箱地址，可以是个人邮箱。如果不填，收件人的回复邮件将会发送失败。</p>
                     * @return ReplyToAddresses <p>邮件的“回复”电子邮件地址。可以填写您能收到邮件的邮箱地址，可以是个人邮箱。如果不填，收件人的回复邮件将会发送失败。</p>
                     * 
                     */
                    std::string GetReplyToAddresses() const;

                    /**
                     * 设置<p>邮件的“回复”电子邮件地址。可以填写您能收到邮件的邮箱地址，可以是个人邮箱。如果不填，收件人的回复邮件将会发送失败。</p>
                     * @param _replyToAddresses <p>邮件的“回复”电子邮件地址。可以填写您能收到邮件的邮箱地址，可以是个人邮箱。如果不填，收件人的回复邮件将会发送失败。</p>
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
                     * 获取<p>抄送人邮箱地址，最多支持抄送20人。</p>
                     * @return Cc <p>抄送人邮箱地址，最多支持抄送20人。</p>
                     * 
                     */
                    std::vector<std::string> GetCc() const;

                    /**
                     * 设置<p>抄送人邮箱地址，最多支持抄送20人。</p>
                     * @param _cc <p>抄送人邮箱地址，最多支持抄送20人。</p>
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
                     * 获取<p>密送人邮箱地址，最多支持抄送20人,Bcc和Destination不能重复。</p>
                     * @return Bcc <p>密送人邮箱地址，最多支持抄送20人,Bcc和Destination不能重复。</p>
                     * 
                     */
                    std::vector<std::string> GetBcc() const;

                    /**
                     * 设置<p>密送人邮箱地址，最多支持抄送20人,Bcc和Destination不能重复。</p>
                     * @param _bcc <p>密送人邮箱地址，最多支持抄送20人,Bcc和Destination不能重复。</p>
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
                     * 获取<p>使用模板发送时，填写模板相关参数。</p><blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">注意</div>        <div class="rno-document-tip-desc"><p>如您未申请过特殊配置，则该字段为必填</p></div>    </div></blockquote>
                     * @return Template <p>使用模板发送时，填写模板相关参数。</p><blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">注意</div>        <div class="rno-document-tip-desc"><p>如您未申请过特殊配置，则该字段为必填</p></div>    </div></blockquote>
                     * 
                     */
                    Template GetTemplate() const;

                    /**
                     * 设置<p>使用模板发送时，填写模板相关参数。</p><blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">注意</div>        <div class="rno-document-tip-desc"><p>如您未申请过特殊配置，则该字段为必填</p></div>    </div></blockquote>
                     * @param _template <p>使用模板发送时，填写模板相关参数。</p><blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">注意</div>        <div class="rno-document-tip-desc"><p>如您未申请过特殊配置，则该字段为必填</p></div>    </div></blockquote>
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
                     * 获取<p>已废弃</p><blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">说明</div>        <div class="rno-document-tip-desc"><p>仅部分历史上申请了特殊配置的客户需要使用。如您未申请过特殊配置，则不存在该字段。</p></div>    </div></blockquote>
                     * @return Simple <p>已废弃</p><blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">说明</div>        <div class="rno-document-tip-desc"><p>仅部分历史上申请了特殊配置的客户需要使用。如您未申请过特殊配置，则不存在该字段。</p></div>    </div></blockquote>
                     * 
                     */
                    Simple GetSimple() const;

                    /**
                     * 设置<p>已废弃</p><blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">说明</div>        <div class="rno-document-tip-desc"><p>仅部分历史上申请了特殊配置的客户需要使用。如您未申请过特殊配置，则不存在该字段。</p></div>    </div></blockquote>
                     * @param _simple <p>已废弃</p><blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">说明</div>        <div class="rno-document-tip-desc"><p>仅部分历史上申请了特殊配置的客户需要使用。如您未申请过特殊配置，则不存在该字段。</p></div>    </div></blockquote>
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
                     * 获取<p>需要发送附件时，填写附件相关参数。腾讯云接口请求最大支持 8M 的请求包，附件内容经过 Base64 预期扩大1.5倍，应该控制所有附件的总大小最大在 4M 以内，整体请求超出 8M 时接口会返回错误</p>
                     * @return Attachments <p>需要发送附件时，填写附件相关参数。腾讯云接口请求最大支持 8M 的请求包，附件内容经过 Base64 预期扩大1.5倍，应该控制所有附件的总大小最大在 4M 以内，整体请求超出 8M 时接口会返回错误</p>
                     * 
                     */
                    std::vector<Attachment> GetAttachments() const;

                    /**
                     * 设置<p>需要发送附件时，填写附件相关参数。腾讯云接口请求最大支持 8M 的请求包，附件内容经过 Base64 预期扩大1.5倍，应该控制所有附件的总大小最大在 4M 以内，整体请求超出 8M 时接口会返回错误</p>
                     * @param _attachments <p>需要发送附件时，填写附件相关参数。腾讯云接口请求最大支持 8M 的请求包，附件内容经过 Base64 预期扩大1.5倍，应该控制所有附件的总大小最大在 4M 以内，整体请求超出 8M 时接口会返回错误</p>
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
                     * 获取<p>退订链接选项</p><p>枚举值：</p><ul><li>0： 不加入退订链接</li><li>1： 简体中文</li><li>2： 英文</li><li>3： 繁体中文</li><li>4： 西班牙语</li><li>5： 法语</li><li>6： 德语</li><li>7： 日语</li><li>8： 韩语</li><li>9： 阿拉伯语</li><li>10： 泰语</li><li>11： 印尼语</li></ul>
                     * @return Unsubscribe <p>退订链接选项</p><p>枚举值：</p><ul><li>0： 不加入退订链接</li><li>1： 简体中文</li><li>2： 英文</li><li>3： 繁体中文</li><li>4： 西班牙语</li><li>5： 法语</li><li>6： 德语</li><li>7： 日语</li><li>8： 韩语</li><li>9： 阿拉伯语</li><li>10： 泰语</li><li>11： 印尼语</li></ul>
                     * 
                     */
                    std::string GetUnsubscribe() const;

                    /**
                     * 设置<p>退订链接选项</p><p>枚举值：</p><ul><li>0： 不加入退订链接</li><li>1： 简体中文</li><li>2： 英文</li><li>3： 繁体中文</li><li>4： 西班牙语</li><li>5： 法语</li><li>6： 德语</li><li>7： 日语</li><li>8： 韩语</li><li>9： 阿拉伯语</li><li>10： 泰语</li><li>11： 印尼语</li></ul>
                     * @param _unsubscribe <p>退订链接选项</p><p>枚举值：</p><ul><li>0： 不加入退订链接</li><li>1： 简体中文</li><li>2： 英文</li><li>3： 繁体中文</li><li>4： 西班牙语</li><li>5： 法语</li><li>6： 德语</li><li>7： 日语</li><li>8： 韩语</li><li>9： 阿拉伯语</li><li>10： 泰语</li><li>11： 印尼语</li></ul>
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
                     * 获取<p>邮件触发类型 0:非触发类，默认类型，营销类邮件、非即时类邮件等选择此类型  1:触发类，验证码等即时发送类邮件，若邮件超过一定大小，系统会自动选择非触发类型通道</p>
                     * @return TriggerType <p>邮件触发类型 0:非触发类，默认类型，营销类邮件、非即时类邮件等选择此类型  1:触发类，验证码等即时发送类邮件，若邮件超过一定大小，系统会自动选择非触发类型通道</p>
                     * 
                     */
                    uint64_t GetTriggerType() const;

                    /**
                     * 设置<p>邮件触发类型 0:非触发类，默认类型，营销类邮件、非即时类邮件等选择此类型  1:触发类，验证码等即时发送类邮件，若邮件超过一定大小，系统会自动选择非触发类型通道</p>
                     * @param _triggerType <p>邮件触发类型 0:非触发类，默认类型，营销类邮件、非即时类邮件等选择此类型  1:触发类，验证码等即时发送类邮件，若邮件超过一定大小，系统会自动选择非触发类型通道</p>
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
                     * 获取<p>smtp头中的Message-Id字段</p>
                     * @return SmtpMessageId <p>smtp头中的Message-Id字段</p>
                     * 
                     */
                    std::string GetSmtpMessageId() const;

                    /**
                     * 设置<p>smtp头中的Message-Id字段</p>
                     * @param _smtpMessageId <p>smtp头中的Message-Id字段</p>
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
                     * 获取<p>smtp头中可以设置的其它字段</p>
                     * @return SmtpHeaders <p>smtp头中可以设置的其它字段</p>
                     * 
                     */
                    std::string GetSmtpHeaders() const;

                    /**
                     * 设置<p>smtp头中可以设置的其它字段</p>
                     * @param _smtpHeaders <p>smtp头中可以设置的其它字段</p>
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
                     * 获取<p>smtp头中的from字段，建议域名与FromEmailAddress保持一致</p>
                     * @return HeaderFrom <p>smtp头中的from字段，建议域名与FromEmailAddress保持一致</p>
                     * 
                     */
                    std::string GetHeaderFrom() const;

                    /**
                     * 设置<p>smtp头中的from字段，建议域名与FromEmailAddress保持一致</p>
                     * @param _headerFrom <p>smtp头中的from字段，建议域名与FromEmailAddress保持一致</p>
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
                     * <p>发件人邮箱地址。不使用别名时请直接填写发件人邮箱地址，例如：noreply@mail.qcloud.com如需填写发件人别名时，请按照如下方式（注意别名与邮箱地址之间必须使用一个空格隔开）：别名+一个空格+&lt;邮箱地址&gt;，别名中不能带有冒号(:)。</p>
                     */
                    std::string m_fromEmailAddress;
                    bool m_fromEmailAddressHasBeenSet;

                    /**
                     * <p>邮件主题</p>
                     */
                    std::string m_subject;
                    bool m_subjectHasBeenSet;

                    /**
                     * <p>收信人邮箱地址，最多支持群发50人。注意：邮件内容会显示所有收件人地址，非群发邮件请多次调用API发送。<br>Destination/Cc/Bcc三个参数必须至少存在一个。</p>
                     */
                    std::vector<std::string> m_destination;
                    bool m_destinationHasBeenSet;

                    /**
                     * <p>邮件的“回复”电子邮件地址。可以填写您能收到邮件的邮箱地址，可以是个人邮箱。如果不填，收件人的回复邮件将会发送失败。</p>
                     */
                    std::string m_replyToAddresses;
                    bool m_replyToAddressesHasBeenSet;

                    /**
                     * <p>抄送人邮箱地址，最多支持抄送20人。</p>
                     */
                    std::vector<std::string> m_cc;
                    bool m_ccHasBeenSet;

                    /**
                     * <p>密送人邮箱地址，最多支持抄送20人,Bcc和Destination不能重复。</p>
                     */
                    std::vector<std::string> m_bcc;
                    bool m_bccHasBeenSet;

                    /**
                     * <p>使用模板发送时，填写模板相关参数。</p><blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">注意</div>        <div class="rno-document-tip-desc"><p>如您未申请过特殊配置，则该字段为必填</p></div>    </div></blockquote>
                     */
                    Template m_template;
                    bool m_templateHasBeenSet;

                    /**
                     * <p>已废弃</p><blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">说明</div>        <div class="rno-document-tip-desc"><p>仅部分历史上申请了特殊配置的客户需要使用。如您未申请过特殊配置，则不存在该字段。</p></div>    </div></blockquote>
                     */
                    Simple m_simple;
                    bool m_simpleHasBeenSet;

                    /**
                     * <p>需要发送附件时，填写附件相关参数。腾讯云接口请求最大支持 8M 的请求包，附件内容经过 Base64 预期扩大1.5倍，应该控制所有附件的总大小最大在 4M 以内，整体请求超出 8M 时接口会返回错误</p>
                     */
                    std::vector<Attachment> m_attachments;
                    bool m_attachmentsHasBeenSet;

                    /**
                     * <p>退订链接选项</p><p>枚举值：</p><ul><li>0： 不加入退订链接</li><li>1： 简体中文</li><li>2： 英文</li><li>3： 繁体中文</li><li>4： 西班牙语</li><li>5： 法语</li><li>6： 德语</li><li>7： 日语</li><li>8： 韩语</li><li>9： 阿拉伯语</li><li>10： 泰语</li><li>11： 印尼语</li></ul>
                     */
                    std::string m_unsubscribe;
                    bool m_unsubscribeHasBeenSet;

                    /**
                     * <p>邮件触发类型 0:非触发类，默认类型，营销类邮件、非即时类邮件等选择此类型  1:触发类，验证码等即时发送类邮件，若邮件超过一定大小，系统会自动选择非触发类型通道</p>
                     */
                    uint64_t m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * <p>smtp头中的Message-Id字段</p>
                     */
                    std::string m_smtpMessageId;
                    bool m_smtpMessageIdHasBeenSet;

                    /**
                     * <p>smtp头中可以设置的其它字段</p>
                     */
                    std::string m_smtpHeaders;
                    bool m_smtpHeadersHasBeenSet;

                    /**
                     * <p>smtp头中的from字段，建议域名与FromEmailAddress保持一致</p>
                     */
                    std::string m_headerFrom;
                    bool m_headerFromHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_SENDEMAILREQUEST_H_
