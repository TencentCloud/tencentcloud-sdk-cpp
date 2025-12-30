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
                     * 获取<p>目标组名称，限定60个字符。</p>
                     * @return TargetGroupName <p>目标组名称，限定60个字符。</p>
                     * 
                     */
                    std::string GetTargetGroupName() const;

                    /**
                     * 设置<p>目标组名称，限定60个字符。</p>
                     * @param _targetGroupName <p>目标组名称，限定60个字符。</p>
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
                     * 获取<p>网关负载均衡后端目标组所属的网络 ID，如vpc-12345678，可以通过 <a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a>  接口获取。 不填此参数则默认为DefaultVPC。</p>
                     * @return VpcId <p>网关负载均衡后端目标组所属的网络 ID，如vpc-12345678，可以通过 <a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a>  接口获取。 不填此参数则默认为DefaultVPC。</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>网关负载均衡后端目标组所属的网络 ID，如vpc-12345678，可以通过 <a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a>  接口获取。 不填此参数则默认为DefaultVPC。</p>
                     * @param _vpcId <p>网关负载均衡后端目标组所属的网络 ID，如vpc-12345678，可以通过 <a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a>  接口获取。 不填此参数则默认为DefaultVPC。</p>
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
                     * 获取<p>目标组的默认端口， 后续添加服务器时可使用该默认端口。Port和TargetGroupInstances.N中的port二者必填其一。仅支持6081。</p>
                     * @return Port <p>目标组的默认端口， 后续添加服务器时可使用该默认端口。Port和TargetGroupInstances.N中的port二者必填其一。仅支持6081。</p>
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置<p>目标组的默认端口， 后续添加服务器时可使用该默认端口。Port和TargetGroupInstances.N中的port二者必填其一。仅支持6081。</p>
                     * @param _port <p>目标组的默认端口， 后续添加服务器时可使用该默认端口。Port和TargetGroupInstances.N中的port二者必填其一。仅支持6081。</p>
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
                     * 获取<p>目标组绑定的后端服务器</p>
                     * @return TargetGroupInstances <p>目标组绑定的后端服务器</p>
                     * 
                     */
                    std::vector<TargetGroupInstance> GetTargetGroupInstances() const;

                    /**
                     * 设置<p>目标组绑定的后端服务器</p>
                     * @param _targetGroupInstances <p>目标组绑定的后端服务器</p>
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
                     * 获取<p>网关负载均衡目标组协议。- TENCENT_GENEVE ：GENEVE 标准协议- AWS_GENEVE：GENEVE 兼容协议</p>
                     * @return Protocol <p>网关负载均衡目标组协议。- TENCENT_GENEVE ：GENEVE 标准协议- AWS_GENEVE：GENEVE 兼容协议</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>网关负载均衡目标组协议。- TENCENT_GENEVE ：GENEVE 标准协议- AWS_GENEVE：GENEVE 兼容协议</p>
                     * @param _protocol <p>网关负载均衡目标组协议。- TENCENT_GENEVE ：GENEVE 标准协议- AWS_GENEVE：GENEVE 兼容协议</p>
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
                     * 获取<p>健康检查设置。</p>
                     * @return HealthCheck <p>健康检查设置。</p>
                     * 
                     */
                    TargetGroupHealthCheck GetHealthCheck() const;

                    /**
                     * 设置<p>健康检查设置。</p>
                     * @param _healthCheck <p>健康检查设置。</p>
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
                     * 获取<p>均衡算法。</p><ul><li>IP_HASH_2_CONSISTENT：二元组一致性哈希</li><li>IP_HASH_3_CONSISTENT：三元组一致性哈希</li><li>IP_HASH_5_CONSISTENT：五元组一致性哈希</li></ul>
                     * @return ScheduleAlgorithm <p>均衡算法。</p><ul><li>IP_HASH_2_CONSISTENT：二元组一致性哈希</li><li>IP_HASH_3_CONSISTENT：三元组一致性哈希</li><li>IP_HASH_5_CONSISTENT：五元组一致性哈希</li></ul>
                     * 
                     */
                    std::string GetScheduleAlgorithm() const;

                    /**
                     * 设置<p>均衡算法。</p><ul><li>IP_HASH_2_CONSISTENT：二元组一致性哈希</li><li>IP_HASH_3_CONSISTENT：三元组一致性哈希</li><li>IP_HASH_5_CONSISTENT：五元组一致性哈希</li></ul>
                     * @param _scheduleAlgorithm <p>均衡算法。</p><ul><li>IP_HASH_2_CONSISTENT：二元组一致性哈希</li><li>IP_HASH_3_CONSISTENT：三元组一致性哈希</li><li>IP_HASH_5_CONSISTENT：五元组一致性哈希</li></ul>
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
                     * 获取<p>是否支持全死全活。默认支持。</p>
                     * @return AllDeadToAlive <p>是否支持全死全活。默认支持。</p>
                     * 
                     */
                    bool GetAllDeadToAlive() const;

                    /**
                     * 设置<p>是否支持全死全活。默认支持。</p>
                     * @param _allDeadToAlive <p>是否支持全死全活。默认支持。</p>
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
                     * 获取<p>标签。</p>
                     * @return Tags <p>标签。</p>
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置<p>标签。</p>
                     * @param _tags <p>标签。</p>
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
                     * 获取<p>流量分发方式</p><ul><li>STATELESS：无状态</li><li>STATEFUL： 有状态</li></ul>
                     * @return ForwardingMode <p>流量分发方式</p><ul><li>STATELESS：无状态</li><li>STATEFUL： 有状态</li></ul>
                     * 
                     */
                    std::string GetForwardingMode() const;

                    /**
                     * 设置<p>流量分发方式</p><ul><li>STATELESS：无状态</li><li>STATEFUL： 有状态</li></ul>
                     * @param _forwardingMode <p>流量分发方式</p><ul><li>STATELESS：无状态</li><li>STATEFUL： 有状态</li></ul>
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
                     * 获取<p>TCP协议连接空闲超时时间，可配置60s-6000s，默认350s。</p>
                     * @return TcpIdleConnectTimeout <p>TCP协议连接空闲超时时间，可配置60s-6000s，默认350s。</p>
                     * 
                     */
                    int64_t GetTcpIdleConnectTimeout() const;

                    /**
                     * 设置<p>TCP协议连接空闲超时时间，可配置60s-6000s，默认350s。</p>
                     * @param _tcpIdleConnectTimeout <p>TCP协议连接空闲超时时间，可配置60s-6000s，默认350s。</p>
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
                     * 获取<p>其他协议连接空闲超时时间，可配置5s-180s，默认120s</p>
                     * @return OthersIdleConnectTimeout <p>其他协议连接空闲超时时间，可配置5s-180s，默认120s</p>
                     * 
                     */
                    int64_t GetOthersIdleConnectTimeout() const;

                    /**
                     * 设置<p>其他协议连接空闲超时时间，可配置5s-180s，默认120s</p>
                     * @param _othersIdleConnectTimeout <p>其他协议连接空闲超时时间，可配置5s-180s，默认120s</p>
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
                     * 获取<p>重新调度功能内的解绑后端服务开关，开关打开后解绑后端服务会触发重新调度。</p>
                     * @return RescheduleUnbindRs <p>重新调度功能内的解绑后端服务开关，开关打开后解绑后端服务会触发重新调度。</p>
                     * 
                     */
                    bool GetRescheduleUnbindRs() const;

                    /**
                     * 设置<p>重新调度功能内的解绑后端服务开关，开关打开后解绑后端服务会触发重新调度。</p>
                     * @param _rescheduleUnbindRs <p>重新调度功能内的解绑后端服务开关，开关打开后解绑后端服务会触发重新调度。</p>
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
                     * 获取<p>解绑RS后开启重调度的时间，可配置0s-3600s，默认0s</p>
                     * @return RescheduleUnbindRsStartTime <p>解绑RS后开启重调度的时间，可配置0s-3600s，默认0s</p>
                     * 
                     */
                    int64_t GetRescheduleUnbindRsStartTime() const;

                    /**
                     * 设置<p>解绑RS后开启重调度的时间，可配置0s-3600s，默认0s</p>
                     * @param _rescheduleUnbindRsStartTime <p>解绑RS后开启重调度的时间，可配置0s-3600s，默认0s</p>
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
                     * 获取<p>重新调度功能内的后端服务健康探测异常开关，开关打开后后端服务健康检查异常会触发重新调度。</p>
                     * @return RescheduleUnhealthy <p>重新调度功能内的后端服务健康探测异常开关，开关打开后后端服务健康检查异常会触发重新调度。</p>
                     * 
                     */
                    bool GetRescheduleUnhealthy() const;

                    /**
                     * 设置<p>重新调度功能内的后端服务健康探测异常开关，开关打开后后端服务健康检查异常会触发重新调度。</p>
                     * @param _rescheduleUnhealthy <p>重新调度功能内的后端服务健康探测异常开关，开关打开后后端服务健康检查异常会触发重新调度。</p>
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
                     * 获取<p>后端服务健康探测异常后开启重调度的时间，可配置0s-3600s，默认0s</p>
                     * @return RescheduleUnhealthyStartTime <p>后端服务健康探测异常后开启重调度的时间，可配置0s-3600s，默认0s</p>
                     * 
                     */
                    int64_t GetRescheduleUnhealthyStartTime() const;

                    /**
                     * 设置<p>后端服务健康探测异常后开启重调度的时间，可配置0s-3600s，默认0s</p>
                     * @param _rescheduleUnhealthyStartTime <p>后端服务健康探测异常后开启重调度的时间，可配置0s-3600s，默认0s</p>
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
                     * <p>目标组名称，限定60个字符。</p>
                     */
                    std::string m_targetGroupName;
                    bool m_targetGroupNameHasBeenSet;

                    /**
                     * <p>网关负载均衡后端目标组所属的网络 ID，如vpc-12345678，可以通过 <a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a>  接口获取。 不填此参数则默认为DefaultVPC。</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>目标组的默认端口， 后续添加服务器时可使用该默认端口。Port和TargetGroupInstances.N中的port二者必填其一。仅支持6081。</p>
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>目标组绑定的后端服务器</p>
                     */
                    std::vector<TargetGroupInstance> m_targetGroupInstances;
                    bool m_targetGroupInstancesHasBeenSet;

                    /**
                     * <p>网关负载均衡目标组协议。- TENCENT_GENEVE ：GENEVE 标准协议- AWS_GENEVE：GENEVE 兼容协议</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>健康检查设置。</p>
                     */
                    TargetGroupHealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * <p>均衡算法。</p><ul><li>IP_HASH_2_CONSISTENT：二元组一致性哈希</li><li>IP_HASH_3_CONSISTENT：三元组一致性哈希</li><li>IP_HASH_5_CONSISTENT：五元组一致性哈希</li></ul>
                     */
                    std::string m_scheduleAlgorithm;
                    bool m_scheduleAlgorithmHasBeenSet;

                    /**
                     * <p>是否支持全死全活。默认支持。</p>
                     */
                    bool m_allDeadToAlive;
                    bool m_allDeadToAliveHasBeenSet;

                    /**
                     * <p>标签。</p>
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>流量分发方式</p><ul><li>STATELESS：无状态</li><li>STATEFUL： 有状态</li></ul>
                     */
                    std::string m_forwardingMode;
                    bool m_forwardingModeHasBeenSet;

                    /**
                     * <p>TCP协议连接空闲超时时间，可配置60s-6000s，默认350s。</p>
                     */
                    int64_t m_tcpIdleConnectTimeout;
                    bool m_tcpIdleConnectTimeoutHasBeenSet;

                    /**
                     * <p>其他协议连接空闲超时时间，可配置5s-180s，默认120s</p>
                     */
                    int64_t m_othersIdleConnectTimeout;
                    bool m_othersIdleConnectTimeoutHasBeenSet;

                    /**
                     * <p>重新调度功能内的解绑后端服务开关，开关打开后解绑后端服务会触发重新调度。</p>
                     */
                    bool m_rescheduleUnbindRs;
                    bool m_rescheduleUnbindRsHasBeenSet;

                    /**
                     * <p>解绑RS后开启重调度的时间，可配置0s-3600s，默认0s</p>
                     */
                    int64_t m_rescheduleUnbindRsStartTime;
                    bool m_rescheduleUnbindRsStartTimeHasBeenSet;

                    /**
                     * <p>重新调度功能内的后端服务健康探测异常开关，开关打开后后端服务健康检查异常会触发重新调度。</p>
                     */
                    bool m_rescheduleUnhealthy;
                    bool m_rescheduleUnhealthyHasBeenSet;

                    /**
                     * <p>后端服务健康探测异常后开启重调度的时间，可配置0s-3600s，默认0s</p>
                     */
                    int64_t m_rescheduleUnhealthyStartTime;
                    bool m_rescheduleUnhealthyStartTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_CREATETARGETGROUPREQUEST_H_
