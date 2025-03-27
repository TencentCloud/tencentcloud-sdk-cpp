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
                     * 获取节点计费模式。取值范围：
<li>PREPAID：预付费，即包年包月。</li>
<li>POSTPAID_BY_HOUR：按小时后付费。</li>
<li>SPOTPAID：竞价付费（仅支持TASK节点）。</li>
                     * @return InstanceChargeType 节点计费模式。取值范围：
<li>PREPAID：预付费，即包年包月。</li>
<li>POSTPAID_BY_HOUR：按小时后付费。</li>
<li>SPOTPAID：竞价付费（仅支持TASK节点）。</li>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置节点计费模式。取值范围：
<li>PREPAID：预付费，即包年包月。</li>
<li>POSTPAID_BY_HOUR：按小时后付费。</li>
<li>SPOTPAID：竞价付费（仅支持TASK节点）。</li>
                     * @param _instanceChargeType 节点计费模式。取值范围：
<li>PREPAID：预付费，即包年包月。</li>
<li>POSTPAID_BY_HOUR：按小时后付费。</li>
<li>SPOTPAID：竞价付费（仅支持TASK节点）。</li>
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
                     * 获取集群实例ID。
                     * @return InstanceId 集群实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群实例ID。
                     * @param _instanceId 集群实例ID。
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
                     * 获取扩容节点类型以及数量
                     * @return ScaleOutNodeConfig 扩容节点类型以及数量
                     * 
                     */
                    ScaleOutNodeConfig GetScaleOutNodeConfig() const;

                    /**
                     * 设置扩容节点类型以及数量
                     * @param _scaleOutNodeConfig 扩容节点类型以及数量
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
                     * 获取唯一随机标识，时效5分钟，需要调用者指定 防止客户端重新创建资源，例如 a9a90aa6-****-****-****-fae36063280
                     * @return ClientToken 唯一随机标识，时效5分钟，需要调用者指定 防止客户端重新创建资源，例如 a9a90aa6-****-****-****-fae36063280
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置唯一随机标识，时效5分钟，需要调用者指定 防止客户端重新创建资源，例如 a9a90aa6-****-****-****-fae36063280
                     * @param _clientToken 唯一随机标识，时效5分钟，需要调用者指定 防止客户端重新创建资源，例如 a9a90aa6-****-****-****-fae36063280
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
                     * 获取即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * @return InstanceChargePrepaid 即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * @param _instanceChargePrepaid 即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
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
                     * 获取[引导操作](https://cloud.tencent.com/document/product/589/35656)脚本设置。
                     * @return ScriptBootstrapActionConfig [引导操作](https://cloud.tencent.com/document/product/589/35656)脚本设置。
                     * 
                     */
                    std::vector<ScriptBootstrapActionConfig> GetScriptBootstrapActionConfig() const;

                    /**
                     * 设置[引导操作](https://cloud.tencent.com/document/product/589/35656)脚本设置。
                     * @param _scriptBootstrapActionConfig [引导操作](https://cloud.tencent.com/document/product/589/35656)脚本设置。
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
                     * 获取扩容部署服务，新增节点将默认继承当前节点类型中所部署服务，部署服务含默认可选服务，该参数仅支持可选服务填写，如：存量task节点已部署HDFS、YARN、impala；使用api扩容task节不部署impala时，部署服务仅填写HDFS、YARN。[组件名对应的映射关系表](https://cloud.tencent.com/document/product/589/98760)。
                     * @return SoftDeployInfo 扩容部署服务，新增节点将默认继承当前节点类型中所部署服务，部署服务含默认可选服务，该参数仅支持可选服务填写，如：存量task节点已部署HDFS、YARN、impala；使用api扩容task节不部署impala时，部署服务仅填写HDFS、YARN。[组件名对应的映射关系表](https://cloud.tencent.com/document/product/589/98760)。
                     * 
                     */
                    std::vector<int64_t> GetSoftDeployInfo() const;

                    /**
                     * 设置扩容部署服务，新增节点将默认继承当前节点类型中所部署服务，部署服务含默认可选服务，该参数仅支持可选服务填写，如：存量task节点已部署HDFS、YARN、impala；使用api扩容task节不部署impala时，部署服务仅填写HDFS、YARN。[组件名对应的映射关系表](https://cloud.tencent.com/document/product/589/98760)。
                     * @param _softDeployInfo 扩容部署服务，新增节点将默认继承当前节点类型中所部署服务，部署服务含默认可选服务，该参数仅支持可选服务填写，如：存量task节点已部署HDFS、YARN、impala；使用api扩容task节不部署impala时，部署服务仅填写HDFS、YARN。[组件名对应的映射关系表](https://cloud.tencent.com/document/product/589/98760)。
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
                     * 获取部署进程，默认部署扩容服务的全部进程，支持修改部署进程，如：当前task节点部署服务为：HDFS、YARN、impala，默认部署服务为：DataNode,NodeManager,ImpalaServer，若用户需修改部署进程信息，部署进程：	DataNode,NodeManager,ImpalaServerCoordinator或DataNode,NodeManager,ImpalaServerExecutor。[进程名对应的映射关系表](https://cloud.tencent.com/document/product/589/98760)。
                     * @return ServiceNodeInfo 部署进程，默认部署扩容服务的全部进程，支持修改部署进程，如：当前task节点部署服务为：HDFS、YARN、impala，默认部署服务为：DataNode,NodeManager,ImpalaServer，若用户需修改部署进程信息，部署进程：	DataNode,NodeManager,ImpalaServerCoordinator或DataNode,NodeManager,ImpalaServerExecutor。[进程名对应的映射关系表](https://cloud.tencent.com/document/product/589/98760)。
                     * 
                     */
                    std::vector<int64_t> GetServiceNodeInfo() const;

                    /**
                     * 设置部署进程，默认部署扩容服务的全部进程，支持修改部署进程，如：当前task节点部署服务为：HDFS、YARN、impala，默认部署服务为：DataNode,NodeManager,ImpalaServer，若用户需修改部署进程信息，部署进程：	DataNode,NodeManager,ImpalaServerCoordinator或DataNode,NodeManager,ImpalaServerExecutor。[进程名对应的映射关系表](https://cloud.tencent.com/document/product/589/98760)。
                     * @param _serviceNodeInfo 部署进程，默认部署扩容服务的全部进程，支持修改部署进程，如：当前task节点部署服务为：HDFS、YARN、impala，默认部署服务为：DataNode,NodeManager,ImpalaServer，若用户需修改部署进程信息，部署进程：	DataNode,NodeManager,ImpalaServerCoordinator或DataNode,NodeManager,ImpalaServerExecutor。[进程名对应的映射关系表](https://cloud.tencent.com/document/product/589/98760)。
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
                     * 获取分散置放群组ID列表，当前只支持指定一个。
该参数可以通过调用 [DescribeDisasterRecoverGroups](https://cloud.tencent.com/document/product/213/17810)的返回值中的DisasterRecoverGroupId字段来获取。
                     * @return DisasterRecoverGroupIds 分散置放群组ID列表，当前只支持指定一个。
该参数可以通过调用 [DescribeDisasterRecoverGroups](https://cloud.tencent.com/document/product/213/17810)的返回值中的DisasterRecoverGroupId字段来获取。
                     * 
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置分散置放群组ID列表，当前只支持指定一个。
该参数可以通过调用 [DescribeDisasterRecoverGroups](https://cloud.tencent.com/document/product/213/17810)的返回值中的DisasterRecoverGroupId字段来获取。
                     * @param _disasterRecoverGroupIds 分散置放群组ID列表，当前只支持指定一个。
该参数可以通过调用 [DescribeDisasterRecoverGroups](https://cloud.tencent.com/document/product/213/17810)的返回值中的DisasterRecoverGroupId字段来获取。
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
                     * 获取扩容节点绑定标签列表。
                     * @return Tags 扩容节点绑定标签列表。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置扩容节点绑定标签列表。
                     * @param _tags 扩容节点绑定标签列表。
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
                     * 获取扩容所选资源类型，可选范围为"HOST","POD","MNode"，HOST为普通的CVM资源，POD为TKE集群或EKS集群提供的资源,MNode为全托管资源类型
                     * @return HardwareSourceType 扩容所选资源类型，可选范围为"HOST","POD","MNode"，HOST为普通的CVM资源，POD为TKE集群或EKS集群提供的资源,MNode为全托管资源类型
                     * 
                     */
                    std::string GetHardwareSourceType() const;

                    /**
                     * 设置扩容所选资源类型，可选范围为"HOST","POD","MNode"，HOST为普通的CVM资源，POD为TKE集群或EKS集群提供的资源,MNode为全托管资源类型
                     * @param _hardwareSourceType 扩容所选资源类型，可选范围为"HOST","POD","MNode"，HOST为普通的CVM资源，POD为TKE集群或EKS集群提供的资源,MNode为全托管资源类型
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
                     * 获取Pod相关资源信息
                     * @return PodSpecInfo Pod相关资源信息
                     * 
                     */
                    PodSpecInfo GetPodSpecInfo() const;

                    /**
                     * 设置Pod相关资源信息
                     * @param _podSpecInfo Pod相关资源信息
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
                     * 获取使用clickhouse集群扩容时，选择的机器分组名称
                     * @return ClickHouseClusterName 使用clickhouse集群扩容时，选择的机器分组名称
                     * 
                     */
                    std::string GetClickHouseClusterName() const;

                    /**
                     * 设置使用clickhouse集群扩容时，选择的机器分组名称
                     * @param _clickHouseClusterName 使用clickhouse集群扩容时，选择的机器分组名称
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
                     * 获取使用clickhouse集群扩容时，选择的机器分组类型。new为新增，old为选择旧分组
                     * @return ClickHouseClusterType 使用clickhouse集群扩容时，选择的机器分组类型。new为新增，old为选择旧分组
                     * 
                     */
                    std::string GetClickHouseClusterType() const;

                    /**
                     * 设置使用clickhouse集群扩容时，选择的机器分组类型。new为新增，old为选择旧分组
                     * @param _clickHouseClusterType 使用clickhouse集群扩容时，选择的机器分组类型。new为新增，old为选择旧分组
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
                     * 获取扩容指定 Yarn Node Label
                     * @return YarnNodeLabel 扩容指定 Yarn Node Label
                     * 
                     */
                    std::string GetYarnNodeLabel() const;

                    /**
                     * 设置扩容指定 Yarn Node Label
                     * @param _yarnNodeLabel 扩容指定 Yarn Node Label
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
                     * 获取扩容后是否启动服务，默认取值否
<li>true：是</li>
<li>false：否</li>
                     * @return EnableStartServiceFlag 扩容后是否启动服务，默认取值否
<li>true：是</li>
<li>false：否</li>
                     * 
                     */
                    bool GetEnableStartServiceFlag() const;

                    /**
                     * 设置扩容后是否启动服务，默认取值否
<li>true：是</li>
<li>false：否</li>
                     * @param _enableStartServiceFlag 扩容后是否启动服务，默认取值否
<li>true：是</li>
<li>false：否</li>
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
                     * 获取规格设置
                     * @return ResourceSpec 规格设置
                     * 
                     */
                    NodeResourceSpec GetResourceSpec() const;

                    /**
                     * 设置规格设置
                     * @param _resourceSpec 规格设置
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
                     * 获取实例所属的可用区，例如ap-guangzhou-1。该参数也可以通过调用[DescribeZones](https://cloud.tencent.com/document/product/213/15707) 的返回值中的Zone字段来获取。
                     * @return Zone 实例所属的可用区，例如ap-guangzhou-1。该参数也可以通过调用[DescribeZones](https://cloud.tencent.com/document/product/213/15707) 的返回值中的Zone字段来获取。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置实例所属的可用区，例如ap-guangzhou-1。该参数也可以通过调用[DescribeZones](https://cloud.tencent.com/document/product/213/15707) 的返回值中的Zone字段来获取。
                     * @param _zone 实例所属的可用区，例如ap-guangzhou-1。该参数也可以通过调用[DescribeZones](https://cloud.tencent.com/document/product/213/15707) 的返回值中的Zone字段来获取。
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
                     * 获取子网，默认是集群创建时的子网
                     * @return SubnetId 子网，默认是集群创建时的子网
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网，默认是集群创建时的子网
                     * @param _subnetId 子网，默认是集群创建时的子网
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
                     * 获取扩容指定配置组
                     * @return ScaleOutServiceConfGroupsInfo 扩容指定配置组
                     * 
                     */
                    std::vector<ScaleOutServiceConfGroupsInfo> GetScaleOutServiceConfGroupsInfo() const;

                    /**
                     * 设置扩容指定配置组
                     * @param _scaleOutServiceConfGroupsInfo 扩容指定配置组
                     * 
                     */
                    void SetScaleOutServiceConfGroupsInfo(const std::vector<ScaleOutServiceConfGroupsInfo>& _scaleOutServiceConfGroupsInfo);

                    /**
                     * 判断参数 ScaleOutServiceConfGroupsInfo 是否已赋值
                     * @return ScaleOutServiceConfGroupsInfo 是否已赋值
                     * 
                     */
                    bool ScaleOutServiceConfGroupsInfoHasBeenSet() const;

                private:

                    /**
                     * 节点计费模式。取值范围：
<li>PREPAID：预付费，即包年包月。</li>
<li>POSTPAID_BY_HOUR：按小时后付费。</li>
<li>SPOTPAID：竞价付费（仅支持TASK节点）。</li>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 集群实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 扩容节点类型以及数量
                     */
                    ScaleOutNodeConfig m_scaleOutNodeConfig;
                    bool m_scaleOutNodeConfigHasBeenSet;

                    /**
                     * 唯一随机标识，时效5分钟，需要调用者指定 防止客户端重新创建资源，例如 a9a90aa6-****-****-****-fae36063280
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * 即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * [引导操作](https://cloud.tencent.com/document/product/589/35656)脚本设置。
                     */
                    std::vector<ScriptBootstrapActionConfig> m_scriptBootstrapActionConfig;
                    bool m_scriptBootstrapActionConfigHasBeenSet;

                    /**
                     * 扩容部署服务，新增节点将默认继承当前节点类型中所部署服务，部署服务含默认可选服务，该参数仅支持可选服务填写，如：存量task节点已部署HDFS、YARN、impala；使用api扩容task节不部署impala时，部署服务仅填写HDFS、YARN。[组件名对应的映射关系表](https://cloud.tencent.com/document/product/589/98760)。
                     */
                    std::vector<int64_t> m_softDeployInfo;
                    bool m_softDeployInfoHasBeenSet;

                    /**
                     * 部署进程，默认部署扩容服务的全部进程，支持修改部署进程，如：当前task节点部署服务为：HDFS、YARN、impala，默认部署服务为：DataNode,NodeManager,ImpalaServer，若用户需修改部署进程信息，部署进程：	DataNode,NodeManager,ImpalaServerCoordinator或DataNode,NodeManager,ImpalaServerExecutor。[进程名对应的映射关系表](https://cloud.tencent.com/document/product/589/98760)。
                     */
                    std::vector<int64_t> m_serviceNodeInfo;
                    bool m_serviceNodeInfoHasBeenSet;

                    /**
                     * 分散置放群组ID列表，当前只支持指定一个。
该参数可以通过调用 [DescribeDisasterRecoverGroups](https://cloud.tencent.com/document/product/213/17810)的返回值中的DisasterRecoverGroupId字段来获取。
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                    /**
                     * 扩容节点绑定标签列表。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 扩容所选资源类型，可选范围为"HOST","POD","MNode"，HOST为普通的CVM资源，POD为TKE集群或EKS集群提供的资源,MNode为全托管资源类型
                     */
                    std::string m_hardwareSourceType;
                    bool m_hardwareSourceTypeHasBeenSet;

                    /**
                     * Pod相关资源信息
                     */
                    PodSpecInfo m_podSpecInfo;
                    bool m_podSpecInfoHasBeenSet;

                    /**
                     * 使用clickhouse集群扩容时，选择的机器分组名称
                     */
                    std::string m_clickHouseClusterName;
                    bool m_clickHouseClusterNameHasBeenSet;

                    /**
                     * 使用clickhouse集群扩容时，选择的机器分组类型。new为新增，old为选择旧分组
                     */
                    std::string m_clickHouseClusterType;
                    bool m_clickHouseClusterTypeHasBeenSet;

                    /**
                     * 扩容指定 Yarn Node Label
                     */
                    std::string m_yarnNodeLabel;
                    bool m_yarnNodeLabelHasBeenSet;

                    /**
                     * 扩容后是否启动服务，默认取值否
<li>true：是</li>
<li>false：否</li>
                     */
                    bool m_enableStartServiceFlag;
                    bool m_enableStartServiceFlagHasBeenSet;

                    /**
                     * 规格设置
                     */
                    NodeResourceSpec m_resourceSpec;
                    bool m_resourceSpecHasBeenSet;

                    /**
                     * 实例所属的可用区，例如ap-guangzhou-1。该参数也可以通过调用[DescribeZones](https://cloud.tencent.com/document/product/213/15707) 的返回值中的Zone字段来获取。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 子网，默认是集群创建时的子网
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 扩容指定配置组
                     */
                    std::vector<ScaleOutServiceConfGroupsInfo> m_scaleOutServiceConfGroupsInfo;
                    bool m_scaleOutServiceConfGroupsInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SCALEOUTCLUSTERREQUEST_H_
