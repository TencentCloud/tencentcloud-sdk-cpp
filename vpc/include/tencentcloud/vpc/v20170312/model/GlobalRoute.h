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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_GLOBALROUTE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_GLOBALROUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 全局路由对象。
                */
                class GlobalRoute : public AbstractModel
                {
                public:
                    GlobalRoute();
                    ~GlobalRoute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取作为出参展示，表示VPC唯一Id，。
                     * @return VpcId 作为出参展示，表示VPC唯一Id，。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置作为出参展示，表示VPC唯一Id，。
                     * @param _vpcId 作为出参展示，表示VPC唯一Id，。
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
                     * 获取全局路由唯一Id。
                     * @return GlobalRouteId 全局路由唯一Id。
                     * 
                     */
                    std::string GetGlobalRouteId() const;

                    /**
                     * 设置全局路由唯一Id。
                     * @param _globalRouteId 全局路由唯一Id。
                     * 
                     */
                    void SetGlobalRouteId(const std::string& _globalRouteId);

                    /**
                     * 判断参数 GlobalRouteId 是否已赋值
                     * @return GlobalRouteId 是否已赋值
                     * 
                     */
                    bool GlobalRouteIdHasBeenSet() const;

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
                     * 获取下一跳类型，支持 NORMAL_CVM。
                     * @return GatewayType 下一跳类型，支持 NORMAL_CVM。
                     * 
                     */
                    std::string GetGatewayType() const;

                    /**
                     * 设置下一跳类型，支持 NORMAL_CVM。
                     * @param _gatewayType 下一跳类型，支持 NORMAL_CVM。
                     * 
                     */
                    void SetGatewayType(const std::string& _gatewayType);

                    /**
                     * 判断参数 GatewayType 是否已赋值
                     * @return GatewayType 是否已赋值
                     * 
                     */
                    bool GatewayTypeHasBeenSet() const;

                    /**
                     * 获取下一跳对象，如果GatewayType类型是NORMAL_CVM填写子机IP。
                     * @return GatewayId 下一跳对象，如果GatewayType类型是NORMAL_CVM填写子机IP。
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置下一跳对象，如果GatewayType类型是NORMAL_CVM填写子机IP。
                     * @param _gatewayId 下一跳对象，如果GatewayType类型是NORMAL_CVM填写子机IP。
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取备注。
                     * @return Description 备注。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置备注。
                     * @param _description 备注。
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
                     * 获取创建时间。
                     * @return CreatedTime 创建时间。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createdTime 创建时间。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取支持的 ECMP算法有：

- ECMP_QUINTUPLE_HASH：五元组hash
- ECMP_SOURCE_DESTINATION_IP_HASH：源和目的IP hash
- ECMP_DESTINATION_IP_HASH：目的IP hash
- ECMP_SOURCE_IP_HASH：源IP hash。
                     * @return SubnetRouteAlgorithm 支持的 ECMP算法有：

- ECMP_QUINTUPLE_HASH：五元组hash
- ECMP_SOURCE_DESTINATION_IP_HASH：源和目的IP hash
- ECMP_DESTINATION_IP_HASH：目的IP hash
- ECMP_SOURCE_IP_HASH：源IP hash。
                     * 
                     */
                    std::string GetSubnetRouteAlgorithm() const;

                    /**
                     * 设置支持的 ECMP算法有：

- ECMP_QUINTUPLE_HASH：五元组hash
- ECMP_SOURCE_DESTINATION_IP_HASH：源和目的IP hash
- ECMP_DESTINATION_IP_HASH：目的IP hash
- ECMP_SOURCE_IP_HASH：源IP hash。
                     * @param _subnetRouteAlgorithm 支持的 ECMP算法有：

- ECMP_QUINTUPLE_HASH：五元组hash
- ECMP_SOURCE_DESTINATION_IP_HASH：源和目的IP hash
- ECMP_DESTINATION_IP_HASH：目的IP hash
- ECMP_SOURCE_IP_HASH：源IP hash。
                     * 
                     */
                    void SetSubnetRouteAlgorithm(const std::string& _subnetRouteAlgorithm);

                    /**
                     * 判断参数 SubnetRouteAlgorithm 是否已赋值
                     * @return SubnetRouteAlgorithm 是否已赋值
                     * 
                     */
                    bool SubnetRouteAlgorithmHasBeenSet() const;

                private:

                    /**
                     * 作为出参展示，表示VPC唯一Id，。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 全局路由唯一Id。
                     */
                    std::string m_globalRouteId;
                    bool m_globalRouteIdHasBeenSet;

                    /**
                     * Ipv4目标网段。
                     */
                    std::string m_destinationCidrBlock;
                    bool m_destinationCidrBlockHasBeenSet;

                    /**
                     * 下一跳类型，支持 NORMAL_CVM。
                     */
                    std::string m_gatewayType;
                    bool m_gatewayTypeHasBeenSet;

                    /**
                     * 下一跳对象，如果GatewayType类型是NORMAL_CVM填写子机IP。
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 备注。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 支持的 ECMP算法有：

- ECMP_QUINTUPLE_HASH：五元组hash
- ECMP_SOURCE_DESTINATION_IP_HASH：源和目的IP hash
- ECMP_DESTINATION_IP_HASH：目的IP hash
- ECMP_SOURCE_IP_HASH：源IP hash。
                     */
                    std::string m_subnetRouteAlgorithm;
                    bool m_subnetRouteAlgorithmHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_GLOBALROUTE_H_
