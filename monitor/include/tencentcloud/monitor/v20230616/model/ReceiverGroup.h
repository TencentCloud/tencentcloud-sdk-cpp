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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_RECEIVERGROUP_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_RECEIVERGROUP_H_

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
                * 承载消息接收人/组明细
                */
                class ReceiverGroup : public AbstractModel
                {
                public:
                    ReceiverGroup();
                    ~ReceiverGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>本条发送规则的接收者类型</p><p>枚举值：</p><ul><li>UIDs： 按用户 UID</li><li>UINs： 按账号 UIN</li><li>Group： 按用户分组。ReceiverIds 为分组 ID</li><li>Oncall： 按值班表，且未被发送时的真实接收人覆盖</li><li>RtxName： 发送时解析出的员工 RTX 英文名</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReceiverType <p>本条发送规则的接收者类型</p><p>枚举值：</p><ul><li>UIDs： 按用户 UID</li><li>UINs： 按账号 UIN</li><li>Group： 按用户分组。ReceiverIds 为分组 ID</li><li>Oncall： 按值班表，且未被发送时的真实接收人覆盖</li><li>RtxName： 发送时解析出的员工 RTX 英文名</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReceiverType() const;

                    /**
                     * 设置<p>本条发送规则的接收者类型</p><p>枚举值：</p><ul><li>UIDs： 按用户 UID</li><li>UINs： 按账号 UIN</li><li>Group： 按用户分组。ReceiverIds 为分组 ID</li><li>Oncall： 按值班表，且未被发送时的真实接收人覆盖</li><li>RtxName： 发送时解析出的员工 RTX 英文名</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _receiverType <p>本条发送规则的接收者类型</p><p>枚举值：</p><ul><li>UIDs： 按用户 UID</li><li>UINs： 按账号 UIN</li><li>Group： 按用户分组。ReceiverIds 为分组 ID</li><li>Oncall： 按值班表，且未被发送时的真实接收人覆盖</li><li>RtxName： 发送时解析出的员工 RTX 英文名</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReceiverType(const std::string& _receiverType);

                    /**
                     * 判断参数 ReceiverType 是否已赋值
                     * @return ReceiverType 是否已赋值
                     * 
                     */
                    bool ReceiverTypeHasBeenSet() const;

                    /**
                     * 获取<p>本条规则配置的原始接收者 ID 列表。具体是哪一种 ID，由 ReceiverType 决定</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReceiverIds <p>本条规则配置的原始接收者 ID 列表。具体是哪一种 ID，由 ReceiverType 决定</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetReceiverIds() const;

                    /**
                     * 设置<p>本条规则配置的原始接收者 ID 列表。具体是哪一种 ID，由 ReceiverType 决定</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _receiverIds <p>本条规则配置的原始接收者 ID 列表。具体是哪一种 ID，由 ReceiverType 决定</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReceiverIds(const std::vector<std::string>& _receiverIds);

                    /**
                     * 判断参数 ReceiverIds 是否已赋值
                     * @return ReceiverIds 是否已赋值
                     * 
                     */
                    bool ReceiverIdsHasBeenSet() const;

                    /**
                     * 获取<p>接收者展示名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Names <p>接收者展示名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetNames() const;

                    /**
                     * 设置<p>接收者展示名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _names <p>接收者展示名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNames(const std::vector<std::string>& _names);

                    /**
                     * 判断参数 Names 是否已赋值
                     * @return Names 是否已赋值
                     * 
                     */
                    bool NamesHasBeenSet() const;

                    /**
                     * 获取<p>用户分组展开后的成员用户 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemberIds <p>用户分组展开后的成员用户 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetMemberIds() const;

                    /**
                     * 设置<p>用户分组展开后的成员用户 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memberIds <p>用户分组展开后的成员用户 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemberIds(const std::vector<std::string>& _memberIds);

                    /**
                     * 判断参数 MemberIds 是否已赋值
                     * @return MemberIds 是否已赋值
                     * 
                     */
                    bool MemberIdsHasBeenSet() const;

                    /**
                     * 获取<p>该规则允许通知的星期。语义与 time.Weekday 一致</p><p>枚举值：</p><ul><li>0： 周日</li><li>1： 周一</li><li>2： 周二</li><li>3： 周三</li><li>4： 周四</li><li>5： 周五</li><li>6： 周六</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WeekDay <p>该规则允许通知的星期。语义与 time.Weekday 一致</p><p>枚举值：</p><ul><li>0： 周日</li><li>1： 周一</li><li>2： 周二</li><li>3： 周三</li><li>4： 周四</li><li>5： 周五</li><li>6： 周六</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetWeekDay() const;

                    /**
                     * 设置<p>该规则允许通知的星期。语义与 time.Weekday 一致</p><p>枚举值：</p><ul><li>0： 周日</li><li>1： 周一</li><li>2： 周二</li><li>3： 周三</li><li>4： 周四</li><li>5： 周五</li><li>6： 周六</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weekDay <p>该规则允许通知的星期。语义与 time.Weekday 一致</p><p>枚举值：</p><ul><li>0： 周日</li><li>1： 周一</li><li>2： 周二</li><li>3： 周三</li><li>4： 周四</li><li>5： 周五</li><li>6： 周六</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWeekDay(const std::vector<int64_t>& _weekDay);

                    /**
                     * 判断参数 WeekDay 是否已赋值
                     * @return WeekDay 是否已赋值
                     * 
                     */
                    bool WeekDayHasBeenSet() const;

                    /**
                     * 获取<p>通知时段相对当日零点的秒数偏移，需配合 TimeZoneName 解读</p><p>单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DayStartSeconds <p>通知时段相对当日零点的秒数偏移，需配合 TimeZoneName 解读</p><p>单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDayStartSeconds() const;

                    /**
                     * 设置<p>通知时段相对当日零点的秒数偏移，需配合 TimeZoneName 解读</p><p>单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dayStartSeconds <p>通知时段相对当日零点的秒数偏移，需配合 TimeZoneName 解读</p><p>单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDayStartSeconds(const int64_t& _dayStartSeconds);

                    /**
                     * 判断参数 DayStartSeconds 是否已赋值
                     * @return DayStartSeconds 是否已赋值
                     * 
                     */
                    bool DayStartSecondsHasBeenSet() const;

                    /**
                     * 获取<p>通知时段相对当日零点的秒数偏移，需配合 TimeZoneName 解读</p><p>单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DayEndSeconds <p>通知时段相对当日零点的秒数偏移，需配合 TimeZoneName 解读</p><p>单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDayEndSeconds() const;

                    /**
                     * 设置<p>通知时段相对当日零点的秒数偏移，需配合 TimeZoneName 解读</p><p>单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dayEndSeconds <p>通知时段相对当日零点的秒数偏移，需配合 TimeZoneName 解读</p><p>单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDayEndSeconds(const int64_t& _dayEndSeconds);

                    /**
                     * 判断参数 DayEndSeconds 是否已赋值
                     * @return DayEndSeconds 是否已赋值
                     * 
                     */
                    bool DayEndSecondsHasBeenSet() const;

                    /**
                     * 获取<p>DayStartSeconds、DayEndSeconds 所属时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeZoneName <p>DayStartSeconds、DayEndSeconds 所属时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimeZoneName() const;

                    /**
                     * 设置<p>DayStartSeconds、DayEndSeconds 所属时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeZoneName <p>DayStartSeconds、DayEndSeconds 所属时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeZoneName(const std::string& _timeZoneName);

                    /**
                     * 判断参数 TimeZoneName 是否已赋值
                     * @return TimeZoneName 是否已赋值
                     * 
                     */
                    bool TimeZoneNameHasBeenSet() const;

                    /**
                     * 获取<p>该规则实际发送的接收渠道全名列表</p><p>枚举值：</p><ul><li>QCloudYehe_site： 腾讯云野鹤，站内信</li><li>QCloudYehe_email： 腾讯云野鹤，电子邮件</li><li>QCloudYehe_sms： 腾讯云野鹤，短信</li><li>QCloudYehe_wechat： 腾讯云野鹤，微信</li><li>QCloudYehe_voice： 腾讯云野鹤，语音</li><li>QCloudYehe_qywx： 腾讯云野鹤，企业微信</li><li>QCloudYehe_andon： 腾讯云野鹤，安灯</li><li>TOF_weWorkMessage： TOF，企业微信消息</li><li>TOF_email： TOF，企业邮箱</li><li>TOF_phoneCall： TOF，电话</li><li>WeWork： 企业微信机器人</li><li>WebHook： 自定义 WebHook</li><li>FeiShu： 飞书</li><li>DingDing： 钉钉</li><li>Slack： Slack</li><li>GoogleChat： Google Chat</li><li>Teams： Teams</li><li>TeamsWorkflow： Teams Workflow</li><li>PagerDuty： PagerDuty</li><li>CLS： 日志服务 CLS</li><li>AS： 弹性伸缩</li><li>TCSYehe： TCS 野鹤。正文的 SubChannel 取渠道名本身</li><li>SCF： 云函数。不返回 Contents</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelNames <p>该规则实际发送的接收渠道全名列表</p><p>枚举值：</p><ul><li>QCloudYehe_site： 腾讯云野鹤，站内信</li><li>QCloudYehe_email： 腾讯云野鹤，电子邮件</li><li>QCloudYehe_sms： 腾讯云野鹤，短信</li><li>QCloudYehe_wechat： 腾讯云野鹤，微信</li><li>QCloudYehe_voice： 腾讯云野鹤，语音</li><li>QCloudYehe_qywx： 腾讯云野鹤，企业微信</li><li>QCloudYehe_andon： 腾讯云野鹤，安灯</li><li>TOF_weWorkMessage： TOF，企业微信消息</li><li>TOF_email： TOF，企业邮箱</li><li>TOF_phoneCall： TOF，电话</li><li>WeWork： 企业微信机器人</li><li>WebHook： 自定义 WebHook</li><li>FeiShu： 飞书</li><li>DingDing： 钉钉</li><li>Slack： Slack</li><li>GoogleChat： Google Chat</li><li>Teams： Teams</li><li>TeamsWorkflow： Teams Workflow</li><li>PagerDuty： PagerDuty</li><li>CLS： 日志服务 CLS</li><li>AS： 弹性伸缩</li><li>TCSYehe： TCS 野鹤。正文的 SubChannel 取渠道名本身</li><li>SCF： 云函数。不返回 Contents</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetChannelNames() const;

                    /**
                     * 设置<p>该规则实际发送的接收渠道全名列表</p><p>枚举值：</p><ul><li>QCloudYehe_site： 腾讯云野鹤，站内信</li><li>QCloudYehe_email： 腾讯云野鹤，电子邮件</li><li>QCloudYehe_sms： 腾讯云野鹤，短信</li><li>QCloudYehe_wechat： 腾讯云野鹤，微信</li><li>QCloudYehe_voice： 腾讯云野鹤，语音</li><li>QCloudYehe_qywx： 腾讯云野鹤，企业微信</li><li>QCloudYehe_andon： 腾讯云野鹤，安灯</li><li>TOF_weWorkMessage： TOF，企业微信消息</li><li>TOF_email： TOF，企业邮箱</li><li>TOF_phoneCall： TOF，电话</li><li>WeWork： 企业微信机器人</li><li>WebHook： 自定义 WebHook</li><li>FeiShu： 飞书</li><li>DingDing： 钉钉</li><li>Slack： Slack</li><li>GoogleChat： Google Chat</li><li>Teams： Teams</li><li>TeamsWorkflow： Teams Workflow</li><li>PagerDuty： PagerDuty</li><li>CLS： 日志服务 CLS</li><li>AS： 弹性伸缩</li><li>TCSYehe： TCS 野鹤。正文的 SubChannel 取渠道名本身</li><li>SCF： 云函数。不返回 Contents</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelNames <p>该规则实际发送的接收渠道全名列表</p><p>枚举值：</p><ul><li>QCloudYehe_site： 腾讯云野鹤，站内信</li><li>QCloudYehe_email： 腾讯云野鹤，电子邮件</li><li>QCloudYehe_sms： 腾讯云野鹤，短信</li><li>QCloudYehe_wechat： 腾讯云野鹤，微信</li><li>QCloudYehe_voice： 腾讯云野鹤，语音</li><li>QCloudYehe_qywx： 腾讯云野鹤，企业微信</li><li>QCloudYehe_andon： 腾讯云野鹤，安灯</li><li>TOF_weWorkMessage： TOF，企业微信消息</li><li>TOF_email： TOF，企业邮箱</li><li>TOF_phoneCall： TOF，电话</li><li>WeWork： 企业微信机器人</li><li>WebHook： 自定义 WebHook</li><li>FeiShu： 飞书</li><li>DingDing： 钉钉</li><li>Slack： Slack</li><li>GoogleChat： Google Chat</li><li>Teams： Teams</li><li>TeamsWorkflow： Teams Workflow</li><li>PagerDuty： PagerDuty</li><li>CLS： 日志服务 CLS</li><li>AS： 弹性伸缩</li><li>TCSYehe： TCS 野鹤。正文的 SubChannel 取渠道名本身</li><li>SCF： 云函数。不返回 Contents</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannelNames(const std::vector<std::string>& _channelNames);

                    /**
                     * 判断参数 ChannelNames 是否已赋值
                     * @return ChannelNames 是否已赋值
                     * 
                     */
                    bool ChannelNamesHasBeenSet() const;

                private:

                    /**
                     * <p>本条发送规则的接收者类型</p><p>枚举值：</p><ul><li>UIDs： 按用户 UID</li><li>UINs： 按账号 UIN</li><li>Group： 按用户分组。ReceiverIds 为分组 ID</li><li>Oncall： 按值班表，且未被发送时的真实接收人覆盖</li><li>RtxName： 发送时解析出的员工 RTX 英文名</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_receiverType;
                    bool m_receiverTypeHasBeenSet;

                    /**
                     * <p>本条规则配置的原始接收者 ID 列表。具体是哪一种 ID，由 ReceiverType 决定</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_receiverIds;
                    bool m_receiverIdsHasBeenSet;

                    /**
                     * <p>接收者展示名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_names;
                    bool m_namesHasBeenSet;

                    /**
                     * <p>用户分组展开后的成员用户 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_memberIds;
                    bool m_memberIdsHasBeenSet;

                    /**
                     * <p>该规则允许通知的星期。语义与 time.Weekday 一致</p><p>枚举值：</p><ul><li>0： 周日</li><li>1： 周一</li><li>2： 周二</li><li>3： 周三</li><li>4： 周四</li><li>5： 周五</li><li>6： 周六</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_weekDay;
                    bool m_weekDayHasBeenSet;

                    /**
                     * <p>通知时段相对当日零点的秒数偏移，需配合 TimeZoneName 解读</p><p>单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dayStartSeconds;
                    bool m_dayStartSecondsHasBeenSet;

                    /**
                     * <p>通知时段相对当日零点的秒数偏移，需配合 TimeZoneName 解读</p><p>单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dayEndSeconds;
                    bool m_dayEndSecondsHasBeenSet;

                    /**
                     * <p>DayStartSeconds、DayEndSeconds 所属时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timeZoneName;
                    bool m_timeZoneNameHasBeenSet;

                    /**
                     * <p>该规则实际发送的接收渠道全名列表</p><p>枚举值：</p><ul><li>QCloudYehe_site： 腾讯云野鹤，站内信</li><li>QCloudYehe_email： 腾讯云野鹤，电子邮件</li><li>QCloudYehe_sms： 腾讯云野鹤，短信</li><li>QCloudYehe_wechat： 腾讯云野鹤，微信</li><li>QCloudYehe_voice： 腾讯云野鹤，语音</li><li>QCloudYehe_qywx： 腾讯云野鹤，企业微信</li><li>QCloudYehe_andon： 腾讯云野鹤，安灯</li><li>TOF_weWorkMessage： TOF，企业微信消息</li><li>TOF_email： TOF，企业邮箱</li><li>TOF_phoneCall： TOF，电话</li><li>WeWork： 企业微信机器人</li><li>WebHook： 自定义 WebHook</li><li>FeiShu： 飞书</li><li>DingDing： 钉钉</li><li>Slack： Slack</li><li>GoogleChat： Google Chat</li><li>Teams： Teams</li><li>TeamsWorkflow： Teams Workflow</li><li>PagerDuty： PagerDuty</li><li>CLS： 日志服务 CLS</li><li>AS： 弹性伸缩</li><li>TCSYehe： TCS 野鹤。正文的 SubChannel 取渠道名本身</li><li>SCF： 云函数。不返回 Contents</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_channelNames;
                    bool m_channelNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_RECEIVERGROUP_H_
