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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_SCALEOUTCLUSTERREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_SCALEOUTCLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/ScaleOutNodeConfig.h>
#include <tencentcloud/emr/v20190103/model/InstanceChargePrepaid.h>
#include <tencentcloud/emr/v20190103/model/ScriptBootstrapActionConfig.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>
#include <tencentcloud/emr/v20190103/model/PodSpecInfo.h>
#include <tencentcloud/emr/v20190103/model/NodeResourceSpec.h>
#include <tencentcloud/emr/v20190103/model/ScaleOutServiceConfGroupsInfo.h>
#include <tencentcloud/emr/v20190103/model/NodeMark.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * ScaleOutCluster请求参数结构体
                */
                class ScaleOutClusterRequest : public AbstractModel
                {
                public:
                    ScaleOutClusterRequest();
                    ~ScaleOutClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>节点计费模式。取值范围：</p><li>PREPAID：预付费，即包年包月。</li><li>POSTPAID_BY_HOUR：按小时后付费。</li><li>SPOTPAID：竞价付费（仅支持TASK节点）。</li>
                     * @return InstanceChargeType <p>节点计费模式。取值范围：</p><li>PREPAID：预付费，即包年包月。</li><li>POSTPAID_BY_HOUR：按小时后付费。</li><li>SPOTPAID：竞价付费（仅支持TASK节点）。</li>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>节点计费模式。取值范围：</p><li>PREPAID：预付费，即包年包月。</li><li>POSTPAID_BY_HOUR：按小时后付费。</li><li>SPOTPAID：竞价付费（仅支持TASK节点）。</li>
                     * @param _instanceChargeType <p>节点计费模式。取值范围：</p><li>PREPAID：预付费，即包年包月。</li><li>POSTPAID_BY_HOUR：按小时后付费。</li><li>SPOTPAID：竞价付费（仅支持TASK节点）。</li>
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>集群实例ID。</p>
                     * @return InstanceId <p>集群实例ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>集群实例ID。</p>
                     * @param _instanceId <p>集群实例ID。</p>
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
                     * 获取<p>扩容节点类型以及数量</p>
                     * @return ScaleOutNodeConfig <p>扩容节点类型以及数量</p>
                     * 
                     */
                    ScaleOutNodeConfig GetScaleOutNodeConfig() const;

                    /**
                     * 设置<p>扩容节点类型以及数量</p>
                     * @param _scaleOutNodeConfig <p>扩容节点类型以及数量</p>
                     * 
                     */
                    void SetScaleOutNodeConfig(const ScaleOutNodeConfig& _scaleOutNodeConfig);

                    /**
                     * 判断参数 ScaleOutNodeConfig 是否已赋值
                     * @return ScaleOutNodeConfig 是否已赋值
                     * 
                     */
                    bool ScaleOutNodeConfigHasBeenSet() const;

                    /**
                     * 获取<p>唯一随机标识，时效5分钟，需要调用者指定 防止客户端重新创建资源，例如 a9a90aa6-<strong><strong>-</strong></strong>-****-fae36063280</p>
                     * @return ClientToken <p>唯一随机标识，时效5分钟，需要调用者指定 防止客户端重新创建资源，例如 a9a90aa6-<strong><strong>-</strong></strong>-****-fae36063280</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>唯一随机标识，时效5分钟，需要调用者指定 防止客户端重新创建资源，例如 a9a90aa6-<strong><strong>-</strong></strong>-****-fae36063280</p>
                     * @param _clientToken <p>唯一随机标识，时效5分钟，需要调用者指定 防止客户端重新创建资源，例如 a9a90aa6-<strong><strong>-</strong></strong>-****-fae36063280</p>
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
                     * 获取<p>即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。</p>
                     * @return InstanceChargePrepaid <p>即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。</p>
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置<p>即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。</p>
                     * @param _instanceChargePrepaid <p>即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。</p>
                     * 
                     */
                    void SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid);

                    /**
                     * 判断参数 InstanceChargePrepaid 是否已赋值
                     * @return InstanceChargePrepaid 是否已赋值
                     * 
                     */
                    bool InstanceChargePrepaidHasBeenSet() const;

                    /**
                     * 获取<p><a href="https://cloud.tencent.com/document/product/589/35656">引导操作</a>脚本设置。</p>
                     * @return ScriptBootstrapActionConfig <p><a href="https://cloud.tencent.com/document/product/589/35656">引导操作</a>脚本设置。</p>
                     * 
                     */
                    std::vector<ScriptBootstrapActionConfig> GetScriptBootstrapActionConfig() const;

                    /**
                     * 设置<p><a href="https://cloud.tencent.com/document/product/589/35656">引导操作</a>脚本设置。</p>
                     * @param _scriptBootstrapActionConfig <p><a href="https://cloud.tencent.com/document/product/589/35656">引导操作</a>脚本设置。</p>
                     * 
                     */
                    void SetScriptBootstrapActionConfig(const std::vector<ScriptBootstrapActionConfig>& _scriptBootstrapActionConfig);

                    /**
                     * 判断参数 ScriptBootstrapActionConfig 是否已赋值
                     * @return ScriptBootstrapActionConfig 是否已赋值
                     * 
                     */
                    bool ScriptBootstrapActionConfigHasBeenSet() const;

                    /**
                     * 获取<p>扩容部署服务，新增节点将默认继承当前节点类型中所部署服务，部署服务含默认可选服务，该参数仅支持可选服务填写，如：存量task节点已部署HDFS、YARN、impala；使用api扩容task节不部署impala时，部署服务仅填写HDFS、YARN。<a href="https://cloud.tencent.com/document/product/589/98760">组件名对应的映射关系表</a>。</p>
                     * @return SoftDeployInfo <p>扩容部署服务，新增节点将默认继承当前节点类型中所部署服务，部署服务含默认可选服务，该参数仅支持可选服务填写，如：存量task节点已部署HDFS、YARN、impala；使用api扩容task节不部署impala时，部署服务仅填写HDFS、YARN。<a href="https://cloud.tencent.com/document/product/589/98760">组件名对应的映射关系表</a>。</p>
                     * 
                     */
                    std::vector<int64_t> GetSoftDeployInfo() const;

                    /**
                     * 设置<p>扩容部署服务，新增节点将默认继承当前节点类型中所部署服务，部署服务含默认可选服务，该参数仅支持可选服务填写，如：存量task节点已部署HDFS、YARN、impala；使用api扩容task节不部署impala时，部署服务仅填写HDFS、YARN。<a href="https://cloud.tencent.com/document/product/589/98760">组件名对应的映射关系表</a>。</p>
                     * @param _softDeployInfo <p>扩容部署服务，新增节点将默认继承当前节点类型中所部署服务，部署服务含默认可选服务，该参数仅支持可选服务填写，如：存量task节点已部署HDFS、YARN、impala；使用api扩容task节不部署impala时，部署服务仅填写HDFS、YARN。<a href="https://cloud.tencent.com/document/product/589/98760">组件名对应的映射关系表</a>。</p>
                     * 
                     */
                    void SetSoftDeployInfo(const std::vector<int64_t>& _softDeployInfo);

                    /**
                     * 判断参数 SoftDeployInfo 是否已赋值
                     * @return SoftDeployInfo 是否已赋值
                     * 
                     */
                    bool SoftDeployInfoHasBeenSet() const;

                    /**
                     * 获取<p>部署进程，默认部署扩容服务的全部进程，支持修改部署进程，如：当前task节点部署服务为：HDFS、YARN、impala，默认部署服务为：DataNode,NodeManager,ImpalaServer，若用户需修改部署进程信息，部署进程：    DataNode,NodeManager,ImpalaServerCoordinator或DataNode,NodeManager,ImpalaServerExecutor。<a href="https://cloud.tencent.com/document/product/589/98760">进程名对应的映射关系表</a>。</p>
                     * @return ServiceNodeInfo <p>部署进程，默认部署扩容服务的全部进程，支持修改部署进程，如：当前task节点部署服务为：HDFS、YARN、impala，默认部署服务为：DataNode,NodeManager,ImpalaServer，若用户需修改部署进程信息，部署进程：    DataNode,NodeManager,ImpalaServerCoordinator或DataNode,NodeManager,ImpalaServerExecutor。<a href="https://cloud.tencent.com/document/product/589/98760">进程名对应的映射关系表</a>。</p>
                     * 
                     */
                    std::vector<int64_t> GetServiceNodeInfo() const;

                    /**
                     * 设置<p>部署进程，默认部署扩容服务的全部进程，支持修改部署进程，如：当前task节点部署服务为：HDFS、YARN、impala，默认部署服务为：DataNode,NodeManager,ImpalaServer，若用户需修改部署进程信息，部署进程：    DataNode,NodeManager,ImpalaServerCoordinator或DataNode,NodeManager,ImpalaServerExecutor。<a href="https://cloud.tencent.com/document/product/589/98760">进程名对应的映射关系表</a>。</p>
                     * @param _serviceNodeInfo <p>部署进程，默认部署扩容服务的全部进程，支持修改部署进程，如：当前task节点部署服务为：HDFS、YARN、impala，默认部署服务为：DataNode,NodeManager,ImpalaServer，若用户需修改部署进程信息，部署进程：    DataNode,NodeManager,ImpalaServerCoordinator或DataNode,NodeManager,ImpalaServerExecutor。<a href="https://cloud.tencent.com/document/product/589/98760">进程名对应的映射关系表</a>。</p>
                     * 
                     */
                    void SetServiceNodeInfo(const std::vector<int64_t>& _serviceNodeInfo);

                    /**
                     * 判断参数 ServiceNodeInfo 是否已赋值
                     * @return ServiceNodeInfo 是否已赋值
                     * 
                     */
                    bool ServiceNodeInfoHasBeenSet() const;

                    /**
                     * 获取<p>分散置放群组ID列表，当前只支持指定一个。<br>该参数可以通过调用 <a href="https://cloud.tencent.com/document/product/213/17810">DescribeDisasterRecoverGroups</a>的返回值中的DisasterRecoverGroupId字段来获取。</p>
                     * @return DisasterRecoverGroupIds <p>分散置放群组ID列表，当前只支持指定一个。<br>该参数可以通过调用 <a href="https://cloud.tencent.com/document/product/213/17810">DescribeDisasterRecoverGroups</a>的返回值中的DisasterRecoverGroupId字段来获取。</p>
                     * 
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置<p>分散置放群组ID列表，当前只支持指定一个。<br>该参数可以通过调用 <a href="https://cloud.tencent.com/document/product/213/17810">DescribeDisasterRecoverGroups</a>的返回值中的DisasterRecoverGroupId字段来获取。</p>
                     * @param _disasterRecoverGroupIds <p>分散置放群组ID列表，当前只支持指定一个。<br>该参数可以通过调用 <a href="https://cloud.tencent.com/document/product/213/17810">DescribeDisasterRecoverGroups</a>的返回值中的DisasterRecoverGroupId字段来获取。</p>
                     * 
                     */
                    void SetDisasterRecoverGroupIds(const std::vector<std::string>& _disasterRecoverGroupIds);

                    /**
                     * 判断参数 DisasterRecoverGroupIds 是否已赋值
                     * @return DisasterRecoverGroupIds 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupIdsHasBeenSet() const;

                    /**
                     * 获取<p>扩容节点绑定标签列表。</p>
                     * @return Tags <p>扩容节点绑定标签列表。</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>扩容节点绑定标签列表。</p>
                     * @param _tags <p>扩容节点绑定标签列表。</p>
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
                     * 获取<p>扩容所选资源类型，可选范围为&quot;HOST&quot;,&quot;POD&quot;,&quot;MNode&quot;，HOST为普通的CVM资源，POD为TKE集群或EKS集群提供的资源,MNode为全托管资源类型</p>
                     * @return HardwareSourceType <p>扩容所选资源类型，可选范围为&quot;HOST&quot;,&quot;POD&quot;,&quot;MNode&quot;，HOST为普通的CVM资源，POD为TKE集群或EKS集群提供的资源,MNode为全托管资源类型</p>
                     * 
                     */
                    std::string GetHardwareSourceType() const;

                    /**
                     * 设置<p>扩容所选资源类型，可选范围为&quot;HOST&quot;,&quot;POD&quot;,&quot;MNode&quot;，HOST为普通的CVM资源，POD为TKE集群或EKS集群提供的资源,MNode为全托管资源类型</p>
                     * @param _hardwareSourceType <p>扩容所选资源类型，可选范围为&quot;HOST&quot;,&quot;POD&quot;,&quot;MNode&quot;，HOST为普通的CVM资源，POD为TKE集群或EKS集群提供的资源,MNode为全托管资源类型</p>
                     * 
                     */
                    void SetHardwareSourceType(const std::string& _hardwareSourceType);

                    /**
                     * 判断参数 HardwareSourceType 是否已赋值
                     * @return HardwareSourceType 是否已赋值
                     * 
                     */
                    bool HardwareSourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Pod相关资源信息</p>
                     * @return PodSpecInfo <p>Pod相关资源信息</p>
                     * 
                     */
                    PodSpecInfo GetPodSpecInfo() const;

                    /**
                     * 设置<p>Pod相关资源信息</p>
                     * @param _podSpecInfo <p>Pod相关资源信息</p>
                     * 
                     */
                    void SetPodSpecInfo(const PodSpecInfo& _podSpecInfo);

                    /**
                     * 判断参数 PodSpecInfo 是否已赋值
                     * @return PodSpecInfo 是否已赋值
                     * 
                     */
                    bool PodSpecInfoHasBeenSet() const;

                    /**
                     * 获取<p>使用clickhouse集群扩容时，选择的机器分组名称</p>
                     * @return ClickHouseClusterName <p>使用clickhouse集群扩容时，选择的机器分组名称</p>
                     * 
                     */
                    std::string GetClickHouseClusterName() const;

                    /**
                     * 设置<p>使用clickhouse集群扩容时，选择的机器分组名称</p>
                     * @param _clickHouseClusterName <p>使用clickhouse集群扩容时，选择的机器分组名称</p>
                     * 
                     */
                    void SetClickHouseClusterName(const std::string& _clickHouseClusterName);

                    /**
                     * 判断参数 ClickHouseClusterName 是否已赋值
                     * @return ClickHouseClusterName 是否已赋值
                     * 
                     */
                    bool ClickHouseClusterNameHasBeenSet() const;

                    /**
                     * 获取<p>使用clickhouse集群扩容时，选择的机器分组类型。new为新增，old为选择旧分组</p>
                     * @return ClickHouseClusterType <p>使用clickhouse集群扩容时，选择的机器分组类型。new为新增，old为选择旧分组</p>
                     * 
                     */
                    std::string GetClickHouseClusterType() const;

                    /**
                     * 设置<p>使用clickhouse集群扩容时，选择的机器分组类型。new为新增，old为选择旧分组</p>
                     * @param _clickHouseClusterType <p>使用clickhouse集群扩容时，选择的机器分组类型。new为新增，old为选择旧分组</p>
                     * 
                     */
                    void SetClickHouseClusterType(const std::string& _clickHouseClusterType);

                    /**
                     * 判断参数 ClickHouseClusterType 是否已赋值
                     * @return ClickHouseClusterType 是否已赋值
                     * 
                     */
                    bool ClickHouseClusterTypeHasBeenSet() const;

                    /**
                     * 获取<p>扩容指定 Yarn Node Label</p>
                     * @return YarnNodeLabel <p>扩容指定 Yarn Node Label</p>
                     * 
                     */
                    std::string GetYarnNodeLabel() const;

                    /**
                     * 设置<p>扩容指定 Yarn Node Label</p>
                     * @param _yarnNodeLabel <p>扩容指定 Yarn Node Label</p>
                     * 
                     */
                    void SetYarnNodeLabel(const std::string& _yarnNodeLabel);

                    /**
                     * 判断参数 YarnNodeLabel 是否已赋值
                     * @return YarnNodeLabel 是否已赋值
                     * 
                     */
                    bool YarnNodeLabelHasBeenSet() const;

                    /**
                     * 获取<p>扩容后是否启动服务，默认取值否</p><li>true：是</li><li>false：否</li>
                     * @return EnableStartServiceFlag <p>扩容后是否启动服务，默认取值否</p><li>true：是</li><li>false：否</li>
                     * 
                     */
                    bool GetEnableStartServiceFlag() const;

                    /**
                     * 设置<p>扩容后是否启动服务，默认取值否</p><li>true：是</li><li>false：否</li>
                     * @param _enableStartServiceFlag <p>扩容后是否启动服务，默认取值否</p><li>true：是</li><li>false：否</li>
                     * 
                     */
                    void SetEnableStartServiceFlag(const bool& _enableStartServiceFlag);

                    /**
                     * 判断参数 EnableStartServiceFlag 是否已赋值
                     * @return EnableStartServiceFlag 是否已赋值
                     * 
                     */
                    bool EnableStartServiceFlagHasBeenSet() const;

                    /**
                     * 获取<p>规格设置</p>
                     * @return ResourceSpec <p>规格设置</p>
                     * 
                     */
                    NodeResourceSpec GetResourceSpec() const;

                    /**
                     * 设置<p>规格设置</p>
                     * @param _resourceSpec <p>规格设置</p>
                     * 
                     */
                    void SetResourceSpec(const NodeResourceSpec& _resourceSpec);

                    /**
                     * 判断参数 ResourceSpec 是否已赋值
                     * @return ResourceSpec 是否已赋值
                     * 
                     */
                    bool ResourceSpecHasBeenSet() const;

                    /**
                     * 获取<p>实例所属的可用区，例如ap-guangzhou-1。该参数也可以通过调用<a href="https://cloud.tencent.com/document/product/213/15707">DescribeZones</a> 的返回值中的Zone字段来获取。</p>
                     * @return Zone <p>实例所属的可用区，例如ap-guangzhou-1。该参数也可以通过调用<a href="https://cloud.tencent.com/document/product/213/15707">DescribeZones</a> 的返回值中的Zone字段来获取。</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>实例所属的可用区，例如ap-guangzhou-1。该参数也可以通过调用<a href="https://cloud.tencent.com/document/product/213/15707">DescribeZones</a> 的返回值中的Zone字段来获取。</p>
                     * @param _zone <p>实例所属的可用区，例如ap-guangzhou-1。该参数也可以通过调用<a href="https://cloud.tencent.com/document/product/213/15707">DescribeZones</a> 的返回值中的Zone字段来获取。</p>
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>子网，默认是集群创建时的子网</p>
                     * @return SubnetId <p>子网，默认是集群创建时的子网</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>子网，默认是集群创建时的子网</p>
                     * @param _subnetId <p>子网，默认是集群创建时的子网</p>
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
                     * 获取<p>扩容指定配置组</p>
                     * @return ScaleOutServiceConfGroupsInfo <p>扩容指定配置组</p>
                     * 
                     */
                    std::vector<ScaleOutServiceConfGroupsInfo> GetScaleOutServiceConfGroupsInfo() const;

                    /**
                     * 设置<p>扩容指定配置组</p>
                     * @param _scaleOutServiceConfGroupsInfo <p>扩容指定配置组</p>
                     * 
                     */
                    void SetScaleOutServiceConfGroupsInfo(const std::vector<ScaleOutServiceConfGroupsInfo>& _scaleOutServiceConfGroupsInfo);

                    /**
                     * 判断参数 ScaleOutServiceConfGroupsInfo 是否已赋值
                     * @return ScaleOutServiceConfGroupsInfo 是否已赋值
                     * 
                     */
                    bool ScaleOutServiceConfGroupsInfoHasBeenSet() const;

                    /**
                     * 获取<p>节点标记信息，当前只提供给tf平台使用</p>
                     * @return NodeMarks <p>节点标记信息，当前只提供给tf平台使用</p>
                     * 
                     */
                    NodeMark GetNodeMarks() const;

                    /**
                     * 设置<p>节点标记信息，当前只提供给tf平台使用</p>
                     * @param _nodeMarks <p>节点标记信息，当前只提供给tf平台使用</p>
                     * 
                     */
                    void SetNodeMarks(const NodeMark& _nodeMarks);

                    /**
                     * 判断参数 NodeMarks 是否已赋值
                     * @return NodeMarks 是否已赋值
                     * 
                     */
                    bool NodeMarksHasBeenSet() const;

                    /**
                     * 获取<p>扩容指定计算组名称</p>
                     * @return WarehouseName <p>扩容指定计算组名称</p>
                     * 
                     */
                    std::string GetWarehouseName() const;

                    /**
                     * 设置<p>扩容指定计算组名称</p>
                     * @param _warehouseName <p>扩容指定计算组名称</p>
                     * 
                     */
                    void SetWarehouseName(const std::string& _warehouseName);

                    /**
                     * 判断参数 WarehouseName 是否已赋值
                     * @return WarehouseName 是否已赋值
                     * 
                     */
                    bool WarehouseNameHasBeenSet() const;

                    /**
                     * 获取<p>分区置放群组分区</p>
                     * @return PartitionNumber <p>分区置放群组分区</p>
                     * 
                     */
                    int64_t GetPartitionNumber() const;

                    /**
                     * 设置<p>分区置放群组分区</p>
                     * @param _partitionNumber <p>分区置放群组分区</p>
                     * 
                     */
                    void SetPartitionNumber(const int64_t& _partitionNumber);

                    /**
                     * 判断参数 PartitionNumber 是否已赋值
                     * @return PartitionNumber 是否已赋值
                     * 
                     */
                    bool PartitionNumberHasBeenSet() const;

                private:

                    /**
                     * <p>节点计费模式。取值范围：</p><li>PREPAID：预付费，即包年包月。</li><li>POSTPAID_BY_HOUR：按小时后付费。</li><li>SPOTPAID：竞价付费（仅支持TASK节点）。</li>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>集群实例ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>扩容节点类型以及数量</p>
                     */
                    ScaleOutNodeConfig m_scaleOutNodeConfig;
                    bool m_scaleOutNodeConfigHasBeenSet;

                    /**
                     * <p>唯一随机标识，时效5分钟，需要调用者指定 防止客户端重新创建资源，例如 a9a90aa6-<strong><strong>-</strong></strong>-****-fae36063280</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * <p>即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。</p>
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * <p><a href="https://cloud.tencent.com/document/product/589/35656">引导操作</a>脚本设置。</p>
                     */
                    std::vector<ScriptBootstrapActionConfig> m_scriptBootstrapActionConfig;
                    bool m_scriptBootstrapActionConfigHasBeenSet;

                    /**
                     * <p>扩容部署服务，新增节点将默认继承当前节点类型中所部署服务，部署服务含默认可选服务，该参数仅支持可选服务填写，如：存量task节点已部署HDFS、YARN、impala；使用api扩容task节不部署impala时，部署服务仅填写HDFS、YARN。<a href="https://cloud.tencent.com/document/product/589/98760">组件名对应的映射关系表</a>。</p>
                     */
                    std::vector<int64_t> m_softDeployInfo;
                    bool m_softDeployInfoHasBeenSet;

                    /**
                     * <p>部署进程，默认部署扩容服务的全部进程，支持修改部署进程，如：当前task节点部署服务为：HDFS、YARN、impala，默认部署服务为：DataNode,NodeManager,ImpalaServer，若用户需修改部署进程信息，部署进程：    DataNode,NodeManager,ImpalaServerCoordinator或DataNode,NodeManager,ImpalaServerExecutor。<a href="https://cloud.tencent.com/document/product/589/98760">进程名对应的映射关系表</a>。</p>
                     */
                    std::vector<int64_t> m_serviceNodeInfo;
                    bool m_serviceNodeInfoHasBeenSet;

                    /**
                     * <p>分散置放群组ID列表，当前只支持指定一个。<br>该参数可以通过调用 <a href="https://cloud.tencent.com/document/product/213/17810">DescribeDisasterRecoverGroups</a>的返回值中的DisasterRecoverGroupId字段来获取。</p>
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                    /**
                     * <p>扩容节点绑定标签列表。</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>扩容所选资源类型，可选范围为&quot;HOST&quot;,&quot;POD&quot;,&quot;MNode&quot;，HOST为普通的CVM资源，POD为TKE集群或EKS集群提供的资源,MNode为全托管资源类型</p>
                     */
                    std::string m_hardwareSourceType;
                    bool m_hardwareSourceTypeHasBeenSet;

                    /**
                     * <p>Pod相关资源信息</p>
                     */
                    PodSpecInfo m_podSpecInfo;
                    bool m_podSpecInfoHasBeenSet;

                    /**
                     * <p>使用clickhouse集群扩容时，选择的机器分组名称</p>
                     */
                    std::string m_clickHouseClusterName;
                    bool m_clickHouseClusterNameHasBeenSet;

                    /**
                     * <p>使用clickhouse集群扩容时，选择的机器分组类型。new为新增，old为选择旧分组</p>
                     */
                    std::string m_clickHouseClusterType;
                    bool m_clickHouseClusterTypeHasBeenSet;

                    /**
                     * <p>扩容指定 Yarn Node Label</p>
                     */
                    std::string m_yarnNodeLabel;
                    bool m_yarnNodeLabelHasBeenSet;

                    /**
                     * <p>扩容后是否启动服务，默认取值否</p><li>true：是</li><li>false：否</li>
                     */
                    bool m_enableStartServiceFlag;
                    bool m_enableStartServiceFlagHasBeenSet;

                    /**
                     * <p>规格设置</p>
                     */
                    NodeResourceSpec m_resourceSpec;
                    bool m_resourceSpecHasBeenSet;

                    /**
                     * <p>实例所属的可用区，例如ap-guangzhou-1。该参数也可以通过调用<a href="https://cloud.tencent.com/document/product/213/15707">DescribeZones</a> 的返回值中的Zone字段来获取。</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>子网，默认是集群创建时的子网</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>扩容指定配置组</p>
                     */
                    std::vector<ScaleOutServiceConfGroupsInfo> m_scaleOutServiceConfGroupsInfo;
                    bool m_scaleOutServiceConfGroupsInfoHasBeenSet;

                    /**
                     * <p>节点标记信息，当前只提供给tf平台使用</p>
                     */
                    NodeMark m_nodeMarks;
                    bool m_nodeMarksHasBeenSet;

                    /**
                     * <p>扩容指定计算组名称</p>
                     */
                    std::string m_warehouseName;
                    bool m_warehouseNameHasBeenSet;

                    /**
                     * <p>分区置放群组分区</p>
                     */
                    int64_t m_partitionNumber;
                    bool m_partitionNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SCALEOUTCLUSTERREQUEST_H_
