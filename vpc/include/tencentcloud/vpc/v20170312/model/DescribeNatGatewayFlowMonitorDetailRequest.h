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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENATGATEWAYFLOWMONITORDETAILREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENATGATEWAYFLOWMONITORDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeNatGatewayFlowMonitorDetail请求参数结构体
                */
                class DescribeNatGatewayFlowMonitorDetailRequest : public AbstractModel
                {
                public:
                    DescribeNatGatewayFlowMonitorDetailRequest();
                    ~DescribeNatGatewayFlowMonitorDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取时间点。表示要查询的时刻。聚合粒度为60、300时，会查询最近一个整分钟开始的聚合周期；聚合粒度为3600时，会查询最近一个整点开始的聚合周期；聚合粒度为86400时，会查询最近一个整天开始的聚合周期。形如：`2019-03-24T10:51:23+08:00`。
                     * @return TimePoint 时间点。表示要查询的时刻。聚合粒度为60、300时，会查询最近一个整分钟开始的聚合周期；聚合粒度为3600时，会查询最近一个整点开始的聚合周期；聚合粒度为86400时，会查询最近一个整天开始的聚合周期。形如：`2019-03-24T10:51:23+08:00`。
                     * 
                     */
                    std::string GetTimePoint() const;

                    /**
                     * 设置时间点。表示要查询的时刻。聚合粒度为60、300时，会查询最近一个整分钟开始的聚合周期；聚合粒度为3600时，会查询最近一个整点开始的聚合周期；聚合粒度为86400时，会查询最近一个整天开始的聚合周期。形如：`2019-03-24T10:51:23+08:00`。
                     * @param _timePoint 时间点。表示要查询的时刻。聚合粒度为60、300时，会查询最近一个整分钟开始的聚合周期；聚合粒度为3600时，会查询最近一个整点开始的聚合周期；聚合粒度为86400时，会查询最近一个整天开始的聚合周期。形如：`2019-03-24T10:51:23+08:00`。
                     * 
                     */
                    void SetTimePoint(const std::string& _timePoint);

                    /**
                     * 判断参数 TimePoint 是否已赋值
                     * @return TimePoint 是否已赋值
                     * 
                     */
                    bool TimePointHasBeenSet() const;

                    /**
                     * 获取NAT网关的ID，形如：`nat-ig8xpno8`。
                     * @return NatGatewayId NAT网关的ID，形如：`nat-ig8xpno8`。
                     * 
                     */
                    std::string GetNatGatewayId() const;

                    /**
                     * 设置NAT网关的ID，形如：`nat-ig8xpno8`。
                     * @param _natGatewayId NAT网关的ID，形如：`nat-ig8xpno8`。
                     * 
                     */
                    void SetNatGatewayId(const std::string& _natGatewayId);

                    /**
                     * 判断参数 NatGatewayId 是否已赋值
                     * @return NatGatewayId 是否已赋值
                     * 
                     */
                    bool NatGatewayIdHasBeenSet() const;

                    /**
                     * 获取展示排序靠前的数据。默认值：10，表示默认展示排序前 10 的数据。最大值：100。
                     * @return TopN 展示排序靠前的数据。默认值：10，表示默认展示排序前 10 的数据。最大值：100。
                     * 
                     */
                    int64_t GetTopN() const;

                    /**
                     * 设置展示排序靠前的数据。默认值：10，表示默认展示排序前 10 的数据。最大值：100。
                     * @param _topN 展示排序靠前的数据。默认值：10，表示默认展示排序前 10 的数据。最大值：100。
                     * 
                     */
                    void SetTopN(const int64_t& _topN);

                    /**
                     * 判断参数 TopN 是否已赋值
                     * @return TopN 是否已赋值
                     * 
                     */
                    bool TopNHasBeenSet() const;

                    /**
                     * 获取排序字段。支持：入包量`InPkg`、出包量`OutPkg`、入流量`InTraffic`、出流量`OutTraffic`，标准型nat额外支持 并发连接数`ConcurrentConnectionCount` 、新建连接速率`NewConnectionRate`。默认值`OutTraffic`。
                     * @return OrderField 排序字段。支持：入包量`InPkg`、出包量`OutPkg`、入流量`InTraffic`、出流量`OutTraffic`，标准型nat额外支持 并发连接数`ConcurrentConnectionCount` 、新建连接速率`NewConnectionRate`。默认值`OutTraffic`。
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置排序字段。支持：入包量`InPkg`、出包量`OutPkg`、入流量`InTraffic`、出流量`OutTraffic`，标准型nat额外支持 并发连接数`ConcurrentConnectionCount` 、新建连接速率`NewConnectionRate`。默认值`OutTraffic`。
                     * @param _orderField 排序字段。支持：入包量`InPkg`、出包量`OutPkg`、入流量`InTraffic`、出流量`OutTraffic`，标准型nat额外支持 并发连接数`ConcurrentConnectionCount` 、新建连接速率`NewConnectionRate`。默认值`OutTraffic`。
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取聚合时间粒度。支持：60、300、3600、86400，即按照1分钟、5分钟、1小时、1天进行聚合查询。
                     * @return AggregationTimeRange 聚合时间粒度。支持：60、300、3600、86400，即按照1分钟、5分钟、1小时、1天进行聚合查询。
                     * 
                     */
                    int64_t GetAggregationTimeRange() const;

                    /**
                     * 设置聚合时间粒度。支持：60、300、3600、86400，即按照1分钟、5分钟、1小时、1天进行聚合查询。
                     * @param _aggregationTimeRange 聚合时间粒度。支持：60、300、3600、86400，即按照1分钟、5分钟、1小时、1天进行聚合查询。
                     * 
                     */
                    void SetAggregationTimeRange(const int64_t& _aggregationTimeRange);

                    /**
                     * 判断参数 AggregationTimeRange 是否已赋值
                     * @return AggregationTimeRange 是否已赋值
                     * 
                     */
                    bool AggregationTimeRangeHasBeenSet() const;

                    /**
                     * 获取是否查询全部指标。默认值：True，表示查询全部指标。
                     * @return AllMetricMode 是否查询全部指标。默认值：True，表示查询全部指标。
                     * 
                     */
                    bool GetAllMetricMode() const;

                    /**
                     * 设置是否查询全部指标。默认值：True，表示查询全部指标。
                     * @param _allMetricMode 是否查询全部指标。默认值：True，表示查询全部指标。
                     * 
                     */
                    void SetAllMetricMode(const bool& _allMetricMode);

                    /**
                     * 判断参数 AllMetricMode 是否已赋值
                     * @return AllMetricMode 是否已赋值
                     * 
                     */
                    bool AllMetricModeHasBeenSet() const;

                private:

                    /**
                     * 时间点。表示要查询的时刻。聚合粒度为60、300时，会查询最近一个整分钟开始的聚合周期；聚合粒度为3600时，会查询最近一个整点开始的聚合周期；聚合粒度为86400时，会查询最近一个整天开始的聚合周期。形如：`2019-03-24T10:51:23+08:00`。
                     */
                    std::string m_timePoint;
                    bool m_timePointHasBeenSet;

                    /**
                     * NAT网关的ID，形如：`nat-ig8xpno8`。
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * 展示排序靠前的数据。默认值：10，表示默认展示排序前 10 的数据。最大值：100。
                     */
                    int64_t m_topN;
                    bool m_topNHasBeenSet;

                    /**
                     * 排序字段。支持：入包量`InPkg`、出包量`OutPkg`、入流量`InTraffic`、出流量`OutTraffic`，标准型nat额外支持 并发连接数`ConcurrentConnectionCount` 、新建连接速率`NewConnectionRate`。默认值`OutTraffic`。
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 聚合时间粒度。支持：60、300、3600、86400，即按照1分钟、5分钟、1小时、1天进行聚合查询。
                     */
                    int64_t m_aggregationTimeRange;
                    bool m_aggregationTimeRangeHasBeenSet;

                    /**
                     * 是否查询全部指标。默认值：True，表示查询全部指标。
                     */
                    bool m_allMetricMode;
                    bool m_allMetricModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENATGATEWAYFLOWMONITORDETAILREQUEST_H_
