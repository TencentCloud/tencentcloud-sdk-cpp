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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEFLASHSMSLISTREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEFLASHSMSLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeFlashSMSList请求参数结构体
                */
                class DescribeFlashSMSListRequest : public AbstractModel
                {
                public:
                    DescribeFlashSMSListRequest();
                    ~DescribeFlashSMSListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @return SdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @param _sdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取起始时间戳，Unix 秒级时间戳，最大支持近180天。
                     * @return StartTimestamp 起始时间戳，Unix 秒级时间戳，最大支持近180天。
                     * 
                     */
                    int64_t GetStartTimestamp() const;

                    /**
                     * 设置起始时间戳，Unix 秒级时间戳，最大支持近180天。
                     * @param _startTimestamp 起始时间戳，Unix 秒级时间戳，最大支持近180天。
                     * 
                     */
                    void SetStartTimestamp(const int64_t& _startTimestamp);

                    /**
                     * 判断参数 StartTimestamp 是否已赋值
                     * @return StartTimestamp 是否已赋值
                     * 
                     */
                    bool StartTimestampHasBeenSet() const;

                    /**
                     * 获取结束时间戳，Unix 秒级时间戳，结束时间与开始时间的区间范围小于90天。
                     * @return EndTimestamp 结束时间戳，Unix 秒级时间戳，结束时间与开始时间的区间范围小于90天。
                     * 
                     */
                    int64_t GetEndTimestamp() const;

                    /**
                     * 设置结束时间戳，Unix 秒级时间戳，结束时间与开始时间的区间范围小于90天。
                     * @param _endTimestamp 结束时间戳，Unix 秒级时间戳，结束时间与开始时间的区间范围小于90天。
                     * 
                     */
                    void SetEndTimestamp(const int64_t& _endTimestamp);

                    /**
                     * 判断参数 EndTimestamp 是否已赋值
                     * @return EndTimestamp 是否已赋值
                     * 
                     */
                    bool EndTimestampHasBeenSet() const;

                    /**
                     * 获取闪信投递号码（被叫号码）
                     * @return DeliveryNumber 闪信投递号码（被叫号码）
                     * 
                     */
                    std::string GetDeliveryNumber() const;

                    /**
                     * 设置闪信投递号码（被叫号码）
                     * @param _deliveryNumber 闪信投递号码（被叫号码）
                     * 
                     */
                    void SetDeliveryNumber(const std::string& _deliveryNumber);

                    /**
                     * 判断参数 DeliveryNumber 是否已赋值
                     * @return DeliveryNumber 是否已赋值
                     * 
                     */
                    bool DeliveryNumberHasBeenSet() const;

                    /**
                     * 获取呼叫关联的系统号码
                     * @return ServingNumber 呼叫关联的系统号码
                     * 
                     */
                    std::string GetServingNumber() const;

                    /**
                     * 设置呼叫关联的系统号码
                     * @param _servingNumber 呼叫关联的系统号码
                     * 
                     */
                    void SetServingNumber(const std::string& _servingNumber);

                    /**
                     * 判断参数 ServingNumber 是否已赋值
                     * @return ServingNumber 是否已赋值
                     * 
                     */
                    bool ServingNumberHasBeenSet() const;

                    /**
                     * 获取会话 ID
                     * @return SessionId 会话 ID
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置会话 ID
                     * @param _sessionId 会话 ID
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取投递结果 1 为成功，其他为失败
                     * @return DeliveryStatus 投递结果 1 为成功，其他为失败
                     * 
                     */
                    int64_t GetDeliveryStatus() const;

                    /**
                     * 设置投递结果 1 为成功，其他为失败
                     * @param _deliveryStatus 投递结果 1 为成功，其他为失败
                     * 
                     */
                    void SetDeliveryStatus(const int64_t& _deliveryStatus);

                    /**
                     * 判断参数 DeliveryStatus 是否已赋值
                     * @return DeliveryStatus 是否已赋值
                     * 
                     */
                    bool DeliveryStatusHasBeenSet() const;

                    /**
                     * 获取分页大小，默认 20，最大 100
                     * @return PageSize 分页大小，默认 20，最大 100
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置分页大小，默认 20，最大 100
                     * @param _pageSize 分页大小，默认 20，最大 100
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取分页页码，从 0 开始
                     * @return PageNumber 分页页码，从 0 开始
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置分页页码，从 0 开始
                     * @param _pageNumber 分页页码，从 0 开始
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                private:

                    /**
                     * 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 起始时间戳，Unix 秒级时间戳，最大支持近180天。
                     */
                    int64_t m_startTimestamp;
                    bool m_startTimestampHasBeenSet;

                    /**
                     * 结束时间戳，Unix 秒级时间戳，结束时间与开始时间的区间范围小于90天。
                     */
                    int64_t m_endTimestamp;
                    bool m_endTimestampHasBeenSet;

                    /**
                     * 闪信投递号码（被叫号码）
                     */
                    std::string m_deliveryNumber;
                    bool m_deliveryNumberHasBeenSet;

                    /**
                     * 呼叫关联的系统号码
                     */
                    std::string m_servingNumber;
                    bool m_servingNumberHasBeenSet;

                    /**
                     * 会话 ID
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 投递结果 1 为成功，其他为失败
                     */
                    int64_t m_deliveryStatus;
                    bool m_deliveryStatusHasBeenSet;

                    /**
                     * 分页大小，默认 20，最大 100
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 分页页码，从 0 开始
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEFLASHSMSLISTREQUEST_H_
