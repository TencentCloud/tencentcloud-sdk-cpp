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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONRECORDTIMEUSAGE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONRECORDTIMEUSAGE_H_

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
                * 单次对话耗时信息
                */
                class ConversationRecordTimeUsage : public AbstractModel
                {
                public:
                    ConversationRecordTimeUsage();
                    ~ConversationRecordTimeUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>单次对话总耗时，单位毫秒</p>
                     * @return Elapsed <p>单次对话总耗时，单位毫秒</p>
                     * 
                     */
                    std::string GetElapsed() const;

                    /**
                     * 设置<p>单次对话总耗时，单位毫秒</p>
                     * @param _elapsed <p>单次对话总耗时，单位毫秒</p>
                     * 
                     */
                    void SetElapsed(const std::string& _elapsed);

                    /**
                     * 判断参数 Elapsed 是否已赋值
                     * @return Elapsed 是否已赋值
                     * 
                     */
                    bool ElapsedHasBeenSet() const;

                    /**
                     * 获取<p>首 token 耗时，单位毫秒</p>
                     * @return FirstTokenCost <p>首 token 耗时，单位毫秒</p>
                     * 
                     */
                    std::string GetFirstTokenCost() const;

                    /**
                     * 设置<p>首 token 耗时，单位毫秒</p>
                     * @param _firstTokenCost <p>首 token 耗时，单位毫秒</p>
                     * 
                     */
                    void SetFirstTokenCost(const std::string& _firstTokenCost);

                    /**
                     * 判断参数 FirstTokenCost 是否已赋值
                     * @return FirstTokenCost 是否已赋值
                     * 
                     */
                    bool FirstTokenCostHasBeenSet() const;

                    /**
                     * 获取<p>模型推理总耗时，单位毫秒</p>
                     * @return TotalCost <p>模型推理总耗时，单位毫秒</p>
                     * 
                     */
                    std::string GetTotalCost() const;

                    /**
                     * 设置<p>模型推理总耗时，单位毫秒</p>
                     * @param _totalCost <p>模型推理总耗时，单位毫秒</p>
                     * 
                     */
                    void SetTotalCost(const std::string& _totalCost);

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     * 
                     */
                    bool TotalCostHasBeenSet() const;

                private:

                    /**
                     * <p>单次对话总耗时，单位毫秒</p>
                     */
                    std::string m_elapsed;
                    bool m_elapsedHasBeenSet;

                    /**
                     * <p>首 token 耗时，单位毫秒</p>
                     */
                    std::string m_firstTokenCost;
                    bool m_firstTokenCostHasBeenSet;

                    /**
                     * <p>模型推理总耗时，单位毫秒</p>
                     */
                    std::string m_totalCost;
                    bool m_totalCostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONRECORDTIMEUSAGE_H_
