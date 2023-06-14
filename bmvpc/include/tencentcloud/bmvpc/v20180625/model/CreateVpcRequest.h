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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_CREATEVPCREQUEST_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_CREATEVPCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmvpc/v20180625/model/VpcSubnetCreateInfo.h>


namespace TencentCloud
{
    namespace Bmvpc
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * CreateVpc请求参数结构体
                */
                class CreateVpcRequest : public AbstractModel
                {
                public:
                    CreateVpcRequest();
                    ~CreateVpcRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取私有网络的名称
                     * @return VpcName 私有网络的名称
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置私有网络的名称
                     * @param _vpcName 私有网络的名称
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取私有网络的CIDR
                     * @return CidrBlock 私有网络的CIDR
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置私有网络的CIDR
                     * @param _cidrBlock 私有网络的CIDR
                     * 
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     * 
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取私有网络的可用区
                     * @return Zone 私有网络的可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置私有网络的可用区
                     * @param _zone 私有网络的可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取子网信息
                     * @return SubnetSet 子网信息
                     * 
                     */
                    std::vector<VpcSubnetCreateInfo> GetSubnetSet() const;

                    /**
                     * 设置子网信息
                     * @param _subnetSet 子网信息
                     * 
                     */
                    void SetSubnetSet(const std::vector<VpcSubnetCreateInfo>& _subnetSet);

                    /**
                     * 判断参数 SubnetSet 是否已赋值
                     * @return SubnetSet 是否已赋值
                     * 
                     */
                    bool SubnetSetHasBeenSet() const;

                    /**
                     * 获取是否启用内网监控
                     * @return EnableMonitoring 是否启用内网监控
                     * 
                     */
                    bool GetEnableMonitoring() const;

                    /**
                     * 设置是否启用内网监控
                     * @param _enableMonitoring 是否启用内网监控
                     * 
                     */
                    void SetEnableMonitoring(const bool& _enableMonitoring);

                    /**
                     * 判断参数 EnableMonitoring 是否已赋值
                     * @return EnableMonitoring 是否已赋值
                     * 
                     */
                    bool EnableMonitoringHasBeenSet() const;

                private:

                    /**
                     * 私有网络的名称
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * 私有网络的CIDR
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * 私有网络的可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 子网信息
                     */
                    std::vector<VpcSubnetCreateInfo> m_subnetSet;
                    bool m_subnetSetHasBeenSet;

                    /**
                     * 是否启用内网监控
                     */
                    bool m_enableMonitoring;
                    bool m_enableMonitoringHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_CREATEVPCREQUEST_H_
