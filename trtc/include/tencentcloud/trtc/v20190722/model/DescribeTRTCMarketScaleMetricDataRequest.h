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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCMARKETSCALEMETRICDATAREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCMARKETSCALEMETRICDATAREQUEST_H_

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
                * DescribeTRTCMarketScaleMetricData请求参数结构体
                */
                class DescribeTRTCMarketScaleMetricDataRequest : public AbstractModel
                {
                public:
                    DescribeTRTCMarketScaleMetricDataRequest();
                    ~DescribeTRTCMarketScaleMetricDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户SdkAppId
                     * @return SdkAppId 用户SdkAppId
                     * 
                     */
                    std::string GetSdkAppId() const;

                    /**
                     * 设置用户SdkAppId
                     * @param _sdkAppId 用户SdkAppId
                     * 
                     */
                    void SetSdkAppId(const std::string& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取查询开始时间，格式为YYYY-MM-DD。（查询时间范围根据监控仪表盘功能版本而定，【基础版】可查近30天，【进阶版】可查近60天）
                     * @return StartTime 查询开始时间，格式为YYYY-MM-DD。（查询时间范围根据监控仪表盘功能版本而定，【基础版】可查近30天，【进阶版】可查近60天）
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询开始时间，格式为YYYY-MM-DD。（查询时间范围根据监控仪表盘功能版本而定，【基础版】可查近30天，【进阶版】可查近60天）
                     * @param _startTime 查询开始时间，格式为YYYY-MM-DD。（查询时间范围根据监控仪表盘功能版本而定，【基础版】可查近30天，【进阶版】可查近60天）
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
                     * 获取查询结束时间，格式为YYYY-MM-DD。
                     * @return EndTime 查询结束时间，格式为YYYY-MM-DD。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询结束时间，格式为YYYY-MM-DD。
                     * @param _endTime 查询结束时间，格式为YYYY-MM-DD。
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
                     * 获取返回数据的粒度，支持设为以下值：
d：按天。此时返回查询时间范围内 UTC 时间为零点的数据。
h：按小时。此时返回查询时间范围内 UTC 时间为整小时的数据。
                     * @return Period 返回数据的粒度，支持设为以下值：
d：按天。此时返回查询时间范围内 UTC 时间为零点的数据。
h：按小时。此时返回查询时间范围内 UTC 时间为整小时的数据。
                     * 
                     */
                    std::string GetPeriod() const;

                    /**
                     * 设置返回数据的粒度，支持设为以下值：
d：按天。此时返回查询时间范围内 UTC 时间为零点的数据。
h：按小时。此时返回查询时间范围内 UTC 时间为整小时的数据。
                     * @param _period 返回数据的粒度，支持设为以下值：
d：按天。此时返回查询时间范围内 UTC 时间为零点的数据。
h：按小时。此时返回查询时间范围内 UTC 时间为整小时的数据。
                     * 
                     */
                    void SetPeriod(const std::string& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                private:

                    /**
                     * 用户SdkAppId
                     */
                    std::string m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 查询开始时间，格式为YYYY-MM-DD。（查询时间范围根据监控仪表盘功能版本而定，【基础版】可查近30天，【进阶版】可查近60天）
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间，格式为YYYY-MM-DD。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 返回数据的粒度，支持设为以下值：
d：按天。此时返回查询时间范围内 UTC 时间为零点的数据。
h：按小时。此时返回查询时间范围内 UTC 时间为整小时的数据。
                     */
                    std::string m_period;
                    bool m_periodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCMARKETSCALEMETRICDATAREQUEST_H_
