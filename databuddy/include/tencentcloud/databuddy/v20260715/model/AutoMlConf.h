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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_AUTOMLCONF_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_AUTOMLCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * AutoML配置
                */
                class AutoMlConf : public AbstractModel
                {
                public:
                    AutoMlConf();
                    ~AutoMlConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取评估指标：acc/auc/f1/mse/mae/rmse
                     * @return EvaluationMetric 评估指标：acc/auc/f1/mse/mae/rmse
                     * 
                     */
                    std::string GetEvaluationMetric() const;

                    /**
                     * 设置评估指标：acc/auc/f1/mse/mae/rmse
                     * @param _evaluationMetric 评估指标：acc/auc/f1/mse/mae/rmse
                     * 
                     */
                    void SetEvaluationMetric(const std::string& _evaluationMetric);

                    /**
                     * 判断参数 EvaluationMetric 是否已赋值
                     * @return EvaluationMetric 是否已赋值
                     * 
                     */
                    bool EvaluationMetricHasBeenSet() const;

                    /**
                     * 获取搜索空间列表
                     * @return SearchSpace 搜索空间列表
                     * 
                     */
                    std::vector<std::string> GetSearchSpace() const;

                    /**
                     * 设置搜索空间列表
                     * @param _searchSpace 搜索空间列表
                     * 
                     */
                    void SetSearchSpace(const std::vector<std::string>& _searchSpace);

                    /**
                     * 判断参数 SearchSpace 是否已赋值
                     * @return SearchSpace 是否已赋值
                     * 
                     */
                    bool SearchSpaceHasBeenSet() const;

                    /**
                     * 获取最大运行时间（分钟），默认60
                     * @return MaxRuntimeMinutes 最大运行时间（分钟），默认60
                     * 
                     */
                    int64_t GetMaxRuntimeMinutes() const;

                    /**
                     * 设置最大运行时间（分钟），默认60
                     * @param _maxRuntimeMinutes 最大运行时间（分钟），默认60
                     * 
                     */
                    void SetMaxRuntimeMinutes(const int64_t& _maxRuntimeMinutes);

                    /**
                     * 判断参数 MaxRuntimeMinutes 是否已赋值
                     * @return MaxRuntimeMinutes 是否已赋值
                     * 
                     */
                    bool MaxRuntimeMinutesHasBeenSet() const;

                    /**
                     * 获取最大运行次数，默认100
                     * @return MaxRunCount 最大运行次数，默认100
                     * 
                     */
                    int64_t GetMaxRunCount() const;

                    /**
                     * 设置最大运行次数，默认100
                     * @param _maxRunCount 最大运行次数，默认100
                     * 
                     */
                    void SetMaxRunCount(const int64_t& _maxRunCount);

                    /**
                     * 判断参数 MaxRunCount 是否已赋值
                     * @return MaxRunCount 是否已赋值
                     * 
                     */
                    bool MaxRunCountHasBeenSet() const;

                    /**
                     * 获取最大运行并发，默认1，最大100
                     * @return MaxConcurrency 最大运行并发，默认1，最大100
                     * 
                     */
                    int64_t GetMaxConcurrency() const;

                    /**
                     * 设置最大运行并发，默认1，最大100
                     * @param _maxConcurrency 最大运行并发，默认1，最大100
                     * 
                     */
                    void SetMaxConcurrency(const int64_t& _maxConcurrency);

                    /**
                     * 判断参数 MaxConcurrency 是否已赋值
                     * @return MaxConcurrency 是否已赋值
                     * 
                     */
                    bool MaxConcurrencyHasBeenSet() const;

                private:

                    /**
                     * 评估指标：acc/auc/f1/mse/mae/rmse
                     */
                    std::string m_evaluationMetric;
                    bool m_evaluationMetricHasBeenSet;

                    /**
                     * 搜索空间列表
                     */
                    std::vector<std::string> m_searchSpace;
                    bool m_searchSpaceHasBeenSet;

                    /**
                     * 最大运行时间（分钟），默认60
                     */
                    int64_t m_maxRuntimeMinutes;
                    bool m_maxRuntimeMinutesHasBeenSet;

                    /**
                     * 最大运行次数，默认100
                     */
                    int64_t m_maxRunCount;
                    bool m_maxRunCountHasBeenSet;

                    /**
                     * 最大运行并发，默认1，最大100
                     */
                    int64_t m_maxConcurrency;
                    bool m_maxConcurrencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_AUTOMLCONF_H_
