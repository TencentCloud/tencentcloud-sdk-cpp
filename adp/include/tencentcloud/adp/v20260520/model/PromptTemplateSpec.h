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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_PROMPTTEMPLATESPEC_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_PROMPTTEMPLATESPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 提示词模板规格参数（创建/修改）
                */
                class PromptTemplateSpec : public AbstractModel
                {
                public:
                    PromptTemplateSpec();
                    ~PromptTemplateSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分类标识
                     * @return CategoryKey 分类标识
                     * 
                     */
                    std::string GetCategoryKey() const;

                    /**
                     * 设置分类标识
                     * @param _categoryKey 分类标识
                     * 
                     */
                    void SetCategoryKey(const std::string& _categoryKey);

                    /**
                     * 判断参数 CategoryKey 是否已赋值
                     * @return CategoryKey 是否已赋值
                     * 
                     */
                    bool CategoryKeyHasBeenSet() const;

                    /**
                     * 获取自定义变量列表
                     * @return CustomVariableList 自定义变量列表
                     * 
                     */
                    std::vector<std::string> GetCustomVariableList() const;

                    /**
                     * 设置自定义变量列表
                     * @param _customVariableList 自定义变量列表
                     * 
                     */
                    void SetCustomVariableList(const std::vector<std::string>& _customVariableList);

                    /**
                     * 判断参数 CustomVariableList 是否已赋值
                     * @return CustomVariableList 是否已赋值
                     * 
                     */
                    bool CustomVariableListHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
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
                     * 获取标签ID列表
                     * @return LabelIdList 标签ID列表
                     * 
                     */
                    std::vector<std::string> GetLabelIdList() const;

                    /**
                     * 设置标签ID列表
                     * @param _labelIdList 标签ID列表
                     * 
                     */
                    void SetLabelIdList(const std::vector<std::string>& _labelIdList);

                    /**
                     * 判断参数 LabelIdList 是否已赋值
                     * @return LabelIdList 是否已赋值
                     * 
                     */
                    bool LabelIdListHasBeenSet() const;

                    /**
                     * 获取模板名称
                     * @return Name 模板名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置模板名称
                     * @param _name 模板名称
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
                     * 获取提示词内容
                     * @return PromptContent 提示词内容
                     * 
                     */
                    std::string GetPromptContent() const;

                    /**
                     * 设置提示词内容
                     * @param _promptContent 提示词内容
                     * 
                     */
                    void SetPromptContent(const std::string& _promptContent);

                    /**
                     * 判断参数 PromptContent 是否已赋值
                     * @return PromptContent 是否已赋值
                     * 
                     */
                    bool PromptContentHasBeenSet() const;

                private:

                    /**
                     * 分类标识
                     */
                    std::string m_categoryKey;
                    bool m_categoryKeyHasBeenSet;

                    /**
                     * 自定义变量列表
                     */
                    std::vector<std::string> m_customVariableList;
                    bool m_customVariableListHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 标签ID列表
                     */
                    std::vector<std::string> m_labelIdList;
                    bool m_labelIdListHasBeenSet;

                    /**
                     * 模板名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 提示词内容
                     */
                    std::string m_promptContent;
                    bool m_promptContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_PROMPTTEMPLATESPEC_H_
