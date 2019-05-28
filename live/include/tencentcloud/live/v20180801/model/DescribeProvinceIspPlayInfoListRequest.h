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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPROVINCEISPPLAYINFOLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPROVINCEISPPLAYINFOLISTREQUEST_H_

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
                * DescribeProvinceIspPlayInfoList请求参数结构体
                */
                class DescribeProvinceIspPlayInfoListRequest : public AbstractModel
                {
                public:
                    DescribeProvinceIspPlayInfoListRequest();
                    ~DescribeProvinceIspPlayInfoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取起始时间点，当前使用北京时间，
例：2019-02-21 10:00:00。
                     * @return StartTime 起始时间点，当前使用北京时间，
例：2019-02-21 10:00:00。
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始时间点，当前使用北京时间，
例：2019-02-21 10:00:00。
                     * @param StartTime 起始时间点，当前使用北京时间，
例：2019-02-21 10:00:00。
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间点，当前使用北京时间，
例：2019-02-21 12:00:00。
注：EndTime 和 StartTime 只支持最近1天的数据查询。
                     * @return EndTime 结束时间点，当前使用北京时间，
例：2019-02-21 12:00:00。
注：EndTime 和 StartTime 只支持最近1天的数据查询。
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间点，当前使用北京时间，
例：2019-02-21 12:00:00。
注：EndTime 和 StartTime 只支持最近1天的数据查询。
                     * @param EndTime 结束时间点，当前使用北京时间，
例：2019-02-21 12:00:00。
注：EndTime 和 StartTime 只支持最近1天的数据查询。
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取支持如下粒度：
1：1分钟粒度（跨度不支持超过1天）
                     * @return Granularity 支持如下粒度：
1：1分钟粒度（跨度不支持超过1天）
                     */
                    uint64_t GetGranularity() const;

                    /**
                     * 设置支持如下粒度：
1：1分钟粒度（跨度不支持超过1天）
                     * @param Granularity 支持如下粒度：
1：1分钟粒度（跨度不支持超过1天）
                     */
                    void SetGranularity(const uint64_t& _granularity);

                    /**
                     * 判断参数 Granularity 是否已赋值
                     * @return Granularity 是否已赋值
                     */
                    bool GranularityHasBeenSet() const;

                    /**
                     * 获取统计指标类型：
“Bandwidth”：带宽
“FluxPerSecond”：平均流量
“Flux”：流量
“Request”：请求数
“Online”：并发连接数
                     * @return StatType 统计指标类型：
“Bandwidth”：带宽
“FluxPerSecond”：平均流量
“Flux”：流量
“Request”：请求数
“Online”：并发连接数
                     */
                    std::string GetStatType() const;

                    /**
                     * 设置统计指标类型：
“Bandwidth”：带宽
“FluxPerSecond”：平均流量
“Flux”：流量
“Request”：请求数
“Online”：并发连接数
                     * @param StatType 统计指标类型：
“Bandwidth”：带宽
“FluxPerSecond”：平均流量
“Flux”：流量
“Request”：请求数
“Online”：并发连接数
                     */
                    void SetStatType(const std::string& _statType);

                    /**
                     * 判断参数 StatType 是否已赋值
                     * @return StatType 是否已赋值
                     */
                    bool StatTypeHasBeenSet() const;

                    /**
                     * 获取播放域名列表。
                     * @return PlayDomains 播放域名列表。
                     */
                    std::vector<std::string> GetPlayDomains() const;

                    /**
                     * 设置播放域名列表。
                     * @param PlayDomains 播放域名列表。
                     */
                    void SetPlayDomains(const std::vector<std::string>& _playDomains);

                    /**
                     * 判断参数 PlayDomains 是否已赋值
                     * @return PlayDomains 是否已赋值
                     */
                    bool PlayDomainsHasBeenSet() const;

                    /**
                     * 获取非必传参数，要查询的省份（地区）英文名称列表，如 Beijing
                     * @return ProvinceNames 非必传参数，要查询的省份（地区）英文名称列表，如 Beijing
                     */
                    std::vector<std::string> GetProvinceNames() const;

                    /**
                     * 设置非必传参数，要查询的省份（地区）英文名称列表，如 Beijing
                     * @param ProvinceNames 非必传参数，要查询的省份（地区）英文名称列表，如 Beijing
                     */
                    void SetProvinceNames(const std::vector<std::string>& _provinceNames);

                    /**
                     * 判断参数 ProvinceNames 是否已赋值
                     * @return ProvinceNames 是否已赋值
                     */
                    bool ProvinceNamesHasBeenSet() const;

                    /**
                     * 获取非必传参数，要查询的运营商英文名称列表，如 China Mobile ，如果为空，查询所有运营商的数据
                     * @return IspNames 非必传参数，要查询的运营商英文名称列表，如 China Mobile ，如果为空，查询所有运营商的数据
                     */
                    std::vector<std::string> GetIspNames() const;

                    /**
                     * 设置非必传参数，要查询的运营商英文名称列表，如 China Mobile ，如果为空，查询所有运营商的数据
                     * @param IspNames 非必传参数，要查询的运营商英文名称列表，如 China Mobile ，如果为空，查询所有运营商的数据
                     */
                    void SetIspNames(const std::vector<std::string>& _ispNames);

                    /**
                     * 判断参数 IspNames 是否已赋值
                     * @return IspNames 是否已赋值
                     */
                    bool IspNamesHasBeenSet() const;

                private:

                    /**
                     * 起始时间点，当前使用北京时间，
例：2019-02-21 10:00:00。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间点，当前使用北京时间，
例：2019-02-21 12:00:00。
注：EndTime 和 StartTime 只支持最近1天的数据查询。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 支持如下粒度：
1：1分钟粒度（跨度不支持超过1天）
                     */
                    uint64_t m_granularity;
                    bool m_granularityHasBeenSet;

                    /**
                     * 统计指标类型：
“Bandwidth”：带宽
“FluxPerSecond”：平均流量
“Flux”：流量
“Request”：请求数
“Online”：并发连接数
                     */
                    std::string m_statType;
                    bool m_statTypeHasBeenSet;

                    /**
                     * 播放域名列表。
                     */
                    std::vector<std::string> m_playDomains;
                    bool m_playDomainsHasBeenSet;

                    /**
                     * 非必传参数，要查询的省份（地区）英文名称列表，如 Beijing
                     */
                    std::vector<std::string> m_provinceNames;
                    bool m_provinceNamesHasBeenSet;

                    /**
                     * 非必传参数，要查询的运营商英文名称列表，如 China Mobile ，如果为空，查询所有运营商的数据
                     */
                    std::vector<std::string> m_ispNames;
                    bool m_ispNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPROVINCEISPPLAYINFOLISTREQUEST_H_
