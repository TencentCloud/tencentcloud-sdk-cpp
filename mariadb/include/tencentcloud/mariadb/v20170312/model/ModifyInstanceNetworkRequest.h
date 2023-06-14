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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYINSTANCENETWORKREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYINSTANCENETWORKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyInstanceNetwork请求参数结构体
                */
                class ModifyInstanceNetworkRequest : public AbstractModel
                {
                public:
                    ModifyInstanceNetworkRequest();
                    ~ModifyInstanceNetworkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取希望转到的VPC网络的VpcId
                     * @return VpcId 希望转到的VPC网络的VpcId
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置希望转到的VPC网络的VpcId
                     * @param _vpcId 希望转到的VPC网络的VpcId
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
                     * 获取希望转到的VPC网络的子网ID
                     * @return SubnetId 希望转到的VPC网络的子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置希望转到的VPC网络的子网ID
                     * @param _subnetId 希望转到的VPC网络的子网ID
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
                     * 获取如果需要指定VIP，填上该字段
                     * @return Vip 如果需要指定VIP，填上该字段
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置如果需要指定VIP，填上该字段
                     * @param _vip 如果需要指定VIP，填上该字段
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
                     * 获取如果需要指定VIPv6，填上该字段
                     * @return Vipv6 如果需要指定VIPv6，填上该字段
                     * 
                     */
                    std::string GetVipv6() const;

                    /**
                     * 设置如果需要指定VIPv6，填上该字段
                     * @param _vipv6 如果需要指定VIPv6，填上该字段
                     * 
                     */
                    void SetVipv6(const std::string& _vipv6);

                    /**
                     * 判断参数 Vipv6 是否已赋值
                     * @return Vipv6 是否已赋值
                     * 
                     */
                    bool Vipv6HasBeenSet() const;

                    /**
                     * 获取VIP保留时长，单位小时，取值范围（0~168），0表示立即释放，有一分钟释放延迟。不传此参数，默认24小时释放VIP。
                     * @return VipReleaseDelay VIP保留时长，单位小时，取值范围（0~168），0表示立即释放，有一分钟释放延迟。不传此参数，默认24小时释放VIP。
                     * 
                     */
                    uint64_t GetVipReleaseDelay() const;

                    /**
                     * 设置VIP保留时长，单位小时，取值范围（0~168），0表示立即释放，有一分钟释放延迟。不传此参数，默认24小时释放VIP。
                     * @param _vipReleaseDelay VIP保留时长，单位小时，取值范围（0~168），0表示立即释放，有一分钟释放延迟。不传此参数，默认24小时释放VIP。
                     * 
                     */
                    void SetVipReleaseDelay(const uint64_t& _vipReleaseDelay);

                    /**
                     * 判断参数 VipReleaseDelay 是否已赋值
                     * @return VipReleaseDelay 是否已赋值
                     * 
                     */
                    bool VipReleaseDelayHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 希望转到的VPC网络的VpcId
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 希望转到的VPC网络的子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 如果需要指定VIP，填上该字段
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 如果需要指定VIPv6，填上该字段
                     */
                    std::string m_vipv6;
                    bool m_vipv6HasBeenSet;

                    /**
                     * VIP保留时长，单位小时，取值范围（0~168），0表示立即释放，有一分钟释放延迟。不传此参数，默认24小时释放VIP。
                     */
                    uint64_t m_vipReleaseDelay;
                    bool m_vipReleaseDelayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYINSTANCENETWORKREQUEST_H_
