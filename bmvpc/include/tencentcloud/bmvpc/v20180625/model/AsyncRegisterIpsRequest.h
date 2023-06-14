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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_ASYNCREGISTERIPSREQUEST_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_ASYNCREGISTERIPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmvpc
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * AsyncRegisterIps请求参数结构体
                */
                class AsyncRegisterIpsRequest : public AbstractModel
                {
                public:
                    AsyncRegisterIpsRequest();
                    ~AsyncRegisterIpsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取私有网络的唯一ID。
                     * @return VpcId 私有网络的唯一ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络的唯一ID。
                     * @param _vpcId 私有网络的唯一ID。
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
                     * 获取子网唯一ID。
                     * @return SubnetId 子网唯一ID。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网唯一ID。
                     * @param _subnetId 子网唯一ID。
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
                     * 获取需要注册的IP列表。
                     * @return Ips 需要注册的IP列表。
                     * 
                     */
                    std::vector<std::string> GetIps() const;

                    /**
                     * 设置需要注册的IP列表。
                     * @param _ips 需要注册的IP列表。
                     * 
                     */
                    void SetIps(const std::vector<std::string>& _ips);

                    /**
                     * 判断参数 Ips 是否已赋值
                     * @return Ips 是否已赋值
                     * 
                     */
                    bool IpsHasBeenSet() const;

                private:

                    /**
                     * 私有网络的唯一ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网唯一ID。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 需要注册的IP列表。
                     */
                    std::vector<std::string> m_ips;
                    bool m_ipsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_ASYNCREGISTERIPSREQUEST_H_
