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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_INSTANCEINFO_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_INSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwch/v20200915/model/NodesSummary.h>
#include <tencentcloud/cdwch/v20200915/model/Tag.h>
#include <tencentcloud/cdwch/v20200915/model/InstanceStateInfo.h>
#include <tencentcloud/cdwch/v20200915/model/ServiceInfo.h>
#include <tencentcloud/cdwch/v20200915/model/InstanceDetail.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * 实例描述信息
                */
                class InstanceInfo : public AbstractModel
                {
                public:
                    InstanceInfo();
                    ~InstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>集群实例ID, &quot;cdw-xxxx&quot; 字符串类型</p>
                     * @return InstanceId <p>集群实例ID, &quot;cdw-xxxx&quot; 字符串类型</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>集群实例ID, &quot;cdw-xxxx&quot; 字符串类型</p>
                     * @param _instanceId <p>集群实例ID, &quot;cdw-xxxx&quot; 字符串类型</p>
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
                     * 获取<p>集群实例名称</p>
                     * @return InstanceName <p>集群实例名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>集群实例名称</p>
                     * @param _instanceName <p>集群实例名称</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>状态,<br>Init 创建中; Serving 运行中；<br>Deleted已销毁；Deleting 销毁中；<br>Modify 集群变更中；</p>
                     * @return Status <p>状态,<br>Init 创建中; Serving 运行中；<br>Deleted已销毁；Deleting 销毁中；<br>Modify 集群变更中；</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态,<br>Init 创建中; Serving 运行中；<br>Deleted已销毁；Deleting 销毁中；<br>Modify 集群变更中；</p>
                     * @param _status <p>状态,<br>Init 创建中; Serving 运行中；<br>Deleted已销毁；Deleting 销毁中；<br>Modify 集群变更中；</p>
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
                     * 获取<p>版本</p>
                     * @return Version <p>版本</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>版本</p>
                     * @param _version <p>版本</p>
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>地域, ap-guangzhou</p>
                     * @return Region <p>地域, ap-guangzhou</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域, ap-guangzhou</p>
                     * @param _region <p>地域, ap-guangzhou</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>可用区， ap-guangzhou-3</p>
                     * @return Zone <p>可用区， ap-guangzhou-3</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区， ap-guangzhou-3</p>
                     * @param _zone <p>可用区， ap-guangzhou-3</p>
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
                     * 获取<p>私有网络名称</p>
                     * @return VpcId <p>私有网络名称</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>私有网络名称</p>
                     * @param _vpcId <p>私有网络名称</p>
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
                     * 获取<p>子网名称</p>
                     * @return SubnetId <p>子网名称</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>子网名称</p>
                     * @param _subnetId <p>子网名称</p>
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
                     * 获取<p>付费类型，&quot;hour&quot;, &quot;prepay&quot;</p>
                     * @return PayMode <p>付费类型，&quot;hour&quot;, &quot;prepay&quot;</p>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置<p>付费类型，&quot;hour&quot;, &quot;prepay&quot;</p>
                     * @param _payMode <p>付费类型，&quot;hour&quot;, &quot;prepay&quot;</p>
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>过期时间</p>
                     * @return ExpireTime <p>过期时间</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>过期时间</p>
                     * @param _expireTime <p>过期时间</p>
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>数据节点描述信息</p>
                     * @return MasterSummary <p>数据节点描述信息</p>
                     * 
                     */
                    NodesSummary GetMasterSummary() const;

                    /**
                     * 设置<p>数据节点描述信息</p>
                     * @param _masterSummary <p>数据节点描述信息</p>
                     * 
                     */
                    void SetMasterSummary(const NodesSummary& _masterSummary);

                    /**
                     * 判断参数 MasterSummary 是否已赋值
                     * @return MasterSummary 是否已赋值
                     * 
                     */
                    bool MasterSummaryHasBeenSet() const;

                    /**
                     * 获取<p>zookeeper节点描述信息</p>
                     * @return CommonSummary <p>zookeeper节点描述信息</p>
                     * 
                     */
                    NodesSummary GetCommonSummary() const;

                    /**
                     * 设置<p>zookeeper节点描述信息</p>
                     * @param _commonSummary <p>zookeeper节点描述信息</p>
                     * 
                     */
                    void SetCommonSummary(const NodesSummary& _commonSummary);

                    /**
                     * 判断参数 CommonSummary 是否已赋值
                     * @return CommonSummary 是否已赋值
                     * 
                     */
                    bool CommonSummaryHasBeenSet() const;

                    /**
                     * 获取<p>高可用,&quot;true&quot; &quot;false&quot;</p>
                     * @return HA <p>高可用,&quot;true&quot; &quot;false&quot;</p>
                     * 
                     */
                    std::string GetHA() const;

                    /**
                     * 设置<p>高可用,&quot;true&quot; &quot;false&quot;</p>
                     * @param _hA <p>高可用,&quot;true&quot; &quot;false&quot;</p>
                     * 
                     */
                    void SetHA(const std::string& _hA);

                    /**
                     * 判断参数 HA 是否已赋值
                     * @return HA 是否已赋值
                     * 
                     */
                    bool HAHasBeenSet() const;

                    /**
                     * 获取<p>访问地址，例如 &quot;10.0.0.1:9000&quot;</p>
                     * @return AccessInfo <p>访问地址，例如 &quot;10.0.0.1:9000&quot;</p>
                     * 
                     */
                    std::string GetAccessInfo() const;

                    /**
                     * 设置<p>访问地址，例如 &quot;10.0.0.1:9000&quot;</p>
                     * @param _accessInfo <p>访问地址，例如 &quot;10.0.0.1:9000&quot;</p>
                     * 
                     */
                    void SetAccessInfo(const std::string& _accessInfo);

                    /**
                     * 判断参数 AccessInfo 是否已赋值
                     * @return AccessInfo 是否已赋值
                     * 
                     */
                    bool AccessInfoHasBeenSet() const;

                    /**
                     * 获取<p>记录ID，数值型</p>
                     * @return Id <p>记录ID，数值型</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>记录ID，数值型</p>
                     * @param _id <p>记录ID，数值型</p>
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>regionId, 表示地域</p>
                     * @return RegionId <p>regionId, 表示地域</p>
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置<p>regionId, 表示地域</p>
                     * @param _regionId <p>regionId, 表示地域</p>
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取<p>可用区说明，例如 &quot;广州二区&quot;</p>
                     * @return ZoneDesc <p>可用区说明，例如 &quot;广州二区&quot;</p>
                     * 
                     */
                    std::string GetZoneDesc() const;

                    /**
                     * 设置<p>可用区说明，例如 &quot;广州二区&quot;</p>
                     * @param _zoneDesc <p>可用区说明，例如 &quot;广州二区&quot;</p>
                     * 
                     */
                    void SetZoneDesc(const std::string& _zoneDesc);

                    /**
                     * 判断参数 ZoneDesc 是否已赋值
                     * @return ZoneDesc 是否已赋值
                     * 
                     */
                    bool ZoneDescHasBeenSet() const;

                    /**
                     * 获取<p>错误流程说明信息</p>
                     * @return FlowMsg <p>错误流程说明信息</p>
                     * 
                     */
                    std::string GetFlowMsg() const;

                    /**
                     * 设置<p>错误流程说明信息</p>
                     * @param _flowMsg <p>错误流程说明信息</p>
                     * 
                     */
                    void SetFlowMsg(const std::string& _flowMsg);

                    /**
                     * 判断参数 FlowMsg 是否已赋值
                     * @return FlowMsg 是否已赋值
                     * 
                     */
                    bool FlowMsgHasBeenSet() const;

                    /**
                     * 获取<p>状态描述，例如“运行中”等</p>
                     * @return StatusDesc <p>状态描述，例如“运行中”等</p>
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置<p>状态描述，例如“运行中”等</p>
                     * @param _statusDesc <p>状态描述，例如“运行中”等</p>
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取<p>自动续费标记</p>
                     * @return RenewFlag <p>自动续费标记</p>
                     * 
                     */
                    bool GetRenewFlag() const;

                    /**
                     * 设置<p>自动续费标记</p>
                     * @param _renewFlag <p>自动续费标记</p>
                     * 
                     */
                    void SetRenewFlag(const bool& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>标签列表</p>
                     * @return Tags <p>标签列表</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签列表</p>
                     * @param _tags <p>标签列表</p>
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
                     * 获取<p>监控信息</p>
                     * @return Monitor <p>监控信息</p>
                     * 
                     */
                    std::string GetMonitor() const;

                    /**
                     * 设置<p>监控信息</p>
                     * @param _monitor <p>监控信息</p>
                     * 
                     */
                    void SetMonitor(const std::string& _monitor);

                    /**
                     * 判断参数 Monitor 是否已赋值
                     * @return Monitor 是否已赋值
                     * 
                     */
                    bool MonitorHasBeenSet() const;

                    /**
                     * 获取<p>是否开通日志</p>
                     * @return HasClsTopic <p>是否开通日志</p>
                     * 
                     */
                    bool GetHasClsTopic() const;

                    /**
                     * 设置<p>是否开通日志</p>
                     * @param _hasClsTopic <p>是否开通日志</p>
                     * 
                     */
                    void SetHasClsTopic(const bool& _hasClsTopic);

                    /**
                     * 判断参数 HasClsTopic 是否已赋值
                     * @return HasClsTopic 是否已赋值
                     * 
                     */
                    bool HasClsTopicHasBeenSet() const;

                    /**
                     * 获取<p>日志主题ID</p>
                     * @return ClsTopicId <p>日志主题ID</p>
                     * 
                     */
                    std::string GetClsTopicId() const;

                    /**
                     * 设置<p>日志主题ID</p>
                     * @param _clsTopicId <p>日志主题ID</p>
                     * 
                     */
                    void SetClsTopicId(const std::string& _clsTopicId);

                    /**
                     * 判断参数 ClsTopicId 是否已赋值
                     * @return ClsTopicId 是否已赋值
                     * 
                     */
                    bool ClsTopicIdHasBeenSet() const;

                    /**
                     * 获取<p>日志集ID</p>
                     * @return ClsLogSetId <p>日志集ID</p>
                     * 
                     */
                    std::string GetClsLogSetId() const;

                    /**
                     * 设置<p>日志集ID</p>
                     * @param _clsLogSetId <p>日志集ID</p>
                     * 
                     */
                    void SetClsLogSetId(const std::string& _clsLogSetId);

                    /**
                     * 判断参数 ClsLogSetId 是否已赋值
                     * @return ClsLogSetId 是否已赋值
                     * 
                     */
                    bool ClsLogSetIdHasBeenSet() const;

                    /**
                     * 获取<p>是否支持xml配置管理</p>
                     * @return EnableXMLConfig <p>是否支持xml配置管理</p>
                     * 
                     */
                    int64_t GetEnableXMLConfig() const;

                    /**
                     * 设置<p>是否支持xml配置管理</p>
                     * @param _enableXMLConfig <p>是否支持xml配置管理</p>
                     * 
                     */
                    void SetEnableXMLConfig(const int64_t& _enableXMLConfig);

                    /**
                     * 判断参数 EnableXMLConfig 是否已赋值
                     * @return EnableXMLConfig 是否已赋值
                     * 
                     */
                    bool EnableXMLConfigHasBeenSet() const;

                    /**
                     * 获取<p>区域</p>
                     * @return RegionDesc <p>区域</p>
                     * 
                     */
                    std::string GetRegionDesc() const;

                    /**
                     * 设置<p>区域</p>
                     * @param _regionDesc <p>区域</p>
                     * 
                     */
                    void SetRegionDesc(const std::string& _regionDesc);

                    /**
                     * 判断参数 RegionDesc 是否已赋值
                     * @return RegionDesc 是否已赋值
                     * 
                     */
                    bool RegionDescHasBeenSet() const;

                    /**
                     * 获取<p>弹性网卡地址</p>
                     * @return Eip <p>弹性网卡地址</p>
                     * 
                     */
                    std::string GetEip() const;

                    /**
                     * 设置<p>弹性网卡地址</p>
                     * @param _eip <p>弹性网卡地址</p>
                     * 
                     */
                    void SetEip(const std::string& _eip);

                    /**
                     * 判断参数 Eip 是否已赋值
                     * @return Eip 是否已赋值
                     * 
                     */
                    bool EipHasBeenSet() const;

                    /**
                     * 获取<p>冷热分层系数</p>
                     * @return CosMoveFactor <p>冷热分层系数</p>
                     * 
                     */
                    int64_t GetCosMoveFactor() const;

                    /**
                     * 设置<p>冷热分层系数</p>
                     * @param _cosMoveFactor <p>冷热分层系数</p>
                     * 
                     */
                    void SetCosMoveFactor(const int64_t& _cosMoveFactor);

                    /**
                     * 判断参数 CosMoveFactor 是否已赋值
                     * @return CosMoveFactor 是否已赋值
                     * 
                     */
                    bool CosMoveFactorHasBeenSet() const;

                    /**
                     * 获取<p>external/local/yunti</p>
                     * @return Kind <p>external/local/yunti</p>
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置<p>external/local/yunti</p>
                     * @param _kind <p>external/local/yunti</p>
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取<p>是否弹性ck</p>
                     * @return IsElastic <p>是否弹性ck</p>
                     * 
                     */
                    bool GetIsElastic() const;

                    /**
                     * 设置<p>是否弹性ck</p>
                     * @param _isElastic <p>是否弹性ck</p>
                     * 
                     */
                    void SetIsElastic(const bool& _isElastic);

                    /**
                     * 判断参数 IsElastic 是否已赋值
                     * @return IsElastic 是否已赋值
                     * 
                     */
                    bool IsElasticHasBeenSet() const;

                    /**
                     * 获取<p>集群详细状态</p>
                     * @return InstanceStateInfo <p>集群详细状态</p>
                     * 
                     */
                    InstanceStateInfo GetInstanceStateInfo() const;

                    /**
                     * 设置<p>集群详细状态</p>
                     * @param _instanceStateInfo <p>集群详细状态</p>
                     * 
                     */
                    void SetInstanceStateInfo(const InstanceStateInfo& _instanceStateInfo);

                    /**
                     * 判断参数 InstanceStateInfo 是否已赋值
                     * @return InstanceStateInfo 是否已赋值
                     * 
                     */
                    bool InstanceStateInfoHasBeenSet() const;

                    /**
                     * 获取<p>ZK高可用</p>
                     * @return HAZk <p>ZK高可用</p>
                     * 
                     */
                    bool GetHAZk() const;

                    /**
                     * 设置<p>ZK高可用</p>
                     * @param _hAZk <p>ZK高可用</p>
                     * 
                     */
                    void SetHAZk(const bool& _hAZk);

                    /**
                     * 判断参数 HAZk 是否已赋值
                     * @return HAZk 是否已赋值
                     * 
                     */
                    bool HAZkHasBeenSet() const;

                    /**
                     * 获取<p>挂载盘,默认0:没有类型；1:裸盘;2:lvm</p>
                     * @return MountDiskType <p>挂载盘,默认0:没有类型；1:裸盘;2:lvm</p>
                     * 
                     */
                    int64_t GetMountDiskType() const;

                    /**
                     * 设置<p>挂载盘,默认0:没有类型；1:裸盘;2:lvm</p>
                     * @param _mountDiskType <p>挂载盘,默认0:没有类型；1:裸盘;2:lvm</p>
                     * 
                     */
                    void SetMountDiskType(const int64_t& _mountDiskType);

                    /**
                     * 判断参数 MountDiskType 是否已赋值
                     * @return MountDiskType 是否已赋值
                     * 
                     */
                    bool MountDiskTypeHasBeenSet() const;

                    /**
                     * 获取<p>chproxy连接ip</p>
                     * @return CHProxyVip <p>chproxy连接ip</p>
                     * 
                     */
                    std::string GetCHProxyVip() const;

                    /**
                     * 设置<p>chproxy连接ip</p>
                     * @param _cHProxyVip <p>chproxy连接ip</p>
                     * 
                     */
                    void SetCHProxyVip(const std::string& _cHProxyVip);

                    /**
                     * 判断参数 CHProxyVip 是否已赋值
                     * @return CHProxyVip 是否已赋值
                     * 
                     */
                    bool CHProxyVipHasBeenSet() const;

                    /**
                     * 获取<p>cos buket的名字</p>
                     * @return CosBucketName <p>cos buket的名字</p>
                     * 
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 设置<p>cos buket的名字</p>
                     * @param _cosBucketName <p>cos buket的名字</p>
                     * 
                     */
                    void SetCosBucketName(const std::string& _cosBucketName);

                    /**
                     * 判断参数 CosBucketName 是否已赋值
                     * @return CosBucketName 是否已赋值
                     * 
                     */
                    bool CosBucketNameHasBeenSet() const;

                    /**
                     * 获取<p>是否可以挂载云盘</p>
                     * @return CanAttachCbs <p>是否可以挂载云盘</p>
                     * 
                     */
                    bool GetCanAttachCbs() const;

                    /**
                     * 设置<p>是否可以挂载云盘</p>
                     * @param _canAttachCbs <p>是否可以挂载云盘</p>
                     * 
                     */
                    void SetCanAttachCbs(const bool& _canAttachCbs);

                    /**
                     * 判断参数 CanAttachCbs 是否已赋值
                     * @return CanAttachCbs 是否已赋值
                     * 
                     */
                    bool CanAttachCbsHasBeenSet() const;

                    /**
                     * 获取<p>是否可以挂载云盘阵列</p>
                     * @return CanAttachCbsLvm <p>是否可以挂载云盘阵列</p>
                     * 
                     */
                    bool GetCanAttachCbsLvm() const;

                    /**
                     * 设置<p>是否可以挂载云盘阵列</p>
                     * @param _canAttachCbsLvm <p>是否可以挂载云盘阵列</p>
                     * 
                     */
                    void SetCanAttachCbsLvm(const bool& _canAttachCbsLvm);

                    /**
                     * 判断参数 CanAttachCbsLvm 是否已赋值
                     * @return CanAttachCbsLvm 是否已赋值
                     * 
                     */
                    bool CanAttachCbsLvmHasBeenSet() const;

                    /**
                     * 获取<p>是否可以挂载cos</p>
                     * @return CanAttachCos <p>是否可以挂载cos</p>
                     * 
                     */
                    bool GetCanAttachCos() const;

                    /**
                     * 设置<p>是否可以挂载cos</p>
                     * @param _canAttachCos <p>是否可以挂载cos</p>
                     * 
                     */
                    void SetCanAttachCos(const bool& _canAttachCos);

                    /**
                     * 判断参数 CanAttachCos 是否已赋值
                     * @return CanAttachCos 是否已赋值
                     * 
                     */
                    bool CanAttachCosHasBeenSet() const;

                    /**
                     * 获取<p>服务信息</p>
                     * @return Components <p>服务信息</p>
                     * 
                     */
                    std::vector<ServiceInfo> GetComponents() const;

                    /**
                     * 设置<p>服务信息</p>
                     * @param _components <p>服务信息</p>
                     * 
                     */
                    void SetComponents(const std::vector<ServiceInfo>& _components);

                    /**
                     * 判断参数 Components 是否已赋值
                     * @return Components 是否已赋值
                     * 
                     */
                    bool ComponentsHasBeenSet() const;

                    /**
                     * 获取<p>可升级的内核版本</p>
                     * @return UpgradeVersions <p>可升级的内核版本</p>
                     * 
                     */
                    std::string GetUpgradeVersions() const;

                    /**
                     * 设置<p>可升级的内核版本</p>
                     * @param _upgradeVersions <p>可升级的内核版本</p>
                     * 
                     */
                    void SetUpgradeVersions(const std::string& _upgradeVersions);

                    /**
                     * 判断参数 UpgradeVersions 是否已赋值
                     * @return UpgradeVersions 是否已赋值
                     * 
                     */
                    bool UpgradeVersionsHasBeenSet() const;

                    /**
                     * 获取<p>ex-index</p>
                     * @return EsIndexId <p>ex-index</p>
                     * 
                     */
                    std::string GetEsIndexId() const;

                    /**
                     * 设置<p>ex-index</p>
                     * @param _esIndexId <p>ex-index</p>
                     * 
                     */
                    void SetEsIndexId(const std::string& _esIndexId);

                    /**
                     * 判断参数 EsIndexId 是否已赋值
                     * @return EsIndexId 是否已赋值
                     * 
                     */
                    bool EsIndexIdHasBeenSet() const;

                    /**
                     * 获取<p>username</p>
                     * @return EsIndexUsername <p>username</p>
                     * 
                     */
                    std::string GetEsIndexUsername() const;

                    /**
                     * 设置<p>username</p>
                     * @param _esIndexUsername <p>username</p>
                     * 
                     */
                    void SetEsIndexUsername(const std::string& _esIndexUsername);

                    /**
                     * 判断参数 EsIndexUsername 是否已赋值
                     * @return EsIndexUsername 是否已赋值
                     * 
                     */
                    bool EsIndexUsernameHasBeenSet() const;

                    /**
                     * 获取<p>password</p>
                     * @return EsIndexPassword <p>password</p>
                     * 
                     */
                    std::string GetEsIndexPassword() const;

                    /**
                     * 设置<p>password</p>
                     * @param _esIndexPassword <p>password</p>
                     * 
                     */
                    void SetEsIndexPassword(const std::string& _esIndexPassword);

                    /**
                     * 判断参数 EsIndexPassword 是否已赋值
                     * @return EsIndexPassword 是否已赋值
                     * 
                     */
                    bool EsIndexPasswordHasBeenSet() const;

                    /**
                     * 获取<p>true</p>
                     * @return HasEsIndex <p>true</p>
                     * 
                     */
                    bool GetHasEsIndex() const;

                    /**
                     * 设置<p>true</p>
                     * @param _hasEsIndex <p>true</p>
                     * 
                     */
                    void SetHasEsIndex(const bool& _hasEsIndex);

                    /**
                     * 判断参数 HasEsIndex 是否已赋值
                     * @return HasEsIndex 是否已赋值
                     * 
                     */
                    bool HasEsIndexHasBeenSet() const;

                    /**
                     * 获取<p>true</p>
                     * @return IsSecondaryZone <p>true</p>
                     * 
                     */
                    bool GetIsSecondaryZone() const;

                    /**
                     * 设置<p>true</p>
                     * @param _isSecondaryZone <p>true</p>
                     * 
                     */
                    void SetIsSecondaryZone(const bool& _isSecondaryZone);

                    /**
                     * 判断参数 IsSecondaryZone 是否已赋值
                     * @return IsSecondaryZone 是否已赋值
                     * 
                     */
                    bool IsSecondaryZoneHasBeenSet() const;

                    /**
                     * 获取<p>desc</p>
                     * @return SecondaryZoneInfo <p>desc</p>
                     * 
                     */
                    std::string GetSecondaryZoneInfo() const;

                    /**
                     * 设置<p>desc</p>
                     * @param _secondaryZoneInfo <p>desc</p>
                     * 
                     */
                    void SetSecondaryZoneInfo(const std::string& _secondaryZoneInfo);

                    /**
                     * 判断参数 SecondaryZoneInfo 是否已赋值
                     * @return SecondaryZoneInfo 是否已赋值
                     * 
                     */
                    bool SecondaryZoneInfoHasBeenSet() const;

                    /**
                     * 获取<p>是否clickhouse-keeper</p>
                     * @return ClickHouseKeeper <p>是否clickhouse-keeper</p>
                     * 
                     */
                    bool GetClickHouseKeeper() const;

                    /**
                     * 设置<p>是否clickhouse-keeper</p>
                     * @param _clickHouseKeeper <p>是否clickhouse-keeper</p>
                     * 
                     */
                    void SetClickHouseKeeper(const bool& _clickHouseKeeper);

                    /**
                     * 判断参数 ClickHouseKeeper 是否已赋值
                     * @return ClickHouseKeeper 是否已赋值
                     * 
                     */
                    bool ClickHouseKeeperHasBeenSet() const;

                    /**
                     * 获取<p>实例扩展信息</p>
                     * @return Details <p>实例扩展信息</p>
                     * 
                     */
                    InstanceDetail GetDetails() const;

                    /**
                     * 设置<p>实例扩展信息</p>
                     * @param _details <p>实例扩展信息</p>
                     * 
                     */
                    void SetDetails(const InstanceDetail& _details);

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     * 
                     */
                    bool DetailsHasBeenSet() const;

                    /**
                     * 获取<p>安全组白名单</p>
                     * @return IsWhiteSGs <p>安全组白名单</p>
                     * 
                     */
                    bool GetIsWhiteSGs() const;

                    /**
                     * 设置<p>安全组白名单</p>
                     * @param _isWhiteSGs <p>安全组白名单</p>
                     * 
                     */
                    void SetIsWhiteSGs(const bool& _isWhiteSGs);

                    /**
                     * 判断参数 IsWhiteSGs 是否已赋值
                     * @return IsWhiteSGs 是否已赋值
                     * 
                     */
                    bool IsWhiteSGsHasBeenSet() const;

                    /**
                     * 获取<p>绑定的安全组</p>
                     * @return BindSGs <p>绑定的安全组</p>
                     * 
                     */
                    std::vector<std::string> GetBindSGs() const;

                    /**
                     * 设置<p>绑定的安全组</p>
                     * @param _bindSGs <p>绑定的安全组</p>
                     * 
                     */
                    void SetBindSGs(const std::vector<std::string>& _bindSGs);

                    /**
                     * 判断参数 BindSGs 是否已赋值
                     * @return BindSGs 是否已赋值
                     * 
                     */
                    bool BindSGsHasBeenSet() const;

                    /**
                     * 获取<p>是否开启公网clb</p>
                     * @return HasPublicCloudClb <p>是否开启公网clb</p>
                     * 
                     */
                    bool GetHasPublicCloudClb() const;

                    /**
                     * 设置<p>是否开启公网clb</p>
                     * @param _hasPublicCloudClb <p>是否开启公网clb</p>
                     * 
                     */
                    void SetHasPublicCloudClb(const bool& _hasPublicCloudClb);

                    /**
                     * 判断参数 HasPublicCloudClb 是否已赋值
                     * @return HasPublicCloudClb 是否已赋值
                     * 
                     */
                    bool HasPublicCloudClbHasBeenSet() const;

                    /**
                     * 获取<p>可升级的zk版本</p>
                     * @return UpgradeZkVersions <p>可升级的zk版本</p>
                     * 
                     */
                    std::string GetUpgradeZkVersions() const;

                    /**
                     * 设置<p>可升级的zk版本</p>
                     * @param _upgradeZkVersions <p>可升级的zk版本</p>
                     * 
                     */
                    void SetUpgradeZkVersions(const std::string& _upgradeZkVersions);

                    /**
                     * 判断参数 UpgradeZkVersions 是否已赋值
                     * @return UpgradeZkVersions 是否已赋值
                     * 
                     */
                    bool UpgradeZkVersionsHasBeenSet() const;

                    /**
                     * 获取<p>是否显示rip</p>
                     * @return ShowRip <p>是否显示rip</p>
                     * 
                     */
                    std::string GetShowRip() const;

                    /**
                     * 设置<p>是否显示rip</p>
                     * @param _showRip <p>是否显示rip</p>
                     * 
                     */
                    void SetShowRip(const std::string& _showRip);

                    /**
                     * 判断参数 ShowRip 是否已赋值
                     * @return ShowRip 是否已赋值
                     * 
                     */
                    bool ShowRipHasBeenSet() const;

                    /**
                     * 获取<p>实例类型：标准型 standard，无keeper节点类型noKeeper；</p>
                     * @return InstanceType <p>实例类型：标准型 standard，无keeper节点类型noKeeper；</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>实例类型：标准型 standard，无keeper节点类型noKeeper；</p>
                     * @param _instanceType <p>实例类型：标准型 standard，无keeper节点类型noKeeper；</p>
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>keyvalue视图</p>
                     * @return EnableConfigKeyValue <p>keyvalue视图</p>
                     * 
                     */
                    std::string GetEnableConfigKeyValue() const;

                    /**
                     * 设置<p>keyvalue视图</p>
                     * @param _enableConfigKeyValue <p>keyvalue视图</p>
                     * 
                     */
                    void SetEnableConfigKeyValue(const std::string& _enableConfigKeyValue);

                    /**
                     * 判断参数 EnableConfigKeyValue 是否已赋值
                     * @return EnableConfigKeyValue 是否已赋值
                     * 
                     */
                    bool EnableConfigKeyValueHasBeenSet() const;

                private:

                    /**
                     * <p>集群实例ID, &quot;cdw-xxxx&quot; 字符串类型</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>集群实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>状态,<br>Init 创建中; Serving 运行中；<br>Deleted已销毁；Deleting 销毁中；<br>Modify 集群变更中；</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>版本</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>地域, ap-guangzhou</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>可用区， ap-guangzhou-3</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>私有网络名称</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网名称</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>付费类型，&quot;hour&quot;, &quot;prepay&quot;</p>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>过期时间</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>数据节点描述信息</p>
                     */
                    NodesSummary m_masterSummary;
                    bool m_masterSummaryHasBeenSet;

                    /**
                     * <p>zookeeper节点描述信息</p>
                     */
                    NodesSummary m_commonSummary;
                    bool m_commonSummaryHasBeenSet;

                    /**
                     * <p>高可用,&quot;true&quot; &quot;false&quot;</p>
                     */
                    std::string m_hA;
                    bool m_hAHasBeenSet;

                    /**
                     * <p>访问地址，例如 &quot;10.0.0.1:9000&quot;</p>
                     */
                    std::string m_accessInfo;
                    bool m_accessInfoHasBeenSet;

                    /**
                     * <p>记录ID，数值型</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>regionId, 表示地域</p>
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * <p>可用区说明，例如 &quot;广州二区&quot;</p>
                     */
                    std::string m_zoneDesc;
                    bool m_zoneDescHasBeenSet;

                    /**
                     * <p>错误流程说明信息</p>
                     */
                    std::string m_flowMsg;
                    bool m_flowMsgHasBeenSet;

                    /**
                     * <p>状态描述，例如“运行中”等</p>
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * <p>自动续费标记</p>
                     */
                    bool m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>标签列表</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>监控信息</p>
                     */
                    std::string m_monitor;
                    bool m_monitorHasBeenSet;

                    /**
                     * <p>是否开通日志</p>
                     */
                    bool m_hasClsTopic;
                    bool m_hasClsTopicHasBeenSet;

                    /**
                     * <p>日志主题ID</p>
                     */
                    std::string m_clsTopicId;
                    bool m_clsTopicIdHasBeenSet;

                    /**
                     * <p>日志集ID</p>
                     */
                    std::string m_clsLogSetId;
                    bool m_clsLogSetIdHasBeenSet;

                    /**
                     * <p>是否支持xml配置管理</p>
                     */
                    int64_t m_enableXMLConfig;
                    bool m_enableXMLConfigHasBeenSet;

                    /**
                     * <p>区域</p>
                     */
                    std::string m_regionDesc;
                    bool m_regionDescHasBeenSet;

                    /**
                     * <p>弹性网卡地址</p>
                     */
                    std::string m_eip;
                    bool m_eipHasBeenSet;

                    /**
                     * <p>冷热分层系数</p>
                     */
                    int64_t m_cosMoveFactor;
                    bool m_cosMoveFactorHasBeenSet;

                    /**
                     * <p>external/local/yunti</p>
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * <p>是否弹性ck</p>
                     */
                    bool m_isElastic;
                    bool m_isElasticHasBeenSet;

                    /**
                     * <p>集群详细状态</p>
                     */
                    InstanceStateInfo m_instanceStateInfo;
                    bool m_instanceStateInfoHasBeenSet;

                    /**
                     * <p>ZK高可用</p>
                     */
                    bool m_hAZk;
                    bool m_hAZkHasBeenSet;

                    /**
                     * <p>挂载盘,默认0:没有类型；1:裸盘;2:lvm</p>
                     */
                    int64_t m_mountDiskType;
                    bool m_mountDiskTypeHasBeenSet;

                    /**
                     * <p>chproxy连接ip</p>
                     */
                    std::string m_cHProxyVip;
                    bool m_cHProxyVipHasBeenSet;

                    /**
                     * <p>cos buket的名字</p>
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                    /**
                     * <p>是否可以挂载云盘</p>
                     */
                    bool m_canAttachCbs;
                    bool m_canAttachCbsHasBeenSet;

                    /**
                     * <p>是否可以挂载云盘阵列</p>
                     */
                    bool m_canAttachCbsLvm;
                    bool m_canAttachCbsLvmHasBeenSet;

                    /**
                     * <p>是否可以挂载cos</p>
                     */
                    bool m_canAttachCos;
                    bool m_canAttachCosHasBeenSet;

                    /**
                     * <p>服务信息</p>
                     */
                    std::vector<ServiceInfo> m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * <p>可升级的内核版本</p>
                     */
                    std::string m_upgradeVersions;
                    bool m_upgradeVersionsHasBeenSet;

                    /**
                     * <p>ex-index</p>
                     */
                    std::string m_esIndexId;
                    bool m_esIndexIdHasBeenSet;

                    /**
                     * <p>username</p>
                     */
                    std::string m_esIndexUsername;
                    bool m_esIndexUsernameHasBeenSet;

                    /**
                     * <p>password</p>
                     */
                    std::string m_esIndexPassword;
                    bool m_esIndexPasswordHasBeenSet;

                    /**
                     * <p>true</p>
                     */
                    bool m_hasEsIndex;
                    bool m_hasEsIndexHasBeenSet;

                    /**
                     * <p>true</p>
                     */
                    bool m_isSecondaryZone;
                    bool m_isSecondaryZoneHasBeenSet;

                    /**
                     * <p>desc</p>
                     */
                    std::string m_secondaryZoneInfo;
                    bool m_secondaryZoneInfoHasBeenSet;

                    /**
                     * <p>是否clickhouse-keeper</p>
                     */
                    bool m_clickHouseKeeper;
                    bool m_clickHouseKeeperHasBeenSet;

                    /**
                     * <p>实例扩展信息</p>
                     */
                    InstanceDetail m_details;
                    bool m_detailsHasBeenSet;

                    /**
                     * <p>安全组白名单</p>
                     */
                    bool m_isWhiteSGs;
                    bool m_isWhiteSGsHasBeenSet;

                    /**
                     * <p>绑定的安全组</p>
                     */
                    std::vector<std::string> m_bindSGs;
                    bool m_bindSGsHasBeenSet;

                    /**
                     * <p>是否开启公网clb</p>
                     */
                    bool m_hasPublicCloudClb;
                    bool m_hasPublicCloudClbHasBeenSet;

                    /**
                     * <p>可升级的zk版本</p>
                     */
                    std::string m_upgradeZkVersions;
                    bool m_upgradeZkVersionsHasBeenSet;

                    /**
                     * <p>是否显示rip</p>
                     */
                    std::string m_showRip;
                    bool m_showRipHasBeenSet;

                    /**
                     * <p>实例类型：标准型 standard，无keeper节点类型noKeeper；</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>keyvalue视图</p>
                     */
                    std::string m_enableConfigKeyValue;
                    bool m_enableConfigKeyValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_INSTANCEINFO_H_
