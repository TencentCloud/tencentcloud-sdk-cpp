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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_NOTICECONTENTTMPLITEM_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_NOTICECONTENTTMPLITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/QCloudYeheNoticeTmplMatcher.h>
#include <tencentcloud/monitor/v20230616/model/WeWorkRobotNoticeTmplMatcher.h>
#include <tencentcloud/monitor/v20230616/model/DingDingRobotNoticeTmplMatcher.h>
#include <tencentcloud/monitor/v20230616/model/FeiShuRobotNoticeTmplMatcher.h>
#include <tencentcloud/monitor/v20230616/model/WebhookNoticeTmplMatcher.h>
#include <tencentcloud/monitor/v20230616/model/TeamsRobotNoticeTmplMatcher.h>
#include <tencentcloud/monitor/v20230616/model/PagerDutyRobotNoticeTmplMatcher.h>
#include <tencentcloud/monitor/v20230616/model/GoogleChatRobotNoticeTmplMatcher.h>
#include <tencentcloud/monitor/v20230616/model/SlackRobotNoticeTmplMatcher.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * 内容通知模板元素
                */
                class NoticeContentTmplItem : public AbstractModel
                {
                public:
                    NoticeContentTmplItem();
                    ~NoticeContentTmplItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>官网通知渠道配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QCloudYehe <p>官网通知渠道配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<QCloudYeheNoticeTmplMatcher> GetQCloudYehe() const;

                    /**
                     * 设置<p>官网通知渠道配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qCloudYehe <p>官网通知渠道配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQCloudYehe(const std::vector<QCloudYeheNoticeTmplMatcher>& _qCloudYehe);

                    /**
                     * 判断参数 QCloudYehe 是否已赋值
                     * @return QCloudYehe 是否已赋值
                     * 
                     */
                    bool QCloudYeheHasBeenSet() const;

                    /**
                     * 获取<p>企业微信机器人通知渠道配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WeWorkRobot <p>企业微信机器人通知渠道配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<WeWorkRobotNoticeTmplMatcher> GetWeWorkRobot() const;

                    /**
                     * 设置<p>企业微信机器人通知渠道配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weWorkRobot <p>企业微信机器人通知渠道配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWeWorkRobot(const std::vector<WeWorkRobotNoticeTmplMatcher>& _weWorkRobot);

                    /**
                     * 判断参数 WeWorkRobot 是否已赋值
                     * @return WeWorkRobot 是否已赋值
                     * 
                     */
                    bool WeWorkRobotHasBeenSet() const;

                    /**
                     * 获取<p>钉钉机器人通知渠道配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DingDingRobot <p>钉钉机器人通知渠道配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DingDingRobotNoticeTmplMatcher> GetDingDingRobot() const;

                    /**
                     * 设置<p>钉钉机器人通知渠道配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dingDingRobot <p>钉钉机器人通知渠道配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDingDingRobot(const std::vector<DingDingRobotNoticeTmplMatcher>& _dingDingRobot);

                    /**
                     * 判断参数 DingDingRobot 是否已赋值
                     * @return DingDingRobot 是否已赋值
                     * 
                     */
                    bool DingDingRobotHasBeenSet() const;

                    /**
                     * 获取<p>飞书机器人通知渠道配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FeiShuRobot <p>飞书机器人通知渠道配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FeiShuRobotNoticeTmplMatcher> GetFeiShuRobot() const;

                    /**
                     * 设置<p>飞书机器人通知渠道配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _feiShuRobot <p>飞书机器人通知渠道配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFeiShuRobot(const std::vector<FeiShuRobotNoticeTmplMatcher>& _feiShuRobot);

                    /**
                     * 判断参数 FeiShuRobot 是否已赋值
                     * @return FeiShuRobot 是否已赋值
                     * 
                     */
                    bool FeiShuRobotHasBeenSet() const;

                    /**
                     * 获取<p>自定义Webhook通知渠道配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Webhook <p>自定义Webhook通知渠道配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<WebhookNoticeTmplMatcher> GetWebhook() const;

                    /**
                     * 设置<p>自定义Webhook通知渠道配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _webhook <p>自定义Webhook通知渠道配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWebhook(const std::vector<WebhookNoticeTmplMatcher>& _webhook);

                    /**
                     * 判断参数 Webhook 是否已赋值
                     * @return Webhook 是否已赋值
                     * 
                     */
                    bool WebhookHasBeenSet() const;

                    /**
                     * 获取<p>Teams机器人通知渠道配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TeamsRobot <p>Teams机器人通知渠道配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TeamsRobotNoticeTmplMatcher> GetTeamsRobot() const;

                    /**
                     * 设置<p>Teams机器人通知渠道配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _teamsRobot <p>Teams机器人通知渠道配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTeamsRobot(const std::vector<TeamsRobotNoticeTmplMatcher>& _teamsRobot);

                    /**
                     * 判断参数 TeamsRobot 是否已赋值
                     * @return TeamsRobot 是否已赋值
                     * 
                     */
                    bool TeamsRobotHasBeenSet() const;

                    /**
                     * 获取<p>PagerDutyRobot机器人通知渠道配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PagerDutyRobot <p>PagerDutyRobot机器人通知渠道配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PagerDutyRobotNoticeTmplMatcher> GetPagerDutyRobot() const;

                    /**
                     * 设置<p>PagerDutyRobot机器人通知渠道配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pagerDutyRobot <p>PagerDutyRobot机器人通知渠道配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPagerDutyRobot(const std::vector<PagerDutyRobotNoticeTmplMatcher>& _pagerDutyRobot);

                    /**
                     * 判断参数 PagerDutyRobot 是否已赋值
                     * @return PagerDutyRobot 是否已赋值
                     * 
                     */
                    bool PagerDutyRobotHasBeenSet() const;

                    /**
                     * 获取<p>GoogleChat</p>
                     * @return GoogleChatRobot <p>GoogleChat</p>
                     * 
                     */
                    std::vector<GoogleChatRobotNoticeTmplMatcher> GetGoogleChatRobot() const;

                    /**
                     * 设置<p>GoogleChat</p>
                     * @param _googleChatRobot <p>GoogleChat</p>
                     * 
                     */
                    void SetGoogleChatRobot(const std::vector<GoogleChatRobotNoticeTmplMatcher>& _googleChatRobot);

                    /**
                     * 判断参数 GoogleChatRobot 是否已赋值
                     * @return GoogleChatRobot 是否已赋值
                     * 
                     */
                    bool GoogleChatRobotHasBeenSet() const;

                    /**
                     * 获取<p>Slack</p>
                     * @return SlackRobot <p>Slack</p>
                     * 
                     */
                    std::vector<SlackRobotNoticeTmplMatcher> GetSlackRobot() const;

                    /**
                     * 设置<p>Slack</p>
                     * @param _slackRobot <p>Slack</p>
                     * 
                     */
                    void SetSlackRobot(const std::vector<SlackRobotNoticeTmplMatcher>& _slackRobot);

                    /**
                     * 判断参数 SlackRobot 是否已赋值
                     * @return SlackRobot 是否已赋值
                     * 
                     */
                    bool SlackRobotHasBeenSet() const;

                private:

                    /**
                     * <p>官网通知渠道配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<QCloudYeheNoticeTmplMatcher> m_qCloudYehe;
                    bool m_qCloudYeheHasBeenSet;

                    /**
                     * <p>企业微信机器人通知渠道配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WeWorkRobotNoticeTmplMatcher> m_weWorkRobot;
                    bool m_weWorkRobotHasBeenSet;

                    /**
                     * <p>钉钉机器人通知渠道配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DingDingRobotNoticeTmplMatcher> m_dingDingRobot;
                    bool m_dingDingRobotHasBeenSet;

                    /**
                     * <p>飞书机器人通知渠道配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FeiShuRobotNoticeTmplMatcher> m_feiShuRobot;
                    bool m_feiShuRobotHasBeenSet;

                    /**
                     * <p>自定义Webhook通知渠道配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WebhookNoticeTmplMatcher> m_webhook;
                    bool m_webhookHasBeenSet;

                    /**
                     * <p>Teams机器人通知渠道配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TeamsRobotNoticeTmplMatcher> m_teamsRobot;
                    bool m_teamsRobotHasBeenSet;

                    /**
                     * <p>PagerDutyRobot机器人通知渠道配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PagerDutyRobotNoticeTmplMatcher> m_pagerDutyRobot;
                    bool m_pagerDutyRobotHasBeenSet;

                    /**
                     * <p>GoogleChat</p>
                     */
                    std::vector<GoogleChatRobotNoticeTmplMatcher> m_googleChatRobot;
                    bool m_googleChatRobotHasBeenSet;

                    /**
                     * <p>Slack</p>
                     */
                    std::vector<SlackRobotNoticeTmplMatcher> m_slackRobot;
                    bool m_slackRobotHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_NOTICECONTENTTMPLITEM_H_
