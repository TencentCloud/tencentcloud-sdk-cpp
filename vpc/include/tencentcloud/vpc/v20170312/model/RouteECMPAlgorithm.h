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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ROUTEECMPALGORITHM_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ROUTEECMPALGORITHM_H_

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
                * 用于修改入路由表ECMP算法。现在支持的算法有：ECMP_QUINTUPLE_HASH：五元组hash，ECMP_SOURCE_DESTINATION_IP_HASH：源和目的IP hash，ECMP_DESTINATION_IP_HASH：目的IP hash，ECMP_SOURCE_IP_HASH：源IP hash。
                */
                class RouteECMPAlgorithm : public AbstractModel
                {
                public:
                    RouteECMPAlgorithm();
                    ~RouteECMPAlgorithm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取 目标网段
                     * @return DestinationCidrBlock  目标网段
                     * 
                     */
                    std::string GetDestinationCidrBlock() const;

                    /**
                     * 设置 目标网段
                     * @param _destinationCidrBlock  目标网段
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

                private:

                    /**
                     *  目标网段
                     */
                    std::string m_destinationCidrBlock;
                    bool m_destinationCidrBlockHasBeenSet;

                    /**
                     * 支持的 ECMP算法有：ECMP_QUINTUPLE_HASH：五元组hash，ECMP_SOURCE_DESTINATION_IP_HASH：源和目的IP hash，ECMP_DESTINATION_IP_HASH：目的IP hash，ECMP_SOURCE_IP_HASH：源IP hash。
                     */
                    std::string m_subnetRouteAlgorithm;
                    bool m_subnetRouteAlgorithmHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ROUTEECMPALGORITHM_H_
