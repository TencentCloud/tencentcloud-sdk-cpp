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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELOGDOWNLOADLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELOGDOWNLOADLISTREQUEST_H_

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
                * DescribeLogDownloadList请求参数结构体
                */
                class DescribeLogDownloadListRequest : public AbstractModel
                {
                public:
                    DescribeLogDownloadListRequest();
                    ~DescribeLogDownloadListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始时间，北京时间。
格式：yyyy-mm-dd HH:MM:SS。
注：此字段为北京时间（UTC+8时区）。
                     * @return StartTime 开始时间，北京时间。
格式：yyyy-mm-dd HH:MM:SS。
注：此字段为北京时间（UTC+8时区）。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间，北京时间。
格式：yyyy-mm-dd HH:MM:SS。
注：此字段为北京时间（UTC+8时区）。
                     * @param _startTime 开始时间，北京时间。
格式：yyyy-mm-dd HH:MM:SS。
注：此字段为北京时间（UTC+8时区）。
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
                     * 获取结束时间，北京时间。
格式：yyyy-mm-dd HH:MM:SS。
注意：结束时间 - 开始时间 <=7天。
注：此字段为北京时间（UTC+8时区）。
                     * @return EndTime 结束时间，北京时间。
格式：yyyy-mm-dd HH:MM:SS。
注意：结束时间 - 开始时间 <=7天。
注：此字段为北京时间（UTC+8时区）。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，北京时间。
格式：yyyy-mm-dd HH:MM:SS。
注意：结束时间 - 开始时间 <=7天。
注：此字段为北京时间（UTC+8时区）。
                     * @param _endTime 结束时间，北京时间。
格式：yyyy-mm-dd HH:MM:SS。
注意：结束时间 - 开始时间 <=7天。
注：此字段为北京时间（UTC+8时区）。
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
                     * 获取域名列表。
                     * @return PlayDomains 域名列表。
                     * 
                     */
                    std::vector<std::string> GetPlayDomains() const;

                    /**
                     * 设置域名列表。
                     * @param _playDomains 域名列表。
                     * 
                     */
                    void SetPlayDomains(const std::vector<std::string>& _playDomains);

                    /**
                     * 判断参数 PlayDomains 是否已赋值
                     * @return PlayDomains 是否已赋值
                     * 
                     */
                    bool PlayDomainsHasBeenSet() const;

                    /**
                     * 获取快直播还是标准直播，0：标准直播，1：快直播。默认为0。
                     * @return IsFastLive 快直播还是标准直播，0：标准直播，1：快直播。默认为0。
                     * 
                     */
                    int64_t GetIsFastLive() const;

                    /**
                     * 设置快直播还是标准直播，0：标准直播，1：快直播。默认为0。
                     * @param _isFastLive 快直播还是标准直播，0：标准直播，1：快直播。默认为0。
                     * 
                     */
                    void SetIsFastLive(const int64_t& _isFastLive);

                    /**
                     * 判断参数 IsFastLive 是否已赋值
                     * @return IsFastLive 是否已赋值
                     * 
                     */
                    bool IsFastLiveHasBeenSet() const;

                private:

                    /**
                     * 开始时间，北京时间。
格式：yyyy-mm-dd HH:MM:SS。
注：此字段为北京时间（UTC+8时区）。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，北京时间。
格式：yyyy-mm-dd HH:MM:SS。
注意：结束时间 - 开始时间 <=7天。
注：此字段为北京时间（UTC+8时区）。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 域名列表。
                     */
                    std::vector<std::string> m_playDomains;
                    bool m_playDomainsHasBeenSet;

                    /**
                     * 快直播还是标准直播，0：标准直播，1：快直播。默认为0。
                     */
                    int64_t m_isFastLive;
                    bool m_isFastLiveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELOGDOWNLOADLISTREQUEST_H_
