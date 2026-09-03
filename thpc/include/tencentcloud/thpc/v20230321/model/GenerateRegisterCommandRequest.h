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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_GENERATEREGISTERCOMMANDREQUEST_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_GENERATEREGISTERCOMMANDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * GenerateRegisterCommand请求参数结构体
                */
                class GenerateRegisterCommandRequest : public AbstractModel
                {
                public:
                    GenerateRegisterCommandRequest();
                    ~GenerateRegisterCommandRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>IDC集群ID，形如<code>hpc-xxxxxxxx</code>。</p>
                     * @return ClusterId <p>IDC集群ID，形如<code>hpc-xxxxxxxx</code>。</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>IDC集群ID，形如<code>hpc-xxxxxxxx</code>。</p>
                     * @param _clusterId <p>IDC集群ID，形如<code>hpc-xxxxxxxx</code>。</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>是否通过内网专线代理连接。</p><li>true：IDC机器需经PrivateLink代理接入</li><li>false：IDC机器可直连（默认值）</li><p></p>
                     * @return Proxy <p>是否通过内网专线代理连接。</p><li>true：IDC机器需经PrivateLink代理接入</li><li>false：IDC机器可直连（默认值）</li><p></p>
                     * 
                     */
                    bool GetProxy() const;

                    /**
                     * 设置<p>是否通过内网专线代理连接。</p><li>true：IDC机器需经PrivateLink代理接入</li><li>false：IDC机器可直连（默认值）</li><p></p>
                     * @param _proxy <p>是否通过内网专线代理连接。</p><li>true：IDC机器需经PrivateLink代理接入</li><li>false：IDC机器可直连（默认值）</li><p></p>
                     * 
                     */
                    void SetProxy(const bool& _proxy);

                    /**
                     * 判断参数 Proxy 是否已赋值
                     * @return Proxy 是否已赋值
                     * 
                     */
                    bool ProxyHasBeenSet() const;

                    /**
                     * 获取<p>私有网络ID，形如<code>vpc-xxx</code>。仅当<code>Proxy=true</code>且集群未绑定VPC时必填。与SubnetId需同时指定或同时不指定。</p>
                     * @return VpcId <p>私有网络ID，形如<code>vpc-xxx</code>。仅当<code>Proxy=true</code>且集群未绑定VPC时必填。与SubnetId需同时指定或同时不指定。</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>私有网络ID，形如<code>vpc-xxx</code>。仅当<code>Proxy=true</code>且集群未绑定VPC时必填。与SubnetId需同时指定或同时不指定。</p>
                     * @param _vpcId <p>私有网络ID，形如<code>vpc-xxx</code>。仅当<code>Proxy=true</code>且集群未绑定VPC时必填。与SubnetId需同时指定或同时不指定。</p>
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
                     * 获取<p>私有网络子网ID，形如<code>subnet-xxx</code>。仅当<code>Proxy=true</code>且集群未绑定VPC时必填。与VpcId需同时指定或同时不指定。</p>
                     * @return SubnetId <p>私有网络子网ID，形如<code>subnet-xxx</code>。仅当<code>Proxy=true</code>且集群未绑定VPC时必填。与VpcId需同时指定或同时不指定。</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>私有网络子网ID，形如<code>subnet-xxx</code>。仅当<code>Proxy=true</code>且集群未绑定VPC时必填。与VpcId需同时指定或同时不指定。</p>
                     * @param _subnetId <p>私有网络子网ID，形如<code>subnet-xxx</code>。仅当<code>Proxy=true</code>且集群未绑定VPC时必填。与VpcId需同时指定或同时不指定。</p>
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
                     * 获取<p>注册码绑定的队列名称。不指定时由系统取集群默认队列。</p>
                     * @return QueueName <p>注册码绑定的队列名称。不指定时由系统取集群默认队列。</p>
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置<p>注册码绑定的队列名称。不指定时由系统取集群默认队列。</p>
                     * @param _queueName <p>注册码绑定的队列名称。不指定时由系统取集群默认队列。</p>
                     * 
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取<p>注册码有效期，单位：秒。默认值为604800（7天）。</p>
                     * @return ExpireSeconds <p>注册码有效期，单位：秒。默认值为604800（7天）。</p>
                     * 
                     */
                    int64_t GetExpireSeconds() const;

                    /**
                     * 设置<p>注册码有效期，单位：秒。默认值为604800（7天）。</p>
                     * @param _expireSeconds <p>注册码有效期，单位：秒。默认值为604800（7天）。</p>
                     * 
                     */
                    void SetExpireSeconds(const int64_t& _expireSeconds);

                    /**
                     * 判断参数 ExpireSeconds 是否已赋值
                     * @return ExpireSeconds 是否已赋值
                     * 
                     */
                    bool ExpireSecondsHasBeenSet() const;

                private:

                    /**
                     * <p>IDC集群ID，形如<code>hpc-xxxxxxxx</code>。</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>是否通过内网专线代理连接。</p><li>true：IDC机器需经PrivateLink代理接入</li><li>false：IDC机器可直连（默认值）</li><p></p>
                     */
                    bool m_proxy;
                    bool m_proxyHasBeenSet;

                    /**
                     * <p>私有网络ID，形如<code>vpc-xxx</code>。仅当<code>Proxy=true</code>且集群未绑定VPC时必填。与SubnetId需同时指定或同时不指定。</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>私有网络子网ID，形如<code>subnet-xxx</code>。仅当<code>Proxy=true</code>且集群未绑定VPC时必填。与VpcId需同时指定或同时不指定。</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>注册码绑定的队列名称。不指定时由系统取集群默认队列。</p>
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * <p>注册码有效期，单位：秒。默认值为604800（7天）。</p>
                     */
                    int64_t m_expireSeconds;
                    bool m_expireSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_GENERATEREGISTERCOMMANDREQUEST_H_
