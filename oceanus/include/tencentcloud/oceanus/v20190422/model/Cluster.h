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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_CLUSTER_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_CLUSTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/CCN.h>
#include <tencentcloud/oceanus/v20190422/model/Tag.h>
#include <tencentcloud/oceanus/v20190422/model/ClusterVersion.h>
#include <tencentcloud/oceanus/v20190422/model/WorkSpaceClusterItem.h>
#include <tencentcloud/oceanus/v20190422/model/ClusterSession.h>
#include <tencentcloud/oceanus/v20190422/model/Order.h>
#include <tencentcloud/oceanus/v20190422/model/SqlGatewayItem.h>
#include <tencentcloud/oceanus/v20190422/model/SubEks.h>
#include <tencentcloud/oceanus/v20190422/model/Setats.h>
#include <tencentcloud/oceanus/v20190422/model/HadoopYarnItem.h>
#include <tencentcloud/oceanus/v20190422/model/SlaveZone.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * 描述用户创建的集群信息
                */
                class Cluster : public AbstractModel
                {
                public:
                    Cluster();
                    ~Cluster() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>集群 ID</p>
                     * @return ClusterId <p>集群 ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群 ID</p>
                     * @param _clusterId <p>集群 ID</p>
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
                     * @return Name <p>集群名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>集群名称</p>
                     * @param _name <p>集群名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>地域</p>
                     * @return Region <p>地域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域</p>
                     * @param _region <p>地域</p>
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
                     * 获取<p>用户 AppID</p>
                     * @return AppId <p>用户 AppID</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>用户 AppID</p>
                     * @param _appId <p>用户 AppID</p>
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>主账号 UIN</p>
                     * @return OwnerUin <p>主账号 UIN</p>
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>主账号 UIN</p>
                     * @param _ownerUin <p>主账号 UIN</p>
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取<p>创建者 UIN</p>
                     * @return CreatorUin <p>创建者 UIN</p>
                     * 
                     */
                    std::string GetCreatorUin() const;

                    /**
                     * 设置<p>创建者 UIN</p>
                     * @param _creatorUin <p>创建者 UIN</p>
                     * 
                     */
                    void SetCreatorUin(const std::string& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     * 
                     */
                    bool CreatorUinHasBeenSet() const;

                    /**
                     * 获取<p>集群状态, 1 未初始化,3 初始化中，2 运行中</p>
                     * @return Status <p>集群状态, 1 未初始化,3 初始化中，2 运行中</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>集群状态, 1 未初始化,3 初始化中，2 运行中</p>
                     * @param _status <p>集群状态, 1 未初始化,3 初始化中，2 运行中</p>
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
                     * 获取<p>描述</p>
                     * @return Remark <p>描述</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _remark <p>描述</p>
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
                     * 获取<p>集群创建时间</p>
                     * @return CreateTime <p>集群创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>集群创建时间</p>
                     * @param _createTime <p>集群创建时间</p>
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
                     * 获取<p>最后一次操作集群的时间</p>
                     * @return UpdateTime <p>最后一次操作集群的时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>最后一次操作集群的时间</p>
                     * @param _updateTime <p>最后一次操作集群的时间</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>CU 数量</p>
                     * @return CuNum <p>CU 数量</p>
                     * 
                     */
                    uint64_t GetCuNum() const;

                    /**
                     * 设置<p>CU 数量</p>
                     * @param _cuNum <p>CU 数量</p>
                     * 
                     */
                    void SetCuNum(const uint64_t& _cuNum);

                    /**
                     * 判断参数 CuNum 是否已赋值
                     * @return CuNum 是否已赋值
                     * 
                     */
                    bool CuNumHasBeenSet() const;

                    /**
                     * 获取<p>CU 内存规格</p>
                     * @return CuMem <p>CU 内存规格</p>
                     * 
                     */
                    uint64_t GetCuMem() const;

                    /**
                     * 设置<p>CU 内存规格</p>
                     * @param _cuMem <p>CU 内存规格</p>
                     * 
                     */
                    void SetCuMem(const uint64_t& _cuMem);

                    /**
                     * 判断参数 CuMem 是否已赋值
                     * @return CuMem 是否已赋值
                     * 
                     */
                    bool CuMemHasBeenSet() const;

                    /**
                     * 获取<p>可用区</p>
                     * @return Zone <p>可用区</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区</p>
                     * @param _zone <p>可用区</p>
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
                     * 获取<p>状态描述</p>
                     * @return StatusDesc <p>状态描述</p>
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置<p>状态描述</p>
                     * @param _statusDesc <p>状态描述</p>
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
                     * 获取<p>网络</p>
                     * @return CCNs <p>网络</p>
                     * 
                     */
                    std::vector<CCN> GetCCNs() const;

                    /**
                     * 设置<p>网络</p>
                     * @param _cCNs <p>网络</p>
                     * 
                     */
                    void SetCCNs(const std::vector<CCN>& _cCNs);

                    /**
                     * 判断参数 CCNs 是否已赋值
                     * @return CCNs 是否已赋值
                     * 
                     */
                    bool CCNsHasBeenSet() const;

                    /**
                     * 获取<p>网络</p>
                     * @return NetEnvironmentType <p>网络</p>
                     * 
                     */
                    uint64_t GetNetEnvironmentType() const;

                    /**
                     * 设置<p>网络</p>
                     * @param _netEnvironmentType <p>网络</p>
                     * 
                     */
                    void SetNetEnvironmentType(const uint64_t& _netEnvironmentType);

                    /**
                     * 判断参数 NetEnvironmentType 是否已赋值
                     * @return NetEnvironmentType 是否已赋值
                     * 
                     */
                    bool NetEnvironmentTypeHasBeenSet() const;

                    /**
                     * 获取<p>空闲 CU</p>
                     * @return FreeCuNum <p>空闲 CU</p>
                     * 
                     */
                    int64_t GetFreeCuNum() const;

                    /**
                     * 设置<p>空闲 CU</p>
                     * @param _freeCuNum <p>空闲 CU</p>
                     * 
                     */
                    void SetFreeCuNum(const int64_t& _freeCuNum);

                    /**
                     * 判断参数 FreeCuNum 是否已赋值
                     * @return FreeCuNum 是否已赋值
                     * 
                     */
                    bool FreeCuNumHasBeenSet() const;

                    /**
                     * 获取<p>集群绑定的标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>集群绑定的标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>集群绑定的标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>集群绑定的标签</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>集群隔离时间; 没隔离时间，则为 -</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsolatedTime <p>集群隔离时间; 没隔离时间，则为 -</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIsolatedTime() const;

                    /**
                     * 设置<p>集群隔离时间; 没隔离时间，则为 -</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isolatedTime <p>集群隔离时间; 没隔离时间，则为 -</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsolatedTime(const std::string& _isolatedTime);

                    /**
                     * 判断参数 IsolatedTime 是否已赋值
                     * @return IsolatedTime 是否已赋值
                     * 
                     */
                    bool IsolatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>集群过期时间; 没过期概念，则为 -</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime <p>集群过期时间; 没过期概念，则为 -</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>集群过期时间; 没过期概念，则为 -</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireTime <p>集群过期时间; 没过期概念，则为 -</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>距离过期还有多少秒; 没过期概念，则为 -</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecondsUntilExpiry <p>距离过期还有多少秒; 没过期概念，则为 -</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSecondsUntilExpiry() const;

                    /**
                     * 设置<p>距离过期还有多少秒; 没过期概念，则为 -</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _secondsUntilExpiry <p>距离过期还有多少秒; 没过期概念，则为 -</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecondsUntilExpiry(const std::string& _secondsUntilExpiry);

                    /**
                     * 判断参数 SecondsUntilExpiry 是否已赋值
                     * @return SecondsUntilExpiry 是否已赋值
                     * 
                     */
                    bool SecondsUntilExpiryHasBeenSet() const;

                    /**
                     * 获取<p>自动续费标记，0 表示默认状态 (用户未设置，即初始状态，用户开通了预付费不停服特权会进行自动续费)， 1 表示自动续费，2表示明确不自动续费(用户设置)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoRenewFlag <p>自动续费标记，0 表示默认状态 (用户未设置，即初始状态，用户开通了预付费不停服特权会进行自动续费)， 1 表示自动续费，2表示明确不自动续费(用户设置)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置<p>自动续费标记，0 表示默认状态 (用户未设置，即初始状态，用户开通了预付费不停服特权会进行自动续费)， 1 表示自动续费，2表示明确不自动续费(用户设置)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoRenewFlag <p>自动续费标记，0 表示默认状态 (用户未设置，即初始状态，用户开通了预付费不停服特权会进行自动续费)， 1 表示自动续费，2表示明确不自动续费(用户设置)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>集群的默认 COS 存储桶</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultCOSBucket <p>集群的默认 COS 存储桶</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDefaultCOSBucket() const;

                    /**
                     * 设置<p>集群的默认 COS 存储桶</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _defaultCOSBucket <p>集群的默认 COS 存储桶</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDefaultCOSBucket(const std::string& _defaultCOSBucket);

                    /**
                     * 判断参数 DefaultCOSBucket 是否已赋值
                     * @return DefaultCOSBucket 是否已赋值
                     * 
                     */
                    bool DefaultCOSBucketHasBeenSet() const;

                    /**
                     * 获取<p>集群的CLS 日志集 LogSet</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CLSLogSet <p>集群的CLS 日志集 LogSet</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCLSLogSet() const;

                    /**
                     * 设置<p>集群的CLS 日志集 LogSet</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cLSLogSet <p>集群的CLS 日志集 LogSet</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCLSLogSet(const std::string& _cLSLogSet);

                    /**
                     * 判断参数 CLSLogSet 是否已赋值
                     * @return CLSLogSet 是否已赋值
                     * 
                     */
                    bool CLSLogSetHasBeenSet() const;

                    /**
                     * 获取<p>集群的CLS 日志主题 TopicId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CLSTopicId <p>集群的CLS 日志主题 TopicId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCLSTopicId() const;

                    /**
                     * 设置<p>集群的CLS 日志主题 TopicId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cLSTopicId <p>集群的CLS 日志主题 TopicId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCLSTopicId(const std::string& _cLSTopicId);

                    /**
                     * 判断参数 CLSTopicId 是否已赋值
                     * @return CLSTopicId 是否已赋值
                     * 
                     */
                    bool CLSTopicIdHasBeenSet() const;

                    /**
                     * 获取<p>集群的CLS 日志集  名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CLSLogName <p>集群的CLS 日志集  名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCLSLogName() const;

                    /**
                     * 设置<p>集群的CLS 日志集  名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cLSLogName <p>集群的CLS 日志集  名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCLSLogName(const std::string& _cLSLogName);

                    /**
                     * 判断参数 CLSLogName 是否已赋值
                     * @return CLSLogName 是否已赋值
                     * 
                     */
                    bool CLSLogNameHasBeenSet() const;

                    /**
                     * 获取<p>集群的CLS 日志主题  名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CLSTopicName <p>集群的CLS 日志主题  名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCLSTopicName() const;

                    /**
                     * 设置<p>集群的CLS 日志主题  名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cLSTopicName <p>集群的CLS 日志主题  名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCLSTopicName(const std::string& _cLSTopicName);

                    /**
                     * 判断参数 CLSTopicName 是否已赋值
                     * @return CLSTopicName 是否已赋值
                     * 
                     */
                    bool CLSTopicNameHasBeenSet() const;

                    /**
                     * 获取<p>集群的版本信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version <p>集群的版本信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClusterVersion GetVersion() const;

                    /**
                     * 设置<p>集群的版本信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version <p>集群的版本信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersion(const ClusterVersion& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>细粒度资源下的空闲CU</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FreeCu <p>细粒度资源下的空闲CU</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetFreeCu() const;

                    /**
                     * 设置<p>细粒度资源下的空闲CU</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _freeCu <p>细粒度资源下的空闲CU</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFreeCu(const double& _freeCu);

                    /**
                     * 判断参数 FreeCu 是否已赋值
                     * @return FreeCu 是否已赋值
                     * 
                     */
                    bool FreeCuHasBeenSet() const;

                    /**
                     * 获取<p>集群的默认日志采集配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultLogCollectConf <p>集群的默认日志采集配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDefaultLogCollectConf() const;

                    /**
                     * 设置<p>集群的默认日志采集配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _defaultLogCollectConf <p>集群的默认日志采集配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDefaultLogCollectConf(const std::string& _defaultLogCollectConf);

                    /**
                     * 判断参数 DefaultLogCollectConf 是否已赋值
                     * @return DefaultLogCollectConf 是否已赋值
                     * 
                     */
                    bool DefaultLogCollectConfHasBeenSet() const;

                    /**
                     * 获取<p>取值：0-没有设置，1-已设置，2-不允许设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomizedDNSEnabled <p>取值：0-没有设置，1-已设置，2-不允许设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCustomizedDNSEnabled() const;

                    /**
                     * 设置<p>取值：0-没有设置，1-已设置，2-不允许设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customizedDNSEnabled <p>取值：0-没有设置，1-已设置，2-不允许设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomizedDNSEnabled(const int64_t& _customizedDNSEnabled);

                    /**
                     * 判断参数 CustomizedDNSEnabled 是否已赋值
                     * @return CustomizedDNSEnabled 是否已赋值
                     * 
                     */
                    bool CustomizedDNSEnabledHasBeenSet() const;

                    /**
                     * 获取<p>空间信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Correlations <p>空间信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<WorkSpaceClusterItem> GetCorrelations() const;

                    /**
                     * 设置<p>空间信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _correlations <p>空间信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCorrelations(const std::vector<WorkSpaceClusterItem>& _correlations);

                    /**
                     * 判断参数 Correlations 是否已赋值
                     * @return Correlations 是否已赋值
                     * 
                     */
                    bool CorrelationsHasBeenSet() const;

                    /**
                     * 获取<p>运行CU</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunningCu <p>运行CU</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetRunningCu() const;

                    /**
                     * 设置<p>运行CU</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runningCu <p>运行CU</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunningCu(const double& _runningCu);

                    /**
                     * 判断参数 RunningCu 是否已赋值
                     * @return RunningCu 是否已赋值
                     * 
                     */
                    bool RunningCuHasBeenSet() const;

                    /**
                     * 获取<p>0 后付费,1 预付费</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayMode <p>0 后付费,1 预付费</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置<p>0 后付费,1 预付费</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payMode <p>0 后付费,1 预付费</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>前端区分 集群是否需要2CU逻辑 因为历史集群 变配不需要, default 1  新集群都需要</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsNeedManageNode <p>前端区分 集群是否需要2CU逻辑 因为历史集群 变配不需要, default 1  新集群都需要</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsNeedManageNode() const;

                    /**
                     * 设置<p>前端区分 集群是否需要2CU逻辑 因为历史集群 变配不需要, default 1  新集群都需要</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isNeedManageNode <p>前端区分 集群是否需要2CU逻辑 因为历史集群 变配不需要, default 1  新集群都需要</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsNeedManageNode(const int64_t& _isNeedManageNode);

                    /**
                     * 判断参数 IsNeedManageNode 是否已赋值
                     * @return IsNeedManageNode 是否已赋值
                     * 
                     */
                    bool IsNeedManageNodeHasBeenSet() const;

                    /**
                     * 获取<p>session集群信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterSessions <p>session集群信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ClusterSession> GetClusterSessions() const;

                    /**
                     * 设置<p>session集群信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterSessions <p>session集群信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterSessions(const std::vector<ClusterSession>& _clusterSessions);

                    /**
                     * 判断参数 ClusterSessions 是否已赋值
                     * @return ClusterSessions 是否已赋值
                     * 
                     */
                    bool ClusterSessionsHasBeenSet() const;

                    /**
                     * 获取<p>V3版本 = 2</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ArchGeneration <p>V3版本 = 2</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetArchGeneration() const;

                    /**
                     * 设置<p>V3版本 = 2</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _archGeneration <p>V3版本 = 2</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetArchGeneration(const uint64_t& _archGeneration);

                    /**
                     * 判断参数 ArchGeneration 是否已赋值
                     * @return ArchGeneration 是否已赋值
                     * 
                     */
                    bool ArchGenerationHasBeenSet() const;

                    /**
                     * 获取<p>0:TKE, 1:EKS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterType <p>0:TKE, 1:EKS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetClusterType() const;

                    /**
                     * 设置<p>0:TKE, 1:EKS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterType <p>0:TKE, 1:EKS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterType(const uint64_t& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取<p>订单信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Orders <p>订单信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Order> GetOrders() const;

                    /**
                     * 设置<p>订单信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orders <p>订单信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrders(const std::vector<Order>& _orders);

                    /**
                     * 判断参数 Orders 是否已赋值
                     * @return Orders 是否已赋值
                     * 
                     */
                    bool OrdersHasBeenSet() const;

                    /**
                     * 获取<p>Gateway信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SqlGateways <p>Gateway信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SqlGatewayItem> GetSqlGateways() const;

                    /**
                     * 设置<p>Gateway信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sqlGateways <p>Gateway信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSqlGateways(const std::vector<SqlGatewayItem>& _sqlGateways);

                    /**
                     * 判断参数 SqlGateways 是否已赋值
                     * @return SqlGateways 是否已赋值
                     * 
                     */
                    bool SqlGatewaysHasBeenSet() const;

                    /**
                     * 获取<p>0 公网访问 // 1 内网访问</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebUIType <p>0 公网访问 // 1 内网访问</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWebUIType() const;

                    /**
                     * 设置<p>0 公网访问 // 1 内网访问</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _webUIType <p>0 公网访问 // 1 内网访问</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWebUIType(const int64_t& _webUIType);

                    /**
                     * 判断参数 WebUIType 是否已赋值
                     * @return WebUIType 是否已赋值
                     * 
                     */
                    bool WebUITypeHasBeenSet() const;

                    /**
                     * 获取<p>2 独享集群</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type <p>2 独享集群</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>2 独享集群</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type <p>2 独享集群</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>子eks集群</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubEks <p>子eks集群</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SubEks GetSubEks() const;

                    /**
                     * 设置<p>子eks集群</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subEks <p>子eks集群</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubEks(const SubEks& _subEks);

                    /**
                     * 判断参数 SubEks 是否已赋值
                     * @return SubEks 是否已赋值
                     * 
                     */
                    bool SubEksHasBeenSet() const;

                    /**
                     * 获取<p>上级集群</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentSerialId <p>上级集群</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAgentSerialId() const;

                    /**
                     * 设置<p>上级集群</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentSerialId <p>上级集群</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAgentSerialId(const std::string& _agentSerialId);

                    /**
                     * 判断参数 AgentSerialId 是否已赋值
                     * @return AgentSerialId 是否已赋值
                     * 
                     */
                    bool AgentSerialIdHasBeenSet() const;

                    /**
                     * 获取<p>资源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceType <p>资源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetResourceType() const;

                    /**
                     * 设置<p>资源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceType <p>资源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceType(const int64_t& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>集群类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BillingResourceMode <p>集群类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBillingResourceMode() const;

                    /**
                     * 设置<p>集群类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _billingResourceMode <p>集群类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBillingResourceMode(const std::string& _billingResourceMode);

                    /**
                     * 判断参数 BillingResourceMode 是否已赋值
                     * @return BillingResourceMode 是否已赋值
                     * 
                     */
                    bool BillingResourceModeHasBeenSet() const;

                    /**
                     * 获取<p>Cu比例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemRatio <p>Cu比例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMemRatio() const;

                    /**
                     * 设置<p>Cu比例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memRatio <p>Cu比例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemRatio(const int64_t& _memRatio);

                    /**
                     * 判断参数 MemRatio 是否已赋值
                     * @return MemRatio 是否已赋值
                     * 
                     */
                    bool MemRatioHasBeenSet() const;

                    /**
                     * 获取<p>是否开启跨租户弹性网卡</p>
                     * @return CrossTenantEniMode <p>是否开启跨租户弹性网卡</p>
                     * 
                     */
                    int64_t GetCrossTenantEniMode() const;

                    /**
                     * 设置<p>是否开启跨租户弹性网卡</p>
                     * @param _crossTenantEniMode <p>是否开启跨租户弹性网卡</p>
                     * 
                     */
                    void SetCrossTenantEniMode(const int64_t& _crossTenantEniMode);

                    /**
                     * 判断参数 CrossTenantEniMode 是否已赋值
                     * @return CrossTenantEniMode 是否已赋值
                     * 
                     */
                    bool CrossTenantEniModeHasBeenSet() const;

                    /**
                     * 获取<p>总的CPU</p>
                     * @return TotalCpu <p>总的CPU</p>
                     * 
                     */
                    double GetTotalCpu() const;

                    /**
                     * 设置<p>总的CPU</p>
                     * @param _totalCpu <p>总的CPU</p>
                     * 
                     */
                    void SetTotalCpu(const double& _totalCpu);

                    /**
                     * 判断参数 TotalCpu 是否已赋值
                     * @return TotalCpu 是否已赋值
                     * 
                     */
                    bool TotalCpuHasBeenSet() const;

                    /**
                     * 获取<p>总的内存</p>
                     * @return TotalMem <p>总的内存</p>
                     * 
                     */
                    double GetTotalMem() const;

                    /**
                     * 设置<p>总的内存</p>
                     * @param _totalMem <p>总的内存</p>
                     * 
                     */
                    void SetTotalMem(const double& _totalMem);

                    /**
                     * 判断参数 TotalMem 是否已赋值
                     * @return TotalMem 是否已赋值
                     * 
                     */
                    bool TotalMemHasBeenSet() const;

                    /**
                     * 获取<p>运行的CPU</p>
                     * @return RunningCpu <p>运行的CPU</p>
                     * 
                     */
                    double GetRunningCpu() const;

                    /**
                     * 设置<p>运行的CPU</p>
                     * @param _runningCpu <p>运行的CPU</p>
                     * 
                     */
                    void SetRunningCpu(const double& _runningCpu);

                    /**
                     * 判断参数 RunningCpu 是否已赋值
                     * @return RunningCpu 是否已赋值
                     * 
                     */
                    bool RunningCpuHasBeenSet() const;

                    /**
                     * 获取<p>运行的内存</p>
                     * @return RunningMem <p>运行的内存</p>
                     * 
                     */
                    double GetRunningMem() const;

                    /**
                     * 设置<p>运行的内存</p>
                     * @param _runningMem <p>运行的内存</p>
                     * 
                     */
                    void SetRunningMem(const double& _runningMem);

                    /**
                     * 判断参数 RunningMem 是否已赋值
                     * @return RunningMem 是否已赋值
                     * 
                     */
                    bool RunningMemHasBeenSet() const;

                    /**
                     * 获取<p>setats集群</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Setats <p>setats集群</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Setats GetSetats() const;

                    /**
                     * 设置<p>setats集群</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _setats <p>setats集群</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSetats(const Setats& _setats);

                    /**
                     * 判断参数 Setats 是否已赋值
                     * @return Setats 是否已赋值
                     * 
                     */
                    bool SetatsHasBeenSet() const;

                    /**
                     * 获取<p>[]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Yarns <p>[]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<HadoopYarnItem> GetYarns() const;

                    /**
                     * 设置<p>[]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _yarns <p>[]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetYarns(const std::vector<HadoopYarnItem>& _yarns);

                    /**
                     * 判断参数 Yarns 是否已赋值
                     * @return Yarns 是否已赋值
                     * 
                     */
                    bool YarnsHasBeenSet() const;

                    /**
                     * 获取<p>0 单可用区 1多可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeploymentMode <p>0 单可用区 1多可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDeploymentMode() const;

                    /**
                     * 设置<p>0 单可用区 1多可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deploymentMode <p>0 单可用区 1多可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeploymentMode(const int64_t& _deploymentMode);

                    /**
                     * 判断参数 DeploymentMode 是否已赋值
                     * @return DeploymentMode 是否已赋值
                     * 
                     */
                    bool DeploymentModeHasBeenSet() const;

                    /**
                     * 获取<p>备可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SlaveZones <p>备可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SlaveZone> GetSlaveZones() const;

                    /**
                     * 设置<p>备可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _slaveZones <p>备可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSlaveZones(const std::vector<SlaveZone>& _slaveZones);

                    /**
                     * 判断参数 SlaveZones 是否已赋值
                     * @return SlaveZones 是否已赋值
                     * 
                     */
                    bool SlaveZonesHasBeenSet() const;

                    /**
                     * 获取<p>集群的日志cos存储</p>
                     * @return LogCOSBucket <p>集群的日志cos存储</p>
                     * 
                     */
                    std::string GetLogCOSBucket() const;

                    /**
                     * 设置<p>集群的日志cos存储</p>
                     * @param _logCOSBucket <p>集群的日志cos存储</p>
                     * 
                     */
                    void SetLogCOSBucket(const std::string& _logCOSBucket);

                    /**
                     * 判断参数 LogCOSBucket 是否已赋值
                     * @return LogCOSBucket 是否已赋值
                     * 
                     */
                    bool LogCOSBucketHasBeenSet() const;

                    /**
                     * 获取<p>Cdc集群Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CdcId <p>Cdc集群Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置<p>Cdc集群Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cdcId <p>Cdc集群Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                    /**
                     * 获取<p>集群进度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterProcessMsg <p>集群进度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterProcessMsg() const;

                    /**
                     * 设置<p>集群进度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterProcessMsg <p>集群进度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterProcessMsg(const std::string& _clusterProcessMsg);

                    /**
                     * 判断参数 ClusterProcessMsg 是否已赋值
                     * @return ClusterProcessMsg 是否已赋值
                     * 
                     */
                    bool ClusterProcessMsgHasBeenSet() const;

                    /**
                     * 获取<p>单作业最大可配置 CU 数</p>
                     * @return MaxCuPerJob <p>单作业最大可配置 CU 数</p>
                     * 
                     */
                    int64_t GetMaxCuPerJob() const;

                    /**
                     * 设置<p>单作业最大可配置 CU 数</p>
                     * @param _maxCuPerJob <p>单作业最大可配置 CU 数</p>
                     * 
                     */
                    void SetMaxCuPerJob(const int64_t& _maxCuPerJob);

                    /**
                     * 判断参数 MaxCuPerJob 是否已赋值
                     * @return MaxCuPerJob 是否已赋值
                     * 
                     */
                    bool MaxCuPerJobHasBeenSet() const;

                private:

                    /**
                     * <p>集群 ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>集群名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>用户 AppID</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>主账号 UIN</p>
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>创建者 UIN</p>
                     */
                    std::string m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * <p>集群状态, 1 未初始化,3 初始化中，2 运行中</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>集群创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>最后一次操作集群的时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>CU 数量</p>
                     */
                    uint64_t m_cuNum;
                    bool m_cuNumHasBeenSet;

                    /**
                     * <p>CU 内存规格</p>
                     */
                    uint64_t m_cuMem;
                    bool m_cuMemHasBeenSet;

                    /**
                     * <p>可用区</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>状态描述</p>
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * <p>网络</p>
                     */
                    std::vector<CCN> m_cCNs;
                    bool m_cCNsHasBeenSet;

                    /**
                     * <p>网络</p>
                     */
                    uint64_t m_netEnvironmentType;
                    bool m_netEnvironmentTypeHasBeenSet;

                    /**
                     * <p>空闲 CU</p>
                     */
                    int64_t m_freeCuNum;
                    bool m_freeCuNumHasBeenSet;

                    /**
                     * <p>集群绑定的标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>集群隔离时间; 没隔离时间，则为 -</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isolatedTime;
                    bool m_isolatedTimeHasBeenSet;

                    /**
                     * <p>集群过期时间; 没过期概念，则为 -</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>距离过期还有多少秒; 没过期概念，则为 -</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_secondsUntilExpiry;
                    bool m_secondsUntilExpiryHasBeenSet;

                    /**
                     * <p>自动续费标记，0 表示默认状态 (用户未设置，即初始状态，用户开通了预付费不停服特权会进行自动续费)， 1 表示自动续费，2表示明确不自动续费(用户设置)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>集群的默认 COS 存储桶</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_defaultCOSBucket;
                    bool m_defaultCOSBucketHasBeenSet;

                    /**
                     * <p>集群的CLS 日志集 LogSet</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cLSLogSet;
                    bool m_cLSLogSetHasBeenSet;

                    /**
                     * <p>集群的CLS 日志主题 TopicId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cLSTopicId;
                    bool m_cLSTopicIdHasBeenSet;

                    /**
                     * <p>集群的CLS 日志集  名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cLSLogName;
                    bool m_cLSLogNameHasBeenSet;

                    /**
                     * <p>集群的CLS 日志主题  名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cLSTopicName;
                    bool m_cLSTopicNameHasBeenSet;

                    /**
                     * <p>集群的版本信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClusterVersion m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>细粒度资源下的空闲CU</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_freeCu;
                    bool m_freeCuHasBeenSet;

                    /**
                     * <p>集群的默认日志采集配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_defaultLogCollectConf;
                    bool m_defaultLogCollectConfHasBeenSet;

                    /**
                     * <p>取值：0-没有设置，1-已设置，2-不允许设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_customizedDNSEnabled;
                    bool m_customizedDNSEnabledHasBeenSet;

                    /**
                     * <p>空间信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WorkSpaceClusterItem> m_correlations;
                    bool m_correlationsHasBeenSet;

                    /**
                     * <p>运行CU</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_runningCu;
                    bool m_runningCuHasBeenSet;

                    /**
                     * <p>0 后付费,1 预付费</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>前端区分 集群是否需要2CU逻辑 因为历史集群 变配不需要, default 1  新集群都需要</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isNeedManageNode;
                    bool m_isNeedManageNodeHasBeenSet;

                    /**
                     * <p>session集群信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ClusterSession> m_clusterSessions;
                    bool m_clusterSessionsHasBeenSet;

                    /**
                     * <p>V3版本 = 2</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_archGeneration;
                    bool m_archGenerationHasBeenSet;

                    /**
                     * <p>0:TKE, 1:EKS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * <p>订单信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Order> m_orders;
                    bool m_ordersHasBeenSet;

                    /**
                     * <p>Gateway信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SqlGatewayItem> m_sqlGateways;
                    bool m_sqlGatewaysHasBeenSet;

                    /**
                     * <p>0 公网访问 // 1 内网访问</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_webUIType;
                    bool m_webUITypeHasBeenSet;

                    /**
                     * <p>2 独享集群</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>子eks集群</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SubEks m_subEks;
                    bool m_subEksHasBeenSet;

                    /**
                     * <p>上级集群</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_agentSerialId;
                    bool m_agentSerialIdHasBeenSet;

                    /**
                     * <p>资源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>集群类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_billingResourceMode;
                    bool m_billingResourceModeHasBeenSet;

                    /**
                     * <p>Cu比例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_memRatio;
                    bool m_memRatioHasBeenSet;

                    /**
                     * <p>是否开启跨租户弹性网卡</p>
                     */
                    int64_t m_crossTenantEniMode;
                    bool m_crossTenantEniModeHasBeenSet;

                    /**
                     * <p>总的CPU</p>
                     */
                    double m_totalCpu;
                    bool m_totalCpuHasBeenSet;

                    /**
                     * <p>总的内存</p>
                     */
                    double m_totalMem;
                    bool m_totalMemHasBeenSet;

                    /**
                     * <p>运行的CPU</p>
                     */
                    double m_runningCpu;
                    bool m_runningCpuHasBeenSet;

                    /**
                     * <p>运行的内存</p>
                     */
                    double m_runningMem;
                    bool m_runningMemHasBeenSet;

                    /**
                     * <p>setats集群</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Setats m_setats;
                    bool m_setatsHasBeenSet;

                    /**
                     * <p>[]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<HadoopYarnItem> m_yarns;
                    bool m_yarnsHasBeenSet;

                    /**
                     * <p>0 单可用区 1多可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_deploymentMode;
                    bool m_deploymentModeHasBeenSet;

                    /**
                     * <p>备可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SlaveZone> m_slaveZones;
                    bool m_slaveZonesHasBeenSet;

                    /**
                     * <p>集群的日志cos存储</p>
                     */
                    std::string m_logCOSBucket;
                    bool m_logCOSBucketHasBeenSet;

                    /**
                     * <p>Cdc集群Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                    /**
                     * <p>集群进度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterProcessMsg;
                    bool m_clusterProcessMsgHasBeenSet;

                    /**
                     * <p>单作业最大可配置 CU 数</p>
                     */
                    int64_t m_maxCuPerJob;
                    bool m_maxCuPerJobHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_CLUSTER_H_
