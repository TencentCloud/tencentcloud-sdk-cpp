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
                     * 获取<p>数据转储后的存储类型。其中：InfrequentAccess：低频介质存储；ColdStorage：冷存储。</p>
                     * @return StorageType <p>数据转储后的存储类型。其中：InfrequentAccess：低频介质存储；ColdStorage：冷存储。</p>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>数据转储后的存储类型。其中：InfrequentAccess：低频介质存储；ColdStorage：冷存储。</p>
                     * @param _storageType <p>数据转储后的存储类型。其中：InfrequentAccess：低频介质存储；ColdStorage：冷存储。</p>
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
                     * 获取<p>数据转储文件类型。其中，BIG_FILE：超大文件；STD_FILE：普通文件；SMALL_FILE：小文件；ALL：所有文件。</p>
                     * @return FileType <p>数据转储文件类型。其中，BIG_FILE：超大文件；STD_FILE：普通文件；SMALL_FILE：小文件；ALL：所有文件。</p>
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置<p>数据转储文件类型。其中，BIG_FILE：超大文件；STD_FILE：普通文件；SMALL_FILE：小文件；ALL：所有文件。</p>
                     * @param _fileType <p>数据转储文件类型。其中，BIG_FILE：超大文件；STD_FILE：普通文件；SMALL_FILE：小文件；ALL：所有文件。</p>
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
                     * 获取<p>数据转储行为。其中，Archive：沉降；Noarchive：不沉降。</p>
                     * @return Action <p>数据转储行为。其中，Archive：沉降；Noarchive：不沉降。</p>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置<p>数据转储行为。其中，Archive：沉降；Noarchive：不沉降。</p>
                     * @param _action <p>数据转储行为。其中，Archive：沉降；Noarchive：不沉降。</p>
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
                     * 获取<p>数据转储触发时间。由“DEFAULT_ATIME_”与“数字”组成，单位为天。当 Action 为 Noarchive，请保持为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Interval <p>数据转储触发时间。由“DEFAULT_ATIME_”与“数字”组成，单位为天。当 Action 为 Noarchive，请保持为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置<p>数据转储触发时间。由“DEFAULT_ATIME_”与“数字”组成，单位为天。当 Action 为 Noarchive，请保持为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _interval <p>数据转储触发时间。由“DEFAULT_ATIME_”与“数字”组成，单位为天。当 Action 为 Noarchive，请保持为空。</p>
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
                     * 获取<p>数据转储文件最大规格。其数值需使用“数字+单位”格式进行表示，单位支持K（KiB）、M（MiB）、G（GiB）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileMaxSize <p>数据转储文件最大规格。其数值需使用“数字+单位”格式进行表示，单位支持K（KiB）、M（MiB）、G（GiB）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileMaxSize() const;

                    /**
                     * 设置<p>数据转储文件最大规格。其数值需使用“数字+单位”格式进行表示，单位支持K（KiB）、M（MiB）、G（GiB）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileMaxSize <p>数据转储文件最大规格。其数值需使用“数字+单位”格式进行表示，单位支持K（KiB）、M（MiB）、G（GiB）。</p>
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
                     * 获取<p>数据转储文件最小规格。其数值需使用“数字+单位”格式进行表示，单位支持K（KiB）、M（MiB）、G（GiB）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileMinSize <p>数据转储文件最小规格。其数值需使用“数字+单位”格式进行表示，单位支持K（KiB）、M（MiB）、G（GiB）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileMinSize() const;

                    /**
                     * 设置<p>数据转储文件最小规格。其数值需使用“数字+单位”格式进行表示，单位支持K（KiB）、M（MiB）、G（GiB）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileMinSize <p>数据转储文件最小规格。其数值需使用“数字+单位”格式进行表示，单位支持K（KiB）、M（MiB）、G（GiB）。</p>
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
                     * 获取<p>策略类型</p>
                     * @return PolicyType <p>策略类型</p>
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置<p>策略类型</p>
                     * @param _policyType <p>策略类型</p>
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
                     * 获取<p>阈值范围[10-90]</p>
                     * @return ExpireThreshold <p>阈值范围[10-90]</p>
                     * 
                     */
                    uint64_t GetExpireThreshold() const;

                    /**
                     * 设置<p>阈值范围[10-90]</p>
                     * @param _expireThreshold <p>阈值范围[10-90]</p>
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
                     * 获取<p>阈值范围[10-90]</p>
                     * @return TargetThreshold <p>阈值范围[10-90]</p>
                     * 
                     */
                    uint64_t GetTargetThreshold() const;

                    /**
                     * 设置<p>阈值范围[10-90]</p>
                     * @param _targetThreshold <p>阈值范围[10-90]</p>
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
                     * 获取<p>当CFSTurbo内的文件和外置存储存在同名情况时，是否覆盖。</p><p>ture：覆盖</p><p>false：不覆盖（同时也不会释放热存数据）</p><p>为空时，默认为false</p>
                     * @return IsOverwrite <p>当CFSTurbo内的文件和外置存储存在同名情况时，是否覆盖。</p><p>ture：覆盖</p><p>false：不覆盖（同时也不会释放热存数据）</p><p>为空时，默认为false</p>
                     * 
                     */
                    bool GetIsOverwrite() const;

                    /**
                     * 设置<p>当CFSTurbo内的文件和外置存储存在同名情况时，是否覆盖。</p><p>ture：覆盖</p><p>false：不覆盖（同时也不会释放热存数据）</p><p>为空时，默认为false</p>
                     * @param _isOverwrite <p>当CFSTurbo内的文件和外置存储存在同名情况时，是否覆盖。</p><p>ture：覆盖</p><p>false：不覆盖（同时也不会释放热存数据）</p><p>为空时，默认为false</p>
                     * 
                     */
                    void SetIsOverwrite(const bool& _isOverwrite);

                    /**
                     * 判断参数 IsOverwrite 是否已赋值
                     * @return IsOverwrite 是否已赋值
                     * 
                     */
                    bool IsOverwriteHasBeenSet() const;

                    /**
                     * 获取<p>新建文件是否近实时同步至 S3。true：近实时同步（30 秒内）/ false：基于策略配置时间同步。默认 false。仅当 StorageType=ExternalStorage 时生效</p>
                     * @return IsCreateRealTimeSync <p>新建文件是否近实时同步至 S3。true：近实时同步（30 秒内）/ false：基于策略配置时间同步。默认 false。仅当 StorageType=ExternalStorage 时生效</p>
                     * 
                     */
                    bool GetIsCreateRealTimeSync() const;

                    /**
                     * 设置<p>新建文件是否近实时同步至 S3。true：近实时同步（30 秒内）/ false：基于策略配置时间同步。默认 false。仅当 StorageType=ExternalStorage 时生效</p>
                     * @param _isCreateRealTimeSync <p>新建文件是否近实时同步至 S3。true：近实时同步（30 秒内）/ false：基于策略配置时间同步。默认 false。仅当 StorageType=ExternalStorage 时生效</p>
                     * 
                     */
                    void SetIsCreateRealTimeSync(const bool& _isCreateRealTimeSync);

                    /**
                     * 判断参数 IsCreateRealTimeSync 是否已赋值
                     * @return IsCreateRealTimeSync 是否已赋值
                     * 
                     */
                    bool IsCreateRealTimeSyncHasBeenSet() const;

                    /**
                     * 获取<p>修改文件是否近实时同步至 S3。true：近实时同步（30 秒内）/ false：基于策略配置时间同步。默认 false。仅当 StorageType=ExternalStorage 时生效。与 IsOverwrite 独立</p>
                     * @return IsModifyRealTimeSync <p>修改文件是否近实时同步至 S3。true：近实时同步（30 秒内）/ false：基于策略配置时间同步。默认 false。仅当 StorageType=ExternalStorage 时生效。与 IsOverwrite 独立</p>
                     * 
                     */
                    bool GetIsModifyRealTimeSync() const;

                    /**
                     * 设置<p>修改文件是否近实时同步至 S3。true：近实时同步（30 秒内）/ false：基于策略配置时间同步。默认 false。仅当 StorageType=ExternalStorage 时生效。与 IsOverwrite 独立</p>
                     * @param _isModifyRealTimeSync <p>修改文件是否近实时同步至 S3。true：近实时同步（30 秒内）/ false：基于策略配置时间同步。默认 false。仅当 StorageType=ExternalStorage 时生效。与 IsOverwrite 独立</p>
                     * 
                     */
                    void SetIsModifyRealTimeSync(const bool& _isModifyRealTimeSync);

                    /**
                     * 判断参数 IsModifyRealTimeSync 是否已赋值
                     * @return IsModifyRealTimeSync 是否已赋值
                     * 
                     */
                    bool IsModifyRealTimeSyncHasBeenSet() const;

                    /**
                     * 获取<p>删除文件是否同步至 S3。true：同步删除（30 秒内）/ false：不同步删除。默认 false。为 true 时要求目标 COS Bucket 已开启多版本。仅当 StorageType=ExternalStorage 时生效</p>
                     * @return IsSyncDelete <p>删除文件是否同步至 S3。true：同步删除（30 秒内）/ false：不同步删除。默认 false。为 true 时要求目标 COS Bucket 已开启多版本。仅当 StorageType=ExternalStorage 时生效</p>
                     * 
                     */
                    bool GetIsSyncDelete() const;

                    /**
                     * 设置<p>删除文件是否同步至 S3。true：同步删除（30 秒内）/ false：不同步删除。默认 false。为 true 时要求目标 COS Bucket 已开启多版本。仅当 StorageType=ExternalStorage 时生效</p>
                     * @param _isSyncDelete <p>删除文件是否同步至 S3。true：同步删除（30 秒内）/ false：不同步删除。默认 false。为 true 时要求目标 COS Bucket 已开启多版本。仅当 StorageType=ExternalStorage 时生效</p>
                     * 
                     */
                    void SetIsSyncDelete(const bool& _isSyncDelete);

                    /**
                     * 判断参数 IsSyncDelete 是否已赋值
                     * @return IsSyncDelete 是否已赋值
                     * 
                     */
                    bool IsSyncDeleteHasBeenSet() const;

                private:

                    /**
                     * <p>数据转储后的存储类型。其中：InfrequentAccess：低频介质存储；ColdStorage：冷存储。</p>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>数据转储文件类型。其中，BIG_FILE：超大文件；STD_FILE：普通文件；SMALL_FILE：小文件；ALL：所有文件。</p>
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * <p>数据转储行为。其中，Archive：沉降；Noarchive：不沉降。</p>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>数据转储触发时间。由“DEFAULT_ATIME_”与“数字”组成，单位为天。当 Action 为 Noarchive，请保持为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * <p>数据转储文件最大规格。其数值需使用“数字+单位”格式进行表示，单位支持K（KiB）、M（MiB）、G（GiB）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileMaxSize;
                    bool m_fileMaxSizeHasBeenSet;

                    /**
                     * <p>数据转储文件最小规格。其数值需使用“数字+单位”格式进行表示，单位支持K（KiB）、M（MiB）、G（GiB）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileMinSize;
                    bool m_fileMinSizeHasBeenSet;

                    /**
                     * <p>策略类型</p>
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * <p>阈值范围[10-90]</p>
                     */
                    uint64_t m_expireThreshold;
                    bool m_expireThresholdHasBeenSet;

                    /**
                     * <p>阈值范围[10-90]</p>
                     */
                    uint64_t m_targetThreshold;
                    bool m_targetThresholdHasBeenSet;

                    /**
                     * <p>当CFSTurbo内的文件和外置存储存在同名情况时，是否覆盖。</p><p>ture：覆盖</p><p>false：不覆盖（同时也不会释放热存数据）</p><p>为空时，默认为false</p>
                     */
                    bool m_isOverwrite;
                    bool m_isOverwriteHasBeenSet;

                    /**
                     * <p>新建文件是否近实时同步至 S3。true：近实时同步（30 秒内）/ false：基于策略配置时间同步。默认 false。仅当 StorageType=ExternalStorage 时生效</p>
                     */
                    bool m_isCreateRealTimeSync;
                    bool m_isCreateRealTimeSyncHasBeenSet;

                    /**
                     * <p>修改文件是否近实时同步至 S3。true：近实时同步（30 秒内）/ false：基于策略配置时间同步。默认 false。仅当 StorageType=ExternalStorage 时生效。与 IsOverwrite 独立</p>
                     */
                    bool m_isModifyRealTimeSync;
                    bool m_isModifyRealTimeSyncHasBeenSet;

                    /**
                     * <p>删除文件是否同步至 S3。true：同步删除（30 秒内）/ false：不同步删除。默认 false。为 true 时要求目标 COS Bucket 已开启多版本。仅当 StorageType=ExternalStorage 时生效</p>
                     */
                    bool m_isSyncDelete;
                    bool m_isSyncDeleteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_LIFECYCLERULE_H_
