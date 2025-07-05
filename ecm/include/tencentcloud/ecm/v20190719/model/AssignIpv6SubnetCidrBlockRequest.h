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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_ASSIGNIPV6SUBNETCIDRBLOCKREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_ASSIGNIPV6SUBNETCIDRBLOCKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Ipv6SubnetCidrBlock.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * AssignIpv6SubnetCidrBlock请求参数结构体
                */
                class AssignIpv6SubnetCidrBlockRequest : public AbstractModel
                {
                public:
                    AssignIpv6SubnetCidrBlockRequest();
                    ~AssignIpv6SubnetCidrBlockRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取子网所在私有网络`ID`。形如：`vpc-f49l6u0z`。	
                     * @return VpcId 子网所在私有网络`ID`。形如：`vpc-f49l6u0z`。	
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置子网所在私有网络`ID`。形如：`vpc-f49l6u0z`。	
                     * @param _vpcId 子网所在私有网络`ID`。形如：`vpc-f49l6u0z`。	
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
                     * 获取分配 `IPv6` 子网段列表。
                     * @return Ipv6SubnetCidrBlocks 分配 `IPv6` 子网段列表。
                     * 
                     */
                    std::vector<Ipv6SubnetCidrBlock> GetIpv6SubnetCidrBlocks() const;

                    /**
                     * 设置分配 `IPv6` 子网段列表。
                     * @param _ipv6SubnetCidrBlocks 分配 `IPv6` 子网段列表。
                     * 
                     */
                    void SetIpv6SubnetCidrBlocks(const std::vector<Ipv6SubnetCidrBlock>& _ipv6SubnetCidrBlocks);

                    /**
                     * 判断参数 Ipv6SubnetCidrBlocks 是否已赋值
                     * @return Ipv6SubnetCidrBlocks 是否已赋值
                     * 
                     */
                    bool Ipv6SubnetCidrBlocksHasBeenSet() const;

                    /**
                     * 获取ECM地域。
                     * @return EcmRegion ECM地域。
                     * 
                     */
                    std::string GetEcmRegion() const;

                    /**
                     * 设置ECM地域。
                     * @param _ecmRegion ECM地域。
                     * 
                     */
                    void SetEcmRegion(const std::string& _ecmRegion);

                    /**
                     * 判断参数 EcmRegion 是否已赋值
                     * @return EcmRegion 是否已赋值
                     * 
                     */
                    bool EcmRegionHasBeenSet() const;

                private:

                    /**
                     * 子网所在私有网络`ID`。形如：`vpc-f49l6u0z`。	
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 分配 `IPv6` 子网段列表。
                     */
                    std::vector<Ipv6SubnetCidrBlock> m_ipv6SubnetCidrBlocks;
                    bool m_ipv6SubnetCidrBlocksHasBeenSet;

                    /**
                     * ECM地域。
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_ASSIGNIPV6SUBNETCIDRBLOCKREQUEST_H_
