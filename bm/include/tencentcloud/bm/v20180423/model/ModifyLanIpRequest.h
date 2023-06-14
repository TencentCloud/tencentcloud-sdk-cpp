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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_MODIFYLANIPREQUEST_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_MODIFYLANIPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * ModifyLanIp请求参数结构体
                */
                class ModifyLanIpRequest : public AbstractModel
                {
                public:
                    ModifyLanIpRequest();
                    ~ModifyLanIpRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取物理机ID
                     * @return InstanceId 物理机ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置物理机ID
                     * @param _instanceId 物理机ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取指定新VPC
                     * @return VpcId 指定新VPC
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置指定新VPC
                     * @param _vpcId 指定新VPC
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
                     * 获取指定新子网
                     * @return SubnetId 指定新子网
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置指定新子网
                     * @param _subnetId 指定新子网
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
                     * 获取指定新内网IP
                     * @return LanIp 指定新内网IP
                     * 
                     */
                    std::string GetLanIp() const;

                    /**
                     * 设置指定新内网IP
                     * @param _lanIp 指定新内网IP
                     * 
                     */
                    void SetLanIp(const std::string& _lanIp);

                    /**
                     * 判断参数 LanIp 是否已赋值
                     * @return LanIp 是否已赋值
                     * 
                     */
                    bool LanIpHasBeenSet() const;

                    /**
                     * 获取是否需要重启机器，取值 1(需要) 0(不需要)，默认取值0
                     * @return RebootDevice 是否需要重启机器，取值 1(需要) 0(不需要)，默认取值0
                     * 
                     */
                    uint64_t GetRebootDevice() const;

                    /**
                     * 设置是否需要重启机器，取值 1(需要) 0(不需要)，默认取值0
                     * @param _rebootDevice 是否需要重启机器，取值 1(需要) 0(不需要)，默认取值0
                     * 
                     */
                    void SetRebootDevice(const uint64_t& _rebootDevice);

                    /**
                     * 判断参数 RebootDevice 是否已赋值
                     * @return RebootDevice 是否已赋值
                     * 
                     */
                    bool RebootDeviceHasBeenSet() const;

                private:

                    /**
                     * 物理机ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 指定新VPC
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 指定新子网
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 指定新内网IP
                     */
                    std::string m_lanIp;
                    bool m_lanIpHasBeenSet;

                    /**
                     * 是否需要重启机器，取值 1(需要) 0(不需要)，默认取值0
                     */
                    uint64_t m_rebootDevice;
                    bool m_rebootDeviceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_MODIFYLANIPREQUEST_H_
