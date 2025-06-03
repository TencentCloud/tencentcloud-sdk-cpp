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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_MIGRATIONTASKINFO_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_MIGRATIONTASKINFO_H_

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
                * CFS数据迁移任务信息
                */
                class MigrationTaskInfo : public AbstractModel
                {
                public:
                    MigrationTaskInfo();
                    ~MigrationTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取迁移任务名称
                     * @return TaskName 迁移任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置迁移任务名称
                     * @param _taskName 迁移任务名称
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取迁移任务id
                     * @return TaskId 迁移任务id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置迁移任务id
                     * @param _taskId 迁移任务id
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取迁移方式标志位，默认为0。0: 桶迁移；1: 清单迁移
                     * @return MigrationType 迁移方式标志位，默认为0。0: 桶迁移；1: 清单迁移
                     * 
                     */
                    uint64_t GetMigrationType() const;

                    /**
                     * 设置迁移方式标志位，默认为0。0: 桶迁移；1: 清单迁移
                     * @param _migrationType 迁移方式标志位，默认为0。0: 桶迁移；1: 清单迁移
                     * 
                     */
                    void SetMigrationType(const uint64_t& _migrationType);

                    /**
                     * 判断参数 MigrationType 是否已赋值
                     * @return MigrationType 是否已赋值
                     * 
                     */
                    bool MigrationTypeHasBeenSet() const;

                    /**
                     * 获取迁移模式，默认为0。0: 全量迁移
                     * @return MigrationMode 迁移模式，默认为0。0: 全量迁移
                     * 
                     */
                    uint64_t GetMigrationMode() const;

                    /**
                     * 设置迁移模式，默认为0。0: 全量迁移
                     * @param _migrationMode 迁移模式，默认为0。0: 全量迁移
                     * 
                     */
                    void SetMigrationMode(const uint64_t& _migrationMode);

                    /**
                     * 判断参数 MigrationMode 是否已赋值
                     * @return MigrationMode 是否已赋值
                     * 
                     */
                    bool MigrationModeHasBeenSet() const;

                    /**
                     * 获取数据源桶名称
                     * @return BucketName 数据源桶名称
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置数据源桶名称
                     * @param _bucketName 数据源桶名称
                     * 
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     * 
                     */
                    bool BucketNameHasBeenSet() const;

                    /**
                     * 获取数据源桶地域
                     * @return BucketRegion 数据源桶地域
                     * 
                     */
                    std::string GetBucketRegion() const;

                    /**
                     * 设置数据源桶地域
                     * @param _bucketRegion 数据源桶地域
                     * 
                     */
                    void SetBucketRegion(const std::string& _bucketRegion);

                    /**
                     * 判断参数 BucketRegion 是否已赋值
                     * @return BucketRegion 是否已赋值
                     * 
                     */
                    bool BucketRegionHasBeenSet() const;

                    /**
                     * 获取数据源桶地址
                     * @return BucketAddress 数据源桶地址
                     * 
                     */
                    std::string GetBucketAddress() const;

                    /**
                     * 设置数据源桶地址
                     * @param _bucketAddress 数据源桶地址
                     * 
                     */
                    void SetBucketAddress(const std::string& _bucketAddress);

                    /**
                     * 判断参数 BucketAddress 是否已赋值
                     * @return BucketAddress 是否已赋值
                     * 
                     */
                    bool BucketAddressHasBeenSet() const;

                    /**
                     * 获取清单地址
                     * @return ListAddress 清单地址
                     * 
                     */
                    std::string GetListAddress() const;

                    /**
                     * 设置清单地址
                     * @param _listAddress 清单地址
                     * 
                     */
                    void SetListAddress(const std::string& _listAddress);

                    /**
                     * 判断参数 ListAddress 是否已赋值
                     * @return ListAddress 是否已赋值
                     * 
                     */
                    bool ListAddressHasBeenSet() const;

                    /**
                     * 获取文件系统实例名称
                     * @return FsName 文件系统实例名称
                     * 
                     */
                    std::string GetFsName() const;

                    /**
                     * 设置文件系统实例名称
                     * @param _fsName 文件系统实例名称
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
                     * 获取文件系统实例Id
                     * @return FileSystemId 文件系统实例Id
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置文件系统实例Id
                     * @param _fileSystemId 文件系统实例Id
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
                     * 获取文件系统路径
                     * @return FsPath 文件系统路径
                     * 
                     */
                    std::string GetFsPath() const;

                    /**
                     * 设置文件系统路径
                     * @param _fsPath 文件系统路径
                     * 
                     */
                    void SetFsPath(const std::string& _fsPath);

                    /**
                     * 判断参数 FsPath 是否已赋值
                     * @return FsPath 是否已赋值
                     * 
                     */
                    bool FsPathHasBeenSet() const;

                    /**
                     * 获取同名文件迁移时覆盖策略，默认为0。0: 最后修改时间优先；1: 全覆盖；2: 不覆盖
                     * @return CoverType 同名文件迁移时覆盖策略，默认为0。0: 最后修改时间优先；1: 全覆盖；2: 不覆盖
                     * 
                     */
                    uint64_t GetCoverType() const;

                    /**
                     * 设置同名文件迁移时覆盖策略，默认为0。0: 最后修改时间优先；1: 全覆盖；2: 不覆盖
                     * @param _coverType 同名文件迁移时覆盖策略，默认为0。0: 最后修改时间优先；1: 全覆盖；2: 不覆盖
                     * 
                     */
                    void SetCoverType(const uint64_t& _coverType);

                    /**
                     * 判断参数 CoverType 是否已赋值
                     * @return CoverType 是否已赋值
                     * 
                     */
                    bool CoverTypeHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取完成/终止时间
                     * @return EndTime 完成/终止时间
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置完成/终止时间
                     * @param _endTime 完成/终止时间
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取迁移状态。0: 已完成；1: 创建中；2: 运行中；3: 终止中；4: 已终止；5: 创建失败；6: 运行失败；7: 结束中；8: 删除中；9: 等待中
                     * @return Status 迁移状态。0: 已完成；1: 创建中；2: 运行中；3: 终止中；4: 已终止；5: 创建失败；6: 运行失败；7: 结束中；8: 删除中；9: 等待中
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置迁移状态。0: 已完成；1: 创建中；2: 运行中；3: 终止中；4: 已终止；5: 创建失败；6: 运行失败；7: 结束中；8: 删除中；9: 等待中
                     * @param _status 迁移状态。0: 已完成；1: 创建中；2: 运行中；3: 终止中；4: 已终止；5: 创建失败；6: 运行失败；7: 结束中；8: 删除中；9: 等待中
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取文件数量
                     * @return FileTotalCount 文件数量
                     * 
                     */
                    uint64_t GetFileTotalCount() const;

                    /**
                     * 设置文件数量
                     * @param _fileTotalCount 文件数量
                     * 
                     */
                    void SetFileTotalCount(const uint64_t& _fileTotalCount);

                    /**
                     * 判断参数 FileTotalCount 是否已赋值
                     * @return FileTotalCount 是否已赋值
                     * 
                     */
                    bool FileTotalCountHasBeenSet() const;

                    /**
                     * 获取已迁移文件数量
                     * @return FileMigratedCount 已迁移文件数量
                     * 
                     */
                    uint64_t GetFileMigratedCount() const;

                    /**
                     * 设置已迁移文件数量
                     * @param _fileMigratedCount 已迁移文件数量
                     * 
                     */
                    void SetFileMigratedCount(const uint64_t& _fileMigratedCount);

                    /**
                     * 判断参数 FileMigratedCount 是否已赋值
                     * @return FileMigratedCount 是否已赋值
                     * 
                     */
                    bool FileMigratedCountHasBeenSet() const;

                    /**
                     * 获取迁移失败文件数量
                     * @return FileFailedCount 迁移失败文件数量
                     * 
                     */
                    uint64_t GetFileFailedCount() const;

                    /**
                     * 设置迁移失败文件数量
                     * @param _fileFailedCount 迁移失败文件数量
                     * 
                     */
                    void SetFileFailedCount(const uint64_t& _fileFailedCount);

                    /**
                     * 判断参数 FileFailedCount 是否已赋值
                     * @return FileFailedCount 是否已赋值
                     * 
                     */
                    bool FileFailedCountHasBeenSet() const;

                    /**
                     * 获取文件容量，单位Byte
                     * @return FileTotalSize 文件容量，单位Byte
                     * 
                     */
                    int64_t GetFileTotalSize() const;

                    /**
                     * 设置文件容量，单位Byte
                     * @param _fileTotalSize 文件容量，单位Byte
                     * 
                     */
                    void SetFileTotalSize(const int64_t& _fileTotalSize);

                    /**
                     * 判断参数 FileTotalSize 是否已赋值
                     * @return FileTotalSize 是否已赋值
                     * 
                     */
                    bool FileTotalSizeHasBeenSet() const;

                    /**
                     * 获取已迁移文件容量，单位Byte
                     * @return FileMigratedSize 已迁移文件容量，单位Byte
                     * 
                     */
                    int64_t GetFileMigratedSize() const;

                    /**
                     * 设置已迁移文件容量，单位Byte
                     * @param _fileMigratedSize 已迁移文件容量，单位Byte
                     * 
                     */
                    void SetFileMigratedSize(const int64_t& _fileMigratedSize);

                    /**
                     * 判断参数 FileMigratedSize 是否已赋值
                     * @return FileMigratedSize 是否已赋值
                     * 
                     */
                    bool FileMigratedSizeHasBeenSet() const;

                    /**
                     * 获取迁移失败文件容量，单位Byte
                     * @return FileFailedSize 迁移失败文件容量，单位Byte
                     * 
                     */
                    int64_t GetFileFailedSize() const;

                    /**
                     * 设置迁移失败文件容量，单位Byte
                     * @param _fileFailedSize 迁移失败文件容量，单位Byte
                     * 
                     */
                    void SetFileFailedSize(const int64_t& _fileFailedSize);

                    /**
                     * 判断参数 FileFailedSize 是否已赋值
                     * @return FileFailedSize 是否已赋值
                     * 
                     */
                    bool FileFailedSizeHasBeenSet() const;

                    /**
                     * 获取全部清单
                     * @return FileTotalList 全部清单
                     * 
                     */
                    std::string GetFileTotalList() const;

                    /**
                     * 设置全部清单
                     * @param _fileTotalList 全部清单
                     * 
                     */
                    void SetFileTotalList(const std::string& _fileTotalList);

                    /**
                     * 判断参数 FileTotalList 是否已赋值
                     * @return FileTotalList 是否已赋值
                     * 
                     */
                    bool FileTotalListHasBeenSet() const;

                    /**
                     * 获取已完成文件清单
                     * @return FileCompletedList 已完成文件清单
                     * 
                     */
                    std::string GetFileCompletedList() const;

                    /**
                     * 设置已完成文件清单
                     * @param _fileCompletedList 已完成文件清单
                     * 
                     */
                    void SetFileCompletedList(const std::string& _fileCompletedList);

                    /**
                     * 判断参数 FileCompletedList 是否已赋值
                     * @return FileCompletedList 是否已赋值
                     * 
                     */
                    bool FileCompletedListHasBeenSet() const;

                    /**
                     * 获取失败文件清单
                     * @return FileFailedList 失败文件清单
                     * 
                     */
                    std::string GetFileFailedList() const;

                    /**
                     * 设置失败文件清单
                     * @param _fileFailedList 失败文件清单
                     * 
                     */
                    void SetFileFailedList(const std::string& _fileFailedList);

                    /**
                     * 判断参数 FileFailedList 是否已赋值
                     * @return FileFailedList 是否已赋值
                     * 
                     */
                    bool FileFailedListHasBeenSet() const;

                    /**
                     * 获取源桶路径
                     * @return BucketPath 源桶路径
                     * 
                     */
                    std::string GetBucketPath() const;

                    /**
                     * 设置源桶路径
                     * @param _bucketPath 源桶路径
                     * 
                     */
                    void SetBucketPath(const std::string& _bucketPath);

                    /**
                     * 判断参数 BucketPath 是否已赋值
                     * @return BucketPath 是否已赋值
                     * 
                     */
                    bool BucketPathHasBeenSet() const;

                    /**
                     * 获取迁移方向。0: 对象存储迁移至文件系统，1: 文件系统迁移至对象存储。默认 0
                     * @return Direction 迁移方向。0: 对象存储迁移至文件系统，1: 文件系统迁移至对象存储。默认 0
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置迁移方向。0: 对象存储迁移至文件系统，1: 文件系统迁移至对象存储。默认 0
                     * @param _direction 迁移方向。0: 对象存储迁移至文件系统，1: 文件系统迁移至对象存储。默认 0
                     * 
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                private:

                    /**
                     * 迁移任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 迁移任务id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 迁移方式标志位，默认为0。0: 桶迁移；1: 清单迁移
                     */
                    uint64_t m_migrationType;
                    bool m_migrationTypeHasBeenSet;

                    /**
                     * 迁移模式，默认为0。0: 全量迁移
                     */
                    uint64_t m_migrationMode;
                    bool m_migrationModeHasBeenSet;

                    /**
                     * 数据源桶名称
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * 数据源桶地域
                     */
                    std::string m_bucketRegion;
                    bool m_bucketRegionHasBeenSet;

                    /**
                     * 数据源桶地址
                     */
                    std::string m_bucketAddress;
                    bool m_bucketAddressHasBeenSet;

                    /**
                     * 清单地址
                     */
                    std::string m_listAddress;
                    bool m_listAddressHasBeenSet;

                    /**
                     * 文件系统实例名称
                     */
                    std::string m_fsName;
                    bool m_fsNameHasBeenSet;

                    /**
                     * 文件系统实例Id
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 文件系统路径
                     */
                    std::string m_fsPath;
                    bool m_fsPathHasBeenSet;

                    /**
                     * 同名文件迁移时覆盖策略，默认为0。0: 最后修改时间优先；1: 全覆盖；2: 不覆盖
                     */
                    uint64_t m_coverType;
                    bool m_coverTypeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 完成/终止时间
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 迁移状态。0: 已完成；1: 创建中；2: 运行中；3: 终止中；4: 已终止；5: 创建失败；6: 运行失败；7: 结束中；8: 删除中；9: 等待中
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 文件数量
                     */
                    uint64_t m_fileTotalCount;
                    bool m_fileTotalCountHasBeenSet;

                    /**
                     * 已迁移文件数量
                     */
                    uint64_t m_fileMigratedCount;
                    bool m_fileMigratedCountHasBeenSet;

                    /**
                     * 迁移失败文件数量
                     */
                    uint64_t m_fileFailedCount;
                    bool m_fileFailedCountHasBeenSet;

                    /**
                     * 文件容量，单位Byte
                     */
                    int64_t m_fileTotalSize;
                    bool m_fileTotalSizeHasBeenSet;

                    /**
                     * 已迁移文件容量，单位Byte
                     */
                    int64_t m_fileMigratedSize;
                    bool m_fileMigratedSizeHasBeenSet;

                    /**
                     * 迁移失败文件容量，单位Byte
                     */
                    int64_t m_fileFailedSize;
                    bool m_fileFailedSizeHasBeenSet;

                    /**
                     * 全部清单
                     */
                    std::string m_fileTotalList;
                    bool m_fileTotalListHasBeenSet;

                    /**
                     * 已完成文件清单
                     */
                    std::string m_fileCompletedList;
                    bool m_fileCompletedListHasBeenSet;

                    /**
                     * 失败文件清单
                     */
                    std::string m_fileFailedList;
                    bool m_fileFailedListHasBeenSet;

                    /**
                     * 源桶路径
                     */
                    std::string m_bucketPath;
                    bool m_bucketPathHasBeenSet;

                    /**
                     * 迁移方向。0: 对象存储迁移至文件系统，1: 文件系统迁移至对象存储。默认 0
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_MIGRATIONTASKINFO_H_
