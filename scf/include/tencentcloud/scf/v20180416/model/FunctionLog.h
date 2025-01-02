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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_FUNCTIONLOG_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_FUNCTIONLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 日志信息
                */
                class FunctionLog : public AbstractModel
                {
                public:
                    FunctionLog();
                    ~FunctionLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取函数的名称
                     * @return FunctionName 函数的名称
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置函数的名称
                     * @param _functionName 函数的名称
                     * 
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     * 
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取函数执行完成后的返回值
                     * @return RetMsg 函数执行完成后的返回值
                     * 
                     */
                    std::string GetRetMsg() const;

                    /**
                     * 设置函数执行完成后的返回值
                     * @param _retMsg 函数执行完成后的返回值
                     * 
                     */
                    void SetRetMsg(const std::string& _retMsg);

                    /**
                     * 判断参数 RetMsg 是否已赋值
                     * @return RetMsg 是否已赋值
                     * 
                     */
                    bool RetMsgHasBeenSet() const;

                    /**
                     * 获取执行该函数对应的requestId
                     * @return RequestId 执行该函数对应的requestId
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置执行该函数对应的requestId
                     * @param _requestId 执行该函数对应的requestId
                     * 
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     * 
                     */
                    bool RequestIdHasBeenSet() const;

                    /**
                     * 获取函数开始执行时的时间点
                     * @return StartTime 函数开始执行时的时间点
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置函数开始执行时的时间点
                     * @param _startTime 函数开始执行时的时间点
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取函数执行结果，如果是 0 表示执行成功，2表示函数运行中，3表示函数执行中断，其他值表示失败
                     * @return RetCode 函数执行结果，如果是 0 表示执行成功，2表示函数运行中，3表示函数执行中断，其他值表示失败
                     * 
                     */
                    int64_t GetRetCode() const;

                    /**
                     * 设置函数执行结果，如果是 0 表示执行成功，2表示函数运行中，3表示函数执行中断，其他值表示失败
                     * @param _retCode 函数执行结果，如果是 0 表示执行成功，2表示函数运行中，3表示函数执行中断，其他值表示失败
                     * 
                     */
                    void SetRetCode(const int64_t& _retCode);

                    /**
                     * 判断参数 RetCode 是否已赋值
                     * @return RetCode 是否已赋值
                     * 
                     */
                    bool RetCodeHasBeenSet() const;

                    /**
                     * 获取函数调用是否结束，如果是 1 表示执行结束，其他值表示调用异常
                     * @return InvokeFinished 函数调用是否结束，如果是 1 表示执行结束，其他值表示调用异常
                     * 
                     */
                    int64_t GetInvokeFinished() const;

                    /**
                     * 设置函数调用是否结束，如果是 1 表示执行结束，其他值表示调用异常
                     * @param _invokeFinished 函数调用是否结束，如果是 1 表示执行结束，其他值表示调用异常
                     * 
                     */
                    void SetInvokeFinished(const int64_t& _invokeFinished);

                    /**
                     * 判断参数 InvokeFinished 是否已赋值
                     * @return InvokeFinished 是否已赋值
                     * 
                     */
                    bool InvokeFinishedHasBeenSet() const;

                    /**
                     * 获取函数执行耗时，单位为 ms
                     * @return Duration 函数执行耗时，单位为 ms
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置函数执行耗时，单位为 ms
                     * @param _duration 函数执行耗时，单位为 ms
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取函数计费时间，根据 duration 向上取最近的 100ms，单位为ms
                     * @return BillDuration 函数计费时间，根据 duration 向上取最近的 100ms，单位为ms
                     * 
                     */
                    int64_t GetBillDuration() const;

                    /**
                     * 设置函数计费时间，根据 duration 向上取最近的 100ms，单位为ms
                     * @param _billDuration 函数计费时间，根据 duration 向上取最近的 100ms，单位为ms
                     * 
                     */
                    void SetBillDuration(const int64_t& _billDuration);

                    /**
                     * 判断参数 BillDuration 是否已赋值
                     * @return BillDuration 是否已赋值
                     * 
                     */
                    bool BillDurationHasBeenSet() const;

                    /**
                     * 获取函数执行时消耗实际内存大小，单位为 Byte
                     * @return MemUsage 函数执行时消耗实际内存大小，单位为 Byte
                     * 
                     */
                    int64_t GetMemUsage() const;

                    /**
                     * 设置函数执行时消耗实际内存大小，单位为 Byte
                     * @param _memUsage 函数执行时消耗实际内存大小，单位为 Byte
                     * 
                     */
                    void SetMemUsage(const int64_t& _memUsage);

                    /**
                     * 判断参数 MemUsage 是否已赋值
                     * @return MemUsage 是否已赋值
                     * 
                     */
                    bool MemUsageHasBeenSet() const;

                    /**
                     * 获取函数执行过程中的日志输出
                     * @return Log 函数执行过程中的日志输出
                     * 
                     */
                    std::string GetLog() const;

                    /**
                     * 设置函数执行过程中的日志输出
                     * @param _log 函数执行过程中的日志输出
                     * 
                     */
                    void SetLog(const std::string& _log);

                    /**
                     * 判断参数 Log 是否已赋值
                     * @return Log 是否已赋值
                     * 
                     */
                    bool LogHasBeenSet() const;

                    /**
                     * 获取日志等级
                     * @return Level 日志等级
                     * @deprecated
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置日志等级
                     * @param _level 日志等级
                     * @deprecated
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * @deprecated
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取日志来源
                     * @return Source 日志来源
                     * @deprecated
                     */
                    std::string GetSource() const;

                    /**
                     * 设置日志来源
                     * @param _source 日志来源
                     * @deprecated
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * @deprecated
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取重试次数
                     * @return RetryNum 重试次数
                     * 
                     */
                    uint64_t GetRetryNum() const;

                    /**
                     * 设置重试次数
                     * @param _retryNum 重试次数
                     * 
                     */
                    void SetRetryNum(const uint64_t& _retryNum);

                    /**
                     * 判断参数 RetryNum 是否已赋值
                     * @return RetryNum 是否已赋值
                     * 
                     */
                    bool RetryNumHasBeenSet() const;

                private:

                    /**
                     * 函数的名称
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 函数执行完成后的返回值
                     */
                    std::string m_retMsg;
                    bool m_retMsgHasBeenSet;

                    /**
                     * 执行该函数对应的requestId
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                    /**
                     * 函数开始执行时的时间点
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 函数执行结果，如果是 0 表示执行成功，2表示函数运行中，3表示函数执行中断，其他值表示失败
                     */
                    int64_t m_retCode;
                    bool m_retCodeHasBeenSet;

                    /**
                     * 函数调用是否结束，如果是 1 表示执行结束，其他值表示调用异常
                     */
                    int64_t m_invokeFinished;
                    bool m_invokeFinishedHasBeenSet;

                    /**
                     * 函数执行耗时，单位为 ms
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 函数计费时间，根据 duration 向上取最近的 100ms，单位为ms
                     */
                    int64_t m_billDuration;
                    bool m_billDurationHasBeenSet;

                    /**
                     * 函数执行时消耗实际内存大小，单位为 Byte
                     */
                    int64_t m_memUsage;
                    bool m_memUsageHasBeenSet;

                    /**
                     * 函数执行过程中的日志输出
                     */
                    std::string m_log;
                    bool m_logHasBeenSet;

                    /**
                     * 日志等级
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 日志来源
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 重试次数
                     */
                    uint64_t m_retryNum;
                    bool m_retryNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_FUNCTIONLOG_H_
