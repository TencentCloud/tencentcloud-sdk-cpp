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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYINSTANCESVPCATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYINSTANCESVPCATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/VirtualPrivateCloud.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyInstancesVpcAttribute请求参数结构体
                */
                class ModifyInstancesVpcAttributeRequest : public AbstractModel
                {
                public:
                    ModifyInstancesVpcAttributeRequest();
                    ~ModifyInstancesVpcAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>待操作的实例ID数组。可通过 <a href="https://cloud.tencent.com/document/api/213/15728">DescribeInstances</a> 接口返回值中的<code>InstanceId</code>获取。</p>
                     * @return InstanceIds <p>待操作的实例ID数组。可通过 <a href="https://cloud.tencent.com/document/api/213/15728">DescribeInstances</a> 接口返回值中的<code>InstanceId</code>获取。</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>待操作的实例ID数组。可通过 <a href="https://cloud.tencent.com/document/api/213/15728">DescribeInstances</a> 接口返回值中的<code>InstanceId</code>获取。</p>
                     * @param _instanceIds <p>待操作的实例ID数组。可通过 <a href="https://cloud.tencent.com/document/api/213/15728">DescribeInstances</a> 接口返回值中的<code>InstanceId</code>获取。</p>
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取<p>私有网络相关信息配置，通过该参数指定私有网络的ID，子网ID，私有网络ip等信息。<br><li>当指定私有网络ID和子网ID（子网必须在实例所在的可用区）与指定实例所在私有网络不一致时，会将实例迁移至指定的私有网络的子网下。</li><li>可通过<code>PrivateIpAddresses</code>指定私有网络子网IP，若需指定则所有已指定的实例均需要指定子网IP，此时<code>InstanceIds</code>与<code>PrivateIpAddresses</code>一一对应。</li><li>不指定<code>PrivateIpAddresses</code>时随机分配私有网络子网IP。</li></p>
                     * @return VirtualPrivateCloud <p>私有网络相关信息配置，通过该参数指定私有网络的ID，子网ID，私有网络ip等信息。<br><li>当指定私有网络ID和子网ID（子网必须在实例所在的可用区）与指定实例所在私有网络不一致时，会将实例迁移至指定的私有网络的子网下。</li><li>可通过<code>PrivateIpAddresses</code>指定私有网络子网IP，若需指定则所有已指定的实例均需要指定子网IP，此时<code>InstanceIds</code>与<code>PrivateIpAddresses</code>一一对应。</li><li>不指定<code>PrivateIpAddresses</code>时随机分配私有网络子网IP。</li></p>
                     * 
                     */
                    VirtualPrivateCloud GetVirtualPrivateCloud() const;

                    /**
                     * 设置<p>私有网络相关信息配置，通过该参数指定私有网络的ID，子网ID，私有网络ip等信息。<br><li>当指定私有网络ID和子网ID（子网必须在实例所在的可用区）与指定实例所在私有网络不一致时，会将实例迁移至指定的私有网络的子网下。</li><li>可通过<code>PrivateIpAddresses</code>指定私有网络子网IP，若需指定则所有已指定的实例均需要指定子网IP，此时<code>InstanceIds</code>与<code>PrivateIpAddresses</code>一一对应。</li><li>不指定<code>PrivateIpAddresses</code>时随机分配私有网络子网IP。</li></p>
                     * @param _virtualPrivateCloud <p>私有网络相关信息配置，通过该参数指定私有网络的ID，子网ID，私有网络ip等信息。<br><li>当指定私有网络ID和子网ID（子网必须在实例所在的可用区）与指定实例所在私有网络不一致时，会将实例迁移至指定的私有网络的子网下。</li><li>可通过<code>PrivateIpAddresses</code>指定私有网络子网IP，若需指定则所有已指定的实例均需要指定子网IP，此时<code>InstanceIds</code>与<code>PrivateIpAddresses</code>一一对应。</li><li>不指定<code>PrivateIpAddresses</code>时随机分配私有网络子网IP。</li></p>
                     * 
                     */
                    void SetVirtualPrivateCloud(const VirtualPrivateCloud& _virtualPrivateCloud);

                    /**
                     * 判断参数 VirtualPrivateCloud 是否已赋值
                     * @return VirtualPrivateCloud 是否已赋值
                     * 
                     */
                    bool VirtualPrivateCloudHasBeenSet() const;

                    /**
                     * 获取<p>是否对运行中的实例选择强制关机。默认为true。</p>
                     * @return ForceStop <p>是否对运行中的实例选择强制关机。默认为true。</p>
                     * 
                     */
                    bool GetForceStop() const;

                    /**
                     * 设置<p>是否对运行中的实例选择强制关机。默认为true。</p>
                     * @param _forceStop <p>是否对运行中的实例选择强制关机。默认为true。</p>
                     * 
                     */
                    void SetForceStop(const bool& _forceStop);

                    /**
                     * 判断参数 ForceStop 是否已赋值
                     * @return ForceStop 是否已赋值
                     * 
                     */
                    bool ForceStopHasBeenSet() const;

                    /**
                     * 获取<p>是否保留主机名。</p><p>默认值：true</p>
                     * @return ReserveHostName <p>是否保留主机名。</p><p>默认值：true</p>
                     * 
                     */
                    bool GetReserveHostName() const;

                    /**
                     * 设置<p>是否保留主机名。</p><p>默认值：true</p>
                     * @param _reserveHostName <p>是否保留主机名。</p><p>默认值：true</p>
                     * 
                     */
                    void SetReserveHostName(const bool& _reserveHostName);

                    /**
                     * 判断参数 ReserveHostName 是否已赋值
                     * @return ReserveHostName 是否已赋值
                     * 
                     */
                    bool ReserveHostNameHasBeenSet() const;

                private:

                    /**
                     * <p>待操作的实例ID数组。可通过 <a href="https://cloud.tencent.com/document/api/213/15728">DescribeInstances</a> 接口返回值中的<code>InstanceId</code>获取。</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>私有网络相关信息配置，通过该参数指定私有网络的ID，子网ID，私有网络ip等信息。<br><li>当指定私有网络ID和子网ID（子网必须在实例所在的可用区）与指定实例所在私有网络不一致时，会将实例迁移至指定的私有网络的子网下。</li><li>可通过<code>PrivateIpAddresses</code>指定私有网络子网IP，若需指定则所有已指定的实例均需要指定子网IP，此时<code>InstanceIds</code>与<code>PrivateIpAddresses</code>一一对应。</li><li>不指定<code>PrivateIpAddresses</code>时随机分配私有网络子网IP。</li></p>
                     */
                    VirtualPrivateCloud m_virtualPrivateCloud;
                    bool m_virtualPrivateCloudHasBeenSet;

                    /**
                     * <p>是否对运行中的实例选择强制关机。默认为true。</p>
                     */
                    bool m_forceStop;
                    bool m_forceStopHasBeenSet;

                    /**
                     * <p>是否保留主机名。</p><p>默认值：true</p>
                     */
                    bool m_reserveHostName;
                    bool m_reserveHostNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYINSTANCESVPCATTRIBUTEREQUEST_H_
