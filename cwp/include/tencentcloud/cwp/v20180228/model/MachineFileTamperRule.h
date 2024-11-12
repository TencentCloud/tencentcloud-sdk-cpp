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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MACHINEFILETAMPERRULE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MACHINEFILETAMPERRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/FileTamperRule.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 查询主机相关核心文件监控规则详情
                */
                class MachineFileTamperRule : public AbstractModel
                {
                public:
                    MachineFileTamperRule();
                    ~MachineFileTamperRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则名称
                     * @return Name 规则名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置规则名称
                     * @param _name 规则名称
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
                     * 获取规则类型 0 ：系统规则  1：用户规则
                     * @return RuleCategory 规则类型 0 ：系统规则  1：用户规则
                     * 
                     */
                    uint64_t GetRuleCategory() const;

                    /**
                     * 设置规则类型 0 ：系统规则  1：用户规则
                     * @param _ruleCategory 规则类型 0 ：系统规则  1：用户规则
                     * 
                     */
                    void SetRuleCategory(const uint64_t& _ruleCategory);

                    /**
                     * 判断参数 RuleCategory 是否已赋值
                     * @return RuleCategory 是否已赋值
                     * 
                     */
                    bool RuleCategoryHasBeenSet() const;

                    /**
                     * 获取规则
                     * @return Rule 规则
                     * 
                     */
                    std::vector<FileTamperRule> GetRule() const;

                    /**
                     * 设置规则
                     * @param _rule 规则
                     * 
                     */
                    void SetRule(const std::vector<FileTamperRule>& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取唯一id
                     * @return Id 唯一id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置唯一id
                     * @param _id 唯一id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 规则名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 规则类型 0 ：系统规则  1：用户规则
                     */
                    uint64_t m_ruleCategory;
                    bool m_ruleCategoryHasBeenSet;

                    /**
                     * 规则
                     */
                    std::vector<FileTamperRule> m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * 唯一id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MACHINEFILETAMPERRULE_H_
