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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_CREATECLUSTERREQUEST_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_CREATECLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/thpc/v20230321/model/Placement.h>
#include <tencentcloud/thpc/v20230321/model/ManagerNode.h>
#include <tencentcloud/thpc/v20230321/model/ComputeNode.h>
#include <tencentcloud/thpc/v20230321/model/VirtualPrivateCloud.h>
#include <tencentcloud/thpc/v20230321/model/LoginSettings.h>
#include <tencentcloud/thpc/v20230321/model/StorageOption.h>
#include <tencentcloud/thpc/v20230321/model/LoginNode.h>
#include <tencentcloud/thpc/v20230321/model/Tag.h>
#include <tencentcloud/thpc/v20230321/model/NodeScript.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
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
                     * 获取<p>集群中实例所在的位置。</p>
                     * @return Placement <p>集群中实例所在的位置。</p>
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置<p>集群中实例所在的位置。</p>
                     * @param _placement <p>集群中实例所在的位置。</p>
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
                     * 获取<p>指定管理节点。</p>
                     * @return ManagerNode <p>指定管理节点。</p>
                     * 
                     */
                    ManagerNode GetManagerNode() const;

                    /**
                     * 设置<p>指定管理节点。</p>
                     * @param _managerNode <p>指定管理节点。</p>
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
                     * 获取<p>指定管理节点的数量。默认取值：1。取值范围：1～2。</p>
                     * @return ManagerNodeCount <p>指定管理节点的数量。默认取值：1。取值范围：1～2。</p>
                     * 
                     */
                    int64_t GetManagerNodeCount() const;

                    /**
                     * 设置<p>指定管理节点的数量。默认取值：1。取值范围：1～2。</p>
                     * @param _managerNodeCount <p>指定管理节点的数量。默认取值：1。取值范围：1～2。</p>
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
                     * 获取<p>指定计算节点。</p>
                     * @return ComputeNode <p>指定计算节点。</p>
                     * 
                     */
                    ComputeNode GetComputeNode() const;

                    /**
                     * 设置<p>指定计算节点。</p>
                     * @param _computeNode <p>指定计算节点。</p>
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
                     * 获取<p>指定计算节点的数量。默认取值：0。</p>
                     * @return ComputeNodeCount <p>指定计算节点的数量。默认取值：0。</p>
                     * 
                     */
                    int64_t GetComputeNodeCount() const;

                    /**
                     * 设置<p>指定计算节点的数量。默认取值：0。</p>
                     * @param _computeNodeCount <p>指定计算节点的数量。默认取值：0。</p>
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
                     * 获取<p>调度器类型。默认取值：SLURM。<li>SLURM：SLURM调度器。</li></p>
                     * @return SchedulerType <p>调度器类型。默认取值：SLURM。<li>SLURM：SLURM调度器。</li></p>
                     * 
                     */
                    std::string GetSchedulerType() const;

                    /**
                     * 设置<p>调度器类型。默认取值：SLURM。<li>SLURM：SLURM调度器。</li></p>
                     * @param _schedulerType <p>调度器类型。默认取值：SLURM。<li>SLURM：SLURM调度器。</li></p>
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
                     * 获取<p>创建调度器的版本号，可填写版本号为“latest” 和 各调度器支持的版本号；如果是&quot;latest&quot;, 则代表创建的是平台当前支持的该类型调度器最新版本。如果不填写，默认创建的是“latest”版本调度器<br>各调度器支持的集群版本：</p><li>SLURM：21.08.8、23.11.7</li>
                     * @return SchedulerVersion <p>创建调度器的版本号，可填写版本号为“latest” 和 各调度器支持的版本号；如果是&quot;latest&quot;, 则代表创建的是平台当前支持的该类型调度器最新版本。如果不填写，默认创建的是“latest”版本调度器<br>各调度器支持的集群版本：</p><li>SLURM：21.08.8、23.11.7</li>
                     * 
                     */
                    std::string GetSchedulerVersion() const;

                    /**
                     * 设置<p>创建调度器的版本号，可填写版本号为“latest” 和 各调度器支持的版本号；如果是&quot;latest&quot;, 则代表创建的是平台当前支持的该类型调度器最新版本。如果不填写，默认创建的是“latest”版本调度器<br>各调度器支持的集群版本：</p><li>SLURM：21.08.8、23.11.7</li>
                     * @param _schedulerVersion <p>创建调度器的版本号，可填写版本号为“latest” 和 各调度器支持的版本号；如果是&quot;latest&quot;, 则代表创建的是平台当前支持的该类型调度器最新版本。如果不填写，默认创建的是“latest”版本调度器<br>各调度器支持的集群版本：</p><li>SLURM：21.08.8、23.11.7</li>
                     * 
                     */
                    void SetSchedulerVersion(const std::string& _schedulerVersion);

                    /**
                     * 判断参数 SchedulerVersion 是否已赋值
                     * @return SchedulerVersion 是否已赋值
                     * 
                     */
                    bool SchedulerVersionHasBeenSet() const;

                    /**
                     * 获取<p>指定有效的<a href="https://cloud.tencent.com/document/product/213/4940">镜像</a>ID，格式形如<code>img-xxx</code>。目前支持部分公有镜像和自定义镜像。公共镜像请参考<a href="https://cloud.tencent.com/document/product/1527/64818#.E9.95.9C.E5.83.8F">镜像限制</a></p>
                     * @return ImageId <p>指定有效的<a href="https://cloud.tencent.com/document/product/213/4940">镜像</a>ID，格式形如<code>img-xxx</code>。目前支持部分公有镜像和自定义镜像。公共镜像请参考<a href="https://cloud.tencent.com/document/product/1527/64818#.E9.95.9C.E5.83.8F">镜像限制</a></p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>指定有效的<a href="https://cloud.tencent.com/document/product/213/4940">镜像</a>ID，格式形如<code>img-xxx</code>。目前支持部分公有镜像和自定义镜像。公共镜像请参考<a href="https://cloud.tencent.com/document/product/1527/64818#.E9.95.9C.E5.83.8F">镜像限制</a></p>
                     * @param _imageId <p>指定有效的<a href="https://cloud.tencent.com/document/product/213/4940">镜像</a>ID，格式形如<code>img-xxx</code>。目前支持部分公有镜像和自定义镜像。公共镜像请参考<a href="https://cloud.tencent.com/document/product/1527/64818#.E9.95.9C.E5.83.8F">镜像限制</a></p>
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
                     * 获取<p>私有网络相关信息配置。</p>
                     * @return VirtualPrivateCloud <p>私有网络相关信息配置。</p>
                     * 
                     */
                    VirtualPrivateCloud GetVirtualPrivateCloud() const;

                    /**
                     * 设置<p>私有网络相关信息配置。</p>
                     * @param _virtualPrivateCloud <p>私有网络相关信息配置。</p>
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
                     * 获取<p>集群登录设置。</p>
                     * @return LoginSettings <p>集群登录设置。</p>
                     * 
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置<p>集群登录设置。</p>
                     * @param _loginSettings <p>集群登录设置。</p>
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
                     * 获取<p>集群中实例所属安全组。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的sgId字段来获取。若不指定该参数，则绑定默认安全组。</p>
                     * @return SecurityGroupIds <p>集群中实例所属安全组。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的sgId字段来获取。若不指定该参数，则绑定默认安全组。</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>集群中实例所属安全组。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的sgId字段来获取。若不指定该参数，则绑定默认安全组。</p>
                     * @param _securityGroupIds <p>集群中实例所属安全组。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的sgId字段来获取。若不指定该参数，则绑定默认安全组。</p>
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
                     * 获取<p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。</p>
                     * @return ClientToken <p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。</p>
                     * @param _clientToken <p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。</p>
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
                     * 获取<p>是否只预检此次请求。<br>true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制和云服务器库存。<br>如果检查不通过，则返回对应错误码；<br>如果检查通过，则返回RequestId.<br>false（默认）：发送正常请求，通过检查后直接创建实例</p>
                     * @return DryRun <p>是否只预检此次请求。<br>true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制和云服务器库存。<br>如果检查不通过，则返回对应错误码；<br>如果检查通过，则返回RequestId.<br>false（默认）：发送正常请求，通过检查后直接创建实例</p>
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置<p>是否只预检此次请求。<br>true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制和云服务器库存。<br>如果检查不通过，则返回对应错误码；<br>如果检查通过，则返回RequestId.<br>false（默认）：发送正常请求，通过检查后直接创建实例</p>
                     * @param _dryRun <p>是否只预检此次请求。<br>true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制和云服务器库存。<br>如果检查不通过，则返回对应错误码；<br>如果检查通过，则返回RequestId.<br>false（默认）：发送正常请求，通过检查后直接创建实例</p>
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
                     * 获取<p>域名字服务类型。默认取值：NIS。</p><li>NIS：NIS域名字服务。</li>
                     * @return AccountType <p>域名字服务类型。默认取值：NIS。</p><li>NIS：NIS域名字服务。</li>
                     * 
                     */
                    std::string GetAccountType() const;

                    /**
                     * 设置<p>域名字服务类型。默认取值：NIS。</p><li>NIS：NIS域名字服务。</li>
                     * @param _accountType <p>域名字服务类型。默认取值：NIS。</p><li>NIS：NIS域名字服务。</li>
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
                     * 获取<p>集群显示名称。</p>
                     * @return ClusterName <p>集群显示名称。</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>集群显示名称。</p>
                     * @param _clusterName <p>集群显示名称。</p>
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
                     * 获取<p>集群存储选项</p>
                     * @return StorageOption <p>集群存储选项</p>
                     * 
                     */
                    StorageOption GetStorageOption() const;

                    /**
                     * 设置<p>集群存储选项</p>
                     * @param _storageOption <p>集群存储选项</p>
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
                     * 获取<p>指定登录节点。</p>
                     * @return LoginNode <p>指定登录节点。</p>
                     * 
                     */
                    LoginNode GetLoginNode() const;

                    /**
                     * 设置<p>指定登录节点。</p>
                     * @param _loginNode <p>指定登录节点。</p>
                     * 
                     */
                    void SetLoginNode(const LoginNode& _loginNode);

                    /**
                     * 判断参数 LoginNode 是否已赋值
                     * @return LoginNode 是否已赋值
                     * 
                     */
                    bool LoginNodeHasBeenSet() const;

                    /**
                     * 获取<p>指定登录节点的数量。默认取值：0。取值范围：0～10。</p>
                     * @return LoginNodeCount <p>指定登录节点的数量。默认取值：0。取值范围：0～10。</p>
                     * 
                     */
                    int64_t GetLoginNodeCount() const;

                    /**
                     * 设置<p>指定登录节点的数量。默认取值：0。取值范围：0～10。</p>
                     * @param _loginNodeCount <p>指定登录节点的数量。默认取值：0。取值范围：0～10。</p>
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
                     * 获取<p>创建集群时同时绑定的标签对说明。</p>
                     * @return Tags <p>创建集群时同时绑定的标签对说明。</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>创建集群时同时绑定的标签对说明。</p>
                     * @param _tags <p>创建集群时同时绑定的标签对说明。</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>弹性伸缩类型。默认值：THPC_AS</p>
                     * @return AutoScalingType <p>弹性伸缩类型。默认值：THPC_AS</p>
                     * 
                     */
                    std::string GetAutoScalingType() const;

                    /**
                     * 设置<p>弹性伸缩类型。默认值：THPC_AS</p>
                     * @param _autoScalingType <p>弹性伸缩类型。默认值：THPC_AS</p>
                     * 
                     */
                    void SetAutoScalingType(const std::string& _autoScalingType);

                    /**
                     * 判断参数 AutoScalingType 是否已赋值
                     * @return AutoScalingType 是否已赋值
                     * 
                     */
                    bool AutoScalingTypeHasBeenSet() const;

                    /**
                     * 获取<p>节点初始化脚本信息列表。</p>
                     * @return InitNodeScripts <p>节点初始化脚本信息列表。</p>
                     * 
                     */
                    std::vector<NodeScript> GetInitNodeScripts() const;

                    /**
                     * 设置<p>节点初始化脚本信息列表。</p>
                     * @param _initNodeScripts <p>节点初始化脚本信息列表。</p>
                     * 
                     */
                    void SetInitNodeScripts(const std::vector<NodeScript>& _initNodeScripts);

                    /**
                     * 判断参数 InitNodeScripts 是否已赋值
                     * @return InitNodeScripts 是否已赋值
                     * 
                     */
                    bool InitNodeScriptsHasBeenSet() const;

                    /**
                     * 获取<p>高性能计算集群ID。若创建的实例为高性能计算实例，需指定实例放置的集群，否则不可指定。</p>
                     * @return HpcClusterId <p>高性能计算集群ID。若创建的实例为高性能计算实例，需指定实例放置的集群，否则不可指定。</p>
                     * 
                     */
                    std::string GetHpcClusterId() const;

                    /**
                     * 设置<p>高性能计算集群ID。若创建的实例为高性能计算实例，需指定实例放置的集群，否则不可指定。</p>
                     * @param _hpcClusterId <p>高性能计算集群ID。若创建的实例为高性能计算实例，需指定实例放置的集群，否则不可指定。</p>
                     * 
                     */
                    void SetHpcClusterId(const std::string& _hpcClusterId);

                    /**
                     * 判断参数 HpcClusterId 是否已赋值
                     * @return HpcClusterId 是否已赋值
                     * 
                     */
                    bool HpcClusterIdHasBeenSet() const;

                private:

                    /**
                     * <p>集群中实例所在的位置。</p>
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * <p>指定管理节点。</p>
                     */
                    ManagerNode m_managerNode;
                    bool m_managerNodeHasBeenSet;

                    /**
                     * <p>指定管理节点的数量。默认取值：1。取值范围：1～2。</p>
                     */
                    int64_t m_managerNodeCount;
                    bool m_managerNodeCountHasBeenSet;

                    /**
                     * <p>指定计算节点。</p>
                     */
                    ComputeNode m_computeNode;
                    bool m_computeNodeHasBeenSet;

                    /**
                     * <p>指定计算节点的数量。默认取值：0。</p>
                     */
                    int64_t m_computeNodeCount;
                    bool m_computeNodeCountHasBeenSet;

                    /**
                     * <p>调度器类型。默认取值：SLURM。<li>SLURM：SLURM调度器。</li></p>
                     */
                    std::string m_schedulerType;
                    bool m_schedulerTypeHasBeenSet;

                    /**
                     * <p>创建调度器的版本号，可填写版本号为“latest” 和 各调度器支持的版本号；如果是&quot;latest&quot;, 则代表创建的是平台当前支持的该类型调度器最新版本。如果不填写，默认创建的是“latest”版本调度器<br>各调度器支持的集群版本：</p><li>SLURM：21.08.8、23.11.7</li>
                     */
                    std::string m_schedulerVersion;
                    bool m_schedulerVersionHasBeenSet;

                    /**
                     * <p>指定有效的<a href="https://cloud.tencent.com/document/product/213/4940">镜像</a>ID，格式形如<code>img-xxx</code>。目前支持部分公有镜像和自定义镜像。公共镜像请参考<a href="https://cloud.tencent.com/document/product/1527/64818#.E9.95.9C.E5.83.8F">镜像限制</a></p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>私有网络相关信息配置。</p>
                     */
                    VirtualPrivateCloud m_virtualPrivateCloud;
                    bool m_virtualPrivateCloudHasBeenSet;

                    /**
                     * <p>集群登录设置。</p>
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * <p>集群中实例所属安全组。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的sgId字段来获取。若不指定该参数，则绑定默认安全组。</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * <p>是否只预检此次请求。<br>true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制和云服务器库存。<br>如果检查不通过，则返回对应错误码；<br>如果检查通过，则返回RequestId.<br>false（默认）：发送正常请求，通过检查后直接创建实例</p>
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * <p>域名字服务类型。默认取值：NIS。</p><li>NIS：NIS域名字服务。</li>
                     */
                    std::string m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * <p>集群显示名称。</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>集群存储选项</p>
                     */
                    StorageOption m_storageOption;
                    bool m_storageOptionHasBeenSet;

                    /**
                     * <p>指定登录节点。</p>
                     */
                    LoginNode m_loginNode;
                    bool m_loginNodeHasBeenSet;

                    /**
                     * <p>指定登录节点的数量。默认取值：0。取值范围：0～10。</p>
                     */
                    int64_t m_loginNodeCount;
                    bool m_loginNodeCountHasBeenSet;

                    /**
                     * <p>创建集群时同时绑定的标签对说明。</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>弹性伸缩类型。默认值：THPC_AS</p>
                     */
                    std::string m_autoScalingType;
                    bool m_autoScalingTypeHasBeenSet;

                    /**
                     * <p>节点初始化脚本信息列表。</p>
                     */
                    std::vector<NodeScript> m_initNodeScripts;
                    bool m_initNodeScriptsHasBeenSet;

                    /**
                     * <p>高性能计算集群ID。若创建的实例为高性能计算实例，需指定实例放置的集群，否则不可指定。</p>
                     */
                    std::string m_hpcClusterId;
                    bool m_hpcClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_CREATECLUSTERREQUEST_H_
