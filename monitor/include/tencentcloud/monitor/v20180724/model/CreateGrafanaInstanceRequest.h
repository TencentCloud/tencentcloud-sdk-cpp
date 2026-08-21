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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEGRAFANAINSTANCEREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEGRAFANAINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusTag.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * CreateGrafanaInstance请求参数结构体
                */
                class CreateGrafanaInstanceRequest : public AbstractModel
                {
                public:
                    CreateGrafanaInstanceRequest();
                    ~CreateGrafanaInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例名</p>
                     * @return InstanceName <p>实例名</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名</p>
                     * @param _instanceName <p>实例名</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>VPC ID (私有网络 ID)</p>
                     * @return VpcId <p>VPC ID (私有网络 ID)</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC ID (私有网络 ID)</p>
                     * @param _vpcId <p>VPC ID (私有网络 ID)</p>
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
                     * 获取<p>子网 ID 数组(VPC ID下的子网 ID，只取第一个)。<br>注意：并不是所有可用区都可用（可通过 monitor:DescribePrometheusZones 接口获取可用区状态，选择 ZoneState 和ZoneResourceState 都为1的可用区）</p>
                     * @return SubnetIds <p>子网 ID 数组(VPC ID下的子网 ID，只取第一个)。<br>注意：并不是所有可用区都可用（可通过 monitor:DescribePrometheusZones 接口获取可用区状态，选择 ZoneState 和ZoneResourceState 都为1的可用区）</p>
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置<p>子网 ID 数组(VPC ID下的子网 ID，只取第一个)。<br>注意：并不是所有可用区都可用（可通过 monitor:DescribePrometheusZones 接口获取可用区状态，选择 ZoneState 和ZoneResourceState 都为1的可用区）</p>
                     * @param _subnetIds <p>子网 ID 数组(VPC ID下的子网 ID，只取第一个)。<br>注意：并不是所有可用区都可用（可通过 monitor:DescribePrometheusZones 接口获取可用区状态，选择 ZoneState 和ZoneResourceState 都为1的可用区）</p>
                     * 
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取<p>是否启用外网</p>
                     * @return EnableInternet <p>是否启用外网</p>
                     * 
                     */
                    bool GetEnableInternet() const;

                    /**
                     * 设置<p>是否启用外网</p>
                     * @param _enableInternet <p>是否启用外网</p>
                     * 
                     */
                    void SetEnableInternet(const bool& _enableInternet);

                    /**
                     * 判断参数 EnableInternet 是否已赋值
                     * @return EnableInternet 是否已赋值
                     * 
                     */
                    bool EnableInternetHasBeenSet() const;

                    /**
                     * 获取<p>Grafana 初始密码(国际站用户必填，国内站用户可不填，不填时会生成随机密码并给主账号发送通知)</p>
                     * @return GrafanaInitPassword <p>Grafana 初始密码(国际站用户必填，国内站用户可不填，不填时会生成随机密码并给主账号发送通知)</p>
                     * 
                     */
                    std::string GetGrafanaInitPassword() const;

                    /**
                     * 设置<p>Grafana 初始密码(国际站用户必填，国内站用户可不填，不填时会生成随机密码并给主账号发送通知)</p>
                     * @param _grafanaInitPassword <p>Grafana 初始密码(国际站用户必填，国内站用户可不填，不填时会生成随机密码并给主账号发送通知)</p>
                     * 
                     */
                    void SetGrafanaInitPassword(const std::string& _grafanaInitPassword);

                    /**
                     * 判断参数 GrafanaInitPassword 是否已赋值
                     * @return GrafanaInitPassword 是否已赋值
                     * 
                     */
                    bool GrafanaInitPasswordHasBeenSet() const;

                    /**
                     * 获取<p>标签</p>
                     * @return TagSpecification <p>标签</p>
                     * 
                     */
                    std::vector<PrometheusTag> GetTagSpecification() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _tagSpecification <p>标签</p>
                     * 
                     */
                    void SetTagSpecification(const std::vector<PrometheusTag>& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     * 
                     */
                    bool TagSpecificationHasBeenSet() const;

                    /**
                     * 获取<p>自定义版本，可用版本从 DescribeGrafanaVersions 接口获取</p>
                     * @return DockerImage <p>自定义版本，可用版本从 DescribeGrafanaVersions 接口获取</p>
                     * 
                     */
                    std::string GetDockerImage() const;

                    /**
                     * 设置<p>自定义版本，可用版本从 DescribeGrafanaVersions 接口获取</p>
                     * @param _dockerImage <p>自定义版本，可用版本从 DescribeGrafanaVersions 接口获取</p>
                     * 
                     */
                    void SetDockerImage(const std::string& _dockerImage);

                    /**
                     * 判断参数 DockerImage 是否已赋值
                     * @return DockerImage 是否已赋值
                     * 
                     */
                    bool DockerImageHasBeenSet() const;

                    /**
                     * 获取<p>是否自动选择代金券，默认为 false</p>
                     * @return AutoVoucher <p>是否自动选择代金券，默认为 false</p>
                     * 
                     */
                    bool GetAutoVoucher() const;

                    /**
                     * 设置<p>是否自动选择代金券，默认为 false</p>
                     * @param _autoVoucher <p>是否自动选择代金券，默认为 false</p>
                     * 
                     */
                    void SetAutoVoucher(const bool& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                private:

                    /**
                     * <p>实例名</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>VPC ID (私有网络 ID)</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网 ID 数组(VPC ID下的子网 ID，只取第一个)。<br>注意：并不是所有可用区都可用（可通过 monitor:DescribePrometheusZones 接口获取可用区状态，选择 ZoneState 和ZoneResourceState 都为1的可用区）</p>
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * <p>是否启用外网</p>
                     */
                    bool m_enableInternet;
                    bool m_enableInternetHasBeenSet;

                    /**
                     * <p>Grafana 初始密码(国际站用户必填，国内站用户可不填，不填时会生成随机密码并给主账号发送通知)</p>
                     */
                    std::string m_grafanaInitPassword;
                    bool m_grafanaInitPasswordHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::vector<PrometheusTag> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * <p>自定义版本，可用版本从 DescribeGrafanaVersions 接口获取</p>
                     */
                    std::string m_dockerImage;
                    bool m_dockerImageHasBeenSet;

                    /**
                     * <p>是否自动选择代金券，默认为 false</p>
                     */
                    bool m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEGRAFANAINSTANCEREQUEST_H_
