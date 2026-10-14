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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESTREAMPACKAGEINGESTSTATISTICSREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESTREAMPACKAGEINGESTSTATISTICSREQUEST_H_

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
                * DescribeStreamPackageIngestStatistics请求参数结构体
                */
                class DescribeStreamPackageIngestStatisticsRequest : public AbstractModel
                {
                public:
                    DescribeStreamPackageIngestStatisticsRequest();
                    ~DescribeStreamPackageIngestStatisticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>查询起始时间，RFC3339 格式，如2026-08-24T00:00:00+08:00</p>
                     * @return StartTime <p>查询起始时间，RFC3339 格式，如2026-08-24T00:00:00+08:00</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>查询起始时间，RFC3339 格式，如2026-08-24T00:00:00+08:00</p>
                     * @param _startTime <p>查询起始时间，RFC3339 格式，如2026-08-24T00:00:00+08:00</p>
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
                     * 获取<p>查询结束时间，RFC3339 格式，如 2026-08-24T00:00:00+08:00；必须晚于 StartTime</p>
                     * @return EndTime <p>查询结束时间，RFC3339 格式，如 2026-08-24T00:00:00+08:00；必须晚于 StartTime</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>查询结束时间，RFC3339 格式，如 2026-08-24T00:00:00+08:00；必须晚于 StartTime</p>
                     * @param _endTime <p>查询结束时间，RFC3339 格式，如 2026-08-24T00:00:00+08:00；必须晚于 StartTime</p>
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
                     * 获取<p>频道ID列表，不传则查全部频道</p>
                     * @return ChannelIds <p>频道ID列表，不传则查全部频道</p>
                     * 
                     */
                    std::vector<std::string> GetChannelIds() const;

                    /**
                     * 设置<p>频道ID列表，不传则查全部频道</p>
                     * @param _channelIds <p>频道ID列表，不传则查全部频道</p>
                     * 
                     */
                    void SetChannelIds(const std::vector<std::string>& _channelIds);

                    /**
                     * 判断参数 ChannelIds 是否已赋值
                     * @return ChannelIds 是否已赋值
                     * 
                     */
                    bool ChannelIdsHasBeenSet() const;

                    /**
                     * 获取<p>频道类型过滤，枚举值：LiveChannel、SSAI、FASTChannel</p>
                     * @return Types <p>频道类型过滤，枚举值：LiveChannel、SSAI、FASTChannel</p>
                     * 
                     */
                    std::vector<std::string> GetTypes() const;

                    /**
                     * 设置<p>频道类型过滤，枚举值：LiveChannel、SSAI、FASTChannel</p>
                     * @param _types <p>频道类型过滤，枚举值：LiveChannel、SSAI、FASTChannel</p>
                     * 
                     */
                    void SetTypes(const std::vector<std::string>& _types);

                    /**
                     * 判断参数 Types 是否已赋值
                     * @return Types 是否已赋值
                     * 
                     */
                    bool TypesHasBeenSet() const;

                    /**
                     * 获取<p>维度，false(默认): summary 汇总模式；true: detail 明细模式（按时间拆分），当为false时粒度不生效</p>
                     * @return Dimension <p>维度，false(默认): summary 汇总模式；true: detail 明细模式（按时间拆分），当为false时粒度不生效</p>
                     * 
                     */
                    bool GetDimension() const;

                    /**
                     * 设置<p>维度，false(默认): summary 汇总模式；true: detail 明细模式（按时间拆分），当为false时粒度不生效</p>
                     * @param _dimension <p>维度，false(默认): summary 汇总模式；true: detail 明细模式（按时间拆分），当为false时粒度不生效</p>
                     * 
                     */
                    void SetDimension(const bool& _dimension);

                    /**
                     * 判断参数 Dimension 是否已赋值
                     * @return Dimension 是否已赋值
                     * 
                     */
                    bool DimensionHasBeenSet() const;

                    /**
                     * 获取<p>时间粒度（分钟），支持5（默认）/ 60 / 1440</p>
                     * @return Granularity <p>时间粒度（分钟），支持5（默认）/ 60 / 1440</p>
                     * 
                     */
                    int64_t GetGranularity() const;

                    /**
                     * 设置<p>时间粒度（分钟），支持5（默认）/ 60 / 1440</p>
                     * @param _granularity <p>时间粒度（分钟），支持5（默认）/ 60 / 1440</p>
                     * 
                     */
                    void SetGranularity(const int64_t& _granularity);

                    /**
                     * 判断参数 Granularity 是否已赋值
                     * @return Granularity 是否已赋值
                     * 
                     */
                    bool GranularityHasBeenSet() const;

                private:

                    /**
                     * <p>查询起始时间，RFC3339 格式，如2026-08-24T00:00:00+08:00</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>查询结束时间，RFC3339 格式，如 2026-08-24T00:00:00+08:00；必须晚于 StartTime</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>频道ID列表，不传则查全部频道</p>
                     */
                    std::vector<std::string> m_channelIds;
                    bool m_channelIdsHasBeenSet;

                    /**
                     * <p>频道类型过滤，枚举值：LiveChannel、SSAI、FASTChannel</p>
                     */
                    std::vector<std::string> m_types;
                    bool m_typesHasBeenSet;

                    /**
                     * <p>维度，false(默认): summary 汇总模式；true: detail 明细模式（按时间拆分），当为false时粒度不生效</p>
                     */
                    bool m_dimension;
                    bool m_dimensionHasBeenSet;

                    /**
                     * <p>时间粒度（分钟），支持5（默认）/ 60 / 1440</p>
                     */
                    int64_t m_granularity;
                    bool m_granularityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESTREAMPACKAGEINGESTSTATISTICSREQUEST_H_
