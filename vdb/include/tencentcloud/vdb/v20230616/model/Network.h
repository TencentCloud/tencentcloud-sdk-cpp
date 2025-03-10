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

#ifndef TENCENTCLOUD_VDB_V20230616_MODEL_NETWORK_H_
#define TENCENTCLOUD_VDB_V20230616_MODEL_NETWORK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vdb
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * 网络信息
                */
                class Network : public AbstractModel
                {
                public:
                    Network();
                    ~Network() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VpcId(VPC网络下有效)
                     * @return VpcId VpcId(VPC网络下有效)
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VpcId(VPC网络下有效)
                     * @param _vpcId VpcId(VPC网络下有效)
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
                     * 获取子网Id(VPC网络下有效)。
                     * @return SubnetId 子网Id(VPC网络下有效)。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网Id(VPC网络下有效)。
                     * @param _subnetId 子网Id(VPC网络下有效)。
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
                     * 获取内网访问IP。
                     * @return Vip 内网访问IP。
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置内网访问IP。
                     * @param _vip 内网访问IP。
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取内网访问Port。
                     * @return Port 内网访问Port。
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置内网访问Port。
                     * @param _port 内网访问Port。
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取旧 ip 保留时长，单位天
                     * @return PreserveDuration 旧 ip 保留时长，单位天
                     * 
                     */
                    int64_t GetPreserveDuration() const;

                    /**
                     * 设置旧 ip 保留时长，单位天
                     * @param _preserveDuration 旧 ip 保留时长，单位天
                     * 
                     */
                    void SetPreserveDuration(const int64_t& _preserveDuration);

                    /**
                     * 判断参数 PreserveDuration 是否已赋值
                     * @return PreserveDuration 是否已赋值
                     * 
                     */
                    bool PreserveDurationHasBeenSet() const;

                    /**
                     * 获取旧 ip 到期时间
                     * @return ExpireTime 旧 ip 到期时间
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置旧 ip 到期时间
                     * @param _expireTime 旧 ip 到期时间
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * VpcId(VPC网络下有效)
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网Id(VPC网络下有效)。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 内网访问IP。
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 内网访问Port。
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 旧 ip 保留时长，单位天
                     */
                    int64_t m_preserveDuration;
                    bool m_preserveDurationHasBeenSet;

                    /**
                     * 旧 ip 到期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VDB_V20230616_MODEL_NETWORK_H_
