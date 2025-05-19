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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_SNAPSHOTINFO_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_SNAPSHOTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/TagInfo.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 快照信息
                */
                class SnapshotInfo : public AbstractModel
                {
                public:
                    SnapshotInfo();
                    ~SnapshotInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取创建快照时间
                     * @return CreationTime 创建快照时间
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置创建快照时间
                     * @param _creationTime 创建快照时间
                     * 
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取快照名称
                     * @return SnapshotName 快照名称
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置快照名称
                     * @param _snapshotName 快照名称
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
                     * 获取快照ID
                     * @return SnapshotId 快照ID
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置快照ID
                     * @param _snapshotId 快照ID
                     * 
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     * 
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取快照状态，createing-创建中；available-运行中；deleting-删除中；rollbacking-new 创建新文件系统中；create-failed 创建失败
                     * @return Status 快照状态，createing-创建中；available-运行中；deleting-删除中；rollbacking-new 创建新文件系统中；create-failed 创建失败
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置快照状态，createing-创建中；available-运行中；deleting-删除中；rollbacking-new 创建新文件系统中；create-failed 创建失败
                     * @param _status 快照状态，createing-创建中；available-运行中；deleting-删除中；rollbacking-new 创建新文件系统中；create-failed 创建失败
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
                     * 获取地域名称
                     * @return RegionName 地域名称
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置地域名称
                     * @param _regionName 地域名称
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取文件系统ID
                     * @return FileSystemId 文件系统ID
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置文件系统ID
                     * @param _fileSystemId 文件系统ID
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取快照大小
                     * @return Size 快照大小
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置快照大小
                     * @param _size 快照大小
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取保留时长天
                     * @return AliveDay 保留时长天
                     * 
                     */
                    uint64_t GetAliveDay() const;

                    /**
                     * 设置保留时长天
                     * @param _aliveDay 保留时长天
                     * 
                     */
                    void SetAliveDay(const uint64_t& _aliveDay);

                    /**
                     * 判断参数 AliveDay 是否已赋值
                     * @return AliveDay 是否已赋值
                     * 
                     */
                    bool AliveDayHasBeenSet() const;

                    /**
                     * 获取快照进度百分比，1表示1% 范围1-100
                     * @return Percent 快照进度百分比，1表示1% 范围1-100
                     * 
                     */
                    uint64_t GetPercent() const;

                    /**
                     * 设置快照进度百分比，1表示1% 范围1-100
                     * @param _percent 快照进度百分比，1表示1% 范围1-100
                     * 
                     */
                    void SetPercent(const uint64_t& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取账号ID
                     * @return AppId 账号ID
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置账号ID
                     * @param _appId 账号ID
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
                     * 获取快照删除时间
                     * @return DeleteTime 快照删除时间
                     * 
                     */
                    std::string GetDeleteTime() const;

                    /**
                     * 设置快照删除时间
                     * @param _deleteTime 快照删除时间
                     * 
                     */
                    void SetDeleteTime(const std::string& _deleteTime);

                    /**
                     * 判断参数 DeleteTime 是否已赋值
                     * @return DeleteTime 是否已赋值
                     * 
                     */
                    bool DeleteTimeHasBeenSet() const;

                    /**
                     * 获取文件系统名称
                     * @return FsName 文件系统名称
                     * 
                     */
                    std::string GetFsName() const;

                    /**
                     * 设置文件系统名称
                     * @param _fsName 文件系统名称
                     * 
                     */
                    void SetFsName(const std::string& _fsName);

                    /**
                     * 判断参数 FsName 是否已赋值
                     * @return FsName 是否已赋值
                     * 
                     */
                    bool FsNameHasBeenSet() const;

                    /**
                     * 获取快照标签
                     * @return Tags 快照标签
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置快照标签
                     * @param _tags 快照标签
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取快照类型, general为通用系列快照，turbo为Turbo系列快照
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SnapshotType 快照类型, general为通用系列快照，turbo为Turbo系列快照
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSnapshotType() const;

                    /**
                     * 设置快照类型, general为通用系列快照，turbo为Turbo系列快照
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _snapshotType 快照类型, general为通用系列快照，turbo为Turbo系列快照
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSnapshotType(const std::string& _snapshotType);

                    /**
                     * 判断参数 SnapshotType 是否已赋值
                     * @return SnapshotType 是否已赋值
                     * 
                     */
                    bool SnapshotTypeHasBeenSet() const;

                    /**
                     * 获取实际快照时间，反应快照对应文件系统某个时刻的数据。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SnapshotTime 实际快照时间，反应快照对应文件系统某个时刻的数据。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSnapshotTime() const;

                    /**
                     * 设置实际快照时间，反应快照对应文件系统某个时刻的数据。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _snapshotTime 实际快照时间，反应快照对应文件系统某个时刻的数据。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSnapshotTime(const std::string& _snapshotTime);

                    /**
                     * 判断参数 SnapshotTime 是否已赋值
                     * @return SnapshotTime 是否已赋值
                     * 
                     */
                    bool SnapshotTimeHasBeenSet() const;

                private:

                    /**
                     * 创建快照时间
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 快照名称
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * 快照ID
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * 快照状态，createing-创建中；available-运行中；deleting-删除中；rollbacking-new 创建新文件系统中；create-failed 创建失败
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 地域名称
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 文件系统ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 快照大小
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 保留时长天
                     */
                    uint64_t m_aliveDay;
                    bool m_aliveDayHasBeenSet;

                    /**
                     * 快照进度百分比，1表示1% 范围1-100
                     */
                    uint64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * 账号ID
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 快照删除时间
                     */
                    std::string m_deleteTime;
                    bool m_deleteTimeHasBeenSet;

                    /**
                     * 文件系统名称
                     */
                    std::string m_fsName;
                    bool m_fsNameHasBeenSet;

                    /**
                     * 快照标签
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 快照类型, general为通用系列快照，turbo为Turbo系列快照
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_snapshotType;
                    bool m_snapshotTypeHasBeenSet;

                    /**
                     * 实际快照时间，反应快照对应文件系统某个时刻的数据。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_snapshotTime;
                    bool m_snapshotTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_SNAPSHOTINFO_H_
