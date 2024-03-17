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
                     * 获取指定需修改网络的实例 ID。例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。

                     * @return InstanceId 指定需修改网络的实例 ID。例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。

                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置指定需修改网络的实例 ID。例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。

                     * @param _instanceId 指定需修改网络的实例 ID。例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。

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
                     * 获取原 IP 地址保留时长。
- 单位为分钟，0表示立即回收原 IP 地址。
- 原 IP 将在约定时间后释放，在释放前原 IP和新 IP均可访问。

                     * @return OldIpExpiredTime 原 IP 地址保留时长。
- 单位为分钟，0表示立即回收原 IP 地址。
- 原 IP 将在约定时间后释放，在释放前原 IP和新 IP均可访问。

                     * 
                     */
                    uint64_t GetOldIpExpiredTime() const;

                    /**
                     * 设置原 IP 地址保留时长。
- 单位为分钟，0表示立即回收原 IP 地址。
- 原 IP 将在约定时间后释放，在释放前原 IP和新 IP均可访问。

                     * @param _oldIpExpiredTime 原 IP 地址保留时长。
- 单位为分钟，0表示立即回收原 IP 地址。
- 原 IP 将在约定时间后释放，在释放前原 IP和新 IP均可访问。

                     * 
                     */
                    void SetOldIpExpiredTime(const uint64_t& _oldIpExpiredTime);

                    /**
                     * 判断参数 OldIpExpiredTime 是否已赋值
                     * @return OldIpExpiredTime 是否已赋值
                     * 
                     */
                    bool OldIpExpiredTimeHasBeenSet() const;

                    /**
                     * 获取切换后的私有网络 ID，若实例当前为基础网络，该字段无需配置。
                     * @return NewUniqVpcId 切换后的私有网络 ID，若实例当前为基础网络，该字段无需配置。
                     * 
                     */
                    std::string GetNewUniqVpcId() const;

                    /**
                     * 设置切换后的私有网络 ID，若实例当前为基础网络，该字段无需配置。
                     * @param _newUniqVpcId 切换后的私有网络 ID，若实例当前为基础网络，该字段无需配置。
                     * 
                     */
                    void SetNewUniqVpcId(const std::string& _newUniqVpcId);

                    /**
                     * 判断参数 NewUniqVpcId 是否已赋值
                     * @return NewUniqVpcId 是否已赋值
                     * 
                     */
                    bool NewUniqVpcIdHasBeenSet() const;

                    /**
                     * 获取切换私有网络的子网 ID。若实例当前为基础网络，该字段无需配置。
                     * @return NewUniqSubnetId 切换私有网络的子网 ID。若实例当前为基础网络，该字段无需配置。
                     * 
                     */
                    std::string GetNewUniqSubnetId() const;

                    /**
                     * 设置切换私有网络的子网 ID。若实例当前为基础网络，该字段无需配置。
                     * @param _newUniqSubnetId 切换私有网络的子网 ID。若实例当前为基础网络，该字段无需配置。
                     * 
                     */
                    void SetNewUniqSubnetId(const std::string& _newUniqSubnetId);

                    /**
                     * 判断参数 NewUniqSubnetId 是否已赋值
                     * @return NewUniqSubnetId 是否已赋值
                     * 
                     */
                    bool NewUniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取IP 地址信息，包含新 IP 地址与 原 IP 地址。
                     * @return NetworkAddresses IP 地址信息，包含新 IP 地址与 原 IP 地址。
                     * 
                     */
                    std::vector<ModifyNetworkAddress> GetNetworkAddresses() const;

                    /**
                     * 设置IP 地址信息，包含新 IP 地址与 原 IP 地址。
                     * @param _networkAddresses IP 地址信息，包含新 IP 地址与 原 IP 地址。
                     * 
                     */
                    void SetNetworkAddresses(const std::vector<ModifyNetworkAddress>& _networkAddresses);

                    /**
                     * 判断参数 NetworkAddresses 是否已赋值
                     * @return NetworkAddresses 是否已赋值
                     * 
                     */
                    bool NetworkAddressesHasBeenSet() const;

                private:

                    /**
                     * 指定需修改网络的实例 ID。例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。

                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 原 IP 地址保留时长。
- 单位为分钟，0表示立即回收原 IP 地址。
- 原 IP 将在约定时间后释放，在释放前原 IP和新 IP均可访问。

                     */
                    uint64_t m_oldIpExpiredTime;
                    bool m_oldIpExpiredTimeHasBeenSet;

                    /**
                     * 切换后的私有网络 ID，若实例当前为基础网络，该字段无需配置。
                     */
                    std::string m_newUniqVpcId;
                    bool m_newUniqVpcIdHasBeenSet;

                    /**
                     * 切换私有网络的子网 ID。若实例当前为基础网络，该字段无需配置。
                     */
                    std::string m_newUniqSubnetId;
                    bool m_newUniqSubnetIdHasBeenSet;

                    /**
                     * IP 地址信息，包含新 IP 地址与 原 IP 地址。
                     */
                    std::vector<ModifyNetworkAddress> m_networkAddresses;
                    bool m_networkAddressesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYDBINSTANCENETWORKADDRESSREQUEST_H_
