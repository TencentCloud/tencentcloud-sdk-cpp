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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEGATEWAYCURVEDATAREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEGATEWAYCURVEDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeGatewayCurveData请求参数结构体
                */
                class DescribeGatewayCurveDataRequest : public AbstractModel
                {
                public:
                    DescribeGatewayCurveDataRequest();
                    ~DescribeGatewayCurveDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境id
                     * @return EnvId 环境id
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境id
                     * @param _envId 环境id
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取网关id
                     * @return GatewayId 网关id
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关id
                     * @param _gatewayId 网关id
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取监控类型 GWQps GWBandwidth GwHttpError GwHttp404 GwHttp502 GwConnect GwCircuit
                     * @return MetricName 监控类型 GWQps GWBandwidth GwHttpError GwHttp404 GwHttp502 GwConnect GwCircuit
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置监控类型 GWQps GWBandwidth GwHttpError GwHttp404 GwHttp502 GwConnect GwCircuit
                     * @param _metricName 监控类型 GWQps GWBandwidth GwHttpError GwHttp404 GwHttp502 GwConnect GwCircuit
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
                     * 获取监控起始时间
                     * @return StartTime 监控起始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置监控起始时间
                     * @param _startTime 监控起始时间
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
                     * 获取监控结束时间
                     * @return EndTime 监控结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置监控结束时间
                     * @param _endTime 监控结束时间
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
                     * 获取网关版本
                     * @return GatewayVersion 网关版本
                     * 
                     */
                    std::string GetGatewayVersion() const;

                    /**
                     * 设置网关版本
                     * @param _gatewayVersion 网关版本
                     * 
                     */
                    void SetGatewayVersion(const std::string& _gatewayVersion);

                    /**
                     * 判断参数 GatewayVersion 是否已赋值
                     * @return GatewayVersion 是否已赋值
                     * 
                     */
                    bool GatewayVersionHasBeenSet() const;

                    /**
                     * 获取网关路由名称
                     * @return GatewayRoute 网关路由名称
                     * 
                     */
                    std::string GetGatewayRoute() const;

                    /**
                     * 设置网关路由名称
                     * @param _gatewayRoute 网关路由名称
                     * 
                     */
                    void SetGatewayRoute(const std::string& _gatewayRoute);

                    /**
                     * 判断参数 GatewayRoute 是否已赋值
                     * @return GatewayRoute 是否已赋值
                     * 
                     */
                    bool GatewayRouteHasBeenSet() const;

                private:

                    /**
                     * 环境id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 网关id
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 监控类型 GWQps GWBandwidth GwHttpError GwHttp404 GwHttp502 GwConnect GwCircuit
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 监控起始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 监控结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 网关版本
                     */
                    std::string m_gatewayVersion;
                    bool m_gatewayVersionHasBeenSet;

                    /**
                     * 网关路由名称
                     */
                    std::string m_gatewayRoute;
                    bool m_gatewayRouteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEGATEWAYCURVEDATAREQUEST_H_
