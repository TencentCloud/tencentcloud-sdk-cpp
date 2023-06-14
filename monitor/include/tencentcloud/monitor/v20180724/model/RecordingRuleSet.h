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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_RECORDINGRULESET_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_RECORDINGRULESET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Prometheus 聚合规则响应结构体内信息
                */
                class RecordingRuleSet : public AbstractModel
                {
                public:
                    RecordingRuleSet();
                    ~RecordingRuleSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则 ID
                     * @return RuleId 规则 ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则 ID
                     * @param _ruleId 规则 ID
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
                     * 获取规则状态码
                     * @return RuleState 规则状态码
                     * 
                     */
                    int64_t GetRuleState() const;

                    /**
                     * 设置规则状态码
                     * @param _ruleState 规则状态码
                     * 
                     */
                    void SetRuleState(const int64_t& _ruleState);

                    /**
                     * 判断参数 RuleState 是否已赋值
                     * @return RuleState 是否已赋值
                     * 
                     */
                    bool RuleStateHasBeenSet() const;

                    /**
                     * 获取分组名称
                     * @return Name 分组名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置分组名称
                     * @param _name 分组名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取规则内容组
                     * @return Group 规则内容组
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置规则内容组
                     * @param _group 规则内容组
                     * 
                     */
                    void SetGroup(const std::string& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取规则数量
                     * @return Total 规则数量
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置规则数量
                     * @param _total 规则数量
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取规则创建时间
                     * @return CreatedAt 规则创建时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置规则创建时间
                     * @param _createdAt 规则创建时间
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取规则最近更新时间
                     * @return UpdatedAt 规则最近更新时间
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置规则最近更新时间
                     * @param _updatedAt 规则最近更新时间
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleName 规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleName 规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                private:

                    /**
                     * 规则 ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则状态码
                     */
                    int64_t m_ruleState;
                    bool m_ruleStateHasBeenSet;

                    /**
                     * 分组名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 规则内容组
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * 规则数量
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 规则创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 规则最近更新时间
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * 规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_RECORDINGRULESET_H_
