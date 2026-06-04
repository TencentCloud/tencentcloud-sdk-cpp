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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODELBASIC_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODELBASIC_H_

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
                * 模型基本信息
                */
                class ModelBasic : public AbstractModel
                {
                public:
                    ModelBasic();
                    ~ModelBasic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模型描述
                     * @return Description 模型描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置模型描述
                     * @param _description 模型描述
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
                     * 获取模型图标地址
                     * @return IconUrl 模型图标地址
                     * 
                     */
                    std::string GetIconUrl() const;

                    /**
                     * 设置模型图标地址
                     * @param _iconUrl 模型图标地址
                     * 
                     */
                    void SetIconUrl(const std::string& _iconUrl);

                    /**
                     * 判断参数 IconUrl 是否已赋值
                     * @return IconUrl 是否已赋值
                     * 
                     */
                    bool IconUrlHasBeenSet() const;

                    /**
                     * 获取模型ID
                     * @return ModelId 模型ID
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置模型ID
                     * @param _modelId 模型ID
                     * 
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取模型类型。1-LLM模型, 2-Rerank模型, 3-Embedding模型, 4-文档解析模型
                     * @return ModelType 模型类型。1-LLM模型, 2-Rerank模型, 3-Embedding模型, 4-文档解析模型
                     * 
                     */
                    int64_t GetModelType() const;

                    /**
                     * 设置模型类型。1-LLM模型, 2-Rerank模型, 3-Embedding模型, 4-文档解析模型
                     * @param _modelType 模型类型。1-LLM模型, 2-Rerank模型, 3-Embedding模型, 4-文档解析模型
                     * 
                     */
                    void SetModelType(const int64_t& _modelType);

                    /**
                     * 判断参数 ModelType 是否已赋值
                     * @return ModelType 是否已赋值
                     * 
                     */
                    bool ModelTypeHasBeenSet() const;

                    /**
                     * 获取模型名称
                     * @return Name 模型名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置模型名称
                     * @param _name 模型名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 模型描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 模型图标地址
                     */
                    std::string m_iconUrl;
                    bool m_iconUrlHasBeenSet;

                    /**
                     * 模型ID
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 模型类型。1-LLM模型, 2-Rerank模型, 3-Embedding模型, 4-文档解析模型
                     */
                    int64_t m_modelType;
                    bool m_modelTypeHasBeenSet;

                    /**
                     * 模型名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODELBASIC_H_
