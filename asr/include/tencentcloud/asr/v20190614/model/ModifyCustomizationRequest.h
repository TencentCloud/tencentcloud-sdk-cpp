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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_MODIFYCUSTOMIZATIONREQUEST_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_MODIFYCUSTOMIZATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * ModifyCustomization请求参数结构体
                */
                class ModifyCustomizationRequest : public AbstractModel
                {
                public:
                    ModifyCustomizationRequest();
                    ~ModifyCustomizationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要修改的模型ID
                     * @return ModelId 要修改的模型ID
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置要修改的模型ID
                     * @param _modelId 要修改的模型ID
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
                     * 获取要修改的模型名称，长度需在1-20个字符之间
                     * @return ModelName 要修改的模型名称，长度需在1-20个字符之间
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置要修改的模型名称，长度需在1-20个字符之间
                     * @param _modelName 要修改的模型名称，长度需在1-20个字符之间
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取要修改的模型类型，为8k或者16k
                     * @return ModelType 要修改的模型类型，为8k或者16k
                     * 
                     */
                    std::string GetModelType() const;

                    /**
                     * 设置要修改的模型类型，为8k或者16k
                     * @param _modelType 要修改的模型类型，为8k或者16k
                     * 
                     */
                    void SetModelType(const std::string& _modelType);

                    /**
                     * 判断参数 ModelType 是否已赋值
                     * @return ModelType 是否已赋值
                     * 
                     */
                    bool ModelTypeHasBeenSet() const;

                    /**
                     * 获取要修改的模型语料的下载地址，目前仅支持腾讯云cos
                     * @return TextUrl 要修改的模型语料的下载地址，目前仅支持腾讯云cos
                     * 
                     */
                    std::string GetTextUrl() const;

                    /**
                     * 设置要修改的模型语料的下载地址，目前仅支持腾讯云cos
                     * @param _textUrl 要修改的模型语料的下载地址，目前仅支持腾讯云cos
                     * 
                     */
                    void SetTextUrl(const std::string& _textUrl);

                    /**
                     * 判断参数 TextUrl 是否已赋值
                     * @return TextUrl 是否已赋值
                     * 
                     */
                    bool TextUrlHasBeenSet() const;

                private:

                    /**
                     * 要修改的模型ID
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 要修改的模型名称，长度需在1-20个字符之间
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 要修改的模型类型，为8k或者16k
                     */
                    std::string m_modelType;
                    bool m_modelTypeHasBeenSet;

                    /**
                     * 要修改的模型语料的下载地址，目前仅支持腾讯云cos
                     */
                    std::string m_textUrl;
                    bool m_textUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_MODIFYCUSTOMIZATIONREQUEST_H_
