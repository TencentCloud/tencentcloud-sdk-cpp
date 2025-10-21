/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_OWASPRULETYPE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_OWASPRULETYPE_H_

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
                * Owasp规则类型
                */
                class OwaspRuleType : public AbstractModel
                {
                public:
                    OwaspRuleType();
                    ~OwaspRuleType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取类型ID
                     * @return TypeId 类型ID
                     * 
                     */
                    uint64_t GetTypeId() const;

                    /**
                     * 设置类型ID
                     * @param _typeId 类型ID
                     * 
                     */
                    void SetTypeId(const uint64_t& _typeId);

                    /**
                     * 判断参数 TypeId 是否已赋值
                     * @return TypeId 是否已赋值
                     * 
                     */
                    bool TypeIdHasBeenSet() const;

                    /**
                     * 获取类型名称
                     * @return TypeName 类型名称
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置类型名称
                     * @param _typeName 类型名称
                     * 
                     */
                    void SetTypeName(const std::string& _typeName);

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     * 
                     */
                    bool TypeNameHasBeenSet() const;

                    /**
                     * 获取类型描述

                     * @return Description 类型描述

                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置类型描述

                     * @param _description 类型描述

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
                     * 获取类型分类
                     * @return Classification 类型分类
                     * 
                     */
                    std::string GetClassification() const;

                    /**
                     * 设置类型分类
                     * @param _classification 类型分类
                     * 
                     */
                    void SetClassification(const std::string& _classification);

                    /**
                     * 判断参数 Classification 是否已赋值
                     * @return Classification 是否已赋值
                     * 
                     */
                    bool ClassificationHasBeenSet() const;

                    /**
                     * 获取规则类型的防护模式，0：观察、1：拦截
                     * @return Action 规则类型的防护模式，0：观察、1：拦截
                     * 
                     */
                    int64_t GetAction() const;

                    /**
                     * 设置规则类型的防护模式，0：观察、1：拦截
                     * @param _action 规则类型的防护模式，0：观察、1：拦截
                     * 
                     */
                    void SetAction(const int64_t& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取规则类型的防护等级，100：宽松、200：正常、300：严格、400：超严格
                     * @return Level 规则类型的防护等级，100：宽松、200：正常、300：严格、400：超严格
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置规则类型的防护等级，100：宽松、200：正常、300：严格、400：超严格
                     * @param _level 规则类型的防护等级，100：宽松、200：正常、300：严格、400：超严格
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
                     * 获取规则类型的开关状态，0：关闭、1：开启
                     * @return Status 规则类型的开关状态，0：关闭、1：开启
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置规则类型的开关状态，0：关闭、1：开启
                     * @param _status 规则类型的开关状态，0：关闭、1：开启
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取规则类型下的所有规则总是
                     * @return TotalRule 规则类型下的所有规则总是
                     * 
                     */
                    uint64_t GetTotalRule() const;

                    /**
                     * 设置规则类型下的所有规则总是
                     * @param _totalRule 规则类型下的所有规则总是
                     * 
                     */
                    void SetTotalRule(const uint64_t& _totalRule);

                    /**
                     * 判断参数 TotalRule 是否已赋值
                     * @return TotalRule 是否已赋值
                     * 
                     */
                    bool TotalRuleHasBeenSet() const;

                    /**
                     * 获取规则类型下的启用的规则总数
                     * @return ActiveRule 规则类型下的启用的规则总数
                     * 
                     */
                    uint64_t GetActiveRule() const;

                    /**
                     * 设置规则类型下的启用的规则总数
                     * @param _activeRule 规则类型下的启用的规则总数
                     * 
                     */
                    void SetActiveRule(const uint64_t& _activeRule);

                    /**
                     * 判断参数 ActiveRule 是否已赋值
                     * @return ActiveRule 是否已赋值
                     * 
                     */
                    bool ActiveRuleHasBeenSet() const;

                private:

                    /**
                     * 类型ID
                     */
                    uint64_t m_typeId;
                    bool m_typeIdHasBeenSet;

                    /**
                     * 类型名称
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * 类型描述

                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 类型分类
                     */
                    std::string m_classification;
                    bool m_classificationHasBeenSet;

                    /**
                     * 规则类型的防护模式，0：观察、1：拦截
                     */
                    int64_t m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 规则类型的防护等级，100：宽松、200：正常、300：严格、400：超严格
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 规则类型的开关状态，0：关闭、1：开启
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 规则类型下的所有规则总是
                     */
                    uint64_t m_totalRule;
                    bool m_totalRuleHasBeenSet;

                    /**
                     * 规则类型下的启用的规则总数
                     */
                    uint64_t m_activeRule;
                    bool m_activeRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_OWASPRULETYPE_H_
