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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_REQUESTSTATUS_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_REQUESTSTATUS_H_

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
                * 函数运行状态
                */
                class RequestStatus : public AbstractModel
                {
                public:
                    RequestStatus();
                    ~RequestStatus() = default;
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
                     * 获取查询的请求 id
                     * @return RequestId 查询的请求 id
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置查询的请求 id
                     * @param _requestId 查询的请求 id
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
                     * 获取请求开始时间
                     * @return StartTime 请求开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置请求开始时间
                     * @param _startTime 请求开始时间
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
                     * 获取请求执行结果， 0 表示执行成功，1表示运行中，-1 表示执行异常。
                     * @return RetCode 请求执行结果， 0 表示执行成功，1表示运行中，-1 表示执行异常。
                     * 
                     */
                    int64_t GetRetCode() const;

                    /**
                     * 设置请求执行结果， 0 表示执行成功，1表示运行中，-1 表示执行异常。
                     * @param _retCode 请求执行结果， 0 表示执行成功，1表示运行中，-1 表示执行异常。
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
                     * 获取请求运行耗时，单位：ms
                     * @return Duration 请求运行耗时，单位：ms
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置请求运行耗时，单位：ms
                     * @param _duration 请求运行耗时，单位：ms
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
                     * 获取请求消耗内存，单位为 MB
                     * @return MemUsage 请求消耗内存，单位为 MB
                     * 
                     */
                    double GetMemUsage() const;

                    /**
                     * 设置请求消耗内存，单位为 MB
                     * @param _memUsage 请求消耗内存，单位为 MB
                     * 
                     */
                    void SetMemUsage(const double& _memUsage);

                    /**
                     * 判断参数 MemUsage 是否已赋值
                     * @return MemUsage 是否已赋值
                     * 
                     */
                    bool MemUsageHasBeenSet() const;

                    /**
                     * 获取重试次数
                     * @return RetryNum 重试次数
                     * 
                     */
                    int64_t GetRetryNum() const;

                    /**
                     * 设置重试次数
                     * @param _retryNum 重试次数
                     * 
                     */
                    void SetRetryNum(const int64_t& _retryNum);

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
                     * 查询的请求 id
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                    /**
                     * 请求开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 请求执行结果， 0 表示执行成功，1表示运行中，-1 表示执行异常。
                     */
                    int64_t m_retCode;
                    bool m_retCodeHasBeenSet;

                    /**
                     * 请求运行耗时，单位：ms
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 请求消耗内存，单位为 MB
                     */
                    double m_memUsage;
                    bool m_memUsageHasBeenSet;

                    /**
                     * 重试次数
                     */
                    int64_t m_retryNum;
                    bool m_retryNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_REQUESTSTATUS_H_
