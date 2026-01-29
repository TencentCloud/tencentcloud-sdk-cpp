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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL4DATARESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL4DATARESPONSE_H_

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
                * DescribeTimingL4Data返回参数结构体
                */
                class DescribeTimingL4DataResponse : public AbstractModel
                {
                public:
                    DescribeTimingL4DataResponse();
                    ~DescribeTimingL4DataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询结果的总条数。
                     * @return TotalCount 查询结果的总条数。
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
                     * 获取<p>四层时序流量数据列表。<br>对于不同的查询指标，根据指标值类型的不同，会从不同的参数返回时序数据。<br>目前存在的值类型有以下两种：</p><ul><li><strong>Integer</strong>：<code>Integer</code> 值类型的指标将从 <code>Data.N.TypeValue</code> 返回对应时序数据。<br>对应的查询指标 <code>MetricName</code> 有：<ul><li><code>l4Flow_flux</code>：访问总流量；</li><li><code>l4Flow_inFlux</code>：访问入流量；</li><li><code>l4Flow_outFlux</code>：访问出流量；</li><li><code>l4Flow_inBandwidth</code>：访问入向带宽峰值；</li><li><code>l4Flow_outBandwidth</code>：访问出向带宽峰值；</li><li><code>l4Flow_connections</code>：访问并发连接数。</li></ul></li><li><strong>Float</strong>：<code>Float</code> 值类型的指标将从 <code>Data.N.FloatTypeValue</code> 返回对应时序数据。<br>对应的查询指标 <code>MetricName</code> 有：<ul><li><code>l4Flow_newConnectionsRate</code>：新建连接数速率。</li></ul></li>
</ul><p>本接口暂不支持指定维度查询，默认按主账号汇总返回数据，即 <code>Data.N.TypeKey = AppId</code>，AppId 是腾讯云主账号唯一标识，N 恒等于 1。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data <p>四层时序流量数据列表。<br>对于不同的查询指标，根据指标值类型的不同，会从不同的参数返回时序数据。<br>目前存在的值类型有以下两种：</p><ul><li><strong>Integer</strong>：<code>Integer</code> 值类型的指标将从 <code>Data.N.TypeValue</code> 返回对应时序数据。<br>对应的查询指标 <code>MetricName</code> 有：<ul><li><code>l4Flow_flux</code>：访问总流量；</li><li><code>l4Flow_inFlux</code>：访问入流量；</li><li><code>l4Flow_outFlux</code>：访问出流量；</li><li><code>l4Flow_inBandwidth</code>：访问入向带宽峰值；</li><li><code>l4Flow_outBandwidth</code>：访问出向带宽峰值；</li><li><code>l4Flow_connections</code>：访问并发连接数。</li></ul></li><li><strong>Float</strong>：<code>Float</code> 值类型的指标将从 <code>Data.N.FloatTypeValue</code> 返回对应时序数据。<br>对应的查询指标 <code>MetricName</code> 有：<ul><li><code>l4Flow_newConnectionsRate</code>：新建连接数速率。</li></ul></li>
</ul><p>本接口暂不支持指定维度查询，默认按主账号汇总返回数据，即 <code>Data.N.TypeKey = AppId</code>，AppId 是腾讯云主账号唯一标识，N 恒等于 1。</p>
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
                     * 查询结果的总条数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>四层时序流量数据列表。<br>对于不同的查询指标，根据指标值类型的不同，会从不同的参数返回时序数据。<br>目前存在的值类型有以下两种：</p><ul><li><strong>Integer</strong>：<code>Integer</code> 值类型的指标将从 <code>Data.N.TypeValue</code> 返回对应时序数据。<br>对应的查询指标 <code>MetricName</code> 有：<ul><li><code>l4Flow_flux</code>：访问总流量；</li><li><code>l4Flow_inFlux</code>：访问入流量；</li><li><code>l4Flow_outFlux</code>：访问出流量；</li><li><code>l4Flow_inBandwidth</code>：访问入向带宽峰值；</li><li><code>l4Flow_outBandwidth</code>：访问出向带宽峰值；</li><li><code>l4Flow_connections</code>：访问并发连接数。</li></ul></li><li><strong>Float</strong>：<code>Float</code> 值类型的指标将从 <code>Data.N.FloatTypeValue</code> 返回对应时序数据。<br>对应的查询指标 <code>MetricName</code> 有：<ul><li><code>l4Flow_newConnectionsRate</code>：新建连接数速率。</li></ul></li>
</ul><p>本接口暂不支持指定维度查询，默认按主账号汇总返回数据，即 <code>Data.N.TypeKey = AppId</code>，AppId 是腾讯云主账号唯一标识，N 恒等于 1。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TimingDataRecord> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL4DATARESPONSE_H_
