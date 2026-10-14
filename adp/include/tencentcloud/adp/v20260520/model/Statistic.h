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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_STATISTIC_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_STATISTIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 统计信息
                */
                class Statistic : public AbstractModel
                {
                public:
                    Statistic();
                    ~Statistic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>首token耗时</p>
                     * @return FirstTokenCostMs <p>首token耗时</p>
                     * 
                     */
                    uint64_t GetFirstTokenCostMs() const;

                    /**
                     * 设置<p>首token耗时</p>
                     * @param _firstTokenCostMs <p>首token耗时</p>
                     * 
                     */
                    void SetFirstTokenCostMs(const uint64_t& _firstTokenCostMs);

                    /**
                     * 判断参数 FirstTokenCostMs 是否已赋值
                     * @return FirstTokenCostMs 是否已赋值
                     * 
                     */
                    bool FirstTokenCostMsHasBeenSet() const;

                    /**
                     * 获取<p>输入token数量</p>
                     * @return InputTokens <p>输入token数量</p>
                     * 
                     */
                    uint64_t GetInputTokens() const;

                    /**
                     * 设置<p>输入token数量</p>
                     * @param _inputTokens <p>输入token数量</p>
                     * 
                     */
                    void SetInputTokens(const uint64_t& _inputTokens);

                    /**
                     * 判断参数 InputTokens 是否已赋值
                     * @return InputTokens 是否已赋值
                     * 
                     */
                    bool InputTokensHasBeenSet() const;

                    /**
                     * 获取<p>模型名称</p>
                     * @return ModelName <p>模型名称</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>模型名称</p>
                     * @param _modelName <p>模型名称</p>
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
                     * 获取<p>输出token数量</p>
                     * @return OutputTokens <p>输出token数量</p>
                     * 
                     */
                    uint64_t GetOutputTokens() const;

                    /**
                     * 设置<p>输出token数量</p>
                     * @param _outputTokens <p>输出token数量</p>
                     * 
                     */
                    void SetOutputTokens(const uint64_t& _outputTokens);

                    /**
                     * 判断参数 OutputTokens 是否已赋值
                     * @return OutputTokens 是否已赋值
                     * 
                     */
                    bool OutputTokensHasBeenSet() const;

                    /**
                     * 获取<p>推理总耗时</p>
                     * @return TotalCostMs <p>推理总耗时</p>
                     * 
                     */
                    uint64_t GetTotalCostMs() const;

                    /**
                     * 设置<p>推理总耗时</p>
                     * @param _totalCostMs <p>推理总耗时</p>
                     * 
                     */
                    void SetTotalCostMs(const uint64_t& _totalCostMs);

                    /**
                     * 判断参数 TotalCostMs 是否已赋值
                     * @return TotalCostMs 是否已赋值
                     * 
                     */
                    bool TotalCostMsHasBeenSet() const;

                    /**
                     * 获取<p>输入+输出总token</p>
                     * @return TotalTokens <p>输入+输出总token</p>
                     * 
                     */
                    uint64_t GetTotalTokens() const;

                    /**
                     * 设置<p>输入+输出总token</p>
                     * @param _totalTokens <p>输入+输出总token</p>
                     * 
                     */
                    void SetTotalTokens(const uint64_t& _totalTokens);

                    /**
                     * 判断参数 TotalTokens 是否已赋值
                     * @return TotalTokens 是否已赋值
                     * 
                     */
                    bool TotalTokensHasBeenSet() const;

                private:

                    /**
                     * <p>首token耗时</p>
                     */
                    uint64_t m_firstTokenCostMs;
                    bool m_firstTokenCostMsHasBeenSet;

                    /**
                     * <p>输入token数量</p>
                     */
                    uint64_t m_inputTokens;
                    bool m_inputTokensHasBeenSet;

                    /**
                     * <p>模型名称</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>输出token数量</p>
                     */
                    uint64_t m_outputTokens;
                    bool m_outputTokensHasBeenSet;

                    /**
                     * <p>推理总耗时</p>
                     */
                    uint64_t m_totalCostMs;
                    bool m_totalCostMsHasBeenSet;

                    /**
                     * <p>输入+输出总token</p>
                     */
                    uint64_t m_totalTokens;
                    bool m_totalTokensHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_STATISTIC_H_
