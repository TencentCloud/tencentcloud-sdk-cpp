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
                     * 获取实例名
                     * @return InstanceName 实例名
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名
                     * @param _instanceName 实例名
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
                     * 获取VPC ID (私有网络 ID)
                     * @return VpcId VPC ID (私有网络 ID)
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID (私有网络 ID)
                     * @param _vpcId VPC ID (私有网络 ID)
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
                     * 获取子网 ID 数组(VPC ID下的子网 ID，只取第一个)
                     * @return SubnetIds 子网 ID 数组(VPC ID下的子网 ID，只取第一个)
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置子网 ID 数组(VPC ID下的子网 ID，只取第一个)
                     * @param _subnetIds 子网 ID 数组(VPC ID下的子网 ID，只取第一个)
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
                     * 获取是否启用外网
                     * @return EnableInternet 是否启用外网
                     * 
                     */
                    bool GetEnableInternet() const;

                    /**
                     * 设置是否启用外网
                     * @param _enableInternet 是否启用外网
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
                     * 获取Grafana 初始密码(国际站用户必填，国内站用户可不填，不填时会生成随机密码并给主账号发送通知)
                     * @return GrafanaInitPassword Grafana 初始密码(国际站用户必填，国内站用户可不填，不填时会生成随机密码并给主账号发送通知)
                     * 
                     */
                    std::string GetGrafanaInitPassword() const;

                    /**
                     * 设置Grafana 初始密码(国际站用户必填，国内站用户可不填，不填时会生成随机密码并给主账号发送通知)
                     * @param _grafanaInitPassword Grafana 初始密码(国际站用户必填，国内站用户可不填，不填时会生成随机密码并给主账号发送通知)
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
                     * 获取标签
                     * @return TagSpecification 标签
                     * 
                     */
                    std::vector<PrometheusTag> GetTagSpecification() const;

                    /**
                     * 设置标签
                     * @param _tagSpecification 标签
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
                     * 获取是否自动选择代金券，默认为 false
                     * @return AutoVoucher 是否自动选择代金券，默认为 false
                     * 
                     */
                    bool GetAutoVoucher() const;

                    /**
                     * 设置是否自动选择代金券，默认为 false
                     * @param _autoVoucher 是否自动选择代金券，默认为 false
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
                     * 实例名
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * VPC ID (私有网络 ID)
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网 ID 数组(VPC ID下的子网 ID，只取第一个)
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * 是否启用外网
                     */
                    bool m_enableInternet;
                    bool m_enableInternetHasBeenSet;

                    /**
                     * Grafana 初始密码(国际站用户必填，国内站用户可不填，不填时会生成随机密码并给主账号发送通知)
                     */
                    std::string m_grafanaInitPassword;
                    bool m_grafanaInitPasswordHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<PrometheusTag> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * 是否自动选择代金券，默认为 false
                     */
                    bool m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEGRAFANAINSTANCEREQUEST_H_
