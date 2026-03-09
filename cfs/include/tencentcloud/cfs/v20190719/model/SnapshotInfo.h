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
                     * 获取<p>创建快照时间</p>
                     * @return CreationTime <p>创建快照时间</p>
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置<p>创建快照时间</p>
                     * @param _creationTime <p>创建快照时间</p>
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
                     * 获取<p>快照名称</p>
                     * @return SnapshotName <p>快照名称</p>
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置<p>快照名称</p>
                     * @param _snapshotName <p>快照名称</p>
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
                     * 获取<p>快照ID</p>
                     * @return SnapshotId <p>快照ID</p>
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置<p>快照ID</p>
                     * @param _snapshotId <p>快照ID</p>
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
                     * 获取<p>快照状态，creating-创建中；available-运行中；deleting-删除中；rollbacking-new 创建新文件系统中；create-failed 创建失败</p>
                     * @return Status <p>快照状态，creating-创建中；available-运行中；deleting-删除中；rollbacking-new 创建新文件系统中；create-failed 创建失败</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>快照状态，creating-创建中；available-运行中；deleting-删除中；rollbacking-new 创建新文件系统中；create-failed 创建失败</p>
                     * @param _status <p>快照状态，creating-创建中；available-运行中；deleting-删除中；rollbacking-new 创建新文件系统中；create-failed 创建失败</p>
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
                     * 获取<p>地域名称</p>
                     * @return RegionName <p>地域名称</p>
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置<p>地域名称</p>
                     * @param _regionName <p>地域名称</p>
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
                     * 获取<p>文件系统ID</p>
                     * @return FileSystemId <p>文件系统ID</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>文件系统ID</p>
                     * @param _fileSystemId <p>文件系统ID</p>
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
                     * 获取<p>快照大小</p><p>单位：MiB</p>
                     * @return Size <p>快照大小</p><p>单位：MiB</p>
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置<p>快照大小</p><p>单位：MiB</p>
                     * @param _size <p>快照大小</p><p>单位：MiB</p>
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
                     * 获取<p>保留时长天</p>
                     * @return AliveDay <p>保留时长天</p>
                     * 
                     */
                    uint64_t GetAliveDay() const;

                    /**
                     * 设置<p>保留时长天</p>
                     * @param _aliveDay <p>保留时长天</p>
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
                     * 获取<p>快照进度百分比，1表示1% 范围1-100</p>
                     * @return Percent <p>快照进度百分比，1表示1% 范围1-100</p>
                     * 
                     */
                    uint64_t GetPercent() const;

                    /**
                     * 设置<p>快照进度百分比，1表示1% 范围1-100</p>
                     * @param _percent <p>快照进度百分比，1表示1% 范围1-100</p>
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
                     * 获取<p>账号ID</p>
                     * @return AppId <p>账号ID</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>账号ID</p>
                     * @param _appId <p>账号ID</p>
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
                     * 获取<p>快照删除时间</p>
                     * @return DeleteTime <p>快照删除时间</p>
                     * 
                     */
                    std::string GetDeleteTime() const;

                    /**
                     * 设置<p>快照删除时间</p>
                     * @param _deleteTime <p>快照删除时间</p>
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
                     * 获取<p>文件系统名称</p>
                     * @return FsName <p>文件系统名称</p>
                     * 
                     */
                    std::string GetFsName() const;

                    /**
                     * 设置<p>文件系统名称</p>
                     * @param _fsName <p>文件系统名称</p>
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
                     * 获取<p>快照标签</p>
                     * @return Tags <p>快照标签</p>
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置<p>快照标签</p>
                     * @param _tags <p>快照标签</p>
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
                     * 获取<p>快照类型，general为通用系列快照，turbo为Turbo系列快照</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SnapshotType <p>快照类型，general为通用系列快照，turbo为Turbo系列快照</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSnapshotType() const;

                    /**
                     * 设置<p>快照类型，general为通用系列快照，turbo为Turbo系列快照</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _snapshotType <p>快照类型，general为通用系列快照，turbo为Turbo系列快照</p>
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
                     * 获取<p>实际快照时间，反映快照对应文件系统某个时刻的数据。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SnapshotTime <p>实际快照时间，反映快照对应文件系统某个时刻的数据。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSnapshotTime() const;

                    /**
                     * 设置<p>实际快照时间，反映快照对应文件系统某个时刻的数据。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _snapshotTime <p>实际快照时间，反映快照对应文件系统某个时刻的数据。</p>
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
                     * <p>创建快照时间</p>
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * <p>快照名称</p>
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * <p>快照ID</p>
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * <p>快照状态，creating-创建中；available-运行中；deleting-删除中；rollbacking-new 创建新文件系统中；create-failed 创建失败</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>地域名称</p>
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * <p>文件系统ID</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>快照大小</p><p>单位：MiB</p>
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <p>保留时长天</p>
                     */
                    uint64_t m_aliveDay;
                    bool m_aliveDayHasBeenSet;

                    /**
                     * <p>快照进度百分比，1表示1% 范围1-100</p>
                     */
                    uint64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * <p>账号ID</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>快照删除时间</p>
                     */
                    std::string m_deleteTime;
                    bool m_deleteTimeHasBeenSet;

                    /**
                     * <p>文件系统名称</p>
                     */
                    std::string m_fsName;
                    bool m_fsNameHasBeenSet;

                    /**
                     * <p>快照标签</p>
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>快照类型，general为通用系列快照，turbo为Turbo系列快照</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_snapshotType;
                    bool m_snapshotTypeHasBeenSet;

                    /**
                     * <p>实际快照时间，反映快照对应文件系统某个时刻的数据。</p>
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
