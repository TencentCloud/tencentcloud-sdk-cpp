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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEBILLBANDWIDTHANDFLUXLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEBILLBANDWIDTHANDFLUXLISTREQUEST_H_

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
                * DescribeBillBandwidthAndFluxList请求参数结构体
                */
                class DescribeBillBandwidthAndFluxListRequest : public AbstractModel
                {
                public:
                    DescribeBillBandwidthAndFluxListRequest();
                    ~DescribeBillBandwidthAndFluxListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取起始时间点，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见IOS日期格式说明文档: https://cloud.tencent.com/document/product/266/11732#I
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。
                     * @return StartTime 起始时间点，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见IOS日期格式说明文档: https://cloud.tencent.com/document/product/266/11732#I
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始时间点，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见IOS日期格式说明文档: https://cloud.tencent.com/document/product/266/11732#I
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。
                     * @param _startTime 起始时间点，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见IOS日期格式说明文档: https://cloud.tencent.com/document/product/266/11732#I
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。
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
                     * 获取结束时间点，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见IOS日期格式说明文档: https://cloud.tencent.com/document/product/266/11732#I
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。
起始和结束时间跨度不支持超过31天。支持最近3年的数据查询
                     * @return EndTime 结束时间点，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见IOS日期格式说明文档: https://cloud.tencent.com/document/product/266/11732#I
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。
起始和结束时间跨度不支持超过31天。支持最近3年的数据查询
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间点，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见IOS日期格式说明文档: https://cloud.tencent.com/document/product/266/11732#I
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。
起始和结束时间跨度不支持超过31天。支持最近3年的数据查询
                     * @param _endTime 结束时间点，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见IOS日期格式说明文档: https://cloud.tencent.com/document/product/266/11732#I
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。
起始和结束时间跨度不支持超过31天。支持最近3年的数据查询
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
                     * 获取直播播放域名，若不填，表示总体数据。
                     * @return PlayDomains 直播播放域名，若不填，表示总体数据。
                     * 
                     */
                    std::vector<std::string> GetPlayDomains() const;

                    /**
                     * 设置直播播放域名，若不填，表示总体数据。
                     * @param _playDomains 直播播放域名，若不填，表示总体数据。
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
                     * 获取可选值：
Mainland：查询国内数据，
Oversea：则查询国外数据，
默认：查询国内+国外的数据。
注：LEB（快直播）只支持国内+国外数据查询。
                     * @return MainlandOrOversea 可选值：
Mainland：查询国内数据，
Oversea：则查询国外数据，
默认：查询国内+国外的数据。
注：LEB（快直播）只支持国内+国外数据查询。
                     * 
                     */
                    std::string GetMainlandOrOversea() const;

                    /**
                     * 设置可选值：
Mainland：查询国内数据，
Oversea：则查询国外数据，
默认：查询国内+国外的数据。
注：LEB（快直播）只支持国内+国外数据查询。
                     * @param _mainlandOrOversea 可选值：
Mainland：查询国内数据，
Oversea：则查询国外数据，
默认：查询国内+国外的数据。
注：LEB（快直播）只支持国内+国外数据查询。
                     * 
                     */
                    void SetMainlandOrOversea(const std::string& _mainlandOrOversea);

                    /**
                     * 判断参数 MainlandOrOversea 是否已赋值
                     * @return MainlandOrOversea 是否已赋值
                     * 
                     */
                    bool MainlandOrOverseaHasBeenSet() const;

                    /**
                     * 获取数据粒度，支持如下粒度：
5：5分钟粒度，（跨度不支持超过1天），
60：1小时粒度（跨度不支持超过一个月），
1440：天粒度（跨度不支持超过一个月）。
默认值：5。
                     * @return Granularity 数据粒度，支持如下粒度：
5：5分钟粒度，（跨度不支持超过1天），
60：1小时粒度（跨度不支持超过一个月），
1440：天粒度（跨度不支持超过一个月）。
默认值：5。
                     * 
                     */
                    uint64_t GetGranularity() const;

                    /**
                     * 设置数据粒度，支持如下粒度：
5：5分钟粒度，（跨度不支持超过1天），
60：1小时粒度（跨度不支持超过一个月），
1440：天粒度（跨度不支持超过一个月）。
默认值：5。
                     * @param _granularity 数据粒度，支持如下粒度：
5：5分钟粒度，（跨度不支持超过1天），
60：1小时粒度（跨度不支持超过一个月），
1440：天粒度（跨度不支持超过一个月）。
默认值：5。
                     * 
                     */
                    void SetGranularity(const uint64_t& _granularity);

                    /**
                     * 判断参数 Granularity 是否已赋值
                     * @return Granularity 是否已赋值
                     * 
                     */
                    bool GranularityHasBeenSet() const;

                    /**
                     * 获取服务名称，可选值包括LVB(标准直播)，LEB(快直播)，不填则查LVB+LEB总值。
                     * @return ServiceName 服务名称，可选值包括LVB(标准直播)，LEB(快直播)，不填则查LVB+LEB总值。
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置服务名称，可选值包括LVB(标准直播)，LEB(快直播)，不填则查LVB+LEB总值。
                     * @param _serviceName 服务名称，可选值包括LVB(标准直播)，LEB(快直播)，不填则查LVB+LEB总值。
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取大区，映射表如下：
China Mainland 中国大陆
Asia Pacific I 亚太一区
Asia Pacific II 亚太二区
Asia Pacific III 亚太三区
Europe 欧洲
North America 北美
South America 南美
Middle East 中东
Africa 非洲。
                     * @return RegionNames 大区，映射表如下：
China Mainland 中国大陆
Asia Pacific I 亚太一区
Asia Pacific II 亚太二区
Asia Pacific III 亚太三区
Europe 欧洲
North America 北美
South America 南美
Middle East 中东
Africa 非洲。
                     * 
                     */
                    std::vector<std::string> GetRegionNames() const;

                    /**
                     * 设置大区，映射表如下：
China Mainland 中国大陆
Asia Pacific I 亚太一区
Asia Pacific II 亚太二区
Asia Pacific III 亚太三区
Europe 欧洲
North America 北美
South America 南美
Middle East 中东
Africa 非洲。
                     * @param _regionNames 大区，映射表如下：
China Mainland 中国大陆
Asia Pacific I 亚太一区
Asia Pacific II 亚太二区
Asia Pacific III 亚太三区
Europe 欧洲
North America 北美
South America 南美
Middle East 中东
Africa 非洲。
                     * 
                     */
                    void SetRegionNames(const std::vector<std::string>& _regionNames);

                    /**
                     * 判断参数 RegionNames 是否已赋值
                     * @return RegionNames 是否已赋值
                     * 
                     */
                    bool RegionNamesHasBeenSet() const;

                private:

                    /**
                     * 起始时间点，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见IOS日期格式说明文档: https://cloud.tencent.com/document/product/266/11732#I
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间点，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见IOS日期格式说明文档: https://cloud.tencent.com/document/product/266/11732#I
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。
起始和结束时间跨度不支持超过31天。支持最近3年的数据查询
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 直播播放域名，若不填，表示总体数据。
                     */
                    std::vector<std::string> m_playDomains;
                    bool m_playDomainsHasBeenSet;

                    /**
                     * 可选值：
Mainland：查询国内数据，
Oversea：则查询国外数据，
默认：查询国内+国外的数据。
注：LEB（快直播）只支持国内+国外数据查询。
                     */
                    std::string m_mainlandOrOversea;
                    bool m_mainlandOrOverseaHasBeenSet;

                    /**
                     * 数据粒度，支持如下粒度：
5：5分钟粒度，（跨度不支持超过1天），
60：1小时粒度（跨度不支持超过一个月），
1440：天粒度（跨度不支持超过一个月）。
默认值：5。
                     */
                    uint64_t m_granularity;
                    bool m_granularityHasBeenSet;

                    /**
                     * 服务名称，可选值包括LVB(标准直播)，LEB(快直播)，不填则查LVB+LEB总值。
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 大区，映射表如下：
China Mainland 中国大陆
Asia Pacific I 亚太一区
Asia Pacific II 亚太二区
Asia Pacific III 亚太三区
Europe 欧洲
North America 北美
South America 南美
Middle East 中东
Africa 非洲。
                     */
                    std::vector<std::string> m_regionNames;
                    bool m_regionNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEBILLBANDWIDTHANDFLUXLISTREQUEST_H_
