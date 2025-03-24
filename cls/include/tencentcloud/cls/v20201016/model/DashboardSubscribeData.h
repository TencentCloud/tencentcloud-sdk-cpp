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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DASHBOARDSUBSCRIBEDATA_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DASHBOARDSUBSCRIBEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/DashboardNoticeMode.h>
#include <tencentcloud/cls/v20201016/model/DashboardTemplateVariable.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 仪表盘订阅相关数据
                */
                class DashboardSubscribeData : public AbstractModel
                {
                public:
                    DashboardSubscribeData();
                    ~DashboardSubscribeData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取仪表盘订阅通知方式。
                     * @return NoticeModes 仪表盘订阅通知方式。
                     * 
                     */
                    std::vector<DashboardNoticeMode> GetNoticeModes() const;

                    /**
                     * 设置仪表盘订阅通知方式。
                     * @param _noticeModes 仪表盘订阅通知方式。
                     * 
                     */
                    void SetNoticeModes(const std::vector<DashboardNoticeMode>& _noticeModes);

                    /**
                     * 判断参数 NoticeModes 是否已赋值
                     * @return NoticeModes 是否已赋值
                     * 
                     */
                    bool NoticeModesHasBeenSet() const;

                    /**
                     * 获取仪表盘订阅时间，为空标识取仪表盘默认的时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DashboardTime 仪表盘订阅时间，为空标识取仪表盘默认的时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDashboardTime() const;

                    /**
                     * 设置仪表盘订阅时间，为空标识取仪表盘默认的时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dashboardTime 仪表盘订阅时间，为空标识取仪表盘默认的时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDashboardTime(const std::vector<std::string>& _dashboardTime);

                    /**
                     * 判断参数 DashboardTime 是否已赋值
                     * @return DashboardTime 是否已赋值
                     * 
                     */
                    bool DashboardTimeHasBeenSet() const;

                    /**
                     * 获取仪表盘订阅模板变量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateVariables 仪表盘订阅模板变量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DashboardTemplateVariable> GetTemplateVariables() const;

                    /**
                     * 设置仪表盘订阅模板变量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _templateVariables 仪表盘订阅模板变量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTemplateVariables(const std::vector<DashboardTemplateVariable>& _templateVariables);

                    /**
                     * 判断参数 TemplateVariables 是否已赋值
                     * @return TemplateVariables 是否已赋值
                     * 
                     */
                    bool TemplateVariablesHasBeenSet() const;

                    /**
                     * 获取时区。参考：https://en.wikipedia.org/wiki/List_of_tz_database_time_zones#SHANGHAI
                     * @return Timezone 时区。参考：https://en.wikipedia.org/wiki/List_of_tz_database_time_zones#SHANGHAI
                     * 
                     */
                    std::string GetTimezone() const;

                    /**
                     * 设置时区。参考：https://en.wikipedia.org/wiki/List_of_tz_database_time_zones#SHANGHAI
                     * @param _timezone 时区。参考：https://en.wikipedia.org/wiki/List_of_tz_database_time_zones#SHANGHAI
                     * 
                     */
                    void SetTimezone(const std::string& _timezone);

                    /**
                     * 判断参数 Timezone 是否已赋值
                     * @return Timezone 是否已赋值
                     * 
                     */
                    bool TimezoneHasBeenSet() const;

                    /**
                     * 获取语言。 zh 中文、en`英文。
                     * @return SubscribeLanguage 语言。 zh 中文、en`英文。
                     * 
                     */
                    std::string GetSubscribeLanguage() const;

                    /**
                     * 设置语言。 zh 中文、en`英文。
                     * @param _subscribeLanguage 语言。 zh 中文、en`英文。
                     * 
                     */
                    void SetSubscribeLanguage(const std::string& _subscribeLanguage);

                    /**
                     * 判断参数 SubscribeLanguage 是否已赋值
                     * @return SubscribeLanguage 是否已赋值
                     * 
                     */
                    bool SubscribeLanguageHasBeenSet() const;

                    /**
                     * 获取调用链接域名。http:// 或者 https:// 开头，不能/结尾
                     * @return JumpDomain 调用链接域名。http:// 或者 https:// 开头，不能/结尾
                     * 
                     */
                    std::string GetJumpDomain() const;

                    /**
                     * 设置调用链接域名。http:// 或者 https:// 开头，不能/结尾
                     * @param _jumpDomain 调用链接域名。http:// 或者 https:// 开头，不能/结尾
                     * 
                     */
                    void SetJumpDomain(const std::string& _jumpDomain);

                    /**
                     * 判断参数 JumpDomain 是否已赋值
                     * @return JumpDomain 是否已赋值
                     * 
                     */
                    bool JumpDomainHasBeenSet() const;

                    /**
                     * 获取自定义跳转链接。
                     * @return JumpUrl 自定义跳转链接。
                     * 
                     */
                    std::string GetJumpUrl() const;

                    /**
                     * 设置自定义跳转链接。
                     * @param _jumpUrl 自定义跳转链接。
                     * 
                     */
                    void SetJumpUrl(const std::string& _jumpUrl);

                    /**
                     * 判断参数 JumpUrl 是否已赋值
                     * @return JumpUrl 是否已赋值
                     * 
                     */
                    bool JumpUrlHasBeenSet() const;

                private:

                    /**
                     * 仪表盘订阅通知方式。
                     */
                    std::vector<DashboardNoticeMode> m_noticeModes;
                    bool m_noticeModesHasBeenSet;

                    /**
                     * 仪表盘订阅时间，为空标识取仪表盘默认的时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_dashboardTime;
                    bool m_dashboardTimeHasBeenSet;

                    /**
                     * 仪表盘订阅模板变量。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DashboardTemplateVariable> m_templateVariables;
                    bool m_templateVariablesHasBeenSet;

                    /**
                     * 时区。参考：https://en.wikipedia.org/wiki/List_of_tz_database_time_zones#SHANGHAI
                     */
                    std::string m_timezone;
                    bool m_timezoneHasBeenSet;

                    /**
                     * 语言。 zh 中文、en`英文。
                     */
                    std::string m_subscribeLanguage;
                    bool m_subscribeLanguageHasBeenSet;

                    /**
                     * 调用链接域名。http:// 或者 https:// 开头，不能/结尾
                     */
                    std::string m_jumpDomain;
                    bool m_jumpDomainHasBeenSet;

                    /**
                     * 自定义跳转链接。
                     */
                    std::string m_jumpUrl;
                    bool m_jumpUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DASHBOARDSUBSCRIBEDATA_H_
