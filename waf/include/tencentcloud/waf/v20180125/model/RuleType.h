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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_RULETYPE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_RULETYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * Tiga规则
                */
                class RuleType : public AbstractModel
                {
                public:
                    RuleType();
                    ~RuleType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则ID
                     * @return TypeID 规则ID
                     * 
                     */
                    std::string GetTypeID() const;

                    /**
                     * 设置规则ID
                     * @param _typeID 规则ID
                     * 
                     */
                    void SetTypeID(const std::string& _typeID);

                    /**
                     * 判断参数 TypeID 是否已赋值
                     * @return TypeID 是否已赋值
                     * 
                     */
                    bool TypeIDHasBeenSet() const;

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
                     * 获取规则类型描述

                     * @return Desc 规则类型描述

                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置规则类型描述

                     * @param _desc 规则类型描述

                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取规则类型状态，即类型生效开关，0：关闭，1：开启
                     * @return RuleTypeStatus 规则类型状态，即类型生效开关，0：关闭，1：开启
                     * 
                     */
                    int64_t GetRuleTypeStatus() const;

                    /**
                     * 设置规则类型状态，即类型生效开关，0：关闭，1：开启
                     * @param _ruleTypeStatus 规则类型状态，即类型生效开关，0：关闭，1：开启
                     * 
                     */
                    void SetRuleTypeStatus(const int64_t& _ruleTypeStatus);

                    /**
                     * 判断参数 RuleTypeStatus 是否已赋值
                     * @return RuleTypeStatus 是否已赋值
                     * 
                     */
                    bool RuleTypeStatusHasBeenSet() const;

                    /**
                     * 获取类型下生效的规则数量
                     * @return ActiveRuleCount 类型下生效的规则数量
                     * 
                     */
                    int64_t GetActiveRuleCount() const;

                    /**
                     * 设置类型下生效的规则数量
                     * @param _activeRuleCount 类型下生效的规则数量
                     * 
                     */
                    void SetActiveRuleCount(const int64_t& _activeRuleCount);

                    /**
                     * 判断参数 ActiveRuleCount 是否已赋值
                     * @return ActiveRuleCount 是否已赋值
                     * 
                     */
                    bool ActiveRuleCountHasBeenSet() const;

                    /**
                     * 获取类型下的规则总数量
                     * @return TotalRuleCount 类型下的规则总数量
                     * 
                     */
                    int64_t GetTotalRuleCount() const;

                    /**
                     * 设置类型下的规则总数量
                     * @param _totalRuleCount 类型下的规则总数量
                     * 
                     */
                    void SetTotalRuleCount(const int64_t& _totalRuleCount);

                    /**
                     * 判断参数 TotalRuleCount 是否已赋值
                     * @return TotalRuleCount 是否已赋值
                     * 
                     */
                    bool TotalRuleCountHasBeenSet() const;

                private:

                    /**
                     * 规则ID
                     */
                    std::string m_typeID;
                    bool m_typeIDHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 规则类型描述

                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 规则类型状态，即类型生效开关，0：关闭，1：开启
                     */
                    int64_t m_ruleTypeStatus;
                    bool m_ruleTypeStatusHasBeenSet;

                    /**
                     * 类型下生效的规则数量
                     */
                    int64_t m_activeRuleCount;
                    bool m_activeRuleCountHasBeenSet;

                    /**
                     * 类型下的规则总数量
                     */
                    int64_t m_totalRuleCount;
                    bool m_totalRuleCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_RULETYPE_H_
