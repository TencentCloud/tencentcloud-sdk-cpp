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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCMARKETQUALITYDATAREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCMARKETQUALITYDATAREQUEST_H_

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
                * DescribeTRTCMarketQualityData请求参数结构体
                */
                class DescribeTRTCMarketQualityDataRequest : public AbstractModel
                {
                public:
                    DescribeTRTCMarketQualityDataRequest();
                    ~DescribeTRTCMarketQualityDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>用户SdkAppId（如：1400xxxxxx）</p>
                     * @return SdkAppId <p>用户SdkAppId（如：1400xxxxxx）</p>
                     * 
                     */
                    std::string GetSdkAppId() const;

                    /**
                     * 设置<p>用户SdkAppId（如：1400xxxxxx）</p>
                     * @param _sdkAppId <p>用户SdkAppId（如：1400xxxxxx）</p>
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
                     * 获取<p>查询开始时间，格式为YYYY-MM-DD。（查询时间范围根据监控仪表盘功能版本而定，【基础版】可查近30天，【进阶版】可查近60天）</p>
                     * @return StartTime <p>查询开始时间，格式为YYYY-MM-DD。（查询时间范围根据监控仪表盘功能版本而定，【基础版】可查近30天，【进阶版】可查近60天）</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>查询开始时间，格式为YYYY-MM-DD。（查询时间范围根据监控仪表盘功能版本而定，【基础版】可查近30天，【进阶版】可查近60天）</p>
                     * @param _startTime <p>查询开始时间，格式为YYYY-MM-DD。（查询时间范围根据监控仪表盘功能版本而定，【基础版】可查近30天，【进阶版】可查近60天）</p>
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
                     * 获取<p>查询结束时间，格式为YYYY-MM-DD。</p>
                     * @return EndTime <p>查询结束时间，格式为YYYY-MM-DD。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>查询结束时间，格式为YYYY-MM-DD。</p>
                     * @param _endTime <p>查询结束时间，格式为YYYY-MM-DD。</p>
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
                     * 获取<p>返回数据的粒度，支持设为以下值：<br>d：按天。此时返回查询时间范围内 UTC 时间为零点的数据。<br>h：按小时。此时返回查询时间范围内 UTC 时间为整小时的数据。</p>
                     * @return Period <p>返回数据的粒度，支持设为以下值：<br>d：按天。此时返回查询时间范围内 UTC 时间为零点的数据。<br>h：按小时。此时返回查询时间范围内 UTC 时间为整小时的数据。</p>
                     * 
                     */
                    std::string GetPeriod() const;

                    /**
                     * 设置<p>返回数据的粒度，支持设为以下值：<br>d：按天。此时返回查询时间范围内 UTC 时间为零点的数据。<br>h：按小时。此时返回查询时间范围内 UTC 时间为整小时的数据。</p>
                     * @param _period <p>返回数据的粒度，支持设为以下值：<br>d：按天。此时返回查询时间范围内 UTC 时间为零点的数据。<br>h：按小时。此时返回查询时间范围内 UTC 时间为整小时的数据。</p>
                     * 
                     */
                    void SetPeriod(const std::string& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取<p>返回数据是否为小数</p>
                     * @return IsFloat <p>返回数据是否为小数</p>
                     * 
                     */
                    bool GetIsFloat() const;

                    /**
                     * 设置<p>返回数据是否为小数</p>
                     * @param _isFloat <p>返回数据是否为小数</p>
                     * 
                     */
                    void SetIsFloat(const bool& _isFloat);

                    /**
                     * 判断参数 IsFloat 是否已赋值
                     * @return IsFloat 是否已赋值
                     * 
                     */
                    bool IsFloatHasBeenSet() const;

                private:

                    /**
                     * <p>用户SdkAppId（如：1400xxxxxx）</p>
                     */
                    std::string m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * <p>查询开始时间，格式为YYYY-MM-DD。（查询时间范围根据监控仪表盘功能版本而定，【基础版】可查近30天，【进阶版】可查近60天）</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>查询结束时间，格式为YYYY-MM-DD。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>返回数据的粒度，支持设为以下值：<br>d：按天。此时返回查询时间范围内 UTC 时间为零点的数据。<br>h：按小时。此时返回查询时间范围内 UTC 时间为整小时的数据。</p>
                     */
                    std::string m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>返回数据是否为小数</p>
                     */
                    bool m_isFloat;
                    bool m_isFloatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCMARKETQUALITYDATAREQUEST_H_
