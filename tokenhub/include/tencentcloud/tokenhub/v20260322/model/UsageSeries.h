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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_USAGESERIES_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_USAGESERIES_H_

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
                * 用量时间周期内的时序点列表（按 metric key 索引）。为 JSON 数组的字符串形式,数组长度与响应 Timestamps 一致，无数据点处为 null。具体包含哪些 key 由响应 MetricKeys 决定。
                */
                class UsageSeries : public AbstractModel
                {
                public:
                    UsageSeries();
                    ~UsageSeries() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总 token 数用量时间周期内的 JSON 字符串形式，如 `"[12,null,15]"`。
                     * @return TotalToken 总 token 数用量时间周期内的 JSON 字符串形式，如 `"[12,null,15]"`。
                     * 
                     */
                    std::string GetTotalToken() const;

                    /**
                     * 设置总 token 数用量时间周期内的 JSON 字符串形式，如 `"[12,null,15]"`。
                     * @param _totalToken 总 token 数用量时间周期内的 JSON 字符串形式，如 `"[12,null,15]"`。
                     * 
                     */
                    void SetTotalToken(const std::string& _totalToken);

                    /**
                     * 判断参数 TotalToken 是否已赋值
                     * @return TotalToken 是否已赋值
                     * 
                     */
                    bool TotalTokenHasBeenSet() const;

                    /**
                     * 获取输入 token 数用量时间周期内的 JSON 字符串形式，如 `"[7,null,9]"`。
                     * @return InputTotalToken 输入 token 数用量时间周期内的 JSON 字符串形式，如 `"[7,null,9]"`。
                     * 
                     */
                    std::string GetInputTotalToken() const;

                    /**
                     * 设置输入 token 数用量时间周期内的 JSON 字符串形式，如 `"[7,null,9]"`。
                     * @param _inputTotalToken 输入 token 数用量时间周期内的 JSON 字符串形式，如 `"[7,null,9]"`。
                     * 
                     */
                    void SetInputTotalToken(const std::string& _inputTotalToken);

                    /**
                     * 判断参数 InputTotalToken 是否已赋值
                     * @return InputTotalToken 是否已赋值
                     * 
                     */
                    bool InputTotalTokenHasBeenSet() const;

                    /**
                     * 获取输出 token 数用量时间周期内的 JSON 字符串形式，如 `"[5,null,6]"`。
                     * @return OutputTotalToken 输出 token 数用量时间周期内的 JSON 字符串形式，如 `"[5,null,6]"`。
                     * 
                     */
                    std::string GetOutputTotalToken() const;

                    /**
                     * 设置输出 token 数用量时间周期内的 JSON 字符串形式，如 `"[5,null,6]"`。
                     * @param _outputTotalToken 输出 token 数用量时间周期内的 JSON 字符串形式，如 `"[5,null,6]"`。
                     * 
                     */
                    void SetOutputTotalToken(const std::string& _outputTotalToken);

                    /**
                     * 判断参数 OutputTotalToken 是否已赋值
                     * @return OutputTotalToken 是否已赋值
                     * 
                     */
                    bool OutputTotalTokenHasBeenSet() const;

                private:

                    /**
                     * 总 token 数用量时间周期内的 JSON 字符串形式，如 `"[12,null,15]"`。
                     */
                    std::string m_totalToken;
                    bool m_totalTokenHasBeenSet;

                    /**
                     * 输入 token 数用量时间周期内的 JSON 字符串形式，如 `"[7,null,9]"`。
                     */
                    std::string m_inputTotalToken;
                    bool m_inputTotalTokenHasBeenSet;

                    /**
                     * 输出 token 数用量时间周期内的 JSON 字符串形式，如 `"[5,null,6]"`。
                     */
                    std::string m_outputTotalToken;
                    bool m_outputTotalTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_USAGESERIES_H_
