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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINERULEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINERULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 基线检测信息
                */
                class BaselineRuleInfo : public AbstractModel
                {
                public:
                    BaselineRuleInfo();
                    ~BaselineRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检测项名称
                     * @return RuleName 检测项名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置检测项名称
                     * @param _ruleName 检测项名称
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取检测项描述
                     * @return Description 检测项描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置检测项描述
                     * @param _description 检测项描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取修复建议
                     * @return FixMessage 修复建议
                     * 
                     */
                    std::string GetFixMessage() const;

                    /**
                     * 设置修复建议
                     * @param _fixMessage 修复建议
                     * 
                     */
                    void SetFixMessage(const std::string& _fixMessage);

                    /**
                     * 判断参数 FixMessage 是否已赋值
                     * @return FixMessage 是否已赋值
                     * 
                     */
                    bool FixMessageHasBeenSet() const;

                    /**
                     * 获取危害等级
                     * @return Level 危害等级
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置危害等级
                     * @param _level 危害等级
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取检测项id
                     * @return RuleId 检测项id
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置检测项id
                     * @param _ruleId 检测项id
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取最后检测时间
                     * @return LastScanAt 最后检测时间
                     * 
                     */
                    std::string GetLastScanAt() const;

                    /**
                     * 设置最后检测时间
                     * @param _lastScanAt 最后检测时间
                     * 
                     */
                    void SetLastScanAt(const std::string& _lastScanAt);

                    /**
                     * 判断参数 LastScanAt 是否已赋值
                     * @return LastScanAt 是否已赋值
                     * 
                     */
                    bool LastScanAtHasBeenSet() const;

                    /**
                     * 获取具体原因说明
                     * @return RuleRemark 具体原因说明
                     * 
                     */
                    std::string GetRuleRemark() const;

                    /**
                     * 设置具体原因说明
                     * @param _ruleRemark 具体原因说明
                     * 
                     */
                    void SetRuleRemark(const std::string& _ruleRemark);

                    /**
                     * 判断参数 RuleRemark 是否已赋值
                     * @return RuleRemark 是否已赋值
                     * 
                     */
                    bool RuleRemarkHasBeenSet() const;

                    /**
                     * 获取唯一Uuid
                     * @return Uuid 唯一Uuid
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置唯一Uuid
                     * @param _uuid 唯一Uuid
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取唯一事件ID
                     * @return EventId 唯一事件ID
                     * 
                     */
                    uint64_t GetEventId() const;

                    /**
                     * 设置唯一事件ID
                     * @param _eventId 唯一事件ID
                     * 
                     */
                    void SetEventId(const uint64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                private:

                    /**
                     * 检测项名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 检测项描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 修复建议
                     */
                    std::string m_fixMessage;
                    bool m_fixMessageHasBeenSet;

                    /**
                     * 危害等级
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 状态
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 检测项id
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 最后检测时间
                     */
                    std::string m_lastScanAt;
                    bool m_lastScanAtHasBeenSet;

                    /**
                     * 具体原因说明
                     */
                    std::string m_ruleRemark;
                    bool m_ruleRemarkHasBeenSet;

                    /**
                     * 唯一Uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 唯一事件ID
                     */
                    uint64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINERULEINFO_H_
