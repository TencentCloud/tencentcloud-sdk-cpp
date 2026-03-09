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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBETELCALLINFOREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBETELCALLINFOREQUEST_H_

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
                * DescribeTelCallInfo请求参数结构体
                */
                class DescribeTelCallInfoRequest : public AbstractModel
                {
                public:
                    DescribeTelCallInfoRequest();
                    ~DescribeTelCallInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>起始时间戳，Unix 时间戳(查询维度仅支持天，例如查询5月1日应该传startTime:&quot;2023-05-01 00:00:00&quot;,&quot;endTime&quot;:&quot;2023-05-01 23:59:59&quot;的时间戳,查5月1日和5月2日的应该传startTime:&quot;2023-05-01 00:00:00&quot;,&quot;endTime&quot;:&quot;2023-05-02 23:59:59&quot;的时间戳)</p>
                     * @return StartTimeStamp <p>起始时间戳，Unix 时间戳(查询维度仅支持天，例如查询5月1日应该传startTime:&quot;2023-05-01 00:00:00&quot;,&quot;endTime&quot;:&quot;2023-05-01 23:59:59&quot;的时间戳,查5月1日和5月2日的应该传startTime:&quot;2023-05-01 00:00:00&quot;,&quot;endTime&quot;:&quot;2023-05-02 23:59:59&quot;的时间戳)</p>
                     * 
                     */
                    int64_t GetStartTimeStamp() const;

                    /**
                     * 设置<p>起始时间戳，Unix 时间戳(查询维度仅支持天，例如查询5月1日应该传startTime:&quot;2023-05-01 00:00:00&quot;,&quot;endTime&quot;:&quot;2023-05-01 23:59:59&quot;的时间戳,查5月1日和5月2日的应该传startTime:&quot;2023-05-01 00:00:00&quot;,&quot;endTime&quot;:&quot;2023-05-02 23:59:59&quot;的时间戳)</p>
                     * @param _startTimeStamp <p>起始时间戳，Unix 时间戳(查询维度仅支持天，例如查询5月1日应该传startTime:&quot;2023-05-01 00:00:00&quot;,&quot;endTime&quot;:&quot;2023-05-01 23:59:59&quot;的时间戳,查5月1日和5月2日的应该传startTime:&quot;2023-05-01 00:00:00&quot;,&quot;endTime&quot;:&quot;2023-05-02 23:59:59&quot;的时间戳)</p>
                     * 
                     */
                    void SetStartTimeStamp(const int64_t& _startTimeStamp);

                    /**
                     * 判断参数 StartTimeStamp 是否已赋值
                     * @return StartTimeStamp 是否已赋值
                     * 
                     */
                    bool StartTimeStampHasBeenSet() const;

                    /**
                     * 获取<p>结束时间戳，Unix 时间戳，查询时间范围最大为90天(查询维度仅支持天，例如查询5月1日应该传startTime:&quot;2023-05-01 00:00:00&quot;,&quot;endTime&quot;:&quot;2023-05-01 23:59:59&quot;的时间戳,查5月1日和5月2日的应该传startTime:&quot;2023-05-01 00:00:00&quot;,&quot;endTime&quot;:&quot;2023-05-02 23:59:59&quot;的时间戳)</p>
                     * @return EndTimeStamp <p>结束时间戳，Unix 时间戳，查询时间范围最大为90天(查询维度仅支持天，例如查询5月1日应该传startTime:&quot;2023-05-01 00:00:00&quot;,&quot;endTime&quot;:&quot;2023-05-01 23:59:59&quot;的时间戳,查5月1日和5月2日的应该传startTime:&quot;2023-05-01 00:00:00&quot;,&quot;endTime&quot;:&quot;2023-05-02 23:59:59&quot;的时间戳)</p>
                     * 
                     */
                    int64_t GetEndTimeStamp() const;

                    /**
                     * 设置<p>结束时间戳，Unix 时间戳，查询时间范围最大为90天(查询维度仅支持天，例如查询5月1日应该传startTime:&quot;2023-05-01 00:00:00&quot;,&quot;endTime&quot;:&quot;2023-05-01 23:59:59&quot;的时间戳,查5月1日和5月2日的应该传startTime:&quot;2023-05-01 00:00:00&quot;,&quot;endTime&quot;:&quot;2023-05-02 23:59:59&quot;的时间戳)</p>
                     * @param _endTimeStamp <p>结束时间戳，Unix 时间戳，查询时间范围最大为90天(查询维度仅支持天，例如查询5月1日应该传startTime:&quot;2023-05-01 00:00:00&quot;,&quot;endTime&quot;:&quot;2023-05-01 23:59:59&quot;的时间戳,查5月1日和5月2日的应该传startTime:&quot;2023-05-01 00:00:00&quot;,&quot;endTime&quot;:&quot;2023-05-02 23:59:59&quot;的时间戳)</p>
                     * 
                     */
                    void SetEndTimeStamp(const int64_t& _endTimeStamp);

                    /**
                     * 判断参数 EndTimeStamp 是否已赋值
                     * @return EndTimeStamp 是否已赋值
                     * 
                     */
                    bool EndTimeStampHasBeenSet() const;

                    /**
                     * 获取<p>应用ID列表，多个ID时，返回值为多个ID使用总和</p>
                     * @return SdkAppIdList <p>应用ID列表，多个ID时，返回值为多个ID使用总和</p>
                     * 
                     */
                    std::vector<int64_t> GetSdkAppIdList() const;

                    /**
                     * 设置<p>应用ID列表，多个ID时，返回值为多个ID使用总和</p>
                     * @param _sdkAppIdList <p>应用ID列表，多个ID时，返回值为多个ID使用总和</p>
                     * 
                     */
                    void SetSdkAppIdList(const std::vector<int64_t>& _sdkAppIdList);

                    /**
                     * 判断参数 SdkAppIdList 是否已赋值
                     * @return SdkAppIdList 是否已赋值
                     * 
                     */
                    bool SdkAppIdListHasBeenSet() const;

                private:

                    /**
                     * <p>起始时间戳，Unix 时间戳(查询维度仅支持天，例如查询5月1日应该传startTime:&quot;2023-05-01 00:00:00&quot;,&quot;endTime&quot;:&quot;2023-05-01 23:59:59&quot;的时间戳,查5月1日和5月2日的应该传startTime:&quot;2023-05-01 00:00:00&quot;,&quot;endTime&quot;:&quot;2023-05-02 23:59:59&quot;的时间戳)</p>
                     */
                    int64_t m_startTimeStamp;
                    bool m_startTimeStampHasBeenSet;

                    /**
                     * <p>结束时间戳，Unix 时间戳，查询时间范围最大为90天(查询维度仅支持天，例如查询5月1日应该传startTime:&quot;2023-05-01 00:00:00&quot;,&quot;endTime&quot;:&quot;2023-05-01 23:59:59&quot;的时间戳,查5月1日和5月2日的应该传startTime:&quot;2023-05-01 00:00:00&quot;,&quot;endTime&quot;:&quot;2023-05-02 23:59:59&quot;的时间戳)</p>
                     */
                    int64_t m_endTimeStamp;
                    bool m_endTimeStampHasBeenSet;

                    /**
                     * <p>应用ID列表，多个ID时，返回值为多个ID使用总和</p>
                     */
                    std::vector<int64_t> m_sdkAppIdList;
                    bool m_sdkAppIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBETELCALLINFOREQUEST_H_
