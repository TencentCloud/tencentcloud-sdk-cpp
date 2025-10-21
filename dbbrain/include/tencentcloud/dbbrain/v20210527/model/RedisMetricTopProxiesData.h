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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_REDISMETRICTOPPROXIESDATA_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_REDISMETRICTOPPROXIESDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/MonitorFloatMetric.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * Redis  DescribeMetricTopProxies 接口返回数据
                */
                class RedisMetricTopProxiesData : public AbstractModel
                {
                public:
                    RedisMetricTopProxiesData();
                    ~RedisMetricTopProxiesData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取host
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Host host
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置host
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _host host
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取Proxy Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceProxyId Proxy Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceProxyId() const;

                    /**
                     * 设置Proxy Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceProxyId Proxy Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceProxyId(const std::string& _instanceProxyId);

                    /**
                     * 判断参数 InstanceProxyId 是否已赋值
                     * @return InstanceProxyId 是否已赋值
                     * 
                     */
                    bool InstanceProxyIdHasBeenSet() const;

                    /**
                     * 获取端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port 端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _port 端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取最新的值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 最新的值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetValue() const;

                    /**
                     * 设置最新的值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value 最新的值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValue(const double& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取时间（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timestamp 时间（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<uint64_t> GetTimestamp() const;

                    /**
                     * 设置时间（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timestamp 时间（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimestamp(const std::vector<uint64_t>& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取序列数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Series 序列数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MonitorFloatMetric> GetSeries() const;

                    /**
                     * 设置序列数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _series 序列数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSeries(const std::vector<MonitorFloatMetric>& _series);

                    /**
                     * 判断参数 Series 是否已赋值
                     * @return Series 是否已赋值
                     * 
                     */
                    bool SeriesHasBeenSet() const;

                private:

                    /**
                     * host
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Proxy Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceProxyId;
                    bool m_instanceProxyIdHasBeenSet;

                    /**
                     * 端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 最新的值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 时间（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<uint64_t> m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 序列数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MonitorFloatMetric> m_series;
                    bool m_seriesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_REDISMETRICTOPPROXIESDATA_H_
