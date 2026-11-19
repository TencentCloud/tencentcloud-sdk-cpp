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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEFINANCECLOUDROOMUSAGEREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEFINANCECLOUDROOMUSAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeFinanceCloudRoomUsage请求参数结构体
                */
                class DescribeFinanceCloudRoomUsageRequest : public AbstractModel
                {
                public:
                    DescribeFinanceCloudRoomUsageRequest();
                    ~DescribeFinanceCloudRoomUsageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>与房间对应的 TRTC SdkAppId，必须是金融云应用。</p>
                     * @return SdkAppId <p>与房间对应的 TRTC SdkAppId，必须是金融云应用。</p>
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置<p>与房间对应的 TRTC SdkAppId，必须是金融云应用。</p>
                     * @param _sdkAppId <p>与房间对应的 TRTC SdkAppId，必须是金融云应用。</p>
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取<p>查询开始时间，格式为 YYYY-MM-DD HH:MM，精确到分钟级。</p>
                     * @return StartTime <p>查询开始时间，格式为 YYYY-MM-DD HH:MM，精确到分钟级。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>查询开始时间，格式为 YYYY-MM-DD HH:MM，精确到分钟级。</p>
                     * @param _startTime <p>查询开始时间，格式为 YYYY-MM-DD HH:MM，精确到分钟级。</p>
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
                     * 获取<p>查询结束时间，格式为 YYYY-MM-DD HH:MM，单次查询不超过 24 小时。</p>
                     * @return EndTime <p>查询结束时间，格式为 YYYY-MM-DD HH:MM，单次查询不超过 24 小时。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>查询结束时间，格式为 YYYY-MM-DD HH:MM，单次查询不超过 24 小时。</p>
                     * @param _endTime <p>查询结束时间，格式为 YYYY-MM-DD HH:MM，单次查询不超过 24 小时。</p>
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
                     * <p>与房间对应的 TRTC SdkAppId，必须是金融云应用。</p>
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * <p>查询开始时间，格式为 YYYY-MM-DD HH:MM，精确到分钟级。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>查询结束时间，格式为 YYYY-MM-DD HH:MM，单次查询不超过 24 小时。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEFINANCECLOUDROOMUSAGEREQUEST_H_
