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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ALARMGROUP_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ALARMGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 告警组
                */
                class AlarmGroup : public AbstractModel
                {
                public:
                    AlarmGroup();
                    ~AlarmGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>通知渠道ID，可通过基础平台通知渠道相关接口获取</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelId <p>通知渠道ID，可通过基础平台通知渠道相关接口获取</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置<p>通知渠道ID，可通过基础平台通知渠道相关接口获取</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelId <p>通知渠道ID，可通过基础平台通知渠道相关接口获取</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取<p>通知渠道名称，可以是用户组名称或邮箱地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelName <p>通知渠道名称，可以是用户组名称或邮箱地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置<p>通知渠道名称，可以是用户组名称或邮箱地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelName <p>通知渠道名称，可以是用户组名称或邮箱地址</p>
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
                     * 获取<p>是否启用邮件渠道，默认值：false</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsEmailChannel <p>是否启用邮件渠道，默认值：false</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsEmailChannel() const;

                    /**
                     * 设置<p>是否启用邮件渠道，默认值：false</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isEmailChannel <p>是否启用邮件渠道，默认值：false</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsEmailChannel(const bool& _isEmailChannel);

                    /**
                     * 判断参数 IsEmailChannel 是否已赋值
                     * @return IsEmailChannel 是否已赋值
                     * 
                     */
                    bool IsEmailChannelHasBeenSet() const;

                    /**
                     * 获取<p>告警条件列表。取值：<br>START：启动<br>SUCCESS：成功<br>FAILURE：失败<br>MONITOR_INDICATOR_ALARM：监控指标告警</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmConditions <p>告警条件列表。取值：<br>START：启动<br>SUCCESS：成功<br>FAILURE：失败<br>MONITOR_INDICATOR_ALARM：监控指标告警</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAlarmConditions() const;

                    /**
                     * 设置<p>告警条件列表。取值：<br>START：启动<br>SUCCESS：成功<br>FAILURE：失败<br>MONITOR_INDICATOR_ALARM：监控指标告警</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmConditions <p>告警条件列表。取值：<br>START：启动<br>SUCCESS：成功<br>FAILURE：失败<br>MONITOR_INDICATOR_ALARM：监控指标告警</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmConditions(const std::vector<std::string>& _alarmConditions);

                    /**
                     * 判断参数 AlarmConditions 是否已赋值
                     * @return AlarmConditions 是否已赋值
                     * 
                     */
                    bool AlarmConditionsHasBeenSet() const;

                    /**
                     * 获取<p>通知渠道类型。取值：0 未指定，1 Email，2 Webhook，3 Teams，4 Slack</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelType <p>通知渠道类型。取值：0 未指定，1 Email，2 Webhook，3 Teams，4 Slack</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetChannelType() const;

                    /**
                     * 设置<p>通知渠道类型。取值：0 未指定，1 Email，2 Webhook，3 Teams，4 Slack</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelType <p>通知渠道类型。取值：0 未指定，1 Email，2 Webhook，3 Teams，4 Slack</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannelType(const int64_t& _channelType);

                    /**
                     * 判断参数 ChannelType 是否已赋值
                     * @return ChannelType 是否已赋值
                     * 
                     */
                    bool ChannelTypeHasBeenSet() const;

                private:

                    /**
                     * <p>通知渠道ID，可通过基础平台通知渠道相关接口获取</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * <p>通知渠道名称，可以是用户组名称或邮箱地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * <p>是否启用邮件渠道，默认值：false</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isEmailChannel;
                    bool m_isEmailChannelHasBeenSet;

                    /**
                     * <p>告警条件列表。取值：<br>START：启动<br>SUCCESS：成功<br>FAILURE：失败<br>MONITOR_INDICATOR_ALARM：监控指标告警</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_alarmConditions;
                    bool m_alarmConditionsHasBeenSet;

                    /**
                     * <p>通知渠道类型。取值：0 未指定，1 Email，2 Webhook，3 Teams，4 Slack</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_channelType;
                    bool m_channelTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ALARMGROUP_H_
