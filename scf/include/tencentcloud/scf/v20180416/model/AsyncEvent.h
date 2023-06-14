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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_ASYNCEVENT_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_ASYNCEVENT_H_

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
                * 异步事件
                */
                class AsyncEvent : public AbstractModel
                {
                public:
                    AsyncEvent();
                    ~AsyncEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取调用请求id
                     * @return InvokeRequestId 调用请求id
                     * 
                     */
                    std::string GetInvokeRequestId() const;

                    /**
                     * 设置调用请求id
                     * @param _invokeRequestId 调用请求id
                     * 
                     */
                    void SetInvokeRequestId(const std::string& _invokeRequestId);

                    /**
                     * 判断参数 InvokeRequestId 是否已赋值
                     * @return InvokeRequestId 是否已赋值
                     * 
                     */
                    bool InvokeRequestIdHasBeenSet() const;

                    /**
                     * 获取调用类型
                     * @return InvokeType 调用类型
                     * 
                     */
                    std::string GetInvokeType() const;

                    /**
                     * 设置调用类型
                     * @param _invokeType 调用类型
                     * 
                     */
                    void SetInvokeType(const std::string& _invokeType);

                    /**
                     * 判断参数 InvokeType 是否已赋值
                     * @return InvokeType 是否已赋值
                     * 
                     */
                    bool InvokeTypeHasBeenSet() const;

                    /**
                     * 获取函数版本
                     * @return Qualifier 函数版本
                     * 
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置函数版本
                     * @param _qualifier 函数版本
                     * 
                     */
                    void SetQualifier(const std::string& _qualifier);

                    /**
                     * 判断参数 Qualifier 是否已赋值
                     * @return Qualifier 是否已赋值
                     * 
                     */
                    bool QualifierHasBeenSet() const;

                    /**
                     * 获取事件状态，RUNNING 表示运行中, FINISHED 表示调用成功, ABORTED 表示调用终止, FAILED 表示调用失败
                     * @return Status 事件状态，RUNNING 表示运行中, FINISHED 表示调用成功, ABORTED 表示调用终止, FAILED 表示调用失败
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置事件状态，RUNNING 表示运行中, FINISHED 表示调用成功, ABORTED 表示调用终止, FAILED 表示调用失败
                     * @param _status 事件状态，RUNNING 表示运行中, FINISHED 表示调用成功, ABORTED 表示调用终止, FAILED 表示调用失败
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
                     * 获取调用开始时间，格式: "%Y-%m-%d %H:%M:%S.%f"
                     * @return StartTime 调用开始时间，格式: "%Y-%m-%d %H:%M:%S.%f"
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置调用开始时间，格式: "%Y-%m-%d %H:%M:%S.%f"
                     * @param _startTime 调用开始时间，格式: "%Y-%m-%d %H:%M:%S.%f"
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
                     * 获取调用结束时间，格式: "%Y-%m-%d %H:%M:%S.%f"
                     * @return EndTime 调用结束时间，格式: "%Y-%m-%d %H:%M:%S.%f"
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置调用结束时间，格式: "%Y-%m-%d %H:%M:%S.%f"
                     * @param _endTime 调用结束时间，格式: "%Y-%m-%d %H:%M:%S.%f"
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 调用请求id
                     */
                    std::string m_invokeRequestId;
                    bool m_invokeRequestIdHasBeenSet;

                    /**
                     * 调用类型
                     */
                    std::string m_invokeType;
                    bool m_invokeTypeHasBeenSet;

                    /**
                     * 函数版本
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                    /**
                     * 事件状态，RUNNING 表示运行中, FINISHED 表示调用成功, ABORTED 表示调用终止, FAILED 表示调用失败
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 调用开始时间，格式: "%Y-%m-%d %H:%M:%S.%f"
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 调用结束时间，格式: "%Y-%m-%d %H:%M:%S.%f"
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_ASYNCEVENT_H_
