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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_RESULT_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_RESULT_H_

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
                * 运行函数的返回
                */
                class Result : public AbstractModel
                {
                public:
                    Result();
                    ~Result() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表示执行过程中的日志输出，异步调用返回为空
                     * @return Log 表示执行过程中的日志输出，异步调用返回为空
                     * 
                     */
                    std::string GetLog() const;

                    /**
                     * 设置表示执行过程中的日志输出，异步调用返回为空
                     * @param _log 表示执行过程中的日志输出，异步调用返回为空
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
                     * 获取表示执行函数的返回，异步调用返回为空
                     * @return RetMsg 表示执行函数的返回，异步调用返回为空
                     * 
                     */
                    std::string GetRetMsg() const;

                    /**
                     * 设置表示执行函数的返回，异步调用返回为空
                     * @param _retMsg 表示执行函数的返回，异步调用返回为空
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
                     * 获取表示执行函数的错误返回信息，异步调用返回为空
                     * @return ErrMsg 表示执行函数的错误返回信息，异步调用返回为空
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置表示执行函数的错误返回信息，异步调用返回为空
                     * @param _errMsg 表示执行函数的错误返回信息，异步调用返回为空
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取执行函数时的内存大小，单位为Byte，异步调用返回为空
                     * @return MemUsage 执行函数时的内存大小，单位为Byte，异步调用返回为空
                     * 
                     */
                    int64_t GetMemUsage() const;

                    /**
                     * 设置执行函数时的内存大小，单位为Byte，异步调用返回为空
                     * @param _memUsage 执行函数时的内存大小，单位为Byte，异步调用返回为空
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
                     * 获取表示执行函数的耗时，单位是毫秒，异步调用返回为空
                     * @return Duration 表示执行函数的耗时，单位是毫秒，异步调用返回为空
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置表示执行函数的耗时，单位是毫秒，异步调用返回为空
                     * @param _duration 表示执行函数的耗时，单位是毫秒，异步调用返回为空
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
                     * 获取表示函数的计费耗时，单位是毫秒，异步调用返回为空
                     * @return BillDuration 表示函数的计费耗时，单位是毫秒，异步调用返回为空
                     * 
                     */
                    int64_t GetBillDuration() const;

                    /**
                     * 设置表示函数的计费耗时，单位是毫秒，异步调用返回为空
                     * @param _billDuration 表示函数的计费耗时，单位是毫秒，异步调用返回为空
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
                     * 获取此次函数执行的Id
                     * @return FunctionRequestId 此次函数执行的Id
                     * 
                     */
                    std::string GetFunctionRequestId() const;

                    /**
                     * 设置此次函数执行的Id
                     * @param _functionRequestId 此次函数执行的Id
                     * 
                     */
                    void SetFunctionRequestId(const std::string& _functionRequestId);

                    /**
                     * 判断参数 FunctionRequestId 是否已赋值
                     * @return FunctionRequestId 是否已赋值
                     * 
                     */
                    bool FunctionRequestIdHasBeenSet() const;

                    /**
                     * 获取该参数不再维护，不推荐用户继续使用。
                     * @return InvokeResult 该参数不再维护，不推荐用户继续使用。
                     * 
                     */
                    int64_t GetInvokeResult() const;

                    /**
                     * 设置该参数不再维护，不推荐用户继续使用。
                     * @param _invokeResult 该参数不再维护，不推荐用户继续使用。
                     * 
                     */
                    void SetInvokeResult(const int64_t& _invokeResult);

                    /**
                     * 判断参数 InvokeResult 是否已赋值
                     * @return InvokeResult 是否已赋值
                     * 
                     */
                    bool InvokeResultHasBeenSet() const;

                private:

                    /**
                     * 表示执行过程中的日志输出，异步调用返回为空
                     */
                    std::string m_log;
                    bool m_logHasBeenSet;

                    /**
                     * 表示执行函数的返回，异步调用返回为空
                     */
                    std::string m_retMsg;
                    bool m_retMsgHasBeenSet;

                    /**
                     * 表示执行函数的错误返回信息，异步调用返回为空
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * 执行函数时的内存大小，单位为Byte，异步调用返回为空
                     */
                    int64_t m_memUsage;
                    bool m_memUsageHasBeenSet;

                    /**
                     * 表示执行函数的耗时，单位是毫秒，异步调用返回为空
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 表示函数的计费耗时，单位是毫秒，异步调用返回为空
                     */
                    int64_t m_billDuration;
                    bool m_billDurationHasBeenSet;

                    /**
                     * 此次函数执行的Id
                     */
                    std::string m_functionRequestId;
                    bool m_functionRequestIdHasBeenSet;

                    /**
                     * 该参数不再维护，不推荐用户继续使用。
                     */
                    int64_t m_invokeResult;
                    bool m_invokeResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_RESULT_H_
