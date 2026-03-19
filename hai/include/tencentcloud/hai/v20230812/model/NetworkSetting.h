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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_NETWORKSETTING_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_NETWORKSETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * 推理集群的网络设置
                */
                class NetworkSetting : public AbstractModel
                {
                public:
                    NetworkSetting();
                    ~NetworkSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取公网访问
                     * @return PublicEndpointEnable 公网访问
                     * 
                     */
                    bool GetPublicEndpointEnable() const;

                    /**
                     * 设置公网访问
                     * @param _publicEndpointEnable 公网访问
                     * 
                     */
                    void SetPublicEndpointEnable(const bool& _publicEndpointEnable);

                    /**
                     * 判断参数 PublicEndpointEnable 是否已赋值
                     * @return PublicEndpointEnable 是否已赋值
                     * 
                     */
                    bool PublicEndpointEnableHasBeenSet() const;

                    /**
                     * 获取内网访问
                     * @return VpcEndpointEnable 内网访问
                     * 
                     */
                    bool GetVpcEndpointEnable() const;

                    /**
                     * 设置内网访问
                     * @param _vpcEndpointEnable 内网访问
                     * 
                     */
                    void SetVpcEndpointEnable(const bool& _vpcEndpointEnable);

                    /**
                     * 判断参数 VpcEndpointEnable 是否已赋值
                     * @return VpcEndpointEnable 是否已赋值
                     * 
                     */
                    bool VpcEndpointEnableHasBeenSet() const;

                    /**
                     * 获取vpc内网ID
                     * @return VpcId vpc内网ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc内网ID
                     * @param _vpcId vpc内网ID
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

                private:

                    /**
                     * 公网访问
                     */
                    bool m_publicEndpointEnable;
                    bool m_publicEndpointEnableHasBeenSet;

                    /**
                     * 内网访问
                     */
                    bool m_vpcEndpointEnable;
                    bool m_vpcEndpointEnableHasBeenSet;

                    /**
                     * vpc内网ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_NETWORKSETTING_H_
