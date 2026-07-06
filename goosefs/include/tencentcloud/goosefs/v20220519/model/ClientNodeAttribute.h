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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CLIENTNODEATTRIBUTE_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CLIENTNODEATTRIBUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * 客户端节点属性
                */
                class ClientNodeAttribute : public AbstractModel
                {
                public:
                    ClientNodeAttribute();
                    ~ClientNodeAttribute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>客户端节点IP</p>
                     * @return ClientNodeIp <p>客户端节点IP</p>
                     * 
                     */
                    std::string GetClientNodeIp() const;

                    /**
                     * 设置<p>客户端节点IP</p>
                     * @param _clientNodeIp <p>客户端节点IP</p>
                     * 
                     */
                    void SetClientNodeIp(const std::string& _clientNodeIp);

                    /**
                     * 判断参数 ClientNodeIp 是否已赋值
                     * @return ClientNodeIp 是否已赋值
                     * 
                     */
                    bool ClientNodeIpHasBeenSet() const;

                    /**
                     * 获取<p>客户端节点服务状态, Active(运行中), Adding(添加中), Destroying(销毁中), Down(已停止)</p>
                     * @return Status <p>客户端节点服务状态, Active(运行中), Adding(添加中), Destroying(销毁中), Down(已停止)</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>客户端节点服务状态, Active(运行中), Adding(添加中), Destroying(销毁中), Down(已停止)</p>
                     * @param _status <p>客户端节点服务状态, Active(运行中), Adding(添加中), Destroying(销毁中), Down(已停止)</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>客户端节点类型，extend(扩展节点)，manager(管理节点)</p>
                     * @return ClientType <p>客户端节点类型，extend(扩展节点)，manager(管理节点)</p>
                     * 
                     */
                    std::string GetClientType() const;

                    /**
                     * 设置<p>客户端节点类型，extend(扩展节点)，manager(管理节点)</p>
                     * @param _clientType <p>客户端节点类型，extend(扩展节点)，manager(管理节点)</p>
                     * 
                     */
                    void SetClientType(const std::string& _clientType);

                    /**
                     * 判断参数 ClientType 是否已赋值
                     * @return ClientType 是否已赋值
                     * 
                     */
                    bool ClientTypeHasBeenSet() const;

                    /**
                     * 获取<p>节点所属vpcid</p>
                     * @return VpcId <p>节点所属vpcid</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>节点所属vpcid</p>
                     * @param _vpcId <p>节点所属vpcid</p>
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
                     * 获取<p>节点所属子网id</p>
                     * @return SubnetId <p>节点所属子网id</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>节点所属子网id</p>
                     * @param _subnetId <p>节点所属子网id</p>
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
                     * 获取<p>cvmId</p>
                     * @return InstanceId <p>cvmId</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>cvmId</p>
                     * @param _instanceId <p>cvmId</p>
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
                     * 获取<p>自定义挂载点</p>
                     * @return MountPoint <p>自定义挂载点</p>
                     * 
                     */
                    std::string GetMountPoint() const;

                    /**
                     * 设置<p>自定义挂载点</p>
                     * @param _mountPoint <p>自定义挂载点</p>
                     * 
                     */
                    void SetMountPoint(const std::string& _mountPoint);

                    /**
                     * 判断参数 MountPoint 是否已赋值
                     * @return MountPoint 是否已赋值
                     * 
                     */
                    bool MountPointHasBeenSet() const;

                    /**
                     * 获取<p>客户端集群id</p>
                     * @return ClusterId <p>客户端集群id</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>客户端集群id</p>
                     * @param _clusterId <p>客户端集群id</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

                    /**
                     * <p>客户端节点IP</p>
                     */
                    std::string m_clientNodeIp;
                    bool m_clientNodeIpHasBeenSet;

                    /**
                     * <p>客户端节点服务状态, Active(运行中), Adding(添加中), Destroying(销毁中), Down(已停止)</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>客户端节点类型，extend(扩展节点)，manager(管理节点)</p>
                     */
                    std::string m_clientType;
                    bool m_clientTypeHasBeenSet;

                    /**
                     * <p>节点所属vpcid</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>节点所属子网id</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>cvmId</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>自定义挂载点</p>
                     */
                    std::string m_mountPoint;
                    bool m_mountPointHasBeenSet;

                    /**
                     * <p>客户端集群id</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CLIENTNODEATTRIBUTE_H_
