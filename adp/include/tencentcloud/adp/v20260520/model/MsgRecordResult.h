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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MSGRECORDRESULT_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MSGRECORDRESULT_H_

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
                * MsgRecordResult
                */
                class MsgRecordResult : public AbstractModel
                {
                public:
                    MsgRecordResult();
                    ~MsgRecordResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表示该条消息的调用结果：0=CALL_RESULT_UNKNOWN（全部/未知）, 1=CALL_RESULT_SUCCESS（成功）, 2=CALL_RESULT_FAILED（失败）；fail_reason（string）为调用失败时的失败原因描述。
                     * @return CallResult 表示该条消息的调用结果：0=CALL_RESULT_UNKNOWN（全部/未知）, 1=CALL_RESULT_SUCCESS（成功）, 2=CALL_RESULT_FAILED（失败）；fail_reason（string）为调用失败时的失败原因描述。
                     * 
                     */
                    int64_t GetCallResult() const;

                    /**
                     * 设置表示该条消息的调用结果：0=CALL_RESULT_UNKNOWN（全部/未知）, 1=CALL_RESULT_SUCCESS（成功）, 2=CALL_RESULT_FAILED（失败）；fail_reason（string）为调用失败时的失败原因描述。
                     * @param _callResult 表示该条消息的调用结果：0=CALL_RESULT_UNKNOWN（全部/未知）, 1=CALL_RESULT_SUCCESS（成功）, 2=CALL_RESULT_FAILED（失败）；fail_reason（string）为调用失败时的失败原因描述。
                     * 
                     */
                    void SetCallResult(const int64_t& _callResult);

                    /**
                     * 判断参数 CallResult 是否已赋值
                     * @return CallResult 是否已赋值
                     * 
                     */
                    bool CallResultHasBeenSet() const;

                    /**
                     * 获取自定义变量，json字符串
                     * @return CustomerVariable 自定义变量，json字符串
                     * 
                     */
                    std::string GetCustomerVariable() const;

                    /**
                     * 设置自定义变量，json字符串
                     * @param _customerVariable 自定义变量，json字符串
                     * 
                     */
                    void SetCustomerVariable(const std::string& _customerVariable);

                    /**
                     * 判断参数 CustomerVariable 是否已赋值
                     * @return CustomerVariable 是否已赋值
                     * 
                     */
                    bool CustomerVariableHasBeenSet() const;

                    /**
                     * 获取失败原因
                     * @return FailReason 失败原因
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置失败原因
                     * @param _failReason 失败原因
                     * 
                     */
                    void SetFailReason(const std::string& _failReason);

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                    /**
                     * 获取首token耗时
                     * @return FirstTokenLatency 首token耗时
                     * 
                     */
                    uint64_t GetFirstTokenLatency() const;

                    /**
                     * 设置首token耗时
                     * @param _firstTokenLatency 首token耗时
                     * 
                     */
                    void SetFirstTokenLatency(const uint64_t& _firstTokenLatency);

                    /**
                     * 判断参数 FirstTokenLatency 是否已赋值
                     * @return FirstTokenLatency 是否已赋值
                     * 
                     */
                    bool FirstTokenLatencyHasBeenSet() const;

                    /**
                     * 获取输入token数
                     * @return InputToken 输入token数
                     * 
                     */
                    uint64_t GetInputToken() const;

                    /**
                     * 设置输入token数
                     * @param _inputToken 输入token数
                     * 
                     */
                    void SetInputToken(const uint64_t& _inputToken);

                    /**
                     * 判断参数 InputToken 是否已赋值
                     * @return InputToken 是否已赋值
                     * 
                     */
                    bool InputTokenHasBeenSet() const;

                    /**
                     * 获取输出token数
                     * @return OutputToken 输出token数
                     * 
                     */
                    uint64_t GetOutputToken() const;

                    /**
                     * 设置输出token数
                     * @param _outputToken 输出token数
                     * 
                     */
                    void SetOutputToken(const uint64_t& _outputToken);

                    /**
                     * 判断参数 OutputToken 是否已赋值
                     * @return OutputToken 是否已赋值
                     * 
                     */
                    bool OutputTokenHasBeenSet() const;

                    /**
                     * 获取总token数
                     * @return TotalToken 总token数
                     * 
                     */
                    uint64_t GetTotalToken() const;

                    /**
                     * 设置总token数
                     * @param _totalToken 总token数
                     * 
                     */
                    void SetTotalToken(const uint64_t& _totalToken);

                    /**
                     * 判断参数 TotalToken 是否已赋值
                     * @return TotalToken 是否已赋值
                     * 
                     */
                    bool TotalTokenHasBeenSet() const;

                    /**
                     * 获取总token耗时
                     * @return TotalTokenLatency 总token耗时
                     * 
                     */
                    uint64_t GetTotalTokenLatency() const;

                    /**
                     * 设置总token耗时
                     * @param _totalTokenLatency 总token耗时
                     * 
                     */
                    void SetTotalTokenLatency(const uint64_t& _totalTokenLatency);

                    /**
                     * 判断参数 TotalTokenLatency 是否已赋值
                     * @return TotalTokenLatency 是否已赋值
                     * 
                     */
                    bool TotalTokenLatencyHasBeenSet() const;

                private:

                    /**
                     * 表示该条消息的调用结果：0=CALL_RESULT_UNKNOWN（全部/未知）, 1=CALL_RESULT_SUCCESS（成功）, 2=CALL_RESULT_FAILED（失败）；fail_reason（string）为调用失败时的失败原因描述。
                     */
                    int64_t m_callResult;
                    bool m_callResultHasBeenSet;

                    /**
                     * 自定义变量，json字符串
                     */
                    std::string m_customerVariable;
                    bool m_customerVariableHasBeenSet;

                    /**
                     * 失败原因
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                    /**
                     * 首token耗时
                     */
                    uint64_t m_firstTokenLatency;
                    bool m_firstTokenLatencyHasBeenSet;

                    /**
                     * 输入token数
                     */
                    uint64_t m_inputToken;
                    bool m_inputTokenHasBeenSet;

                    /**
                     * 输出token数
                     */
                    uint64_t m_outputToken;
                    bool m_outputTokenHasBeenSet;

                    /**
                     * 总token数
                     */
                    uint64_t m_totalToken;
                    bool m_totalTokenHasBeenSet;

                    /**
                     * 总token耗时
                     */
                    uint64_t m_totalTokenLatency;
                    bool m_totalTokenLatencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MSGRECORDRESULT_H_
