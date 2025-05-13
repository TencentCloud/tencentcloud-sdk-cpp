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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECDNSTATDETAILSREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECDNSTATDETAILSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeCDNStatDetails请求参数结构体
                */
                class DescribeCDNStatDetailsRequest : public AbstractModel
                {
                public:
                    DescribeCDNStatDetailsRequest();
                    ~DescribeCDNStatDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询指标，取值有：
<li>Traffic：流量，单位为 Byte。</li>
<li>Bandwidth：带宽，单位为 Bps。</li>
<li>Requests：请求数。</li>
<li>QUICRequests：QUIC 请求数。</li>
<li>IpVisit：IP 访问数。</li>
                     * @return Metric 查询指标，取值有：
<li>Traffic：流量，单位为 Byte。</li>
<li>Bandwidth：带宽，单位为 Bps。</li>
<li>Requests：请求数。</li>
<li>QUICRequests：QUIC 请求数。</li>
<li>IpVisit：IP 访问数。</li>
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置查询指标，取值有：
<li>Traffic：流量，单位为 Byte。</li>
<li>Bandwidth：带宽，单位为 Bps。</li>
<li>Requests：请求数。</li>
<li>QUICRequests：QUIC 请求数。</li>
<li>IpVisit：IP 访问数。</li>
                     * @param _metric 查询指标，取值有：
<li>Traffic：流量，单位为 Byte。</li>
<li>Bandwidth：带宽，单位为 Bps。</li>
<li>Requests：请求数。</li>
<li>QUICRequests：QUIC 请求数。</li>
<li>IpVisit：IP 访问数。</li>
                     * 
                     */
                    void SetMetric(const std::string& _metric);

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     * 
                     */
                    bool MetricHasBeenSet() const;

                    /**
                     * 获取起始时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return StartTime 起始时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _startTime 起始时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
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
                     * 获取结束时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return EndTime 结束时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _endTime 结束时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
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
                     * 获取<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @return SubAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @param _subAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取域名列表。一次最多查询20个域名的数据。默认返回所有域名叠加的用量数据。
                     * @return DomainNames 域名列表。一次最多查询20个域名的数据。默认返回所有域名叠加的用量数据。
                     * 
                     */
                    std::vector<std::string> GetDomainNames() const;

                    /**
                     * 设置域名列表。一次最多查询20个域名的数据。默认返回所有域名叠加的用量数据。
                     * @param _domainNames 域名列表。一次最多查询20个域名的数据。默认返回所有域名叠加的用量数据。
                     * 
                     */
                    void SetDomainNames(const std::vector<std::string>& _domainNames);

                    /**
                     * 判断参数 DomainNames 是否已赋值
                     * @return DomainNames 是否已赋值
                     * 
                     */
                    bool DomainNamesHasBeenSet() const;

                    /**
                     * 获取服务区域，取值有：
<li>Chinese Mainland：中国大陆。 </li>
<li>Asia Pacific Region 1：亚太一区，包括中国香港、中国澳门、新加坡、越南、泰国。 </li>
<li>Asia Pacific Region 2：亚太二区，包括中国台湾、日本、马来西亚、印度尼西亚、韩国。 </li>
<li>Asia Pacific Region 3：亚太三区，包括菲律宾、印度、澳大利亚和亚太其它国家和地区。 </li>
<li>Middle East：中东。 </li>
<li>Europe：欧洲。</li>
<li>North America：北美。</li>
<li>South America：南美。</li>
<li>Africa：非洲。</li>
默认为中国大陆。
                     * @return Area 服务区域，取值有：
<li>Chinese Mainland：中国大陆。 </li>
<li>Asia Pacific Region 1：亚太一区，包括中国香港、中国澳门、新加坡、越南、泰国。 </li>
<li>Asia Pacific Region 2：亚太二区，包括中国台湾、日本、马来西亚、印度尼西亚、韩国。 </li>
<li>Asia Pacific Region 3：亚太三区，包括菲律宾、印度、澳大利亚和亚太其它国家和地区。 </li>
<li>Middle East：中东。 </li>
<li>Europe：欧洲。</li>
<li>North America：北美。</li>
<li>South America：南美。</li>
<li>Africa：非洲。</li>
默认为中国大陆。
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置服务区域，取值有：
<li>Chinese Mainland：中国大陆。 </li>
<li>Asia Pacific Region 1：亚太一区，包括中国香港、中国澳门、新加坡、越南、泰国。 </li>
<li>Asia Pacific Region 2：亚太二区，包括中国台湾、日本、马来西亚、印度尼西亚、韩国。 </li>
<li>Asia Pacific Region 3：亚太三区，包括菲律宾、印度、澳大利亚和亚太其它国家和地区。 </li>
<li>Middle East：中东。 </li>
<li>Europe：欧洲。</li>
<li>North America：北美。</li>
<li>South America：南美。</li>
<li>Africa：非洲。</li>
默认为中国大陆。
                     * @param _area 服务区域，取值有：
<li>Chinese Mainland：中国大陆。 </li>
<li>Asia Pacific Region 1：亚太一区，包括中国香港、中国澳门、新加坡、越南、泰国。 </li>
<li>Asia Pacific Region 2：亚太二区，包括中国台湾、日本、马来西亚、印度尼西亚、韩国。 </li>
<li>Asia Pacific Region 3：亚太三区，包括菲律宾、印度、澳大利亚和亚太其它国家和地区。 </li>
<li>Middle East：中东。 </li>
<li>Europe：欧洲。</li>
<li>North America：北美。</li>
<li>South America：南美。</li>
<li>Africa：非洲。</li>
默认为中国大陆。
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取用户所在地区，Area 为 Chinese Mainland 时，取值为以下地区信息，当 Area 为其它值时， 忽略 Districts 参数。
<li>Beijing：北京。</li>
<li>Inner Mongolia：内蒙古。</li>
<li>Shanxi：山西。</li>
<li>Hebei：河北。</li>
<li>Tianjin：天津。</li>
<li>Ningxia：宁夏。</li>
<li>Shaanxi：陕西。</li>
<li>Gansu：甘肃。</li>
<li>Qinghai：青海。</li>
<li>Xinjiang：新疆。</li>
<li>Heilongjiang：黑龙江。</li>
<li>Jilin：吉林。</li>
<li>Liaoning：辽宁。</li>
<li>Fujian：福建。</li>
<li>Jiangsu：江苏。</li>
<li>Anhui：安徽。</li>
<li>Shandong：山东。</li>
<li>Shanghai：上海。</li>
<li>Zhejiang：浙江。</li>
<li>Henan：河南。</li>
<li>Hubei：湖北。</li>
<li>Jiangxi：江西。</li>
<li>Hunan：湖南。</li>
<li>Guizhou：贵州。</li>
<li>Yunnan：云南。</li>
<li>Chongqing：重庆。</li>
<li>Sichuan：四川。</li>
<li>Xizang：西藏。</li>
<li>Guangdong：广东。</li>
<li>Guangxi：广西。</li>
<li>Hainan：海南。</li>
<li>Hong Kong, Macao and Taiwan：港澳台。</li>
<li>Outside Chinese Mainland：海外。</li>
<li>Other：其他 。</li>
                     * @return Districts 用户所在地区，Area 为 Chinese Mainland 时，取值为以下地区信息，当 Area 为其它值时， 忽略 Districts 参数。
<li>Beijing：北京。</li>
<li>Inner Mongolia：内蒙古。</li>
<li>Shanxi：山西。</li>
<li>Hebei：河北。</li>
<li>Tianjin：天津。</li>
<li>Ningxia：宁夏。</li>
<li>Shaanxi：陕西。</li>
<li>Gansu：甘肃。</li>
<li>Qinghai：青海。</li>
<li>Xinjiang：新疆。</li>
<li>Heilongjiang：黑龙江。</li>
<li>Jilin：吉林。</li>
<li>Liaoning：辽宁。</li>
<li>Fujian：福建。</li>
<li>Jiangsu：江苏。</li>
<li>Anhui：安徽。</li>
<li>Shandong：山东。</li>
<li>Shanghai：上海。</li>
<li>Zhejiang：浙江。</li>
<li>Henan：河南。</li>
<li>Hubei：湖北。</li>
<li>Jiangxi：江西。</li>
<li>Hunan：湖南。</li>
<li>Guizhou：贵州。</li>
<li>Yunnan：云南。</li>
<li>Chongqing：重庆。</li>
<li>Sichuan：四川。</li>
<li>Xizang：西藏。</li>
<li>Guangdong：广东。</li>
<li>Guangxi：广西。</li>
<li>Hainan：海南。</li>
<li>Hong Kong, Macao and Taiwan：港澳台。</li>
<li>Outside Chinese Mainland：海外。</li>
<li>Other：其他 。</li>
                     * 
                     */
                    std::vector<std::string> GetDistricts() const;

                    /**
                     * 设置用户所在地区，Area 为 Chinese Mainland 时，取值为以下地区信息，当 Area 为其它值时， 忽略 Districts 参数。
<li>Beijing：北京。</li>
<li>Inner Mongolia：内蒙古。</li>
<li>Shanxi：山西。</li>
<li>Hebei：河北。</li>
<li>Tianjin：天津。</li>
<li>Ningxia：宁夏。</li>
<li>Shaanxi：陕西。</li>
<li>Gansu：甘肃。</li>
<li>Qinghai：青海。</li>
<li>Xinjiang：新疆。</li>
<li>Heilongjiang：黑龙江。</li>
<li>Jilin：吉林。</li>
<li>Liaoning：辽宁。</li>
<li>Fujian：福建。</li>
<li>Jiangsu：江苏。</li>
<li>Anhui：安徽。</li>
<li>Shandong：山东。</li>
<li>Shanghai：上海。</li>
<li>Zhejiang：浙江。</li>
<li>Henan：河南。</li>
<li>Hubei：湖北。</li>
<li>Jiangxi：江西。</li>
<li>Hunan：湖南。</li>
<li>Guizhou：贵州。</li>
<li>Yunnan：云南。</li>
<li>Chongqing：重庆。</li>
<li>Sichuan：四川。</li>
<li>Xizang：西藏。</li>
<li>Guangdong：广东。</li>
<li>Guangxi：广西。</li>
<li>Hainan：海南。</li>
<li>Hong Kong, Macao and Taiwan：港澳台。</li>
<li>Outside Chinese Mainland：海外。</li>
<li>Other：其他 。</li>
                     * @param _districts 用户所在地区，Area 为 Chinese Mainland 时，取值为以下地区信息，当 Area 为其它值时， 忽略 Districts 参数。
<li>Beijing：北京。</li>
<li>Inner Mongolia：内蒙古。</li>
<li>Shanxi：山西。</li>
<li>Hebei：河北。</li>
<li>Tianjin：天津。</li>
<li>Ningxia：宁夏。</li>
<li>Shaanxi：陕西。</li>
<li>Gansu：甘肃。</li>
<li>Qinghai：青海。</li>
<li>Xinjiang：新疆。</li>
<li>Heilongjiang：黑龙江。</li>
<li>Jilin：吉林。</li>
<li>Liaoning：辽宁。</li>
<li>Fujian：福建。</li>
<li>Jiangsu：江苏。</li>
<li>Anhui：安徽。</li>
<li>Shandong：山东。</li>
<li>Shanghai：上海。</li>
<li>Zhejiang：浙江。</li>
<li>Henan：河南。</li>
<li>Hubei：湖北。</li>
<li>Jiangxi：江西。</li>
<li>Hunan：湖南。</li>
<li>Guizhou：贵州。</li>
<li>Yunnan：云南。</li>
<li>Chongqing：重庆。</li>
<li>Sichuan：四川。</li>
<li>Xizang：西藏。</li>
<li>Guangdong：广东。</li>
<li>Guangxi：广西。</li>
<li>Hainan：海南。</li>
<li>Hong Kong, Macao and Taiwan：港澳台。</li>
<li>Outside Chinese Mainland：海外。</li>
<li>Other：其他 。</li>
                     * 
                     */
                    void SetDistricts(const std::vector<std::string>& _districts);

                    /**
                     * 判断参数 Districts 是否已赋值
                     * @return Districts 是否已赋值
                     * 
                     */
                    bool DistrictsHasBeenSet() const;

                    /**
                     * 获取用户所属运营商信息，Area 为 Chinese Mainland 时，取值为以下运营商信息。当 Area 为其它值时忽略 Isps 参数。
<li>China Telecom：中国电信。 </li>
<li>China Unicom：中国联通。 </li>
<li>CERNET：教育网。</li>
<li>Great Wall Broadband Network：长城宽带。</li>
<li>China Mobile：中国移动。</li>
<li>China Mobile Tietong：中国铁通。</li>
<li>ISPs outside Chinese Mainland：海外运营商。</li>
<li>Other ISPs：其他运营商。</li>
                     * @return Isps 用户所属运营商信息，Area 为 Chinese Mainland 时，取值为以下运营商信息。当 Area 为其它值时忽略 Isps 参数。
<li>China Telecom：中国电信。 </li>
<li>China Unicom：中国联通。 </li>
<li>CERNET：教育网。</li>
<li>Great Wall Broadband Network：长城宽带。</li>
<li>China Mobile：中国移动。</li>
<li>China Mobile Tietong：中国铁通。</li>
<li>ISPs outside Chinese Mainland：海外运营商。</li>
<li>Other ISPs：其他运营商。</li>
                     * 
                     */
                    std::vector<std::string> GetIsps() const;

                    /**
                     * 设置用户所属运营商信息，Area 为 Chinese Mainland 时，取值为以下运营商信息。当 Area 为其它值时忽略 Isps 参数。
<li>China Telecom：中国电信。 </li>
<li>China Unicom：中国联通。 </li>
<li>CERNET：教育网。</li>
<li>Great Wall Broadband Network：长城宽带。</li>
<li>China Mobile：中国移动。</li>
<li>China Mobile Tietong：中国铁通。</li>
<li>ISPs outside Chinese Mainland：海外运营商。</li>
<li>Other ISPs：其他运营商。</li>
                     * @param _isps 用户所属运营商信息，Area 为 Chinese Mainland 时，取值为以下运营商信息。当 Area 为其它值时忽略 Isps 参数。
<li>China Telecom：中国电信。 </li>
<li>China Unicom：中国联通。 </li>
<li>CERNET：教育网。</li>
<li>Great Wall Broadband Network：长城宽带。</li>
<li>China Mobile：中国移动。</li>
<li>China Mobile Tietong：中国铁通。</li>
<li>ISPs outside Chinese Mainland：海外运营商。</li>
<li>Other ISPs：其他运营商。</li>
                     * 
                     */
                    void SetIsps(const std::vector<std::string>& _isps);

                    /**
                     * 判断参数 Isps 是否已赋值
                     * @return Isps 是否已赋值
                     * 
                     */
                    bool IspsHasBeenSet() const;

                    /**
                     * 获取每条数据的时间粒度，单位：分钟，取值有：
<li>5：5 分钟粒度，返回指定查询时间内5分钟粒度的明细数据。</li>
<li>1440：天粒度，返回指定查询时间内1天粒度的数据。起始时间和结束时间跨度大于24小时，只支持天粒度的数据。</li>
当 StartTime 和 EndTime 时间跨度大于24小时时，DataInterval 默认为 1440。
                     * @return DataInterval 每条数据的时间粒度，单位：分钟，取值有：
<li>5：5 分钟粒度，返回指定查询时间内5分钟粒度的明细数据。</li>
<li>1440：天粒度，返回指定查询时间内1天粒度的数据。起始时间和结束时间跨度大于24小时，只支持天粒度的数据。</li>
当 StartTime 和 EndTime 时间跨度大于24小时时，DataInterval 默认为 1440。
                     * 
                     */
                    uint64_t GetDataInterval() const;

                    /**
                     * 设置每条数据的时间粒度，单位：分钟，取值有：
<li>5：5 分钟粒度，返回指定查询时间内5分钟粒度的明细数据。</li>
<li>1440：天粒度，返回指定查询时间内1天粒度的数据。起始时间和结束时间跨度大于24小时，只支持天粒度的数据。</li>
当 StartTime 和 EndTime 时间跨度大于24小时时，DataInterval 默认为 1440。
                     * @param _dataInterval 每条数据的时间粒度，单位：分钟，取值有：
<li>5：5 分钟粒度，返回指定查询时间内5分钟粒度的明细数据。</li>
<li>1440：天粒度，返回指定查询时间内1天粒度的数据。起始时间和结束时间跨度大于24小时，只支持天粒度的数据。</li>
当 StartTime 和 EndTime 时间跨度大于24小时时，DataInterval 默认为 1440。
                     * 
                     */
                    void SetDataInterval(const uint64_t& _dataInterval);

                    /**
                     * 判断参数 DataInterval 是否已赋值
                     * @return DataInterval 是否已赋值
                     * 
                     */
                    bool DataIntervalHasBeenSet() const;

                private:

                    /**
                     * 查询指标，取值有：
<li>Traffic：流量，单位为 Byte。</li>
<li>Bandwidth：带宽，单位为 Bps。</li>
<li>Requests：请求数。</li>
<li>QUICRequests：QUIC 请求数。</li>
<li>IpVisit：IP 访问数。</li>
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * 起始时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 域名列表。一次最多查询20个域名的数据。默认返回所有域名叠加的用量数据。
                     */
                    std::vector<std::string> m_domainNames;
                    bool m_domainNamesHasBeenSet;

                    /**
                     * 服务区域，取值有：
<li>Chinese Mainland：中国大陆。 </li>
<li>Asia Pacific Region 1：亚太一区，包括中国香港、中国澳门、新加坡、越南、泰国。 </li>
<li>Asia Pacific Region 2：亚太二区，包括中国台湾、日本、马来西亚、印度尼西亚、韩国。 </li>
<li>Asia Pacific Region 3：亚太三区，包括菲律宾、印度、澳大利亚和亚太其它国家和地区。 </li>
<li>Middle East：中东。 </li>
<li>Europe：欧洲。</li>
<li>North America：北美。</li>
<li>South America：南美。</li>
<li>Africa：非洲。</li>
默认为中国大陆。
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 用户所在地区，Area 为 Chinese Mainland 时，取值为以下地区信息，当 Area 为其它值时， 忽略 Districts 参数。
<li>Beijing：北京。</li>
<li>Inner Mongolia：内蒙古。</li>
<li>Shanxi：山西。</li>
<li>Hebei：河北。</li>
<li>Tianjin：天津。</li>
<li>Ningxia：宁夏。</li>
<li>Shaanxi：陕西。</li>
<li>Gansu：甘肃。</li>
<li>Qinghai：青海。</li>
<li>Xinjiang：新疆。</li>
<li>Heilongjiang：黑龙江。</li>
<li>Jilin：吉林。</li>
<li>Liaoning：辽宁。</li>
<li>Fujian：福建。</li>
<li>Jiangsu：江苏。</li>
<li>Anhui：安徽。</li>
<li>Shandong：山东。</li>
<li>Shanghai：上海。</li>
<li>Zhejiang：浙江。</li>
<li>Henan：河南。</li>
<li>Hubei：湖北。</li>
<li>Jiangxi：江西。</li>
<li>Hunan：湖南。</li>
<li>Guizhou：贵州。</li>
<li>Yunnan：云南。</li>
<li>Chongqing：重庆。</li>
<li>Sichuan：四川。</li>
<li>Xizang：西藏。</li>
<li>Guangdong：广东。</li>
<li>Guangxi：广西。</li>
<li>Hainan：海南。</li>
<li>Hong Kong, Macao and Taiwan：港澳台。</li>
<li>Outside Chinese Mainland：海外。</li>
<li>Other：其他 。</li>
                     */
                    std::vector<std::string> m_districts;
                    bool m_districtsHasBeenSet;

                    /**
                     * 用户所属运营商信息，Area 为 Chinese Mainland 时，取值为以下运营商信息。当 Area 为其它值时忽略 Isps 参数。
<li>China Telecom：中国电信。 </li>
<li>China Unicom：中国联通。 </li>
<li>CERNET：教育网。</li>
<li>Great Wall Broadband Network：长城宽带。</li>
<li>China Mobile：中国移动。</li>
<li>China Mobile Tietong：中国铁通。</li>
<li>ISPs outside Chinese Mainland：海外运营商。</li>
<li>Other ISPs：其他运营商。</li>
                     */
                    std::vector<std::string> m_isps;
                    bool m_ispsHasBeenSet;

                    /**
                     * 每条数据的时间粒度，单位：分钟，取值有：
<li>5：5 分钟粒度，返回指定查询时间内5分钟粒度的明细数据。</li>
<li>1440：天粒度，返回指定查询时间内1天粒度的数据。起始时间和结束时间跨度大于24小时，只支持天粒度的数据。</li>
当 StartTime 和 EndTime 时间跨度大于24小时时，DataInterval 默认为 1440。
                     */
                    uint64_t m_dataInterval;
                    bool m_dataIntervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECDNSTATDETAILSREQUEST_H_
