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
                     * 获取<p>集群公网接入地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicAccessEndpoint <p>集群公网接入地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPublicAccessEndpoint() const;

                    /**
                     * 设置<p>集群公网接入地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicAccessEndpoint <p>集群公网接入地址</p>
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
                     * 获取<p>集群 Web 控制台公网访问地址</p>
                     * @return WebConsoleEndpoint <p>集群 Web 控制台公网访问地址</p>
                     * 
                     */
                    std::string GetWebConsoleEndpoint() const;

                    /**
                     * 设置<p>集群 Web 控制台公网访问地址</p>
                     * @param _webConsoleEndpoint <p>集群 Web 控制台公网访问地址</p>
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
                     * 获取<p>集群 Web 控制台登录用户名</p>
                     * @return WebConsoleUsername <p>集群 Web 控制台登录用户名</p>
                     * 
                     */
                    std::string GetWebConsoleUsername() const;

                    /**
                     * 设置<p>集群 Web 控制台登录用户名</p>
                     * @param _webConsoleUsername <p>集群 Web 控制台登录用户名</p>
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
                     * 获取<p>集群 Web 控制台登录密码</p>
                     * @return WebConsolePassword <p>集群 Web 控制台登录密码</p>
                     * 
                     */
                    std::string GetWebConsolePassword() const;

                    /**
                     * 设置<p>集群 Web 控制台登录密码</p>
                     * @param _webConsolePassword <p>集群 Web 控制台登录密码</p>
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
                     * 获取<p>已废弃</p>
                     * @return PublicAccessEndpointStatus <p>已废弃</p>
                     * 
                     */
                    bool GetPublicAccessEndpointStatus() const;

                    /**
                     * 设置<p>已废弃</p>
                     * @param _publicAccessEndpointStatus <p>已废弃</p>
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
                     * 获取<p>已废弃</p>
                     * @return PublicControlConsoleSwitchStatus <p>已废弃</p>
                     * 
                     */
                    bool GetPublicControlConsoleSwitchStatus() const;

                    /**
                     * 设置<p>已废弃</p>
                     * @param _publicControlConsoleSwitchStatus <p>已废弃</p>
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
                     * 获取<p>已废弃</p>
                     * @return VpcControlConsoleSwitchStatus <p>已废弃</p>
                     * 
                     */
                    bool GetVpcControlConsoleSwitchStatus() const;

                    /**
                     * 设置<p>已废弃</p>
                     * @param _vpcControlConsoleSwitchStatus <p>已废弃</p>
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
                     * 获取<p>Web 管控台 VPC 访问地址</p>
                     * @return VpcWebConsoleEndpoint <p>Web 管控台 VPC 访问地址</p>
                     * 
                     */
                    std::string GetVpcWebConsoleEndpoint() const;

                    /**
                     * 设置<p>Web 管控台 VPC 访问地址</p>
                     * @param _vpcWebConsoleEndpoint <p>Web 管控台 VPC 访问地址</p>
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
                     * 获取<p>Web 控制台公网访问开关状态</p><p>枚举值：</p><ul><li>OFF： 已关闭</li><li>ON： 已开启</li><li>CREATING： 创建中</li><li>DELETING： 删除中</li><li>CREATE_FAILURE： 创建失败</li><li>DELETE_FAILURE： 删除失败</li></ul>
                     * @return PublicWebConsoleSwitchStatus <p>Web 控制台公网访问开关状态</p><p>枚举值：</p><ul><li>OFF： 已关闭</li><li>ON： 已开启</li><li>CREATING： 创建中</li><li>DELETING： 删除中</li><li>CREATE_FAILURE： 创建失败</li><li>DELETE_FAILURE： 删除失败</li></ul>
                     * 
                     */
                    std::string GetPublicWebConsoleSwitchStatus() const;

                    /**
                     * 设置<p>Web 控制台公网访问开关状态</p><p>枚举值：</p><ul><li>OFF： 已关闭</li><li>ON： 已开启</li><li>CREATING： 创建中</li><li>DELETING： 删除中</li><li>CREATE_FAILURE： 创建失败</li><li>DELETE_FAILURE： 删除失败</li></ul>
                     * @param _publicWebConsoleSwitchStatus <p>Web 控制台公网访问开关状态</p><p>枚举值：</p><ul><li>OFF： 已关闭</li><li>ON： 已开启</li><li>CREATING： 创建中</li><li>DELETING： 删除中</li><li>CREATE_FAILURE： 创建失败</li><li>DELETE_FAILURE： 删除失败</li></ul>
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
                     * 获取<p>Web 控制台 VPC 访问开关状态</p><p>枚举值：</p><ul><li>OFF： 已关闭</li><li>ON： 已开启</li><li>CREATING： 创建中</li><li>DELETING： 删除中</li><li>CREATE_FAILURE： 创建失败</li><li>DELETE_FAILURE： 删除失败</li></ul>
                     * @return VpcWebConsoleSwitchStatus <p>Web 控制台 VPC 访问开关状态</p><p>枚举值：</p><ul><li>OFF： 已关闭</li><li>ON： 已开启</li><li>CREATING： 创建中</li><li>DELETING： 删除中</li><li>CREATE_FAILURE： 创建失败</li><li>DELETE_FAILURE： 删除失败</li></ul>
                     * 
                     */
                    std::string GetVpcWebConsoleSwitchStatus() const;

                    /**
                     * 设置<p>Web 控制台 VPC 访问开关状态</p><p>枚举值：</p><ul><li>OFF： 已关闭</li><li>ON： 已开启</li><li>CREATING： 创建中</li><li>DELETING： 删除中</li><li>CREATE_FAILURE： 创建失败</li><li>DELETE_FAILURE： 删除失败</li></ul>
                     * @param _vpcWebConsoleSwitchStatus <p>Web 控制台 VPC 访问开关状态</p><p>枚举值：</p><ul><li>OFF： 已关闭</li><li>ON： 已开启</li><li>CREATING： 创建中</li><li>DELETING： 删除中</li><li>CREATE_FAILURE： 创建失败</li><li>DELETE_FAILURE： 删除失败</li></ul>
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
                     * 获取<p>公网接入点开关状态</p><p>枚举值：</p><ul><li>OFF： 已关闭</li><li>ON： 已开启</li><li>CREATING： 创建中</li><li>DELETING： 删除中</li><li>CREATE_FAILURE： 创建失败</li><li>DELETE_FAILURE： 删除失败</li></ul>
                     * @return PublicDataStreamStatus <p>公网接入点开关状态</p><p>枚举值：</p><ul><li>OFF： 已关闭</li><li>ON： 已开启</li><li>CREATING： 创建中</li><li>DELETING： 删除中</li><li>CREATE_FAILURE： 创建失败</li><li>DELETE_FAILURE： 删除失败</li></ul>
                     * 
                     */
                    std::string GetPublicDataStreamStatus() const;

                    /**
                     * 设置<p>公网接入点开关状态</p><p>枚举值：</p><ul><li>OFF： 已关闭</li><li>ON： 已开启</li><li>CREATING： 创建中</li><li>DELETING： 删除中</li><li>CREATE_FAILURE： 创建失败</li><li>DELETE_FAILURE： 删除失败</li></ul>
                     * @param _publicDataStreamStatus <p>公网接入点开关状态</p><p>枚举值：</p><ul><li>OFF： 已关闭</li><li>ON： 已开启</li><li>CREATING： 创建中</li><li>DELETING： 删除中</li><li>CREATE_FAILURE： 创建失败</li><li>DELETE_FAILURE： 删除失败</li></ul>
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
                     * 获取<p>Prometheus信息</p>
                     * @return PrometheusEndpointInfo <p>Prometheus信息</p>
                     * 
                     */
                    PrometheusEndpointInfo GetPrometheusEndpointInfo() const;

                    /**
                     * 设置<p>Prometheus信息</p>
                     * @param _prometheusEndpointInfo <p>Prometheus信息</p>
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
                     * 获取<p>公网域名接入点</p>
                     * @return WebConsoleDomainEndpoint <p>公网域名接入点</p>
                     * 
                     */
                    std::string GetWebConsoleDomainEndpoint() const;

                    /**
                     * 设置<p>公网域名接入点</p>
                     * @param _webConsoleDomainEndpoint <p>公网域名接入点</p>
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
                     * 获取<p>控制面所使用的VPC信息</p>
                     * @return ControlPlaneEndpointInfo <p>控制面所使用的VPC信息</p>
                     * 
                     */
                    VpcEndpointInfo GetControlPlaneEndpointInfo() const;

                    /**
                     * 设置<p>控制面所使用的VPC信息</p>
                     * @param _controlPlaneEndpointInfo <p>控制面所使用的VPC信息</p>
                     * 
                     */
                    void SetControlPlaneEndpointInfo(const VpcEndpointInfo& _controlPlaneEndpointInfo);

                    /**
                     * 判断参数 ControlPlaneEndpointInfo 是否已赋值
                     * @return ControlPlaneEndpointInfo 是否已赋值
                     * 
                     */
                    bool ControlPlaneEndpointInfoHasBeenSet() const;

                    /**
                     * 获取<p>TLS加密的数据流公网接入点</p>
                     * @return PublicTlsAccessEndpoint <p>TLS加密的数据流公网接入点</p>
                     * 
                     */
                    std::string GetPublicTlsAccessEndpoint() const;

                    /**
                     * 设置<p>TLS加密的数据流公网接入点</p>
                     * @param _publicTlsAccessEndpoint <p>TLS加密的数据流公网接入点</p>
                     * 
                     */
                    void SetPublicTlsAccessEndpoint(const std::string& _publicTlsAccessEndpoint);

                    /**
                     * 判断参数 PublicTlsAccessEndpoint 是否已赋值
                     * @return PublicTlsAccessEndpoint 是否已赋值
                     * 
                     */
                    bool PublicTlsAccessEndpointHasBeenSet() const;

                    /**
                     * 获取<p>公网IP是否复用</p>
                     * @return PublicIpReused <p>公网IP是否复用</p>
                     * 
                     */
                    bool GetPublicIpReused() const;

                    /**
                     * 设置<p>公网IP是否复用</p>
                     * @param _publicIpReused <p>公网IP是否复用</p>
                     * 
                     */
                    void SetPublicIpReused(const bool& _publicIpReused);

                    /**
                     * 判断参数 PublicIpReused 是否已赋值
                     * @return PublicIpReused 是否已赋值
                     * 
                     */
                    bool PublicIpReusedHasBeenSet() const;

                    /**
                     * 获取<p>Web 控制台公网访问操作的错误信息</p>
                     * @return PublicWebConsoleErrorMessage <p>Web 控制台公网访问操作的错误信息</p>
                     * 
                     */
                    std::string GetPublicWebConsoleErrorMessage() const;

                    /**
                     * 设置<p>Web 控制台公网访问操作的错误信息</p>
                     * @param _publicWebConsoleErrorMessage <p>Web 控制台公网访问操作的错误信息</p>
                     * 
                     */
                    void SetPublicWebConsoleErrorMessage(const std::string& _publicWebConsoleErrorMessage);

                    /**
                     * 判断参数 PublicWebConsoleErrorMessage 是否已赋值
                     * @return PublicWebConsoleErrorMessage 是否已赋值
                     * 
                     */
                    bool PublicWebConsoleErrorMessageHasBeenSet() const;

                    /**
                     * 获取<p>Web 控制台 VPC 访问操作的错误信息</p>
                     * @return VpcWebConsoleErrorMessage <p>Web 控制台 VPC 访问操作的错误信息</p>
                     * 
                     */
                    std::string GetVpcWebConsoleErrorMessage() const;

                    /**
                     * 设置<p>Web 控制台 VPC 访问操作的错误信息</p>
                     * @param _vpcWebConsoleErrorMessage <p>Web 控制台 VPC 访问操作的错误信息</p>
                     * 
                     */
                    void SetVpcWebConsoleErrorMessage(const std::string& _vpcWebConsoleErrorMessage);

                    /**
                     * 判断参数 VpcWebConsoleErrorMessage 是否已赋值
                     * @return VpcWebConsoleErrorMessage 是否已赋值
                     * 
                     */
                    bool VpcWebConsoleErrorMessageHasBeenSet() const;

                    /**
                     * 获取<p>公网接入点操作的错误信息</p>
                     * @return PublicDataStreamErrorMessage <p>公网接入点操作的错误信息</p>
                     * 
                     */
                    std::string GetPublicDataStreamErrorMessage() const;

                    /**
                     * 设置<p>公网接入点操作的错误信息</p>
                     * @param _publicDataStreamErrorMessage <p>公网接入点操作的错误信息</p>
                     * 
                     */
                    void SetPublicDataStreamErrorMessage(const std::string& _publicDataStreamErrorMessage);

                    /**
                     * 判断参数 PublicDataStreamErrorMessage 是否已赋值
                     * @return PublicDataStreamErrorMessage 是否已赋值
                     * 
                     */
                    bool PublicDataStreamErrorMessageHasBeenSet() const;

                    /**
                     * 获取<p>公网Stream接入点</p>
                     * @return PublicStreamAccessEndpoint <p>公网Stream接入点</p>
                     * 
                     */
                    std::string GetPublicStreamAccessEndpoint() const;

                    /**
                     * 设置<p>公网Stream接入点</p>
                     * @param _publicStreamAccessEndpoint <p>公网Stream接入点</p>
                     * 
                     */
                    void SetPublicStreamAccessEndpoint(const std::string& _publicStreamAccessEndpoint);

                    /**
                     * 判断参数 PublicStreamAccessEndpoint 是否已赋值
                     * @return PublicStreamAccessEndpoint 是否已赋值
                     * 
                     */
                    bool PublicStreamAccessEndpointHasBeenSet() const;

                private:

                    /**
                     * <p>集群公网接入地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publicAccessEndpoint;
                    bool m_publicAccessEndpointHasBeenSet;

                    /**
                     * <p>集群 Web 控制台公网访问地址</p>
                     */
                    std::string m_webConsoleEndpoint;
                    bool m_webConsoleEndpointHasBeenSet;

                    /**
                     * <p>集群 Web 控制台登录用户名</p>
                     */
                    std::string m_webConsoleUsername;
                    bool m_webConsoleUsernameHasBeenSet;

                    /**
                     * <p>集群 Web 控制台登录密码</p>
                     */
                    std::string m_webConsolePassword;
                    bool m_webConsolePasswordHasBeenSet;

                    /**
                     * <p>已废弃</p>
                     */
                    bool m_publicAccessEndpointStatus;
                    bool m_publicAccessEndpointStatusHasBeenSet;

                    /**
                     * <p>已废弃</p>
                     */
                    bool m_publicControlConsoleSwitchStatus;
                    bool m_publicControlConsoleSwitchStatusHasBeenSet;

                    /**
                     * <p>已废弃</p>
                     */
                    bool m_vpcControlConsoleSwitchStatus;
                    bool m_vpcControlConsoleSwitchStatusHasBeenSet;

                    /**
                     * <p>Web 管控台 VPC 访问地址</p>
                     */
                    std::string m_vpcWebConsoleEndpoint;
                    bool m_vpcWebConsoleEndpointHasBeenSet;

                    /**
                     * <p>Web 控制台公网访问开关状态</p><p>枚举值：</p><ul><li>OFF： 已关闭</li><li>ON： 已开启</li><li>CREATING： 创建中</li><li>DELETING： 删除中</li><li>CREATE_FAILURE： 创建失败</li><li>DELETE_FAILURE： 删除失败</li></ul>
                     */
                    std::string m_publicWebConsoleSwitchStatus;
                    bool m_publicWebConsoleSwitchStatusHasBeenSet;

                    /**
                     * <p>Web 控制台 VPC 访问开关状态</p><p>枚举值：</p><ul><li>OFF： 已关闭</li><li>ON： 已开启</li><li>CREATING： 创建中</li><li>DELETING： 删除中</li><li>CREATE_FAILURE： 创建失败</li><li>DELETE_FAILURE： 删除失败</li></ul>
                     */
                    std::string m_vpcWebConsoleSwitchStatus;
                    bool m_vpcWebConsoleSwitchStatusHasBeenSet;

                    /**
                     * <p>公网接入点开关状态</p><p>枚举值：</p><ul><li>OFF： 已关闭</li><li>ON： 已开启</li><li>CREATING： 创建中</li><li>DELETING： 删除中</li><li>CREATE_FAILURE： 创建失败</li><li>DELETE_FAILURE： 删除失败</li></ul>
                     */
                    std::string m_publicDataStreamStatus;
                    bool m_publicDataStreamStatusHasBeenSet;

                    /**
                     * <p>Prometheus信息</p>
                     */
                    PrometheusEndpointInfo m_prometheusEndpointInfo;
                    bool m_prometheusEndpointInfoHasBeenSet;

                    /**
                     * <p>公网域名接入点</p>
                     */
                    std::string m_webConsoleDomainEndpoint;
                    bool m_webConsoleDomainEndpointHasBeenSet;

                    /**
                     * <p>控制面所使用的VPC信息</p>
                     */
                    VpcEndpointInfo m_controlPlaneEndpointInfo;
                    bool m_controlPlaneEndpointInfoHasBeenSet;

                    /**
                     * <p>TLS加密的数据流公网接入点</p>
                     */
                    std::string m_publicTlsAccessEndpoint;
                    bool m_publicTlsAccessEndpointHasBeenSet;

                    /**
                     * <p>公网IP是否复用</p>
                     */
                    bool m_publicIpReused;
                    bool m_publicIpReusedHasBeenSet;

                    /**
                     * <p>Web 控制台公网访问操作的错误信息</p>
                     */
                    std::string m_publicWebConsoleErrorMessage;
                    bool m_publicWebConsoleErrorMessageHasBeenSet;

                    /**
                     * <p>Web 控制台 VPC 访问操作的错误信息</p>
                     */
                    std::string m_vpcWebConsoleErrorMessage;
                    bool m_vpcWebConsoleErrorMessageHasBeenSet;

                    /**
                     * <p>公网接入点操作的错误信息</p>
                     */
                    std::string m_publicDataStreamErrorMessage;
                    bool m_publicDataStreamErrorMessageHasBeenSet;

                    /**
                     * <p>公网Stream接入点</p>
                     */
                    std::string m_publicStreamAccessEndpoint;
                    bool m_publicStreamAccessEndpointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQCLUSTERACCESSINFO_H_
