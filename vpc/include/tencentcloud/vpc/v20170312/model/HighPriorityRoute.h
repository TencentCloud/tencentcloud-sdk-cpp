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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_HIGHPRIORITYROUTE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_HIGHPRIORITYROUTE_H_

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
                * 高优路由表条目信息
                */
                class HighPriorityRoute : public AbstractModel
                {
                public:
                    HighPriorityRoute();
                    ~HighPriorityRoute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取高优路由表唯一 ID
                     * @return HighPriorityRouteTableId 高优路由表唯一 ID
                     * 
                     */
                    std::string GetHighPriorityRouteTableId() const;

                    /**
                     * 设置高优路由表唯一 ID
                     * @param _highPriorityRouteTableId 高优路由表唯一 ID
                     * 
                     */
                    void SetHighPriorityRouteTableId(const std::string& _highPriorityRouteTableId);

                    /**
                     * 判断参数 HighPriorityRouteTableId 是否已赋值
                     * @return HighPriorityRouteTableId 是否已赋值
                     * 
                     */
                    bool HighPriorityRouteTableIdHasBeenSet() const;

                    /**
                     * 获取高优路由表条目唯一 ID
                     * @return HighPriorityRouteId 高优路由表条目唯一 ID
                     * 
                     */
                    std::string GetHighPriorityRouteId() const;

                    /**
                     * 设置高优路由表条目唯一 ID
                     * @param _highPriorityRouteId 高优路由表条目唯一 ID
                     * 
                     */
                    void SetHighPriorityRouteId(const std::string& _highPriorityRouteId);

                    /**
                     * 判断参数 HighPriorityRouteId 是否已赋值
                     * @return HighPriorityRouteId 是否已赋值
                     * 
                     */
                    bool HighPriorityRouteIdHasBeenSet() const;

                    /**
                     * 获取目标网段
                     * @return DestinationCidrBlock 目标网段
                     * 
                     */
                    std::string GetDestinationCidrBlock() const;

                    /**
                     * 设置目标网段
                     * @param _destinationCidrBlock 目标网段
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
                     * 获取网关类型
                     * @return GatewayType 网关类型
                     * 
                     */
                    std::string GetGatewayType() const;

                    /**
                     * 设置网关类型
                     * @param _gatewayType 网关类型
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
                     * 获取网关唯一ID
                     * @return GatewayId 网关唯一ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关唯一ID
                     * @param _gatewayId 网关唯一ID
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
                     * 获取高优路由条目描述
                     * @return Description 高优路由条目描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置高优路由条目描述
                     * @param _description 高优路由条目描述
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
                     * 获取ECMP算法，支持的算法有：ECMP_QUINTUPLE_HASH：五元组hash，ECMP_SOURCE_DESTINATION_IP_HASH：源和目的IP hash，ECMP_DESTINATION_IP_HASH：目的IP hash，ECMP_SOURCE_IP_HASH：源IP hash。
                     * @return SubnetRouteAlgorithm ECMP算法，支持的算法有：ECMP_QUINTUPLE_HASH：五元组hash，ECMP_SOURCE_DESTINATION_IP_HASH：源和目的IP hash，ECMP_DESTINATION_IP_HASH：目的IP hash，ECMP_SOURCE_IP_HASH：源IP hash。
                     * 
                     */
                    std::string GetSubnetRouteAlgorithm() const;

                    /**
                     * 设置ECMP算法，支持的算法有：ECMP_QUINTUPLE_HASH：五元组hash，ECMP_SOURCE_DESTINATION_IP_HASH：源和目的IP hash，ECMP_DESTINATION_IP_HASH：目的IP hash，ECMP_SOURCE_IP_HASH：源IP hash。
                     * @param _subnetRouteAlgorithm ECMP算法，支持的算法有：ECMP_QUINTUPLE_HASH：五元组hash，ECMP_SOURCE_DESTINATION_IP_HASH：源和目的IP hash，ECMP_DESTINATION_IP_HASH：目的IP hash，ECMP_SOURCE_IP_HASH：源IP hash。
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
                     * 获取出参展示，是否为CDC属性高优路由
                     * @return IsCdc 出参展示，是否为CDC属性高优路由
                     * 
                     */
                    bool GetIsCdc() const;

                    /**
                     * 设置出参展示，是否为CDC属性高优路由
                     * @param _isCdc 出参展示，是否为CDC属性高优路由
                     * 
                     */
                    void SetIsCdc(const bool& _isCdc);

                    /**
                     * 判断参数 IsCdc 是否已赋值
                     * @return IsCdc 是否已赋值
                     * 
                     */
                    bool IsCdcHasBeenSet() const;

                    /**
                     * 获取出参展示，CDC 唯一ID
                     * @return CdcId 出参展示，CDC 唯一ID
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置出参展示，CDC 唯一ID
                     * @param _cdcId 出参展示，CDC 唯一ID
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

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

                private:

                    /**
                     * 高优路由表唯一 ID
                     */
                    std::string m_highPriorityRouteTableId;
                    bool m_highPriorityRouteTableIdHasBeenSet;

                    /**
                     * 高优路由表条目唯一 ID
                     */
                    std::string m_highPriorityRouteId;
                    bool m_highPriorityRouteIdHasBeenSet;

                    /**
                     * 目标网段
                     */
                    std::string m_destinationCidrBlock;
                    bool m_destinationCidrBlockHasBeenSet;

                    /**
                     * 网关类型
                     */
                    std::string m_gatewayType;
                    bool m_gatewayTypeHasBeenSet;

                    /**
                     * 网关唯一ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 高优路由条目描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * ECMP算法，支持的算法有：ECMP_QUINTUPLE_HASH：五元组hash，ECMP_SOURCE_DESTINATION_IP_HASH：源和目的IP hash，ECMP_DESTINATION_IP_HASH：目的IP hash，ECMP_SOURCE_IP_HASH：源IP hash。
                     */
                    std::string m_subnetRouteAlgorithm;
                    bool m_subnetRouteAlgorithmHasBeenSet;

                    /**
                     * 出参展示，是否为CDC属性高优路由
                     */
                    bool m_isCdc;
                    bool m_isCdcHasBeenSet;

                    /**
                     * 出参展示，CDC 唯一ID
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_HIGHPRIORITYROUTE_H_
