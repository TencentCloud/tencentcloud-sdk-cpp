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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQCLUSTERINFO_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQCLUSTERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/VpcConfig.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * RocketMQ集群基本信息
                */
                class RocketMQClusterInfo : public AbstractModel
                {
                public:
                    RocketMQClusterInfo();
                    ~RocketMQClusterInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>集群ID</p>
                     * @return ClusterId <p>集群ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _clusterId <p>集群ID</p>
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
                     * 获取<p>集群名称</p>
                     * @return ClusterName <p>集群名称</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>集群名称</p>
                     * @param _clusterName <p>集群名称</p>
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
                     * 获取<p>地域信息</p>
                     * @return Region <p>地域信息</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域信息</p>
                     * @param _region <p>地域信息</p>
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
                     * 获取<p>创建时间，毫秒为单位</p>
                     * @return CreateTime <p>创建时间，毫秒为单位</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间，毫秒为单位</p>
                     * @param _createTime <p>创建时间，毫秒为单位</p>
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>集群说明信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark <p>集群说明信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>集群说明信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark <p>集群说明信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>公网接入地址</p>
                     * @return PublicEndPoint <p>公网接入地址</p>
                     * 
                     */
                    std::string GetPublicEndPoint() const;

                    /**
                     * 设置<p>公网接入地址</p>
                     * @param _publicEndPoint <p>公网接入地址</p>
                     * 
                     */
                    void SetPublicEndPoint(const std::string& _publicEndPoint);

                    /**
                     * 判断参数 PublicEndPoint 是否已赋值
                     * @return PublicEndPoint 是否已赋值
                     * 
                     */
                    bool PublicEndPointHasBeenSet() const;

                    /**
                     * 获取<p>VPC接入地址</p>
                     * @return VpcEndPoint <p>VPC接入地址</p>
                     * 
                     */
                    std::string GetVpcEndPoint() const;

                    /**
                     * 设置<p>VPC接入地址</p>
                     * @param _vpcEndPoint <p>VPC接入地址</p>
                     * 
                     */
                    void SetVpcEndPoint(const std::string& _vpcEndPoint);

                    /**
                     * 判断参数 VpcEndPoint 是否已赋值
                     * @return VpcEndPoint 是否已赋值
                     * 
                     */
                    bool VpcEndPointHasBeenSet() const;

                    /**
                     * 获取<p>是否支持命名空间接入点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SupportNamespaceEndpoint <p>是否支持命名空间接入点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSupportNamespaceEndpoint() const;

                    /**
                     * 设置<p>是否支持命名空间接入点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _supportNamespaceEndpoint <p>是否支持命名空间接入点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSupportNamespaceEndpoint(const bool& _supportNamespaceEndpoint);

                    /**
                     * 判断参数 SupportNamespaceEndpoint 是否已赋值
                     * @return SupportNamespaceEndpoint 是否已赋值
                     * 
                     */
                    bool SupportNamespaceEndpointHasBeenSet() const;

                    /**
                     * 获取<p>VPC信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Vpcs <p>VPC信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<VpcConfig> GetVpcs() const;

                    /**
                     * 设置<p>VPC信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcs <p>VPC信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVpcs(const std::vector<VpcConfig>& _vpcs);

                    /**
                     * 判断参数 Vpcs 是否已赋值
                     * @return Vpcs 是否已赋值
                     * 
                     */
                    bool VpcsHasBeenSet() const;

                    /**
                     * 获取<p>是否为专享实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsVip <p>是否为专享实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsVip() const;

                    /**
                     * 设置<p>是否为专享实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isVip <p>是否为专享实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsVip(const bool& _isVip);

                    /**
                     * 判断参数 IsVip 是否已赋值
                     * @return IsVip 是否已赋值
                     * 
                     */
                    bool IsVipHasBeenSet() const;

                    /**
                     * 获取<p>Rocketmq集群标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RocketMQFlag <p>Rocketmq集群标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetRocketMQFlag() const;

                    /**
                     * 设置<p>Rocketmq集群标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rocketMQFlag <p>Rocketmq集群标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRocketMQFlag(const bool& _rocketMQFlag);

                    /**
                     * 判断参数 RocketMQFlag 是否已赋值
                     * @return RocketMQFlag 是否已赋值
                     * 
                     */
                    bool RocketMQFlagHasBeenSet() const;

                    /**
                     * 获取<p>计费状态，1表示正常，2表示已停服，3表示已销毁</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>计费状态，1表示正常，2表示已停服，3表示已销毁</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>计费状态，1表示正常，2表示已停服，3表示已销毁</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>计费状态，1表示正常，2表示已停服，3表示已销毁</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>欠费停服时间，毫秒为单位</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsolateTime <p>欠费停服时间，毫秒为单位</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsolateTime() const;

                    /**
                     * 设置<p>欠费停服时间，毫秒为单位</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isolateTime <p>欠费停服时间，毫秒为单位</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsolateTime(const int64_t& _isolateTime);

                    /**
                     * 判断参数 IsolateTime 是否已赋值
                     * @return IsolateTime 是否已赋值
                     * 
                     */
                    bool IsolateTimeHasBeenSet() const;

                    /**
                     * 获取<p>HTTP协议公网接入地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpPublicEndpoint <p>HTTP协议公网接入地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHttpPublicEndpoint() const;

                    /**
                     * 设置<p>HTTP协议公网接入地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _httpPublicEndpoint <p>HTTP协议公网接入地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHttpPublicEndpoint(const std::string& _httpPublicEndpoint);

                    /**
                     * 判断参数 HttpPublicEndpoint 是否已赋值
                     * @return HttpPublicEndpoint 是否已赋值
                     * 
                     */
                    bool HttpPublicEndpointHasBeenSet() const;

                    /**
                     * 获取<p>HTTP协议VPC接入地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpVpcEndpoint <p>HTTP协议VPC接入地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHttpVpcEndpoint() const;

                    /**
                     * 设置<p>HTTP协议VPC接入地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _httpVpcEndpoint <p>HTTP协议VPC接入地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHttpVpcEndpoint(const std::string& _httpVpcEndpoint);

                    /**
                     * 判断参数 HttpVpcEndpoint 是否已赋值
                     * @return HttpVpcEndpoint 是否已赋值
                     * 
                     */
                    bool HttpVpcEndpointHasBeenSet() const;

                    /**
                     * 获取<p>TCP内部接入地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InternalEndpoint <p>TCP内部接入地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInternalEndpoint() const;

                    /**
                     * 设置<p>TCP内部接入地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _internalEndpoint <p>TCP内部接入地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInternalEndpoint(const std::string& _internalEndpoint);

                    /**
                     * 判断参数 InternalEndpoint 是否已赋值
                     * @return InternalEndpoint 是否已赋值
                     * 
                     */
                    bool InternalEndpointHasBeenSet() const;

                    /**
                     * 获取<p>HTTP协议内部接入地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpInternalEndpoint <p>HTTP协议内部接入地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHttpInternalEndpoint() const;

                    /**
                     * 设置<p>HTTP协议内部接入地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _httpInternalEndpoint <p>HTTP协议内部接入地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHttpInternalEndpoint(const std::string& _httpInternalEndpoint);

                    /**
                     * 判断参数 HttpInternalEndpoint 是否已赋值
                     * @return HttpInternalEndpoint 是否已赋值
                     * 
                     */
                    bool HttpInternalEndpointHasBeenSet() const;

                    /**
                     * 获取<p>是否开启ACL鉴权，专享实例支持关闭</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AclEnabled <p>是否开启ACL鉴权，专享实例支持关闭</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAclEnabled() const;

                    /**
                     * 设置<p>是否开启ACL鉴权，专享实例支持关闭</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aclEnabled <p>是否开启ACL鉴权，专享实例支持关闭</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAclEnabled(const bool& _aclEnabled);

                    /**
                     * 判断参数 AclEnabled 是否已赋值
                     * @return AclEnabled 是否已赋值
                     * 
                     */
                    bool AclEnabledHasBeenSet() const;

                    /**
                     * 获取<p>公网CLB实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicClbId <p>公网CLB实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPublicClbId() const;

                    /**
                     * 设置<p>公网CLB实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicClbId <p>公网CLB实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicClbId(const std::string& _publicClbId);

                    /**
                     * 判断参数 PublicClbId 是否已赋值
                     * @return PublicClbId 是否已赋值
                     * 
                     */
                    bool PublicClbIdHasBeenSet() const;

                    /**
                     * 获取<p>vip</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Vip <p>vip</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>vip</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vip <p>vip</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取<p>所属VPC</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId <p>所属VPC</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>所属VPC</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcId <p>所属VPC</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>是否支持迁移</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SupportMigration <p>是否支持迁移</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSupportMigration() const;

                    /**
                     * 设置<p>是否支持迁移</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _supportMigration <p>是否支持迁移</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSupportMigration(const bool& _supportMigration);

                    /**
                     * 判断参数 SupportMigration 是否已赋值
                     * @return SupportMigration 是否已赋值
                     * 
                     */
                    bool SupportMigrationHasBeenSet() const;

                    /**
                     * 获取<p>实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败，6 - 变配中，7 - 变配失败</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceStatus <p>实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败，6 - 变配中，7 - 变配失败</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInstanceStatus() const;

                    /**
                     * 设置<p>实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败，6 - 变配中，7 - 变配失败</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceStatus <p>实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败，6 - 变配中，7 - 变配失败</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceStatus(const int64_t& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取<p>集群所属可用区，表明集群归属的可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneId <p>集群所属可用区，表明集群归属的可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置<p>集群所属可用区，表明集群归属的可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zoneId <p>集群所属可用区，表明集群归属的可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>集群节点所在的可用区，若该集群为跨可用区集群，则包含该集群节点所在的多个可用区。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneIds <p>集群节点所在的可用区，若该集群为跨可用区集群，则包含该集群节点所在的多个可用区。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置<p>集群节点所在的可用区，若该集群为跨可用区集群，则包含该集群节点所在的多个可用区。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zoneIds <p>集群节点所在的可用区，若该集群为跨可用区集群，则包含该集群节点所在的多个可用区。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZoneIds(const std::vector<int64_t>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取<p>是否已冻结</p>
                     * @return IsFrozen <p>是否已冻结</p>
                     * 
                     */
                    bool GetIsFrozen() const;

                    /**
                     * 设置<p>是否已冻结</p>
                     * @param _isFrozen <p>是否已冻结</p>
                     * 
                     */
                    void SetIsFrozen(const bool& _isFrozen);

                    /**
                     * 判断参数 IsFrozen 是否已赋值
                     * @return IsFrozen 是否已赋值
                     * 
                     */
                    bool IsFrozenHasBeenSet() const;

                    /**
                     * 获取<p>是否开启自动创建主题</p>
                     * @return AutoCreateTopicEnabled <p>是否开启自动创建主题</p>
                     * 
                     */
                    bool GetAutoCreateTopicEnabled() const;

                    /**
                     * 设置<p>是否开启自动创建主题</p>
                     * @param _autoCreateTopicEnabled <p>是否开启自动创建主题</p>
                     * 
                     */
                    void SetAutoCreateTopicEnabled(const bool& _autoCreateTopicEnabled);

                    /**
                     * 判断参数 AutoCreateTopicEnabled 是否已赋值
                     * @return AutoCreateTopicEnabled 是否已赋值
                     * 
                     */
                    bool AutoCreateTopicEnabledHasBeenSet() const;

                    /**
                     * 获取<p>是否开启集群Admin能力</p>
                     * @return AdminFeatureEnabled <p>是否开启集群Admin能力</p>
                     * 
                     */
                    bool GetAdminFeatureEnabled() const;

                    /**
                     * 设置<p>是否开启集群Admin能力</p>
                     * @param _adminFeatureEnabled <p>是否开启集群Admin能力</p>
                     * 
                     */
                    void SetAdminFeatureEnabled(const bool& _adminFeatureEnabled);

                    /**
                     * 判断参数 AdminFeatureEnabled 是否已赋值
                     * @return AdminFeatureEnabled 是否已赋值
                     * 
                     */
                    bool AdminFeatureEnabledHasBeenSet() const;

                    /**
                     * 获取<p>Admin AK</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdminAccessKey <p>Admin AK</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAdminAccessKey() const;

                    /**
                     * 设置<p>Admin AK</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _adminAccessKey <p>Admin AK</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdminAccessKey(const std::string& _adminAccessKey);

                    /**
                     * 判断参数 AdminAccessKey 是否已赋值
                     * @return AdminAccessKey 是否已赋值
                     * 
                     */
                    bool AdminAccessKeyHasBeenSet() const;

                    /**
                     * 获取<p>Admin SK</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdminSecretKey <p>Admin SK</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAdminSecretKey() const;

                    /**
                     * 设置<p>Admin SK</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _adminSecretKey <p>Admin SK</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdminSecretKey(const std::string& _adminSecretKey);

                    /**
                     * 判断参数 AdminSecretKey 是否已赋值
                     * @return AdminSecretKey 是否已赋值
                     * 
                     */
                    bool AdminSecretKeyHasBeenSet() const;

                    /**
                     * 获取<p>是否开启删除保护</p>
                     * @return EnableDeletionProtection <p>是否开启删除保护</p>
                     * 
                     */
                    bool GetEnableDeletionProtection() const;

                    /**
                     * 设置<p>是否开启删除保护</p>
                     * @param _enableDeletionProtection <p>是否开启删除保护</p>
                     * 
                     */
                    void SetEnableDeletionProtection(const bool& _enableDeletionProtection);

                    /**
                     * 判断参数 EnableDeletionProtection 是否已赋值
                     * @return EnableDeletionProtection 是否已赋值
                     * 
                     */
                    bool EnableDeletionProtectionHasBeenSet() const;

                    /**
                     * 获取<p>是否开启自动创建消费组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoCreateConsumeGroupEnabled <p>是否开启自动创建消费组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAutoCreateConsumeGroupEnabled() const;

                    /**
                     * 设置<p>是否开启自动创建消费组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoCreateConsumeGroupEnabled <p>是否开启自动创建消费组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoCreateConsumeGroupEnabled(const bool& _autoCreateConsumeGroupEnabled);

                    /**
                     * 判断参数 AutoCreateConsumeGroupEnabled 是否已赋值
                     * @return AutoCreateConsumeGroupEnabled 是否已赋值
                     * 
                     */
                    bool AutoCreateConsumeGroupEnabledHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>集群名称</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>地域信息</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>创建时间，毫秒为单位</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>集群说明信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>公网接入地址</p>
                     */
                    std::string m_publicEndPoint;
                    bool m_publicEndPointHasBeenSet;

                    /**
                     * <p>VPC接入地址</p>
                     */
                    std::string m_vpcEndPoint;
                    bool m_vpcEndPointHasBeenSet;

                    /**
                     * <p>是否支持命名空间接入点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_supportNamespaceEndpoint;
                    bool m_supportNamespaceEndpointHasBeenSet;

                    /**
                     * <p>VPC信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VpcConfig> m_vpcs;
                    bool m_vpcsHasBeenSet;

                    /**
                     * <p>是否为专享实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isVip;
                    bool m_isVipHasBeenSet;

                    /**
                     * <p>Rocketmq集群标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_rocketMQFlag;
                    bool m_rocketMQFlagHasBeenSet;

                    /**
                     * <p>计费状态，1表示正常，2表示已停服，3表示已销毁</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>欠费停服时间，毫秒为单位</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * <p>HTTP协议公网接入地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_httpPublicEndpoint;
                    bool m_httpPublicEndpointHasBeenSet;

                    /**
                     * <p>HTTP协议VPC接入地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_httpVpcEndpoint;
                    bool m_httpVpcEndpointHasBeenSet;

                    /**
                     * <p>TCP内部接入地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_internalEndpoint;
                    bool m_internalEndpointHasBeenSet;

                    /**
                     * <p>HTTP协议内部接入地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_httpInternalEndpoint;
                    bool m_httpInternalEndpointHasBeenSet;

                    /**
                     * <p>是否开启ACL鉴权，专享实例支持关闭</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_aclEnabled;
                    bool m_aclEnabledHasBeenSet;

                    /**
                     * <p>公网CLB实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publicClbId;
                    bool m_publicClbIdHasBeenSet;

                    /**
                     * <p>vip</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>所属VPC</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>是否支持迁移</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_supportMigration;
                    bool m_supportMigrationHasBeenSet;

                    /**
                     * <p>实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败，6 - 变配中，7 - 变配失败</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * <p>集群所属可用区，表明集群归属的可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>集群节点所在的可用区，若该集群为跨可用区集群，则包含该集群节点所在的多个可用区。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * <p>是否已冻结</p>
                     */
                    bool m_isFrozen;
                    bool m_isFrozenHasBeenSet;

                    /**
                     * <p>是否开启自动创建主题</p>
                     */
                    bool m_autoCreateTopicEnabled;
                    bool m_autoCreateTopicEnabledHasBeenSet;

                    /**
                     * <p>是否开启集群Admin能力</p>
                     */
                    bool m_adminFeatureEnabled;
                    bool m_adminFeatureEnabledHasBeenSet;

                    /**
                     * <p>Admin AK</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_adminAccessKey;
                    bool m_adminAccessKeyHasBeenSet;

                    /**
                     * <p>Admin SK</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_adminSecretKey;
                    bool m_adminSecretKeyHasBeenSet;

                    /**
                     * <p>是否开启删除保护</p>
                     */
                    bool m_enableDeletionProtection;
                    bool m_enableDeletionProtectionHasBeenSet;

                    /**
                     * <p>是否开启自动创建消费组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_autoCreateConsumeGroupEnabled;
                    bool m_autoCreateConsumeGroupEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQCLUSTERINFO_H_
