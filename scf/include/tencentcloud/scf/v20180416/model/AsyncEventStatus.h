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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_ASYNCEVENTSTATUS_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_ASYNCEVENTSTATUS_H_

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
                * 异步事件状态
                */
                class AsyncEventStatus : public AbstractModel
                {
                public:
                    AsyncEventStatus();
                    ~AsyncEventStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取异步事件状态，RUNNING 表示运行中, FINISHED 表示调用成功, ABORTED 表示调用终止, FAILED 表示调用失败。
                     * @return Status 异步事件状态，RUNNING 表示运行中, FINISHED 表示调用成功, ABORTED 表示调用终止, FAILED 表示调用失败。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置异步事件状态，RUNNING 表示运行中, FINISHED 表示调用成功, ABORTED 表示调用终止, FAILED 表示调用失败。
                     * @param _status 异步事件状态，RUNNING 表示运行中, FINISHED 表示调用成功, ABORTED 表示调用终止, FAILED 表示调用失败。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取请求状态码
                     * @return StatusCode 请求状态码
                     * 
                     */
                    int64_t GetStatusCode() const;

                    /**
                     * 设置请求状态码
                     * @param _statusCode 请求状态码
                     * 
                     */
                    void SetStatusCode(const int64_t& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取异步执行请求 Id
                     * @return InvokeRequestId 异步执行请求 Id
                     * 
                     */
                    std::string GetInvokeRequestId() const;

                    /**
                     * 设置异步执行请求 Id
                     * @param _invokeRequestId 异步执行请求 Id
                     * 
                     */
                    void SetInvokeRequestId(const std::string& _invokeRequestId);

                    /**
                     * 判断参数 InvokeRequestId 是否已赋值
                     * @return InvokeRequestId 是否已赋值
                     * 
                     */
                    bool InvokeRequestIdHasBeenSet() const;

                private:

                    /**
                     * 异步事件状态，RUNNING 表示运行中, FINISHED 表示调用成功, ABORTED 表示调用终止, FAILED 表示调用失败。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 请求状态码
                     */
                    int64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * 异步执行请求 Id
                     */
                    std::string m_invokeRequestId;
                    bool m_invokeRequestIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_ASYNCEVENTSTATUS_H_
