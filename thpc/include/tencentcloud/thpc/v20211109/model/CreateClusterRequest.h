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

#ifndef TENCENTCLOUD_THPC_V20211109_MODEL_CREATECLUSTERREQUEST_H_
#define TENCENTCLOUD_THPC_V20211109_MODEL_CREATECLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/thpc/v20211109/model/Placement.h>
#include <tencentcloud/thpc/v20211109/model/ManagerNode.h>
#include <tencentcloud/thpc/v20211109/model/ComputeNode.h>
#include <tencentcloud/thpc/v20211109/model/VirtualPrivateCloud.h>
#include <tencentcloud/thpc/v20211109/model/LoginSettings.h>
#include <tencentcloud/thpc/v20211109/model/StorageOption.h>
#include <tencentcloud/thpc/v20211109/model/LoginNode.h>
#include <tencentcloud/thpc/v20211109/model/Tag.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20211109
        {
            namespace Model
            {
                /**
                * CreateCluster请求参数结构体
                */
                class CreateClusterRequest : public AbstractModel
                {
                public:
                    CreateClusterRequest();
                    ~CreateClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群中实例所在的位置。
                     * @return Placement 集群中实例所在的位置。
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置集群中实例所在的位置。
                     * @param _placement 集群中实例所在的位置。
                     * 
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     * 
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取指定管理节点。
                     * @return ManagerNode 指定管理节点。
                     * 
                     */
                    ManagerNode GetManagerNode() const;

                    /**
                     * 设置指定管理节点。
                     * @param _managerNode 指定管理节点。
                     * 
                     */
                    void SetManagerNode(const ManagerNode& _managerNode);

                    /**
                     * 判断参数 ManagerNode 是否已赋值
                     * @return ManagerNode 是否已赋值
                     * 
                     */
                    bool ManagerNodeHasBeenSet() const;

                    /**
                     * 获取指定管理节点的数量。默认取值：1。取值范围：1～2。
                     * @return ManagerNodeCount 指定管理节点的数量。默认取值：1。取值范围：1～2。
                     * 
                     */
                    int64_t GetManagerNodeCount() const;

                    /**
                     * 设置指定管理节点的数量。默认取值：1。取值范围：1～2。
                     * @param _managerNodeCount 指定管理节点的数量。默认取值：1。取值范围：1～2。
                     * 
                     */
                    void SetManagerNodeCount(const int64_t& _managerNodeCount);

                    /**
                     * 判断参数 ManagerNodeCount 是否已赋值
                     * @return ManagerNodeCount 是否已赋值
                     * 
                     */
                    bool ManagerNodeCountHasBeenSet() const;

                    /**
                     * 获取指定计算节点。
                     * @return ComputeNode 指定计算节点。
                     * 
                     */
                    ComputeNode GetComputeNode() const;

                    /**
                     * 设置指定计算节点。
                     * @param _computeNode 指定计算节点。
                     * 
                     */
                    void SetComputeNode(const ComputeNode& _computeNode);

                    /**
                     * 判断参数 ComputeNode 是否已赋值
                     * @return ComputeNode 是否已赋值
                     * 
                     */
                    bool ComputeNodeHasBeenSet() const;

                    /**
                     * 获取指定计算节点的数量。默认取值：0。
                     * @return ComputeNodeCount 指定计算节点的数量。默认取值：0。
                     * 
                     */
                    int64_t GetComputeNodeCount() const;

                    /**
                     * 设置指定计算节点的数量。默认取值：0。
                     * @param _computeNodeCount 指定计算节点的数量。默认取值：0。
                     * 
                     */
                    void SetComputeNodeCount(const int64_t& _computeNodeCount);

                    /**
                     * 判断参数 ComputeNodeCount 是否已赋值
                     * @return ComputeNodeCount 是否已赋值
                     * 
                     */
                    bool ComputeNodeCountHasBeenSet() const;

                    /**
                     * 获取调度器类型。<br><li>SLURM：SLURM调度器。</li>
                     * @return SchedulerType 调度器类型。<br><li>SLURM：SLURM调度器。</li>
                     * 
                     */
                    std::string GetSchedulerType() const;

                    /**
                     * 设置调度器类型。<br><li>SLURM：SLURM调度器。</li>
                     * @param _schedulerType 调度器类型。<br><li>SLURM：SLURM调度器。</li>
                     * 
                     */
                    void SetSchedulerType(const std::string& _schedulerType);

                    /**
                     * 判断参数 SchedulerType 是否已赋值
                     * @return SchedulerType 是否已赋值
                     * 
                     */
                    bool SchedulerTypeHasBeenSet() const;

                    /**
                     * 获取指定有效的[镜像](https://cloud.tencent.com/document/product/213/4940)ID，格式形如`img-xxx`。目前仅支持公有镜像。
                     * @return ImageId 指定有效的[镜像](https://cloud.tencent.com/document/product/213/4940)ID，格式形如`img-xxx`。目前仅支持公有镜像。
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置指定有效的[镜像](https://cloud.tencent.com/document/product/213/4940)ID，格式形如`img-xxx`。目前仅支持公有镜像。
                     * @param _imageId 指定有效的[镜像](https://cloud.tencent.com/document/product/213/4940)ID，格式形如`img-xxx`。目前仅支持公有镜像。
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取私有网络相关信息配置。
                     * @return VirtualPrivateCloud 私有网络相关信息配置。
                     * 
                     */
                    VirtualPrivateCloud GetVirtualPrivateCloud() const;

                    /**
                     * 设置私有网络相关信息配置。
                     * @param _virtualPrivateCloud 私有网络相关信息配置。
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
                     * 获取集群登录设置。
                     * @return LoginSettings 集群登录设置。
                     * 
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置集群登录设置。
                     * @param _loginSettings 集群登录设置。
                     * 
                     */
                    void SetLoginSettings(const LoginSettings& _loginSettings);

                    /**
                     * 判断参数 LoginSettings 是否已赋值
                     * @return LoginSettings 是否已赋值
                     * 
                     */
                    bool LoginSettingsHasBeenSet() const;

                    /**
                     * 获取集群中实例所属安全组。该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/api/215/15808) 的返回值中的sgId字段来获取。若不指定该参数，则绑定默认安全组。
                     * @return SecurityGroupIds 集群中实例所属安全组。该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/api/215/15808) 的返回值中的sgId字段来获取。若不指定该参数，则绑定默认安全组。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置集群中实例所属安全组。该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/api/215/15808) 的返回值中的sgId字段来获取。若不指定该参数，则绑定默认安全组。
                     * @param _securityGroupIds 集群中实例所属安全组。该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/api/215/15808) 的返回值中的sgId字段来获取。若不指定该参数，则绑定默认安全组。
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     * @return ClientToken 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     * @param _clientToken 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取是否只预检此次请求。
true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制和云服务器库存。
如果检查不通过，则返回对应错误码；
如果检查通过，则返回RequestId.
false（默认）：发送正常请求，通过检查后直接创建实例
                     * @return DryRun 是否只预检此次请求。
true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制和云服务器库存。
如果检查不通过，则返回对应错误码；
如果检查通过，则返回RequestId.
false（默认）：发送正常请求，通过检查后直接创建实例
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置是否只预检此次请求。
true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制和云服务器库存。
如果检查不通过，则返回对应错误码；
如果检查通过，则返回RequestId.
false（默认）：发送正常请求，通过检查后直接创建实例
                     * @param _dryRun 是否只预检此次请求。
true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制和云服务器库存。
如果检查不通过，则返回对应错误码；
如果检查通过，则返回RequestId.
false（默认）：发送正常请求，通过检查后直接创建实例
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取域名字服务类型。默认值：NIS<li>NIS：NIS域名字服务。</li>
                     * @return AccountType 域名字服务类型。默认值：NIS<li>NIS：NIS域名字服务。</li>
                     * 
                     */
                    std::string GetAccountType() const;

                    /**
                     * 设置域名字服务类型。默认值：NIS<li>NIS：NIS域名字服务。</li>
                     * @param _accountType 域名字服务类型。默认值：NIS<li>NIS：NIS域名字服务。</li>
                     * 
                     */
                    void SetAccountType(const std::string& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取集群显示名称。
                     * @return ClusterName 集群显示名称。
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群显示名称。
                     * @param _clusterName 集群显示名称。
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取集群存储选项
                     * @return StorageOption 集群存储选项
                     * 
                     */
                    StorageOption GetStorageOption() const;

                    /**
                     * 设置集群存储选项
                     * @param _storageOption 集群存储选项
                     * 
                     */
                    void SetStorageOption(const StorageOption& _storageOption);

                    /**
                     * 判断参数 StorageOption 是否已赋值
                     * @return StorageOption 是否已赋值
                     * 
                     */
                    bool StorageOptionHasBeenSet() const;

                    /**
                     * 获取已废弃。
指定登录节点。
                     * @return LoginNode 已废弃。
指定登录节点。
                     * 
                     */
                    std::vector<LoginNode> GetLoginNode() const;

                    /**
                     * 设置已废弃。
指定登录节点。
                     * @param _loginNode 已废弃。
指定登录节点。
                     * 
                     */
                    void SetLoginNode(const std::vector<LoginNode>& _loginNode);

                    /**
                     * 判断参数 LoginNode 是否已赋值
                     * @return LoginNode 是否已赋值
                     * 
                     */
                    bool LoginNodeHasBeenSet() const;

                    /**
                     * 获取已废弃。
指定登录节点的数量。默认取值：0。取值范围：0～10。
                     * @return LoginNodeCount 已废弃。
指定登录节点的数量。默认取值：0。取值范围：0～10。
                     * 
                     */
                    int64_t GetLoginNodeCount() const;

                    /**
                     * 设置已废弃。
指定登录节点的数量。默认取值：0。取值范围：0～10。
                     * @param _loginNodeCount 已废弃。
指定登录节点的数量。默认取值：0。取值范围：0～10。
                     * 
                     */
                    void SetLoginNodeCount(const int64_t& _loginNodeCount);

                    /**
                     * 判断参数 LoginNodeCount 是否已赋值
                     * @return LoginNodeCount 是否已赋值
                     * 
                     */
                    bool LoginNodeCountHasBeenSet() const;

                    /**
                     * 获取创建集群时同时绑定的标签对说明。
                     * @return Tags 创建集群时同时绑定的标签对说明。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置创建集群时同时绑定的标签对说明。
                     * @param _tags 创建集群时同时绑定的标签对说明。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 集群中实例所在的位置。
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * 指定管理节点。
                     */
                    ManagerNode m_managerNode;
                    bool m_managerNodeHasBeenSet;

                    /**
                     * 指定管理节点的数量。默认取值：1。取值范围：1～2。
                     */
                    int64_t m_managerNodeCount;
                    bool m_managerNodeCountHasBeenSet;

                    /**
                     * 指定计算节点。
                     */
                    ComputeNode m_computeNode;
                    bool m_computeNodeHasBeenSet;

                    /**
                     * 指定计算节点的数量。默认取值：0。
                     */
                    int64_t m_computeNodeCount;
                    bool m_computeNodeCountHasBeenSet;

                    /**
                     * 调度器类型。<br><li>SLURM：SLURM调度器。</li>
                     */
                    std::string m_schedulerType;
                    bool m_schedulerTypeHasBeenSet;

                    /**
                     * 指定有效的[镜像](https://cloud.tencent.com/document/product/213/4940)ID，格式形如`img-xxx`。目前仅支持公有镜像。
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 私有网络相关信息配置。
                     */
                    VirtualPrivateCloud m_virtualPrivateCloud;
                    bool m_virtualPrivateCloudHasBeenSet;

                    /**
                     * 集群登录设置。
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * 集群中实例所属安全组。该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/api/215/15808) 的返回值中的sgId字段来获取。若不指定该参数，则绑定默认安全组。
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * 是否只预检此次请求。
true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制和云服务器库存。
如果检查不通过，则返回对应错误码；
如果检查通过，则返回RequestId.
false（默认）：发送正常请求，通过检查后直接创建实例
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * 域名字服务类型。默认值：NIS<li>NIS：NIS域名字服务。</li>
                     */
                    std::string m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * 集群显示名称。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 集群存储选项
                     */
                    StorageOption m_storageOption;
                    bool m_storageOptionHasBeenSet;

                    /**
                     * 已废弃。
指定登录节点。
                     */
                    std::vector<LoginNode> m_loginNode;
                    bool m_loginNodeHasBeenSet;

                    /**
                     * 已废弃。
指定登录节点的数量。默认取值：0。取值范围：0～10。
                     */
                    int64_t m_loginNodeCount;
                    bool m_loginNodeCountHasBeenSet;

                    /**
                     * 创建集群时同时绑定的标签对说明。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20211109_MODEL_CREATECLUSTERREQUEST_H_
