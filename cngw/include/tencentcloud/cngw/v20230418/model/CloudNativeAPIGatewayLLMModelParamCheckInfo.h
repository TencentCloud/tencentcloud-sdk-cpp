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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_CLOUDNATIVEAPIGATEWAYLLMMODELPARAMCHECKINFO_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_CLOUDNATIVEAPIGATEWAYLLMMODELPARAMCHECKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * LLM-模型参数检查信息
                */
                class CloudNativeAPIGatewayLLMModelParamCheckInfo : public AbstractModel
                {
                public:
                    CloudNativeAPIGatewayLLMModelParamCheckInfo();
                    ~CloudNativeAPIGatewayLLMModelParamCheckInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取允许的模型列表。
                     * @return AllowModelList 允许的模型列表。
                     * 
                     */
                    std::vector<std::string> GetAllowModelList() const;

                    /**
                     * 设置允许的模型列表。
                     * @param _allowModelList 允许的模型列表。
                     * 
                     */
                    void SetAllowModelList(const std::vector<std::string>& _allowModelList);

                    /**
                     * 判断参数 AllowModelList 是否已赋值
                     * @return AllowModelList 是否已赋值
                     * 
                     */
                    bool AllowModelListHasBeenSet() const;

                    /**
                     * 获取模型参数校验失败时的处理策略，选项：Return404（返回404）、FallBackToDefaultModel（使用默认模型降级）。
                     * @return ModelValidationFailureStrategy 模型参数校验失败时的处理策略，选项：Return404（返回404）、FallBackToDefaultModel（使用默认模型降级）。
                     * 
                     */
                    std::string GetModelValidationFailureStrategy() const;

                    /**
                     * 设置模型参数校验失败时的处理策略，选项：Return404（返回404）、FallBackToDefaultModel（使用默认模型降级）。
                     * @param _modelValidationFailureStrategy 模型参数校验失败时的处理策略，选项：Return404（返回404）、FallBackToDefaultModel（使用默认模型降级）。
                     * 
                     */
                    void SetModelValidationFailureStrategy(const std::string& _modelValidationFailureStrategy);

                    /**
                     * 判断参数 ModelValidationFailureStrategy 是否已赋值
                     * @return ModelValidationFailureStrategy 是否已赋值
                     * 
                     */
                    bool ModelValidationFailureStrategyHasBeenSet() const;

                private:

                    /**
                     * 允许的模型列表。
                     */
                    std::vector<std::string> m_allowModelList;
                    bool m_allowModelListHasBeenSet;

                    /**
                     * 模型参数校验失败时的处理策略，选项：Return404（返回404）、FallBackToDefaultModel（使用默认模型降级）。
                     */
                    std::string m_modelValidationFailureStrategy;
                    bool m_modelValidationFailureStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_CLOUDNATIVEAPIGATEWAYLLMMODELPARAMCHECKINFO_H_
