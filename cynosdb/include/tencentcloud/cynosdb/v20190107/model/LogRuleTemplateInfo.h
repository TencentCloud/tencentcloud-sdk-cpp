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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LOGRULETEMPLATEINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LOGRULETEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 审计日志命中规则模板的基本信息
                */
                class LogRuleTemplateInfo : public AbstractModel
                {
                public:
                    LogRuleTemplateInfo();
                    ~LogRuleTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模板ID
                     * @return RuleTemplateId 模板ID
                     * 
                     */
                    std::string GetRuleTemplateId() const;

                    /**
                     * 设置模板ID
                     * @param _ruleTemplateId 模板ID
                     * 
                     */
                    void SetRuleTemplateId(const std::string& _ruleTemplateId);

                    /**
                     * 判断参数 RuleTemplateId 是否已赋值
                     * @return RuleTemplateId 是否已赋值
                     * 
                     */
                    bool RuleTemplateIdHasBeenSet() const;

                    /**
                     * 获取规则模板名
                     * @return RuleTemplateName 规则模板名
                     * 
                     */
                    std::string GetRuleTemplateName() const;

                    /**
                     * 设置规则模板名
                     * @param _ruleTemplateName 规则模板名
                     * 
                     */
                    void SetRuleTemplateName(const std::string& _ruleTemplateName);

                    /**
                     * 判断参数 RuleTemplateName 是否已赋值
                     * @return RuleTemplateName 是否已赋值
                     * 
                     */
                    bool RuleTemplateNameHasBeenSet() const;

                    /**
                     * 获取告警等级。1-低风险，2-中风险，3-高风险。
                     * @return AlarmLevel 告警等级。1-低风险，2-中风险，3-高风险。
                     * 
                     */
                    std::string GetAlarmLevel() const;

                    /**
                     * 设置告警等级。1-低风险，2-中风险，3-高风险。
                     * @param _alarmLevel 告警等级。1-低风险，2-中风险，3-高风险。
                     * 
                     */
                    void SetAlarmLevel(const std::string& _alarmLevel);

                    /**
                     * 判断参数 AlarmLevel 是否已赋值
                     * @return AlarmLevel 是否已赋值
                     * 
                     */
                    bool AlarmLevelHasBeenSet() const;

                    /**
                     * 获取规则模板变更状态：0-未变更；1-已变更；2-已删除
                     * @return RuleTemplateStatus 规则模板变更状态：0-未变更；1-已变更；2-已删除
                     * 
                     */
                    int64_t GetRuleTemplateStatus() const;

                    /**
                     * 设置规则模板变更状态：0-未变更；1-已变更；2-已删除
                     * @param _ruleTemplateStatus 规则模板变更状态：0-未变更；1-已变更；2-已删除
                     * 
                     */
                    void SetRuleTemplateStatus(const int64_t& _ruleTemplateStatus);

                    /**
                     * 判断参数 RuleTemplateStatus 是否已赋值
                     * @return RuleTemplateStatus 是否已赋值
                     * 
                     */
                    bool RuleTemplateStatusHasBeenSet() const;

                private:

                    /**
                     * 模板ID
                     */
                    std::string m_ruleTemplateId;
                    bool m_ruleTemplateIdHasBeenSet;

                    /**
                     * 规则模板名
                     */
                    std::string m_ruleTemplateName;
                    bool m_ruleTemplateNameHasBeenSet;

                    /**
                     * 告警等级。1-低风险，2-中风险，3-高风险。
                     */
                    std::string m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * 规则模板变更状态：0-未变更；1-已变更；2-已删除
                     */
                    int64_t m_ruleTemplateStatus;
                    bool m_ruleTemplateStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LOGRULETEMPLATEINFO_H_
