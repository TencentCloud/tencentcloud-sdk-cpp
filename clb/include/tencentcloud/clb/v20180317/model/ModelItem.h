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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODELITEM_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODELITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * model 信息
                */
                class ModelItem : public AbstractModel
                {
                public:
                    ModelItem();
                    ~ModelItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模型唯一标识, 用于实际访问</p>
                     * @return ModelId <p>模型唯一标识, 用于实际访问</p>
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置<p>模型唯一标识, 用于实际访问</p>
                     * @param _modelId <p>模型唯一标识, 用于实际访问</p>
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
                     * 获取<p>该模型当前支持的输入多模态能力列表</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>image： 支持图像输入</li><li>file： 支持文件输入（当前仅支持pdf）</li></ul><p>默认值：text</p>
                     * @return InputModalities <p>该模型当前支持的输入多模态能力列表</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>image： 支持图像输入</li><li>file： 支持文件输入（当前仅支持pdf）</li></ul><p>默认值：text</p>
                     * 
                     */
                    std::vector<std::string> GetInputModalities() const;

                    /**
                     * 设置<p>该模型当前支持的输入多模态能力列表</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>image： 支持图像输入</li><li>file： 支持文件输入（当前仅支持pdf）</li></ul><p>默认值：text</p>
                     * @param _inputModalities <p>该模型当前支持的输入多模态能力列表</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>image： 支持图像输入</li><li>file： 支持文件输入（当前仅支持pdf）</li></ul><p>默认值：text</p>
                     * 
                     */
                    void SetInputModalities(const std::vector<std::string>& _inputModalities);

                    /**
                     * 判断参数 InputModalities 是否已赋值
                     * @return InputModalities 是否已赋值
                     * 
                     */
                    bool InputModalitiesHasBeenSet() const;

                    /**
                     * 获取<p>模型别名, 可以用于实际访问</p>
                     * @return ModelAlias <p>模型别名, 可以用于实际访问</p>
                     * 
                     */
                    std::string GetModelAlias() const;

                    /**
                     * 设置<p>模型别名, 可以用于实际访问</p>
                     * @param _modelAlias <p>模型别名, 可以用于实际访问</p>
                     * 
                     */
                    void SetModelAlias(const std::string& _modelAlias);

                    /**
                     * 判断参数 ModelAlias 是否已赋值
                     * @return ModelAlias 是否已赋值
                     * 
                     */
                    bool ModelAliasHasBeenSet() const;

                private:

                    /**
                     * <p>模型唯一标识, 用于实际访问</p>
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * <p>该模型当前支持的输入多模态能力列表</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>image： 支持图像输入</li><li>file： 支持文件输入（当前仅支持pdf）</li></ul><p>默认值：text</p>
                     */
                    std::vector<std::string> m_inputModalities;
                    bool m_inputModalitiesHasBeenSet;

                    /**
                     * <p>模型别名, 可以用于实际访问</p>
                     */
                    std::string m_modelAlias;
                    bool m_modelAliasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODELITEM_H_
