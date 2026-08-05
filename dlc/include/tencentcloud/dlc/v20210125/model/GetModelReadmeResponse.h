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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_GETMODELREADMERESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_GETMODELREADMERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * GetModelReadme返回参数结构体
                */
                class GetModelReadmeResponse : public AbstractModel
                {
                public:
                    GetModelReadmeResponse();
                    ~GetModelReadmeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模型名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelName <p>模型名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取<p>模型提供方</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Provider <p>模型提供方</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取<p>模型类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelType <p>模型类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelType() const;

                    /**
                     * 判断参数 ModelType 是否已赋值
                     * @return ModelType 是否已赋值
                     * 
                     */
                    bool ModelTypeHasBeenSet() const;

                    /**
                     * 获取<p>参数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParameterSize <p>参数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParameterSize() const;

                    /**
                     * 判断参数 ParameterSize 是否已赋值
                     * @return ParameterSize 是否已赋值
                     * 
                     */
                    bool ParameterSizeHasBeenSet() const;

                    /**
                     * 获取<p>是否是内置模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BuiltIn <p>是否是内置模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetBuiltIn() const;

                    /**
                     * 判断参数 BuiltIn 是否已赋值
                     * @return BuiltIn 是否已赋值
                     * 
                     */
                    bool BuiltInHasBeenSet() const;

                    /**
                     * 获取<p>README 内容（Markdown 格式）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Readme <p>README 内容（Markdown 格式）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReadme() const;

                    /**
                     * 判断参数 Readme 是否已赋值
                     * @return Readme 是否已赋值
                     * 
                     */
                    bool ReadmeHasBeenSet() const;

                private:

                    /**
                     * <p>模型名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>模型提供方</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * <p>模型类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelType;
                    bool m_modelTypeHasBeenSet;

                    /**
                     * <p>参数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parameterSize;
                    bool m_parameterSizeHasBeenSet;

                    /**
                     * <p>是否是内置模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_builtIn;
                    bool m_builtInHasBeenSet;

                    /**
                     * <p>README 内容（Markdown 格式）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_readme;
                    bool m_readmeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_GETMODELREADMERESPONSE_H_
