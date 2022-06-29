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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ABNORMALPROCESSRULEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ABNORMALPROCESSRULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/AbnormalProcessChildRuleInfo.h>
#include <tencentcloud/tcss/v20201101/model/AbnormalProcessSystemChildRuleInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 运行时安全，异常进程检测策略
                */
                class AbnormalProcessRuleInfo : public AbstractModel
                {
                public:
                    AbnormalProcessRuleInfo();
                    ~AbnormalProcessRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取true:策略启用，false:策略禁用
                     * @return IsEnable true:策略启用，false:策略禁用
                     */
                    bool GetIsEnable() const;

                    /**
                     * 设置true:策略启用，false:策略禁用
                     * @param IsEnable true:策略启用，false:策略禁用
                     */
                    void SetIsEnable(const bool& _isEnable);

                    /**
                     * 判断参数 IsEnable 是否已赋值
                     * @return IsEnable 是否已赋值
                     */
                    bool IsEnableHasBeenSet() const;

                    /**
                     * 获取生效镜像id，空数组代表全部镜像
                     * @return ImageIds 生效镜像id，空数组代表全部镜像
                     */
                    std::vector<std::string> GetImageIds() const;

                    /**
                     * 设置生效镜像id，空数组代表全部镜像
                     * @param ImageIds 生效镜像id，空数组代表全部镜像
                     */
                    void SetImageIds(const std::vector<std::string>& _imageIds);

                    /**
                     * 判断参数 ImageIds 是否已赋值
                     * @return ImageIds 是否已赋值
                     */
                    bool ImageIdsHasBeenSet() const;

                    /**
                     * 获取用户策略的子策略数组
                     * @return ChildRules 用户策略的子策略数组
                     */
                    std::vector<AbnormalProcessChildRuleInfo> GetChildRules() const;

                    /**
                     * 设置用户策略的子策略数组
                     * @param ChildRules 用户策略的子策略数组
                     */
                    void SetChildRules(const std::vector<AbnormalProcessChildRuleInfo>& _childRules);

                    /**
                     * 判断参数 ChildRules 是否已赋值
                     * @return ChildRules 是否已赋值
                     */
                    bool ChildRulesHasBeenSet() const;

                    /**
                     * 获取策略名字
                     * @return RuleName 策略名字
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置策略名字
                     * @param RuleName 策略名字
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取策略id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleId 策略id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置策略id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RuleId 策略id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取系统策略的子策略数组
                     * @return SystemChildRules 系统策略的子策略数组
                     */
                    std::vector<AbnormalProcessSystemChildRuleInfo> GetSystemChildRules() const;

                    /**
                     * 设置系统策略的子策略数组
                     * @param SystemChildRules 系统策略的子策略数组
                     */
                    void SetSystemChildRules(const std::vector<AbnormalProcessSystemChildRuleInfo>& _systemChildRules);

                    /**
                     * 判断参数 SystemChildRules 是否已赋值
                     * @return SystemChildRules 是否已赋值
                     */
                    bool SystemChildRulesHasBeenSet() const;

                    /**
                     * 获取是否是系统默认策略
                     * @return IsDefault 是否是系统默认策略
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置是否是系统默认策略
                     * @param IsDefault 是否是系统默认策略
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     */
                    bool IsDefaultHasBeenSet() const;

                private:

                    /**
                     * true:策略启用，false:策略禁用
                     */
                    bool m_isEnable;
                    bool m_isEnableHasBeenSet;

                    /**
                     * 生效镜像id，空数组代表全部镜像
                     */
                    std::vector<std::string> m_imageIds;
                    bool m_imageIdsHasBeenSet;

                    /**
                     * 用户策略的子策略数组
                     */
                    std::vector<AbnormalProcessChildRuleInfo> m_childRules;
                    bool m_childRulesHasBeenSet;

                    /**
                     * 策略名字
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 策略id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 系统策略的子策略数组
                     */
                    std::vector<AbnormalProcessSystemChildRuleInfo> m_systemChildRules;
                    bool m_systemChildRulesHasBeenSet;

                    /**
                     * 是否是系统默认策略
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ABNORMALPROCESSRULEINFO_H_
