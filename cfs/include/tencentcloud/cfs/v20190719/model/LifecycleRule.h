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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_LIFECYCLERULE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_LIFECYCLERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 生命周期管理策略关联的管理规则
                */
                class LifecycleRule : public AbstractModel
                {
                public:
                    LifecycleRule();
                    ~LifecycleRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据转储后的存储类型。其中：InfrequentAccess：低频介质存储；ColdStorage：冷存储。
                     * @return StorageType 数据转储后的存储类型。其中：InfrequentAccess：低频介质存储；ColdStorage：冷存储。
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置数据转储后的存储类型。其中：InfrequentAccess：低频介质存储；ColdStorage：冷存储。
                     * @param _storageType 数据转储后的存储类型。其中：InfrequentAccess：低频介质存储；ColdStorage：冷存储。
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取数据转储文件类型。其中，BIG_FILE：超大文件；STD_FILE：普通文件；SMALL_FILE：小文件；ALL：所有文件。
                     * @return FileType 数据转储文件类型。其中，BIG_FILE：超大文件；STD_FILE：普通文件；SMALL_FILE：小文件；ALL：所有文件。
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置数据转储文件类型。其中，BIG_FILE：超大文件；STD_FILE：普通文件；SMALL_FILE：小文件；ALL：所有文件。
                     * @param _fileType 数据转储文件类型。其中，BIG_FILE：超大文件；STD_FILE：普通文件；SMALL_FILE：小文件；ALL：所有文件。
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取数据转储行为。其中，Archive：沉降；Noarchive：不沉降。
                     * @return Action 数据转储行为。其中，Archive：沉降；Noarchive：不沉降。
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置数据转储行为。其中，Archive：沉降；Noarchive：不沉降。
                     * @param _action 数据转储行为。其中，Archive：沉降；Noarchive：不沉降。
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取数据转储触发时间。由“DEFAULT_ATIME_”与“数字”组成，单位为天。当 Action 为 Noarchive，请保持为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Interval 数据转储触发时间。由“DEFAULT_ATIME_”与“数字”组成，单位为天。当 Action 为 Noarchive，请保持为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置数据转储触发时间。由“DEFAULT_ATIME_”与“数字”组成，单位为天。当 Action 为 Noarchive，请保持为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _interval 数据转储触发时间。由“DEFAULT_ATIME_”与“数字”组成，单位为天。当 Action 为 Noarchive，请保持为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取数据转储文件最大规格。其数值需使用“数字+单位”格式进行表示，单位支持K（KiB）、M（MiB）、G（GiB）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileMaxSize 数据转储文件最大规格。其数值需使用“数字+单位”格式进行表示，单位支持K（KiB）、M（MiB）、G（GiB）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileMaxSize() const;

                    /**
                     * 设置数据转储文件最大规格。其数值需使用“数字+单位”格式进行表示，单位支持K（KiB）、M（MiB）、G（GiB）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileMaxSize 数据转储文件最大规格。其数值需使用“数字+单位”格式进行表示，单位支持K（KiB）、M（MiB）、G（GiB）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileMaxSize(const std::string& _fileMaxSize);

                    /**
                     * 判断参数 FileMaxSize 是否已赋值
                     * @return FileMaxSize 是否已赋值
                     * 
                     */
                    bool FileMaxSizeHasBeenSet() const;

                    /**
                     * 获取数据转储文件最小规格。其数值需使用“数字+单位”格式进行表示，单位支持K（KiB）、M（MiB）、G（GiB）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileMinSize 数据转储文件最小规格。其数值需使用“数字+单位”格式进行表示，单位支持K（KiB）、M（MiB）、G（GiB）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileMinSize() const;

                    /**
                     * 设置数据转储文件最小规格。其数值需使用“数字+单位”格式进行表示，单位支持K（KiB）、M（MiB）、G（GiB）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileMinSize 数据转储文件最小规格。其数值需使用“数字+单位”格式进行表示，单位支持K（KiB）、M（MiB）、G（GiB）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileMinSize(const std::string& _fileMinSize);

                    /**
                     * 判断参数 FileMinSize 是否已赋值
                     * @return FileMinSize 是否已赋值
                     * 
                     */
                    bool FileMinSizeHasBeenSet() const;

                    /**
                     * 获取策略类型
                     * @return PolicyType 策略类型
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置策略类型
                     * @param _policyType 策略类型
                     * 
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取阈值范围[10-90]
                     * @return ExpireThreshold 阈值范围[10-90]
                     * 
                     */
                    uint64_t GetExpireThreshold() const;

                    /**
                     * 设置阈值范围[10-90]
                     * @param _expireThreshold 阈值范围[10-90]
                     * 
                     */
                    void SetExpireThreshold(const uint64_t& _expireThreshold);

                    /**
                     * 判断参数 ExpireThreshold 是否已赋值
                     * @return ExpireThreshold 是否已赋值
                     * 
                     */
                    bool ExpireThresholdHasBeenSet() const;

                    /**
                     * 获取阈值范围[10-90]
                     * @return TargetThreshold 阈值范围[10-90]
                     * 
                     */
                    uint64_t GetTargetThreshold() const;

                    /**
                     * 设置阈值范围[10-90]
                     * @param _targetThreshold 阈值范围[10-90]
                     * 
                     */
                    void SetTargetThreshold(const uint64_t& _targetThreshold);

                    /**
                     * 判断参数 TargetThreshold 是否已赋值
                     * @return TargetThreshold 是否已赋值
                     * 
                     */
                    bool TargetThresholdHasBeenSet() const;

                    /**
                     * 获取当CFSTurbo内的文件和外置存储存在同名情况时，是否覆盖。

ture：覆盖

false：不覆盖（同时也不会释放热存数据）

为空时，默认为false
                     * @return IsOverwrite 当CFSTurbo内的文件和外置存储存在同名情况时，是否覆盖。

ture：覆盖

false：不覆盖（同时也不会释放热存数据）

为空时，默认为false
                     * 
                     */
                    bool GetIsOverwrite() const;

                    /**
                     * 设置当CFSTurbo内的文件和外置存储存在同名情况时，是否覆盖。

ture：覆盖

false：不覆盖（同时也不会释放热存数据）

为空时，默认为false
                     * @param _isOverwrite 当CFSTurbo内的文件和外置存储存在同名情况时，是否覆盖。

ture：覆盖

false：不覆盖（同时也不会释放热存数据）

为空时，默认为false
                     * 
                     */
                    void SetIsOverwrite(const bool& _isOverwrite);

                    /**
                     * 判断参数 IsOverwrite 是否已赋值
                     * @return IsOverwrite 是否已赋值
                     * 
                     */
                    bool IsOverwriteHasBeenSet() const;

                private:

                    /**
                     * 数据转储后的存储类型。其中：InfrequentAccess：低频介质存储；ColdStorage：冷存储。
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 数据转储文件类型。其中，BIG_FILE：超大文件；STD_FILE：普通文件；SMALL_FILE：小文件；ALL：所有文件。
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 数据转储行为。其中，Archive：沉降；Noarchive：不沉降。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 数据转储触发时间。由“DEFAULT_ATIME_”与“数字”组成，单位为天。当 Action 为 Noarchive，请保持为空。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 数据转储文件最大规格。其数值需使用“数字+单位”格式进行表示，单位支持K（KiB）、M（MiB）、G（GiB）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileMaxSize;
                    bool m_fileMaxSizeHasBeenSet;

                    /**
                     * 数据转储文件最小规格。其数值需使用“数字+单位”格式进行表示，单位支持K（KiB）、M（MiB）、G（GiB）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileMinSize;
                    bool m_fileMinSizeHasBeenSet;

                    /**
                     * 策略类型
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * 阈值范围[10-90]
                     */
                    uint64_t m_expireThreshold;
                    bool m_expireThresholdHasBeenSet;

                    /**
                     * 阈值范围[10-90]
                     */
                    uint64_t m_targetThreshold;
                    bool m_targetThresholdHasBeenSet;

                    /**
                     * 当CFSTurbo内的文件和外置存储存在同名情况时，是否覆盖。

ture：覆盖

false：不覆盖（同时也不会释放热存数据）

为空时，默认为false
                     */
                    bool m_isOverwrite;
                    bool m_isOverwriteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_LIFECYCLERULE_H_
