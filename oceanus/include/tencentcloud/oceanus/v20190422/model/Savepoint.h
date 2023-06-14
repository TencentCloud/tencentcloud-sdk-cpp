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
                     * 获取主键
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 主键
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置主键
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 主键
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
                     * 获取版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionId 版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetVersionId() const;

                    /**
                     * 设置版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionId 版本号
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
                     * 获取状态 1: Active; 2: Expired; 3: InProgress; 4: Failed; 5: Timeout
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态 1: Active; 2: Expired; 3: InProgress; 4: Failed; 5: Timeout
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态 1: Active; 2: Expired; 3: InProgress; 4: Failed; 5: Timeout
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态 1: Active; 2: Expired; 3: InProgress; 4: Failed; 5: Timeout
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
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
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
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
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
                     * 获取路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Path 路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _path 路径
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
                     * 获取大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Size 大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _size 大小
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
                     * 获取快照类型 1: savepoint；2: checkpoint；3: cancelWithSavepoint
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordType 快照类型 1: savepoint；2: checkpoint；3: cancelWithSavepoint
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRecordType() const;

                    /**
                     * 设置快照类型 1: savepoint；2: checkpoint；3: cancelWithSavepoint
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recordType 快照类型 1: savepoint；2: checkpoint；3: cancelWithSavepoint
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
                     * 获取运行作业实例的顺序 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobRuntimeId 运行作业实例的顺序 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetJobRuntimeId() const;

                    /**
                     * 设置运行作业实例的顺序 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobRuntimeId 运行作业实例的顺序 ID
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
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述
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
                     * 获取固定超时时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timeout 固定超时时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置固定超时时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeout 固定超时时间
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
                     * 获取快照 serialId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SerialId 快照 serialId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSerialId() const;

                    /**
                     * 设置快照 serialId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serialId 快照 serialId
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
                     * 获取耗时
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeConsuming 耗时
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimeConsuming() const;

                    /**
                     * 设置耗时
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeConsuming 耗时
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
                     * 获取快照路径状态 1：可用；2：不可用；
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PathStatus 快照路径状态 1：可用；2：不可用；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPathStatus() const;

                    /**
                     * 设置快照路径状态 1：可用；2：不可用；
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pathStatus 快照路径状态 1：可用；2：不可用；
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

                private:

                    /**
                     * 主键
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * 状态 1: Active; 2: Expired; 3: InProgress; 4: Failed; 5: Timeout
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 快照类型 1: savepoint；2: checkpoint；3: cancelWithSavepoint
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_recordType;
                    bool m_recordTypeHasBeenSet;

                    /**
                     * 运行作业实例的顺序 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_jobRuntimeId;
                    bool m_jobRuntimeIdHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 固定超时时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 快照 serialId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serialId;
                    bool m_serialIdHasBeenSet;

                    /**
                     * 耗时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timeConsuming;
                    bool m_timeConsumingHasBeenSet;

                    /**
                     * 快照路径状态 1：可用；2：不可用；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pathStatus;
                    bool m_pathStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_SAVEPOINT_H_
