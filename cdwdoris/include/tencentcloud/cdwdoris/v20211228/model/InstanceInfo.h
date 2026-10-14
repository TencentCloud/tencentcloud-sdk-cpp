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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_INSTANCEINFO_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_INSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/NodesSummary.h>
#include <tencentcloud/cdwdoris/v20211228/model/Tag.h>
#include <tencentcloud/cdwdoris/v20211228/model/InstanceDetail.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
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
                     * 获取<p>集群实例ID, &quot;cdwdoris-xxxx&quot; 字符串类型</p>
                     * @return InstanceId <p>集群实例ID, &quot;cdwdoris-xxxx&quot; 字符串类型</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>集群实例ID, &quot;cdwdoris-xxxx&quot; 字符串类型</p>
                     * @param _instanceId <p>集群实例ID, &quot;cdwdoris-xxxx&quot; 字符串类型</p>
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
                     * 获取<p>状态,<br>Init  创建中<br>Serving   运行中<br>Isolated   已隔离<br>Changing  变更中</p>
                     * @return Status <p>状态,<br>Init  创建中<br>Serving   运行中<br>Isolated   已隔离<br>Changing  变更中</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态,<br>Init  创建中<br>Serving   运行中<br>Isolated   已隔离<br>Changing  变更中</p>
                     * @param _status <p>状态,<br>Init  创建中<br>Serving   运行中<br>Isolated   已隔离<br>Changing  变更中</p>
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
                     * @return CoreSummary <p>zookeeper节点描述信息</p>
                     * 
                     */
                    NodesSummary GetCoreSummary() const;

                    /**
                     * 设置<p>zookeeper节点描述信息</p>
                     * @param _coreSummary <p>zookeeper节点描述信息</p>
                     * 
                     */
                    void SetCoreSummary(const NodesSummary& _coreSummary);

                    /**
                     * 判断参数 CoreSummary 是否已赋值
                     * @return CoreSummary 是否已赋值
                     * 
                     */
                    bool CoreSummaryHasBeenSet() const;

                    /**
                     * 获取<p>高可用，&quot;true&quot; &quot;false&quot;</p>
                     * @return HA <p>高可用，&quot;true&quot; &quot;false&quot;</p>
                     * 
                     */
                    std::string GetHA() const;

                    /**
                     * 设置<p>高可用，&quot;true&quot; &quot;false&quot;</p>
                     * @param _hA <p>高可用，&quot;true&quot; &quot;false&quot;</p>
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
                     * 获取<p>高可用类型：<br>0：非高可用<br>1：读高可用<br>2：读写高可用。</p>
                     * @return HaType <p>高可用类型：<br>0：非高可用<br>1：读高可用<br>2：读写高可用。</p>
                     * 
                     */
                    int64_t GetHaType() const;

                    /**
                     * 设置<p>高可用类型：<br>0：非高可用<br>1：读高可用<br>2：读写高可用。</p>
                     * @param _haType <p>高可用类型：<br>0：非高可用<br>1：读高可用<br>2：读写高可用。</p>
                     * 
                     */
                    void SetHaType(const int64_t& _haType);

                    /**
                     * 判断参数 HaType 是否已赋值
                     * @return HaType 是否已赋值
                     * 
                     */
                    bool HaTypeHasBeenSet() const;

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
                     * 获取<p>可用区说明，例如 &quot;广州三区&quot;</p>
                     * @return ZoneDesc <p>可用区说明，例如 &quot;广州三区&quot;</p>
                     * 
                     */
                    std::string GetZoneDesc() const;

                    /**
                     * 设置<p>可用区说明，例如 &quot;广州三区&quot;</p>
                     * @param _zoneDesc <p>可用区说明，例如 &quot;广州三区&quot;</p>
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
                     * 获取<p>cos桶</p>
                     * @return CosBucketName <p>cos桶</p>
                     * 
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 设置<p>cos桶</p>
                     * @param _cosBucketName <p>cos桶</p>
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
                     * 获取<p>cbs</p>
                     * @return CanAttachCbs <p>cbs</p>
                     * 
                     */
                    bool GetCanAttachCbs() const;

                    /**
                     * 设置<p>cbs</p>
                     * @param _canAttachCbs <p>cbs</p>
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
                     * 获取<p>小版本</p>
                     * @return BuildVersion <p>小版本</p>
                     * 
                     */
                    std::string GetBuildVersion() const;

                    /**
                     * 设置<p>小版本</p>
                     * @param _buildVersion <p>小版本</p>
                     * 
                     */
                    void SetBuildVersion(const std::string& _buildVersion);

                    /**
                     * 判断参数 BuildVersion 是否已赋值
                     * @return BuildVersion 是否已赋值
                     * 
                     */
                    bool BuildVersionHasBeenSet() const;

                    /**
                     * 获取<p>组件信息<br>注：这里返回类型实际为map[string]struct类型，并非显示的string类型，可以参考“示例值”进行数据的解析。</p>
                     * @return Components <p>组件信息<br>注：这里返回类型实际为map[string]struct类型，并非显示的string类型，可以参考“示例值”进行数据的解析。</p>
                     * 
                     */
                    std::string GetComponents() const;

                    /**
                     * 设置<p>组件信息<br>注：这里返回类型实际为map[string]struct类型，并非显示的string类型，可以参考“示例值”进行数据的解析。</p>
                     * @param _components <p>组件信息<br>注：这里返回类型实际为map[string]struct类型，并非显示的string类型，可以参考“示例值”进行数据的解析。</p>
                     * 
                     */
                    void SetComponents(const std::string& _components);

                    /**
                     * 判断参数 Components 是否已赋值
                     * @return Components 是否已赋值
                     * 
                     */
                    bool ComponentsHasBeenSet() const;

                    /**
                     * 获取<p>判断审计日志表是否有catalog字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IfExistCatalog <p>判断审计日志表是否有catalog字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    int64_t GetIfExistCatalog() const;

                    /**
                     * 设置<p>判断审计日志表是否有catalog字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ifExistCatalog <p>判断审计日志表是否有catalog字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetIfExistCatalog(const int64_t& _ifExistCatalog);

                    /**
                     * 判断参数 IfExistCatalog 是否已赋值
                     * @return IfExistCatalog 是否已赋值
                     * @deprecated
                     */
                    bool IfExistCatalogHasBeenSet() const;

                    /**
                     * 获取<p>页面特性，用于前端屏蔽一些页面入口</p>
                     * @return Characteristic <p>页面特性，用于前端屏蔽一些页面入口</p>
                     * 
                     */
                    std::vector<std::string> GetCharacteristic() const;

                    /**
                     * 设置<p>页面特性，用于前端屏蔽一些页面入口</p>
                     * @param _characteristic <p>页面特性，用于前端屏蔽一些页面入口</p>
                     * 
                     */
                    void SetCharacteristic(const std::vector<std::string>& _characteristic);

                    /**
                     * 判断参数 Characteristic 是否已赋值
                     * @return Characteristic 是否已赋值
                     * 
                     */
                    bool CharacteristicHasBeenSet() const;

                    /**
                     * 获取<p>超时时间 单位s</p>
                     * @return RestartTimeout <p>超时时间 单位s</p>
                     * 
                     */
                    std::string GetRestartTimeout() const;

                    /**
                     * 设置<p>超时时间 单位s</p>
                     * @param _restartTimeout <p>超时时间 单位s</p>
                     * 
                     */
                    void SetRestartTimeout(const std::string& _restartTimeout);

                    /**
                     * 判断参数 RestartTimeout 是否已赋值
                     * @return RestartTimeout 是否已赋值
                     * 
                     */
                    bool RestartTimeoutHasBeenSet() const;

                    /**
                     * 获取<p>内核优雅重启超时时间，如果为-1说明未设置</p>
                     * @return GraceShutdownWaitSeconds <p>内核优雅重启超时时间，如果为-1说明未设置</p>
                     * 
                     */
                    std::string GetGraceShutdownWaitSeconds() const;

                    /**
                     * 设置<p>内核优雅重启超时时间，如果为-1说明未设置</p>
                     * @param _graceShutdownWaitSeconds <p>内核优雅重启超时时间，如果为-1说明未设置</p>
                     * 
                     */
                    void SetGraceShutdownWaitSeconds(const std::string& _graceShutdownWaitSeconds);

                    /**
                     * 判断参数 GraceShutdownWaitSeconds 是否已赋值
                     * @return GraceShutdownWaitSeconds 是否已赋值
                     * 
                     */
                    bool GraceShutdownWaitSecondsHasBeenSet() const;

                    /**
                     * 获取<p>表名大小写是否敏感，0：敏感；1：不敏感，以小写进行比较；2：不敏感，表名改为以小写存储</p>
                     * @return CaseSensitive <p>表名大小写是否敏感，0：敏感；1：不敏感，以小写进行比较；2：不敏感，表名改为以小写存储</p>
                     * 
                     */
                    int64_t GetCaseSensitive() const;

                    /**
                     * 设置<p>表名大小写是否敏感，0：敏感；1：不敏感，以小写进行比较；2：不敏感，表名改为以小写存储</p>
                     * @param _caseSensitive <p>表名大小写是否敏感，0：敏感；1：不敏感，以小写进行比较；2：不敏感，表名改为以小写存储</p>
                     * 
                     */
                    void SetCaseSensitive(const int64_t& _caseSensitive);

                    /**
                     * 判断参数 CaseSensitive 是否已赋值
                     * @return CaseSensitive 是否已赋值
                     * 
                     */
                    bool CaseSensitiveHasBeenSet() const;

                    /**
                     * 获取<p>用户是否可以绑定安全组</p>
                     * @return IsWhiteSGs <p>用户是否可以绑定安全组</p>
                     * 
                     */
                    bool GetIsWhiteSGs() const;

                    /**
                     * 设置<p>用户是否可以绑定安全组</p>
                     * @param _isWhiteSGs <p>用户是否可以绑定安全组</p>
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
                     * 获取<p>已绑定的安全组信息</p>
                     * @return BindSGs <p>已绑定的安全组信息</p>
                     * 
                     */
                    std::vector<std::string> GetBindSGs() const;

                    /**
                     * 设置<p>已绑定的安全组信息</p>
                     * @param _bindSGs <p>已绑定的安全组信息</p>
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
                     * 获取<p>是否为多可用区</p>
                     * @return EnableMultiZones <p>是否为多可用区</p>
                     * 
                     */
                    bool GetEnableMultiZones() const;

                    /**
                     * 设置<p>是否为多可用区</p>
                     * @param _enableMultiZones <p>是否为多可用区</p>
                     * 
                     */
                    void SetEnableMultiZones(const bool& _enableMultiZones);

                    /**
                     * 判断参数 EnableMultiZones 是否已赋值
                     * @return EnableMultiZones 是否已赋值
                     * 
                     */
                    bool EnableMultiZonesHasBeenSet() const;

                    /**
                     * 获取<p>用户可用区和子网信息</p>
                     * @return UserNetworkInfos <p>用户可用区和子网信息</p>
                     * 
                     */
                    std::string GetUserNetworkInfos() const;

                    /**
                     * 设置<p>用户可用区和子网信息</p>
                     * @param _userNetworkInfos <p>用户可用区和子网信息</p>
                     * 
                     */
                    void SetUserNetworkInfos(const std::string& _userNetworkInfos);

                    /**
                     * 判断参数 UserNetworkInfos 是否已赋值
                     * @return UserNetworkInfos 是否已赋值
                     * 
                     */
                    bool UserNetworkInfosHasBeenSet() const;

                    /**
                     * 获取<p>是否启用冷热分层。0：未开启 1：已开启</p>
                     * @return EnableCoolDown <p>是否启用冷热分层。0：未开启 1：已开启</p>
                     * 
                     */
                    int64_t GetEnableCoolDown() const;

                    /**
                     * 设置<p>是否启用冷热分层。0：未开启 1：已开启</p>
                     * @param _enableCoolDown <p>是否启用冷热分层。0：未开启 1：已开启</p>
                     * 
                     */
                    void SetEnableCoolDown(const int64_t& _enableCoolDown);

                    /**
                     * 判断参数 EnableCoolDown 是否已赋值
                     * @return EnableCoolDown 是否已赋值
                     * 
                     */
                    bool EnableCoolDownHasBeenSet() const;

                    /**
                     * 获取<p>冷热分层使用COS桶</p>
                     * @return CoolDownBucket <p>冷热分层使用COS桶</p>
                     * 
                     */
                    std::string GetCoolDownBucket() const;

                    /**
                     * 设置<p>冷热分层使用COS桶</p>
                     * @param _coolDownBucket <p>冷热分层使用COS桶</p>
                     * 
                     */
                    void SetCoolDownBucket(const std::string& _coolDownBucket);

                    /**
                     * 判断参数 CoolDownBucket 是否已赋值
                     * @return CoolDownBucket 是否已赋值
                     * 
                     */
                    bool CoolDownBucketHasBeenSet() const;

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
                     * 获取<p>是否启用DLC 0:关闭 1:开启</p>
                     * @return EnableDlc <p>是否启用DLC 0:关闭 1:开启</p>
                     * 
                     */
                    int64_t GetEnableDlc() const;

                    /**
                     * 设置<p>是否启用DLC 0:关闭 1:开启</p>
                     * @param _enableDlc <p>是否启用DLC 0:关闭 1:开启</p>
                     * 
                     */
                    void SetEnableDlc(const int64_t& _enableDlc);

                    /**
                     * 判断参数 EnableDlc 是否已赋值
                     * @return EnableDlc 是否已赋值
                     * 
                     */
                    bool EnableDlcHasBeenSet() const;

                    /**
                     * 获取<p>账户类型 0:普通用户 1:CAM用户</p>
                     * @return AccountType <p>账户类型 0:普通用户 1:CAM用户</p>
                     * 
                     */
                    int64_t GetAccountType() const;

                    /**
                     * 设置<p>账户类型 0:普通用户 1:CAM用户</p>
                     * @param _accountType <p>账户类型 0:普通用户 1:CAM用户</p>
                     * 
                     */
                    void SetAccountType(const int64_t& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取<p>监控模式 0: 老监控 1：新监控</p>
                     * @return MonitorMode <p>监控模式 0: 老监控 1：新监控</p>
                     * 
                     */
                    int64_t GetMonitorMode() const;

                    /**
                     * 设置<p>监控模式 0: 老监控 1：新监控</p>
                     * @param _monitorMode <p>监控模式 0: 老监控 1：新监控</p>
                     * 
                     */
                    void SetMonitorMode(const int64_t& _monitorMode);

                    /**
                     * 判断参数 MonitorMode 是否已赋值
                     * @return MonitorMode 是否已赋值
                     * 
                     */
                    bool MonitorModeHasBeenSet() const;

                    /**
                     * 获取<p>cn节点信息</p>
                     * @return CNSummary <p>cn节点信息</p>
                     * 
                     */
                    NodesSummary GetCNSummary() const;

                    /**
                     * 设置<p>cn节点信息</p>
                     * @param _cNSummary <p>cn节点信息</p>
                     * 
                     */
                    void SetCNSummary(const NodesSummary& _cNSummary);

                    /**
                     * 判断参数 CNSummary 是否已赋值
                     * @return CNSummary 是否已赋值
                     * 
                     */
                    bool CNSummaryHasBeenSet() const;

                    /**
                     * 获取<p>计算组个数</p>
                     * @return ComputeGroupCount <p>计算组个数</p>
                     * 
                     */
                    int64_t GetComputeGroupCount() const;

                    /**
                     * 设置<p>计算组个数</p>
                     * @param _computeGroupCount <p>计算组个数</p>
                     * 
                     */
                    void SetComputeGroupCount(const int64_t& _computeGroupCount);

                    /**
                     * 判断参数 ComputeGroupCount 是否已赋值
                     * @return ComputeGroupCount 是否已赋值
                     * 
                     */
                    bool ComputeGroupCountHasBeenSet() const;

                    /**
                     * 获取<p>存算分离cos存储数据</p>
                     * @return CosStorageSize <p>存算分离cos存储数据</p>
                     * 
                     */
                    double GetCosStorageSize() const;

                    /**
                     * 设置<p>存算分离cos存储数据</p>
                     * @param _cosStorageSize <p>存算分离cos存储数据</p>
                     * 
                     */
                    void SetCosStorageSize(const double& _cosStorageSize);

                    /**
                     * 判断参数 CosStorageSize 是否已赋值
                     * @return CosStorageSize 是否已赋值
                     * 
                     */
                    bool CosStorageSizeHasBeenSet() const;

                    /**
                     * 获取<p>存算分离的指标 当是true 不支持新建计算组</p>
                     * @return IsMasterNonVM <p>存算分离的指标 当是true 不支持新建计算组</p>
                     * 
                     */
                    bool GetIsMasterNonVM() const;

                    /**
                     * 设置<p>存算分离的指标 当是true 不支持新建计算组</p>
                     * @param _isMasterNonVM <p>存算分离的指标 当是true 不支持新建计算组</p>
                     * 
                     */
                    void SetIsMasterNonVM(const bool& _isMasterNonVM);

                    /**
                     * 判断参数 IsMasterNonVM 是否已赋值
                     * @return IsMasterNonVM 是否已赋值
                     * 
                     */
                    bool IsMasterNonVMHasBeenSet() const;

                    /**
                     * 获取<p>Cos容量包大小</p>
                     * @return CosPkgCapacity <p>Cos容量包大小</p>
                     * 
                     */
                    int64_t GetCosPkgCapacity() const;

                    /**
                     * 设置<p>Cos容量包大小</p>
                     * @param _cosPkgCapacity <p>Cos容量包大小</p>
                     * 
                     */
                    void SetCosPkgCapacity(const int64_t& _cosPkgCapacity);

                    /**
                     * 判断参数 CosPkgCapacity 是否已赋值
                     * @return CosPkgCapacity 是否已赋值
                     * 
                     */
                    bool CosPkgCapacityHasBeenSet() const;

                    /**
                     * 获取<p>集群是否使用托管桶</p>
                     * @return UseManagedBucket <p>集群是否使用托管桶</p>
                     * 
                     */
                    bool GetUseManagedBucket() const;

                    /**
                     * 设置<p>集群是否使用托管桶</p>
                     * @param _useManagedBucket <p>集群是否使用托管桶</p>
                     * 
                     */
                    void SetUseManagedBucket(const bool& _useManagedBucket);

                    /**
                     * 判断参数 UseManagedBucket 是否已赋值
                     * @return UseManagedBucket 是否已赋值
                     * 
                     */
                    bool UseManagedBucketHasBeenSet() const;

                    /**
                     * 获取<p>集群类型</p>
                     * @return InstanceType <p>集群类型</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>集群类型</p>
                     * @param _instanceType <p>集群类型</p>
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
                     * 获取<p>对应主集群</p>
                     * @return MasterInstance <p>对应主集群</p>
                     * 
                     */
                    std::string GetMasterInstance() const;

                    /**
                     * 设置<p>对应主集群</p>
                     * @param _masterInstance <p>对应主集群</p>
                     * 
                     */
                    void SetMasterInstance(const std::string& _masterInstance);

                    /**
                     * 判断参数 MasterInstance 是否已赋值
                     * @return MasterInstance 是否已赋值
                     * 
                     */
                    bool MasterInstanceHasBeenSet() const;

                    /**
                     * 获取<p>对应备集群</p>
                     * @return SlaveInstances <p>对应备集群</p>
                     * 
                     */
                    std::vector<std::string> GetSlaveInstances() const;

                    /**
                     * 设置<p>对应备集群</p>
                     * @param _slaveInstances <p>对应备集群</p>
                     * 
                     */
                    void SetSlaveInstances(const std::vector<std::string>& _slaveInstances);

                    /**
                     * 判断参数 SlaveInstances 是否已赋值
                     * @return SlaveInstances 是否已赋值
                     * 
                     */
                    bool SlaveInstancesHasBeenSet() const;

                    /**
                     * 获取<p>ccr服务部署节点ip</p>
                     * @return SyncerIp <p>ccr服务部署节点ip</p>
                     * 
                     */
                    std::string GetSyncerIp() const;

                    /**
                     * 设置<p>ccr服务部署节点ip</p>
                     * @param _syncerIp <p>ccr服务部署节点ip</p>
                     * 
                     */
                    void SetSyncerIp(const std::string& _syncerIp);

                    /**
                     * 判断参数 SyncerIp 是否已赋值
                     * @return SyncerIp 是否已赋值
                     * 
                     */
                    bool SyncerIpHasBeenSet() const;

                    /**
                     * 获取<p>是否支持sql convertor</p>
                     * @return EnableSqlConv <p>是否支持sql convertor</p>
                     * 
                     */
                    int64_t GetEnableSqlConv() const;

                    /**
                     * 设置<p>是否支持sql convertor</p>
                     * @param _enableSqlConv <p>是否支持sql convertor</p>
                     * 
                     */
                    void SetEnableSqlConv(const int64_t& _enableSqlConv);

                    /**
                     * 判断参数 EnableSqlConv 是否已赋值
                     * @return EnableSqlConv 是否已赋值
                     * 
                     */
                    bool EnableSqlConvHasBeenSet() const;

                    /**
                     * 获取<p>集群时区，默认+08:00</p>
                     * @return TimeZone <p>集群时区，默认+08:00</p>
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置<p>集群时区，默认+08:00</p>
                     * @param _timeZone <p>集群时区，默认+08:00</p>
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                    /**
                     * 获取<p>缓存盘介质：任一计算组为单副本SSD即ELASTIC_REMOTE_SSD（不支持变配多可用区部署等），否则为默认计算组介质；非存算分离为空</p>
                     * @return CacheDiskType <p>缓存盘介质：任一计算组为单副本SSD即ELASTIC_REMOTE_SSD（不支持变配多可用区部署等），否则为默认计算组介质；非存算分离为空</p>
                     * 
                     */
                    std::string GetCacheDiskType() const;

                    /**
                     * 设置<p>缓存盘介质：任一计算组为单副本SSD即ELASTIC_REMOTE_SSD（不支持变配多可用区部署等），否则为默认计算组介质；非存算分离为空</p>
                     * @param _cacheDiskType <p>缓存盘介质：任一计算组为单副本SSD即ELASTIC_REMOTE_SSD（不支持变配多可用区部署等），否则为默认计算组介质；非存算分离为空</p>
                     * 
                     */
                    void SetCacheDiskType(const std::string& _cacheDiskType);

                    /**
                     * 判断参数 CacheDiskType 是否已赋值
                     * @return CacheDiskType 是否已赋值
                     * 
                     */
                    bool CacheDiskTypeHasBeenSet() const;

                private:

                    /**
                     * <p>集群实例ID, &quot;cdwdoris-xxxx&quot; 字符串类型</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>集群实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>状态,<br>Init  创建中<br>Serving   运行中<br>Isolated   已隔离<br>Changing  变更中</p>
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
                    NodesSummary m_coreSummary;
                    bool m_coreSummaryHasBeenSet;

                    /**
                     * <p>高可用，&quot;true&quot; &quot;false&quot;</p>
                     */
                    std::string m_hA;
                    bool m_hAHasBeenSet;

                    /**
                     * <p>高可用类型：<br>0：非高可用<br>1：读高可用<br>2：读写高可用。</p>
                     */
                    int64_t m_haType;
                    bool m_haTypeHasBeenSet;

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
                     * <p>可用区说明，例如 &quot;广州三区&quot;</p>
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
                     * <p>cos桶</p>
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                    /**
                     * <p>cbs</p>
                     */
                    bool m_canAttachCbs;
                    bool m_canAttachCbsHasBeenSet;

                    /**
                     * <p>小版本</p>
                     */
                    std::string m_buildVersion;
                    bool m_buildVersionHasBeenSet;

                    /**
                     * <p>组件信息<br>注：这里返回类型实际为map[string]struct类型，并非显示的string类型，可以参考“示例值”进行数据的解析。</p>
                     */
                    std::string m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * <p>判断审计日志表是否有catalog字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ifExistCatalog;
                    bool m_ifExistCatalogHasBeenSet;

                    /**
                     * <p>页面特性，用于前端屏蔽一些页面入口</p>
                     */
                    std::vector<std::string> m_characteristic;
                    bool m_characteristicHasBeenSet;

                    /**
                     * <p>超时时间 单位s</p>
                     */
                    std::string m_restartTimeout;
                    bool m_restartTimeoutHasBeenSet;

                    /**
                     * <p>内核优雅重启超时时间，如果为-1说明未设置</p>
                     */
                    std::string m_graceShutdownWaitSeconds;
                    bool m_graceShutdownWaitSecondsHasBeenSet;

                    /**
                     * <p>表名大小写是否敏感，0：敏感；1：不敏感，以小写进行比较；2：不敏感，表名改为以小写存储</p>
                     */
                    int64_t m_caseSensitive;
                    bool m_caseSensitiveHasBeenSet;

                    /**
                     * <p>用户是否可以绑定安全组</p>
                     */
                    bool m_isWhiteSGs;
                    bool m_isWhiteSGsHasBeenSet;

                    /**
                     * <p>已绑定的安全组信息</p>
                     */
                    std::vector<std::string> m_bindSGs;
                    bool m_bindSGsHasBeenSet;

                    /**
                     * <p>是否为多可用区</p>
                     */
                    bool m_enableMultiZones;
                    bool m_enableMultiZonesHasBeenSet;

                    /**
                     * <p>用户可用区和子网信息</p>
                     */
                    std::string m_userNetworkInfos;
                    bool m_userNetworkInfosHasBeenSet;

                    /**
                     * <p>是否启用冷热分层。0：未开启 1：已开启</p>
                     */
                    int64_t m_enableCoolDown;
                    bool m_enableCoolDownHasBeenSet;

                    /**
                     * <p>冷热分层使用COS桶</p>
                     */
                    std::string m_coolDownBucket;
                    bool m_coolDownBucketHasBeenSet;

                    /**
                     * <p>实例扩展信息</p>
                     */
                    InstanceDetail m_details;
                    bool m_detailsHasBeenSet;

                    /**
                     * <p>是否启用DLC 0:关闭 1:开启</p>
                     */
                    int64_t m_enableDlc;
                    bool m_enableDlcHasBeenSet;

                    /**
                     * <p>账户类型 0:普通用户 1:CAM用户</p>
                     */
                    int64_t m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * <p>监控模式 0: 老监控 1：新监控</p>
                     */
                    int64_t m_monitorMode;
                    bool m_monitorModeHasBeenSet;

                    /**
                     * <p>cn节点信息</p>
                     */
                    NodesSummary m_cNSummary;
                    bool m_cNSummaryHasBeenSet;

                    /**
                     * <p>计算组个数</p>
                     */
                    int64_t m_computeGroupCount;
                    bool m_computeGroupCountHasBeenSet;

                    /**
                     * <p>存算分离cos存储数据</p>
                     */
                    double m_cosStorageSize;
                    bool m_cosStorageSizeHasBeenSet;

                    /**
                     * <p>存算分离的指标 当是true 不支持新建计算组</p>
                     */
                    bool m_isMasterNonVM;
                    bool m_isMasterNonVMHasBeenSet;

                    /**
                     * <p>Cos容量包大小</p>
                     */
                    int64_t m_cosPkgCapacity;
                    bool m_cosPkgCapacityHasBeenSet;

                    /**
                     * <p>集群是否使用托管桶</p>
                     */
                    bool m_useManagedBucket;
                    bool m_useManagedBucketHasBeenSet;

                    /**
                     * <p>集群类型</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>对应主集群</p>
                     */
                    std::string m_masterInstance;
                    bool m_masterInstanceHasBeenSet;

                    /**
                     * <p>对应备集群</p>
                     */
                    std::vector<std::string> m_slaveInstances;
                    bool m_slaveInstancesHasBeenSet;

                    /**
                     * <p>ccr服务部署节点ip</p>
                     */
                    std::string m_syncerIp;
                    bool m_syncerIpHasBeenSet;

                    /**
                     * <p>是否支持sql convertor</p>
                     */
                    int64_t m_enableSqlConv;
                    bool m_enableSqlConvHasBeenSet;

                    /**
                     * <p>集群时区，默认+08:00</p>
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * <p>缓存盘介质：任一计算组为单副本SSD即ELASTIC_REMOTE_SSD（不支持变配多可用区部署等），否则为默认计算组介质；非存算分离为空</p>
                     */
                    std::string m_cacheDiskType;
                    bool m_cacheDiskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_INSTANCEINFO_H_
