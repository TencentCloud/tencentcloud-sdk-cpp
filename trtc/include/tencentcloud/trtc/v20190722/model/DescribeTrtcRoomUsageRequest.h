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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCROOMUSAGEREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCROOMUSAGEREQUEST_H_

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
                * DescribeTrtcRoomUsage请求参数结构体
                */
                class DescribeTrtcRoomUsageRequest : public AbstractModel
                {
                public:
                    DescribeTrtcRoomUsageRequest();
                    ~DescribeTrtcRoomUsageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TRTC的SdkAppId，和房间所对应的SdkAppId相同。
                     * @return SdkAppid TRTC的SdkAppId，和房间所对应的SdkAppId相同。
                     * 
                     */
                    uint64_t GetSdkAppid() const;

                    /**
                     * 设置TRTC的SdkAppId，和房间所对应的SdkAppId相同。
                     * @param _sdkAppid TRTC的SdkAppId，和房间所对应的SdkAppId相同。
                     * 
                     */
                    void SetSdkAppid(const uint64_t& _sdkAppid);

                    /**
                     * 判断参数 SdkAppid 是否已赋值
                     * @return SdkAppid 是否已赋值
                     * 
                     */
                    bool SdkAppidHasBeenSet() const;

                    /**
                     * 获取查询开始时间，格式为YYYY-MM-DD HH:MM，精确到分钟级。
                     * @return StartTime 查询开始时间，格式为YYYY-MM-DD HH:MM，精确到分钟级。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询开始时间，格式为YYYY-MM-DD HH:MM，精确到分钟级。
                     * @param _startTime 查询开始时间，格式为YYYY-MM-DD HH:MM，精确到分钟级。
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
                     * 获取查询结束时间，格式为YYYY-MM-DD HH:MM，单次查询不超过24h。
                     * @return EndTime 查询结束时间，格式为YYYY-MM-DD HH:MM，单次查询不超过24h。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询结束时间，格式为YYYY-MM-DD HH:MM，单次查询不超过24h。
                     * @param _endTime 查询结束时间，格式为YYYY-MM-DD HH:MM，单次查询不超过24h。
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
                     * TRTC的SdkAppId，和房间所对应的SdkAppId相同。
                     */
                    uint64_t m_sdkAppid;
                    bool m_sdkAppidHasBeenSet;

                    /**
                     * 查询开始时间，格式为YYYY-MM-DD HH:MM，精确到分钟级。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间，格式为YYYY-MM-DD HH:MM，单次查询不超过24h。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCROOMUSAGEREQUEST_H_
