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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL7ANALYSISDATARESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL7ANALYSISDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/TimingDataRecord.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeTimingL7AnalysisData返回参数结构体
                */
                class DescribeTimingL7AnalysisDataResponse : public AbstractModel
                {
                public:
                    DescribeTimingL7AnalysisDataResponse();
                    ~DescribeTimingL7AnalysisDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>查询结果的总条数。</p>
                     * @return TotalCount <p>查询结果的总条数。</p>
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>七层时序流量数据列表。<br>对于不同的查询指标，根据指标值类型的不同，会从不同的参数返回时序数据。<br>目前存在的值类型有以下两种：</p><ul>  <li><strong>Integer</strong>：<code>Integer</code> 值类型的指标将从 <code>Data.N.TypeValue</code> 返回对应时序数据。<br>对应的查询指标 <code>MetricName</code> 有：    <ul>      <li><code>l7Flow_outFlux</code>：L7 EdgeOne 响应流量，单位：Byte；</li>      <li><code>l7Flow_inFlux</code>：L7 客户端请求流量，单位：Byte；</li>      <li><code>l7Flow_flux</code>：L7 访问总流量（EdgeOne 响应+客户端请求），单位：Byte；</li>      <li><code>l7Flow_outBandwidth</code>：L7 EdgeOne 响应带宽，单位：bps；</li>      <li><code>l7Flow_inBandwidth</code>：L7 客户端请求带宽，单位：bps；</li>      <li><code>l7Flow_bandwidth</code>：L7 访问总带宽（EdgeOne 响应+客户端请求），单位：bps；</li>      <li><code>l7Flow_request</code>：L7 访问请求数，单位：次；</li>      <li><code>l7Flow_avgResponseTime</code>：L7 访问平均响应耗时，单位：ms；</li>      <li><code>l7Flow_avgFirstByteResponseTime</code>：L7 访问平均首字节响应耗时，单位：ms。</li>    </ul>  </li>  <li><strong>Float</strong>：<code>Float</code> 值类型的指标将从 <code>Data.N.FloatTypeValue</code> 返回对应时序数据。<br>对应的查询指标 <code>MetricName</code> 有：    <ul>      <li><code>l7Flow_requestRate</code>：L7 访问请求速率，单位：qps。</li>    </ul>  </li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data <p>七层时序流量数据列表。<br>对于不同的查询指标，根据指标值类型的不同，会从不同的参数返回时序数据。<br>目前存在的值类型有以下两种：</p><ul>  <li><strong>Integer</strong>：<code>Integer</code> 值类型的指标将从 <code>Data.N.TypeValue</code> 返回对应时序数据。<br>对应的查询指标 <code>MetricName</code> 有：    <ul>      <li><code>l7Flow_outFlux</code>：L7 EdgeOne 响应流量，单位：Byte；</li>      <li><code>l7Flow_inFlux</code>：L7 客户端请求流量，单位：Byte；</li>      <li><code>l7Flow_flux</code>：L7 访问总流量（EdgeOne 响应+客户端请求），单位：Byte；</li>      <li><code>l7Flow_outBandwidth</code>：L7 EdgeOne 响应带宽，单位：bps；</li>      <li><code>l7Flow_inBandwidth</code>：L7 客户端请求带宽，单位：bps；</li>      <li><code>l7Flow_bandwidth</code>：L7 访问总带宽（EdgeOne 响应+客户端请求），单位：bps；</li>      <li><code>l7Flow_request</code>：L7 访问请求数，单位：次；</li>      <li><code>l7Flow_avgResponseTime</code>：L7 访问平均响应耗时，单位：ms；</li>      <li><code>l7Flow_avgFirstByteResponseTime</code>：L7 访问平均首字节响应耗时，单位：ms。</li>    </ul>  </li>  <li><strong>Float</strong>：<code>Float</code> 值类型的指标将从 <code>Data.N.FloatTypeValue</code> 返回对应时序数据。<br>对应的查询指标 <code>MetricName</code> 有：    <ul>      <li><code>l7Flow_requestRate</code>：L7 访问请求速率，单位：qps。</li>    </ul>  </li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TimingDataRecord> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * <p>查询结果的总条数。</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>七层时序流量数据列表。<br>对于不同的查询指标，根据指标值类型的不同，会从不同的参数返回时序数据。<br>目前存在的值类型有以下两种：</p><ul>  <li><strong>Integer</strong>：<code>Integer</code> 值类型的指标将从 <code>Data.N.TypeValue</code> 返回对应时序数据。<br>对应的查询指标 <code>MetricName</code> 有：    <ul>      <li><code>l7Flow_outFlux</code>：L7 EdgeOne 响应流量，单位：Byte；</li>      <li><code>l7Flow_inFlux</code>：L7 客户端请求流量，单位：Byte；</li>      <li><code>l7Flow_flux</code>：L7 访问总流量（EdgeOne 响应+客户端请求），单位：Byte；</li>      <li><code>l7Flow_outBandwidth</code>：L7 EdgeOne 响应带宽，单位：bps；</li>      <li><code>l7Flow_inBandwidth</code>：L7 客户端请求带宽，单位：bps；</li>      <li><code>l7Flow_bandwidth</code>：L7 访问总带宽（EdgeOne 响应+客户端请求），单位：bps；</li>      <li><code>l7Flow_request</code>：L7 访问请求数，单位：次；</li>      <li><code>l7Flow_avgResponseTime</code>：L7 访问平均响应耗时，单位：ms；</li>      <li><code>l7Flow_avgFirstByteResponseTime</code>：L7 访问平均首字节响应耗时，单位：ms。</li>    </ul>  </li>  <li><strong>Float</strong>：<code>Float</code> 值类型的指标将从 <code>Data.N.FloatTypeValue</code> 返回对应时序数据。<br>对应的查询指标 <code>MetricName</code> 有：    <ul>      <li><code>l7Flow_requestRate</code>：L7 访问请求速率，单位：qps。</li>    </ul>  </li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TimingDataRecord> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL7ANALYSISDATARESPONSE_H_
