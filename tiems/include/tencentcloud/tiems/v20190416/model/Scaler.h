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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_SCALER_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_SCALER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiems/v20190416/model/Option.h>


namespace TencentCloud
{
    namespace Tiems
    {
        namespace V20190416
        {
            namespace Model
            {
                /**
                * 扩缩容配置
                */
                class Scaler : public AbstractModel
                {
                public:
                    Scaler();
                    ~Scaler() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取最大副本数，ScaleMode 为 MANUAL 时辞会此值会被置为 StartReplicas 取值
                     * @return MaxReplicas 最大副本数，ScaleMode 为 MANUAL 时辞会此值会被置为 StartReplicas 取值
                     * 
                     */
                    uint64_t GetMaxReplicas() const;

                    /**
                     * 设置最大副本数，ScaleMode 为 MANUAL 时辞会此值会被置为 StartReplicas 取值
                     * @param _maxReplicas 最大副本数，ScaleMode 为 MANUAL 时辞会此值会被置为 StartReplicas 取值
                     * 
                     */
                    void SetMaxReplicas(const uint64_t& _maxReplicas);

                    /**
                     * 判断参数 MaxReplicas 是否已赋值
                     * @return MaxReplicas 是否已赋值
                     * 
                     */
                    bool MaxReplicasHasBeenSet() const;

                    /**
                     * 获取最小副本数，ScaleMode 为 MANUAL 时辞会此值会被置为 StartReplicas 取值
                     * @return MinReplicas 最小副本数，ScaleMode 为 MANUAL 时辞会此值会被置为 StartReplicas 取值
                     * 
                     */
                    uint64_t GetMinReplicas() const;

                    /**
                     * 设置最小副本数，ScaleMode 为 MANUAL 时辞会此值会被置为 StartReplicas 取值
                     * @param _minReplicas 最小副本数，ScaleMode 为 MANUAL 时辞会此值会被置为 StartReplicas 取值
                     * 
                     */
                    void SetMinReplicas(const uint64_t& _minReplicas);

                    /**
                     * 判断参数 MinReplicas 是否已赋值
                     * @return MinReplicas 是否已赋值
                     * 
                     */
                    bool MinReplicasHasBeenSet() const;

                    /**
                     * 获取起始副本数
                     * @return StartReplicas 起始副本数
                     * 
                     */
                    uint64_t GetStartReplicas() const;

                    /**
                     * 设置起始副本数
                     * @param _startReplicas 起始副本数
                     * 
                     */
                    void SetStartReplicas(const uint64_t& _startReplicas);

                    /**
                     * 判断参数 StartReplicas 是否已赋值
                     * @return StartReplicas 是否已赋值
                     * 
                     */
                    bool StartReplicasHasBeenSet() const;

                    /**
                     * 获取扩缩容指标，选择自动扩缩容时至少需要选择一个指标，支持CPU-UTIL、MEMORY-UTIL
                     * @return HpaMetrics 扩缩容指标，选择自动扩缩容时至少需要选择一个指标，支持CPU-UTIL、MEMORY-UTIL
                     * 
                     */
                    std::vector<Option> GetHpaMetrics() const;

                    /**
                     * 设置扩缩容指标，选择自动扩缩容时至少需要选择一个指标，支持CPU-UTIL、MEMORY-UTIL
                     * @param _hpaMetrics 扩缩容指标，选择自动扩缩容时至少需要选择一个指标，支持CPU-UTIL、MEMORY-UTIL
                     * 
                     */
                    void SetHpaMetrics(const std::vector<Option>& _hpaMetrics);

                    /**
                     * 判断参数 HpaMetrics 是否已赋值
                     * @return HpaMetrics 是否已赋值
                     * 
                     */
                    bool HpaMetricsHasBeenSet() const;

                private:

                    /**
                     * 最大副本数，ScaleMode 为 MANUAL 时辞会此值会被置为 StartReplicas 取值
                     */
                    uint64_t m_maxReplicas;
                    bool m_maxReplicasHasBeenSet;

                    /**
                     * 最小副本数，ScaleMode 为 MANUAL 时辞会此值会被置为 StartReplicas 取值
                     */
                    uint64_t m_minReplicas;
                    bool m_minReplicasHasBeenSet;

                    /**
                     * 起始副本数
                     */
                    uint64_t m_startReplicas;
                    bool m_startReplicasHasBeenSet;

                    /**
                     * 扩缩容指标，选择自动扩缩容时至少需要选择一个指标，支持CPU-UTIL、MEMORY-UTIL
                     */
                    std::vector<Option> m_hpaMetrics;
                    bool m_hpaMetricsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_SCALER_H_
