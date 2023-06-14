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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ACCESSCONTROLSYSTEMCHILDRULEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ACCESSCONTROLSYSTEMCHILDRULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 容器运行时安全，访问控制系统策略的子策略信息
                */
                class AccessControlSystemChildRuleInfo : public AbstractModel
                {
                public:
                    AccessControlSystemChildRuleInfo();
                    ~AccessControlSystemChildRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子策略Id
                     * @return RuleId 子策略Id
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置子策略Id
                     * @param _ruleId 子策略Id
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取策略模式,  RULE_MODE_RELEASE: 放行
   RULE_MODE_ALERT: 告警
   RULE_MODE_HOLDUP:拦截
                     * @return RuleMode 策略模式,  RULE_MODE_RELEASE: 放行
   RULE_MODE_ALERT: 告警
   RULE_MODE_HOLDUP:拦截
                     * 
                     */
                    std::string GetRuleMode() const;

                    /**
                     * 设置策略模式,  RULE_MODE_RELEASE: 放行
   RULE_MODE_ALERT: 告警
   RULE_MODE_HOLDUP:拦截
                     * @param _ruleMode 策略模式,  RULE_MODE_RELEASE: 放行
   RULE_MODE_ALERT: 告警
   RULE_MODE_HOLDUP:拦截
                     * 
                     */
                    void SetRuleMode(const std::string& _ruleMode);

                    /**
                     * 判断参数 RuleMode 是否已赋值
                     * @return RuleMode 是否已赋值
                     * 
                     */
                    bool RuleModeHasBeenSet() const;

                    /**
                     * 获取子策略状态，true为开启，false为关闭
                     * @return IsEnable 子策略状态，true为开启，false为关闭
                     * 
                     */
                    bool GetIsEnable() const;

                    /**
                     * 设置子策略状态，true为开启，false为关闭
                     * @param _isEnable 子策略状态，true为开启，false为关闭
                     * 
                     */
                    void SetIsEnable(const bool& _isEnable);

                    /**
                     * 判断参数 IsEnable 是否已赋值
                     * @return IsEnable 是否已赋值
                     * 
                     */
                    bool IsEnableHasBeenSet() const;

                    /**
                     * 获取子策略检测的入侵行为类型
CHANGE_CRONTAB：篡改计划任务
CHANGE_SYS_BIN：篡改系统程序
CHANGE_USRCFG：篡改用户配置
                     * @return RuleType 子策略检测的入侵行为类型
CHANGE_CRONTAB：篡改计划任务
CHANGE_SYS_BIN：篡改系统程序
CHANGE_USRCFG：篡改用户配置
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置子策略检测的入侵行为类型
CHANGE_CRONTAB：篡改计划任务
CHANGE_SYS_BIN：篡改系统程序
CHANGE_USRCFG：篡改用户配置
                     * @param _ruleType 子策略检测的入侵行为类型
CHANGE_CRONTAB：篡改计划任务
CHANGE_SYS_BIN：篡改系统程序
CHANGE_USRCFG：篡改用户配置
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                private:

                    /**
                     * 子策略Id
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 策略模式,  RULE_MODE_RELEASE: 放行
   RULE_MODE_ALERT: 告警
   RULE_MODE_HOLDUP:拦截
                     */
                    std::string m_ruleMode;
                    bool m_ruleModeHasBeenSet;

                    /**
                     * 子策略状态，true为开启，false为关闭
                     */
                    bool m_isEnable;
                    bool m_isEnableHasBeenSet;

                    /**
                     * 子策略检测的入侵行为类型
CHANGE_CRONTAB：篡改计划任务
CHANGE_SYS_BIN：篡改系统程序
CHANGE_USRCFG：篡改用户配置
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ACCESSCONTROLSYSTEMCHILDRULEINFO_H_
