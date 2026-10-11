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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_CHANNELSRECEIVERS_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_CHANNELSRECEIVERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/ChannelContent.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * 接受人详情信息和通知详情页展示
                */
                class ChannelsReceivers : public AbstractModel
                {
                public:
                    ChannelsReceivers();
                    ~ChannelsReceivers() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>通知渠道名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelName <p>通知渠道名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置<p>通知渠道名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelName <p>通知渠道名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取<p>接收者</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Receivers <p>接收者</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetReceivers() const;

                    /**
                     * 设置<p>接收者</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _receivers <p>接收者</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReceivers(const std::vector<std::string>& _receivers);

                    /**
                     * 判断参数 Receivers 是否已赋值
                     * @return Receivers 是否已赋值
                     * 
                     */
                    bool ReceiversHasBeenSet() const;

                    /**
                     * 获取<p>发送结果,0-无效,1-成功,2-失败,3-无需发送</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SendStatus <p>发送结果,0-无效,1-成功,2-失败,3-无需发送</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSendStatus() const;

                    /**
                     * 设置<p>发送结果,0-无效,1-成功,2-失败,3-无需发送</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sendStatus <p>发送结果,0-无效,1-成功,2-失败,3-无需发送</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSendStatus(const std::string& _sendStatus);

                    /**
                     * 判断参数 SendStatus 是否已赋值
                     * @return SendStatus 是否已赋值
                     * 
                     */
                    bool SendStatusHasBeenSet() const;

                    /**
                     * 获取<p>参数定义 渠道返回的原始状态码。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SendStatusCode <p>参数定义 渠道返回的原始状态码。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSendStatusCode() const;

                    /**
                     * 设置<p>参数定义 渠道返回的原始状态码。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sendStatusCode <p>参数定义 渠道返回的原始状态码。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSendStatusCode(const std::string& _sendStatusCode);

                    /**
                     * 判断参数 SendStatusCode 是否已赋值
                     * @return SendStatusCode 是否已赋值
                     * 
                     */
                    bool SendStatusCodeHasBeenSet() const;

                    /**
                     * 获取<p>Ark 发起该渠道调用的时间</p><p>单位：Unix 秒级时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SendTime <p>Ark 发起该渠道调用的时间</p><p>单位：Unix 秒级时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSendTime() const;

                    /**
                     * 设置<p>Ark 发起该渠道调用的时间</p><p>单位：Unix 秒级时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sendTime <p>Ark 发起该渠道调用的时间</p><p>单位：Unix 秒级时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSendTime(const int64_t& _sendTime);

                    /**
                     * 判断参数 SendTime 是否已赋值
                     * @return SendTime 是否已赋值
                     * 
                     */
                    bool SendTimeHasBeenSet() const;

                    /**
                     * 获取<p>该渠道本次实际发送的子渠道全名，格式为 父渠道_子渠道</p><p>枚举值：</p><ul><li>QCloudYehe_site： 腾讯云野鹤，站内信</li><li>QCloudYehe_email： 腾讯云野鹤，电子邮件</li><li>QCloudYehe_sms： 腾讯云野鹤，短信</li><li>QCloudYehe_wechat： 腾讯云野鹤，微信</li><li>QCloudYehe_voice： 腾讯云野鹤，语音</li><li>QCloudYehe_qywx： 腾讯云野鹤，企业微信</li><li>QCloudYehe_andon： 腾讯云野鹤，安灯</li><li>TOF_weWorkMessage： TOF，企业微信消息</li><li>TOF_email： TOF，企业邮箱</li><li>TOF_phoneCall： TOF，电话</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubChannels <p>该渠道本次实际发送的子渠道全名，格式为 父渠道_子渠道</p><p>枚举值：</p><ul><li>QCloudYehe_site： 腾讯云野鹤，站内信</li><li>QCloudYehe_email： 腾讯云野鹤，电子邮件</li><li>QCloudYehe_sms： 腾讯云野鹤，短信</li><li>QCloudYehe_wechat： 腾讯云野鹤，微信</li><li>QCloudYehe_voice： 腾讯云野鹤，语音</li><li>QCloudYehe_qywx： 腾讯云野鹤，企业微信</li><li>QCloudYehe_andon： 腾讯云野鹤，安灯</li><li>TOF_weWorkMessage： TOF，企业微信消息</li><li>TOF_email： TOF，企业邮箱</li><li>TOF_phoneCall： TOF，电话</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSubChannels() const;

                    /**
                     * 设置<p>该渠道本次实际发送的子渠道全名，格式为 父渠道_子渠道</p><p>枚举值：</p><ul><li>QCloudYehe_site： 腾讯云野鹤，站内信</li><li>QCloudYehe_email： 腾讯云野鹤，电子邮件</li><li>QCloudYehe_sms： 腾讯云野鹤，短信</li><li>QCloudYehe_wechat： 腾讯云野鹤，微信</li><li>QCloudYehe_voice： 腾讯云野鹤，语音</li><li>QCloudYehe_qywx： 腾讯云野鹤，企业微信</li><li>QCloudYehe_andon： 腾讯云野鹤，安灯</li><li>TOF_weWorkMessage： TOF，企业微信消息</li><li>TOF_email： TOF，企业邮箱</li><li>TOF_phoneCall： TOF，电话</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subChannels <p>该渠道本次实际发送的子渠道全名，格式为 父渠道_子渠道</p><p>枚举值：</p><ul><li>QCloudYehe_site： 腾讯云野鹤，站内信</li><li>QCloudYehe_email： 腾讯云野鹤，电子邮件</li><li>QCloudYehe_sms： 腾讯云野鹤，短信</li><li>QCloudYehe_wechat： 腾讯云野鹤，微信</li><li>QCloudYehe_voice： 腾讯云野鹤，语音</li><li>QCloudYehe_qywx： 腾讯云野鹤，企业微信</li><li>QCloudYehe_andon： 腾讯云野鹤，安灯</li><li>TOF_weWorkMessage： TOF，企业微信消息</li><li>TOF_email： TOF，企业邮箱</li><li>TOF_phoneCall： TOF，电话</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubChannels(const std::vector<std::string>& _subChannels);

                    /**
                     * 判断参数 SubChannels 是否已赋值
                     * @return SubChannels 是否已赋值
                     * 
                     */
                    bool SubChannelsHasBeenSet() const;

                    /**
                     * 获取<p>该渠道本次执行情况的文字描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecDetail <p>该渠道本次执行情况的文字描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecDetail() const;

                    /**
                     * 设置<p>该渠道本次执行情况的文字描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _execDetail <p>该渠道本次执行情况的文字描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecDetail(const std::string& _execDetail);

                    /**
                     * 判断参数 ExecDetail 是否已赋值
                     * @return ExecDetail 是否已赋值
                     * 
                     */
                    bool ExecDetailHasBeenSet() const;

                    /**
                     * 获取<p>短信真实投递状态，来自野鹤 smsStatus 回调的 reportStatus 原值</p><p>枚举值：</p><ul><li>SUCCESS： 短信已真实送达</li><li>FAIL： 短信真实投递失败，失败原因见 RealDeliverErrMsg</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealDeliverStatus <p>短信真实投递状态，来自野鹤 smsStatus 回调的 reportStatus 原值</p><p>枚举值：</p><ul><li>SUCCESS： 短信已真实送达</li><li>FAIL： 短信真实投递失败，失败原因见 RealDeliverErrMsg</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRealDeliverStatus() const;

                    /**
                     * 设置<p>短信真实投递状态，来自野鹤 smsStatus 回调的 reportStatus 原值</p><p>枚举值：</p><ul><li>SUCCESS： 短信已真实送达</li><li>FAIL： 短信真实投递失败，失败原因见 RealDeliverErrMsg</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _realDeliverStatus <p>短信真实投递状态，来自野鹤 smsStatus 回调的 reportStatus 原值</p><p>枚举值：</p><ul><li>SUCCESS： 短信已真实送达</li><li>FAIL： 短信真实投递失败，失败原因见 RealDeliverErrMsg</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRealDeliverStatus(const std::string& _realDeliverStatus);

                    /**
                     * 判断参数 RealDeliverStatus 是否已赋值
                     * @return RealDeliverStatus 是否已赋值
                     * 
                     */
                    bool RealDeliverStatusHasBeenSet() const;

                    /**
                     * 获取<p>用户真实收到短信的时间，取野鹤回调 userReceiverTime 原文字符串</p><p>参数格式：YYYY-MM-DD HH:mm:ss</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealDeliverTime <p>用户真实收到短信的时间，取野鹤回调 userReceiverTime 原文字符串</p><p>参数格式：YYYY-MM-DD HH:mm:ss</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRealDeliverTime() const;

                    /**
                     * 设置<p>用户真实收到短信的时间，取野鹤回调 userReceiverTime 原文字符串</p><p>参数格式：YYYY-MM-DD HH:mm:ss</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _realDeliverTime <p>用户真实收到短信的时间，取野鹤回调 userReceiverTime 原文字符串</p><p>参数格式：YYYY-MM-DD HH:mm:ss</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRealDeliverTime(const std::string& _realDeliverTime);

                    /**
                     * 判断参数 RealDeliverTime 是否已赋值
                     * @return RealDeliverTime 是否已赋值
                     * 
                     */
                    bool RealDeliverTimeHasBeenSet() const;

                    /**
                     * 获取<p>短信真实投递回执中的结果码，取野鹤回调 errmsg 原值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealDeliverErrMsg <p>短信真实投递回执中的结果码，取野鹤回调 errmsg 原值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRealDeliverErrMsg() const;

                    /**
                     * 设置<p>短信真实投递回执中的结果码，取野鹤回调 errmsg 原值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _realDeliverErrMsg <p>短信真实投递回执中的结果码，取野鹤回调 errmsg 原值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRealDeliverErrMsg(const std::string& _realDeliverErrMsg);

                    /**
                     * 判断参数 RealDeliverErrMsg 是否已赋值
                     * @return RealDeliverErrMsg 是否已赋值
                     * 
                     */
                    bool RealDeliverErrMsgHasBeenSet() const;

                    /**
                     * 获取<p>该渠道下各子渠道的消息正文明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Contents <p>该渠道下各子渠道的消息正文明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ChannelContent> GetContents() const;

                    /**
                     * 设置<p>该渠道下各子渠道的消息正文明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contents <p>该渠道下各子渠道的消息正文明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContents(const std::vector<ChannelContent>& _contents);

                    /**
                     * 判断参数 Contents 是否已赋值
                     * @return Contents 是否已赋值
                     * 
                     */
                    bool ContentsHasBeenSet() const;

                private:

                    /**
                     * <p>通知渠道名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * <p>接收者</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_receivers;
                    bool m_receiversHasBeenSet;

                    /**
                     * <p>发送结果,0-无效,1-成功,2-失败,3-无需发送</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sendStatus;
                    bool m_sendStatusHasBeenSet;

                    /**
                     * <p>参数定义 渠道返回的原始状态码。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sendStatusCode;
                    bool m_sendStatusCodeHasBeenSet;

                    /**
                     * <p>Ark 发起该渠道调用的时间</p><p>单位：Unix 秒级时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sendTime;
                    bool m_sendTimeHasBeenSet;

                    /**
                     * <p>该渠道本次实际发送的子渠道全名，格式为 父渠道_子渠道</p><p>枚举值：</p><ul><li>QCloudYehe_site： 腾讯云野鹤，站内信</li><li>QCloudYehe_email： 腾讯云野鹤，电子邮件</li><li>QCloudYehe_sms： 腾讯云野鹤，短信</li><li>QCloudYehe_wechat： 腾讯云野鹤，微信</li><li>QCloudYehe_voice： 腾讯云野鹤，语音</li><li>QCloudYehe_qywx： 腾讯云野鹤，企业微信</li><li>QCloudYehe_andon： 腾讯云野鹤，安灯</li><li>TOF_weWorkMessage： TOF，企业微信消息</li><li>TOF_email： TOF，企业邮箱</li><li>TOF_phoneCall： TOF，电话</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_subChannels;
                    bool m_subChannelsHasBeenSet;

                    /**
                     * <p>该渠道本次执行情况的文字描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_execDetail;
                    bool m_execDetailHasBeenSet;

                    /**
                     * <p>短信真实投递状态，来自野鹤 smsStatus 回调的 reportStatus 原值</p><p>枚举值：</p><ul><li>SUCCESS： 短信已真实送达</li><li>FAIL： 短信真实投递失败，失败原因见 RealDeliverErrMsg</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_realDeliverStatus;
                    bool m_realDeliverStatusHasBeenSet;

                    /**
                     * <p>用户真实收到短信的时间，取野鹤回调 userReceiverTime 原文字符串</p><p>参数格式：YYYY-MM-DD HH:mm:ss</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_realDeliverTime;
                    bool m_realDeliverTimeHasBeenSet;

                    /**
                     * <p>短信真实投递回执中的结果码，取野鹤回调 errmsg 原值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_realDeliverErrMsg;
                    bool m_realDeliverErrMsgHasBeenSet;

                    /**
                     * <p>该渠道下各子渠道的消息正文明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ChannelContent> m_contents;
                    bool m_contentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_CHANNELSRECEIVERS_H_
