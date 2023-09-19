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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYPUBLICNETWORKACCESSPOINTREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYPUBLICNETWORKACCESSPOINTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * ModifyPublicNetworkAccessPoint请求参数结构体
                */
                class ModifyPublicNetworkAccessPointRequest : public AbstractModel
                {
                public:
                    ModifyPublicNetworkAccessPointRequest();
                    ~ModifyPublicNetworkAccessPointRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群名字
                     * @return ClusterId 集群名字
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群名字
                     * @param _clusterId 集群名字
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取是否开启
                     * @return PublicNetworkAccessPointStatus 是否开启
                     * 
                     */
                    bool GetPublicNetworkAccessPointStatus() const;

                    /**
                     * 设置是否开启
                     * @param _publicNetworkAccessPointStatus 是否开启
                     * 
                     */
                    void SetPublicNetworkAccessPointStatus(const bool& _publicNetworkAccessPointStatus);

                    /**
                     * 判断参数 PublicNetworkAccessPointStatus 是否已赋值
                     * @return PublicNetworkAccessPointStatus 是否已赋值
                     * 
                     */
                    bool PublicNetworkAccessPointStatusHasBeenSet() const;

                    /**
                     * 获取必填，公网控制台的开关/Vpc控制台的开关，示例值，Public/Vpc
                     * @return SwitchOwner 必填，公网控制台的开关/Vpc控制台的开关，示例值，Public/Vpc
                     * 
                     */
                    std::string GetSwitchOwner() const;

                    /**
                     * 设置必填，公网控制台的开关/Vpc控制台的开关，示例值，Public/Vpc
                     * @param _switchOwner 必填，公网控制台的开关/Vpc控制台的开关，示例值，Public/Vpc
                     * 
                     */
                    void SetSwitchOwner(const std::string& _switchOwner);

                    /**
                     * 判断参数 SwitchOwner 是否已赋值
                     * @return SwitchOwner 是否已赋值
                     * 
                     */
                    bool SwitchOwnerHasBeenSet() const;

                    /**
                     * 获取Vpc
                     * @return VpcId Vpc
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Vpc
                     * @param _vpcId Vpc
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
                     * 获取子网
                     * @return SubnetId 子网
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网
                     * @param _subnetId 子网
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取子网下面指定ip作为vpc接入点
                     * @return SelectIp 子网下面指定ip作为vpc接入点
                     * 
                     */
                    std::string GetSelectIp() const;

                    /**
                     * 设置子网下面指定ip作为vpc接入点
                     * @param _selectIp 子网下面指定ip作为vpc接入点
                     * 
                     */
                    void SetSelectIp(const std::string& _selectIp);

                    /**
                     * 判断参数 SelectIp 是否已赋值
                     * @return SelectIp 是否已赋值
                     * 
                     */
                    bool SelectIpHasBeenSet() const;

                private:

                    /**
                     * 集群名字
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 是否开启
                     */
                    bool m_publicNetworkAccessPointStatus;
                    bool m_publicNetworkAccessPointStatusHasBeenSet;

                    /**
                     * 必填，公网控制台的开关/Vpc控制台的开关，示例值，Public/Vpc
                     */
                    std::string m_switchOwner;
                    bool m_switchOwnerHasBeenSet;

                    /**
                     * Vpc
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 子网下面指定ip作为vpc接入点
                     */
                    std::string m_selectIp;
                    bool m_selectIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYPUBLICNETWORKACCESSPOINTREQUEST_H_
