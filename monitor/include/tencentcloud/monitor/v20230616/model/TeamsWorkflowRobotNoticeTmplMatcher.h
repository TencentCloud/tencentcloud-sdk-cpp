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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_TEAMSWORKFLOWROBOTNOTICETMPLMATCHER_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_TEAMSWORKFLOWROBOTNOTICETMPLMATCHER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/TeamsWorkflowRobotNoticeTmpl.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * Microsoft Teams 工作流通知模板的匹配器
                */
                class TeamsWorkflowRobotNoticeTmplMatcher : public AbstractModel
                {
                public:
                    TeamsWorkflowRobotNoticeTmplMatcher();
                    ~TeamsWorkflowRobotNoticeTmplMatcher() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>匹配状态 Invalid; Trigger 告警触发; Recovery 告警恢复</p><p>枚举值：</p><ul><li>Trigger： 告警触发</li><li>Recovery： 告警恢复</li></ul>
                     * @return MatchingStatus <p>匹配状态 Invalid; Trigger 告警触发; Recovery 告警恢复</p><p>枚举值：</p><ul><li>Trigger： 告警触发</li><li>Recovery： 告警恢复</li></ul>
                     * 
                     */
                    std::vector<std::string> GetMatchingStatus() const;

                    /**
                     * 设置<p>匹配状态 Invalid; Trigger 告警触发; Recovery 告警恢复</p><p>枚举值：</p><ul><li>Trigger： 告警触发</li><li>Recovery： 告警恢复</li></ul>
                     * @param _matchingStatus <p>匹配状态 Invalid; Trigger 告警触发; Recovery 告警恢复</p><p>枚举值：</p><ul><li>Trigger： 告警触发</li><li>Recovery： 告警恢复</li></ul>
                     * 
                     */
                    void SetMatchingStatus(const std::vector<std::string>& _matchingStatus);

                    /**
                     * 判断参数 MatchingStatus 是否已赋值
                     * @return MatchingStatus 是否已赋值
                     * 
                     */
                    bool MatchingStatusHasBeenSet() const;

                    /**
                     * 获取<p>模板配置</p>
                     * @return Template <p>模板配置</p>
                     * 
                     */
                    TeamsWorkflowRobotNoticeTmpl GetTemplate() const;

                    /**
                     * 设置<p>模板配置</p>
                     * @param _template <p>模板配置</p>
                     * 
                     */
                    void SetTemplate(const TeamsWorkflowRobotNoticeTmpl& _template);

                    /**
                     * 判断参数 Template 是否已赋值
                     * @return Template 是否已赋值
                     * 
                     */
                    bool TemplateHasBeenSet() const;

                private:

                    /**
                     * <p>匹配状态 Invalid; Trigger 告警触发; Recovery 告警恢复</p><p>枚举值：</p><ul><li>Trigger： 告警触发</li><li>Recovery： 告警恢复</li></ul>
                     */
                    std::vector<std::string> m_matchingStatus;
                    bool m_matchingStatusHasBeenSet;

                    /**
                     * <p>模板配置</p>
                     */
                    TeamsWorkflowRobotNoticeTmpl m_template;
                    bool m_templateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_TEAMSWORKFLOWROBOTNOTICETMPLMATCHER_H_
