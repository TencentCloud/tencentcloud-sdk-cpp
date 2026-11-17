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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_CHANNELCONTENT_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_CHANNELCONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * 消息正文
                */
                class ChannelContent : public AbstractModel
                {
                public:
                    ChannelContent();
                    ~ChannelContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>本段正文所属的渠道或子渠道全名</p><p>枚举值：</p><ul><li>QCloudYehe_site： 腾讯云野鹤，站内信</li><li>QCloudYehe_email： 腾讯云野鹤，电子邮件</li><li>QCloudYehe_sms： 腾讯云野鹤，短信</li><li>QCloudYehe_wechat： 腾讯云野鹤，微信</li><li>QCloudYehe_voice： 腾讯云野鹤，语音</li><li>QCloudYehe_qywx： 腾讯云野鹤，企业微信</li><li>QCloudYehe_andon： 腾讯云野鹤，安灯</li><li>TOF_weWorkMessage： TOF，企业微信消息</li><li>TOF_email： TOF，企业邮箱</li><li>TOF_phoneCall： TOF，电话</li><li>WeWork： 企业微信机器人</li><li>WebHook： 自定义 WebHook</li><li>FeiShu： 飞书</li><li>DingDing： 钉钉</li><li>Slack： Slack</li><li>GoogleChat： Google Chat</li><li>Teams： Teams</li><li>TeamsWorkflow： Teams Workflow</li><li>PagerDuty： PagerDuty</li><li>CLS： 日志服务 CLS</li><li>AS： 弹性伸缩</li><li>TCSYehe： TCS 野鹤。正文的 SubChannel 取渠道名本身</li><li>SCF： 云函数。不返回 Contents</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubChannel <p>本段正文所属的渠道或子渠道全名</p><p>枚举值：</p><ul><li>QCloudYehe_site： 腾讯云野鹤，站内信</li><li>QCloudYehe_email： 腾讯云野鹤，电子邮件</li><li>QCloudYehe_sms： 腾讯云野鹤，短信</li><li>QCloudYehe_wechat： 腾讯云野鹤，微信</li><li>QCloudYehe_voice： 腾讯云野鹤，语音</li><li>QCloudYehe_qywx： 腾讯云野鹤，企业微信</li><li>QCloudYehe_andon： 腾讯云野鹤，安灯</li><li>TOF_weWorkMessage： TOF，企业微信消息</li><li>TOF_email： TOF，企业邮箱</li><li>TOF_phoneCall： TOF，电话</li><li>WeWork： 企业微信机器人</li><li>WebHook： 自定义 WebHook</li><li>FeiShu： 飞书</li><li>DingDing： 钉钉</li><li>Slack： Slack</li><li>GoogleChat： Google Chat</li><li>Teams： Teams</li><li>TeamsWorkflow： Teams Workflow</li><li>PagerDuty： PagerDuty</li><li>CLS： 日志服务 CLS</li><li>AS： 弹性伸缩</li><li>TCSYehe： TCS 野鹤。正文的 SubChannel 取渠道名本身</li><li>SCF： 云函数。不返回 Contents</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubChannel() const;

                    /**
                     * 设置<p>本段正文所属的渠道或子渠道全名</p><p>枚举值：</p><ul><li>QCloudYehe_site： 腾讯云野鹤，站内信</li><li>QCloudYehe_email： 腾讯云野鹤，电子邮件</li><li>QCloudYehe_sms： 腾讯云野鹤，短信</li><li>QCloudYehe_wechat： 腾讯云野鹤，微信</li><li>QCloudYehe_voice： 腾讯云野鹤，语音</li><li>QCloudYehe_qywx： 腾讯云野鹤，企业微信</li><li>QCloudYehe_andon： 腾讯云野鹤，安灯</li><li>TOF_weWorkMessage： TOF，企业微信消息</li><li>TOF_email： TOF，企业邮箱</li><li>TOF_phoneCall： TOF，电话</li><li>WeWork： 企业微信机器人</li><li>WebHook： 自定义 WebHook</li><li>FeiShu： 飞书</li><li>DingDing： 钉钉</li><li>Slack： Slack</li><li>GoogleChat： Google Chat</li><li>Teams： Teams</li><li>TeamsWorkflow： Teams Workflow</li><li>PagerDuty： PagerDuty</li><li>CLS： 日志服务 CLS</li><li>AS： 弹性伸缩</li><li>TCSYehe： TCS 野鹤。正文的 SubChannel 取渠道名本身</li><li>SCF： 云函数。不返回 Contents</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subChannel <p>本段正文所属的渠道或子渠道全名</p><p>枚举值：</p><ul><li>QCloudYehe_site： 腾讯云野鹤，站内信</li><li>QCloudYehe_email： 腾讯云野鹤，电子邮件</li><li>QCloudYehe_sms： 腾讯云野鹤，短信</li><li>QCloudYehe_wechat： 腾讯云野鹤，微信</li><li>QCloudYehe_voice： 腾讯云野鹤，语音</li><li>QCloudYehe_qywx： 腾讯云野鹤，企业微信</li><li>QCloudYehe_andon： 腾讯云野鹤，安灯</li><li>TOF_weWorkMessage： TOF，企业微信消息</li><li>TOF_email： TOF，企业邮箱</li><li>TOF_phoneCall： TOF，电话</li><li>WeWork： 企业微信机器人</li><li>WebHook： 自定义 WebHook</li><li>FeiShu： 飞书</li><li>DingDing： 钉钉</li><li>Slack： Slack</li><li>GoogleChat： Google Chat</li><li>Teams： Teams</li><li>TeamsWorkflow： Teams Workflow</li><li>PagerDuty： PagerDuty</li><li>CLS： 日志服务 CLS</li><li>AS： 弹性伸缩</li><li>TCSYehe： TCS 野鹤。正文的 SubChannel 取渠道名本身</li><li>SCF： 云函数。不返回 Contents</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubChannel(const std::string& _subChannel);

                    /**
                     * 判断参数 SubChannel 是否已赋值
                     * @return SubChannel 是否已赋值
                     * 
                     */
                    bool SubChannelHasBeenSet() const;

                    /**
                     * 获取<p>该渠道实际发送的消息正文，由 Ark 按写时捕获的内容还原</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content <p>该渠道实际发送的消息正文，由 Ark 按写时捕获的内容还原</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>该渠道实际发送的消息正文，由 Ark 按写时捕获的内容还原</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _content <p>该渠道实际发送的消息正文，由 Ark 按写时捕获的内容还原</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>短信：SUCCESS / FAIL。电话：ANSWERED / UNANSWERED / ABNORMAL</p><p>枚举值：</p><ul><li>SUCCESS： 短信已送达</li><li>FAIL： 短信送达失败</li><li>ANSWERED： 电话已接听</li><li>UNANSWERED： 电话未接听</li><li>ABNORMAL： 电话拨打异常</li></ul>
                     * @return DeliverStatus <p>短信：SUCCESS / FAIL。电话：ANSWERED / UNANSWERED / ABNORMAL</p><p>枚举值：</p><ul><li>SUCCESS： 短信已送达</li><li>FAIL： 短信送达失败</li><li>ANSWERED： 电话已接听</li><li>UNANSWERED： 电话未接听</li><li>ABNORMAL： 电话拨打异常</li></ul>
                     * 
                     */
                    std::string GetDeliverStatus() const;

                    /**
                     * 设置<p>短信：SUCCESS / FAIL。电话：ANSWERED / UNANSWERED / ABNORMAL</p><p>枚举值：</p><ul><li>SUCCESS： 短信已送达</li><li>FAIL： 短信送达失败</li><li>ANSWERED： 电话已接听</li><li>UNANSWERED： 电话未接听</li><li>ABNORMAL： 电话拨打异常</li></ul>
                     * @param _deliverStatus <p>短信：SUCCESS / FAIL。电话：ANSWERED / UNANSWERED / ABNORMAL</p><p>枚举值：</p><ul><li>SUCCESS： 短信已送达</li><li>FAIL： 短信送达失败</li><li>ANSWERED： 电话已接听</li><li>UNANSWERED： 电话未接听</li><li>ABNORMAL： 电话拨打异常</li></ul>
                     * 
                     */
                    void SetDeliverStatus(const std::string& _deliverStatus);

                    /**
                     * 判断参数 DeliverStatus 是否已赋值
                     * @return DeliverStatus 是否已赋值
                     * 
                     */
                    bool DeliverStatusHasBeenSet() const;

                    /**
                     * 获取<p>原始时间字符串，不做时区转换。短信是收到时间；电话只在接听时有值</p><p>参数格式：短信为 YYYY-MM-DD hh:mm:ss，例如 2026-08-05 18:04:46。电话为 Unix 秒级时间戳的数字字符串，仅接听时有值，例如 1717824258。空字符串表示没有时间。</p>
                     * @return DeliverTime <p>原始时间字符串，不做时区转换。短信是收到时间；电话只在接听时有值</p><p>参数格式：短信为 YYYY-MM-DD hh:mm:ss，例如 2026-08-05 18:04:46。电话为 Unix 秒级时间戳的数字字符串，仅接听时有值，例如 1717824258。空字符串表示没有时间。</p>
                     * 
                     */
                    std::string GetDeliverTime() const;

                    /**
                     * 设置<p>原始时间字符串，不做时区转换。短信是收到时间；电话只在接听时有值</p><p>参数格式：短信为 YYYY-MM-DD hh:mm:ss，例如 2026-08-05 18:04:46。电话为 Unix 秒级时间戳的数字字符串，仅接听时有值，例如 1717824258。空字符串表示没有时间。</p>
                     * @param _deliverTime <p>原始时间字符串，不做时区转换。短信是收到时间；电话只在接听时有值</p><p>参数格式：短信为 YYYY-MM-DD hh:mm:ss，例如 2026-08-05 18:04:46。电话为 Unix 秒级时间戳的数字字符串，仅接听时有值，例如 1717824258。空字符串表示没有时间。</p>
                     * 
                     */
                    void SetDeliverTime(const std::string& _deliverTime);

                    /**
                     * 判断参数 DeliverTime 是否已赋值
                     * @return DeliverTime 是否已赋值
                     * 
                     */
                    bool DeliverTimeHasBeenSet() const;

                    /**
                     * 获取<p>短信回执的运营商错误码，原样透传。成功为 DELIVRD。失败为运营商原始码，如 EXPIRED、UNDELIV、MK:0001、MK:0012、24、29。电话为空。</p>
                     * @return DeliverErrMsg <p>短信回执的运营商错误码，原样透传。成功为 DELIVRD。失败为运营商原始码，如 EXPIRED、UNDELIV、MK:0001、MK:0012、24、29。电话为空。</p>
                     * 
                     */
                    std::string GetDeliverErrMsg() const;

                    /**
                     * 设置<p>短信回执的运营商错误码，原样透传。成功为 DELIVRD。失败为运营商原始码，如 EXPIRED、UNDELIV、MK:0001、MK:0012、24、29。电话为空。</p>
                     * @param _deliverErrMsg <p>短信回执的运营商错误码，原样透传。成功为 DELIVRD。失败为运营商原始码，如 EXPIRED、UNDELIV、MK:0001、MK:0012、24、29。电话为空。</p>
                     * 
                     */
                    void SetDeliverErrMsg(const std::string& _deliverErrMsg);

                    /**
                     * 判断参数 DeliverErrMsg 是否已赋值
                     * @return DeliverErrMsg 是否已赋值
                     * 
                     */
                    bool DeliverErrMsgHasBeenSet() const;

                private:

                    /**
                     * <p>本段正文所属的渠道或子渠道全名</p><p>枚举值：</p><ul><li>QCloudYehe_site： 腾讯云野鹤，站内信</li><li>QCloudYehe_email： 腾讯云野鹤，电子邮件</li><li>QCloudYehe_sms： 腾讯云野鹤，短信</li><li>QCloudYehe_wechat： 腾讯云野鹤，微信</li><li>QCloudYehe_voice： 腾讯云野鹤，语音</li><li>QCloudYehe_qywx： 腾讯云野鹤，企业微信</li><li>QCloudYehe_andon： 腾讯云野鹤，安灯</li><li>TOF_weWorkMessage： TOF，企业微信消息</li><li>TOF_email： TOF，企业邮箱</li><li>TOF_phoneCall： TOF，电话</li><li>WeWork： 企业微信机器人</li><li>WebHook： 自定义 WebHook</li><li>FeiShu： 飞书</li><li>DingDing： 钉钉</li><li>Slack： Slack</li><li>GoogleChat： Google Chat</li><li>Teams： Teams</li><li>TeamsWorkflow： Teams Workflow</li><li>PagerDuty： PagerDuty</li><li>CLS： 日志服务 CLS</li><li>AS： 弹性伸缩</li><li>TCSYehe： TCS 野鹤。正文的 SubChannel 取渠道名本身</li><li>SCF： 云函数。不返回 Contents</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subChannel;
                    bool m_subChannelHasBeenSet;

                    /**
                     * <p>该渠道实际发送的消息正文，由 Ark 按写时捕获的内容还原</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>短信：SUCCESS / FAIL。电话：ANSWERED / UNANSWERED / ABNORMAL</p><p>枚举值：</p><ul><li>SUCCESS： 短信已送达</li><li>FAIL： 短信送达失败</li><li>ANSWERED： 电话已接听</li><li>UNANSWERED： 电话未接听</li><li>ABNORMAL： 电话拨打异常</li></ul>
                     */
                    std::string m_deliverStatus;
                    bool m_deliverStatusHasBeenSet;

                    /**
                     * <p>原始时间字符串，不做时区转换。短信是收到时间；电话只在接听时有值</p><p>参数格式：短信为 YYYY-MM-DD hh:mm:ss，例如 2026-08-05 18:04:46。电话为 Unix 秒级时间戳的数字字符串，仅接听时有值，例如 1717824258。空字符串表示没有时间。</p>
                     */
                    std::string m_deliverTime;
                    bool m_deliverTimeHasBeenSet;

                    /**
                     * <p>短信回执的运营商错误码，原样透传。成功为 DELIVRD。失败为运营商原始码，如 EXPIRED、UNDELIV、MK:0001、MK:0012、24、29。电话为空。</p>
                     */
                    std::string m_deliverErrMsg;
                    bool m_deliverErrMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_CHANNELCONTENT_H_
