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
                     * 获取<p>指定需修改网络的实例 ID。例如：cmgo-p8vn****。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     * @return InstanceId <p>指定需修改网络的实例 ID。例如：cmgo-p8vn****。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>指定需修改网络的实例 ID。例如：cmgo-p8vn****。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     * @param _instanceId <p>指定需修改网络的实例 ID。例如：cmgo-p8vn****。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
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
                     * 获取<p>原 IP 地址保留时长。</p><ul><li>单位为分钟，0表示立即回收原 IP 地址。</li><li>原 IP 将在约定时间后释放，在释放前原 IP和新 IP均可访问。</li></ul>
                     * @return OldIpExpiredTime <p>原 IP 地址保留时长。</p><ul><li>单位为分钟，0表示立即回收原 IP 地址。</li><li>原 IP 将在约定时间后释放，在释放前原 IP和新 IP均可访问。</li></ul>
                     * 
                     */
                    uint64_t GetOldIpExpiredTime() const;

                    /**
                     * 设置<p>原 IP 地址保留时长。</p><ul><li>单位为分钟，0表示立即回收原 IP 地址。</li><li>原 IP 将在约定时间后释放，在释放前原 IP和新 IP均可访问。</li></ul>
                     * @param _oldIpExpiredTime <p>原 IP 地址保留时长。</p><ul><li>单位为分钟，0表示立即回收原 IP 地址。</li><li>原 IP 将在约定时间后释放，在释放前原 IP和新 IP均可访问。</li></ul>
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
                     * 获取<p>切换后的私有网络 ID，若实例当前为基础网络，该字段无需配置。请通过接口 <a href="https://cloud.tencent.com/document/product/240/38568">DescribeDBInstances</a> 获取私有网络 ID。</p>
                     * @return NewUniqVpcId <p>切换后的私有网络 ID，若实例当前为基础网络，该字段无需配置。请通过接口 <a href="https://cloud.tencent.com/document/product/240/38568">DescribeDBInstances</a> 获取私有网络 ID。</p>
                     * 
                     */
                    std::string GetNewUniqVpcId() const;

                    /**
                     * 设置<p>切换后的私有网络 ID，若实例当前为基础网络，该字段无需配置。请通过接口 <a href="https://cloud.tencent.com/document/product/240/38568">DescribeDBInstances</a> 获取私有网络 ID。</p>
                     * @param _newUniqVpcId <p>切换后的私有网络 ID，若实例当前为基础网络，该字段无需配置。请通过接口 <a href="https://cloud.tencent.com/document/product/240/38568">DescribeDBInstances</a> 获取私有网络 ID。</p>
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
                     * 获取<p>切换后私有网络的子网 ID。若实例当前为基础网络，该字段无需配置。请通过接口 <a href="https://cloud.tencent.com/document/product/240/38568">DescribeDBInstances</a> 获取私有网络的子网 ID。</p>
                     * @return NewUniqSubnetId <p>切换后私有网络的子网 ID。若实例当前为基础网络，该字段无需配置。请通过接口 <a href="https://cloud.tencent.com/document/product/240/38568">DescribeDBInstances</a> 获取私有网络的子网 ID。</p>
                     * 
                     */
                    std::string GetNewUniqSubnetId() const;

                    /**
                     * 设置<p>切换后私有网络的子网 ID。若实例当前为基础网络，该字段无需配置。请通过接口 <a href="https://cloud.tencent.com/document/product/240/38568">DescribeDBInstances</a> 获取私有网络的子网 ID。</p>
                     * @param _newUniqSubnetId <p>切换后私有网络的子网 ID。若实例当前为基础网络，该字段无需配置。请通过接口 <a href="https://cloud.tencent.com/document/product/240/38568">DescribeDBInstances</a> 获取私有网络的子网 ID。</p>
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
                     * 获取<p>IP 地址信息，包含新 IP 地址与 原 IP 地址。</p>
                     * @return NetworkAddresses <p>IP 地址信息，包含新 IP 地址与 原 IP 地址。</p>
                     * 
                     */
                    std::vector<ModifyNetworkAddress> GetNetworkAddresses() const;

                    /**
                     * 设置<p>IP 地址信息，包含新 IP 地址与 原 IP 地址。</p>
                     * @param _networkAddresses <p>IP 地址信息，包含新 IP 地址与 原 IP 地址。</p>
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
                     * <p>指定需修改网络的实例 ID。例如：cmgo-p8vn****。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>原 IP 地址保留时长。</p><ul><li>单位为分钟，0表示立即回收原 IP 地址。</li><li>原 IP 将在约定时间后释放，在释放前原 IP和新 IP均可访问。</li></ul>
                     */
                    uint64_t m_oldIpExpiredTime;
                    bool m_oldIpExpiredTimeHasBeenSet;

                    /**
                     * <p>切换后的私有网络 ID，若实例当前为基础网络，该字段无需配置。请通过接口 <a href="https://cloud.tencent.com/document/product/240/38568">DescribeDBInstances</a> 获取私有网络 ID。</p>
                     */
                    std::string m_newUniqVpcId;
                    bool m_newUniqVpcIdHasBeenSet;

                    /**
                     * <p>切换后私有网络的子网 ID。若实例当前为基础网络，该字段无需配置。请通过接口 <a href="https://cloud.tencent.com/document/product/240/38568">DescribeDBInstances</a> 获取私有网络的子网 ID。</p>
                     */
                    std::string m_newUniqSubnetId;
                    bool m_newUniqSubnetIdHasBeenSet;

                    /**
                     * <p>IP 地址信息，包含新 IP 地址与 原 IP 地址。</p>
                     */
                    std::vector<ModifyNetworkAddress> m_networkAddresses;
                    bool m_networkAddressesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYDBINSTANCENETWORKADDRESSREQUEST_H_
