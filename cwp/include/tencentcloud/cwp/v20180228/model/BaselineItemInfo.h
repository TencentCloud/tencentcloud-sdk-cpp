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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEITEMINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEITEMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/BaselineCustomRuleIdName.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 基线信息
                */
                class BaselineItemInfo : public AbstractModel
                {
                public:
                    BaselineItemInfo();
                    ~BaselineItemInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取基线检测项ID
                     * @return ItemId 基线检测项ID
                     * 
                     */
                    int64_t GetItemId() const;

                    /**
                     * 设置基线检测项ID
                     * @param _itemId 基线检测项ID
                     * 
                     */
                    void SetItemId(const int64_t& _itemId);

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     * 
                     */
                    bool ItemIdHasBeenSet() const;

                    /**
                     * 获取检测项名字
                     * @return ItemName 检测项名字
                     * 
                     */
                    std::string GetItemName() const;

                    /**
                     * 设置检测项名字
                     * @param _itemName 检测项名字
                     * 
                     */
                    void SetItemName(const std::string& _itemName);

                    /**
                     * 判断参数 ItemName 是否已赋值
                     * @return ItemName 是否已赋值
                     * 
                     */
                    bool ItemNameHasBeenSet() const;

                    /**
                     * 获取检测项所属规则的ID
                     * @return RuleId 检测项所属规则的ID
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置检测项所属规则的ID
                     * @param _ruleId 检测项所属规则的ID
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
                     * 获取检测项描述
                     * @return ItemDesc 检测项描述
                     * 
                     */
                    std::string GetItemDesc() const;

                    /**
                     * 设置检测项描述
                     * @param _itemDesc 检测项描述
                     * 
                     */
                    void SetItemDesc(const std::string& _itemDesc);

                    /**
                     * 判断参数 ItemDesc 是否已赋值
                     * @return ItemDesc 是否已赋值
                     * 
                     */
                    bool ItemDescHasBeenSet() const;

                    /**
                     * 获取检测项的修复方法
                     * @return FixMethod 检测项的修复方法
                     * 
                     */
                    std::string GetFixMethod() const;

                    /**
                     * 设置检测项的修复方法
                     * @param _fixMethod 检测项的修复方法
                     * 
                     */
                    void SetFixMethod(const std::string& _fixMethod);

                    /**
                     * 判断参数 FixMethod 是否已赋值
                     * @return FixMethod 是否已赋值
                     * 
                     */
                    bool FixMethodHasBeenSet() const;

                    /**
                     * 获取检测项所属规则名字
                     * @return RuleName 检测项所属规则名字
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置检测项所属规则名字
                     * @param _ruleName 检测项所属规则名字
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
                     * 获取危险等级
                     * @return Level 危险等级
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置危险等级
                     * @param _level 危险等级
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取系统规则ID
                     * @return SysRuleId 系统规则ID
                     * 
                     */
                    int64_t GetSysRuleId() const;

                    /**
                     * 设置系统规则ID
                     * @param _sysRuleId 系统规则ID
                     * 
                     */
                    void SetSysRuleId(const int64_t& _sysRuleId);

                    /**
                     * 判断参数 SysRuleId 是否已赋值
                     * @return SysRuleId 是否已赋值
                     * 
                     */
                    bool SysRuleIdHasBeenSet() const;

                    /**
                     * 获取被引自定义规则信息
                     * @return RelatedCustomRuleInfo 被引自定义规则信息
                     * 
                     */
                    std::vector<BaselineCustomRuleIdName> GetRelatedCustomRuleInfo() const;

                    /**
                     * 设置被引自定义规则信息
                     * @param _relatedCustomRuleInfo 被引自定义规则信息
                     * 
                     */
                    void SetRelatedCustomRuleInfo(const std::vector<BaselineCustomRuleIdName>& _relatedCustomRuleInfo);

                    /**
                     * 判断参数 RelatedCustomRuleInfo 是否已赋值
                     * @return RelatedCustomRuleInfo 是否已赋值
                     * 
                     */
                    bool RelatedCustomRuleInfoHasBeenSet() const;

                private:

                    /**
                     * 基线检测项ID
                     */
                    int64_t m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * 检测项名字
                     */
                    std::string m_itemName;
                    bool m_itemNameHasBeenSet;

                    /**
                     * 检测项所属规则的ID
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 检测项描述
                     */
                    std::string m_itemDesc;
                    bool m_itemDescHasBeenSet;

                    /**
                     * 检测项的修复方法
                     */
                    std::string m_fixMethod;
                    bool m_fixMethodHasBeenSet;

                    /**
                     * 检测项所属规则名字
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 危险等级
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 系统规则ID
                     */
                    int64_t m_sysRuleId;
                    bool m_sysRuleIdHasBeenSet;

                    /**
                     * 被引自定义规则信息
                     */
                    std::vector<BaselineCustomRuleIdName> m_relatedCustomRuleInfo;
                    bool m_relatedCustomRuleInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEITEMINFO_H_
