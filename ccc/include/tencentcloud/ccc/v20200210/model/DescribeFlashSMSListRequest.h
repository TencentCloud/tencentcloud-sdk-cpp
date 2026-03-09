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
                     * 获取<p>应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc</p>
                     * @return SdkAppId <p>应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc</p>
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置<p>应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc</p>
                     * @param _sdkAppId <p>应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc</p>
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
                     * 获取<p>起始时间戳，Unix 秒级时间戳，最大支持近180天。</p>
                     * @return StartTimestamp <p>起始时间戳，Unix 秒级时间戳，最大支持近180天。</p>
                     * 
                     */
                    int64_t GetStartTimestamp() const;

                    /**
                     * 设置<p>起始时间戳，Unix 秒级时间戳，最大支持近180天。</p>
                     * @param _startTimestamp <p>起始时间戳，Unix 秒级时间戳，最大支持近180天。</p>
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
                     * 获取<p>结束时间戳，Unix 秒级时间戳，结束时间与开始时间的区间范围小于90天。</p>
                     * @return EndTimestamp <p>结束时间戳，Unix 秒级时间戳，结束时间与开始时间的区间范围小于90天。</p>
                     * 
                     */
                    int64_t GetEndTimestamp() const;

                    /**
                     * 设置<p>结束时间戳，Unix 秒级时间戳，结束时间与开始时间的区间范围小于90天。</p>
                     * @param _endTimestamp <p>结束时间戳，Unix 秒级时间戳，结束时间与开始时间的区间范围小于90天。</p>
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
                     * 获取<p>闪信投递号码（被叫号码）</p>
                     * @return DeliveryNumber <p>闪信投递号码（被叫号码）</p>
                     * 
                     */
                    std::string GetDeliveryNumber() const;

                    /**
                     * 设置<p>闪信投递号码（被叫号码）</p>
                     * @param _deliveryNumber <p>闪信投递号码（被叫号码）</p>
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
                     * 获取<p>呼叫关联的系统号码</p>
                     * @return ServingNumber <p>呼叫关联的系统号码</p>
                     * 
                     */
                    std::string GetServingNumber() const;

                    /**
                     * 设置<p>呼叫关联的系统号码</p>
                     * @param _servingNumber <p>呼叫关联的系统号码</p>
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
                     * 获取<p>会话 ID</p>
                     * @return SessionId <p>会话 ID</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>会话 ID</p>
                     * @param _sessionId <p>会话 ID</p>
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
                     * 获取<p>投递结果 1 为成功，其他为失败</p>
                     * @return DeliveryStatus <p>投递结果 1 为成功，其他为失败</p>
                     * 
                     */
                    int64_t GetDeliveryStatus() const;

                    /**
                     * 设置<p>投递结果 1 为成功，其他为失败</p>
                     * @param _deliveryStatus <p>投递结果 1 为成功，其他为失败</p>
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
                     * 获取<p>分页大小，默认 20，最大 1000</p><p>取值范围：[20, 1000]</p><p>单位：条</p><p>默认值：20</p>
                     * @return PageSize <p>分页大小，默认 20，最大 1000</p><p>取值范围：[20, 1000]</p><p>单位：条</p><p>默认值：20</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>分页大小，默认 20，最大 1000</p><p>取值范围：[20, 1000]</p><p>单位：条</p><p>默认值：20</p>
                     * @param _pageSize <p>分页大小，默认 20，最大 1000</p><p>取值范围：[20, 1000]</p><p>单位：条</p><p>默认值：20</p>
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
                     * 获取<p>分页页码，从 0 开始</p>
                     * @return PageNumber <p>分页页码，从 0 开始</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>分页页码，从 0 开始</p>
                     * @param _pageNumber <p>分页页码，从 0 开始</p>
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
                     * <p>应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc</p>
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * <p>起始时间戳，Unix 秒级时间戳，最大支持近180天。</p>
                     */
                    int64_t m_startTimestamp;
                    bool m_startTimestampHasBeenSet;

                    /**
                     * <p>结束时间戳，Unix 秒级时间戳，结束时间与开始时间的区间范围小于90天。</p>
                     */
                    int64_t m_endTimestamp;
                    bool m_endTimestampHasBeenSet;

                    /**
                     * <p>闪信投递号码（被叫号码）</p>
                     */
                    std::string m_deliveryNumber;
                    bool m_deliveryNumberHasBeenSet;

                    /**
                     * <p>呼叫关联的系统号码</p>
                     */
                    std::string m_servingNumber;
                    bool m_servingNumberHasBeenSet;

                    /**
                     * <p>会话 ID</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>投递结果 1 为成功，其他为失败</p>
                     */
                    int64_t m_deliveryStatus;
                    bool m_deliveryStatusHasBeenSet;

                    /**
                     * <p>分页大小，默认 20，最大 1000</p><p>取值范围：[20, 1000]</p><p>单位：条</p><p>默认值：20</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>分页页码，从 0 开始</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEFLASHSMSLISTREQUEST_H_
