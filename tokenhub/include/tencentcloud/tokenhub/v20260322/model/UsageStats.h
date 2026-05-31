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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_USAGESTATS_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_USAGESTATS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * 时间周期内的统计聚合值（按 metric key 索引）。本期返回 tokens 族（statistics=sum）的累计 Token 用量；具体包含哪些 key、顺序如何，参见响应顶层 `MetricKeys` 字段。接口预留 MetricType 字段以支持后续指标族扩展，本期仅支持 tokens。
                */
                class UsageStats : public AbstractModel
                {
                public:
                    UsageStats();
                    ~UsageStats() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间周期内的累计总 token 数。
                     * @return TotalToken 时间周期内的累计总 token 数。
                     * 
                     */
                    int64_t GetTotalToken() const;

                    /**
                     * 设置时间周期内的累计总 token 数。
                     * @param _totalToken 时间周期内的累计总 token 数。
                     * 
                     */
                    void SetTotalToken(const int64_t& _totalToken);

                    /**
                     * 判断参数 TotalToken 是否已赋值
                     * @return TotalToken 是否已赋值
                     * 
                     */
                    bool TotalTokenHasBeenSet() const;

                    /**
                     * 获取时间周期内的累计输入 token 数。
                     * @return InputTotalToken 时间周期内的累计输入 token 数。
                     * 
                     */
                    int64_t GetInputTotalToken() const;

                    /**
                     * 设置时间周期内的累计输入 token 数。
                     * @param _inputTotalToken 时间周期内的累计输入 token 数。
                     * 
                     */
                    void SetInputTotalToken(const int64_t& _inputTotalToken);

                    /**
                     * 判断参数 InputTotalToken 是否已赋值
                     * @return InputTotalToken 是否已赋值
                     * 
                     */
                    bool InputTotalTokenHasBeenSet() const;

                    /**
                     * 获取时间周期内的累计输出 token 数。
                     * @return OutputTotalToken 时间周期内的累计输出 token 数。
                     * 
                     */
                    int64_t GetOutputTotalToken() const;

                    /**
                     * 设置时间周期内的累计输出 token 数。
                     * @param _outputTotalToken 时间周期内的累计输出 token 数。
                     * 
                     */
                    void SetOutputTotalToken(const int64_t& _outputTotalToken);

                    /**
                     * 判断参数 OutputTotalToken 是否已赋值
                     * @return OutputTotalToken 是否已赋值
                     * 
                     */
                    bool OutputTotalTokenHasBeenSet() const;

                private:

                    /**
                     * 时间周期内的累计总 token 数。
                     */
                    int64_t m_totalToken;
                    bool m_totalTokenHasBeenSet;

                    /**
                     * 时间周期内的累计输入 token 数。
                     */
                    int64_t m_inputTotalToken;
                    bool m_inputTotalTokenHasBeenSet;

                    /**
                     * 时间周期内的累计输出 token 数。
                     */
                    int64_t m_outputTotalToken;
                    bool m_outputTotalTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_USAGESTATS_H_
