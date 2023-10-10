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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYFILETAMPERRULEREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYFILETAMPERRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyFileTamperRule请求参数结构体
                */
                class ModifyFileTamperRuleRequest : public AbstractModel
                {
                public:
                    ModifyFileTamperRuleRequest();
                    ~ModifyFileTamperRuleRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取规则内容
                     * @return Rules 规则内容
                     * 
                     */
                    std::vector<FileTamperRule> GetRules() const;

                    /**
                     * 设置规则内容
                     * @param _rules 规则内容
                     * 
                     */
                    void SetRules(const std::vector<FileTamperRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取是否全局规则(默认否) 0：否 ，1：是，全局是Uuids 可为空
                     * @return IsGlobal 是否全局规则(默认否) 0：否 ，1：是，全局是Uuids 可为空
                     * 
                     */
                    uint64_t GetIsGlobal() const;

                    /**
                     * 设置是否全局规则(默认否) 0：否 ，1：是，全局是Uuids 可为空
                     * @param _isGlobal 是否全局规则(默认否) 0：否 ，1：是，全局是Uuids 可为空
                     * 
                     */
                    void SetIsGlobal(const uint64_t& _isGlobal);

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

                    /**
                     * 获取启用状态 0: 启用 1: 已关闭
                     * @return Status 启用状态 0: 启用 1: 已关闭
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置启用状态 0: 启用 1: 已关闭
                     * @param _status 启用状态 0: 启用 1: 已关闭
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
                     * 获取规则id  不填或者0表示新增
                     * @return Id 规则id  不填或者0表示新增
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置规则id  不填或者0表示新增
                     * @param _id 规则id  不填或者0表示新增
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取影响的主机uuid集合
                     * @return Uuids 影响的主机uuid集合
                     * 
                     */
                    std::vector<std::string> GetUuids() const;

                    /**
                     * 设置影响的主机uuid集合
                     * @param _uuids 影响的主机uuid集合
                     * 
                     */
                    void SetUuids(const std::vector<std::string>& _uuids);

                    /**
                     * 判断参数 Uuids 是否已赋值
                     * @return Uuids 是否已赋值
                     * 
                     */
                    bool UuidsHasBeenSet() const;

                    /**
                     * 获取风险等级 0：无， 1: 高危， 2:中危， 3: 低危
                     * @return Level 风险等级 0：无， 1: 高危， 2:中危， 3: 低危
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置风险等级 0：无， 1: 高危， 2:中危， 3: 低危
                     * @param _level 风险等级 0：无， 1: 高危， 2:中危， 3: 低危
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
                     * 获取加白处理类型
<li>cur 仅对当前加白</li>
<li>all 所有符合条件加白</li>
                     * @return AddWhiteType 加白处理类型
<li>cur 仅对当前加白</li>
<li>all 所有符合条件加白</li>
                     * 
                     */
                    std::string GetAddWhiteType() const;

                    /**
                     * 设置加白处理类型
<li>cur 仅对当前加白</li>
<li>all 所有符合条件加白</li>
                     * @param _addWhiteType 加白处理类型
<li>cur 仅对当前加白</li>
<li>all 所有符合条件加白</li>
                     * 
                     */
                    void SetAddWhiteType(const std::string& _addWhiteType);

                    /**
                     * 判断参数 AddWhiteType 是否已赋值
                     * @return AddWhiteType 是否已赋值
                     * 
                     */
                    bool AddWhiteTypeHasBeenSet() const;

                private:

                    /**
                     * 规则名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 规则内容
                     */
                    std::vector<FileTamperRule> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * 是否全局规则(默认否) 0：否 ，1：是，全局是Uuids 可为空
                     */
                    uint64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * 启用状态 0: 启用 1: 已关闭
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 规则id  不填或者0表示新增
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 影响的主机uuid集合
                     */
                    std::vector<std::string> m_uuids;
                    bool m_uuidsHasBeenSet;

                    /**
                     * 风险等级 0：无， 1: 高危， 2:中危， 3: 低危
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 加白处理类型
<li>cur 仅对当前加白</li>
<li>all 所有符合条件加白</li>
                     */
                    std::string m_addWhiteType;
                    bool m_addWhiteTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYFILETAMPERRULEREQUEST_H_
