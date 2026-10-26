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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWINTENTROUTE_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWINTENTROUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/AIGWIntentRouteRule.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * AI 网关意图路由配置
                */
                class AIGWIntentRoute : public AbstractModel
                {
                public:
                    AIGWIntentRoute();
                    ~AIGWIntentRoute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>意图识别模型id</p>
                     * @return IntentModelServiceId <p>意图识别模型id</p>
                     * 
                     */
                    std::string GetIntentModelServiceId() const;

                    /**
                     * 设置<p>意图识别模型id</p>
                     * @param _intentModelServiceId <p>意图识别模型id</p>
                     * 
                     */
                    void SetIntentModelServiceId(const std::string& _intentModelServiceId);

                    /**
                     * 判断参数 IntentModelServiceId 是否已赋值
                     * @return IntentModelServiceId 是否已赋值
                     * 
                     */
                    bool IntentModelServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>置信度</p>
                     * @return ConfidenceThreshold <p>置信度</p>
                     * 
                     */
                    double GetConfidenceThreshold() const;

                    /**
                     * 设置<p>置信度</p>
                     * @param _confidenceThreshold <p>置信度</p>
                     * 
                     */
                    void SetConfidenceThreshold(const double& _confidenceThreshold);

                    /**
                     * 判断参数 ConfidenceThreshold 是否已赋值
                     * @return ConfidenceThreshold 是否已赋值
                     * 
                     */
                    bool ConfidenceThresholdHasBeenSet() const;

                    /**
                     * 获取<p>默认服务id</p>
                     * @return DefaultModelServiceId <p>默认服务id</p>
                     * 
                     */
                    std::string GetDefaultModelServiceId() const;

                    /**
                     * 设置<p>默认服务id</p>
                     * @param _defaultModelServiceId <p>默认服务id</p>
                     * 
                     */
                    void SetDefaultModelServiceId(const std::string& _defaultModelServiceId);

                    /**
                     * 判断参数 DefaultModelServiceId 是否已赋值
                     * @return DefaultModelServiceId 是否已赋值
                     * 
                     */
                    bool DefaultModelServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>规则</p>
                     * @return Rules <p>规则</p>
                     * 
                     */
                    std::vector<AIGWIntentRouteRule> GetRules() const;

                    /**
                     * 设置<p>规则</p>
                     * @param _rules <p>规则</p>
                     * 
                     */
                    void SetRules(const std::vector<AIGWIntentRouteRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取<p>默认路由目标 DefaultModelServiceId 对应的标准模型名称；为空表示未配置。仅对应 TIONE 模型服务时可配置。非空值最长 256 字节，支持中文、英文、数字、下划线和短横线，须以中文、英文或数字开头。同一网关内不同模型 API 不得使用相同的标准模型名称；同一模型 API 内同一模型服务在多处配置时须保持一致。</p>
                     * @return DefaultStandardModelName <p>默认路由目标 DefaultModelServiceId 对应的标准模型名称；为空表示未配置。仅对应 TIONE 模型服务时可配置。非空值最长 256 字节，支持中文、英文、数字、下划线和短横线，须以中文、英文或数字开头。同一网关内不同模型 API 不得使用相同的标准模型名称；同一模型 API 内同一模型服务在多处配置时须保持一致。</p>
                     * 
                     */
                    std::string GetDefaultStandardModelName() const;

                    /**
                     * 设置<p>默认路由目标 DefaultModelServiceId 对应的标准模型名称；为空表示未配置。仅对应 TIONE 模型服务时可配置。非空值最长 256 字节，支持中文、英文、数字、下划线和短横线，须以中文、英文或数字开头。同一网关内不同模型 API 不得使用相同的标准模型名称；同一模型 API 内同一模型服务在多处配置时须保持一致。</p>
                     * @param _defaultStandardModelName <p>默认路由目标 DefaultModelServiceId 对应的标准模型名称；为空表示未配置。仅对应 TIONE 模型服务时可配置。非空值最长 256 字节，支持中文、英文、数字、下划线和短横线，须以中文、英文或数字开头。同一网关内不同模型 API 不得使用相同的标准模型名称；同一模型 API 内同一模型服务在多处配置时须保持一致。</p>
                     * 
                     */
                    void SetDefaultStandardModelName(const std::string& _defaultStandardModelName);

                    /**
                     * 判断参数 DefaultStandardModelName 是否已赋值
                     * @return DefaultStandardModelName 是否已赋值
                     * 
                     */
                    bool DefaultStandardModelNameHasBeenSet() const;

                    /**
                     * 获取<p>执行意图识别的 IntentModelServiceId 对应的标准模型名称；为空表示未配置。仅对应 TIONE 模型服务时可配置。非空值最长 256 字节，支持中文、英文、数字、下划线和短横线，须以中文、英文或数字开头。同一网关内不同模型 API 不得使用相同的标准模型名称；同一模型 API 内同一模型服务在多处配置时须保持一致。</p>
                     * @return IntentStandardModelName <p>执行意图识别的 IntentModelServiceId 对应的标准模型名称；为空表示未配置。仅对应 TIONE 模型服务时可配置。非空值最长 256 字节，支持中文、英文、数字、下划线和短横线，须以中文、英文或数字开头。同一网关内不同模型 API 不得使用相同的标准模型名称；同一模型 API 内同一模型服务在多处配置时须保持一致。</p>
                     * 
                     */
                    std::string GetIntentStandardModelName() const;

                    /**
                     * 设置<p>执行意图识别的 IntentModelServiceId 对应的标准模型名称；为空表示未配置。仅对应 TIONE 模型服务时可配置。非空值最长 256 字节，支持中文、英文、数字、下划线和短横线，须以中文、英文或数字开头。同一网关内不同模型 API 不得使用相同的标准模型名称；同一模型 API 内同一模型服务在多处配置时须保持一致。</p>
                     * @param _intentStandardModelName <p>执行意图识别的 IntentModelServiceId 对应的标准模型名称；为空表示未配置。仅对应 TIONE 模型服务时可配置。非空值最长 256 字节，支持中文、英文、数字、下划线和短横线，须以中文、英文或数字开头。同一网关内不同模型 API 不得使用相同的标准模型名称；同一模型 API 内同一模型服务在多处配置时须保持一致。</p>
                     * 
                     */
                    void SetIntentStandardModelName(const std::string& _intentStandardModelName);

                    /**
                     * 判断参数 IntentStandardModelName 是否已赋值
                     * @return IntentStandardModelName 是否已赋值
                     * 
                     */
                    bool IntentStandardModelNameHasBeenSet() const;

                private:

                    /**
                     * <p>意图识别模型id</p>
                     */
                    std::string m_intentModelServiceId;
                    bool m_intentModelServiceIdHasBeenSet;

                    /**
                     * <p>置信度</p>
                     */
                    double m_confidenceThreshold;
                    bool m_confidenceThresholdHasBeenSet;

                    /**
                     * <p>默认服务id</p>
                     */
                    std::string m_defaultModelServiceId;
                    bool m_defaultModelServiceIdHasBeenSet;

                    /**
                     * <p>规则</p>
                     */
                    std::vector<AIGWIntentRouteRule> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * <p>默认路由目标 DefaultModelServiceId 对应的标准模型名称；为空表示未配置。仅对应 TIONE 模型服务时可配置。非空值最长 256 字节，支持中文、英文、数字、下划线和短横线，须以中文、英文或数字开头。同一网关内不同模型 API 不得使用相同的标准模型名称；同一模型 API 内同一模型服务在多处配置时须保持一致。</p>
                     */
                    std::string m_defaultStandardModelName;
                    bool m_defaultStandardModelNameHasBeenSet;

                    /**
                     * <p>执行意图识别的 IntentModelServiceId 对应的标准模型名称；为空表示未配置。仅对应 TIONE 模型服务时可配置。非空值最长 256 字节，支持中文、英文、数字、下划线和短横线，须以中文、英文或数字开头。同一网关内不同模型 API 不得使用相同的标准模型名称；同一模型 API 内同一模型服务在多处配置时须保持一致。</p>
                     */
                    std::string m_intentStandardModelName;
                    bool m_intentStandardModelNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWINTENTROUTE_H_
