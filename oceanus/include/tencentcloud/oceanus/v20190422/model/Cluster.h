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
                     * 获取集群 ID
                     * @return ClusterId 集群 ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群 ID
                     * @param ClusterId 集群 ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取集群名称
                     * @return Name 集群名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置集群名称
                     * @param Name 集群名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Region 地域
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param Region 地域
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取用户 AppID
                     * @return AppId 用户 AppID
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置用户 AppID
                     * @param AppId 用户 AppID
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取主账号 UIN
                     * @return OwnerUin 主账号 UIN
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置主账号 UIN
                     * @param OwnerUin 主账号 UIN
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取创建者 UIN
                     * @return CreatorUin 创建者 UIN
                     */
                    std::string GetCreatorUin() const;

                    /**
                     * 设置创建者 UIN
                     * @param CreatorUin 创建者 UIN
                     */
                    void SetCreatorUin(const std::string& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     */
                    bool CreatorUinHasBeenSet() const;

                    /**
                     * 获取集群状态, 1 未初始化,，3 初始化中，2 运行中
                     * @return Status 集群状态, 1 未初始化,，3 初始化中，2 运行中
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置集群状态, 1 未初始化,，3 初始化中，2 运行中
                     * @param Status 集群状态, 1 未初始化,，3 初始化中，2 运行中
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Remark 描述
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置描述
                     * @param Remark 描述
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取集群创建时间
                     * @return CreateTime 集群创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置集群创建时间
                     * @param CreateTime 集群创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取最后一次操作集群的时间
                     * @return UpdateTime 最后一次操作集群的时间
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置最后一次操作集群的时间
                     * @param UpdateTime 最后一次操作集群的时间
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取CU 数量
                     * @return CuNum CU 数量
                     */
                    uint64_t GetCuNum() const;

                    /**
                     * 设置CU 数量
                     * @param CuNum CU 数量
                     */
                    void SetCuNum(const uint64_t& _cuNum);

                    /**
                     * 判断参数 CuNum 是否已赋值
                     * @return CuNum 是否已赋值
                     */
                    bool CuNumHasBeenSet() const;

                    /**
                     * 获取CU 内存规格
                     * @return CuMem CU 内存规格
                     */
                    uint64_t GetCuMem() const;

                    /**
                     * 设置CU 内存规格
                     * @param CuMem CU 内存规格
                     */
                    void SetCuMem(const uint64_t& _cuMem);

                    /**
                     * 判断参数 CuMem 是否已赋值
                     * @return CuMem 是否已赋值
                     */
                    bool CuMemHasBeenSet() const;

                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param Zone 可用区
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取状态描述
                     * @return StatusDesc 状态描述
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置状态描述
                     * @param StatusDesc 状态描述
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取网络
                     * @return CCNs 网络
                     */
                    std::vector<CCN> GetCCNs() const;

                    /**
                     * 设置网络
                     * @param CCNs 网络
                     */
                    void SetCCNs(const std::vector<CCN>& _cCNs);

                    /**
                     * 判断参数 CCNs 是否已赋值
                     * @return CCNs 是否已赋值
                     */
                    bool CCNsHasBeenSet() const;

                    /**
                     * 获取网络
                     * @return NetEnvironmentType 网络
                     */
                    uint64_t GetNetEnvironmentType() const;

                    /**
                     * 设置网络
                     * @param NetEnvironmentType 网络
                     */
                    void SetNetEnvironmentType(const uint64_t& _netEnvironmentType);

                    /**
                     * 判断参数 NetEnvironmentType 是否已赋值
                     * @return NetEnvironmentType 是否已赋值
                     */
                    bool NetEnvironmentTypeHasBeenSet() const;

                    /**
                     * 获取空闲 CU
                     * @return FreeCuNum 空闲 CU
                     */
                    int64_t GetFreeCuNum() const;

                    /**
                     * 设置空闲 CU
                     * @param FreeCuNum 空闲 CU
                     */
                    void SetFreeCuNum(const int64_t& _freeCuNum);

                    /**
                     * 判断参数 FreeCuNum 是否已赋值
                     * @return FreeCuNum 是否已赋值
                     */
                    bool FreeCuNumHasBeenSet() const;

                    /**
                     * 获取集群绑定的标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 集群绑定的标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置集群绑定的标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tags 集群绑定的标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取集群隔离时间; 没隔离时间，则为 -
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsolatedTime 集群隔离时间; 没隔离时间，则为 -
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIsolatedTime() const;

                    /**
                     * 设置集群隔离时间; 没隔离时间，则为 -
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsolatedTime 集群隔离时间; 没隔离时间，则为 -
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsolatedTime(const std::string& _isolatedTime);

                    /**
                     * 判断参数 IsolatedTime 是否已赋值
                     * @return IsolatedTime 是否已赋值
                     */
                    bool IsolatedTimeHasBeenSet() const;

                    /**
                     * 获取集群过期时间; 没过期概念，则为 -
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime 集群过期时间; 没过期概念，则为 -
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置集群过期时间; 没过期概念，则为 -
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExpireTime 集群过期时间; 没过期概念，则为 -
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取距离过期还有多少秒; 没过期概念，则为 -
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecondsUntilExpiry 距离过期还有多少秒; 没过期概念，则为 -
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSecondsUntilExpiry() const;

                    /**
                     * 设置距离过期还有多少秒; 没过期概念，则为 -
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SecondsUntilExpiry 距离过期还有多少秒; 没过期概念，则为 -
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSecondsUntilExpiry(const std::string& _secondsUntilExpiry);

                    /**
                     * 判断参数 SecondsUntilExpiry 是否已赋值
                     * @return SecondsUntilExpiry 是否已赋值
                     */
                    bool SecondsUntilExpiryHasBeenSet() const;

                    /**
                     * 获取自动续费标记，0 表示默认状态 (用户未设置，即初始状态，用户开通了预付费不停服特权会进行自动续费)， 1 表示自动续费，2表示明确不自动续费(用户设置)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoRenewFlag 自动续费标记，0 表示默认状态 (用户未设置，即初始状态，用户开通了预付费不停服特权会进行自动续费)， 1 表示自动续费，2表示明确不自动续费(用户设置)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费标记，0 表示默认状态 (用户未设置，即初始状态，用户开通了预付费不停服特权会进行自动续费)， 1 表示自动续费，2表示明确不自动续费(用户设置)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AutoRenewFlag 自动续费标记，0 表示默认状态 (用户未设置，即初始状态，用户开通了预付费不停服特权会进行自动续费)， 1 表示自动续费，2表示明确不自动续费(用户设置)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取集群的默认 COS 存储桶
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultCOSBucket 集群的默认 COS 存储桶
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDefaultCOSBucket() const;

                    /**
                     * 设置集群的默认 COS 存储桶
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DefaultCOSBucket 集群的默认 COS 存储桶
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDefaultCOSBucket(const std::string& _defaultCOSBucket);

                    /**
                     * 判断参数 DefaultCOSBucket 是否已赋值
                     * @return DefaultCOSBucket 是否已赋值
                     */
                    bool DefaultCOSBucketHasBeenSet() const;

                    /**
                     * 获取集群的CLS 日志集 LogSet
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CLSLogSet 集群的CLS 日志集 LogSet
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCLSLogSet() const;

                    /**
                     * 设置集群的CLS 日志集 LogSet
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CLSLogSet 集群的CLS 日志集 LogSet
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCLSLogSet(const std::string& _cLSLogSet);

                    /**
                     * 判断参数 CLSLogSet 是否已赋值
                     * @return CLSLogSet 是否已赋值
                     */
                    bool CLSLogSetHasBeenSet() const;

                    /**
                     * 获取集群的CLS 日志主题 TopicId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CLSTopicId 集群的CLS 日志主题 TopicId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCLSTopicId() const;

                    /**
                     * 设置集群的CLS 日志主题 TopicId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CLSTopicId 集群的CLS 日志主题 TopicId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCLSTopicId(const std::string& _cLSTopicId);

                    /**
                     * 判断参数 CLSTopicId 是否已赋值
                     * @return CLSTopicId 是否已赋值
                     */
                    bool CLSTopicIdHasBeenSet() const;

                    /**
                     * 获取集群的CLS 日志集  名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CLSLogName 集群的CLS 日志集  名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCLSLogName() const;

                    /**
                     * 设置集群的CLS 日志集  名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CLSLogName 集群的CLS 日志集  名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCLSLogName(const std::string& _cLSLogName);

                    /**
                     * 判断参数 CLSLogName 是否已赋值
                     * @return CLSLogName 是否已赋值
                     */
                    bool CLSLogNameHasBeenSet() const;

                    /**
                     * 获取集群的CLS 日志主题  名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CLSTopicName 集群的CLS 日志主题  名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCLSTopicName() const;

                    /**
                     * 设置集群的CLS 日志主题  名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CLSTopicName 集群的CLS 日志主题  名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCLSTopicName(const std::string& _cLSTopicName);

                    /**
                     * 判断参数 CLSTopicName 是否已赋值
                     * @return CLSTopicName 是否已赋值
                     */
                    bool CLSTopicNameHasBeenSet() const;

                    /**
                     * 获取集群的版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version 集群的版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClusterVersion GetVersion() const;

                    /**
                     * 设置集群的版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Version 集群的版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVersion(const ClusterVersion& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取细粒度资源下的空闲CU
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FreeCu 细粒度资源下的空闲CU
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetFreeCu() const;

                    /**
                     * 设置细粒度资源下的空闲CU
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FreeCu 细粒度资源下的空闲CU
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFreeCu(const double& _freeCu);

                    /**
                     * 判断参数 FreeCu 是否已赋值
                     * @return FreeCu 是否已赋值
                     */
                    bool FreeCuHasBeenSet() const;

                    /**
                     * 获取集群的默认日志采集配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultLogCollectConf 集群的默认日志采集配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDefaultLogCollectConf() const;

                    /**
                     * 设置集群的默认日志采集配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DefaultLogCollectConf 集群的默认日志采集配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDefaultLogCollectConf(const std::string& _defaultLogCollectConf);

                    /**
                     * 判断参数 DefaultLogCollectConf 是否已赋值
                     * @return DefaultLogCollectConf 是否已赋值
                     */
                    bool DefaultLogCollectConfHasBeenSet() const;

                    /**
                     * 获取取值：0-没有设置，1-已设置，2-不允许设置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomizedDNSEnabled 取值：0-没有设置，1-已设置，2-不允许设置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetCustomizedDNSEnabled() const;

                    /**
                     * 设置取值：0-没有设置，1-已设置，2-不允许设置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CustomizedDNSEnabled 取值：0-没有设置，1-已设置，2-不允许设置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCustomizedDNSEnabled(const int64_t& _customizedDNSEnabled);

                    /**
                     * 判断参数 CustomizedDNSEnabled 是否已赋值
                     * @return CustomizedDNSEnabled 是否已赋值
                     */
                    bool CustomizedDNSEnabledHasBeenSet() const;

                    /**
                     * 获取空间信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Correlations 空间信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WorkSpaceClusterItem> GetCorrelations() const;

                    /**
                     * 设置空间信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Correlations 空间信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCorrelations(const std::vector<WorkSpaceClusterItem>& _correlations);

                    /**
                     * 判断参数 Correlations 是否已赋值
                     * @return Correlations 是否已赋值
                     */
                    bool CorrelationsHasBeenSet() const;

                    /**
                     * 获取运行CU
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunningCu 运行CU
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetRunningCu() const;

                    /**
                     * 设置运行CU
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RunningCu 运行CU
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRunningCu(const double& _runningCu);

                    /**
                     * 判断参数 RunningCu 是否已赋值
                     * @return RunningCu 是否已赋值
                     */
                    bool RunningCuHasBeenSet() const;

                    /**
                     * 获取0 后付费,1 预付费
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayMode 0 后付费,1 预付费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置0 后付费,1 预付费
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PayMode 0 后付费,1 预付费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取前端区分 集群是否需要2CU逻辑 因为历史集群 变配不需要, default 1  新集群都需要
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsNeedManageNode 前端区分 集群是否需要2CU逻辑 因为历史集群 变配不需要, default 1  新集群都需要
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetIsNeedManageNode() const;

                    /**
                     * 设置前端区分 集群是否需要2CU逻辑 因为历史集群 变配不需要, default 1  新集群都需要
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsNeedManageNode 前端区分 集群是否需要2CU逻辑 因为历史集群 变配不需要, default 1  新集群都需要
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsNeedManageNode(const int64_t& _isNeedManageNode);

                    /**
                     * 判断参数 IsNeedManageNode 是否已赋值
                     * @return IsNeedManageNode 是否已赋值
                     */
                    bool IsNeedManageNodeHasBeenSet() const;

                    /**
                     * 获取session集群信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterSessions session集群信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ClusterSession> GetClusterSessions() const;

                    /**
                     * 设置session集群信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterSessions session集群信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterSessions(const std::vector<ClusterSession>& _clusterSessions);

                    /**
                     * 判断参数 ClusterSessions 是否已赋值
                     * @return ClusterSessions 是否已赋值
                     */
                    bool ClusterSessionsHasBeenSet() const;

                private:

                    /**
                     * 集群 ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 用户 AppID
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 主账号 UIN
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 创建者 UIN
                     */
                    std::string m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * 集群状态, 1 未初始化,，3 初始化中，2 运行中
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 集群创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最后一次操作集群的时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * CU 数量
                     */
                    uint64_t m_cuNum;
                    bool m_cuNumHasBeenSet;

                    /**
                     * CU 内存规格
                     */
                    uint64_t m_cuMem;
                    bool m_cuMemHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 状态描述
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 网络
                     */
                    std::vector<CCN> m_cCNs;
                    bool m_cCNsHasBeenSet;

                    /**
                     * 网络
                     */
                    uint64_t m_netEnvironmentType;
                    bool m_netEnvironmentTypeHasBeenSet;

                    /**
                     * 空闲 CU
                     */
                    int64_t m_freeCuNum;
                    bool m_freeCuNumHasBeenSet;

                    /**
                     * 集群绑定的标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 集群隔离时间; 没隔离时间，则为 -
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isolatedTime;
                    bool m_isolatedTimeHasBeenSet;

                    /**
                     * 集群过期时间; 没过期概念，则为 -
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 距离过期还有多少秒; 没过期概念，则为 -
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_secondsUntilExpiry;
                    bool m_secondsUntilExpiryHasBeenSet;

                    /**
                     * 自动续费标记，0 表示默认状态 (用户未设置，即初始状态，用户开通了预付费不停服特权会进行自动续费)， 1 表示自动续费，2表示明确不自动续费(用户设置)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 集群的默认 COS 存储桶
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_defaultCOSBucket;
                    bool m_defaultCOSBucketHasBeenSet;

                    /**
                     * 集群的CLS 日志集 LogSet
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cLSLogSet;
                    bool m_cLSLogSetHasBeenSet;

                    /**
                     * 集群的CLS 日志主题 TopicId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cLSTopicId;
                    bool m_cLSTopicIdHasBeenSet;

                    /**
                     * 集群的CLS 日志集  名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cLSLogName;
                    bool m_cLSLogNameHasBeenSet;

                    /**
                     * 集群的CLS 日志主题  名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cLSTopicName;
                    bool m_cLSTopicNameHasBeenSet;

                    /**
                     * 集群的版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClusterVersion m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 细粒度资源下的空闲CU
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_freeCu;
                    bool m_freeCuHasBeenSet;

                    /**
                     * 集群的默认日志采集配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_defaultLogCollectConf;
                    bool m_defaultLogCollectConfHasBeenSet;

                    /**
                     * 取值：0-没有设置，1-已设置，2-不允许设置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_customizedDNSEnabled;
                    bool m_customizedDNSEnabledHasBeenSet;

                    /**
                     * 空间信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WorkSpaceClusterItem> m_correlations;
                    bool m_correlationsHasBeenSet;

                    /**
                     * 运行CU
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_runningCu;
                    bool m_runningCuHasBeenSet;

                    /**
                     * 0 后付费,1 预付费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 前端区分 集群是否需要2CU逻辑 因为历史集群 变配不需要, default 1  新集群都需要
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isNeedManageNode;
                    bool m_isNeedManageNodeHasBeenSet;

                    /**
                     * session集群信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ClusterSession> m_clusterSessions;
                    bool m_clusterSessionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_CLUSTER_H_
