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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_SUBNETINFO_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_SUBNETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * vpc子网信息
                */
                class SubnetInfo : public AbstractModel
                {
                public:
                    SubnetInfo();
                    ~SubnetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取vpc id
                     * @return VpcId vpc id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc id
                     * @param _vpcId vpc id
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
                     * 获取子网ID
                     * @return SubnetId 子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
                     * @param _subnetId 子网ID
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
                     * 获取应用的集群；可以是集群id,也可以是All
                     * @return UsedCluster 应用的集群；可以是集群id,也可以是All
                     * 
                     */
                    std::string GetUsedCluster() const;

                    /**
                     * 设置应用的集群；可以是集群id,也可以是All
                     * @param _usedCluster 应用的集群；可以是集群id,也可以是All
                     * 
                     */
                    void SetUsedCluster(const std::string& _usedCluster);

                    /**
                     * 判断参数 UsedCluster 是否已赋值
                     * @return UsedCluster 是否已赋值
                     * 
                     */
                    bool UsedClusterHasBeenSet() const;

                    /**
                     * 获取cidr，只有当IsDirectConnect为true时才生效
                     * @return CIDR cidr，只有当IsDirectConnect为true时才生效
                     * 
                     */
                    std::string GetCIDR() const;

                    /**
                     * 设置cidr，只有当IsDirectConnect为true时才生效
                     * @param _cIDR cidr，只有当IsDirectConnect为true时才生效
                     * 
                     */
                    void SetCIDR(const std::string& _cIDR);

                    /**
                     * 判断参数 CIDR 是否已赋值
                     * @return CIDR 是否已赋值
                     * 
                     */
                    bool CIDRHasBeenSet() const;

                    /**
                     * 获取是否为专线接入场景
                     * @return IsDirectConnect 是否为专线接入场景
                     * 
                     */
                    bool GetIsDirectConnect() const;

                    /**
                     * 设置是否为专线接入场景
                     * @param _isDirectConnect 是否为专线接入场景
                     * 
                     */
                    void SetIsDirectConnect(const bool& _isDirectConnect);

                    /**
                     * 判断参数 IsDirectConnect 是否已赋值
                     * @return IsDirectConnect 是否已赋值
                     * 
                     */
                    bool IsDirectConnectHasBeenSet() const;

                private:

                    /**
                     * vpc id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 应用的集群；可以是集群id,也可以是All
                     */
                    std::string m_usedCluster;
                    bool m_usedClusterHasBeenSet;

                    /**
                     * cidr，只有当IsDirectConnect为true时才生效
                     */
                    std::string m_cIDR;
                    bool m_cIDRHasBeenSet;

                    /**
                     * 是否为专线接入场景
                     */
                    bool m_isDirectConnect;
                    bool m_isDirectConnectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_SUBNETINFO_H_
