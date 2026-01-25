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
                     * 获取<p>目标组的ID，可以通过<a href="https://cloud.tencent.com/document/product/214/40554">DescribeTargetGroups</a>获取。</p>
                     * @return TargetGroupId <p>目标组的ID，可以通过<a href="https://cloud.tencent.com/document/product/214/40554">DescribeTargetGroups</a>获取。</p>
                     * 
                     */
                    std::string GetTargetGroupId() const;

                    /**
                     * 设置<p>目标组的ID，可以通过<a href="https://cloud.tencent.com/document/product/214/40554">DescribeTargetGroups</a>获取。</p>
                     * @param _targetGroupId <p>目标组的ID，可以通过<a href="https://cloud.tencent.com/document/product/214/40554">DescribeTargetGroups</a>获取。</p>
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
                     * 获取<p>目标组的新名称。命名规则：1-80 个英文字母、汉字等国际通用语言字符，数字，连接线“-”、下划线“_”等常见字符（禁止Unicode补充字符，如emoji表情、生僻汉字等）。</p>
                     * @return TargetGroupName <p>目标组的新名称。命名规则：1-80 个英文字母、汉字等国际通用语言字符，数字，连接线“-”、下划线“_”等常见字符（禁止Unicode补充字符，如emoji表情、生僻汉字等）。</p>
                     * 
                     */
                    std::string GetTargetGroupName() const;

                    /**
                     * 设置<p>目标组的新名称。命名规则：1-80 个英文字母、汉字等国际通用语言字符，数字，连接线“-”、下划线“_”等常见字符（禁止Unicode补充字符，如emoji表情、生僻汉字等）。</p>
                     * @param _targetGroupName <p>目标组的新名称。命名规则：1-80 个英文字母、汉字等国际通用语言字符，数字，连接线“-”、下划线“_”等常见字符（禁止Unicode补充字符，如emoji表情、生僻汉字等）。</p>
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
                     * 获取<p>健康检查详情。</p>
                     * @return HealthCheck <p>健康检查详情。</p>
                     * 
                     */
                    TargetGroupHealthCheck GetHealthCheck() const;

                    /**
                     * 设置<p>健康检查详情。</p>
                     * @param _healthCheck <p>健康检查详情。</p>
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
                     * 获取<p>是否支持全死全活。</p>
                     * @return AllDeadToAlive <p>是否支持全死全活。</p>
                     * 
                     */
                    bool GetAllDeadToAlive() const;

                    /**
                     * 设置<p>是否支持全死全活。</p>
                     * @param _allDeadToAlive <p>是否支持全死全活。</p>
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
                     * <p>目标组的ID，可以通过<a href="https://cloud.tencent.com/document/product/214/40554">DescribeTargetGroups</a>获取。</p>
                     */
                    std::string m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                    /**
                     * <p>目标组的新名称。命名规则：1-80 个英文字母、汉字等国际通用语言字符，数字，连接线“-”、下划线“_”等常见字符（禁止Unicode补充字符，如emoji表情、生僻汉字等）。</p>
                     */
                    std::string m_targetGroupName;
                    bool m_targetGroupNameHasBeenSet;

                    /**
                     * <p>健康检查详情。</p>
                     */
                    TargetGroupHealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * <p>是否支持全死全活。</p>
                     */
                    bool m_allDeadToAlive;
                    bool m_allDeadToAliveHasBeenSet;

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

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_MODIFYTARGETGROUPATTRIBUTEREQUEST_H_
