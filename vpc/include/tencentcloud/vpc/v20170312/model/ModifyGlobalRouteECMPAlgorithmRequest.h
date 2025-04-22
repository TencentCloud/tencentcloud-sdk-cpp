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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYGLOBALROUTEECMPALGORITHMREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYGLOBALROUTEECMPALGORITHMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyGlobalRouteECMPAlgorithm请求参数结构体
                */
                class ModifyGlobalRouteECMPAlgorithmRequest : public AbstractModel
                {
                public:
                    ModifyGlobalRouteECMPAlgorithmRequest();
                    ~ModifyGlobalRouteECMPAlgorithmRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC唯一Id。
                     * @return VpcId VPC唯一Id。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC唯一Id。
                     * @param _vpcId VPC唯一Id。
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
                     * 获取Ipv4目标网段。
                     * @return DestinationCidrBlock Ipv4目标网段。
                     * 
                     */
                    std::string GetDestinationCidrBlock() const;

                    /**
                     * 设置Ipv4目标网段。
                     * @param _destinationCidrBlock Ipv4目标网段。
                     * 
                     */
                    void SetDestinationCidrBlock(const std::string& _destinationCidrBlock);

                    /**
                     * 判断参数 DestinationCidrBlock 是否已赋值
                     * @return DestinationCidrBlock 是否已赋值
                     * 
                     */
                    bool DestinationCidrBlockHasBeenSet() const;

                    /**
                     * 获取支持的 ECMP算法有：ECMP_QUINTUPLE_HASH：五元组hash，ECMP_SOURCE_DESTINATION_IP_HASH：源和目的IP hash，ECMP_DESTINATION_IP_HASH：目的IP hash，ECMP_SOURCE_IP_HASH：源IP hash。
                     * @return SubnetRouteAlgorithm 支持的 ECMP算法有：ECMP_QUINTUPLE_HASH：五元组hash，ECMP_SOURCE_DESTINATION_IP_HASH：源和目的IP hash，ECMP_DESTINATION_IP_HASH：目的IP hash，ECMP_SOURCE_IP_HASH：源IP hash。
                     * 
                     */
                    std::string GetSubnetRouteAlgorithm() const;

                    /**
                     * 设置支持的 ECMP算法有：ECMP_QUINTUPLE_HASH：五元组hash，ECMP_SOURCE_DESTINATION_IP_HASH：源和目的IP hash，ECMP_DESTINATION_IP_HASH：目的IP hash，ECMP_SOURCE_IP_HASH：源IP hash。
                     * @param _subnetRouteAlgorithm 支持的 ECMP算法有：ECMP_QUINTUPLE_HASH：五元组hash，ECMP_SOURCE_DESTINATION_IP_HASH：源和目的IP hash，ECMP_DESTINATION_IP_HASH：目的IP hash，ECMP_SOURCE_IP_HASH：源IP hash。
                     * 
                     */
                    void SetSubnetRouteAlgorithm(const std::string& _subnetRouteAlgorithm);

                    /**
                     * 判断参数 SubnetRouteAlgorithm 是否已赋值
                     * @return SubnetRouteAlgorithm 是否已赋值
                     * 
                     */
                    bool SubnetRouteAlgorithmHasBeenSet() const;

                    /**
                     * 获取CDC 集群唯一 ID。
                     * @return CdcId CDC 集群唯一 ID。
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置CDC 集群唯一 ID。
                     * @param _cdcId CDC 集群唯一 ID。
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                private:

                    /**
                     * VPC唯一Id。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Ipv4目标网段。
                     */
                    std::string m_destinationCidrBlock;
                    bool m_destinationCidrBlockHasBeenSet;

                    /**
                     * 支持的 ECMP算法有：ECMP_QUINTUPLE_HASH：五元组hash，ECMP_SOURCE_DESTINATION_IP_HASH：源和目的IP hash，ECMP_DESTINATION_IP_HASH：目的IP hash，ECMP_SOURCE_IP_HASH：源IP hash。
                     */
                    std::string m_subnetRouteAlgorithm;
                    bool m_subnetRouteAlgorithmHasBeenSet;

                    /**
                     * CDC 集群唯一 ID。
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYGLOBALROUTEECMPALGORITHMREQUEST_H_
