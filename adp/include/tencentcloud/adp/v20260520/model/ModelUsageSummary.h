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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODELUSAGESUMMARY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODELUSAGESUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ResourceConsumption.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 模型资源用量聚合明细（MODEL 域专属）
                */
                class ModelUsageSummary : public AbstractModel
                {
                public:
                    ModelUsageSummary();
                    ~ModelUsageSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>调用次数（业务调用维度的顶层计数）</p>
                     * @return CallCount <p>调用次数（业务调用维度的顶层计数）</p>
                     * 
                     */
                    double GetCallCount() const;

                    /**
                     * 设置<p>调用次数（业务调用维度的顶层计数）</p>
                     * @param _callCount <p>调用次数（业务调用维度的顶层计数）</p>
                     * 
                     */
                    void SetCallCount(const double& _callCount);

                    /**
                     * 判断参数 CallCount 是否已赋值
                     * @return CallCount 是否已赋值
                     * 
                     */
                    bool CallCountHasBeenSet() const;

                    /**
                     * 获取<p>是否默认知识库</p>
                     * @return IsDefaultKB <p>是否默认知识库</p>
                     * 
                     */
                    bool GetIsDefaultKB() const;

                    /**
                     * 设置<p>是否默认知识库</p>
                     * @param _isDefaultKB <p>是否默认知识库</p>
                     * 
                     */
                    void SetIsDefaultKB(const bool& _isDefaultKB);

                    /**
                     * 判断参数 IsDefaultKB 是否已赋值
                     * @return IsDefaultKB 是否已赋值
                     * 
                     */
                    bool IsDefaultKBHasBeenSet() const;

                    /**
                     * 获取<p>模型名称，标识使用的 AI 模型</p>
                     * @return ModelName <p>模型名称，标识使用的 AI 模型</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>模型名称，标识使用的 AI 模型</p>
                     * @param _modelName <p>模型名称，标识使用的 AI 模型</p>
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
                     * 获取<p>MODEL 域消耗计量列表（权威字段）：按单位+label 分项列出每类计量。unit=TOKEN 时 label 区分 Token 子类别（input/output/avg_* /cache_*），label 为空表示 total_tokens；unit=PAGE_COUNT 表示模型消耗页数</p>
                     * @return ResourceConsumptionList <p>MODEL 域消耗计量列表（权威字段）：按单位+label 分项列出每类计量。unit=TOKEN 时 label 区分 Token 子类别（input/output/avg_* /cache_*），label 为空表示 total_tokens；unit=PAGE_COUNT 表示模型消耗页数</p>
                     * 
                     */
                    std::vector<ResourceConsumption> GetResourceConsumptionList() const;

                    /**
                     * 设置<p>MODEL 域消耗计量列表（权威字段）：按单位+label 分项列出每类计量。unit=TOKEN 时 label 区分 Token 子类别（input/output/avg_* /cache_*），label 为空表示 total_tokens；unit=PAGE_COUNT 表示模型消耗页数</p>
                     * @param _resourceConsumptionList <p>MODEL 域消耗计量列表（权威字段）：按单位+label 分项列出每类计量。unit=TOKEN 时 label 区分 Token 子类别（input/output/avg_* /cache_*），label 为空表示 total_tokens；unit=PAGE_COUNT 表示模型消耗页数</p>
                     * 
                     */
                    void SetResourceConsumptionList(const std::vector<ResourceConsumption>& _resourceConsumptionList);

                    /**
                     * 判断参数 ResourceConsumptionList 是否已赋值
                     * @return ResourceConsumptionList 是否已赋值
                     * 
                     */
                    bool ResourceConsumptionListHasBeenSet() const;

                    /**
                     * 获取<p>模型消耗 PU 总量（聚合维度内的 PU 消耗之和）</p>
                     * @return ConsumptionPU <p>模型消耗 PU 总量（聚合维度内的 PU 消耗之和）</p>
                     * 
                     */
                    double GetConsumptionPU() const;

                    /**
                     * 设置<p>模型消耗 PU 总量（聚合维度内的 PU 消耗之和）</p>
                     * @param _consumptionPU <p>模型消耗 PU 总量（聚合维度内的 PU 消耗之和）</p>
                     * 
                     */
                    void SetConsumptionPU(const double& _consumptionPU);

                    /**
                     * 判断参数 ConsumptionPU 是否已赋值
                     * @return ConsumptionPU 是否已赋值
                     * 
                     */
                    bool ConsumptionPUHasBeenSet() const;

                private:

                    /**
                     * <p>调用次数（业务调用维度的顶层计数）</p>
                     */
                    double m_callCount;
                    bool m_callCountHasBeenSet;

                    /**
                     * <p>是否默认知识库</p>
                     */
                    bool m_isDefaultKB;
                    bool m_isDefaultKBHasBeenSet;

                    /**
                     * <p>模型名称，标识使用的 AI 模型</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>MODEL 域消耗计量列表（权威字段）：按单位+label 分项列出每类计量。unit=TOKEN 时 label 区分 Token 子类别（input/output/avg_* /cache_*），label 为空表示 total_tokens；unit=PAGE_COUNT 表示模型消耗页数</p>
                     */
                    std::vector<ResourceConsumption> m_resourceConsumptionList;
                    bool m_resourceConsumptionListHasBeenSet;

                    /**
                     * <p>模型消耗 PU 总量（聚合维度内的 PU 消耗之和）</p>
                     */
                    double m_consumptionPU;
                    bool m_consumptionPUHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODELUSAGESUMMARY_H_
