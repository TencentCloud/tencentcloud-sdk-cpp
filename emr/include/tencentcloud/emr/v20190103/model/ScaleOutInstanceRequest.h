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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_SCALEOUTINSTANCEREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_SCALEOUTINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/PreExecuteFileSettings.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>
#include <tencentcloud/emr/v20190103/model/PodSpec.h>
#include <tencentcloud/emr/v20190103/model/PodParameter.h>
#include <tencentcloud/emr/v20190103/model/ComputeResourceAdvanceParams.h>
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
                * ScaleOutInstance请求参数结构体
                */
                class ScaleOutInstanceRequest : public AbstractModel
                {
                public:
                    ScaleOutInstanceRequest();
                    ~ScaleOutInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>扩容的时间单位。取值范围：</p><li>s：表示秒。PayMode取值为0时，TimeUnit只能取值为s。</li><li>m：表示月份。PayMode取值为1时，TimeUnit只能取值为m。</li>
                     * @return TimeUnit <p>扩容的时间单位。取值范围：</p><li>s：表示秒。PayMode取值为0时，TimeUnit只能取值为s。</li><li>m：表示月份。PayMode取值为1时，TimeUnit只能取值为m。</li>
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置<p>扩容的时间单位。取值范围：</p><li>s：表示秒。PayMode取值为0时，TimeUnit只能取值为s。</li><li>m：表示月份。PayMode取值为1时，TimeUnit只能取值为m。</li>
                     * @param _timeUnit <p>扩容的时间单位。取值范围：</p><li>s：表示秒。PayMode取值为0时，TimeUnit只能取值为s。</li><li>m：表示月份。PayMode取值为1时，TimeUnit只能取值为m。</li>
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取<p>扩容的时长。结合TimeUnit一起使用。</p><li>TimeUnit为s时，该参数只能填写3600，表示按量计费实例。</li><li>TimeUnit为m时，该参数填写的数字表示包年包月实例的购买时长，如1表示购买一个月</li>
                     * @return TimeSpan <p>扩容的时长。结合TimeUnit一起使用。</p><li>TimeUnit为s时，该参数只能填写3600，表示按量计费实例。</li><li>TimeUnit为m时，该参数填写的数字表示包年包月实例的购买时长，如1表示购买一个月</li>
                     * 
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置<p>扩容的时长。结合TimeUnit一起使用。</p><li>TimeUnit为s时，该参数只能填写3600，表示按量计费实例。</li><li>TimeUnit为m时，该参数填写的数字表示包年包月实例的购买时长，如1表示购买一个月</li>
                     * @param _timeSpan <p>扩容的时长。结合TimeUnit一起使用。</p><li>TimeUnit为s时，该参数只能填写3600，表示按量计费实例。</li><li>TimeUnit为m时，该参数填写的数字表示包年包月实例的购买时长，如1表示购买一个月</li>
                     * 
                     */
                    void SetTimeSpan(const uint64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取<p>实例ID。</p>
                     * @return InstanceId <p>实例ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID。</p>
                     * @param _instanceId <p>实例ID。</p>
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
                     * 获取<p>实例计费模式。取值范围：</p><li>0：表示按量计费。</li><li>1：表示包年包月。</li>
                     * @return PayMode <p>实例计费模式。取值范围：</p><li>0：表示按量计费。</li><li>1：表示包年包月。</li>
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置<p>实例计费模式。取值范围：</p><li>0：表示按量计费。</li><li>1：表示包年包月。</li>
                     * @param _payMode <p>实例计费模式。取值范围：</p><li>0：表示按量计费。</li><li>1：表示包年包月。</li>
                     * 
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

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
                     * 获取<p>引导操作脚本设置。</p>
                     * @return PreExecutedFileSettings <p>引导操作脚本设置。</p>
                     * 
                     */
                    std::vector<PreExecuteFileSettings> GetPreExecutedFileSettings() const;

                    /**
                     * 设置<p>引导操作脚本设置。</p>
                     * @param _preExecutedFileSettings <p>引导操作脚本设置。</p>
                     * 
                     */
                    void SetPreExecutedFileSettings(const std::vector<PreExecuteFileSettings>& _preExecutedFileSettings);

                    /**
                     * 判断参数 PreExecutedFileSettings 是否已赋值
                     * @return PreExecutedFileSettings 是否已赋值
                     * 
                     */
                    bool PreExecutedFileSettingsHasBeenSet() const;

                    /**
                     * 获取<p>扩容的Task节点数量。</p>
                     * @return TaskCount <p>扩容的Task节点数量。</p>
                     * 
                     */
                    uint64_t GetTaskCount() const;

                    /**
                     * 设置<p>扩容的Task节点数量。</p>
                     * @param _taskCount <p>扩容的Task节点数量。</p>
                     * 
                     */
                    void SetTaskCount(const uint64_t& _taskCount);

                    /**
                     * 判断参数 TaskCount 是否已赋值
                     * @return TaskCount 是否已赋值
                     * 
                     */
                    bool TaskCountHasBeenSet() const;

                    /**
                     * 获取<p>扩容的Core节点数量。</p>
                     * @return CoreCount <p>扩容的Core节点数量。</p>
                     * 
                     */
                    uint64_t GetCoreCount() const;

                    /**
                     * 设置<p>扩容的Core节点数量。</p>
                     * @param _coreCount <p>扩容的Core节点数量。</p>
                     * 
                     */
                    void SetCoreCount(const uint64_t& _coreCount);

                    /**
                     * 判断参数 CoreCount 是否已赋值
                     * @return CoreCount 是否已赋值
                     * 
                     */
                    bool CoreCountHasBeenSet() const;

                    /**
                     * 获取<p>扩容时不需要安装的进程。</p>
                     * @return UnNecessaryNodeList <p>扩容时不需要安装的进程。</p>
                     * 
                     */
                    std::vector<uint64_t> GetUnNecessaryNodeList() const;

                    /**
                     * 设置<p>扩容时不需要安装的进程。</p>
                     * @param _unNecessaryNodeList <p>扩容时不需要安装的进程。</p>
                     * 
                     */
                    void SetUnNecessaryNodeList(const std::vector<uint64_t>& _unNecessaryNodeList);

                    /**
                     * 判断参数 UnNecessaryNodeList 是否已赋值
                     * @return UnNecessaryNodeList 是否已赋值
                     * 
                     */
                    bool UnNecessaryNodeListHasBeenSet() const;

                    /**
                     * 获取<p>扩容的Router节点数量。</p>
                     * @return RouterCount <p>扩容的Router节点数量。</p>
                     * 
                     */
                    uint64_t GetRouterCount() const;

                    /**
                     * 设置<p>扩容的Router节点数量。</p>
                     * @param _routerCount <p>扩容的Router节点数量。</p>
                     * 
                     */
                    void SetRouterCount(const uint64_t& _routerCount);

                    /**
                     * 判断参数 RouterCount 是否已赋值
                     * @return RouterCount 是否已赋值
                     * 
                     */
                    bool RouterCountHasBeenSet() const;

                    /**
                     * 获取<p>部署的服务。</p><li>SoftDeployInfo和ServiceNodeInfo是同组参数，和UnNecessaryNodeList参数互斥。</li><li>建议使用SoftDeployInfo和ServiceNodeInfo组合。</li>
                     * @return SoftDeployInfo <p>部署的服务。</p><li>SoftDeployInfo和ServiceNodeInfo是同组参数，和UnNecessaryNodeList参数互斥。</li><li>建议使用SoftDeployInfo和ServiceNodeInfo组合。</li>
                     * 
                     */
                    std::vector<uint64_t> GetSoftDeployInfo() const;

                    /**
                     * 设置<p>部署的服务。</p><li>SoftDeployInfo和ServiceNodeInfo是同组参数，和UnNecessaryNodeList参数互斥。</li><li>建议使用SoftDeployInfo和ServiceNodeInfo组合。</li>
                     * @param _softDeployInfo <p>部署的服务。</p><li>SoftDeployInfo和ServiceNodeInfo是同组参数，和UnNecessaryNodeList参数互斥。</li><li>建议使用SoftDeployInfo和ServiceNodeInfo组合。</li>
                     * 
                     */
                    void SetSoftDeployInfo(const std::vector<uint64_t>& _softDeployInfo);

                    /**
                     * 判断参数 SoftDeployInfo 是否已赋值
                     * @return SoftDeployInfo 是否已赋值
                     * 
                     */
                    bool SoftDeployInfoHasBeenSet() const;

                    /**
                     * 获取<p>启动的进程。</p>
                     * @return ServiceNodeInfo <p>启动的进程。</p>
                     * 
                     */
                    std::vector<uint64_t> GetServiceNodeInfo() const;

                    /**
                     * 设置<p>启动的进程。</p>
                     * @param _serviceNodeInfo <p>启动的进程。</p>
                     * 
                     */
                    void SetServiceNodeInfo(const std::vector<uint64_t>& _serviceNodeInfo);

                    /**
                     * 判断参数 ServiceNodeInfo 是否已赋值
                     * @return ServiceNodeInfo 是否已赋值
                     * 
                     */
                    bool ServiceNodeInfoHasBeenSet() const;

                    /**
                     * 获取<p>分散置放群组ID列表，当前仅支持指定一个。</p>
                     * @return DisasterRecoverGroupIds <p>分散置放群组ID列表，当前仅支持指定一个。</p>
                     * 
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置<p>分散置放群组ID列表，当前仅支持指定一个。</p>
                     * @param _disasterRecoverGroupIds <p>分散置放群组ID列表，当前仅支持指定一个。</p>
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
                     * @return HardwareResourceType <p>扩容所选资源类型，可选范围为&quot;HOST&quot;,&quot;POD&quot;,&quot;MNode&quot;，HOST为普通的CVM资源，POD为TKE集群或EKS集群提供的资源,MNode为全托管资源类型</p>
                     * 
                     */
                    std::string GetHardwareResourceType() const;

                    /**
                     * 设置<p>扩容所选资源类型，可选范围为&quot;HOST&quot;,&quot;POD&quot;,&quot;MNode&quot;，HOST为普通的CVM资源，POD为TKE集群或EKS集群提供的资源,MNode为全托管资源类型</p>
                     * @param _hardwareResourceType <p>扩容所选资源类型，可选范围为&quot;HOST&quot;,&quot;POD&quot;,&quot;MNode&quot;，HOST为普通的CVM资源，POD为TKE集群或EKS集群提供的资源,MNode为全托管资源类型</p>
                     * 
                     */
                    void SetHardwareResourceType(const std::string& _hardwareResourceType);

                    /**
                     * 判断参数 HardwareResourceType 是否已赋值
                     * @return HardwareResourceType 是否已赋值
                     * 
                     */
                    bool HardwareResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>使用Pod资源扩容时，指定的Pod规格以及来源等信息</p>
                     * @return PodSpec <p>使用Pod资源扩容时，指定的Pod规格以及来源等信息</p>
                     * 
                     */
                    PodSpec GetPodSpec() const;

                    /**
                     * 设置<p>使用Pod资源扩容时，指定的Pod规格以及来源等信息</p>
                     * @param _podSpec <p>使用Pod资源扩容时，指定的Pod规格以及来源等信息</p>
                     * 
                     */
                    void SetPodSpec(const PodSpec& _podSpec);

                    /**
                     * 判断参数 PodSpec 是否已赋值
                     * @return PodSpec 是否已赋值
                     * 
                     */
                    bool PodSpecHasBeenSet() const;

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
                     * 获取<p>规则扩容指定 yarn node label</p>
                     * @return YarnNodeLabel <p>规则扩容指定 yarn node label</p>
                     * 
                     */
                    std::string GetYarnNodeLabel() const;

                    /**
                     * 设置<p>规则扩容指定 yarn node label</p>
                     * @param _yarnNodeLabel <p>规则扩容指定 yarn node label</p>
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
                     * 获取<p>POD自定义权限和自定义参数</p>
                     * @return PodParameter <p>POD自定义权限和自定义参数</p>
                     * 
                     */
                    PodParameter GetPodParameter() const;

                    /**
                     * 设置<p>POD自定义权限和自定义参数</p>
                     * @param _podParameter <p>POD自定义权限和自定义参数</p>
                     * 
                     */
                    void SetPodParameter(const PodParameter& _podParameter);

                    /**
                     * 判断参数 PodParameter 是否已赋值
                     * @return PodParameter 是否已赋值
                     * 
                     */
                    bool PodParameterHasBeenSet() const;

                    /**
                     * 获取<p>扩容的Master节点的数量。<br>使用clickhouse集群扩容时，该参数不生效。<br>使用kafka集群扩容时，该参数不生效。<br>当HardwareResourceType=POD时，该参数不生效。</p>
                     * @return MasterCount <p>扩容的Master节点的数量。<br>使用clickhouse集群扩容时，该参数不生效。<br>使用kafka集群扩容时，该参数不生效。<br>当HardwareResourceType=POD时，该参数不生效。</p>
                     * 
                     */
                    uint64_t GetMasterCount() const;

                    /**
                     * 设置<p>扩容的Master节点的数量。<br>使用clickhouse集群扩容时，该参数不生效。<br>使用kafka集群扩容时，该参数不生效。<br>当HardwareResourceType=POD时，该参数不生效。</p>
                     * @param _masterCount <p>扩容的Master节点的数量。<br>使用clickhouse集群扩容时，该参数不生效。<br>使用kafka集群扩容时，该参数不生效。<br>当HardwareResourceType=POD时，该参数不生效。</p>
                     * 
                     */
                    void SetMasterCount(const uint64_t& _masterCount);

                    /**
                     * 判断参数 MasterCount 是否已赋值
                     * @return MasterCount 是否已赋值
                     * 
                     */
                    bool MasterCountHasBeenSet() const;

                    /**
                     * 获取<p>扩容后是否启动服务，true：启动，false：不启动</p>
                     * @return StartServiceAfterScaleOut <p>扩容后是否启动服务，true：启动，false：不启动</p>
                     * 
                     */
                    std::string GetStartServiceAfterScaleOut() const;

                    /**
                     * 设置<p>扩容后是否启动服务，true：启动，false：不启动</p>
                     * @param _startServiceAfterScaleOut <p>扩容后是否启动服务，true：启动，false：不启动</p>
                     * 
                     */
                    void SetStartServiceAfterScaleOut(const std::string& _startServiceAfterScaleOut);

                    /**
                     * 判断参数 StartServiceAfterScaleOut 是否已赋值
                     * @return StartServiceAfterScaleOut 是否已赋值
                     * 
                     */
                    bool StartServiceAfterScaleOutHasBeenSet() const;

                    /**
                     * 获取<p>可用区，默认是集群的主可用区</p>
                     * @return ZoneId <p>可用区，默认是集群的主可用区</p>
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置<p>可用区，默认是集群的主可用区</p>
                     * @param _zoneId <p>可用区，默认是集群的主可用区</p>
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

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
                     * 获取<p>预设配置组</p>
                     * @return ScaleOutServiceConfAssign <p>预设配置组</p>
                     * 
                     */
                    std::string GetScaleOutServiceConfAssign() const;

                    /**
                     * 设置<p>预设配置组</p>
                     * @param _scaleOutServiceConfAssign <p>预设配置组</p>
                     * 
                     */
                    void SetScaleOutServiceConfAssign(const std::string& _scaleOutServiceConfAssign);

                    /**
                     * 判断参数 ScaleOutServiceConfAssign 是否已赋值
                     * @return ScaleOutServiceConfAssign 是否已赋值
                     * 
                     */
                    bool ScaleOutServiceConfAssignHasBeenSet() const;

                    /**
                     * 获取<p>0表示关闭自动续费，1表示开启自动续费</p>
                     * @return AutoRenew <p>0表示关闭自动续费，1表示开启自动续费</p>
                     * 
                     */
                    int64_t GetAutoRenew() const;

                    /**
                     * 设置<p>0表示关闭自动续费，1表示开启自动续费</p>
                     * @param _autoRenew <p>0表示关闭自动续费，1表示开启自动续费</p>
                     * 
                     */
                    void SetAutoRenew(const int64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取<p>类型为ComputeResource和EMR以及默认，默认为EMR,类型为EMR时,InstanceId生效,类型为ComputeResource时,使用ComputeResourceId标识</p>
                     * @return ResourceBaseType <p>类型为ComputeResource和EMR以及默认，默认为EMR,类型为EMR时,InstanceId生效,类型为ComputeResource时,使用ComputeResourceId标识</p>
                     * 
                     */
                    std::string GetResourceBaseType() const;

                    /**
                     * 设置<p>类型为ComputeResource和EMR以及默认，默认为EMR,类型为EMR时,InstanceId生效,类型为ComputeResource时,使用ComputeResourceId标识</p>
                     * @param _resourceBaseType <p>类型为ComputeResource和EMR以及默认，默认为EMR,类型为EMR时,InstanceId生效,类型为ComputeResource时,使用ComputeResourceId标识</p>
                     * 
                     */
                    void SetResourceBaseType(const std::string& _resourceBaseType);

                    /**
                     * 判断参数 ResourceBaseType 是否已赋值
                     * @return ResourceBaseType 是否已赋值
                     * 
                     */
                    bool ResourceBaseTypeHasBeenSet() const;

                    /**
                     * 获取<p>计算资源id</p>
                     * @return ComputeResourceId <p>计算资源id</p>
                     * 
                     */
                    std::string GetComputeResourceId() const;

                    /**
                     * 设置<p>计算资源id</p>
                     * @param _computeResourceId <p>计算资源id</p>
                     * 
                     */
                    void SetComputeResourceId(const std::string& _computeResourceId);

                    /**
                     * 判断参数 ComputeResourceId 是否已赋值
                     * @return ComputeResourceId 是否已赋值
                     * 
                     */
                    bool ComputeResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>计算资源高级设置</p>
                     * @return ComputeResourceAdvanceParams <p>计算资源高级设置</p>
                     * 
                     */
                    ComputeResourceAdvanceParams GetComputeResourceAdvanceParams() const;

                    /**
                     * 设置<p>计算资源高级设置</p>
                     * @param _computeResourceAdvanceParams <p>计算资源高级设置</p>
                     * 
                     */
                    void SetComputeResourceAdvanceParams(const ComputeResourceAdvanceParams& _computeResourceAdvanceParams);

                    /**
                     * 判断参数 ComputeResourceAdvanceParams 是否已赋值
                     * @return ComputeResourceAdvanceParams 是否已赋值
                     * 
                     */
                    bool ComputeResourceAdvanceParamsHasBeenSet() const;

                    /**
                     * 获取<p>节点标记信息，目前只提供tf平台使用</p>
                     * @return NodeMarks <p>节点标记信息，目前只提供tf平台使用</p>
                     * 
                     */
                    NodeMark GetNodeMarks() const;

                    /**
                     * 设置<p>节点标记信息，目前只提供tf平台使用</p>
                     * @param _nodeMarks <p>节点标记信息，目前只提供tf平台使用</p>
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
                     * 获取<p>扩容指定计算组</p>
                     * @return WarehouseName <p>扩容指定计算组</p>
                     * 
                     */
                    std::string GetWarehouseName() const;

                    /**
                     * 设置<p>扩容指定计算组</p>
                     * @param _warehouseName <p>扩容指定计算组</p>
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
                     * <p>扩容的时间单位。取值范围：</p><li>s：表示秒。PayMode取值为0时，TimeUnit只能取值为s。</li><li>m：表示月份。PayMode取值为1时，TimeUnit只能取值为m。</li>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * <p>扩容的时长。结合TimeUnit一起使用。</p><li>TimeUnit为s时，该参数只能填写3600，表示按量计费实例。</li><li>TimeUnit为m时，该参数填写的数字表示包年包月实例的购买时长，如1表示购买一个月</li>
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * <p>实例ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例计费模式。取值范围：</p><li>0：表示按量计费。</li><li>1：表示包年包月。</li>
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>唯一随机标识，时效5分钟，需要调用者指定 防止客户端重新创建资源，例如 a9a90aa6-<strong><strong>-</strong></strong>-****-fae36063280</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * <p>引导操作脚本设置。</p>
                     */
                    std::vector<PreExecuteFileSettings> m_preExecutedFileSettings;
                    bool m_preExecutedFileSettingsHasBeenSet;

                    /**
                     * <p>扩容的Task节点数量。</p>
                     */
                    uint64_t m_taskCount;
                    bool m_taskCountHasBeenSet;

                    /**
                     * <p>扩容的Core节点数量。</p>
                     */
                    uint64_t m_coreCount;
                    bool m_coreCountHasBeenSet;

                    /**
                     * <p>扩容时不需要安装的进程。</p>
                     */
                    std::vector<uint64_t> m_unNecessaryNodeList;
                    bool m_unNecessaryNodeListHasBeenSet;

                    /**
                     * <p>扩容的Router节点数量。</p>
                     */
                    uint64_t m_routerCount;
                    bool m_routerCountHasBeenSet;

                    /**
                     * <p>部署的服务。</p><li>SoftDeployInfo和ServiceNodeInfo是同组参数，和UnNecessaryNodeList参数互斥。</li><li>建议使用SoftDeployInfo和ServiceNodeInfo组合。</li>
                     */
                    std::vector<uint64_t> m_softDeployInfo;
                    bool m_softDeployInfoHasBeenSet;

                    /**
                     * <p>启动的进程。</p>
                     */
                    std::vector<uint64_t> m_serviceNodeInfo;
                    bool m_serviceNodeInfoHasBeenSet;

                    /**
                     * <p>分散置放群组ID列表，当前仅支持指定一个。</p>
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
                    std::string m_hardwareResourceType;
                    bool m_hardwareResourceTypeHasBeenSet;

                    /**
                     * <p>使用Pod资源扩容时，指定的Pod规格以及来源等信息</p>
                     */
                    PodSpec m_podSpec;
                    bool m_podSpecHasBeenSet;

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
                     * <p>规则扩容指定 yarn node label</p>
                     */
                    std::string m_yarnNodeLabel;
                    bool m_yarnNodeLabelHasBeenSet;

                    /**
                     * <p>POD自定义权限和自定义参数</p>
                     */
                    PodParameter m_podParameter;
                    bool m_podParameterHasBeenSet;

                    /**
                     * <p>扩容的Master节点的数量。<br>使用clickhouse集群扩容时，该参数不生效。<br>使用kafka集群扩容时，该参数不生效。<br>当HardwareResourceType=POD时，该参数不生效。</p>
                     */
                    uint64_t m_masterCount;
                    bool m_masterCountHasBeenSet;

                    /**
                     * <p>扩容后是否启动服务，true：启动，false：不启动</p>
                     */
                    std::string m_startServiceAfterScaleOut;
                    bool m_startServiceAfterScaleOutHasBeenSet;

                    /**
                     * <p>可用区，默认是集群的主可用区</p>
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>子网，默认是集群创建时的子网</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>预设配置组</p>
                     */
                    std::string m_scaleOutServiceConfAssign;
                    bool m_scaleOutServiceConfAssignHasBeenSet;

                    /**
                     * <p>0表示关闭自动续费，1表示开启自动续费</p>
                     */
                    int64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * <p>类型为ComputeResource和EMR以及默认，默认为EMR,类型为EMR时,InstanceId生效,类型为ComputeResource时,使用ComputeResourceId标识</p>
                     */
                    std::string m_resourceBaseType;
                    bool m_resourceBaseTypeHasBeenSet;

                    /**
                     * <p>计算资源id</p>
                     */
                    std::string m_computeResourceId;
                    bool m_computeResourceIdHasBeenSet;

                    /**
                     * <p>计算资源高级设置</p>
                     */
                    ComputeResourceAdvanceParams m_computeResourceAdvanceParams;
                    bool m_computeResourceAdvanceParamsHasBeenSet;

                    /**
                     * <p>节点标记信息，目前只提供tf平台使用</p>
                     */
                    NodeMark m_nodeMarks;
                    bool m_nodeMarksHasBeenSet;

                    /**
                     * <p>扩容指定计算组</p>
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

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SCALEOUTINSTANCEREQUEST_H_
