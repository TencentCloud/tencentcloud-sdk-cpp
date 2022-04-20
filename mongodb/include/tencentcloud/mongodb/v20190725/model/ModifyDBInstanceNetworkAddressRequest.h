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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYDBINSTANCENETWORKADDRESSREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYDBINSTANCENETWORKADDRESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/ModifyNetworkAddress.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * ModifyDBInstanceNetworkAddress请求参数结构体
                */
                class ModifyDBInstanceNetworkAddressRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceNetworkAddressRequest();
                    ~ModifyDBInstanceNetworkAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param InstanceId 实例ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取原IP保留时长，单位为分钟；原IP会在约定时间后释放，在释放前原IP和新IP均可访问；0表示立即回收原IP
                     * @return OldIpExpiredTime 原IP保留时长，单位为分钟；原IP会在约定时间后释放，在释放前原IP和新IP均可访问；0表示立即回收原IP
                     */
                    uint64_t GetOldIpExpiredTime() const;

                    /**
                     * 设置原IP保留时长，单位为分钟；原IP会在约定时间后释放，在释放前原IP和新IP均可访问；0表示立即回收原IP
                     * @param OldIpExpiredTime 原IP保留时长，单位为分钟；原IP会在约定时间后释放，在释放前原IP和新IP均可访问；0表示立即回收原IP
                     */
                    void SetOldIpExpiredTime(const uint64_t& _oldIpExpiredTime);

                    /**
                     * 判断参数 OldIpExpiredTime 是否已赋值
                     * @return OldIpExpiredTime 是否已赋值
                     */
                    bool OldIpExpiredTimeHasBeenSet() const;

                    /**
                     * 获取切换后IP地址的归属私有网络统一ID，若为基础网络，该字段为空
                     * @return NewUniqVpcId 切换后IP地址的归属私有网络统一ID，若为基础网络，该字段为空
                     */
                    std::string GetNewUniqVpcId() const;

                    /**
                     * 设置切换后IP地址的归属私有网络统一ID，若为基础网络，该字段为空
                     * @param NewUniqVpcId 切换后IP地址的归属私有网络统一ID，若为基础网络，该字段为空
                     */
                    void SetNewUniqVpcId(const std::string& _newUniqVpcId);

                    /**
                     * 判断参数 NewUniqVpcId 是否已赋值
                     * @return NewUniqVpcId 是否已赋值
                     */
                    bool NewUniqVpcIdHasBeenSet() const;

                    /**
                     * 获取切换后IP地址的归属子网统一ID，若为基础网络，该字段为空
                     * @return NewUniqSubnetId 切换后IP地址的归属子网统一ID，若为基础网络，该字段为空
                     */
                    std::string GetNewUniqSubnetId() const;

                    /**
                     * 设置切换后IP地址的归属子网统一ID，若为基础网络，该字段为空
                     * @param NewUniqSubnetId 切换后IP地址的归属子网统一ID，若为基础网络，该字段为空
                     */
                    void SetNewUniqSubnetId(const std::string& _newUniqSubnetId);

                    /**
                     * 判断参数 NewUniqSubnetId 是否已赋值
                     * @return NewUniqSubnetId 是否已赋值
                     */
                    bool NewUniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取待修改IP信息
                     * @return NetworkAddresses 待修改IP信息
                     */
                    std::vector<ModifyNetworkAddress> GetNetworkAddresses() const;

                    /**
                     * 设置待修改IP信息
                     * @param NetworkAddresses 待修改IP信息
                     */
                    void SetNetworkAddresses(const std::vector<ModifyNetworkAddress>& _networkAddresses);

                    /**
                     * 判断参数 NetworkAddresses 是否已赋值
                     * @return NetworkAddresses 是否已赋值
                     */
                    bool NetworkAddressesHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 原IP保留时长，单位为分钟；原IP会在约定时间后释放，在释放前原IP和新IP均可访问；0表示立即回收原IP
                     */
                    uint64_t m_oldIpExpiredTime;
                    bool m_oldIpExpiredTimeHasBeenSet;

                    /**
                     * 切换后IP地址的归属私有网络统一ID，若为基础网络，该字段为空
                     */
                    std::string m_newUniqVpcId;
                    bool m_newUniqVpcIdHasBeenSet;

                    /**
                     * 切换后IP地址的归属子网统一ID，若为基础网络，该字段为空
                     */
                    std::string m_newUniqSubnetId;
                    bool m_newUniqSubnetIdHasBeenSet;

                    /**
                     * 待修改IP信息
                     */
                    std::vector<ModifyNetworkAddress> m_networkAddresses;
                    bool m_networkAddressesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYDBINSTANCENETWORKADDRESSREQUEST_H_
