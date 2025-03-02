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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEBILLINGDATAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEBILLINGDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/BillingDataFilter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeBillingData请求参数结构体
                */
                class DescribeBillingDataRequest : public AbstractModel
                {
                public:
                    DescribeBillingDataRequest();
                    ~DescribeBillingDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取起始时间。
                     * @return StartTime 起始时间。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始时间。
                     * @param _startTime 起始时间。
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
                     * 获取结束时间。
                     * @return EndTime 结束时间。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间。
                     * @param _endTime 结束时间。
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
                     * 获取站点 ID 集合，此参数必填。
                     * @return ZoneIds 站点 ID 集合，此参数必填。
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置站点 ID 集合，此参数必填。
                     * @param _zoneIds 站点 ID 集合，此参数必填。
                     * 
                     */
                    void SetZoneIds(const std::vector<std::string>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取指标列表，取值有：
<li>acc_flux: 内容加速流量，单位为 Byte；</li>
<li>smt_flux: 智能加速流量，单位为 Byte；</li>
<li>l4_flux: 四层加速流量，单位为 Byte；</li>
<li>sec_flux: 独立防护流量，单位为 Byte；</li>
<li>zxctg_flux: 中国大陆网络优化流量，单位为 Byte；</li>
<li>acc_bandwidth: 内容加速带宽，单位为 bps；</li>
<li>smt_bandwidth: 智能加速带宽，单位为 bps；</li>
<li>l4_bandwidth: 四层加速带宽，单位为 bps；</li>
<li>sec_bandwidth: 独立防护带宽，单位为 bps；</li>
<li>zxctg_bandwidth: 中国大陆网络优化带宽，单位为 bps；</li>
<li>sec_request_clean: HTTP/HTTPS 请求，单位为次；</li>
<li>smt_request_clean: 智能加速请求，单位为次；</li>
<li>quic_request: QUIC 请求，单位为次；</li>
<li>bot_request_clean: Bot 请求，单位为次；</li>
<li>cls_count: 实时日志推送条数，单位为条；</li>
<li>ddos_bandwidth: 弹性 DDoS 防护带宽，单位为 bps；</li>
<li>total_transcode：所有规格音频，视频即时转码，转封装时长，单位为秒；</li>
<li>remux：转封装时长，单位为秒；</li>
<li>transcode_audio：音频转码时长，单位为秒；</li>
<li>transcode_H264_SD：H.264 编码方式的标清视频（短边 <= 480 px）时长，单位为秒；</li>
<li>transcode_H264_HD：H.264 编码方式的高清视频（短边 <= 720 px）时长，单位为秒；</li>
<li>transcode_H264_FHD：H.264 编码方式的全高清视频（短边 <= 1080 px）时长，单位为秒；</li>
<li>transcode_H264_2K：H.264 编码方式的 2K 视频（短边 <= 1440 px）时长，单位为秒。</li>
                     * @return MetricName 指标列表，取值有：
<li>acc_flux: 内容加速流量，单位为 Byte；</li>
<li>smt_flux: 智能加速流量，单位为 Byte；</li>
<li>l4_flux: 四层加速流量，单位为 Byte；</li>
<li>sec_flux: 独立防护流量，单位为 Byte；</li>
<li>zxctg_flux: 中国大陆网络优化流量，单位为 Byte；</li>
<li>acc_bandwidth: 内容加速带宽，单位为 bps；</li>
<li>smt_bandwidth: 智能加速带宽，单位为 bps；</li>
<li>l4_bandwidth: 四层加速带宽，单位为 bps；</li>
<li>sec_bandwidth: 独立防护带宽，单位为 bps；</li>
<li>zxctg_bandwidth: 中国大陆网络优化带宽，单位为 bps；</li>
<li>sec_request_clean: HTTP/HTTPS 请求，单位为次；</li>
<li>smt_request_clean: 智能加速请求，单位为次；</li>
<li>quic_request: QUIC 请求，单位为次；</li>
<li>bot_request_clean: Bot 请求，单位为次；</li>
<li>cls_count: 实时日志推送条数，单位为条；</li>
<li>ddos_bandwidth: 弹性 DDoS 防护带宽，单位为 bps；</li>
<li>total_transcode：所有规格音频，视频即时转码，转封装时长，单位为秒；</li>
<li>remux：转封装时长，单位为秒；</li>
<li>transcode_audio：音频转码时长，单位为秒；</li>
<li>transcode_H264_SD：H.264 编码方式的标清视频（短边 <= 480 px）时长，单位为秒；</li>
<li>transcode_H264_HD：H.264 编码方式的高清视频（短边 <= 720 px）时长，单位为秒；</li>
<li>transcode_H264_FHD：H.264 编码方式的全高清视频（短边 <= 1080 px）时长，单位为秒；</li>
<li>transcode_H264_2K：H.264 编码方式的 2K 视频（短边 <= 1440 px）时长，单位为秒。</li>
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标列表，取值有：
<li>acc_flux: 内容加速流量，单位为 Byte；</li>
<li>smt_flux: 智能加速流量，单位为 Byte；</li>
<li>l4_flux: 四层加速流量，单位为 Byte；</li>
<li>sec_flux: 独立防护流量，单位为 Byte；</li>
<li>zxctg_flux: 中国大陆网络优化流量，单位为 Byte；</li>
<li>acc_bandwidth: 内容加速带宽，单位为 bps；</li>
<li>smt_bandwidth: 智能加速带宽，单位为 bps；</li>
<li>l4_bandwidth: 四层加速带宽，单位为 bps；</li>
<li>sec_bandwidth: 独立防护带宽，单位为 bps；</li>
<li>zxctg_bandwidth: 中国大陆网络优化带宽，单位为 bps；</li>
<li>sec_request_clean: HTTP/HTTPS 请求，单位为次；</li>
<li>smt_request_clean: 智能加速请求，单位为次；</li>
<li>quic_request: QUIC 请求，单位为次；</li>
<li>bot_request_clean: Bot 请求，单位为次；</li>
<li>cls_count: 实时日志推送条数，单位为条；</li>
<li>ddos_bandwidth: 弹性 DDoS 防护带宽，单位为 bps；</li>
<li>total_transcode：所有规格音频，视频即时转码，转封装时长，单位为秒；</li>
<li>remux：转封装时长，单位为秒；</li>
<li>transcode_audio：音频转码时长，单位为秒；</li>
<li>transcode_H264_SD：H.264 编码方式的标清视频（短边 <= 480 px）时长，单位为秒；</li>
<li>transcode_H264_HD：H.264 编码方式的高清视频（短边 <= 720 px）时长，单位为秒；</li>
<li>transcode_H264_FHD：H.264 编码方式的全高清视频（短边 <= 1080 px）时长，单位为秒；</li>
<li>transcode_H264_2K：H.264 编码方式的 2K 视频（短边 <= 1440 px）时长，单位为秒。</li>
                     * @param _metricName 指标列表，取值有：
<li>acc_flux: 内容加速流量，单位为 Byte；</li>
<li>smt_flux: 智能加速流量，单位为 Byte；</li>
<li>l4_flux: 四层加速流量，单位为 Byte；</li>
<li>sec_flux: 独立防护流量，单位为 Byte；</li>
<li>zxctg_flux: 中国大陆网络优化流量，单位为 Byte；</li>
<li>acc_bandwidth: 内容加速带宽，单位为 bps；</li>
<li>smt_bandwidth: 智能加速带宽，单位为 bps；</li>
<li>l4_bandwidth: 四层加速带宽，单位为 bps；</li>
<li>sec_bandwidth: 独立防护带宽，单位为 bps；</li>
<li>zxctg_bandwidth: 中国大陆网络优化带宽，单位为 bps；</li>
<li>sec_request_clean: HTTP/HTTPS 请求，单位为次；</li>
<li>smt_request_clean: 智能加速请求，单位为次；</li>
<li>quic_request: QUIC 请求，单位为次；</li>
<li>bot_request_clean: Bot 请求，单位为次；</li>
<li>cls_count: 实时日志推送条数，单位为条；</li>
<li>ddos_bandwidth: 弹性 DDoS 防护带宽，单位为 bps；</li>
<li>total_transcode：所有规格音频，视频即时转码，转封装时长，单位为秒；</li>
<li>remux：转封装时长，单位为秒；</li>
<li>transcode_audio：音频转码时长，单位为秒；</li>
<li>transcode_H264_SD：H.264 编码方式的标清视频（短边 <= 480 px）时长，单位为秒；</li>
<li>transcode_H264_HD：H.264 编码方式的高清视频（短边 <= 720 px）时长，单位为秒；</li>
<li>transcode_H264_FHD：H.264 编码方式的全高清视频（短边 <= 1080 px）时长，单位为秒；</li>
<li>transcode_H264_2K：H.264 编码方式的 2K 视频（短边 <= 1440 px）时长，单位为秒。</li>
                     * 
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取查询时间粒度，取值有：
<li>5min：5 分钟粒度；</li>
<li>hour：1 小时粒度；</li>
<li>day：1 天粒度。</li>
                     * @return Interval 查询时间粒度，取值有：
<li>5min：5 分钟粒度；</li>
<li>hour：1 小时粒度；</li>
<li>day：1 天粒度。</li>
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置查询时间粒度，取值有：
<li>5min：5 分钟粒度；</li>
<li>hour：1 小时粒度；</li>
<li>day：1 天粒度。</li>
                     * @param _interval 查询时间粒度，取值有：
<li>5min：5 分钟粒度；</li>
<li>hour：1 小时粒度；</li>
<li>day：1 天粒度。</li>
                     * 
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取过滤条件，详细的过滤条件取值如下：
<li>host：按照域名进行过滤。示例值：test.example.com。<br></li>
<li>proxy-id：按照四层代理实例 ID 进行过滤。示例值：sid-2rugn89bkla9。<br></li>
<li>region-id：按照计费大区进行过滤。可选项如下：<br>  CH：中国大陆境内<br>  AF：非洲<br>  AS1：亚太一区<br>  AS2：亚太二区<br>  AS3：亚太三区<br>  EU：欧洲<br>  MidEast：中东<br>  NA：北美<br>  SA：南美</li>
                     * @return Filters 过滤条件，详细的过滤条件取值如下：
<li>host：按照域名进行过滤。示例值：test.example.com。<br></li>
<li>proxy-id：按照四层代理实例 ID 进行过滤。示例值：sid-2rugn89bkla9。<br></li>
<li>region-id：按照计费大区进行过滤。可选项如下：<br>  CH：中国大陆境内<br>  AF：非洲<br>  AS1：亚太一区<br>  AS2：亚太二区<br>  AS3：亚太三区<br>  EU：欧洲<br>  MidEast：中东<br>  NA：北美<br>  SA：南美</li>
                     * 
                     */
                    std::vector<BillingDataFilter> GetFilters() const;

                    /**
                     * 设置过滤条件，详细的过滤条件取值如下：
<li>host：按照域名进行过滤。示例值：test.example.com。<br></li>
<li>proxy-id：按照四层代理实例 ID 进行过滤。示例值：sid-2rugn89bkla9。<br></li>
<li>region-id：按照计费大区进行过滤。可选项如下：<br>  CH：中国大陆境内<br>  AF：非洲<br>  AS1：亚太一区<br>  AS2：亚太二区<br>  AS3：亚太三区<br>  EU：欧洲<br>  MidEast：中东<br>  NA：北美<br>  SA：南美</li>
                     * @param _filters 过滤条件，详细的过滤条件取值如下：
<li>host：按照域名进行过滤。示例值：test.example.com。<br></li>
<li>proxy-id：按照四层代理实例 ID 进行过滤。示例值：sid-2rugn89bkla9。<br></li>
<li>region-id：按照计费大区进行过滤。可选项如下：<br>  CH：中国大陆境内<br>  AF：非洲<br>  AS1：亚太一区<br>  AS2：亚太二区<br>  AS3：亚太三区<br>  EU：欧洲<br>  MidEast：中东<br>  NA：北美<br>  SA：南美</li>
                     * 
                     */
                    void SetFilters(const std::vector<BillingDataFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 起始时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 站点 ID 集合，此参数必填。
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * 指标列表，取值有：
<li>acc_flux: 内容加速流量，单位为 Byte；</li>
<li>smt_flux: 智能加速流量，单位为 Byte；</li>
<li>l4_flux: 四层加速流量，单位为 Byte；</li>
<li>sec_flux: 独立防护流量，单位为 Byte；</li>
<li>zxctg_flux: 中国大陆网络优化流量，单位为 Byte；</li>
<li>acc_bandwidth: 内容加速带宽，单位为 bps；</li>
<li>smt_bandwidth: 智能加速带宽，单位为 bps；</li>
<li>l4_bandwidth: 四层加速带宽，单位为 bps；</li>
<li>sec_bandwidth: 独立防护带宽，单位为 bps；</li>
<li>zxctg_bandwidth: 中国大陆网络优化带宽，单位为 bps；</li>
<li>sec_request_clean: HTTP/HTTPS 请求，单位为次；</li>
<li>smt_request_clean: 智能加速请求，单位为次；</li>
<li>quic_request: QUIC 请求，单位为次；</li>
<li>bot_request_clean: Bot 请求，单位为次；</li>
<li>cls_count: 实时日志推送条数，单位为条；</li>
<li>ddos_bandwidth: 弹性 DDoS 防护带宽，单位为 bps；</li>
<li>total_transcode：所有规格音频，视频即时转码，转封装时长，单位为秒；</li>
<li>remux：转封装时长，单位为秒；</li>
<li>transcode_audio：音频转码时长，单位为秒；</li>
<li>transcode_H264_SD：H.264 编码方式的标清视频（短边 <= 480 px）时长，单位为秒；</li>
<li>transcode_H264_HD：H.264 编码方式的高清视频（短边 <= 720 px）时长，单位为秒；</li>
<li>transcode_H264_FHD：H.264 编码方式的全高清视频（短边 <= 1080 px）时长，单位为秒；</li>
<li>transcode_H264_2K：H.264 编码方式的 2K 视频（短边 <= 1440 px）时长，单位为秒。</li>
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 查询时间粒度，取值有：
<li>5min：5 分钟粒度；</li>
<li>hour：1 小时粒度；</li>
<li>day：1 天粒度。</li>
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 过滤条件，详细的过滤条件取值如下：
<li>host：按照域名进行过滤。示例值：test.example.com。<br></li>
<li>proxy-id：按照四层代理实例 ID 进行过滤。示例值：sid-2rugn89bkla9。<br></li>
<li>region-id：按照计费大区进行过滤。可选项如下：<br>  CH：中国大陆境内<br>  AF：非洲<br>  AS1：亚太一区<br>  AS2：亚太二区<br>  AS3：亚太三区<br>  EU：欧洲<br>  MidEast：中东<br>  NA：北美<br>  SA：南美</li>
                     */
                    std::vector<BillingDataFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEBILLINGDATAREQUEST_H_
