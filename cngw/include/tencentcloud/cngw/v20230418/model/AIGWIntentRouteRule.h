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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWINTENTROUTERULE_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWINTENTROUTERULE_H_

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
                * AI 网关意图路由规则
                */
                class AIGWIntentRouteRule : public AbstractModel
                {
                public:
                    AIGWIntentRouteRule();
                    ~AIGWIntentRouteRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>意图编码</p><p>枚举值：</p><ul><li>Coder： 代码编写</li><li>Math： 数学计算</li><li>Translation： 翻译</li><li>Flash： 快速问答</li><li>Complex： 复杂推理</li></ul>
                     * @return IntentCode <p>意图编码</p><p>枚举值：</p><ul><li>Coder： 代码编写</li><li>Math： 数学计算</li><li>Translation： 翻译</li><li>Flash： 快速问答</li><li>Complex： 复杂推理</li></ul>
                     * 
                     */
                    std::string GetIntentCode() const;

                    /**
                     * 设置<p>意图编码</p><p>枚举值：</p><ul><li>Coder： 代码编写</li><li>Math： 数学计算</li><li>Translation： 翻译</li><li>Flash： 快速问答</li><li>Complex： 复杂推理</li></ul>
                     * @param _intentCode <p>意图编码</p><p>枚举值：</p><ul><li>Coder： 代码编写</li><li>Math： 数学计算</li><li>Translation： 翻译</li><li>Flash： 快速问答</li><li>Complex： 复杂推理</li></ul>
                     * 
                     */
                    void SetIntentCode(const std::string& _intentCode);

                    /**
                     * 判断参数 IntentCode 是否已赋值
                     * @return IntentCode 是否已赋值
                     * 
                     */
                    bool IntentCodeHasBeenSet() const;

                    /**
                     * 获取<p>模型服务id</p>
                     * @return ModelServiceId <p>模型服务id</p>
                     * 
                     */
                    std::string GetModelServiceId() const;

                    /**
                     * 设置<p>模型服务id</p>
                     * @param _modelServiceId <p>模型服务id</p>
                     * 
                     */
                    void SetModelServiceId(const std::string& _modelServiceId);

                    /**
                     * 判断参数 ModelServiceId 是否已赋值
                     * @return ModelServiceId 是否已赋值
                     * 
                     */
                    bool ModelServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>意图ID</p>
                     * @return IntentId <p>意图ID</p>
                     * 
                     */
                    std::string GetIntentId() const;

                    /**
                     * 设置<p>意图ID</p>
                     * @param _intentId <p>意图ID</p>
                     * 
                     */
                    void SetIntentId(const std::string& _intentId);

                    /**
                     * 判断参数 IntentId 是否已赋值
                     * @return IntentId 是否已赋值
                     * 
                     */
                    bool IntentIdHasBeenSet() const;

                    /**
                     * 获取<p>意图名称</p>
                     * @return IntentName <p>意图名称</p>
                     * 
                     */
                    std::string GetIntentName() const;

                    /**
                     * 设置<p>意图名称</p>
                     * @param _intentName <p>意图名称</p>
                     * 
                     */
                    void SetIntentName(const std::string& _intentName);

                    /**
                     * 判断参数 IntentName 是否已赋值
                     * @return IntentName 是否已赋值
                     * 
                     */
                    bool IntentNameHasBeenSet() const;

                    /**
                     * 获取<p>当前意图路由规则中目标 ModelServiceId 对应的标准模型名称；为空表示未配置。仅对应 TIONE 模型服务时可配置。非空值最长 256 字节，支持中文、英文、数字、下划线和短横线，须以中文、英文或数字开头。同一网关内不同模型 API 不得使用相同的标准模型名称；同一模型 API 内同一模型服务在多处配置时须保持一致。</p>
                     * @return StandardModelName <p>当前意图路由规则中目标 ModelServiceId 对应的标准模型名称；为空表示未配置。仅对应 TIONE 模型服务时可配置。非空值最长 256 字节，支持中文、英文、数字、下划线和短横线，须以中文、英文或数字开头。同一网关内不同模型 API 不得使用相同的标准模型名称；同一模型 API 内同一模型服务在多处配置时须保持一致。</p>
                     * 
                     */
                    std::string GetStandardModelName() const;

                    /**
                     * 设置<p>当前意图路由规则中目标 ModelServiceId 对应的标准模型名称；为空表示未配置。仅对应 TIONE 模型服务时可配置。非空值最长 256 字节，支持中文、英文、数字、下划线和短横线，须以中文、英文或数字开头。同一网关内不同模型 API 不得使用相同的标准模型名称；同一模型 API 内同一模型服务在多处配置时须保持一致。</p>
                     * @param _standardModelName <p>当前意图路由规则中目标 ModelServiceId 对应的标准模型名称；为空表示未配置。仅对应 TIONE 模型服务时可配置。非空值最长 256 字节，支持中文、英文、数字、下划线和短横线，须以中文、英文或数字开头。同一网关内不同模型 API 不得使用相同的标准模型名称；同一模型 API 内同一模型服务在多处配置时须保持一致。</p>
                     * 
                     */
                    void SetStandardModelName(const std::string& _standardModelName);

                    /**
                     * 判断参数 StandardModelName 是否已赋值
                     * @return StandardModelName 是否已赋值
                     * 
                     */
                    bool StandardModelNameHasBeenSet() const;

                private:

                    /**
                     * <p>意图编码</p><p>枚举值：</p><ul><li>Coder： 代码编写</li><li>Math： 数学计算</li><li>Translation： 翻译</li><li>Flash： 快速问答</li><li>Complex： 复杂推理</li></ul>
                     */
                    std::string m_intentCode;
                    bool m_intentCodeHasBeenSet;

                    /**
                     * <p>模型服务id</p>
                     */
                    std::string m_modelServiceId;
                    bool m_modelServiceIdHasBeenSet;

                    /**
                     * <p>意图ID</p>
                     */
                    std::string m_intentId;
                    bool m_intentIdHasBeenSet;

                    /**
                     * <p>意图名称</p>
                     */
                    std::string m_intentName;
                    bool m_intentNameHasBeenSet;

                    /**
                     * <p>当前意图路由规则中目标 ModelServiceId 对应的标准模型名称；为空表示未配置。仅对应 TIONE 模型服务时可配置。非空值最长 256 字节，支持中文、英文、数字、下划线和短横线，须以中文、英文或数字开头。同一网关内不同模型 API 不得使用相同的标准模型名称；同一模型 API 内同一模型服务在多处配置时须保持一致。</p>
                     */
                    std::string m_standardModelName;
                    bool m_standardModelNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWINTENTROUTERULE_H_
