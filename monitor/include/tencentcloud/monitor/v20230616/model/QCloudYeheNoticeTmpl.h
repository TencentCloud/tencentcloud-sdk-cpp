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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_QCLOUDYEHENOTICETMPL_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_QCLOUDYEHENOTICETMPL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/QCloudYeheNoticeTmplItem.h>
#include <tencentcloud/monitor/v20230616/model/QCloudYeheWeChatNoticeTmplItem.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * 官网通知内容模板
                */
                class QCloudYeheNoticeTmpl : public AbstractModel
                {
                public:
                    QCloudYeheNoticeTmpl();
                    ~QCloudYeheNoticeTmpl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取邮件通知渠道
                     * @return Email 邮件通知渠道
                     * 
                     */
                    QCloudYeheNoticeTmplItem GetEmail() const;

                    /**
                     * 设置邮件通知渠道
                     * @param _email 邮件通知渠道
                     * 
                     */
                    void SetEmail(const QCloudYeheNoticeTmplItem& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取企业微信通知渠道
                     * @return QYWX 企业微信通知渠道
                     * 
                     */
                    QCloudYeheNoticeTmplItem GetQYWX() const;

                    /**
                     * 设置企业微信通知渠道
                     * @param _qYWX 企业微信通知渠道
                     * 
                     */
                    void SetQYWX(const QCloudYeheNoticeTmplItem& _qYWX);

                    /**
                     * 判断参数 QYWX 是否已赋值
                     * @return QYWX 是否已赋值
                     * 
                     */
                    bool QYWXHasBeenSet() const;

                    /**
                     * 获取短信通知渠道
                     * @return SMS 短信通知渠道
                     * 
                     */
                    QCloudYeheNoticeTmplItem GetSMS() const;

                    /**
                     * 设置短信通知渠道
                     * @param _sMS 短信通知渠道
                     * 
                     */
                    void SetSMS(const QCloudYeheNoticeTmplItem& _sMS);

                    /**
                     * 判断参数 SMS 是否已赋值
                     * @return SMS 是否已赋值
                     * 
                     */
                    bool SMSHasBeenSet() const;

                    /**
                     * 获取语音通知渠道
                     * @return Voice 语音通知渠道
                     * 
                     */
                    QCloudYeheNoticeTmplItem GetVoice() const;

                    /**
                     * 设置语音通知渠道
                     * @param _voice 语音通知渠道
                     * 
                     */
                    void SetVoice(const QCloudYeheNoticeTmplItem& _voice);

                    /**
                     * 判断参数 Voice 是否已赋值
                     * @return Voice 是否已赋值
                     * 
                     */
                    bool VoiceHasBeenSet() const;

                    /**
                     * 获取微信通知渠道
                     * @return WeChat 微信通知渠道
                     * 
                     */
                    QCloudYeheWeChatNoticeTmplItem GetWeChat() const;

                    /**
                     * 设置微信通知渠道
                     * @param _weChat 微信通知渠道
                     * 
                     */
                    void SetWeChat(const QCloudYeheWeChatNoticeTmplItem& _weChat);

                    /**
                     * 判断参数 WeChat 是否已赋值
                     * @return WeChat 是否已赋值
                     * 
                     */
                    bool WeChatHasBeenSet() const;

                    /**
                     * 获取站内信通知渠道
                     * @return Site 站内信通知渠道
                     * 
                     */
                    QCloudYeheNoticeTmplItem GetSite() const;

                    /**
                     * 设置站内信通知渠道
                     * @param _site 站内信通知渠道
                     * 
                     */
                    void SetSite(const QCloudYeheNoticeTmplItem& _site);

                    /**
                     * 判断参数 Site 是否已赋值
                     * @return Site 是否已赋值
                     * 
                     */
                    bool SiteHasBeenSet() const;

                    /**
                     * 获取安灯通知渠道
                     * @return Andon 安灯通知渠道
                     * 
                     */
                    QCloudYeheNoticeTmplItem GetAndon() const;

                    /**
                     * 设置安灯通知渠道
                     * @param _andon 安灯通知渠道
                     * 
                     */
                    void SetAndon(const QCloudYeheNoticeTmplItem& _andon);

                    /**
                     * 判断参数 Andon 是否已赋值
                     * @return Andon 是否已赋值
                     * 
                     */
                    bool AndonHasBeenSet() const;

                private:

                    /**
                     * 邮件通知渠道
                     */
                    QCloudYeheNoticeTmplItem m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 企业微信通知渠道
                     */
                    QCloudYeheNoticeTmplItem m_qYWX;
                    bool m_qYWXHasBeenSet;

                    /**
                     * 短信通知渠道
                     */
                    QCloudYeheNoticeTmplItem m_sMS;
                    bool m_sMSHasBeenSet;

                    /**
                     * 语音通知渠道
                     */
                    QCloudYeheNoticeTmplItem m_voice;
                    bool m_voiceHasBeenSet;

                    /**
                     * 微信通知渠道
                     */
                    QCloudYeheWeChatNoticeTmplItem m_weChat;
                    bool m_weChatHasBeenSet;

                    /**
                     * 站内信通知渠道
                     */
                    QCloudYeheNoticeTmplItem m_site;
                    bool m_siteHasBeenSet;

                    /**
                     * 安灯通知渠道
                     */
                    QCloudYeheNoticeTmplItem m_andon;
                    bool m_andonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_QCLOUDYEHENOTICETMPL_H_
