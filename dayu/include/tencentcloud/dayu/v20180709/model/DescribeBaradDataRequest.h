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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEBARADDATAREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEBARADDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/ProtocolPort.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeBaradData请求参数结构体
                */
                class DescribeBaradDataRequest : public AbstractModel
                {
                public:
                    DescribeBaradDataRequest();
                    ~DescribeBaradDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版）
                     * @return Business 大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版）
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版）
                     * @param _business 大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版）
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取资源实例ID
                     * @return Id 资源实例ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置资源实例ID
                     * @param _id 资源实例ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取指标名，取值：
connum表示TCP活跃连接数；
new_conn表示新建TCP连接数；
inactive_conn表示非活跃连接数;
intraffic表示入流量；
outtraffic表示出流量；
alltraffic表示出流量和入流量之和；
inpkg表示入包速率；
outpkg表示出包速率；
                     * @return MetricName 指标名，取值：
connum表示TCP活跃连接数；
new_conn表示新建TCP连接数；
inactive_conn表示非活跃连接数;
intraffic表示入流量；
outtraffic表示出流量；
alltraffic表示出流量和入流量之和；
inpkg表示入包速率；
outpkg表示出包速率；
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标名，取值：
connum表示TCP活跃连接数；
new_conn表示新建TCP连接数；
inactive_conn表示非活跃连接数;
intraffic表示入流量；
outtraffic表示出流量；
alltraffic表示出流量和入流量之和；
inpkg表示入包速率；
outpkg表示出包速率；
                     * @param _metricName 指标名，取值：
connum表示TCP活跃连接数；
new_conn表示新建TCP连接数；
inactive_conn表示非活跃连接数;
intraffic表示入流量；
outtraffic表示出流量；
alltraffic表示出流量和入流量之和；
inpkg表示入包速率；
outpkg表示出包速率；
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
                     * 获取统计时间粒度，单位秒（300表示5分钟；3600表示小时；86400表示天）
                     * @return Period 统计时间粒度，单位秒（300表示5分钟；3600表示小时；86400表示天）
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置统计时间粒度，单位秒（300表示5分钟；3600表示小时；86400表示天）
                     * @param _period 统计时间粒度，单位秒（300表示5分钟；3600表示小时；86400表示天）
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取统计开始时间，秒部分保持为0，分钟部分为5的倍数
                     * @return StartTime 统计开始时间，秒部分保持为0，分钟部分为5的倍数
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置统计开始时间，秒部分保持为0，分钟部分为5的倍数
                     * @param _startTime 统计开始时间，秒部分保持为0，分钟部分为5的倍数
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
                     * 获取统计结束时间，秒部分保持为0，分钟部分为5的倍数
                     * @return EndTime 统计结束时间，秒部分保持为0，分钟部分为5的倍数
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置统计结束时间，秒部分保持为0，分钟部分为5的倍数
                     * @param _endTime 统计结束时间，秒部分保持为0，分钟部分为5的倍数
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
                     * 获取统计方式，取值：
max表示最大值；
min表示最小值；
avg表示均值；
                     * @return Statistics 统计方式，取值：
max表示最大值；
min表示最小值；
avg表示均值；
                     * 
                     */
                    std::string GetStatistics() const;

                    /**
                     * 设置统计方式，取值：
max表示最大值；
min表示最小值；
avg表示均值；
                     * @param _statistics 统计方式，取值：
max表示最大值；
min表示最小值；
avg表示均值；
                     * 
                     */
                    void SetStatistics(const std::string& _statistics);

                    /**
                     * 判断参数 Statistics 是否已赋值
                     * @return Statistics 是否已赋值
                     * 
                     */
                    bool StatisticsHasBeenSet() const;

                    /**
                     * 获取协议端口数组
                     * @return ProtocolPort 协议端口数组
                     * 
                     */
                    std::vector<ProtocolPort> GetProtocolPort() const;

                    /**
                     * 设置协议端口数组
                     * @param _protocolPort 协议端口数组
                     * 
                     */
                    void SetProtocolPort(const std::vector<ProtocolPort>& _protocolPort);

                    /**
                     * 判断参数 ProtocolPort 是否已赋值
                     * @return ProtocolPort 是否已赋值
                     * 
                     */
                    bool ProtocolPortHasBeenSet() const;

                    /**
                     * 获取资源实例下的IP，只有当Business=net(高防IP专业版)时才必须填写资源的一个IP（因为高防IP专业版资源实例有多个IP，才需要指定）；
                     * @return Ip 资源实例下的IP，只有当Business=net(高防IP专业版)时才必须填写资源的一个IP（因为高防IP专业版资源实例有多个IP，才需要指定）；
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置资源实例下的IP，只有当Business=net(高防IP专业版)时才必须填写资源的一个IP（因为高防IP专业版资源实例有多个IP，才需要指定）；
                     * @param _ip 资源实例下的IP，只有当Business=net(高防IP专业版)时才必须填写资源的一个IP（因为高防IP专业版资源实例有多个IP，才需要指定）；
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                private:

                    /**
                     * 大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 资源实例ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 指标名，取值：
connum表示TCP活跃连接数；
new_conn表示新建TCP连接数；
inactive_conn表示非活跃连接数;
intraffic表示入流量；
outtraffic表示出流量；
alltraffic表示出流量和入流量之和；
inpkg表示入包速率；
outpkg表示出包速率；
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 统计时间粒度，单位秒（300表示5分钟；3600表示小时；86400表示天）
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 统计开始时间，秒部分保持为0，分钟部分为5的倍数
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 统计结束时间，秒部分保持为0，分钟部分为5的倍数
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 统计方式，取值：
max表示最大值；
min表示最小值；
avg表示均值；
                     */
                    std::string m_statistics;
                    bool m_statisticsHasBeenSet;

                    /**
                     * 协议端口数组
                     */
                    std::vector<ProtocolPort> m_protocolPort;
                    bool m_protocolPortHasBeenSet;

                    /**
                     * 资源实例下的IP，只有当Business=net(高防IP专业版)时才必须填写资源的一个IP（因为高防IP专业版资源实例有多个IP，才需要指定）；
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEBARADDATAREQUEST_H_
