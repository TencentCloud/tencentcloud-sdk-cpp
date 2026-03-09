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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESESSIONDETAILREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESESSIONDETAILREQUEST_H_

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
                * DescribeSessionDetail请求参数结构体
                */
                class DescribeSessionDetailRequest : public AbstractModel
                {
                public:
                    DescribeSessionDetailRequest();
                    ~DescribeSessionDetailRequest() = default;
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
                     * 获取<p>通话的 session id</p>
                     * @return SessionId <p>通话的 session id</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>通话的 session id</p>
                     * @param _sessionId <p>通话的 session id</p>
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

                private:

                    /**
                     * <p>应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc</p>
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * <p>通话的 session id</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESESSIONDETAILREQUEST_H_
