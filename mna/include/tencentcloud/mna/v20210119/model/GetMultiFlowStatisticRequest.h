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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETMULTIFLOWSTATISTICREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETMULTIFLOWSTATISTICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * GetMultiFlowStatistic请求参数结构体
                */
                class GetMultiFlowStatisticRequest : public AbstractModel
                {
                public:
                    GetMultiFlowStatisticRequest();
                    ~GetMultiFlowStatisticRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>设备id列表，单次最多请求10个设备</p>
                     * @return DeviceIds <p>设备id列表，单次最多请求10个设备</p>
                     * 
                     */
                    std::vector<std::string> GetDeviceIds() const;

                    /**
                     * 设置<p>设备id列表，单次最多请求10个设备</p>
                     * @param _deviceIds <p>设备id列表，单次最多请求10个设备</p>
                     * 
                     */
                    void SetDeviceIds(const std::vector<std::string>& _deviceIds);

                    /**
                     * 判断参数 DeviceIds 是否已赋值
                     * @return DeviceIds 是否已赋值
                     * 
                     */
                    bool DeviceIdsHasBeenSet() const;

                    /**
                     * 获取<p>1659514436</p>
                     * @return BeginTime <p>1659514436</p>
                     * 
                     */
                    int64_t GetBeginTime() const;

                    /**
                     * 设置<p>1659514436</p>
                     * @param _beginTime <p>1659514436</p>
                     * 
                     */
                    void SetBeginTime(const int64_t& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取<p>1659515000</p>
                     * @return EndTime <p>1659515000</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>1659515000</p>
                     * @param _endTime <p>1659515000</p>
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>统计流量类型（1：上行流量，2：下行流量， 3: 上下行总和）</p>
                     * @return Type <p>统计流量类型（1：上行流量，2：下行流量， 3: 上下行总和）</p>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>统计流量类型（1：上行流量，2：下行流量， 3: 上下行总和）</p>
                     * @param _type <p>统计流量类型（1：上行流量，2：下行流量， 3: 上下行总和）</p>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>统计时间粒度</p><p>枚举值：</p><ul><li>1： 按小时统计</li><li>2： 按天统计</li><li>3： 按分钟统计</li><li>4： 按5分钟统计</li></ul>
                     * @return TimeGranularity <p>统计时间粒度</p><p>枚举值：</p><ul><li>1： 按小时统计</li><li>2： 按天统计</li><li>3： 按分钟统计</li><li>4： 按5分钟统计</li></ul>
                     * 
                     */
                    int64_t GetTimeGranularity() const;

                    /**
                     * 设置<p>统计时间粒度</p><p>枚举值：</p><ul><li>1： 按小时统计</li><li>2： 按天统计</li><li>3： 按分钟统计</li><li>4： 按5分钟统计</li></ul>
                     * @param _timeGranularity <p>统计时间粒度</p><p>枚举值：</p><ul><li>1： 按小时统计</li><li>2： 按天统计</li><li>3： 按分钟统计</li><li>4： 按5分钟统计</li></ul>
                     * 
                     */
                    void SetTimeGranularity(const int64_t& _timeGranularity);

                    /**
                     * 判断参数 TimeGranularity 是否已赋值
                     * @return TimeGranularity 是否已赋值
                     * 
                     */
                    bool TimeGranularityHasBeenSet() const;

                    /**
                     * 获取<p>接入区域。取值范围：[&#39;MC&#39;,&#39;AP&#39;,&#39;EU&#39;,&#39;AM&#39;] MC=中国大陆 AP=亚太 EU=欧洲 AM=美洲。不填代表全量区域。</p>
                     * @return AccessRegion <p>接入区域。取值范围：[&#39;MC&#39;,&#39;AP&#39;,&#39;EU&#39;,&#39;AM&#39;] MC=中国大陆 AP=亚太 EU=欧洲 AM=美洲。不填代表全量区域。</p>
                     * 
                     */
                    std::string GetAccessRegion() const;

                    /**
                     * 设置<p>接入区域。取值范围：[&#39;MC&#39;,&#39;AP&#39;,&#39;EU&#39;,&#39;AM&#39;] MC=中国大陆 AP=亚太 EU=欧洲 AM=美洲。不填代表全量区域。</p>
                     * @param _accessRegion <p>接入区域。取值范围：[&#39;MC&#39;,&#39;AP&#39;,&#39;EU&#39;,&#39;AM&#39;] MC=中国大陆 AP=亚太 EU=欧洲 AM=美洲。不填代表全量区域。</p>
                     * 
                     */
                    void SetAccessRegion(const std::string& _accessRegion);

                    /**
                     * 判断参数 AccessRegion 是否已赋值
                     * @return AccessRegion 是否已赋值
                     * 
                     */
                    bool AccessRegionHasBeenSet() const;

                    /**
                     * 获取<p>网关类型。0：公有云网关；1：自有网关。不传默认为0。</p>
                     * @return GatewayType <p>网关类型。0：公有云网关；1：自有网关。不传默认为0。</p>
                     * 
                     */
                    int64_t GetGatewayType() const;

                    /**
                     * 设置<p>网关类型。0：公有云网关；1：自有网关。不传默认为0。</p>
                     * @param _gatewayType <p>网关类型。0：公有云网关；1：自有网关。不传默认为0。</p>
                     * 
                     */
                    void SetGatewayType(const int64_t& _gatewayType);

                    /**
                     * 判断参数 GatewayType 是否已赋值
                     * @return GatewayType 是否已赋值
                     * 
                     */
                    bool GatewayTypeHasBeenSet() const;

                private:

                    /**
                     * <p>设备id列表，单次最多请求10个设备</p>
                     */
                    std::vector<std::string> m_deviceIds;
                    bool m_deviceIdsHasBeenSet;

                    /**
                     * <p>1659514436</p>
                     */
                    int64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * <p>1659515000</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>统计流量类型（1：上行流量，2：下行流量， 3: 上下行总和）</p>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>统计时间粒度</p><p>枚举值：</p><ul><li>1： 按小时统计</li><li>2： 按天统计</li><li>3： 按分钟统计</li><li>4： 按5分钟统计</li></ul>
                     */
                    int64_t m_timeGranularity;
                    bool m_timeGranularityHasBeenSet;

                    /**
                     * <p>接入区域。取值范围：[&#39;MC&#39;,&#39;AP&#39;,&#39;EU&#39;,&#39;AM&#39;] MC=中国大陆 AP=亚太 EU=欧洲 AM=美洲。不填代表全量区域。</p>
                     */
                    std::string m_accessRegion;
                    bool m_accessRegionHasBeenSet;

                    /**
                     * <p>网关类型。0：公有云网关；1：自有网关。不传默认为0。</p>
                     */
                    int64_t m_gatewayType;
                    bool m_gatewayTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETMULTIFLOWSTATISTICREQUEST_H_
