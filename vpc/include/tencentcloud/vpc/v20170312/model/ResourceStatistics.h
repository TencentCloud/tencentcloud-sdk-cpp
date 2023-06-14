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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_RESOURCESTATISTICS_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_RESOURCESTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/ResourceStatisticsItem.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 资源统计信息
                */
                class ResourceStatistics : public AbstractModel
                {
                public:
                    ResourceStatistics();
                    ~ResourceStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Vpc实例ID，例如：vpc-f1xjkw1b。
                     * @return VpcId Vpc实例ID，例如：vpc-f1xjkw1b。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Vpc实例ID，例如：vpc-f1xjkw1b。
                     * @param _vpcId Vpc实例ID，例如：vpc-f1xjkw1b。
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
                     * 获取子网实例ID，例如：subnet-bthucmmy。
                     * @return SubnetId 子网实例ID，例如：subnet-bthucmmy。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网实例ID，例如：subnet-bthucmmy。
                     * @param _subnetId 子网实例ID，例如：subnet-bthucmmy。
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
                     * 获取当前已使用的IP总数。
                     * @return Ip 当前已使用的IP总数。
                     * 
                     */
                    uint64_t GetIp() const;

                    /**
                     * 设置当前已使用的IP总数。
                     * @param _ip 当前已使用的IP总数。
                     * 
                     */
                    void SetIp(const uint64_t& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取资源统计信息。
                     * @return ResourceStatisticsItemSet 资源统计信息。
                     * 
                     */
                    std::vector<ResourceStatisticsItem> GetResourceStatisticsItemSet() const;

                    /**
                     * 设置资源统计信息。
                     * @param _resourceStatisticsItemSet 资源统计信息。
                     * 
                     */
                    void SetResourceStatisticsItemSet(const std::vector<ResourceStatisticsItem>& _resourceStatisticsItemSet);

                    /**
                     * 判断参数 ResourceStatisticsItemSet 是否已赋值
                     * @return ResourceStatisticsItemSet 是否已赋值
                     * 
                     */
                    bool ResourceStatisticsItemSetHasBeenSet() const;

                private:

                    /**
                     * Vpc实例ID，例如：vpc-f1xjkw1b。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网实例ID，例如：subnet-bthucmmy。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 当前已使用的IP总数。
                     */
                    uint64_t m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 资源统计信息。
                     */
                    std::vector<ResourceStatisticsItem> m_resourceStatisticsItemSet;
                    bool m_resourceStatisticsItemSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_RESOURCESTATISTICS_H_
