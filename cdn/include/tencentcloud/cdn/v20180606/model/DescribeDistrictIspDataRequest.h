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
                     * 获取域名列表，最多支持20个域名
                     * @return Domains 域名列表，最多支持20个域名
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置域名列表，最多支持20个域名
                     * @param _domains 域名列表，最多支持20个域名
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
                     * 获取查询起始时间，如：2018-09-04 10:40:00，返回结果大于等于指定时间
支持近 60 天内的数据查询，每次查询时间区间为 3 小时
                     * @return StartTime 查询起始时间，如：2018-09-04 10:40:00，返回结果大于等于指定时间
支持近 60 天内的数据查询，每次查询时间区间为 3 小时
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询起始时间，如：2018-09-04 10:40:00，返回结果大于等于指定时间
支持近 60 天内的数据查询，每次查询时间区间为 3 小时
                     * @param _startTime 查询起始时间，如：2018-09-04 10:40:00，返回结果大于等于指定时间
支持近 60 天内的数据查询，每次查询时间区间为 3 小时
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
                     * 获取查询结束时间，如：2018-09-04 10:40:00，返回结果小于等于指定时间
结束时间与起始时间区间最大为 3 小时
                     * @return EndTime 查询结束时间，如：2018-09-04 10:40:00，返回结果小于等于指定时间
结束时间与起始时间区间最大为 3 小时
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询结束时间，如：2018-09-04 10:40:00，返回结果小于等于指定时间
结束时间与起始时间区间最大为 3 小时
                     * @param _endTime 查询结束时间，如：2018-09-04 10:40:00，返回结果小于等于指定时间
结束时间与起始时间区间最大为 3 小时
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
                     * 获取指定查询指标，支持:
bandwidth：带宽，单位为 bps
flux：流量，单位为 byte
request：请求数，单位为 次
statusCode：状态码，返回 0、2xx、3xx、4xx、5xx 汇总数据，单位为 次
2xx：返回 2xx 状态码汇总及各 2 开头状态码数据，单位为 次
3xx：返回 3xx 状态码汇总及各 3 开头状态码数据，单位为 次
4xx：返回 4xx 状态码汇总及各 4 开头状态码数据，单位为 次
5xx：返回 5xx 状态码汇总及各 5 开头状态码数据，单位为 次
支持指定具体状态码查询，若未产生过，则返回为空
                     * @return Metric 指定查询指标，支持:
bandwidth：带宽，单位为 bps
flux：流量，单位为 byte
request：请求数，单位为 次
statusCode：状态码，返回 0、2xx、3xx、4xx、5xx 汇总数据，单位为 次
2xx：返回 2xx 状态码汇总及各 2 开头状态码数据，单位为 次
3xx：返回 3xx 状态码汇总及各 3 开头状态码数据，单位为 次
4xx：返回 4xx 状态码汇总及各 4 开头状态码数据，单位为 次
5xx：返回 5xx 状态码汇总及各 5 开头状态码数据，单位为 次
支持指定具体状态码查询，若未产生过，则返回为空
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置指定查询指标，支持:
bandwidth：带宽，单位为 bps
flux：流量，单位为 byte
request：请求数，单位为 次
statusCode：状态码，返回 0、2xx、3xx、4xx、5xx 汇总数据，单位为 次
2xx：返回 2xx 状态码汇总及各 2 开头状态码数据，单位为 次
3xx：返回 3xx 状态码汇总及各 3 开头状态码数据，单位为 次
4xx：返回 4xx 状态码汇总及各 4 开头状态码数据，单位为 次
5xx：返回 5xx 状态码汇总及各 5 开头状态码数据，单位为 次
支持指定具体状态码查询，若未产生过，则返回为空
                     * @param _metric 指定查询指标，支持:
bandwidth：带宽，单位为 bps
flux：流量，单位为 byte
request：请求数，单位为 次
statusCode：状态码，返回 0、2xx、3xx、4xx、5xx 汇总数据，单位为 次
2xx：返回 2xx 状态码汇总及各 2 开头状态码数据，单位为 次
3xx：返回 3xx 状态码汇总及各 3 开头状态码数据，单位为 次
4xx：返回 4xx 状态码汇总及各 4 开头状态码数据，单位为 次
5xx：返回 5xx 状态码汇总及各 5 开头状态码数据，单位为 次
支持指定具体状态码查询，若未产生过，则返回为空
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
                     * 获取指定省份查询，不填充表示查询所有省份
省份、国家/地区编码可以查看 [省份编码映射](https://cloud.tencent.com/document/product/228/6316#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8)
                     * @return Districts 指定省份查询，不填充表示查询所有省份
省份、国家/地区编码可以查看 [省份编码映射](https://cloud.tencent.com/document/product/228/6316#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8)
                     * 
                     */
                    std::vector<int64_t> GetDistricts() const;

                    /**
                     * 设置指定省份查询，不填充表示查询所有省份
省份、国家/地区编码可以查看 [省份编码映射](https://cloud.tencent.com/document/product/228/6316#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8)
                     * @param _districts 指定省份查询，不填充表示查询所有省份
省份、国家/地区编码可以查看 [省份编码映射](https://cloud.tencent.com/document/product/228/6316#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8)
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
                     * 获取指定运营商查询，不填充表示查询所有运营商
运营商编码可以查看 [运营商编码映射](https://cloud.tencent.com/document/product/228/6316#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8)
                     * @return Isps 指定运营商查询，不填充表示查询所有运营商
运营商编码可以查看 [运营商编码映射](https://cloud.tencent.com/document/product/228/6316#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8)
                     * 
                     */
                    std::vector<int64_t> GetIsps() const;

                    /**
                     * 设置指定运营商查询，不填充表示查询所有运营商
运营商编码可以查看 [运营商编码映射](https://cloud.tencent.com/document/product/228/6316#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8)
                     * @param _isps 指定运营商查询，不填充表示查询所有运营商
运营商编码可以查看 [运营商编码映射](https://cloud.tencent.com/document/product/228/6316#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8)
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
                     * 获取指定协议查询，不填充表示查询所有协议
all：所有协议
http：指定查询 HTTP 对应指标
https：指定查询 HTTPS 对应指标
                     * @return Protocol 指定协议查询，不填充表示查询所有协议
all：所有协议
http：指定查询 HTTP 对应指标
https：指定查询 HTTPS 对应指标
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置指定协议查询，不填充表示查询所有协议
all：所有协议
http：指定查询 HTTP 对应指标
https：指定查询 HTTPS 对应指标
                     * @param _protocol 指定协议查询，不填充表示查询所有协议
all：所有协议
http：指定查询 HTTP 对应指标
https：指定查询 HTTPS 对应指标
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
                     * 获取指定IP协议查询，不填充表示查询所有协议
all：所有协议
ipv4：指定查询 ipv4 对应指标
ipv6：指定查询 ipv6 对应指标
指定IP协议查询时，不可同时指定省份、运营商查询
                     * @return IpProtocol 指定IP协议查询，不填充表示查询所有协议
all：所有协议
ipv4：指定查询 ipv4 对应指标
ipv6：指定查询 ipv6 对应指标
指定IP协议查询时，不可同时指定省份、运营商查询
                     * 
                     */
                    std::string GetIpProtocol() const;

                    /**
                     * 设置指定IP协议查询，不填充表示查询所有协议
all：所有协议
ipv4：指定查询 ipv4 对应指标
ipv6：指定查询 ipv6 对应指标
指定IP协议查询时，不可同时指定省份、运营商查询
                     * @param _ipProtocol 指定IP协议查询，不填充表示查询所有协议
all：所有协议
ipv4：指定查询 ipv4 对应指标
ipv6：指定查询 ipv6 对应指标
指定IP协议查询时，不可同时指定省份、运营商查询
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
                     * 获取时间粒度，支持以下几种模式（默认5min）：
min：1 分钟粒度，支持近 60 天内的数据查询，每次查询时间区间不超过10分钟，可返回 1 分钟粒度明细数据
5min：5 分钟粒度，支持近 60 天内的数据查询，每次查询时间区间不超过3 小时，可返回 5 分钟粒度明细数据
                     * @return Interval 时间粒度，支持以下几种模式（默认5min）：
min：1 分钟粒度，支持近 60 天内的数据查询，每次查询时间区间不超过10分钟，可返回 1 分钟粒度明细数据
5min：5 分钟粒度，支持近 60 天内的数据查询，每次查询时间区间不超过3 小时，可返回 5 分钟粒度明细数据
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置时间粒度，支持以下几种模式（默认5min）：
min：1 分钟粒度，支持近 60 天内的数据查询，每次查询时间区间不超过10分钟，可返回 1 分钟粒度明细数据
5min：5 分钟粒度，支持近 60 天内的数据查询，每次查询时间区间不超过3 小时，可返回 5 分钟粒度明细数据
                     * @param _interval 时间粒度，支持以下几种模式（默认5min）：
min：1 分钟粒度，支持近 60 天内的数据查询，每次查询时间区间不超过10分钟，可返回 1 分钟粒度明细数据
5min：5 分钟粒度，支持近 60 天内的数据查询，每次查询时间区间不超过3 小时，可返回 5 分钟粒度明细数据
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
                     * 域名列表，最多支持20个域名
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 查询起始时间，如：2018-09-04 10:40:00，返回结果大于等于指定时间
支持近 60 天内的数据查询，每次查询时间区间为 3 小时
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间，如：2018-09-04 10:40:00，返回结果小于等于指定时间
结束时间与起始时间区间最大为 3 小时
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 指定查询指标，支持:
bandwidth：带宽，单位为 bps
flux：流量，单位为 byte
request：请求数，单位为 次
statusCode：状态码，返回 0、2xx、3xx、4xx、5xx 汇总数据，单位为 次
2xx：返回 2xx 状态码汇总及各 2 开头状态码数据，单位为 次
3xx：返回 3xx 状态码汇总及各 3 开头状态码数据，单位为 次
4xx：返回 4xx 状态码汇总及各 4 开头状态码数据，单位为 次
5xx：返回 5xx 状态码汇总及各 5 开头状态码数据，单位为 次
支持指定具体状态码查询，若未产生过，则返回为空
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * 指定省份查询，不填充表示查询所有省份
省份、国家/地区编码可以查看 [省份编码映射](https://cloud.tencent.com/document/product/228/6316#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8)
                     */
                    std::vector<int64_t> m_districts;
                    bool m_districtsHasBeenSet;

                    /**
                     * 指定运营商查询，不填充表示查询所有运营商
运营商编码可以查看 [运营商编码映射](https://cloud.tencent.com/document/product/228/6316#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8)
                     */
                    std::vector<int64_t> m_isps;
                    bool m_ispsHasBeenSet;

                    /**
                     * 指定协议查询，不填充表示查询所有协议
all：所有协议
http：指定查询 HTTP 对应指标
https：指定查询 HTTPS 对应指标
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 指定IP协议查询，不填充表示查询所有协议
all：所有协议
ipv4：指定查询 ipv4 对应指标
ipv6：指定查询 ipv6 对应指标
指定IP协议查询时，不可同时指定省份、运营商查询
                     */
                    std::string m_ipProtocol;
                    bool m_ipProtocolHasBeenSet;

                    /**
                     * 时间粒度，支持以下几种模式（默认5min）：
min：1 分钟粒度，支持近 60 天内的数据查询，每次查询时间区间不超过10分钟，可返回 1 分钟粒度明细数据
5min：5 分钟粒度，支持近 60 天内的数据查询，每次查询时间区间不超过3 小时，可返回 5 分钟粒度明细数据
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEDISTRICTISPDATAREQUEST_H_
