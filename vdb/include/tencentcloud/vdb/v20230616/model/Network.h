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
                     * 获取<p>VpcId(VPC网络下有效)</p>
                     * @return VpcId <p>VpcId(VPC网络下有效)</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VpcId(VPC网络下有效)</p>
                     * @param _vpcId <p>VpcId(VPC网络下有效)</p>
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
                     * 获取<p>子网Id(VPC网络下有效)。</p>
                     * @return SubnetId <p>子网Id(VPC网络下有效)。</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>子网Id(VPC网络下有效)。</p>
                     * @param _subnetId <p>子网Id(VPC网络下有效)。</p>
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
                     * 获取<p>内网访问IP。</p>
                     * @return Vip <p>内网访问IP。</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>内网访问IP。</p>
                     * @param _vip <p>内网访问IP。</p>
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
                     * 获取<p>内网访问Port。</p>
                     * @return Port <p>内网访问Port。</p>
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置<p>内网访问Port。</p>
                     * @param _port <p>内网访问Port。</p>
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
                     * 获取<p>旧 ip 保留时长，单位天</p>
                     * @return PreserveDuration <p>旧 ip 保留时长，单位天</p>
                     * 
                     */
                    int64_t GetPreserveDuration() const;

                    /**
                     * 设置<p>旧 ip 保留时长，单位天</p>
                     * @param _preserveDuration <p>旧 ip 保留时长，单位天</p>
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
                     * 获取<p>旧 ip 到期时间</p>
                     * @return ExpireTime <p>旧 ip 到期时间</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>旧 ip 到期时间</p>
                     * @param _expireTime <p>旧 ip 到期时间</p>
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否是ssl网络</p>
                     * @return IsSSL <p>是否是ssl网络</p>
                     * 
                     */
                    bool GetIsSSL() const;

                    /**
                     * 设置<p>是否是ssl网络</p>
                     * @param _isSSL <p>是否是ssl网络</p>
                     * 
                     */
                    void SetIsSSL(const bool& _isSSL);

                    /**
                     * 判断参数 IsSSL 是否已赋值
                     * @return IsSSL 是否已赋值
                     * 
                     */
                    bool IsSSLHasBeenSet() const;

                private:

                    /**
                     * <p>VpcId(VPC网络下有效)</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网Id(VPC网络下有效)。</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>内网访问IP。</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>内网访问Port。</p>
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>旧 ip 保留时长，单位天</p>
                     */
                    int64_t m_preserveDuration;
                    bool m_preserveDurationHasBeenSet;

                    /**
                     * <p>旧 ip 到期时间</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>是否是ssl网络</p>
                     */
                    bool m_isSSL;
                    bool m_isSSLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VDB_V20230616_MODEL_NETWORK_H_
