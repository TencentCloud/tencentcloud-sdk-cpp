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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_OPENREADONLYINSTANCEEXCLUSIVEACCESSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_OPENREADONLYINSTANCEEXCLUSIVEACCESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * OpenReadOnlyInstanceExclusiveAccess请求参数结构体
                */
                class OpenReadOnlyInstanceExclusiveAccessRequest : public AbstractModel
                {
                public:
                    OpenReadOnlyInstanceExclusiveAccessRequest();
                    ~OpenReadOnlyInstanceExclusiveAccessRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取请使用 [集群信息描述](https://cloud.tencent.com/document/api/1003/48086) 获取 clusterId。
                     * @return ClusterId 请使用 [集群信息描述](https://cloud.tencent.com/document/api/1003/48086) 获取 clusterId。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置请使用 [集群信息描述](https://cloud.tencent.com/document/api/1003/48086) 获取 clusterId。
                     * @param _clusterId 请使用 [集群信息描述](https://cloud.tencent.com/document/api/1003/48086) 获取 clusterId。
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
                     * 获取请使用 [集群信息描述](https://cloud.tencent.com/document/api/1003/48086) 获取 instanceId。
                     * @return InstanceId 请使用 [集群信息描述](https://cloud.tencent.com/document/api/1003/48086) 获取 instanceId。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置请使用 [集群信息描述](https://cloud.tencent.com/document/api/1003/48086) 获取 instanceId。
                     * @param _instanceId 请使用 [集群信息描述](https://cloud.tencent.com/document/api/1003/48086) 获取 instanceId。
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
                     * 获取指定的 vpc ID，请使用 [查询私有网络列表](https://cloud.tencent.com/document/api/215/15778) 获取 vpc ID。
                     * @return VpcId 指定的 vpc ID，请使用 [查询私有网络列表](https://cloud.tencent.com/document/api/215/15778) 获取 vpc ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置指定的 vpc ID，请使用 [查询私有网络列表](https://cloud.tencent.com/document/api/215/15778) 获取 vpc ID。
                     * @param _vpcId 指定的 vpc ID，请使用 [查询私有网络列表](https://cloud.tencent.com/document/api/215/15778) 获取 vpc ID。
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
                     * 获取指定的子网 ID，如果设置了 vpc ID，则 SubnetId 必填，请使用 [查询子网列表](https://cloud.tencent.com/document/api/215/15784) 获取 SubnetId。
                     * @return SubnetId 指定的子网 ID，如果设置了 vpc ID，则 SubnetId 必填，请使用 [查询子网列表](https://cloud.tencent.com/document/api/215/15784) 获取 SubnetId。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置指定的子网 ID，如果设置了 vpc ID，则 SubnetId 必填，请使用 [查询子网列表](https://cloud.tencent.com/document/api/215/15784) 获取 SubnetId。
                     * @param _subnetId 指定的子网 ID，如果设置了 vpc ID，则 SubnetId 必填，请使用 [查询子网列表](https://cloud.tencent.com/document/api/215/15784) 获取 SubnetId。
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
                     * 获取用户自定义的端口。
                     * @return Port 用户自定义的端口。
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置用户自定义的端口。
                     * @param _port 用户自定义的端口。
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取安全组 ID，请使用 [查看安全组](https://cloud.tencent.com/document/api/215/15808) 获取 SecurityGroupId。
                     * @return SecurityGroupIds 安全组 ID，请使用 [查看安全组](https://cloud.tencent.com/document/api/215/15808) 获取 SecurityGroupId。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置安全组 ID，请使用 [查看安全组](https://cloud.tencent.com/document/api/215/15808) 获取 SecurityGroupId。
                     * @param _securityGroupIds 安全组 ID，请使用 [查看安全组](https://cloud.tencent.com/document/api/215/15808) 获取 SecurityGroupId。
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                private:

                    /**
                     * 请使用 [集群信息描述](https://cloud.tencent.com/document/api/1003/48086) 获取 clusterId。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 请使用 [集群信息描述](https://cloud.tencent.com/document/api/1003/48086) 获取 instanceId。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 指定的 vpc ID，请使用 [查询私有网络列表](https://cloud.tencent.com/document/api/215/15778) 获取 vpc ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 指定的子网 ID，如果设置了 vpc ID，则 SubnetId 必填，请使用 [查询子网列表](https://cloud.tencent.com/document/api/215/15784) 获取 SubnetId。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 用户自定义的端口。
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 安全组 ID，请使用 [查看安全组](https://cloud.tencent.com/document/api/215/15808) 获取 SecurityGroupId。
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_OPENREADONLYINSTANCEEXCLUSIVEACCESSREQUEST_H_
