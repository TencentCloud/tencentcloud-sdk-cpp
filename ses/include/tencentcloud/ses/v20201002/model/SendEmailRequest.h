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
                     * 获取发信邮件地址。请填写发件人邮箱地址，例如：noreply@mail.qcloud.com
如需填写发件人说明，请按照如下方式： 
别名 <邮箱地址>
                     * @return FromEmailAddress 发信邮件地址。请填写发件人邮箱地址，例如：noreply@mail.qcloud.com
如需填写发件人说明，请按照如下方式： 
别名 <邮箱地址>
                     */
                    std::string GetFromEmailAddress() const;

                    /**
                     * 设置发信邮件地址。请填写发件人邮箱地址，例如：noreply@mail.qcloud.com
如需填写发件人说明，请按照如下方式： 
别名 <邮箱地址>
                     * @param FromEmailAddress 发信邮件地址。请填写发件人邮箱地址，例如：noreply@mail.qcloud.com
如需填写发件人说明，请按照如下方式： 
别名 <邮箱地址>
                     */
                    void SetFromEmailAddress(const std::string& _fromEmailAddress);

                    /**
                     * 判断参数 FromEmailAddress 是否已赋值
                     * @return FromEmailAddress 是否已赋值
                     */
                    bool FromEmailAddressHasBeenSet() const;

                    /**
                     * 获取收信人邮箱地址，最多支持群发50人。注意：邮件内容会显示所有收件人地址，非群发邮件请多次调用API发送。
                     * @return Destination 收信人邮箱地址，最多支持群发50人。注意：邮件内容会显示所有收件人地址，非群发邮件请多次调用API发送。
                     */
                    std::vector<std::string> GetDestination() const;

                    /**
                     * 设置收信人邮箱地址，最多支持群发50人。注意：邮件内容会显示所有收件人地址，非群发邮件请多次调用API发送。
                     * @param Destination 收信人邮箱地址，最多支持群发50人。注意：邮件内容会显示所有收件人地址，非群发邮件请多次调用API发送。
                     */
                    void SetDestination(const std::vector<std::string>& _destination);

                    /**
                     * 判断参数 Destination 是否已赋值
                     * @return Destination 是否已赋值
                     */
                    bool DestinationHasBeenSet() const;

                    /**
                     * 获取邮件主题
                     * @return Subject 邮件主题
                     */
                    std::string GetSubject() const;

                    /**
                     * 设置邮件主题
                     * @param Subject 邮件主题
                     */
                    void SetSubject(const std::string& _subject);

                    /**
                     * 判断参数 Subject 是否已赋值
                     * @return Subject 是否已赋值
                     */
                    bool SubjectHasBeenSet() const;

                    /**
                     * 获取邮件的“回复”电子邮件地址。可以填写您能收到邮件的邮箱地址，可以是个人邮箱。如果不填，收件人将会回复到腾讯云。
                     * @return ReplyToAddresses 邮件的“回复”电子邮件地址。可以填写您能收到邮件的邮箱地址，可以是个人邮箱。如果不填，收件人将会回复到腾讯云。
                     */
                    std::string GetReplyToAddresses() const;

                    /**
                     * 设置邮件的“回复”电子邮件地址。可以填写您能收到邮件的邮箱地址，可以是个人邮箱。如果不填，收件人将会回复到腾讯云。
                     * @param ReplyToAddresses 邮件的“回复”电子邮件地址。可以填写您能收到邮件的邮箱地址，可以是个人邮箱。如果不填，收件人将会回复到腾讯云。
                     */
                    void SetReplyToAddresses(const std::string& _replyToAddresses);

                    /**
                     * 判断参数 ReplyToAddresses 是否已赋值
                     * @return ReplyToAddresses 是否已赋值
                     */
                    bool ReplyToAddressesHasBeenSet() const;

                    /**
                     * 获取使用模板发送时，填写的模板相关参数
                     * @return Template 使用模板发送时，填写的模板相关参数
                     */
                    Template GetTemplate() const;

                    /**
                     * 设置使用模板发送时，填写的模板相关参数
                     * @param Template 使用模板发送时，填写的模板相关参数
                     */
                    void SetTemplate(const Template& _template);

                    /**
                     * 判断参数 Template 是否已赋值
                     * @return Template 是否已赋值
                     */
                    bool TemplateHasBeenSet() const;

                    /**
                     * 获取使用API直接发送内容时，填写的邮件内容
                     * @return Simple 使用API直接发送内容时，填写的邮件内容
                     */
                    Simple GetSimple() const;

                    /**
                     * 设置使用API直接发送内容时，填写的邮件内容
                     * @param Simple 使用API直接发送内容时，填写的邮件内容
                     */
                    void SetSimple(const Simple& _simple);

                    /**
                     * 判断参数 Simple 是否已赋值
                     * @return Simple 是否已赋值
                     */
                    bool SimpleHasBeenSet() const;

                    /**
                     * 获取需要发送附件时，填写附件相关参数。
                     * @return Attachments 需要发送附件时，填写附件相关参数。
                     */
                    std::vector<Attachment> GetAttachments() const;

                    /**
                     * 设置需要发送附件时，填写附件相关参数。
                     * @param Attachments 需要发送附件时，填写附件相关参数。
                     */
                    void SetAttachments(const std::vector<Attachment>& _attachments);

                    /**
                     * 判断参数 Attachments 是否已赋值
                     * @return Attachments 是否已赋值
                     */
                    bool AttachmentsHasBeenSet() const;

                    /**
                     * 获取退订选项 1: 加入退订链接 0: 不加入退订链接
                     * @return Unsubscribe 退订选项 1: 加入退订链接 0: 不加入退订链接
                     */
                    std::string GetUnsubscribe() const;

                    /**
                     * 设置退订选项 1: 加入退订链接 0: 不加入退订链接
                     * @param Unsubscribe 退订选项 1: 加入退订链接 0: 不加入退订链接
                     */
                    void SetUnsubscribe(const std::string& _unsubscribe);

                    /**
                     * 判断参数 Unsubscribe 是否已赋值
                     * @return Unsubscribe 是否已赋值
                     */
                    bool UnsubscribeHasBeenSet() const;

                private:

                    /**
                     * 发信邮件地址。请填写发件人邮箱地址，例如：noreply@mail.qcloud.com
如需填写发件人说明，请按照如下方式： 
别名 <邮箱地址>
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
                     * 邮件的“回复”电子邮件地址。可以填写您能收到邮件的邮箱地址，可以是个人邮箱。如果不填，收件人将会回复到腾讯云。
                     */
                    std::string m_replyToAddresses;
                    bool m_replyToAddressesHasBeenSet;

                    /**
                     * 使用模板发送时，填写的模板相关参数
                     */
                    Template m_template;
                    bool m_templateHasBeenSet;

                    /**
                     * 使用API直接发送内容时，填写的邮件内容
                     */
                    Simple m_simple;
                    bool m_simpleHasBeenSet;

                    /**
                     * 需要发送附件时，填写附件相关参数。
                     */
                    std::vector<Attachment> m_attachments;
                    bool m_attachmentsHasBeenSet;

                    /**
                     * 退订选项 1: 加入退订链接 0: 不加入退订链接
                     */
                    std::string m_unsubscribe;
                    bool m_unsubscribeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_SENDEMAILREQUEST_H_
