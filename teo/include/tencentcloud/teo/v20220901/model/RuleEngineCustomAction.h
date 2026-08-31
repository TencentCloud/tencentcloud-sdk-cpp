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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RULEENGINECUSTOMACTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RULEENGINECUSTOMACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/RuleEngineCustomActionParameterSchema.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 规则引擎操作定制配置。
                */
                class RuleEngineCustomAction : public AbstractModel
                {
                public:
                    RuleEngineCustomAction();
                    ~RuleEngineCustomAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>定制配置唯一 ID。</p>
                     * @return ActionId <p>定制配置唯一 ID。</p>
                     * 
                     */
                    std::string GetActionId() const;

                    /**
                     * 设置<p>定制配置唯一 ID。</p>
                     * @param _actionId <p>定制配置唯一 ID。</p>
                     * 
                     */
                    void SetActionId(const std::string& _actionId);

                    /**
                     * 判断参数 ActionId 是否已赋值
                     * @return ActionId 是否已赋值
                     * 
                     */
                    bool ActionIdHasBeenSet() const;

                    /**
                     * 获取<p>定制配置名称。</p>
                     * @return Name <p>定制配置名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>定制配置名称。</p>
                     * @param _name <p>定制配置名称。</p>
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
                     * 获取<p>定制配置描述。</p>
                     * @return Description <p>定制配置描述。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>定制配置描述。</p>
                     * @param _description <p>定制配置描述。</p>
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
                     * 获取<p>定制配置参数定义列表。</p>
                     * @return Parameters <p>定制配置参数定义列表。</p>
                     * 
                     */
                    std::vector<RuleEngineCustomActionParameterSchema> GetParameters() const;

                    /**
                     * 设置<p>定制配置参数定义列表。</p>
                     * @param _parameters <p>定制配置参数定义列表。</p>
                     * 
                     */
                    void SetParameters(const std::vector<RuleEngineCustomActionParameterSchema>& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     * 
                     */
                    bool ParametersHasBeenSet() const;

                    /**
                     * 获取<p>定制配置支持的匹配条件。</p><p>支持匹配条件参考官方文档 <a href="https://cloud.tencent.com/document/product/1552/125344">通用参考-配置语法-变量</a>。</p>
                     * @return SupportedConditions <p>定制配置支持的匹配条件。</p><p>支持匹配条件参考官方文档 <a href="https://cloud.tencent.com/document/product/1552/125344">通用参考-配置语法-变量</a>。</p>
                     * 
                     */
                    std::vector<std::string> GetSupportedConditions() const;

                    /**
                     * 设置<p>定制配置支持的匹配条件。</p><p>支持匹配条件参考官方文档 <a href="https://cloud.tencent.com/document/product/1552/125344">通用参考-配置语法-变量</a>。</p>
                     * @param _supportedConditions <p>定制配置支持的匹配条件。</p><p>支持匹配条件参考官方文档 <a href="https://cloud.tencent.com/document/product/1552/125344">通用参考-配置语法-变量</a>。</p>
                     * 
                     */
                    void SetSupportedConditions(const std::vector<std::string>& _supportedConditions);

                    /**
                     * 判断参数 SupportedConditions 是否已赋值
                     * @return SupportedConditions 是否已赋值
                     * 
                     */
                    bool SupportedConditionsHasBeenSet() const;

                private:

                    /**
                     * <p>定制配置唯一 ID。</p>
                     */
                    std::string m_actionId;
                    bool m_actionIdHasBeenSet;

                    /**
                     * <p>定制配置名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>定制配置描述。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>定制配置参数定义列表。</p>
                     */
                    std::vector<RuleEngineCustomActionParameterSchema> m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * <p>定制配置支持的匹配条件。</p><p>支持匹配条件参考官方文档 <a href="https://cloud.tencent.com/document/product/1552/125344">通用参考-配置语法-变量</a>。</p>
                     */
                    std::vector<std::string> m_supportedConditions;
                    bool m_supportedConditionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RULEENGINECUSTOMACTION_H_
