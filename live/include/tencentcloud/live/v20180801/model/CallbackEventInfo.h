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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CALLBACKEVENTINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CALLBACKEVENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 回调事件信息
                */
                class CallbackEventInfo : public AbstractModel
                {
                public:
                    CallbackEventInfo();
                    ~CallbackEventInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件时间
                     * @return EventTime 事件时间
                     */
                    std::string GetEventTime() const;

                    /**
                     * 设置事件时间
                     * @param EventTime 事件时间
                     */
                    void SetEventTime(const std::string& _eventTime);

                    /**
                     * 判断参数 EventTime 是否已赋值
                     * @return EventTime 是否已赋值
                     */
                    bool EventTimeHasBeenSet() const;

                    /**
                     * 获取事件类型
                     * @return EventType 事件类型
                     */
                    uint64_t GetEventType() const;

                    /**
                     * 设置事件类型
                     * @param EventType 事件类型
                     */
                    void SetEventType(const uint64_t& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取回调请求
                     * @return Request 回调请求
                     */
                    std::string GetRequest() const;

                    /**
                     * 设置回调请求
                     * @param Request 回调请求
                     */
                    void SetRequest(const std::string& _request);

                    /**
                     * 判断参数 Request 是否已赋值
                     * @return Request 是否已赋值
                     */
                    bool RequestHasBeenSet() const;

                    /**
                     * 获取回调响应
                     * @return Response 回调响应
                     */
                    std::string GetResponse() const;

                    /**
                     * 设置回调响应
                     * @param Response 回调响应
                     */
                    void SetResponse(const std::string& _response);

                    /**
                     * 判断参数 Response 是否已赋值
                     * @return Response 是否已赋值
                     */
                    bool ResponseHasBeenSet() const;

                    /**
                     * 获取客户接口响应时间
                     * @return ResponseTime 客户接口响应时间
                     */
                    std::string GetResponseTime() const;

                    /**
                     * 设置客户接口响应时间
                     * @param ResponseTime 客户接口响应时间
                     */
                    void SetResponseTime(const std::string& _responseTime);

                    /**
                     * 判断参数 ResponseTime 是否已赋值
                     * @return ResponseTime 是否已赋值
                     */
                    bool ResponseTimeHasBeenSet() const;

                    /**
                     * 获取回调结果
                     * @return ResultCode 回调结果
                     */
                    uint64_t GetResultCode() const;

                    /**
                     * 设置回调结果
                     * @param ResultCode 回调结果
                     */
                    void SetResultCode(const uint64_t& _resultCode);

                    /**
                     * 判断参数 ResultCode 是否已赋值
                     * @return ResultCode 是否已赋值
                     */
                    bool ResultCodeHasBeenSet() const;

                    /**
                     * 获取流名称
                     * @return StreamId 流名称
                     */
                    std::string GetStreamId() const;

                    /**
                     * 设置流名称
                     * @param StreamId 流名称
                     */
                    void SetStreamId(const std::string& _streamId);

                    /**
                     * 判断参数 StreamId 是否已赋值
                     * @return StreamId 是否已赋值
                     */
                    bool StreamIdHasBeenSet() const;

                private:

                    /**
                     * 事件时间
                     */
                    std::string m_eventTime;
                    bool m_eventTimeHasBeenSet;

                    /**
                     * 事件类型
                     */
                    uint64_t m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 回调请求
                     */
                    std::string m_request;
                    bool m_requestHasBeenSet;

                    /**
                     * 回调响应
                     */
                    std::string m_response;
                    bool m_responseHasBeenSet;

                    /**
                     * 客户接口响应时间
                     */
                    std::string m_responseTime;
                    bool m_responseTimeHasBeenSet;

                    /**
                     * 回调结果
                     */
                    uint64_t m_resultCode;
                    bool m_resultCodeHasBeenSet;

                    /**
                     * 流名称
                     */
                    std::string m_streamId;
                    bool m_streamIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CALLBACKEVENTINFO_H_
