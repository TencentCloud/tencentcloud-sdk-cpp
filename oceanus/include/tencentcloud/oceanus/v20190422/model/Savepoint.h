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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_SAVEPOINT_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_SAVEPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * 描述Savepoint信息
                */
                class Savepoint : public AbstractModel
                {
                public:
                    Savepoint();
                    ~Savepoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>主键</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id <p>主键</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>主键</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id <p>主键</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionId <p>版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetVersionId() const;

                    /**
                     * 设置<p>版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionId <p>版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersionId(const int64_t& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取<p>状态 1: Active; 2: Expired; 3: InProgress; 4: Failed; 5: Timeout</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>状态 1: Active; 2: Expired; 3: InProgress; 4: Failed; 5: Timeout</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>状态 1: Active; 2: Expired; 3: InProgress; 4: Failed; 5: Timeout</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>状态 1: Active; 2: Expired; 3: InProgress; 4: Failed; 5: Timeout</p>
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
                     * 获取<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Path <p>路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _path <p>路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>大小</p><p>单位：Byte</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Size <p>大小</p><p>单位：Byte</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置<p>大小</p><p>单位：Byte</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _size <p>大小</p><p>单位：Byte</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取<p>快照类型 1: savepoint；2: checkpoint；3: cancelWithSavepoint</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordType <p>快照类型 1: savepoint；2: checkpoint；3: cancelWithSavepoint</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRecordType() const;

                    /**
                     * 设置<p>快照类型 1: savepoint；2: checkpoint；3: cancelWithSavepoint</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recordType <p>快照类型 1: savepoint；2: checkpoint；3: cancelWithSavepoint</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecordType(const int64_t& _recordType);

                    /**
                     * 判断参数 RecordType 是否已赋值
                     * @return RecordType 是否已赋值
                     * 
                     */
                    bool RecordTypeHasBeenSet() const;

                    /**
                     * 获取<p>运行作业实例的顺序 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobRuntimeId <p>运行作业实例的顺序 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetJobRuntimeId() const;

                    /**
                     * 设置<p>运行作业实例的顺序 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobRuntimeId <p>运行作业实例的顺序 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobRuntimeId(const int64_t& _jobRuntimeId);

                    /**
                     * 判断参数 JobRuntimeId 是否已赋值
                     * @return JobRuntimeId 是否已赋值
                     * 
                     */
                    bool JobRuntimeIdHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>固定超时时间</p><p>单位：毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timeout <p>固定超时时间</p><p>单位：毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置<p>固定超时时间</p><p>单位：毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeout <p>固定超时时间</p><p>单位：毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取<p>快照 serialId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SerialId <p>快照 serialId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSerialId() const;

                    /**
                     * 设置<p>快照 serialId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serialId <p>快照 serialId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSerialId(const std::string& _serialId);

                    /**
                     * 判断参数 SerialId 是否已赋值
                     * @return SerialId 是否已赋值
                     * 
                     */
                    bool SerialIdHasBeenSet() const;

                    /**
                     * 获取<p>耗时</p><p>单位：毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeConsuming <p>耗时</p><p>单位：毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimeConsuming() const;

                    /**
                     * 设置<p>耗时</p><p>单位：毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeConsuming <p>耗时</p><p>单位：毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeConsuming(const int64_t& _timeConsuming);

                    /**
                     * 判断参数 TimeConsuming 是否已赋值
                     * @return TimeConsuming 是否已赋值
                     * 
                     */
                    bool TimeConsumingHasBeenSet() const;

                    /**
                     * 获取<p>快照路径状态 1：可用；2：不可用；</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PathStatus <p>快照路径状态 1：可用；2：不可用；</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPathStatus() const;

                    /**
                     * 设置<p>快照路径状态 1：可用；2：不可用；</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pathStatus <p>快照路径状态 1：可用；2：不可用；</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPathStatus(const int64_t& _pathStatus);

                    /**
                     * 判断参数 PathStatus 是否已赋值
                     * @return PathStatus 是否已赋值
                     * 
                     */
                    bool PathStatusHasBeenSet() const;

                    /**
                     * 获取<p>Flink版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlinkVersion <p>Flink版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFlinkVersion() const;

                    /**
                     * 设置<p>Flink版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _flinkVersion <p>Flink版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFlinkVersion(const std::string& _flinkVersion);

                    /**
                     * 判断参数 FlinkVersion 是否已赋值
                     * @return FlinkVersion 是否已赋值
                     * 
                     */
                    bool FlinkVersionHasBeenSet() const;

                    /**
                     * 获取<p>CheckPoint是否增量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsIncremental <p>CheckPoint是否增量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIsIncremental() const;

                    /**
                     * 设置<p>CheckPoint是否增量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isIncremental <p>CheckPoint是否增量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsIncremental(const std::string& _isIncremental);

                    /**
                     * 判断参数 IsIncremental 是否已赋值
                     * @return IsIncremental 是否已赋值
                     * 
                     */
                    bool IsIncrementalHasBeenSet() const;

                    /**
                     * 获取<p>checkpoint 大小</p><p>单位：Byte</p>
                     * @return CheckpointSize <p>checkpoint 大小</p><p>单位：Byte</p>
                     * 
                     */
                    int64_t GetCheckpointSize() const;

                    /**
                     * 设置<p>checkpoint 大小</p><p>单位：Byte</p>
                     * @param _checkpointSize <p>checkpoint 大小</p><p>单位：Byte</p>
                     * 
                     */
                    void SetCheckpointSize(const int64_t& _checkpointSize);

                    /**
                     * 判断参数 CheckpointSize 是否已赋值
                     * @return CheckpointSize 是否已赋值
                     * 
                     */
                    bool CheckpointSizeHasBeenSet() const;

                private:

                    /**
                     * <p>主键</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * <p>状态 1: Active; 2: Expired; 3: InProgress; 4: Failed; 5: Timeout</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>大小</p><p>单位：Byte</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <p>快照类型 1: savepoint；2: checkpoint；3: cancelWithSavepoint</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_recordType;
                    bool m_recordTypeHasBeenSet;

                    /**
                     * <p>运行作业实例的顺序 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_jobRuntimeId;
                    bool m_jobRuntimeIdHasBeenSet;

                    /**
                     * <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>固定超时时间</p><p>单位：毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>快照 serialId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serialId;
                    bool m_serialIdHasBeenSet;

                    /**
                     * <p>耗时</p><p>单位：毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timeConsuming;
                    bool m_timeConsumingHasBeenSet;

                    /**
                     * <p>快照路径状态 1：可用；2：不可用；</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pathStatus;
                    bool m_pathStatusHasBeenSet;

                    /**
                     * <p>Flink版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_flinkVersion;
                    bool m_flinkVersionHasBeenSet;

                    /**
                     * <p>CheckPoint是否增量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isIncremental;
                    bool m_isIncrementalHasBeenSet;

                    /**
                     * <p>checkpoint 大小</p><p>单位：Byte</p>
                     */
                    int64_t m_checkpointSize;
                    bool m_checkpointSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_SAVEPOINT_H_
