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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_SNAPSHOTS_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_SNAPSHOTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/Failures.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 集群快照数据结构
                */
                class Snapshots : public AbstractModel
                {
                public:
                    Snapshots();
                    ~Snapshots() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>快照名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SnapshotName <p>快照名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置<p>快照名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _snapshotName <p>快照名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSnapshotName(const std::string& _snapshotName);

                    /**
                     * 判断参数 SnapshotName 是否已赋值
                     * @return SnapshotName 是否已赋值
                     * 
                     */
                    bool SnapshotNameHasBeenSet() const;

                    /**
                     * 获取<p>快照Uuid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uuid <p>快照Uuid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置<p>快照Uuid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uuid <p>快照Uuid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取<p>仓库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Repository <p>仓库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRepository() const;

                    /**
                     * 设置<p>仓库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _repository <p>仓库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRepository(const std::string& _repository);

                    /**
                     * 判断参数 Repository 是否已赋值
                     * @return Repository 是否已赋值
                     * 
                     */
                    bool RepositoryHasBeenSet() const;

                    /**
                     * 获取<p>该快照所属集群的版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version <p>该快照所属集群的版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>该快照所属集群的版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version <p>该快照所属集群的版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>备份的索引列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Indices <p>备份的索引列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetIndices() const;

                    /**
                     * 设置<p>备份的索引列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indices <p>备份的索引列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndices(const std::vector<std::string>& _indices);

                    /**
                     * 判断参数 Indices 是否已赋值
                     * @return Indices 是否已赋值
                     * 
                     */
                    bool IndicesHasBeenSet() const;

                    /**
                     * 获取<p>备份的datastream列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataStreams <p>备份的datastream列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDataStreams() const;

                    /**
                     * 设置<p>备份的datastream列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataStreams <p>备份的datastream列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataStreams(const std::vector<std::string>& _dataStreams);

                    /**
                     * 判断参数 DataStreams 是否已赋值
                     * @return DataStreams 是否已赋值
                     * 
                     */
                    bool DataStreamsHasBeenSet() const;

                    /**
                     * 获取<p>备份的状态</p><p>FAILED            备份失败</p><p>IN_PROGRESS 备份执行中</p><p>PARTIAL          备份部分成功，部分失败，备份失败的索引和原因会在Failures字段中展示</p><p>SUCCESS     备份成功</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return State <p>备份的状态</p><p>FAILED            备份失败</p><p>IN_PROGRESS 备份执行中</p><p>PARTIAL          备份部分成功，部分失败，备份失败的索引和原因会在Failures字段中展示</p><p>SUCCESS     备份成功</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置<p>备份的状态</p><p>FAILED            备份失败</p><p>IN_PROGRESS 备份执行中</p><p>PARTIAL          备份部分成功，部分失败，备份失败的索引和原因会在Failures字段中展示</p><p>SUCCESS     备份成功</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _state <p>备份的状态</p><p>FAILED            备份失败</p><p>IN_PROGRESS 备份执行中</p><p>PARTIAL          备份部分成功，部分失败，备份失败的索引和原因会在Failures字段中展示</p><p>SUCCESS     备份成功</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取<p>快照备份的开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime <p>快照备份的开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>快照备份的开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime <p>快照备份的开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>快照备份的结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime <p>快照备份的结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>快照备份的结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime <p>快照备份的结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>快照备份的耗时时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DurationInMillis <p>快照备份的耗时时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDurationInMillis() const;

                    /**
                     * 设置<p>快照备份的耗时时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _durationInMillis <p>快照备份的耗时时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDurationInMillis(const int64_t& _durationInMillis);

                    /**
                     * 判断参数 DurationInMillis 是否已赋值
                     * @return DurationInMillis 是否已赋值
                     * 
                     */
                    bool DurationInMillisHasBeenSet() const;

                    /**
                     * 获取<p>备份的总分片数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalShards <p>备份的总分片数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalShards() const;

                    /**
                     * 设置<p>备份的总分片数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalShards <p>备份的总分片数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalShards(const int64_t& _totalShards);

                    /**
                     * 判断参数 TotalShards 是否已赋值
                     * @return TotalShards 是否已赋值
                     * 
                     */
                    bool TotalShardsHasBeenSet() const;

                    /**
                     * 获取<p>备份失败的分片数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailedShards <p>备份失败的分片数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFailedShards() const;

                    /**
                     * 设置<p>备份失败的分片数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failedShards <p>备份失败的分片数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailedShards(const int64_t& _failedShards);

                    /**
                     * 判断参数 FailedShards 是否已赋值
                     * @return FailedShards 是否已赋值
                     * 
                     */
                    bool FailedShardsHasBeenSet() const;

                    /**
                     * 获取<p>备份成功的分片数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuccessfulShards <p>备份成功的分片数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSuccessfulShards() const;

                    /**
                     * 设置<p>备份成功的分片数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _successfulShards <p>备份成功的分片数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSuccessfulShards(const int64_t& _successfulShards);

                    /**
                     * 判断参数 SuccessfulShards 是否已赋值
                     * @return SuccessfulShards 是否已赋值
                     * 
                     */
                    bool SuccessfulShardsHasBeenSet() const;

                    /**
                     * 获取<p>备份失败的索引分片和失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Failures <p>备份失败的索引分片和失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Failures> GetFailures() const;

                    /**
                     * 设置<p>备份失败的索引分片和失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failures <p>备份失败的索引分片和失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailures(const std::vector<Failures>& _failures);

                    /**
                     * 判断参数 Failures 是否已赋值
                     * @return Failures 是否已赋值
                     * 
                     */
                    bool FailuresHasBeenSet() const;

                    /**
                     * 获取<p>是否用户备份</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserBackUp <p>是否用户备份</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserBackUp() const;

                    /**
                     * 设置<p>是否用户备份</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userBackUp <p>是否用户备份</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserBackUp(const std::string& _userBackUp);

                    /**
                     * 判断参数 UserBackUp 是否已赋值
                     * @return UserBackUp 是否已赋值
                     * 
                     */
                    bool UserBackUpHasBeenSet() const;

                    /**
                     * 获取<p>0 腾讯云仓库; 1 客户仓库</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EsRepositoryType <p>0 腾讯云仓库; 1 客户仓库</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetEsRepositoryType() const;

                    /**
                     * 设置<p>0 腾讯云仓库; 1 客户仓库</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _esRepositoryType <p>0 腾讯云仓库; 1 客户仓库</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEsRepositoryType(const uint64_t& _esRepositoryType);

                    /**
                     * 判断参数 EsRepositoryType 是否已赋值
                     * @return EsRepositoryType 是否已赋值
                     * 
                     */
                    bool EsRepositoryTypeHasBeenSet() const;

                    /**
                     * 获取<p>托管快照仓库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaasEsRepository <p>托管快照仓库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaasEsRepository() const;

                    /**
                     * 设置<p>托管快照仓库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paasEsRepository <p>托管快照仓库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPaasEsRepository(const std::string& _paasEsRepository);

                    /**
                     * 判断参数 PaasEsRepository 是否已赋值
                     * @return PaasEsRepository 是否已赋值
                     * 
                     */
                    bool PaasEsRepositoryHasBeenSet() const;

                    /**
                     * 获取<p>客户快照仓库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserEsRepository <p>客户快照仓库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserEsRepository() const;

                    /**
                     * 设置<p>客户快照仓库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userEsRepository <p>客户快照仓库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserEsRepository(const std::string& _userEsRepository);

                    /**
                     * 判断参数 UserEsRepository 是否已赋值
                     * @return UserEsRepository 是否已赋值
                     * 
                     */
                    bool UserEsRepositoryHasBeenSet() const;

                    /**
                     * 获取<p>快照存储周期 单位天，范围[0, INF), 如果没有设置则默认7天</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageDuration <p>快照存储周期 单位天，范围[0, INF), 如果没有设置则默认7天</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStorageDuration() const;

                    /**
                     * 设置<p>快照存储周期 单位天，范围[0, INF), 如果没有设置则默认7天</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageDuration <p>快照存储周期 单位天，范围[0, INF), 如果没有设置则默认7天</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorageDuration(const uint64_t& _storageDuration);

                    /**
                     * 判断参数 StorageDuration 是否已赋值
                     * @return StorageDuration 是否已赋值
                     * 
                     */
                    bool StorageDurationHasBeenSet() const;

                    /**
                     * 获取<p>自动备份频率, 如果是0,则等效24</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoBackupInterval <p>自动备份频率, 如果是0,则等效24</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAutoBackupInterval() const;

                    /**
                     * 设置<p>自动备份频率, 如果是0,则等效24</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoBackupInterval <p>自动备份频率, 如果是0,则等效24</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoBackupInterval(const uint64_t& _autoBackupInterval);

                    /**
                     * 判断参数 AutoBackupInterval 是否已赋值
                     * @return AutoBackupInterval 是否已赋值
                     * 
                     */
                    bool AutoBackupIntervalHasBeenSet() const;

                    /**
                     * 获取<p>备份锁定 0 不锁定; 1 锁定</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosRetention <p>备份锁定 0 不锁定; 1 锁定</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCosRetention() const;

                    /**
                     * 设置<p>备份锁定 0 不锁定; 1 锁定</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosRetention <p>备份锁定 0 不锁定; 1 锁定</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCosRetention(const uint64_t& _cosRetention);

                    /**
                     * 判断参数 CosRetention 是否已赋值
                     * @return CosRetention 是否已赋值
                     * 
                     */
                    bool CosRetentionHasBeenSet() const;

                    /**
                     * 获取<p>锁定截止日期 2022-12-10T08:34:48.000Z</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetainUntilDate <p>锁定截止日期 2022-12-10T08:34:48.000Z</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRetainUntilDate() const;

                    /**
                     * 设置<p>锁定截止日期 2022-12-10T08:34:48.000Z</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retainUntilDate <p>锁定截止日期 2022-12-10T08:34:48.000Z</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRetainUntilDate(const std::string& _retainUntilDate);

                    /**
                     * 判断参数 RetainUntilDate 是否已赋值
                     * @return RetainUntilDate 是否已赋值
                     * 
                     */
                    bool RetainUntilDateHasBeenSet() const;

                    /**
                     * 获取<p>锁定宽限期,单位天</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetentionGraceTime <p>锁定宽限期,单位天</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRetentionGraceTime() const;

                    /**
                     * 设置<p>锁定宽限期,单位天</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retentionGraceTime <p>锁定宽限期,单位天</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRetentionGraceTime(const uint64_t& _retentionGraceTime);

                    /**
                     * 判断参数 RetentionGraceTime 是否已赋值
                     * @return RetentionGraceTime 是否已赋值
                     * 
                     */
                    bool RetentionGraceTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否已经备份锁定 0 不锁定; 1 锁定</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsLocked <p>是否已经备份锁定 0 不锁定; 1 锁定</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIsLocked() const;

                    /**
                     * 设置<p>是否已经备份锁定 0 不锁定; 1 锁定</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isLocked <p>是否已经备份锁定 0 不锁定; 1 锁定</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsLocked(const uint64_t& _isLocked);

                    /**
                     * 判断参数 IsLocked 是否已赋值
                     * @return IsLocked 是否已赋值
                     * 
                     */
                    bool IsLockedHasBeenSet() const;

                    /**
                     * 获取<p>跨地域备份 0 不跨地域; 1 跨地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RemoteCos <p>跨地域备份 0 不跨地域; 1 跨地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRemoteCos() const;

                    /**
                     * 设置<p>跨地域备份 0 不跨地域; 1 跨地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remoteCos <p>跨地域备份 0 不跨地域; 1 跨地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemoteCos(const uint64_t& _remoteCos);

                    /**
                     * 判断参数 RemoteCos 是否已赋值
                     * @return RemoteCos 是否已赋值
                     * 
                     */
                    bool RemoteCosHasBeenSet() const;

                    /**
                     * 获取<p>跨地域备份地域名称 ap-guangzhou</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RemoteCosRegion <p>跨地域备份地域名称 ap-guangzhou</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemoteCosRegion() const;

                    /**
                     * 设置<p>跨地域备份地域名称 ap-guangzhou</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remoteCosRegion <p>跨地域备份地域名称 ap-guangzhou</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemoteCosRegion(const std::string& _remoteCosRegion);

                    /**
                     * 判断参数 RemoteCosRegion 是否已赋值
                     * @return RemoteCosRegion 是否已赋值
                     * 
                     */
                    bool RemoteCosRegionHasBeenSet() const;

                    /**
                     * 获取<p>备份加密 0 不加密; 1 加密</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosEncryption <p>备份加密 0 不加密; 1 加密</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCosEncryption() const;

                    /**
                     * 设置<p>备份加密 0 不加密; 1 加密</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosEncryption <p>备份加密 0 不加密; 1 加密</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCosEncryption(const uint64_t& _cosEncryption);

                    /**
                     * 判断参数 CosEncryption 是否已赋值
                     * @return CosEncryption 是否已赋值
                     * 
                     */
                    bool CosEncryptionHasBeenSet() const;

                    /**
                     * 获取<p>kms密钥</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KmsKey <p>kms密钥</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKmsKey() const;

                    /**
                     * 设置<p>kms密钥</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kmsKey <p>kms密钥</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKmsKey(const std::string& _kmsKey);

                    /**
                     * 判断参数 KmsKey 是否已赋值
                     * @return KmsKey 是否已赋值
                     * 
                     */
                    bool KmsKeyHasBeenSet() const;

                    /**
                     * 获取<p>策略名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrategyName <p>策略名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置<p>策略名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _strategyName <p>策略名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStrategyName(const std::string& _strategyName);

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     * 
                     */
                    bool StrategyNameHasBeenSet() const;

                    /**
                     * 获取<p>cos多AZ备份 0 单AZ; 1 多AZ</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MultiAz <p>cos多AZ备份 0 单AZ; 1 多AZ</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMultiAz() const;

                    /**
                     * 设置<p>cos多AZ备份 0 单AZ; 1 多AZ</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _multiAz <p>cos多AZ备份 0 单AZ; 1 多AZ</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMultiAz(const uint64_t& _multiAz);

                    /**
                     * 判断参数 MultiAz 是否已赋值
                     * @return MultiAz 是否已赋值
                     * 
                     */
                    bool MultiAzHasBeenSet() const;

                    /**
                     * 获取<p>每节点写入仓库的最大速度 max_snapshot_bytes_per_sec, 默认40m</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxSnapshotPerSec <p>每节点写入仓库的最大速度 max_snapshot_bytes_per_sec, 默认40m</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMaxSnapshotPerSec() const;

                    /**
                     * 设置<p>每节点写入仓库的最大速度 max_snapshot_bytes_per_sec, 默认40m</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxSnapshotPerSec <p>每节点写入仓库的最大速度 max_snapshot_bytes_per_sec, 默认40m</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxSnapshotPerSec(const std::string& _maxSnapshotPerSec);

                    /**
                     * 判断参数 MaxSnapshotPerSec 是否已赋值
                     * @return MaxSnapshotPerSec 是否已赋值
                     * 
                     */
                    bool MaxSnapshotPerSecHasBeenSet() const;

                    /**
                     * 获取<p>实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId <p>实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId <p>实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * <p>快照名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * <p>快照Uuid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * <p>仓库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_repository;
                    bool m_repositoryHasBeenSet;

                    /**
                     * <p>该快照所属集群的版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>备份的索引列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_indices;
                    bool m_indicesHasBeenSet;

                    /**
                     * <p>备份的datastream列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_dataStreams;
                    bool m_dataStreamsHasBeenSet;

                    /**
                     * <p>备份的状态</p><p>FAILED            备份失败</p><p>IN_PROGRESS 备份执行中</p><p>PARTIAL          备份部分成功，部分失败，备份失败的索引和原因会在Failures字段中展示</p><p>SUCCESS     备份成功</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>快照备份的开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>快照备份的结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>快照备份的耗时时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_durationInMillis;
                    bool m_durationInMillisHasBeenSet;

                    /**
                     * <p>备份的总分片数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalShards;
                    bool m_totalShardsHasBeenSet;

                    /**
                     * <p>备份失败的分片数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_failedShards;
                    bool m_failedShardsHasBeenSet;

                    /**
                     * <p>备份成功的分片数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_successfulShards;
                    bool m_successfulShardsHasBeenSet;

                    /**
                     * <p>备份失败的索引分片和失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Failures> m_failures;
                    bool m_failuresHasBeenSet;

                    /**
                     * <p>是否用户备份</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userBackUp;
                    bool m_userBackUpHasBeenSet;

                    /**
                     * <p>0 腾讯云仓库; 1 客户仓库</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_esRepositoryType;
                    bool m_esRepositoryTypeHasBeenSet;

                    /**
                     * <p>托管快照仓库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paasEsRepository;
                    bool m_paasEsRepositoryHasBeenSet;

                    /**
                     * <p>客户快照仓库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userEsRepository;
                    bool m_userEsRepositoryHasBeenSet;

                    /**
                     * <p>快照存储周期 单位天，范围[0, INF), 如果没有设置则默认7天</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_storageDuration;
                    bool m_storageDurationHasBeenSet;

                    /**
                     * <p>自动备份频率, 如果是0,则等效24</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_autoBackupInterval;
                    bool m_autoBackupIntervalHasBeenSet;

                    /**
                     * <p>备份锁定 0 不锁定; 1 锁定</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_cosRetention;
                    bool m_cosRetentionHasBeenSet;

                    /**
                     * <p>锁定截止日期 2022-12-10T08:34:48.000Z</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_retainUntilDate;
                    bool m_retainUntilDateHasBeenSet;

                    /**
                     * <p>锁定宽限期,单位天</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_retentionGraceTime;
                    bool m_retentionGraceTimeHasBeenSet;

                    /**
                     * <p>是否已经备份锁定 0 不锁定; 1 锁定</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isLocked;
                    bool m_isLockedHasBeenSet;

                    /**
                     * <p>跨地域备份 0 不跨地域; 1 跨地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_remoteCos;
                    bool m_remoteCosHasBeenSet;

                    /**
                     * <p>跨地域备份地域名称 ap-guangzhou</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remoteCosRegion;
                    bool m_remoteCosRegionHasBeenSet;

                    /**
                     * <p>备份加密 0 不加密; 1 加密</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_cosEncryption;
                    bool m_cosEncryptionHasBeenSet;

                    /**
                     * <p>kms密钥</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kmsKey;
                    bool m_kmsKeyHasBeenSet;

                    /**
                     * <p>策略名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * <p>cos多AZ备份 0 单AZ; 1 多AZ</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_multiAz;
                    bool m_multiAzHasBeenSet;

                    /**
                     * <p>每节点写入仓库的最大速度 max_snapshot_bytes_per_sec, 默认40m</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_maxSnapshotPerSec;
                    bool m_maxSnapshotPerSecHasBeenSet;

                    /**
                     * <p>实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_SNAPSHOTS_H_
