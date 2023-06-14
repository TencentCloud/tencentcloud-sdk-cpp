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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_CREATEEDGEUNITCLOUDREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_CREATEEDGEUNITCLOUDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * CreateEdgeUnitCloud请求参数结构体
                */
                class CreateEdgeUnitCloudRequest : public AbstractModel
                {
                public:
                    CreateEdgeUnitCloudRequest();
                    ~CreateEdgeUnitCloudRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群名称，长度小于32
                     * @return Name 集群名称，长度小于32
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置集群名称，长度小于32
                     * @param _name 集群名称，长度小于32
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取k8s版本，仅支持1.16.7 和 1.18.2
                     * @return K8sVersion k8s版本，仅支持1.16.7 和 1.18.2
                     * 
                     */
                    std::string GetK8sVersion() const;

                    /**
                     * 设置k8s版本，仅支持1.16.7 和 1.18.2
                     * @param _k8sVersion k8s版本，仅支持1.16.7 和 1.18.2
                     * 
                     */
                    void SetK8sVersion(const std::string& _k8sVersion);

                    /**
                     * 判断参数 K8sVersion 是否已赋值
                     * @return K8sVersion 是否已赋值
                     * 
                     */
                    bool K8sVersionHasBeenSet() const;

                    /**
                     * 获取私有网络ID
                     * @return VpcId 私有网络ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID
                     * @param _vpcId 私有网络ID
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
                     * 获取集群描述
                     * @return Description 集群描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置集群描述
                     * @param _description 集群描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取集群pod cidr， 默认  10.1.0.0/16
                     * @return PodCIDR 集群pod cidr， 默认  10.1.0.0/16
                     * 
                     */
                    std::string GetPodCIDR() const;

                    /**
                     * 设置集群pod cidr， 默认  10.1.0.0/16
                     * @param _podCIDR 集群pod cidr， 默认  10.1.0.0/16
                     * 
                     */
                    void SetPodCIDR(const std::string& _podCIDR);

                    /**
                     * 判断参数 PodCIDR 是否已赋值
                     * @return PodCIDR 是否已赋值
                     * 
                     */
                    bool PodCIDRHasBeenSet() const;

                    /**
                     * 获取集群service cidr, 默认 10.2.0.0/16
                     * @return ServiceCIDR 集群service cidr, 默认 10.2.0.0/16
                     * 
                     */
                    std::string GetServiceCIDR() const;

                    /**
                     * 设置集群service cidr, 默认 10.2.0.0/16
                     * @param _serviceCIDR 集群service cidr, 默认 10.2.0.0/16
                     * 
                     */
                    void SetServiceCIDR(const std::string& _serviceCIDR);

                    /**
                     * 判断参数 ServiceCIDR 是否已赋值
                     * @return ServiceCIDR 是否已赋值
                     * 
                     */
                    bool ServiceCIDRHasBeenSet() const;

                    /**
                     * 获取是否开启监控。目前内存中权限开启联系产品开通白名单
                     * @return OpenCloudMonitor 是否开启监控。目前内存中权限开启联系产品开通白名单
                     * 
                     */
                    bool GetOpenCloudMonitor() const;

                    /**
                     * 设置是否开启监控。目前内存中权限开启联系产品开通白名单
                     * @param _openCloudMonitor 是否开启监控。目前内存中权限开启联系产品开通白名单
                     * 
                     */
                    void SetOpenCloudMonitor(const bool& _openCloudMonitor);

                    /**
                     * 判断参数 OpenCloudMonitor 是否已赋值
                     * @return OpenCloudMonitor 是否已赋值
                     * 
                     */
                    bool OpenCloudMonitorHasBeenSet() const;

                private:

                    /**
                     * 集群名称，长度小于32
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * k8s版本，仅支持1.16.7 和 1.18.2
                     */
                    std::string m_k8sVersion;
                    bool m_k8sVersionHasBeenSet;

                    /**
                     * 私有网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 集群描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 集群pod cidr， 默认  10.1.0.0/16
                     */
                    std::string m_podCIDR;
                    bool m_podCIDRHasBeenSet;

                    /**
                     * 集群service cidr, 默认 10.2.0.0/16
                     */
                    std::string m_serviceCIDR;
                    bool m_serviceCIDRHasBeenSet;

                    /**
                     * 是否开启监控。目前内存中权限开启联系产品开通白名单
                     */
                    bool m_openCloudMonitor;
                    bool m_openCloudMonitorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_CREATEEDGEUNITCLOUDREQUEST_H_
