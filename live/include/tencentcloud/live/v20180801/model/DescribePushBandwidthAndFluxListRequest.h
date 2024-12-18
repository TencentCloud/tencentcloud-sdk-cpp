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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPUSHBANDWIDTHANDFLUXLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPUSHBANDWIDTHANDFLUXLISTREQUEST_H_

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
                * DescribePushBandwidthAndFluxList请求参数结构体
                */
                class DescribePushBandwidthAndFluxListRequest : public AbstractModel
                {
                public:
                    DescribePushBandwidthAndFluxListRequest();
                    ~DescribePushBandwidthAndFluxListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询开始时间点，精确到分钟粒度，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#52)。
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。
支持最近两个月的查询，查询开始和结束时间跨度不支持超过31天。
                     * @return StartTime 查询开始时间点，精确到分钟粒度，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#52)。
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。
支持最近两个月的查询，查询开始和结束时间跨度不支持超过31天。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询开始时间点，精确到分钟粒度，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#52)。
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。
支持最近两个月的查询，查询开始和结束时间跨度不支持超过31天。
                     * @param _startTime 查询开始时间点，精确到分钟粒度，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#52)。
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。
支持最近两个月的查询，查询开始和结束时间跨度不支持超过31天。
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
                     * 获取查询结束时间点，精确到分钟粒度，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#52)。
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。
支持最近两个月的查询，查询开始和结束时间跨度不支持超过31天。
                     * @return EndTime 查询结束时间点，精确到分钟粒度，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#52)。
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。
支持最近两个月的查询，查询开始和结束时间跨度不支持超过31天。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询结束时间点，精确到分钟粒度，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#52)。
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。
支持最近两个月的查询，查询开始和结束时间跨度不支持超过31天。
                     * @param _endTime 查询结束时间点，精确到分钟粒度，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#52)。
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。
支持最近两个月的查询，查询开始和结束时间跨度不支持超过31天。
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
                     * 获取域名，可以填多个，若不填，表示总体数据。
                     * @return PushDomains 域名，可以填多个，若不填，表示总体数据。
                     * 
                     */
                    std::vector<std::string> GetPushDomains() const;

                    /**
                     * 设置域名，可以填多个，若不填，表示总体数据。
                     * @param _pushDomains 域名，可以填多个，若不填，表示总体数据。
                     * 
                     */
                    void SetPushDomains(const std::vector<std::string>& _pushDomains);

                    /**
                     * 判断参数 PushDomains 是否已赋值
                     * @return PushDomains 是否已赋值
                     * 
                     */
                    bool PushDomainsHasBeenSet() const;

                    /**
                     * 获取可选值：
Mainland：查询中国大陆（境内）数据，
Oversea：则查询国际/港澳台（境外）数据，
不填则默认查询全球地区（境内+境外）的数据。
                     * @return MainlandOrOversea 可选值：
Mainland：查询中国大陆（境内）数据，
Oversea：则查询国际/港澳台（境外）数据，
不填则默认查询全球地区（境内+境外）的数据。
                     * 
                     */
                    std::string GetMainlandOrOversea() const;

                    /**
                     * 设置可选值：
Mainland：查询中国大陆（境内）数据，
Oversea：则查询国际/港澳台（境外）数据，
不填则默认查询全球地区（境内+境外）的数据。
                     * @param _mainlandOrOversea 可选值：
Mainland：查询中国大陆（境内）数据，
Oversea：则查询国际/港澳台（境外）数据，
不填则默认查询全球地区（境内+境外）的数据。
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

                    /**
                     * 获取国家，映射表参照如下文档：
https://cloud.tencent.com/document/product/267/34019。
                     * @return CountryNames 国家，映射表参照如下文档：
https://cloud.tencent.com/document/product/267/34019。
                     * 
                     */
                    std::vector<std::string> GetCountryNames() const;

                    /**
                     * 设置国家，映射表参照如下文档：
https://cloud.tencent.com/document/product/267/34019。
                     * @param _countryNames 国家，映射表参照如下文档：
https://cloud.tencent.com/document/product/267/34019。
                     * 
                     */
                    void SetCountryNames(const std::vector<std::string>& _countryNames);

                    /**
                     * 判断参数 CountryNames 是否已赋值
                     * @return CountryNames 是否已赋值
                     * 
                     */
                    bool CountryNamesHasBeenSet() const;

                private:

                    /**
                     * 查询开始时间点，精确到分钟粒度，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#52)。
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。
支持最近两个月的查询，查询开始和结束时间跨度不支持超过31天。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间点，精确到分钟粒度，接口查询支持两种时间格式：
1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#52)。
2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。
支持最近两个月的查询，查询开始和结束时间跨度不支持超过31天。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 域名，可以填多个，若不填，表示总体数据。
                     */
                    std::vector<std::string> m_pushDomains;
                    bool m_pushDomainsHasBeenSet;

                    /**
                     * 可选值：
Mainland：查询中国大陆（境内）数据，
Oversea：则查询国际/港澳台（境外）数据，
不填则默认查询全球地区（境内+境外）的数据。
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

                    /**
                     * 国家，映射表参照如下文档：
https://cloud.tencent.com/document/product/267/34019。
                     */
                    std::vector<std::string> m_countryNames;
                    bool m_countryNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPUSHBANDWIDTHANDFLUXLISTREQUEST_H_
