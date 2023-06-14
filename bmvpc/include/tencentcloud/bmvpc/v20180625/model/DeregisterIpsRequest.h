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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_DEREGISTERIPSREQUEST_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_DEREGISTERIPSREQUEST_H_

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
                * DeregisterIps请求参数结构体
                */
                class DeregisterIpsRequest : public AbstractModel
                {
                public:
                    DeregisterIpsRequest();
                    ~DeregisterIpsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取私有网络ID
                     * @return VpcId 私有网络ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID
                     * @param _vpcId 私有网络ID
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
                     * 获取注销指定IP的列表
                     * @return IpSet 注销指定IP的列表
                     * 
                     */
                    std::vector<std::string> GetIpSet() const;

                    /**
                     * 设置注销指定IP的列表
                     * @param _ipSet 注销指定IP的列表
                     * 
                     */
                    void SetIpSet(const std::vector<std::string>& _ipSet);

                    /**
                     * 判断参数 IpSet 是否已赋值
                     * @return IpSet 是否已赋值
                     * 
                     */
                    bool IpSetHasBeenSet() const;

                    /**
                     * 获取私有网络子网ID
                     * @return SubnetId 私有网络子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置私有网络子网ID
                     * @param _subnetId 私有网络子网ID
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
                     * 私有网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 注销指定IP的列表
                     */
                    std::vector<std::string> m_ipSet;
                    bool m_ipSetHasBeenSet;

                    /**
                     * 私有网络子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_DEREGISTERIPSREQUEST_H_
