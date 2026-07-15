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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWTOKENLENGTHROUTE_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWTOKENLENGTHROUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/AIGWLLMModelServiceSubRoute.h>
#include <tencentcloud/cngw/v20230418/model/AIGWTokenLengthRouteRule.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * AI 网关token长度路由配置
                */
                class AIGWTokenLengthRoute : public AbstractModel
                {
                public:
                    AIGWTokenLengthRoute();
                    ~AIGWTokenLengthRoute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>默认tokenizer编码器</p><p>枚举值：</p><ul><li>o200k_base： OpenApi o200k_base</li><li>cl100k_base： OpenApi cl100k_base</li><li>p50k_base： OpenApi p50k_base</li><li>r50k_base： OpenApi r50k_base</li></ul>
                     * @return DefaultEncodingName <p>默认tokenizer编码器</p><p>枚举值：</p><ul><li>o200k_base： OpenApi o200k_base</li><li>cl100k_base： OpenApi cl100k_base</li><li>p50k_base： OpenApi p50k_base</li><li>r50k_base： OpenApi r50k_base</li></ul>
                     * 
                     */
                    std::string GetDefaultEncodingName() const;

                    /**
                     * 设置<p>默认tokenizer编码器</p><p>枚举值：</p><ul><li>o200k_base： OpenApi o200k_base</li><li>cl100k_base： OpenApi cl100k_base</li><li>p50k_base： OpenApi p50k_base</li><li>r50k_base： OpenApi r50k_base</li></ul>
                     * @param _defaultEncodingName <p>默认tokenizer编码器</p><p>枚举值：</p><ul><li>o200k_base： OpenApi o200k_base</li><li>cl100k_base： OpenApi cl100k_base</li><li>p50k_base： OpenApi p50k_base</li><li>r50k_base： OpenApi r50k_base</li></ul>
                     * 
                     */
                    void SetDefaultEncodingName(const std::string& _defaultEncodingName);

                    /**
                     * 判断参数 DefaultEncodingName 是否已赋值
                     * @return DefaultEncodingName 是否已赋值
                     * 
                     */
                    bool DefaultEncodingNameHasBeenSet() const;

                    /**
                     * 获取<p>token 计数失败、规则为空或未命中任何规则时执行的默认二级路由（暂时只能选择一个指定模型路由）</p>
                     * @return DefaultTarget <p>token 计数失败、规则为空或未命中任何规则时执行的默认二级路由（暂时只能选择一个指定模型路由）</p>
                     * 
                     */
                    AIGWLLMModelServiceSubRoute GetDefaultTarget() const;

                    /**
                     * 设置<p>token 计数失败、规则为空或未命中任何规则时执行的默认二级路由（暂时只能选择一个指定模型路由）</p>
                     * @param _defaultTarget <p>token 计数失败、规则为空或未命中任何规则时执行的默认二级路由（暂时只能选择一个指定模型路由）</p>
                     * 
                     */
                    void SetDefaultTarget(const AIGWLLMModelServiceSubRoute& _defaultTarget);

                    /**
                     * 判断参数 DefaultTarget 是否已赋值
                     * @return DefaultTarget 是否已赋值
                     * 
                     */
                    bool DefaultTargetHasBeenSet() const;

                    /**
                     * 获取<p>规则</p>
                     * @return Rules <p>规则</p>
                     * 
                     */
                    std::vector<AIGWTokenLengthRouteRule> GetRules() const;

                    /**
                     * 设置<p>规则</p>
                     * @param _rules <p>规则</p>
                     * 
                     */
                    void SetRules(const std::vector<AIGWTokenLengthRouteRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * <p>默认tokenizer编码器</p><p>枚举值：</p><ul><li>o200k_base： OpenApi o200k_base</li><li>cl100k_base： OpenApi cl100k_base</li><li>p50k_base： OpenApi p50k_base</li><li>r50k_base： OpenApi r50k_base</li></ul>
                     */
                    std::string m_defaultEncodingName;
                    bool m_defaultEncodingNameHasBeenSet;

                    /**
                     * <p>token 计数失败、规则为空或未命中任何规则时执行的默认二级路由（暂时只能选择一个指定模型路由）</p>
                     */
                    AIGWLLMModelServiceSubRoute m_defaultTarget;
                    bool m_defaultTargetHasBeenSet;

                    /**
                     * <p>规则</p>
                     */
                    std::vector<AIGWTokenLengthRouteRule> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWTOKENLENGTHROUTE_H_
