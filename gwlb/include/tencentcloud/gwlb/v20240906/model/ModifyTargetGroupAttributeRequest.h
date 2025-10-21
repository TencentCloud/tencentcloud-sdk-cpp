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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_MODIFYTARGETGROUPATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_MODIFYTARGETGROUPATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gwlb/v20240906/model/TargetGroupHealthCheck.h>


namespace TencentCloud
{
    namespace Gwlb
    {
        namespace V20240906
        {
            namespace Model
            {
                /**
                * ModifyTargetGroupAttribute请求参数结构体
                */
                class ModifyTargetGroupAttributeRequest : public AbstractModel
                {
                public:
                    ModifyTargetGroupAttributeRequest();
                    ~ModifyTargetGroupAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取目标组的ID，可以通过[DescribeTargetGroups](https://cloud.tencent.com/document/product/214/40554)获取。
                     * @return TargetGroupId 目标组的ID，可以通过[DescribeTargetGroups](https://cloud.tencent.com/document/product/214/40554)获取。
                     * 
                     */
                    std::string GetTargetGroupId() const;

                    /**
                     * 设置目标组的ID，可以通过[DescribeTargetGroups](https://cloud.tencent.com/document/product/214/40554)获取。
                     * @param _targetGroupId 目标组的ID，可以通过[DescribeTargetGroups](https://cloud.tencent.com/document/product/214/40554)获取。
                     * 
                     */
                    void SetTargetGroupId(const std::string& _targetGroupId);

                    /**
                     * 判断参数 TargetGroupId 是否已赋值
                     * @return TargetGroupId 是否已赋值
                     * 
                     */
                    bool TargetGroupIdHasBeenSet() const;

                    /**
                     * 获取目标组的新名称。
                     * @return TargetGroupName 目标组的新名称。
                     * 
                     */
                    std::string GetTargetGroupName() const;

                    /**
                     * 设置目标组的新名称。
                     * @param _targetGroupName 目标组的新名称。
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
                     * 获取健康检查详情。
                     * @return HealthCheck 健康检查详情。
                     * 
                     */
                    TargetGroupHealthCheck GetHealthCheck() const;

                    /**
                     * 设置健康检查详情。
                     * @param _healthCheck 健康检查详情。
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
                     * 获取是否支持全死全活。
                     * @return AllDeadToAlive 是否支持全死全活。
                     * 
                     */
                    bool GetAllDeadToAlive() const;

                    /**
                     * 设置是否支持全死全活。
                     * @param _allDeadToAlive 是否支持全死全活。
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
                     * 目标组的ID，可以通过[DescribeTargetGroups](https://cloud.tencent.com/document/product/214/40554)获取。
                     */
                    std::string m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                    /**
                     * 目标组的新名称。
                     */
                    std::string m_targetGroupName;
                    bool m_targetGroupNameHasBeenSet;

                    /**
                     * 健康检查详情。
                     */
                    TargetGroupHealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * 是否支持全死全活。
                     */
                    bool m_allDeadToAlive;
                    bool m_allDeadToAliveHasBeenSet;

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

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_MODIFYTARGETGROUPATTRIBUTEREQUEST_H_
