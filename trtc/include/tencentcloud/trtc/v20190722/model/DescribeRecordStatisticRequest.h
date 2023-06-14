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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBERECORDSTATISTICREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBERECORDSTATISTICREQUEST_H_

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
                * DescribeRecordStatistic请求参数结构体
                */
                class DescribeRecordStatisticRequest : public AbstractModel
                {
                public:
                    DescribeRecordStatisticRequest();
                    ~DescribeRecordStatisticRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询开始日期，格式为YYYY-MM-DD。
                     * @return StartTime 查询开始日期，格式为YYYY-MM-DD。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询开始日期，格式为YYYY-MM-DD。
                     * @param _startTime 查询开始日期，格式为YYYY-MM-DD。
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
                     * 获取查询结束日期，格式为YYYY-MM-DD。
单次查询统计区间最多不能超过31天。
                     * @return EndTime 查询结束日期，格式为YYYY-MM-DD。
单次查询统计区间最多不能超过31天。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询结束日期，格式为YYYY-MM-DD。
单次查询统计区间最多不能超过31天。
                     * @param _endTime 查询结束日期，格式为YYYY-MM-DD。
单次查询统计区间最多不能超过31天。
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
                     * 查询开始日期，格式为YYYY-MM-DD。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束日期，格式为YYYY-MM-DD。
单次查询统计区间最多不能超过31天。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

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

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBERECORDSTATISTICREQUEST_H_
