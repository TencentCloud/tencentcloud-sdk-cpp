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
                     * 获取<p>迁移任务名称</p>
                     * @return TaskName <p>迁移任务名称</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>迁移任务名称</p>
                     * @param _taskName <p>迁移任务名称</p>
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
                     * 获取<p>迁移任务id</p>
                     * @return TaskId <p>迁移任务id</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>迁移任务id</p>
                     * @param _taskId <p>迁移任务id</p>
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
                     * 获取<p>迁移方式标志位，默认为0。0: 桶迁移；1: 清单迁移</p>
                     * @return MigrationType <p>迁移方式标志位，默认为0。0: 桶迁移；1: 清单迁移</p>
                     * 
                     */
                    uint64_t GetMigrationType() const;

                    /**
                     * 设置<p>迁移方式标志位，默认为0。0: 桶迁移；1: 清单迁移</p>
                     * @param _migrationType <p>迁移方式标志位，默认为0。0: 桶迁移；1: 清单迁移</p>
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
                     * 获取<p>迁移模式，默认为0。0: 全量迁移</p>
                     * @return MigrationMode <p>迁移模式，默认为0。0: 全量迁移</p>
                     * 
                     */
                    uint64_t GetMigrationMode() const;

                    /**
                     * 设置<p>迁移模式，默认为0。0: 全量迁移</p>
                     * @param _migrationMode <p>迁移模式，默认为0。0: 全量迁移</p>
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
                     * 获取<p>数据源桶名称</p>
                     * @return BucketName <p>数据源桶名称</p>
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置<p>数据源桶名称</p>
                     * @param _bucketName <p>数据源桶名称</p>
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
                     * 获取<p>数据源桶地域</p>
                     * @return BucketRegion <p>数据源桶地域</p>
                     * 
                     */
                    std::string GetBucketRegion() const;

                    /**
                     * 设置<p>数据源桶地域</p>
                     * @param _bucketRegion <p>数据源桶地域</p>
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
                     * 获取<p>数据源桶地址</p>
                     * @return BucketAddress <p>数据源桶地址</p>
                     * 
                     */
                    std::string GetBucketAddress() const;

                    /**
                     * 设置<p>数据源桶地址</p>
                     * @param _bucketAddress <p>数据源桶地址</p>
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
                     * 获取<p>清单地址</p>
                     * @return ListAddress <p>清单地址</p>
                     * 
                     */
                    std::string GetListAddress() const;

                    /**
                     * 设置<p>清单地址</p>
                     * @param _listAddress <p>清单地址</p>
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
                     * 获取<p>文件系统实例名称</p>
                     * @return FsName <p>文件系统实例名称</p>
                     * 
                     */
                    std::string GetFsName() const;

                    /**
                     * 设置<p>文件系统实例名称</p>
                     * @param _fsName <p>文件系统实例名称</p>
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
                     * 获取<p>文件系统实例Id</p>
                     * @return FileSystemId <p>文件系统实例Id</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>文件系统实例Id</p>
                     * @param _fileSystemId <p>文件系统实例Id</p>
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
                     * 获取<p>文件系统内目录路径，不涉及实际挂载子目录/根目录，无需以/cfs/作为前缀</p>
                     * @return FsPath <p>文件系统内目录路径，不涉及实际挂载子目录/根目录，无需以/cfs/作为前缀</p>
                     * 
                     */
                    std::string GetFsPath() const;

                    /**
                     * 设置<p>文件系统内目录路径，不涉及实际挂载子目录/根目录，无需以/cfs/作为前缀</p>
                     * @param _fsPath <p>文件系统内目录路径，不涉及实际挂载子目录/根目录，无需以/cfs/作为前缀</p>
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
                     * 获取<p>同名文件迁移时覆盖策略，默认为0。0: 最后修改时间优先；1: 全覆盖；2: 不覆盖</p>
                     * @return CoverType <p>同名文件迁移时覆盖策略，默认为0。0: 最后修改时间优先；1: 全覆盖；2: 不覆盖</p>
                     * 
                     */
                    uint64_t GetCoverType() const;

                    /**
                     * 设置<p>同名文件迁移时覆盖策略，默认为0。0: 最后修改时间优先；1: 全覆盖；2: 不覆盖</p>
                     * @param _coverType <p>同名文件迁移时覆盖策略，默认为0。0: 最后修改时间优先；1: 全覆盖；2: 不覆盖</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>完成/终止时间</p>
                     * @return EndTime <p>完成/终止时间</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>完成/终止时间</p>
                     * @param _endTime <p>完成/终止时间</p>
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
                     * 获取<p>迁移状态。0: 已完成；1: 创建中；2: 运行中；3: 终止中；4: 已终止；5: 创建失败；6: 运行失败；7: 结束中；8: 删除中；9: 等待中</p>
                     * @return Status <p>迁移状态。0: 已完成；1: 创建中；2: 运行中；3: 终止中；4: 已终止；5: 创建失败；6: 运行失败；7: 结束中；8: 删除中；9: 等待中</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>迁移状态。0: 已完成；1: 创建中；2: 运行中；3: 终止中；4: 已终止；5: 创建失败；6: 运行失败；7: 结束中；8: 删除中；9: 等待中</p>
                     * @param _status <p>迁移状态。0: 已完成；1: 创建中；2: 运行中；3: 终止中；4: 已终止；5: 创建失败；6: 运行失败；7: 结束中；8: 删除中；9: 等待中</p>
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
                     * 获取<p>文件数量</p>
                     * @return FileTotalCount <p>文件数量</p>
                     * 
                     */
                    uint64_t GetFileTotalCount() const;

                    /**
                     * 设置<p>文件数量</p>
                     * @param _fileTotalCount <p>文件数量</p>
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
                     * 获取<p>已迁移文件数量</p>
                     * @return FileMigratedCount <p>已迁移文件数量</p>
                     * 
                     */
                    uint64_t GetFileMigratedCount() const;

                    /**
                     * 设置<p>已迁移文件数量</p>
                     * @param _fileMigratedCount <p>已迁移文件数量</p>
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
                     * 获取<p>迁移失败文件数量</p>
                     * @return FileFailedCount <p>迁移失败文件数量</p>
                     * 
                     */
                    uint64_t GetFileFailedCount() const;

                    /**
                     * 设置<p>迁移失败文件数量</p>
                     * @param _fileFailedCount <p>迁移失败文件数量</p>
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
                     * 获取<p>文件容量，单位Byte</p>
                     * @return FileTotalSize <p>文件容量，单位Byte</p>
                     * 
                     */
                    int64_t GetFileTotalSize() const;

                    /**
                     * 设置<p>文件容量，单位Byte</p>
                     * @param _fileTotalSize <p>文件容量，单位Byte</p>
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
                     * 获取<p>已迁移文件容量，单位Byte</p>
                     * @return FileMigratedSize <p>已迁移文件容量，单位Byte</p>
                     * 
                     */
                    int64_t GetFileMigratedSize() const;

                    /**
                     * 设置<p>已迁移文件容量，单位Byte</p>
                     * @param _fileMigratedSize <p>已迁移文件容量，单位Byte</p>
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
                     * 获取<p>迁移失败文件容量，单位Byte</p>
                     * @return FileFailedSize <p>迁移失败文件容量，单位Byte</p>
                     * 
                     */
                    int64_t GetFileFailedSize() const;

                    /**
                     * 设置<p>迁移失败文件容量，单位Byte</p>
                     * @param _fileFailedSize <p>迁移失败文件容量，单位Byte</p>
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
                     * 获取<p>全部清单</p>
                     * @return FileTotalList <p>全部清单</p>
                     * 
                     */
                    std::string GetFileTotalList() const;

                    /**
                     * 设置<p>全部清单</p>
                     * @param _fileTotalList <p>全部清单</p>
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
                     * 获取<p>已完成文件清单</p>
                     * @return FileCompletedList <p>已完成文件清单</p>
                     * 
                     */
                    std::string GetFileCompletedList() const;

                    /**
                     * 设置<p>已完成文件清单</p>
                     * @param _fileCompletedList <p>已完成文件清单</p>
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
                     * 获取<p>失败文件清单</p>
                     * @return FileFailedList <p>失败文件清单</p>
                     * 
                     */
                    std::string GetFileFailedList() const;

                    /**
                     * 设置<p>失败文件清单</p>
                     * @param _fileFailedList <p>失败文件清单</p>
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
                     * 获取<p>源桶路径</p>
                     * @return BucketPath <p>源桶路径</p>
                     * 
                     */
                    std::string GetBucketPath() const;

                    /**
                     * 设置<p>源桶路径</p>
                     * @param _bucketPath <p>源桶路径</p>
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
                     * 获取<p>迁移方向。0: 对象存储迁移至文件系统，1: 文件系统迁移至对象存储。默认 0</p>
                     * @return Direction <p>迁移方向。0: 对象存储迁移至文件系统，1: 文件系统迁移至对象存储。默认 0</p>
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置<p>迁移方向。0: 对象存储迁移至文件系统，1: 文件系统迁移至对象存储。默认 0</p>
                     * @param _direction <p>迁移方向。0: 对象存储迁移至文件系统，1: 文件系统迁移至对象存储。默认 0</p>
                     * 
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取<p>数据源服务商</p><p>枚举值：</p><ul><li>COS： 腾讯云COS</li><li>OSS： 阿里云OSS</li><li>OBS： 华为云OBS</li><li>BOS： 百度云BOS</li><li>TOS： 火山引擎TOS</li></ul>
                     * @return SrcService <p>数据源服务商</p><p>枚举值：</p><ul><li>COS： 腾讯云COS</li><li>OSS： 阿里云OSS</li><li>OBS： 华为云OBS</li><li>BOS： 百度云BOS</li><li>TOS： 火山引擎TOS</li></ul>
                     * 
                     */
                    std::string GetSrcService() const;

                    /**
                     * 设置<p>数据源服务商</p><p>枚举值：</p><ul><li>COS： 腾讯云COS</li><li>OSS： 阿里云OSS</li><li>OBS： 华为云OBS</li><li>BOS： 百度云BOS</li><li>TOS： 火山引擎TOS</li></ul>
                     * @param _srcService <p>数据源服务商</p><p>枚举值：</p><ul><li>COS： 腾讯云COS</li><li>OSS： 阿里云OSS</li><li>OBS： 华为云OBS</li><li>BOS： 百度云BOS</li><li>TOS： 火山引擎TOS</li></ul>
                     * 
                     */
                    void SetSrcService(const std::string& _srcService);

                    /**
                     * 判断参数 SrcService 是否已赋值
                     * @return SrcService 是否已赋值
                     * 
                     */
                    bool SrcServiceHasBeenSet() const;

                private:

                    /**
                     * <p>迁移任务名称</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>迁移任务id</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>迁移方式标志位，默认为0。0: 桶迁移；1: 清单迁移</p>
                     */
                    uint64_t m_migrationType;
                    bool m_migrationTypeHasBeenSet;

                    /**
                     * <p>迁移模式，默认为0。0: 全量迁移</p>
                     */
                    uint64_t m_migrationMode;
                    bool m_migrationModeHasBeenSet;

                    /**
                     * <p>数据源桶名称</p>
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * <p>数据源桶地域</p>
                     */
                    std::string m_bucketRegion;
                    bool m_bucketRegionHasBeenSet;

                    /**
                     * <p>数据源桶地址</p>
                     */
                    std::string m_bucketAddress;
                    bool m_bucketAddressHasBeenSet;

                    /**
                     * <p>清单地址</p>
                     */
                    std::string m_listAddress;
                    bool m_listAddressHasBeenSet;

                    /**
                     * <p>文件系统实例名称</p>
                     */
                    std::string m_fsName;
                    bool m_fsNameHasBeenSet;

                    /**
                     * <p>文件系统实例Id</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>文件系统内目录路径，不涉及实际挂载子目录/根目录，无需以/cfs/作为前缀</p>
                     */
                    std::string m_fsPath;
                    bool m_fsPathHasBeenSet;

                    /**
                     * <p>同名文件迁移时覆盖策略，默认为0。0: 最后修改时间优先；1: 全覆盖；2: 不覆盖</p>
                     */
                    uint64_t m_coverType;
                    bool m_coverTypeHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>完成/终止时间</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>迁移状态。0: 已完成；1: 创建中；2: 运行中；3: 终止中；4: 已终止；5: 创建失败；6: 运行失败；7: 结束中；8: 删除中；9: 等待中</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>文件数量</p>
                     */
                    uint64_t m_fileTotalCount;
                    bool m_fileTotalCountHasBeenSet;

                    /**
                     * <p>已迁移文件数量</p>
                     */
                    uint64_t m_fileMigratedCount;
                    bool m_fileMigratedCountHasBeenSet;

                    /**
                     * <p>迁移失败文件数量</p>
                     */
                    uint64_t m_fileFailedCount;
                    bool m_fileFailedCountHasBeenSet;

                    /**
                     * <p>文件容量，单位Byte</p>
                     */
                    int64_t m_fileTotalSize;
                    bool m_fileTotalSizeHasBeenSet;

                    /**
                     * <p>已迁移文件容量，单位Byte</p>
                     */
                    int64_t m_fileMigratedSize;
                    bool m_fileMigratedSizeHasBeenSet;

                    /**
                     * <p>迁移失败文件容量，单位Byte</p>
                     */
                    int64_t m_fileFailedSize;
                    bool m_fileFailedSizeHasBeenSet;

                    /**
                     * <p>全部清单</p>
                     */
                    std::string m_fileTotalList;
                    bool m_fileTotalListHasBeenSet;

                    /**
                     * <p>已完成文件清单</p>
                     */
                    std::string m_fileCompletedList;
                    bool m_fileCompletedListHasBeenSet;

                    /**
                     * <p>失败文件清单</p>
                     */
                    std::string m_fileFailedList;
                    bool m_fileFailedListHasBeenSet;

                    /**
                     * <p>源桶路径</p>
                     */
                    std::string m_bucketPath;
                    bool m_bucketPathHasBeenSet;

                    /**
                     * <p>迁移方向。0: 对象存储迁移至文件系统，1: 文件系统迁移至对象存储。默认 0</p>
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * <p>数据源服务商</p><p>枚举值：</p><ul><li>COS： 腾讯云COS</li><li>OSS： 阿里云OSS</li><li>OBS： 华为云OBS</li><li>BOS： 百度云BOS</li><li>TOS： 火山引擎TOS</li></ul>
                     */
                    std::string m_srcService;
                    bool m_srcServiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_MIGRATIONTASKINFO_H_
