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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQCLUSTERACCESSINFO_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQCLUSTERACCESSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/PrometheusEndpointInfo.h>
#include <tencentcloud/tdmq/v20200217/model/VpcEndpointInfo.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * RabbitMQ集群访问信息
                */
                class RabbitMQClusterAccessInfo : public AbstractModel
                {
                public:
                    RabbitMQClusterAccessInfo();
                    ~RabbitMQClusterAccessInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群公网接入地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicAccessEndpoint 集群公网接入地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPublicAccessEndpoint() const;

                    /**
                     * 设置集群公网接入地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicAccessEndpoint 集群公网接入地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicAccessEndpoint(const std::string& _publicAccessEndpoint);

                    /**
                     * 判断参数 PublicAccessEndpoint 是否已赋值
                     * @return PublicAccessEndpoint 是否已赋值
                     * 
                     */
                    bool PublicAccessEndpointHasBeenSet() const;

                    /**
                     * 获取集群控制台访问地址
                     * @return WebConsoleEndpoint 集群控制台访问地址
                     * 
                     */
                    std::string GetWebConsoleEndpoint() const;

                    /**
                     * 设置集群控制台访问地址
                     * @param _webConsoleEndpoint 集群控制台访问地址
                     * 
                     */
                    void SetWebConsoleEndpoint(const std::string& _webConsoleEndpoint);

                    /**
                     * 判断参数 WebConsoleEndpoint 是否已赋值
                     * @return WebConsoleEndpoint 是否已赋值
                     * 
                     */
                    bool WebConsoleEndpointHasBeenSet() const;

                    /**
                     * 获取集群控制台登录用户名
                     * @return WebConsoleUsername 集群控制台登录用户名
                     * 
                     */
                    std::string GetWebConsoleUsername() const;

                    /**
                     * 设置集群控制台登录用户名
                     * @param _webConsoleUsername 集群控制台登录用户名
                     * 
                     */
                    void SetWebConsoleUsername(const std::string& _webConsoleUsername);

                    /**
                     * 判断参数 WebConsoleUsername 是否已赋值
                     * @return WebConsoleUsername 是否已赋值
                     * 
                     */
                    bool WebConsoleUsernameHasBeenSet() const;

                    /**
                     * 获取集群控制台登录密码
                     * @return WebConsolePassword 集群控制台登录密码
                     * 
                     */
                    std::string GetWebConsolePassword() const;

                    /**
                     * 设置集群控制台登录密码
                     * @param _webConsolePassword 集群控制台登录密码
                     * 
                     */
                    void SetWebConsolePassword(const std::string& _webConsolePassword);

                    /**
                     * 判断参数 WebConsolePassword 是否已赋值
                     * @return WebConsolePassword 是否已赋值
                     * 
                     */
                    bool WebConsolePasswordHasBeenSet() const;

                    /**
                     * 获取已废弃
                     * @return PublicAccessEndpointStatus 已废弃
                     * 
                     */
                    bool GetPublicAccessEndpointStatus() const;

                    /**
                     * 设置已废弃
                     * @param _publicAccessEndpointStatus 已废弃
                     * 
                     */
                    void SetPublicAccessEndpointStatus(const bool& _publicAccessEndpointStatus);

                    /**
                     * 判断参数 PublicAccessEndpointStatus 是否已赋值
                     * @return PublicAccessEndpointStatus 是否已赋值
                     * 
                     */
                    bool PublicAccessEndpointStatusHasBeenSet() const;

                    /**
                     * 获取已废弃
                     * @return PublicControlConsoleSwitchStatus 已废弃
                     * 
                     */
                    bool GetPublicControlConsoleSwitchStatus() const;

                    /**
                     * 设置已废弃
                     * @param _publicControlConsoleSwitchStatus 已废弃
                     * 
                     */
                    void SetPublicControlConsoleSwitchStatus(const bool& _publicControlConsoleSwitchStatus);

                    /**
                     * 判断参数 PublicControlConsoleSwitchStatus 是否已赋值
                     * @return PublicControlConsoleSwitchStatus 是否已赋值
                     * 
                     */
                    bool PublicControlConsoleSwitchStatusHasBeenSet() const;

                    /**
                     * 获取已废弃
                     * @return VpcControlConsoleSwitchStatus 已废弃
                     * 
                     */
                    bool GetVpcControlConsoleSwitchStatus() const;

                    /**
                     * 设置已废弃
                     * @param _vpcControlConsoleSwitchStatus 已废弃
                     * 
                     */
                    void SetVpcControlConsoleSwitchStatus(const bool& _vpcControlConsoleSwitchStatus);

                    /**
                     * 判断参数 VpcControlConsoleSwitchStatus 是否已赋值
                     * @return VpcControlConsoleSwitchStatus 是否已赋值
                     * 
                     */
                    bool VpcControlConsoleSwitchStatusHasBeenSet() const;

                    /**
                     * 获取Vpc管控台访问地址，示例值，http://1.1.1.1:15672
                     * @return VpcWebConsoleEndpoint Vpc管控台访问地址，示例值，http://1.1.1.1:15672
                     * 
                     */
                    std::string GetVpcWebConsoleEndpoint() const;

                    /**
                     * 设置Vpc管控台访问地址，示例值，http://1.1.1.1:15672
                     * @param _vpcWebConsoleEndpoint Vpc管控台访问地址，示例值，http://1.1.1.1:15672
                     * 
                     */
                    void SetVpcWebConsoleEndpoint(const std::string& _vpcWebConsoleEndpoint);

                    /**
                     * 判断参数 VpcWebConsoleEndpoint 是否已赋值
                     * @return VpcWebConsoleEndpoint 是否已赋值
                     * 
                     */
                    bool VpcWebConsoleEndpointHasBeenSet() const;

                    /**
                     * 获取公网管控台开关状态，示例值，OFF/ON/CREATING/DELETING
                     * @return PublicWebConsoleSwitchStatus 公网管控台开关状态，示例值，OFF/ON/CREATING/DELETING
                     * 
                     */
                    std::string GetPublicWebConsoleSwitchStatus() const;

                    /**
                     * 设置公网管控台开关状态，示例值，OFF/ON/CREATING/DELETING
                     * @param _publicWebConsoleSwitchStatus 公网管控台开关状态，示例值，OFF/ON/CREATING/DELETING
                     * 
                     */
                    void SetPublicWebConsoleSwitchStatus(const std::string& _publicWebConsoleSwitchStatus);

                    /**
                     * 判断参数 PublicWebConsoleSwitchStatus 是否已赋值
                     * @return PublicWebConsoleSwitchStatus 是否已赋值
                     * 
                     */
                    bool PublicWebConsoleSwitchStatusHasBeenSet() const;

                    /**
                     * 获取Vpc管控台开关状态，示例值，
OFF/ON/CREATING/DELETING
                     * @return VpcWebConsoleSwitchStatus Vpc管控台开关状态，示例值，
OFF/ON/CREATING/DELETING
                     * 
                     */
                    std::string GetVpcWebConsoleSwitchStatus() const;

                    /**
                     * 设置Vpc管控台开关状态，示例值，
OFF/ON/CREATING/DELETING
                     * @param _vpcWebConsoleSwitchStatus Vpc管控台开关状态，示例值，
OFF/ON/CREATING/DELETING
                     * 
                     */
                    void SetVpcWebConsoleSwitchStatus(const std::string& _vpcWebConsoleSwitchStatus);

                    /**
                     * 判断参数 VpcWebConsoleSwitchStatus 是否已赋值
                     * @return VpcWebConsoleSwitchStatus 是否已赋值
                     * 
                     */
                    bool VpcWebConsoleSwitchStatusHasBeenSet() const;

                    /**
                     * 获取公网管控台开关状态，示例值，OFF/ON/CREATING/DELETING
                     * @return PublicDataStreamStatus 公网管控台开关状态，示例值，OFF/ON/CREATING/DELETING
                     * 
                     */
                    std::string GetPublicDataStreamStatus() const;

                    /**
                     * 设置公网管控台开关状态，示例值，OFF/ON/CREATING/DELETING
                     * @param _publicDataStreamStatus 公网管控台开关状态，示例值，OFF/ON/CREATING/DELETING
                     * 
                     */
                    void SetPublicDataStreamStatus(const std::string& _publicDataStreamStatus);

                    /**
                     * 判断参数 PublicDataStreamStatus 是否已赋值
                     * @return PublicDataStreamStatus 是否已赋值
                     * 
                     */
                    bool PublicDataStreamStatusHasBeenSet() const;

                    /**
                     * 获取Prometheus信息
                     * @return PrometheusEndpointInfo Prometheus信息
                     * 
                     */
                    PrometheusEndpointInfo GetPrometheusEndpointInfo() const;

                    /**
                     * 设置Prometheus信息
                     * @param _prometheusEndpointInfo Prometheus信息
                     * 
                     */
                    void SetPrometheusEndpointInfo(const PrometheusEndpointInfo& _prometheusEndpointInfo);

                    /**
                     * 判断参数 PrometheusEndpointInfo 是否已赋值
                     * @return PrometheusEndpointInfo 是否已赋值
                     * 
                     */
                    bool PrometheusEndpointInfoHasBeenSet() const;

                    /**
                     * 获取公网域名接入点
                     * @return WebConsoleDomainEndpoint 公网域名接入点
                     * 
                     */
                    std::string GetWebConsoleDomainEndpoint() const;

                    /**
                     * 设置公网域名接入点
                     * @param _webConsoleDomainEndpoint 公网域名接入点
                     * 
                     */
                    void SetWebConsoleDomainEndpoint(const std::string& _webConsoleDomainEndpoint);

                    /**
                     * 判断参数 WebConsoleDomainEndpoint 是否已赋值
                     * @return WebConsoleDomainEndpoint 是否已赋值
                     * 
                     */
                    bool WebConsoleDomainEndpointHasBeenSet() const;

                    /**
                     * 获取控制面所使用的VPC信息
                     * @return ControlPlaneEndpointInfo 控制面所使用的VPC信息
                     * 
                     */
                    VpcEndpointInfo GetControlPlaneEndpointInfo() const;

                    /**
                     * 设置控制面所使用的VPC信息
                     * @param _controlPlaneEndpointInfo 控制面所使用的VPC信息
                     * 
                     */
                    void SetControlPlaneEndpointInfo(const VpcEndpointInfo& _controlPlaneEndpointInfo);

                    /**
                     * 判断参数 ControlPlaneEndpointInfo 是否已赋值
                     * @return ControlPlaneEndpointInfo 是否已赋值
                     * 
                     */
                    bool ControlPlaneEndpointInfoHasBeenSet() const;

                private:

                    /**
                     * 集群公网接入地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publicAccessEndpoint;
                    bool m_publicAccessEndpointHasBeenSet;

                    /**
                     * 集群控制台访问地址
                     */
                    std::string m_webConsoleEndpoint;
                    bool m_webConsoleEndpointHasBeenSet;

                    /**
                     * 集群控制台登录用户名
                     */
                    std::string m_webConsoleUsername;
                    bool m_webConsoleUsernameHasBeenSet;

                    /**
                     * 集群控制台登录密码
                     */
                    std::string m_webConsolePassword;
                    bool m_webConsolePasswordHasBeenSet;

                    /**
                     * 已废弃
                     */
                    bool m_publicAccessEndpointStatus;
                    bool m_publicAccessEndpointStatusHasBeenSet;

                    /**
                     * 已废弃
                     */
                    bool m_publicControlConsoleSwitchStatus;
                    bool m_publicControlConsoleSwitchStatusHasBeenSet;

                    /**
                     * 已废弃
                     */
                    bool m_vpcControlConsoleSwitchStatus;
                    bool m_vpcControlConsoleSwitchStatusHasBeenSet;

                    /**
                     * Vpc管控台访问地址，示例值，http://1.1.1.1:15672
                     */
                    std::string m_vpcWebConsoleEndpoint;
                    bool m_vpcWebConsoleEndpointHasBeenSet;

                    /**
                     * 公网管控台开关状态，示例值，OFF/ON/CREATING/DELETING
                     */
                    std::string m_publicWebConsoleSwitchStatus;
                    bool m_publicWebConsoleSwitchStatusHasBeenSet;

                    /**
                     * Vpc管控台开关状态，示例值，
OFF/ON/CREATING/DELETING
                     */
                    std::string m_vpcWebConsoleSwitchStatus;
                    bool m_vpcWebConsoleSwitchStatusHasBeenSet;

                    /**
                     * 公网管控台开关状态，示例值，OFF/ON/CREATING/DELETING
                     */
                    std::string m_publicDataStreamStatus;
                    bool m_publicDataStreamStatusHasBeenSet;

                    /**
                     * Prometheus信息
                     */
                    PrometheusEndpointInfo m_prometheusEndpointInfo;
                    bool m_prometheusEndpointInfoHasBeenSet;

                    /**
                     * 公网域名接入点
                     */
                    std::string m_webConsoleDomainEndpoint;
                    bool m_webConsoleDomainEndpointHasBeenSet;

                    /**
                     * 控制面所使用的VPC信息
                     */
                    VpcEndpointInfo m_controlPlaneEndpointInfo;
                    bool m_controlPlaneEndpointInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQCLUSTERACCESSINFO_H_
