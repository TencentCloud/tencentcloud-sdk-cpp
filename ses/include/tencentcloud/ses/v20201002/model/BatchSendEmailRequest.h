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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_BATCHSENDEMAILREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_BATCHSENDEMAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ses/v20201002/model/Template.h>
#include <tencentcloud/ses/v20201002/model/Simple.h>
#include <tencentcloud/ses/v20201002/model/Attachment.h>
#include <tencentcloud/ses/v20201002/model/CycleEmailParam.h>
#include <tencentcloud/ses/v20201002/model/TimedEmailParam.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * BatchSendEmail请求参数结构体
                */
                class BatchSendEmailRequest : public AbstractModel
                {
                public:
                    BatchSendEmailRequest();
                    ~BatchSendEmailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>发信邮件地址。请填写发件人邮箱地址，例如：noreply@mail.qcloud.com。如需填写发件人说明，请按照<br>发信人 &lt;邮件地址&gt; 的方式填写，例如：<br>腾讯云团队 &lt;noreply@mail.qcloud.com&gt;</p>
                     * @return FromEmailAddress <p>发信邮件地址。请填写发件人邮箱地址，例如：noreply@mail.qcloud.com。如需填写发件人说明，请按照<br>发信人 &lt;邮件地址&gt; 的方式填写，例如：<br>腾讯云团队 &lt;noreply@mail.qcloud.com&gt;</p>
                     * 
                     */
                    std::string GetFromEmailAddress() const;

                    /**
                     * 设置<p>发信邮件地址。请填写发件人邮箱地址，例如：noreply@mail.qcloud.com。如需填写发件人说明，请按照<br>发信人 &lt;邮件地址&gt; 的方式填写，例如：<br>腾讯云团队 &lt;noreply@mail.qcloud.com&gt;</p>
                     * @param _fromEmailAddress <p>发信邮件地址。请填写发件人邮箱地址，例如：noreply@mail.qcloud.com。如需填写发件人说明，请按照<br>发信人 &lt;邮件地址&gt; 的方式填写，例如：<br>腾讯云团队 &lt;noreply@mail.qcloud.com&gt;</p>
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
                     * 获取<p>收件人列表ID</p>
                     * @return ReceiverId <p>收件人列表ID</p>
                     * 
                     */
                    uint64_t GetReceiverId() const;

                    /**
                     * 设置<p>收件人列表ID</p>
                     * @param _receiverId <p>收件人列表ID</p>
                     * 
                     */
                    void SetReceiverId(const uint64_t& _receiverId);

                    /**
                     * 判断参数 ReceiverId 是否已赋值
                     * @return ReceiverId 是否已赋值
                     * 
                     */
                    bool ReceiverIdHasBeenSet() const;

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
                     * 获取<p>任务类型 1: 立即发送 2: 定时发送 3: 周期（频率）发送</p>
                     * @return TaskType <p>任务类型 1: 立即发送 2: 定时发送 3: 周期（频率）发送</p>
                     * 
                     */
                    uint64_t GetTaskType() const;

                    /**
                     * 设置<p>任务类型 1: 立即发送 2: 定时发送 3: 周期（频率）发送</p>
                     * @param _taskType <p>任务类型 1: 立即发送 2: 定时发送 3: 周期（频率）发送</p>
                     * 
                     */
                    void SetTaskType(const uint64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

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
                     * 获取<p>使用模板发送时，填写的模板相关参数</p><blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">注意</div>        <div class="rno-document-tip-desc"><p>如您未申请过特殊配置，则该字段为必填</p></div>    </div></blockquote>
                     * @return Template <p>使用模板发送时，填写的模板相关参数</p><blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">注意</div>        <div class="rno-document-tip-desc"><p>如您未申请过特殊配置，则该字段为必填</p></div>    </div></blockquote>
                     * 
                     */
                    Template GetTemplate() const;

                    /**
                     * 设置<p>使用模板发送时，填写的模板相关参数</p><blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">注意</div>        <div class="rno-document-tip-desc"><p>如您未申请过特殊配置，则该字段为必填</p></div>    </div></blockquote>
                     * @param _template <p>使用模板发送时，填写的模板相关参数</p><blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">注意</div>        <div class="rno-document-tip-desc"><p>如您未申请过特殊配置，则该字段为必填</p></div>    </div></blockquote>
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
                     * 获取<p>已废弃<blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">说明</div>        <div class="rno-document-tip-desc"><p>仅部分历史上申请了特殊配置的客户需要使用。如您未申请过特殊配置，则不存在该字段。</p></div>    </div></blockquote></p>
                     * @return Simple <p>已废弃<blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">说明</div>        <div class="rno-document-tip-desc"><p>仅部分历史上申请了特殊配置的客户需要使用。如您未申请过特殊配置，则不存在该字段。</p></div>    </div></blockquote></p>
                     * 
                     */
                    Simple GetSimple() const;

                    /**
                     * 设置<p>已废弃<blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">说明</div>        <div class="rno-document-tip-desc"><p>仅部分历史上申请了特殊配置的客户需要使用。如您未申请过特殊配置，则不存在该字段。</p></div>    </div></blockquote></p>
                     * @param _simple <p>已废弃<blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">说明</div>        <div class="rno-document-tip-desc"><p>仅部分历史上申请了特殊配置的客户需要使用。如您未申请过特殊配置，则不存在该字段。</p></div>    </div></blockquote></p>
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
                     * 获取<p>需要发送附件时，填写附件相关参数（暂未支持）</p>
                     * @return Attachments <p>需要发送附件时，填写附件相关参数（暂未支持）</p>
                     * 
                     */
                    std::vector<Attachment> GetAttachments() const;

                    /**
                     * 设置<p>需要发送附件时，填写附件相关参数（暂未支持）</p>
                     * @param _attachments <p>需要发送附件时，填写附件相关参数（暂未支持）</p>
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
                     * 获取<p>周期发送任务的必要参数</p>
                     * @return CycleParam <p>周期发送任务的必要参数</p>
                     * 
                     */
                    CycleEmailParam GetCycleParam() const;

                    /**
                     * 设置<p>周期发送任务的必要参数</p>
                     * @param _cycleParam <p>周期发送任务的必要参数</p>
                     * 
                     */
                    void SetCycleParam(const CycleEmailParam& _cycleParam);

                    /**
                     * 判断参数 CycleParam 是否已赋值
                     * @return CycleParam 是否已赋值
                     * 
                     */
                    bool CycleParamHasBeenSet() const;

                    /**
                     * 获取<p>定时发送任务的必要参数</p>
                     * @return TimedParam <p>定时发送任务的必要参数</p>
                     * 
                     */
                    TimedEmailParam GetTimedParam() const;

                    /**
                     * 设置<p>定时发送任务的必要参数</p>
                     * @param _timedParam <p>定时发送任务的必要参数</p>
                     * 
                     */
                    void SetTimedParam(const TimedEmailParam& _timedParam);

                    /**
                     * 判断参数 TimedParam 是否已赋值
                     * @return TimedParam 是否已赋值
                     * 
                     */
                    bool TimedParamHasBeenSet() const;

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
                     * 获取<p>是否添加广告标识 0:不添加 1:添加到subject前面，2:添加到subject后面</p>
                     * @return ADLocation <p>是否添加广告标识 0:不添加 1:添加到subject前面，2:添加到subject后面</p>
                     * 
                     */
                    uint64_t GetADLocation() const;

                    /**
                     * 设置<p>是否添加广告标识 0:不添加 1:添加到subject前面，2:添加到subject后面</p>
                     * @param _aDLocation <p>是否添加广告标识 0:不添加 1:添加到subject前面，2:添加到subject后面</p>
                     * 
                     */
                    void SetADLocation(const uint64_t& _aDLocation);

                    /**
                     * 判断参数 ADLocation 是否已赋值
                     * @return ADLocation 是否已赋值
                     * 
                     */
                    bool ADLocationHasBeenSet() const;

                private:

                    /**
                     * <p>发信邮件地址。请填写发件人邮箱地址，例如：noreply@mail.qcloud.com。如需填写发件人说明，请按照<br>发信人 &lt;邮件地址&gt; 的方式填写，例如：<br>腾讯云团队 &lt;noreply@mail.qcloud.com&gt;</p>
                     */
                    std::string m_fromEmailAddress;
                    bool m_fromEmailAddressHasBeenSet;

                    /**
                     * <p>收件人列表ID</p>
                     */
                    uint64_t m_receiverId;
                    bool m_receiverIdHasBeenSet;

                    /**
                     * <p>邮件主题</p>
                     */
                    std::string m_subject;
                    bool m_subjectHasBeenSet;

                    /**
                     * <p>任务类型 1: 立即发送 2: 定时发送 3: 周期（频率）发送</p>
                     */
                    uint64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>邮件的“回复”电子邮件地址。可以填写您能收到邮件的邮箱地址，可以是个人邮箱。如果不填，收件人的回复邮件将会发送失败。</p>
                     */
                    std::string m_replyToAddresses;
                    bool m_replyToAddressesHasBeenSet;

                    /**
                     * <p>使用模板发送时，填写的模板相关参数</p><blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">注意</div>        <div class="rno-document-tip-desc"><p>如您未申请过特殊配置，则该字段为必填</p></div>    </div></blockquote>
                     */
                    Template m_template;
                    bool m_templateHasBeenSet;

                    /**
                     * <p>已废弃<blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">说明</div>        <div class="rno-document-tip-desc"><p>仅部分历史上申请了特殊配置的客户需要使用。如您未申请过特殊配置，则不存在该字段。</p></div>    </div></blockquote></p>
                     */
                    Simple m_simple;
                    bool m_simpleHasBeenSet;

                    /**
                     * <p>需要发送附件时，填写附件相关参数（暂未支持）</p>
                     */
                    std::vector<Attachment> m_attachments;
                    bool m_attachmentsHasBeenSet;

                    /**
                     * <p>周期发送任务的必要参数</p>
                     */
                    CycleEmailParam m_cycleParam;
                    bool m_cycleParamHasBeenSet;

                    /**
                     * <p>定时发送任务的必要参数</p>
                     */
                    TimedEmailParam m_timedParam;
                    bool m_timedParamHasBeenSet;

                    /**
                     * <p>退订链接选项</p><p>枚举值：</p><ul><li>0： 不加入退订链接</li><li>1： 简体中文</li><li>2： 英文</li><li>3： 繁体中文</li><li>4： 西班牙语</li><li>5： 法语</li><li>6： 德语</li><li>7： 日语</li><li>8： 韩语</li><li>9： 阿拉伯语</li><li>10： 泰语</li><li>11： 印尼语</li></ul>
                     */
                    std::string m_unsubscribe;
                    bool m_unsubscribeHasBeenSet;

                    /**
                     * <p>是否添加广告标识 0:不添加 1:添加到subject前面，2:添加到subject后面</p>
                     */
                    uint64_t m_aDLocation;
                    bool m_aDLocationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_BATCHSENDEMAILREQUEST_H_
