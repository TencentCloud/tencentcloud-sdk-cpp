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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTUSERRULESCOPE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTUSERRULESCOPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/PartialModule.h>
#include <tencentcloud/teo/v20220901/model/SkipCondition.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 例外规则的生效范围。
                */
                class ExceptUserRuleScope : public AbstractModel
                {
                public:
                    ExceptUserRuleScope();
                    ~ExceptUserRuleScope() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取例外规则类型。其中complete模式代表全量数据进行例外，partial模式代表可选择指定模块指定字段进行例外，该字段取值有：
<li>complete：完全跳过模式；</li>
<li>partial：部分跳过模式。</li>
                     * @return Type 例外规则类型。其中complete模式代表全量数据进行例外，partial模式代表可选择指定模块指定字段进行例外，该字段取值有：
<li>complete：完全跳过模式；</li>
<li>partial：部分跳过模式。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置例外规则类型。其中complete模式代表全量数据进行例外，partial模式代表可选择指定模块指定字段进行例外，该字段取值有：
<li>complete：完全跳过模式；</li>
<li>partial：部分跳过模式。</li>
                     * @param _type 例外规则类型。其中complete模式代表全量数据进行例外，partial模式代表可选择指定模块指定字段进行例外，该字段取值有：
<li>complete：完全跳过模式；</li>
<li>partial：部分跳过模式。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取生效的模块，该字段取值有：
<li>waf：托管规则；</li>
<li>rate：速率限制；</li>
<li>acl：自定义规则；</li>
<li>cc：cc攻击防护；</li>
<li>bot：Bot防护。</li>
                     * @return Modules 生效的模块，该字段取值有：
<li>waf：托管规则；</li>
<li>rate：速率限制；</li>
<li>acl：自定义规则；</li>
<li>cc：cc攻击防护；</li>
<li>bot：Bot防护。</li>
                     * 
                     */
                    std::vector<std::string> GetModules() const;

                    /**
                     * 设置生效的模块，该字段取值有：
<li>waf：托管规则；</li>
<li>rate：速率限制；</li>
<li>acl：自定义规则；</li>
<li>cc：cc攻击防护；</li>
<li>bot：Bot防护。</li>
                     * @param _modules 生效的模块，该字段取值有：
<li>waf：托管规则；</li>
<li>rate：速率限制；</li>
<li>acl：自定义规则；</li>
<li>cc：cc攻击防护；</li>
<li>bot：Bot防护。</li>
                     * 
                     */
                    void SetModules(const std::vector<std::string>& _modules);

                    /**
                     * 判断参数 Modules 是否已赋值
                     * @return Modules 是否已赋值
                     * 
                     */
                    bool ModulesHasBeenSet() const;

                    /**
                     * 获取跳过部分规则ID的例外规则详情。如果为null，默认使用历史配置。
                     * @return PartialModules 跳过部分规则ID的例外规则详情。如果为null，默认使用历史配置。
                     * 
                     */
                    std::vector<PartialModule> GetPartialModules() const;

                    /**
                     * 设置跳过部分规则ID的例外规则详情。如果为null，默认使用历史配置。
                     * @param _partialModules 跳过部分规则ID的例外规则详情。如果为null，默认使用历史配置。
                     * 
                     */
                    void SetPartialModules(const std::vector<PartialModule>& _partialModules);

                    /**
                     * 判断参数 PartialModules 是否已赋值
                     * @return PartialModules 是否已赋值
                     * 
                     */
                    bool PartialModulesHasBeenSet() const;

                    /**
                     * 获取跳过具体字段不去扫描的例外规则详情。如果为null，默认使用历史配置。
                     * @return SkipConditions 跳过具体字段不去扫描的例外规则详情。如果为null，默认使用历史配置。
                     * 
                     */
                    std::vector<SkipCondition> GetSkipConditions() const;

                    /**
                     * 设置跳过具体字段不去扫描的例外规则详情。如果为null，默认使用历史配置。
                     * @param _skipConditions 跳过具体字段不去扫描的例外规则详情。如果为null，默认使用历史配置。
                     * 
                     */
                    void SetSkipConditions(const std::vector<SkipCondition>& _skipConditions);

                    /**
                     * 判断参数 SkipConditions 是否已赋值
                     * @return SkipConditions 是否已赋值
                     * 
                     */
                    bool SkipConditionsHasBeenSet() const;

                private:

                    /**
                     * 例外规则类型。其中complete模式代表全量数据进行例外，partial模式代表可选择指定模块指定字段进行例外，该字段取值有：
<li>complete：完全跳过模式；</li>
<li>partial：部分跳过模式。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 生效的模块，该字段取值有：
<li>waf：托管规则；</li>
<li>rate：速率限制；</li>
<li>acl：自定义规则；</li>
<li>cc：cc攻击防护；</li>
<li>bot：Bot防护。</li>
                     */
                    std::vector<std::string> m_modules;
                    bool m_modulesHasBeenSet;

                    /**
                     * 跳过部分规则ID的例外规则详情。如果为null，默认使用历史配置。
                     */
                    std::vector<PartialModule> m_partialModules;
                    bool m_partialModulesHasBeenSet;

                    /**
                     * 跳过具体字段不去扫描的例外规则详情。如果为null，默认使用历史配置。
                     */
                    std::vector<SkipCondition> m_skipConditions;
                    bool m_skipConditionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTUSERRULESCOPE_H_
