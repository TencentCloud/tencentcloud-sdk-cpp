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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEDISTRICTISPDATAREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEDISTRICTISPDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribeDistrictIspData请求参数结构体
                */
                class DescribeDistrictIspDataRequest : public AbstractModel
                {
                public:
                    DescribeDistrictIspDataRequest();
                    ~DescribeDistrictIspDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>域名列表，最多支持20个域名</p>
                     * @return Domains <p>域名列表，最多支持20个域名</p>
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置<p>域名列表，最多支持20个域名</p>
                     * @param _domains <p>域名列表，最多支持20个域名</p>
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取<p>查询起始时间，如：2018-09-04 10:40:00，返回结果大于等于指定时间<br>支持近 60 天内的数据查询，每次查询时间区间为 3 小时</p>
                     * @return StartTime <p>查询起始时间，如：2018-09-04 10:40:00，返回结果大于等于指定时间<br>支持近 60 天内的数据查询，每次查询时间区间为 3 小时</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>查询起始时间，如：2018-09-04 10:40:00，返回结果大于等于指定时间<br>支持近 60 天内的数据查询，每次查询时间区间为 3 小时</p>
                     * @param _startTime <p>查询起始时间，如：2018-09-04 10:40:00，返回结果大于等于指定时间<br>支持近 60 天内的数据查询，每次查询时间区间为 3 小时</p>
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
                     * 获取<p>查询结束时间，如：2018-09-04 10:40:00，返回结果小于等于指定时间<br>结束时间与起始时间区间最大为 3 小时</p>
                     * @return EndTime <p>查询结束时间，如：2018-09-04 10:40:00，返回结果小于等于指定时间<br>结束时间与起始时间区间最大为 3 小时</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>查询结束时间，如：2018-09-04 10:40:00，返回结果小于等于指定时间<br>结束时间与起始时间区间最大为 3 小时</p>
                     * @param _endTime <p>查询结束时间，如：2018-09-04 10:40:00，返回结果小于等于指定时间<br>结束时间与起始时间区间最大为 3 小时</p>
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
                     * 获取<p>指定查询指标，支持:<br>bandwidth：带宽，单位为 bps<br>flux：流量，单位为 byte<br>request：请求数，单位为 次<br>statusCode：状态码，返回 0、2xx、3xx、4xx、5xx 汇总数据，单位为 次<br>2xx：返回 2xx 状态码汇总及各 2 开头状态码数据，单位为 次<br>3xx：返回 3xx 状态码汇总及各 3 开头状态码数据，单位为 次<br>4xx：返回 4xx 状态码汇总及各 4 开头状态码数据，单位为 次<br>5xx：返回 5xx 状态码汇总及各 5 开头状态码数据，单位为 次<br>支持指定具体状态码查询，若未产生过，则返回为空</p>
                     * @return Metric <p>指定查询指标，支持:<br>bandwidth：带宽，单位为 bps<br>flux：流量，单位为 byte<br>request：请求数，单位为 次<br>statusCode：状态码，返回 0、2xx、3xx、4xx、5xx 汇总数据，单位为 次<br>2xx：返回 2xx 状态码汇总及各 2 开头状态码数据，单位为 次<br>3xx：返回 3xx 状态码汇总及各 3 开头状态码数据，单位为 次<br>4xx：返回 4xx 状态码汇总及各 4 开头状态码数据，单位为 次<br>5xx：返回 5xx 状态码汇总及各 5 开头状态码数据，单位为 次<br>支持指定具体状态码查询，若未产生过，则返回为空</p>
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置<p>指定查询指标，支持:<br>bandwidth：带宽，单位为 bps<br>flux：流量，单位为 byte<br>request：请求数，单位为 次<br>statusCode：状态码，返回 0、2xx、3xx、4xx、5xx 汇总数据，单位为 次<br>2xx：返回 2xx 状态码汇总及各 2 开头状态码数据，单位为 次<br>3xx：返回 3xx 状态码汇总及各 3 开头状态码数据，单位为 次<br>4xx：返回 4xx 状态码汇总及各 4 开头状态码数据，单位为 次<br>5xx：返回 5xx 状态码汇总及各 5 开头状态码数据，单位为 次<br>支持指定具体状态码查询，若未产生过，则返回为空</p>
                     * @param _metric <p>指定查询指标，支持:<br>bandwidth：带宽，单位为 bps<br>flux：流量，单位为 byte<br>request：请求数，单位为 次<br>statusCode：状态码，返回 0、2xx、3xx、4xx、5xx 汇总数据，单位为 次<br>2xx：返回 2xx 状态码汇总及各 2 开头状态码数据，单位为 次<br>3xx：返回 3xx 状态码汇总及各 3 开头状态码数据，单位为 次<br>4xx：返回 4xx 状态码汇总及各 4 开头状态码数据，单位为 次<br>5xx：返回 5xx 状态码汇总及各 5 开头状态码数据，单位为 次<br>支持指定具体状态码查询，若未产生过，则返回为空</p>
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
                     * 获取<p>指定省份查询，不填充表示查询所有省份（注：指定条件查询只支持映射表范围）<br>省份、国家/地区编码可以查看 <a href="https://cloud.tencent.com/document/product/228/6316#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8">省份编码映射</a></p>
                     * @return Districts <p>指定省份查询，不填充表示查询所有省份（注：指定条件查询只支持映射表范围）<br>省份、国家/地区编码可以查看 <a href="https://cloud.tencent.com/document/product/228/6316#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8">省份编码映射</a></p>
                     * 
                     */
                    std::vector<int64_t> GetDistricts() const;

                    /**
                     * 设置<p>指定省份查询，不填充表示查询所有省份（注：指定条件查询只支持映射表范围）<br>省份、国家/地区编码可以查看 <a href="https://cloud.tencent.com/document/product/228/6316#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8">省份编码映射</a></p>
                     * @param _districts <p>指定省份查询，不填充表示查询所有省份（注：指定条件查询只支持映射表范围）<br>省份、国家/地区编码可以查看 <a href="https://cloud.tencent.com/document/product/228/6316#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8">省份编码映射</a></p>
                     * 
                     */
                    void SetDistricts(const std::vector<int64_t>& _districts);

                    /**
                     * 判断参数 Districts 是否已赋值
                     * @return Districts 是否已赋值
                     * 
                     */
                    bool DistrictsHasBeenSet() const;

                    /**
                     * 获取<p>指定运营商查询，不填充表示查询所有运营商（注：指定条件查询只支持映射表范围）<br>运营商编码可以查看 <a href="https://cloud.tencent.com/document/product/228/6316#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8">运营商编码映射</a></p>
                     * @return Isps <p>指定运营商查询，不填充表示查询所有运营商（注：指定条件查询只支持映射表范围）<br>运营商编码可以查看 <a href="https://cloud.tencent.com/document/product/228/6316#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8">运营商编码映射</a></p>
                     * 
                     */
                    std::vector<int64_t> GetIsps() const;

                    /**
                     * 设置<p>指定运营商查询，不填充表示查询所有运营商（注：指定条件查询只支持映射表范围）<br>运营商编码可以查看 <a href="https://cloud.tencent.com/document/product/228/6316#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8">运营商编码映射</a></p>
                     * @param _isps <p>指定运营商查询，不填充表示查询所有运营商（注：指定条件查询只支持映射表范围）<br>运营商编码可以查看 <a href="https://cloud.tencent.com/document/product/228/6316#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8">运营商编码映射</a></p>
                     * 
                     */
                    void SetIsps(const std::vector<int64_t>& _isps);

                    /**
                     * 判断参数 Isps 是否已赋值
                     * @return Isps 是否已赋值
                     * 
                     */
                    bool IspsHasBeenSet() const;

                    /**
                     * 获取<p>指定协议查询，不填充表示查询所有协议<br>all：所有协议<br>http：指定查询 HTTP 对应指标<br>https：指定查询 HTTPS 对应指标</p>
                     * @return Protocol <p>指定协议查询，不填充表示查询所有协议<br>all：所有协议<br>http：指定查询 HTTP 对应指标<br>https：指定查询 HTTPS 对应指标</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>指定协议查询，不填充表示查询所有协议<br>all：所有协议<br>http：指定查询 HTTP 对应指标<br>https：指定查询 HTTPS 对应指标</p>
                     * @param _protocol <p>指定协议查询，不填充表示查询所有协议<br>all：所有协议<br>http：指定查询 HTTP 对应指标<br>https：指定查询 HTTPS 对应指标</p>
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取<p>指定IP协议查询，不填充表示查询所有协议<br>all：所有协议<br>ipv4：指定查询 ipv4 对应指标<br>ipv6：指定查询 ipv6 对应指标<br>指定IP协议查询时，不可同时指定省份、运营商查询</p>
                     * @return IpProtocol <p>指定IP协议查询，不填充表示查询所有协议<br>all：所有协议<br>ipv4：指定查询 ipv4 对应指标<br>ipv6：指定查询 ipv6 对应指标<br>指定IP协议查询时，不可同时指定省份、运营商查询</p>
                     * 
                     */
                    std::string GetIpProtocol() const;

                    /**
                     * 设置<p>指定IP协议查询，不填充表示查询所有协议<br>all：所有协议<br>ipv4：指定查询 ipv4 对应指标<br>ipv6：指定查询 ipv6 对应指标<br>指定IP协议查询时，不可同时指定省份、运营商查询</p>
                     * @param _ipProtocol <p>指定IP协议查询，不填充表示查询所有协议<br>all：所有协议<br>ipv4：指定查询 ipv4 对应指标<br>ipv6：指定查询 ipv6 对应指标<br>指定IP协议查询时，不可同时指定省份、运营商查询</p>
                     * 
                     */
                    void SetIpProtocol(const std::string& _ipProtocol);

                    /**
                     * 判断参数 IpProtocol 是否已赋值
                     * @return IpProtocol 是否已赋值
                     * 
                     */
                    bool IpProtocolHasBeenSet() const;

                    /**
                     * 获取<p>时间粒度，支持以下几种模式（默认5min）：<br>min：1 分钟粒度，支持近 60 天内的数据查询，每次查询时间区间不超过10分钟，可返回 1 分钟粒度明细数据<br>5min：5 分钟粒度，支持近 60 天内的数据查询，每次查询时间区间不超过3 小时，可返回 5 分钟粒度明细数据</p>
                     * @return Interval <p>时间粒度，支持以下几种模式（默认5min）：<br>min：1 分钟粒度，支持近 60 天内的数据查询，每次查询时间区间不超过10分钟，可返回 1 分钟粒度明细数据<br>5min：5 分钟粒度，支持近 60 天内的数据查询，每次查询时间区间不超过3 小时，可返回 5 分钟粒度明细数据</p>
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置<p>时间粒度，支持以下几种模式（默认5min）：<br>min：1 分钟粒度，支持近 60 天内的数据查询，每次查询时间区间不超过10分钟，可返回 1 分钟粒度明细数据<br>5min：5 分钟粒度，支持近 60 天内的数据查询，每次查询时间区间不超过3 小时，可返回 5 分钟粒度明细数据</p>
                     * @param _interval <p>时间粒度，支持以下几种模式（默认5min）：<br>min：1 分钟粒度，支持近 60 天内的数据查询，每次查询时间区间不超过10分钟，可返回 1 分钟粒度明细数据<br>5min：5 分钟粒度，支持近 60 天内的数据查询，每次查询时间区间不超过3 小时，可返回 5 分钟粒度明细数据</p>
                     * 
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                private:

                    /**
                     * <p>域名列表，最多支持20个域名</p>
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * <p>查询起始时间，如：2018-09-04 10:40:00，返回结果大于等于指定时间<br>支持近 60 天内的数据查询，每次查询时间区间为 3 小时</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>查询结束时间，如：2018-09-04 10:40:00，返回结果小于等于指定时间<br>结束时间与起始时间区间最大为 3 小时</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>指定查询指标，支持:<br>bandwidth：带宽，单位为 bps<br>flux：流量，单位为 byte<br>request：请求数，单位为 次<br>statusCode：状态码，返回 0、2xx、3xx、4xx、5xx 汇总数据，单位为 次<br>2xx：返回 2xx 状态码汇总及各 2 开头状态码数据，单位为 次<br>3xx：返回 3xx 状态码汇总及各 3 开头状态码数据，单位为 次<br>4xx：返回 4xx 状态码汇总及各 4 开头状态码数据，单位为 次<br>5xx：返回 5xx 状态码汇总及各 5 开头状态码数据，单位为 次<br>支持指定具体状态码查询，若未产生过，则返回为空</p>
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * <p>指定省份查询，不填充表示查询所有省份（注：指定条件查询只支持映射表范围）<br>省份、国家/地区编码可以查看 <a href="https://cloud.tencent.com/document/product/228/6316#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8">省份编码映射</a></p>
                     */
                    std::vector<int64_t> m_districts;
                    bool m_districtsHasBeenSet;

                    /**
                     * <p>指定运营商查询，不填充表示查询所有运营商（注：指定条件查询只支持映射表范围）<br>运营商编码可以查看 <a href="https://cloud.tencent.com/document/product/228/6316#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8">运营商编码映射</a></p>
                     */
                    std::vector<int64_t> m_isps;
                    bool m_ispsHasBeenSet;

                    /**
                     * <p>指定协议查询，不填充表示查询所有协议<br>all：所有协议<br>http：指定查询 HTTP 对应指标<br>https：指定查询 HTTPS 对应指标</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>指定IP协议查询，不填充表示查询所有协议<br>all：所有协议<br>ipv4：指定查询 ipv4 对应指标<br>ipv6：指定查询 ipv6 对应指标<br>指定IP协议查询时，不可同时指定省份、运营商查询</p>
                     */
                    std::string m_ipProtocol;
                    bool m_ipProtocolHasBeenSet;

                    /**
                     * <p>时间粒度，支持以下几种模式（默认5min）：<br>min：1 分钟粒度，支持近 60 天内的数据查询，每次查询时间区间不超过10分钟，可返回 1 分钟粒度明细数据<br>5min：5 分钟粒度，支持近 60 天内的数据查询，每次查询时间区间不超过3 小时，可返回 5 分钟粒度明细数据</p>
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEDISTRICTISPDATAREQUEST_H_
