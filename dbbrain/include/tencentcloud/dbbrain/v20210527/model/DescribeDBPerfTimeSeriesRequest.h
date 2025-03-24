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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBPERFTIMESERIESREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBPERFTIMESERIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeDBPerfTimeSeries请求参数结构体
                */
                class DescribeDBPerfTimeSeriesRequest : public AbstractModel
                {
                public:
                    DescribeDBPerfTimeSeriesRequest();
                    ~DescribeDBPerfTimeSeriesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要获取性能趋势的实例ID。
                     * @return InstanceId 需要获取性能趋势的实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置需要获取性能趋势的实例ID。
                     * @param _instanceId 需要获取性能趋势的实例ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取开始时间。
                     * @return StartTime 开始时间。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间。
                     * @param _startTime 开始时间。
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
                     * 获取指标名称，多个指标之间用逗号分隔。
                     * @return Metric 指标名称，多个指标之间用逗号分隔。
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置指标名称，多个指标之间用逗号分隔。
                     * @param _metric 指标名称，多个指标之间用逗号分隔。
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
                     * 获取服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 TDSQL-C for MySQL，"redis" - 云数据库 Redis，"mongodb" - 云数据库 MongoDB
                     * @return Product 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 TDSQL-C for MySQL，"redis" - 云数据库 Redis，"mongodb" - 云数据库 MongoDB
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 TDSQL-C for MySQL，"redis" - 云数据库 Redis，"mongodb" - 云数据库 MongoDB
                     * @param _product 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 TDSQL-C for MySQL，"redis" - 云数据库 Redis，"mongodb" - 云数据库 MongoDB
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取需要获取性能趋势的集群ID。
                     * @return ClusterId 需要获取性能趋势的集群ID。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置需要获取性能趋势的集群ID。
                     * @param _clusterId 需要获取性能趋势的集群ID。
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取性能数据统计粒度。
                     * @return Period 性能数据统计粒度。
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置性能数据统计粒度。
                     * @param _period 性能数据统计粒度。
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取实列节点ID。
                     * @return InstanceNodeId 实列节点ID。
                     * 
                     */
                    std::string GetInstanceNodeId() const;

                    /**
                     * 设置实列节点ID。
                     * @param _instanceNodeId 实列节点ID。
                     * 
                     */
                    void SetInstanceNodeId(const std::string& _instanceNodeId);

                    /**
                     * 判断参数 InstanceNodeId 是否已赋值
                     * @return InstanceNodeId 是否已赋值
                     * 
                     */
                    bool InstanceNodeIdHasBeenSet() const;

                    /**
                     * 获取实列代理ID。
                     * @return InstanceProxyId 实列代理ID。
                     * 
                     */
                    std::string GetInstanceProxyId() const;

                    /**
                     * 设置实列代理ID。
                     * @param _instanceProxyId 实列代理ID。
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
                     * 获取代理节点ID。
                     * @return ProxyId 代理节点ID。
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置代理节点ID。
                     * @param _proxyId 代理节点ID。
                     * 
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     * 
                     */
                    bool ProxyIdHasBeenSet() const;

                private:

                    /**
                     * 需要获取性能趋势的实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 开始时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 指标名称，多个指标之间用逗号分隔。
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 TDSQL-C for MySQL，"redis" - 云数据库 Redis，"mongodb" - 云数据库 MongoDB
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 需要获取性能趋势的集群ID。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 性能数据统计粒度。
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 实列节点ID。
                     */
                    std::string m_instanceNodeId;
                    bool m_instanceNodeIdHasBeenSet;

                    /**
                     * 实列代理ID。
                     */
                    std::string m_instanceProxyId;
                    bool m_instanceProxyIdHasBeenSet;

                    /**
                     * 代理节点ID。
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBPERFTIMESERIESREQUEST_H_
