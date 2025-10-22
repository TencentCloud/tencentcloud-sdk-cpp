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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_CREATETARGETGROUPREQUEST_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_CREATETARGETGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gwlb/v20240906/model/TargetGroupInstance.h>
#include <tencentcloud/gwlb/v20240906/model/TargetGroupHealthCheck.h>
#include <tencentcloud/gwlb/v20240906/model/TagInfo.h>


namespace TencentCloud
{
    namespace Gwlb
    {
        namespace V20240906
        {
            namespace Model
            {
                /**
                * CreateTargetGroup请求参数结构体
                */
                class CreateTargetGroupRequest : public AbstractModel
                {
                public:
                    CreateTargetGroupRequest();
                    ~CreateTargetGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取目标组名称，限定60个字符。
                     * @return TargetGroupName 目标组名称，限定60个字符。
                     * 
                     */
                    std::string GetTargetGroupName() const;

                    /**
                     * 设置目标组名称，限定60个字符。
                     * @param _targetGroupName 目标组名称，限定60个字符。
                     * 
                     */
                    void SetTargetGroupName(const std::string& _targetGroupName);

                    /**
                     * 判断参数 TargetGroupName 是否已赋值
                     * @return TargetGroupName 是否已赋值
                     * 
                     */
                    bool TargetGroupNameHasBeenSet() const;

                    /**
                     * 获取网关负载均衡后端目标组所属的网络 ID，如vpc-12345678，可以通过 [DescribeVpcs](https://cloud.tencent.com/document/product/215/15778)  接口获取。 不填此参数则默认为DefaultVPC。
                     * @return VpcId 网关负载均衡后端目标组所属的网络 ID，如vpc-12345678，可以通过 [DescribeVpcs](https://cloud.tencent.com/document/product/215/15778)  接口获取。 不填此参数则默认为DefaultVPC。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置网关负载均衡后端目标组所属的网络 ID，如vpc-12345678，可以通过 [DescribeVpcs](https://cloud.tencent.com/document/product/215/15778)  接口获取。 不填此参数则默认为DefaultVPC。
                     * @param _vpcId 网关负载均衡后端目标组所属的网络 ID，如vpc-12345678，可以通过 [DescribeVpcs](https://cloud.tencent.com/document/product/215/15778)  接口获取。 不填此参数则默认为DefaultVPC。
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取目标组的默认端口， 后续添加服务器时可使用该默认端口。Port和TargetGroupInstances.N中的port二者必填其一。仅支持6081。
                     * @return Port 目标组的默认端口， 后续添加服务器时可使用该默认端口。Port和TargetGroupInstances.N中的port二者必填其一。仅支持6081。
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置目标组的默认端口， 后续添加服务器时可使用该默认端口。Port和TargetGroupInstances.N中的port二者必填其一。仅支持6081。
                     * @param _port 目标组的默认端口， 后续添加服务器时可使用该默认端口。Port和TargetGroupInstances.N中的port二者必填其一。仅支持6081。
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
                     * 获取目标组绑定的后端服务器
                     * @return TargetGroupInstances 目标组绑定的后端服务器
                     * 
                     */
                    std::vector<TargetGroupInstance> GetTargetGroupInstances() const;

                    /**
                     * 设置目标组绑定的后端服务器
                     * @param _targetGroupInstances 目标组绑定的后端服务器
                     * 
                     */
                    void SetTargetGroupInstances(const std::vector<TargetGroupInstance>& _targetGroupInstances);

                    /**
                     * 判断参数 TargetGroupInstances 是否已赋值
                     * @return TargetGroupInstances 是否已赋值
                     * 
                     */
                    bool TargetGroupInstancesHasBeenSet() const;

                    /**
                     * 获取网关负载均衡目标组协议。
- TENCENT_GENEVE ：GENEVE 标准协议
- AWS_GENEVE：GENEVE 兼容协议
                     * @return Protocol 网关负载均衡目标组协议。
- TENCENT_GENEVE ：GENEVE 标准协议
- AWS_GENEVE：GENEVE 兼容协议
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置网关负载均衡目标组协议。
- TENCENT_GENEVE ：GENEVE 标准协议
- AWS_GENEVE：GENEVE 兼容协议
                     * @param _protocol 网关负载均衡目标组协议。
- TENCENT_GENEVE ：GENEVE 标准协议
- AWS_GENEVE：GENEVE 兼容协议
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
                     * 获取健康检查设置。
                     * @return HealthCheck 健康检查设置。
                     * 
                     */
                    TargetGroupHealthCheck GetHealthCheck() const;

                    /**
                     * 设置健康检查设置。
                     * @param _healthCheck 健康检查设置。
                     * 
                     */
                    void SetHealthCheck(const TargetGroupHealthCheck& _healthCheck);

                    /**
                     * 判断参数 HealthCheck 是否已赋值
                     * @return HealthCheck 是否已赋值
                     * 
                     */
                    bool HealthCheckHasBeenSet() const;

                    /**
                     * 获取均衡算法。
- IP_HASH_3_ELASTIC：弹性哈希
                     * @return ScheduleAlgorithm 均衡算法。
- IP_HASH_3_ELASTIC：弹性哈希
                     * 
                     */
                    std::string GetScheduleAlgorithm() const;

                    /**
                     * 设置均衡算法。
- IP_HASH_3_ELASTIC：弹性哈希
                     * @param _scheduleAlgorithm 均衡算法。
- IP_HASH_3_ELASTIC：弹性哈希
                     * 
                     */
                    void SetScheduleAlgorithm(const std::string& _scheduleAlgorithm);

                    /**
                     * 判断参数 ScheduleAlgorithm 是否已赋值
                     * @return ScheduleAlgorithm 是否已赋值
                     * 
                     */
                    bool ScheduleAlgorithmHasBeenSet() const;

                    /**
                     * 获取是否支持全死全活。默认支持。
                     * @return AllDeadToAlive 是否支持全死全活。默认支持。
                     * 
                     */
                    bool GetAllDeadToAlive() const;

                    /**
                     * 设置是否支持全死全活。默认支持。
                     * @param _allDeadToAlive 是否支持全死全活。默认支持。
                     * 
                     */
                    void SetAllDeadToAlive(const bool& _allDeadToAlive);

                    /**
                     * 判断参数 AllDeadToAlive 是否已赋值
                     * @return AllDeadToAlive 是否已赋值
                     * 
                     */
                    bool AllDeadToAliveHasBeenSet() const;

                    /**
                     * 获取标签。
                     * @return Tags 标签。
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置标签。
                     * @param _tags 标签。
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取流量分发方式

- STATELESS：无状态
- STATEFUL： 有状态
                     * @return ForwardingMode 流量分发方式

- STATELESS：无状态
- STATEFUL： 有状态
                     * 
                     */
                    std::string GetForwardingMode() const;

                    /**
                     * 设置流量分发方式

- STATELESS：无状态
- STATEFUL： 有状态
                     * @param _forwardingMode 流量分发方式

- STATELESS：无状态
- STATEFUL： 有状态
                     * 
                     */
                    void SetForwardingMode(const std::string& _forwardingMode);

                    /**
                     * 判断参数 ForwardingMode 是否已赋值
                     * @return ForwardingMode 是否已赋值
                     * 
                     */
                    bool ForwardingModeHasBeenSet() const;

                    /**
                     * 获取TCP协议连接空闲超时时间，可配置60s-6000s，默认350s。
                     * @return TcpIdleConnectTimeout TCP协议连接空闲超时时间，可配置60s-6000s，默认350s。
                     * 
                     */
                    int64_t GetTcpIdleConnectTimeout() const;

                    /**
                     * 设置TCP协议连接空闲超时时间，可配置60s-6000s，默认350s。
                     * @param _tcpIdleConnectTimeout TCP协议连接空闲超时时间，可配置60s-6000s，默认350s。
                     * 
                     */
                    void SetTcpIdleConnectTimeout(const int64_t& _tcpIdleConnectTimeout);

                    /**
                     * 判断参数 TcpIdleConnectTimeout 是否已赋值
                     * @return TcpIdleConnectTimeout 是否已赋值
                     * 
                     */
                    bool TcpIdleConnectTimeoutHasBeenSet() const;

                    /**
                     * 获取其他协议连接空闲超时时间，可配置5s-180s，默认120s
                     * @return OthersIdleConnectTimeout 其他协议连接空闲超时时间，可配置5s-180s，默认120s
                     * 
                     */
                    int64_t GetOthersIdleConnectTimeout() const;

                    /**
                     * 设置其他协议连接空闲超时时间，可配置5s-180s，默认120s
                     * @param _othersIdleConnectTimeout 其他协议连接空闲超时时间，可配置5s-180s，默认120s
                     * 
                     */
                    void SetOthersIdleConnectTimeout(const int64_t& _othersIdleConnectTimeout);

                    /**
                     * 判断参数 OthersIdleConnectTimeout 是否已赋值
                     * @return OthersIdleConnectTimeout 是否已赋值
                     * 
                     */
                    bool OthersIdleConnectTimeoutHasBeenSet() const;

                    /**
                     * 获取重新调度功能内的解绑后端服务开关，开关打开后解绑后端服务会触发重新调度。
                     * @return RescheduleUnbindRs 重新调度功能内的解绑后端服务开关，开关打开后解绑后端服务会触发重新调度。
                     * 
                     */
                    bool GetRescheduleUnbindRs() const;

                    /**
                     * 设置重新调度功能内的解绑后端服务开关，开关打开后解绑后端服务会触发重新调度。
                     * @param _rescheduleUnbindRs 重新调度功能内的解绑后端服务开关，开关打开后解绑后端服务会触发重新调度。
                     * 
                     */
                    void SetRescheduleUnbindRs(const bool& _rescheduleUnbindRs);

                    /**
                     * 判断参数 RescheduleUnbindRs 是否已赋值
                     * @return RescheduleUnbindRs 是否已赋值
                     * 
                     */
                    bool RescheduleUnbindRsHasBeenSet() const;

                    /**
                     * 获取解绑RS后开启重调度的时间，可配置0s-3600s，默认0s
                     * @return RescheduleUnbindRsStartTime 解绑RS后开启重调度的时间，可配置0s-3600s，默认0s
                     * 
                     */
                    int64_t GetRescheduleUnbindRsStartTime() const;

                    /**
                     * 设置解绑RS后开启重调度的时间，可配置0s-3600s，默认0s
                     * @param _rescheduleUnbindRsStartTime 解绑RS后开启重调度的时间，可配置0s-3600s，默认0s
                     * 
                     */
                    void SetRescheduleUnbindRsStartTime(const int64_t& _rescheduleUnbindRsStartTime);

                    /**
                     * 判断参数 RescheduleUnbindRsStartTime 是否已赋值
                     * @return RescheduleUnbindRsStartTime 是否已赋值
                     * 
                     */
                    bool RescheduleUnbindRsStartTimeHasBeenSet() const;

                    /**
                     * 获取重新调度功能内的后端服务健康探测异常开关，开关打开后后端服务健康检查异常会触发重新调度。
                     * @return RescheduleUnhealthy 重新调度功能内的后端服务健康探测异常开关，开关打开后后端服务健康检查异常会触发重新调度。
                     * 
                     */
                    bool GetRescheduleUnhealthy() const;

                    /**
                     * 设置重新调度功能内的后端服务健康探测异常开关，开关打开后后端服务健康检查异常会触发重新调度。
                     * @param _rescheduleUnhealthy 重新调度功能内的后端服务健康探测异常开关，开关打开后后端服务健康检查异常会触发重新调度。
                     * 
                     */
                    void SetRescheduleUnhealthy(const bool& _rescheduleUnhealthy);

                    /**
                     * 判断参数 RescheduleUnhealthy 是否已赋值
                     * @return RescheduleUnhealthy 是否已赋值
                     * 
                     */
                    bool RescheduleUnhealthyHasBeenSet() const;

                    /**
                     * 获取后端服务健康探测异常后开启重调度的时间，可配置0s-3600s，默认0s
                     * @return RescheduleUnhealthyStartTime 后端服务健康探测异常后开启重调度的时间，可配置0s-3600s，默认0s
                     * 
                     */
                    int64_t GetRescheduleUnhealthyStartTime() const;

                    /**
                     * 设置后端服务健康探测异常后开启重调度的时间，可配置0s-3600s，默认0s
                     * @param _rescheduleUnhealthyStartTime 后端服务健康探测异常后开启重调度的时间，可配置0s-3600s，默认0s
                     * 
                     */
                    void SetRescheduleUnhealthyStartTime(const int64_t& _rescheduleUnhealthyStartTime);

                    /**
                     * 判断参数 RescheduleUnhealthyStartTime 是否已赋值
                     * @return RescheduleUnhealthyStartTime 是否已赋值
                     * 
                     */
                    bool RescheduleUnhealthyStartTimeHasBeenSet() const;

                private:

                    /**
                     * 目标组名称，限定60个字符。
                     */
                    std::string m_targetGroupName;
                    bool m_targetGroupNameHasBeenSet;

                    /**
                     * 网关负载均衡后端目标组所属的网络 ID，如vpc-12345678，可以通过 [DescribeVpcs](https://cloud.tencent.com/document/product/215/15778)  接口获取。 不填此参数则默认为DefaultVPC。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 目标组的默认端口， 后续添加服务器时可使用该默认端口。Port和TargetGroupInstances.N中的port二者必填其一。仅支持6081。
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 目标组绑定的后端服务器
                     */
                    std::vector<TargetGroupInstance> m_targetGroupInstances;
                    bool m_targetGroupInstancesHasBeenSet;

                    /**
                     * 网关负载均衡目标组协议。
- TENCENT_GENEVE ：GENEVE 标准协议
- AWS_GENEVE：GENEVE 兼容协议
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 健康检查设置。
                     */
                    TargetGroupHealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * 均衡算法。
- IP_HASH_3_ELASTIC：弹性哈希
                     */
                    std::string m_scheduleAlgorithm;
                    bool m_scheduleAlgorithmHasBeenSet;

                    /**
                     * 是否支持全死全活。默认支持。
                     */
                    bool m_allDeadToAlive;
                    bool m_allDeadToAliveHasBeenSet;

                    /**
                     * 标签。
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 流量分发方式

- STATELESS：无状态
- STATEFUL： 有状态
                     */
                    std::string m_forwardingMode;
                    bool m_forwardingModeHasBeenSet;

                    /**
                     * TCP协议连接空闲超时时间，可配置60s-6000s，默认350s。
                     */
                    int64_t m_tcpIdleConnectTimeout;
                    bool m_tcpIdleConnectTimeoutHasBeenSet;

                    /**
                     * 其他协议连接空闲超时时间，可配置5s-180s，默认120s
                     */
                    int64_t m_othersIdleConnectTimeout;
                    bool m_othersIdleConnectTimeoutHasBeenSet;

                    /**
                     * 重新调度功能内的解绑后端服务开关，开关打开后解绑后端服务会触发重新调度。
                     */
                    bool m_rescheduleUnbindRs;
                    bool m_rescheduleUnbindRsHasBeenSet;

                    /**
                     * 解绑RS后开启重调度的时间，可配置0s-3600s，默认0s
                     */
                    int64_t m_rescheduleUnbindRsStartTime;
                    bool m_rescheduleUnbindRsStartTimeHasBeenSet;

                    /**
                     * 重新调度功能内的后端服务健康探测异常开关，开关打开后后端服务健康检查异常会触发重新调度。
                     */
                    bool m_rescheduleUnhealthy;
                    bool m_rescheduleUnhealthyHasBeenSet;

                    /**
                     * 后端服务健康探测异常后开启重调度的时间，可配置0s-3600s，默认0s
                     */
                    int64_t m_rescheduleUnhealthyStartTime;
                    bool m_rescheduleUnhealthyStartTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_CREATETARGETGROUPREQUEST_H_
