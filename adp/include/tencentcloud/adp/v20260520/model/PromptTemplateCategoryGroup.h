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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_PROMPTTEMPLATECATEGORYGROUP_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_PROMPTTEMPLATECATEGORYGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/PromptTemplateCategory.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 提示词模板分类分组
                */
                class PromptTemplateCategoryGroup : public AbstractModel
                {
                public:
                    PromptTemplateCategoryGroup();
                    ~PromptTemplateCategoryGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分类列表
                     * @return CategoryList 分类列表
                     * 
                     */
                    std::vector<PromptTemplateCategory> GetCategoryList() const;

                    /**
                     * 设置分类列表
                     * @param _categoryList 分类列表
                     * 
                     */
                    void SetCategoryList(const std::vector<PromptTemplateCategory>& _categoryList);

                    /**
                     * 判断参数 CategoryList 是否已赋值
                     * @return CategoryList 是否已赋值
                     * 
                     */
                    bool CategoryListHasBeenSet() const;

                    /**
                     * 获取模块标识
                     * @return Module 模块标识
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块标识
                     * @param _module 模块标识
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                private:

                    /**
                     * 分类列表
                     */
                    std::vector<PromptTemplateCategory> m_categoryList;
                    bool m_categoryListHasBeenSet;

                    /**
                     * 模块标识
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_PROMPTTEMPLATECATEGORYGROUP_H_
