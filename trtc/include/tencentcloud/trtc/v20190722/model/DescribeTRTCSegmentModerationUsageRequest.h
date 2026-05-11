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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCSEGMENTMODERATIONUSAGEREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCSEGMENTMODERATIONUSAGEREQUEST_H_

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
                * DescribeTRTCSegmentModerationUsage请求参数结构体
                */
                class DescribeTRTCSegmentModerationUsageRequest : public AbstractModel
                {
                public:
                    DescribeTRTCSegmentModerationUsageRequest();
                    ~DescribeTRTCSegmentModerationUsageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询开始时间，格式为YYYY-MM-DD HH:mm:ss。
                     * @return StartTime 查询开始时间，格式为YYYY-MM-DD HH:mm:ss。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询开始时间，格式为YYYY-MM-DD HH:mm:ss。
                     * @param _startTime 查询开始时间，格式为YYYY-MM-DD HH:mm:ss。
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
                     * 获取查询结束时间，格式为YYYY-MM-DD HH:mm:ss。单次查询统计区间最多不能超过31天。
                     * @return EndTime 查询结束时间，格式为YYYY-MM-DD HH:mm:ss。单次查询统计区间最多不能超过31天。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询结束时间，格式为YYYY-MM-DD HH:mm:ss。单次查询统计区间最多不能超过31天。
                     * @param _endTime 查询结束时间，格式为YYYY-MM-DD HH:mm:ss。单次查询统计区间最多不能超过31天。
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
                     * 获取媒体类型，枚举值：audio（音频）、picture（图片）
                     * @return Type 媒体类型，枚举值：audio（音频）、picture（图片）
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置媒体类型，枚举值：audio（音频）、picture（图片）
                     * @param _type 媒体类型，枚举值：audio（音频）、picture（图片）
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取使用场景（业务类型），枚举值：0 = AI 内容理解（审核场景）、1 = 音视频切片（云端切片场景）
                     * @return Business 使用场景（业务类型），枚举值：0 = AI 内容理解（审核场景）、1 = 音视频切片（云端切片场景）
                     * 
                     */
                    uint64_t GetBusiness() const;

                    /**
                     * 设置使用场景（业务类型），枚举值：0 = AI 内容理解（审核场景）、1 = 音视频切片（云端切片场景）
                     * @param _business 使用场景（业务类型），枚举值：0 = AI 内容理解（审核场景）、1 = 音视频切片（云端切片场景）
                     * 
                     */
                    void SetBusiness(const uint64_t& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取应用ID，可不传。传应用ID时返回的是该应用的用量，不传时返回多个应用的合计值。
                     * @return SdkAppId 应用ID，可不传。传应用ID时返回的是该应用的用量，不传时返回多个应用的合计值。
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置应用ID，可不传。传应用ID时返回的是该应用的用量，不传时返回多个应用的合计值。
                     * @param _sdkAppId 应用ID，可不传。传应用ID时返回的是该应用的用量，不传时返回多个应用的合计值。
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                private:

                    /**
                     * 查询开始时间，格式为YYYY-MM-DD HH:mm:ss。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间，格式为YYYY-MM-DD HH:mm:ss。单次查询统计区间最多不能超过31天。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 媒体类型，枚举值：audio（音频）、picture（图片）
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 使用场景（业务类型），枚举值：0 = AI 内容理解（审核场景）、1 = 音视频切片（云端切片场景）
                     */
                    uint64_t m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 应用ID，可不传。传应用ID时返回的是该应用的用量，不传时返回多个应用的合计值。
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCSEGMENTMODERATIONUSAGEREQUEST_H_
