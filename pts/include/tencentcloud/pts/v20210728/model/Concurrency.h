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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_CONCURRENCY_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_CONCURRENCY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/Stage.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * 并发模式的施压配置
                */
                class Concurrency : public AbstractModel
                {
                public:
                    Concurrency();
                    ~Concurrency() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取多阶段配置数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Stages 多阶段配置数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Stage> GetStages() const;

                    /**
                     * 设置多阶段配置数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stages 多阶段配置数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStages(const std::vector<Stage>& _stages);

                    /**
                     * 判断参数 Stages 是否已赋值
                     * @return Stages 是否已赋值
                     * 
                     */
                    bool StagesHasBeenSet() const;

                    /**
                     * 获取运行次数
                     * @return IterationCount 运行次数
                     * 
                     */
                    int64_t GetIterationCount() const;

                    /**
                     * 设置运行次数
                     * @param _iterationCount 运行次数
                     * 
                     */
                    void SetIterationCount(const int64_t& _iterationCount);

                    /**
                     * 判断参数 IterationCount 是否已赋值
                     * @return IterationCount 是否已赋值
                     * 
                     */
                    bool IterationCountHasBeenSet() const;

                    /**
                     * 获取最大RPS
                     * @return MaxRequestsPerSecond 最大RPS
                     * 
                     */
                    int64_t GetMaxRequestsPerSecond() const;

                    /**
                     * 设置最大RPS
                     * @param _maxRequestsPerSecond 最大RPS
                     * 
                     */
                    void SetMaxRequestsPerSecond(const int64_t& _maxRequestsPerSecond);

                    /**
                     * 判断参数 MaxRequestsPerSecond 是否已赋值
                     * @return MaxRequestsPerSecond 是否已赋值
                     * 
                     */
                    bool MaxRequestsPerSecondHasBeenSet() const;

                    /**
                     * 获取优雅终止任务的等待时间
                     * @return GracefulStopSeconds 优雅终止任务的等待时间
                     * 
                     */
                    int64_t GetGracefulStopSeconds() const;

                    /**
                     * 设置优雅终止任务的等待时间
                     * @param _gracefulStopSeconds 优雅终止任务的等待时间
                     * 
                     */
                    void SetGracefulStopSeconds(const int64_t& _gracefulStopSeconds);

                    /**
                     * 判断参数 GracefulStopSeconds 是否已赋值
                     * @return GracefulStopSeconds 是否已赋值
                     * 
                     */
                    bool GracefulStopSecondsHasBeenSet() const;

                    /**
                     * 获取资源数
                     * @return Resources 资源数
                     * 
                     */
                    int64_t GetResources() const;

                    /**
                     * 设置资源数
                     * @param _resources 资源数
                     * 
                     */
                    void SetResources(const int64_t& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                private:

                    /**
                     * 多阶段配置数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Stage> m_stages;
                    bool m_stagesHasBeenSet;

                    /**
                     * 运行次数
                     */
                    int64_t m_iterationCount;
                    bool m_iterationCountHasBeenSet;

                    /**
                     * 最大RPS
                     */
                    int64_t m_maxRequestsPerSecond;
                    bool m_maxRequestsPerSecondHasBeenSet;

                    /**
                     * 优雅终止任务的等待时间
                     */
                    int64_t m_gracefulStopSeconds;
                    bool m_gracefulStopSecondsHasBeenSet;

                    /**
                     * 资源数
                     */
                    int64_t m_resources;
                    bool m_resourcesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_CONCURRENCY_H_
