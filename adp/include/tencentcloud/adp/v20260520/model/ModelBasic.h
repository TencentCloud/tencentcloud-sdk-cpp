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
                * <p>模型基本信息（已弃用，请使用 ModelProfile）</p>
                */
                class ModelBasic : public AbstractModel
                {
                public:
                    ModelBasic();
                    ~ModelBasic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模型描述</p>
                     * @return Description <p>模型描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>模型描述</p>
                     * @param _description <p>模型描述</p>
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
                     * 获取<p>模型图标地址</p>
                     * @return IconUrl <p>模型图标地址</p>
                     * 
                     */
                    std::string GetIconUrl() const;

                    /**
                     * 设置<p>模型图标地址</p>
                     * @param _iconUrl <p>模型图标地址</p>
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
                     * 获取<p>模型ID</p>
                     * @return ModelId <p>模型ID</p>
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置<p>模型ID</p>
                     * @param _modelId <p>模型ID</p>
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
                     * 获取<p>模型类型</p><table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>MODEL_TYPE_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>MODEL_TYPE_LLM</td><td>1</td><td>LLM模型</td></tr><tr><td>MODEL_TYPE_RERANK</td><td>2</td><td>Rerank模型</td></tr><tr><td>MODEL_TYPE_EMBEDDING</td><td>3</td><td>Embedding模型</td></tr><tr><td>MODEL_TYPE_FILE_PARSE</td><td>4</td><td>文档解析模型</td></tr></table>
                     * @return ModelType <p>模型类型</p><table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>MODEL_TYPE_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>MODEL_TYPE_LLM</td><td>1</td><td>LLM模型</td></tr><tr><td>MODEL_TYPE_RERANK</td><td>2</td><td>Rerank模型</td></tr><tr><td>MODEL_TYPE_EMBEDDING</td><td>3</td><td>Embedding模型</td></tr><tr><td>MODEL_TYPE_FILE_PARSE</td><td>4</td><td>文档解析模型</td></tr></table>
                     * 
                     */
                    int64_t GetModelType() const;

                    /**
                     * 设置<p>模型类型</p><table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>MODEL_TYPE_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>MODEL_TYPE_LLM</td><td>1</td><td>LLM模型</td></tr><tr><td>MODEL_TYPE_RERANK</td><td>2</td><td>Rerank模型</td></tr><tr><td>MODEL_TYPE_EMBEDDING</td><td>3</td><td>Embedding模型</td></tr><tr><td>MODEL_TYPE_FILE_PARSE</td><td>4</td><td>文档解析模型</td></tr></table>
                     * @param _modelType <p>模型类型</p><table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>MODEL_TYPE_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>MODEL_TYPE_LLM</td><td>1</td><td>LLM模型</td></tr><tr><td>MODEL_TYPE_RERANK</td><td>2</td><td>Rerank模型</td></tr><tr><td>MODEL_TYPE_EMBEDDING</td><td>3</td><td>Embedding模型</td></tr><tr><td>MODEL_TYPE_FILE_PARSE</td><td>4</td><td>文档解析模型</td></tr></table>
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
                     * 获取<p>模型名称</p>
                     * @return Name <p>模型名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>模型名称</p>
                     * @param _name <p>模型名称</p>
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
                     * <p>模型描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>模型图标地址</p>
                     */
                    std::string m_iconUrl;
                    bool m_iconUrlHasBeenSet;

                    /**
                     * <p>模型ID</p>
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * <p>模型类型</p><table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>MODEL_TYPE_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>MODEL_TYPE_LLM</td><td>1</td><td>LLM模型</td></tr><tr><td>MODEL_TYPE_RERANK</td><td>2</td><td>Rerank模型</td></tr><tr><td>MODEL_TYPE_EMBEDDING</td><td>3</td><td>Embedding模型</td></tr><tr><td>MODEL_TYPE_FILE_PARSE</td><td>4</td><td>文档解析模型</td></tr></table>
                     */
                    int64_t m_modelType;
                    bool m_modelTypeHasBeenSet;

                    /**
                     * <p>模型名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODELBASIC_H_
