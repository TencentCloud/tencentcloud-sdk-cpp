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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBECALLBACKRECORDSLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBECALLBACKRECORDSLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeCallbackRecordsList请求参数结构体
                */
                class DescribeCallbackRecordsListRequest : public AbstractModel
                {
                public:
                    DescribeCallbackRecordsListRequest();
                    ~DescribeCallbackRecordsListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取起始时间点，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#:~:text=I-,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。
                     * @return StartTime 起始时间点，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#:~:text=I-,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始时间点，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#:~:text=I-,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。
                     * @param _startTime 起始时间点，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#:~:text=I-,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。
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
                     * 获取结束时间点，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#:~:text=I-,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。

查询的起始和结束时间跨度不支持超过1天。仅支持查询最近14天的数据。
                     * @return EndTime 结束时间点，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#:~:text=I-,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。

查询的起始和结束时间跨度不支持超过1天。仅支持查询最近14天的数据。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间点，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#:~:text=I-,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。

查询的起始和结束时间跨度不支持超过1天。仅支持查询最近14天的数据。
                     * @param _endTime 结束时间点，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#:~:text=I-,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。

查询的起始和结束时间跨度不支持超过1天。仅支持查询最近14天的数据。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取流名称，精确匹配。
                     * @return StreamName 流名称，精确匹配。
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置流名称，精确匹配。
                     * @param _streamName 流名称，精确匹配。
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取页码。
                     * @return PageNum 页码。
                     * 
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 设置页码。
                     * @param _pageNum 页码。
                     * 
                     */
                    void SetPageNum(const uint64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取每页条数。
                     * @return PageSize 每页条数。
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页条数。
                     * @param _pageSize 每页条数。
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取事件类型。
0: "断流",
1: "推流",
100: "录制"
200: "截图回调"。
                     * @return EventType 事件类型。
0: "断流",
1: "推流",
100: "录制"
200: "截图回调"。
                     * 
                     */
                    uint64_t GetEventType() const;

                    /**
                     * 设置事件类型。
0: "断流",
1: "推流",
100: "录制"
200: "截图回调"。
                     * @param _eventType 事件类型。
0: "断流",
1: "推流",
100: "录制"
200: "截图回调"。
                     * 
                     */
                    void SetEventType(const uint64_t& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取回调结果。
0为成功，其他为失败。
                     * @return ResultCode 回调结果。
0为成功，其他为失败。
                     * 
                     */
                    uint64_t GetResultCode() const;

                    /**
                     * 设置回调结果。
0为成功，其他为失败。
                     * @param _resultCode 回调结果。
0为成功，其他为失败。
                     * 
                     */
                    void SetResultCode(const uint64_t& _resultCode);

                    /**
                     * 判断参数 ResultCode 是否已赋值
                     * @return ResultCode 是否已赋值
                     * 
                     */
                    bool ResultCodeHasBeenSet() const;

                private:

                    /**
                     * 起始时间点，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#:~:text=I-,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间点，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#:~:text=I-,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。

查询的起始和结束时间跨度不支持超过1天。仅支持查询最近14天的数据。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 流名称，精确匹配。
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * 页码。
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * 每页条数。
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 事件类型。
0: "断流",
1: "推流",
100: "录制"
200: "截图回调"。
                     */
                    uint64_t m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 回调结果。
0为成功，其他为失败。
                     */
                    uint64_t m_resultCode;
                    bool m_resultCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBECALLBACKRECORDSLISTREQUEST_H_
