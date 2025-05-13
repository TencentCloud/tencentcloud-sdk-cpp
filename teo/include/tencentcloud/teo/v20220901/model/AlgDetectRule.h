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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ALGDETECTRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ALGDETECTRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AclCondition.h>
#include <tencentcloud/teo/v20220901/model/AlgDetectSession.h>
#include <tencentcloud/teo/v20220901/model/AlgDetectJS.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Bot主动特征识别规则。
                */
                class AlgDetectRule : public AbstractModel
                {
                public:
                    AlgDetectRule();
                    ~AlgDetectRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则id。
                     * @return RuleID 规则id。
                     * 
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置规则id。
                     * @param _ruleID 规则id。
                     * 
                     */
                    void SetRuleID(const int64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取规则名。
                     * @return RuleName 规则名。
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名。
                     * @param _ruleName 规则名。
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
                     * 获取规则开关。
                     * @return Switch 规则开关。
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置规则开关。
                     * @param _switch 规则开关。
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取自定义规则。
                     * @return AlgConditions 自定义规则。
                     * 
                     */
                    std::vector<AclCondition> GetAlgConditions() const;

                    /**
                     * 设置自定义规则。
                     * @param _algConditions 自定义规则。
                     * 
                     */
                    void SetAlgConditions(const std::vector<AclCondition>& _algConditions);

                    /**
                     * 判断参数 AlgConditions 是否已赋值
                     * @return AlgConditions 是否已赋值
                     * 
                     */
                    bool AlgConditionsHasBeenSet() const;

                    /**
                     * 获取Cookie校验和会话行为分析。
                     * @return AlgDetectSession Cookie校验和会话行为分析。
                     * 
                     */
                    AlgDetectSession GetAlgDetectSession() const;

                    /**
                     * 设置Cookie校验和会话行为分析。
                     * @param _algDetectSession Cookie校验和会话行为分析。
                     * 
                     */
                    void SetAlgDetectSession(const AlgDetectSession& _algDetectSession);

                    /**
                     * 判断参数 AlgDetectSession 是否已赋值
                     * @return AlgDetectSession 是否已赋值
                     * 
                     */
                    bool AlgDetectSessionHasBeenSet() const;

                    /**
                     * 获取客户端行为校验。
                     * @return AlgDetectJS 客户端行为校验。
                     * 
                     */
                    std::vector<AlgDetectJS> GetAlgDetectJS() const;

                    /**
                     * 设置客户端行为校验。
                     * @param _algDetectJS 客户端行为校验。
                     * 
                     */
                    void SetAlgDetectJS(const std::vector<AlgDetectJS>& _algDetectJS);

                    /**
                     * 判断参数 AlgDetectJS 是否已赋值
                     * @return AlgDetectJS 是否已赋值
                     * 
                     */
                    bool AlgDetectJSHasBeenSet() const;

                    /**
                     * 获取更新时间。仅出参使用。
                     * @return UpdateTime 更新时间。仅出参使用。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间。仅出参使用。
                     * @param _updateTime 更新时间。仅出参使用。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 规则id。
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * 规则名。
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 规则开关。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 自定义规则。
                     */
                    std::vector<AclCondition> m_algConditions;
                    bool m_algConditionsHasBeenSet;

                    /**
                     * Cookie校验和会话行为分析。
                     */
                    AlgDetectSession m_algDetectSession;
                    bool m_algDetectSessionHasBeenSet;

                    /**
                     * 客户端行为校验。
                     */
                    std::vector<AlgDetectJS> m_algDetectJS;
                    bool m_algDetectJSHasBeenSet;

                    /**
                     * 更新时间。仅出参使用。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ALGDETECTRULE_H_
