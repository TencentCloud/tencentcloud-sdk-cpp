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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_LORAVERSIONMETA_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_LORAVERSIONMETA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * LoRA Adapter 元信息
                */
                class LoraVersionMeta : public AbstractModel
                {
                public:
                    LoraVersionMeta();
                    ~LoraVersionMeta() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Lora Rank</p>
                     * @return Rank <p>Lora Rank</p>
                     * 
                     */
                    int64_t GetRank() const;

                    /**
                     * 设置<p>Lora Rank</p>
                     * @param _rank <p>Lora Rank</p>
                     * 
                     */
                    void SetRank(const int64_t& _rank);

                    /**
                     * 判断参数 Rank 是否已赋值
                     * @return Rank 是否已赋值
                     * 
                     */
                    bool RankHasBeenSet() const;

                    /**
                     * 获取<p>Lora Alpha</p>
                     * @return Alpha <p>Lora Alpha</p>
                     * 
                     */
                    int64_t GetAlpha() const;

                    /**
                     * 设置<p>Lora Alpha</p>
                     * @param _alpha <p>Lora Alpha</p>
                     * 
                     */
                    void SetAlpha(const int64_t& _alpha);

                    /**
                     * 判断参数 Alpha 是否已赋值
                     * @return Alpha 是否已赋值
                     * 
                     */
                    bool AlphaHasBeenSet() const;

                    /**
                     * 获取<p>LoRA dropout</p>
                     * @return Dropout <p>LoRA dropout</p>
                     * 
                     */
                    double GetDropout() const;

                    /**
                     * 设置<p>LoRA dropout</p>
                     * @param _dropout <p>LoRA dropout</p>
                     * 
                     */
                    void SetDropout(const double& _dropout);

                    /**
                     * 判断参数 Dropout 是否已赋值
                     * @return Dropout 是否已赋值
                     * 
                     */
                    bool DropoutHasBeenSet() const;

                    /**
                     * 获取<p>注入的目标模块</p>
                     * @return TargetModules <p>注入的目标模块</p>
                     * 
                     */
                    std::vector<std::string> GetTargetModules() const;

                    /**
                     * 设置<p>注入的目标模块</p>
                     * @param _targetModules <p>注入的目标模块</p>
                     * 
                     */
                    void SetTargetModules(const std::vector<std::string>& _targetModules);

                    /**
                     * 判断参数 TargetModules 是否已赋值
                     * @return TargetModules 是否已赋值
                     * 
                     */
                    bool TargetModulesHasBeenSet() const;

                    /**
                     * 获取<p>PEFT 类型（如 LORA）</p>
                     * @return PEFTType <p>PEFT 类型（如 LORA）</p>
                     * 
                     */
                    std::string GetPEFTType() const;

                    /**
                     * 设置<p>PEFT 类型（如 LORA）</p>
                     * @param _pEFTType <p>PEFT 类型（如 LORA）</p>
                     * 
                     */
                    void SetPEFTType(const std::string& _pEFTType);

                    /**
                     * 判断参数 PEFTType 是否已赋值
                     * @return PEFTType 是否已赋值
                     * 
                     */
                    bool PEFTTypeHasBeenSet() const;

                    /**
                     * 获取<p>任务类型（如 CAUSAL_LM）</p>
                     * @return TaskType <p>任务类型（如 CAUSAL_LM）</p>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置<p>任务类型（如 CAUSAL_LM）</p>
                     * @param _taskType <p>任务类型（如 CAUSAL_LM）</p>
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>训练时声明的基座名称或路径（base_model_name_or_path）</p>
                     * @return BaseModelNameOrPath <p>训练时声明的基座名称或路径（base_model_name_or_path）</p>
                     * 
                     */
                    std::string GetBaseModelNameOrPath() const;

                    /**
                     * 设置<p>训练时声明的基座名称或路径（base_model_name_or_path）</p>
                     * @param _baseModelNameOrPath <p>训练时声明的基座名称或路径（base_model_name_or_path）</p>
                     * 
                     */
                    void SetBaseModelNameOrPath(const std::string& _baseModelNameOrPath);

                    /**
                     * 判断参数 BaseModelNameOrPath 是否已赋值
                     * @return BaseModelNameOrPath 是否已赋值
                     * 
                     */
                    bool BaseModelNameOrPathHasBeenSet() const;

                    /**
                     * 获取<p>最大 rank（含 rank_pattern 分模块 rank；仅当其大于 Rank 时返回）</p>
                     * @return MaxRank <p>最大 rank（含 rank_pattern 分模块 rank；仅当其大于 Rank 时返回）</p>
                     * 
                     */
                    int64_t GetMaxRank() const;

                    /**
                     * 设置<p>最大 rank（含 rank_pattern 分模块 rank；仅当其大于 Rank 时返回）</p>
                     * @param _maxRank <p>最大 rank（含 rank_pattern 分模块 rank；仅当其大于 Rank 时返回）</p>
                     * 
                     */
                    void SetMaxRank(const int64_t& _maxRank);

                    /**
                     * 判断参数 MaxRank 是否已赋值
                     * @return MaxRank 是否已赋值
                     * 
                     */
                    bool MaxRankHasBeenSet() const;

                private:

                    /**
                     * <p>Lora Rank</p>
                     */
                    int64_t m_rank;
                    bool m_rankHasBeenSet;

                    /**
                     * <p>Lora Alpha</p>
                     */
                    int64_t m_alpha;
                    bool m_alphaHasBeenSet;

                    /**
                     * <p>LoRA dropout</p>
                     */
                    double m_dropout;
                    bool m_dropoutHasBeenSet;

                    /**
                     * <p>注入的目标模块</p>
                     */
                    std::vector<std::string> m_targetModules;
                    bool m_targetModulesHasBeenSet;

                    /**
                     * <p>PEFT 类型（如 LORA）</p>
                     */
                    std::string m_pEFTType;
                    bool m_pEFTTypeHasBeenSet;

                    /**
                     * <p>任务类型（如 CAUSAL_LM）</p>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>训练时声明的基座名称或路径（base_model_name_or_path）</p>
                     */
                    std::string m_baseModelNameOrPath;
                    bool m_baseModelNameOrPathHasBeenSet;

                    /**
                     * <p>最大 rank（含 rank_pattern 分模块 rank；仅当其大于 Rank 时返回）</p>
                     */
                    int64_t m_maxRank;
                    bool m_maxRankHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_LORAVERSIONMETA_H_
