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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_CREATEMIGRATIONTASKREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_CREATEMIGRATIONTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateMigrationTask请求参数结构体
                */
                class CreateMigrationTaskRequest : public AbstractModel
                {
                public:
                    CreateMigrationTaskRequest();
                    ~CreateMigrationTaskRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取数据源账号的SecretId
                     * @return SrcSecretId 数据源账号的SecretId
                     * 
                     */
                    std::string GetSrcSecretId() const;

                    /**
                     * 设置数据源账号的SecretId
                     * @param _srcSecretId 数据源账号的SecretId
                     * 
                     */
                    void SetSrcSecretId(const std::string& _srcSecretId);

                    /**
                     * 判断参数 SrcSecretId 是否已赋值
                     * @return SrcSecretId 是否已赋值
                     * 
                     */
                    bool SrcSecretIdHasBeenSet() const;

                    /**
                     * 获取数据源账号的SecretKey
                     * @return SrcSecretKey 数据源账号的SecretKey
                     * 
                     */
                    std::string GetSrcSecretKey() const;

                    /**
                     * 设置数据源账号的SecretKey
                     * @param _srcSecretKey 数据源账号的SecretKey
                     * 
                     */
                    void SetSrcSecretKey(const std::string& _srcSecretKey);

                    /**
                     * 判断参数 SrcSecretKey 是否已赋值
                     * @return SrcSecretKey 是否已赋值
                     * 
                     */
                    bool SrcSecretKeyHasBeenSet() const;

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
                     * 获取数据源服务商。COS: 腾讯云COS，OSS: 阿里云OSS，OBS:华为云OBS
                     * @return SrcService 数据源服务商。COS: 腾讯云COS，OSS: 阿里云OSS，OBS:华为云OBS
                     * 
                     */
                    std::string GetSrcService() const;

                    /**
                     * 设置数据源服务商。COS: 腾讯云COS，OSS: 阿里云OSS，OBS:华为云OBS
                     * @param _srcService 数据源服务商。COS: 腾讯云COS，OSS: 阿里云OSS，OBS:华为云OBS
                     * 
                     */
                    void SetSrcService(const std::string& _srcService);

                    /**
                     * 判断参数 SrcService 是否已赋值
                     * @return SrcService 是否已赋值
                     * 
                     */
                    bool SrcServiceHasBeenSet() const;

                    /**
                     * 获取数据源桶名称，名称和地址至少有一个
                     * @return BucketName 数据源桶名称，名称和地址至少有一个
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置数据源桶名称，名称和地址至少有一个
                     * @param _bucketName 数据源桶名称，名称和地址至少有一个
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
                     * 获取数据源桶地址，名称和地址至少有一个
                     * @return BucketAddress 数据源桶地址，名称和地址至少有一个
                     * 
                     */
                    std::string GetBucketAddress() const;

                    /**
                     * 设置数据源桶地址，名称和地址至少有一个
                     * @param _bucketAddress 数据源桶地址，名称和地址至少有一个
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
                     * 获取清单地址，迁移方式为清单迁移时必填
                     * @return ListAddress 清单地址，迁移方式为清单迁移时必填
                     * 
                     */
                    std::string GetListAddress() const;

                    /**
                     * 设置清单地址，迁移方式为清单迁移时必填
                     * @param _listAddress 清单地址，迁移方式为清单迁移时必填
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
                     * 获取目标文件系统名称
                     * @return FsName 目标文件系统名称
                     * 
                     */
                    std::string GetFsName() const;

                    /**
                     * 设置目标文件系统名称
                     * @param _fsName 目标文件系统名称
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
                     * 获取源桶路径，默认为/
                     * @return BucketPath 源桶路径，默认为/
                     * 
                     */
                    std::string GetBucketPath() const;

                    /**
                     * 设置源桶路径，默认为/
                     * @param _bucketPath 源桶路径，默认为/
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
                     * 数据源账号的SecretId
                     */
                    std::string m_srcSecretId;
                    bool m_srcSecretIdHasBeenSet;

                    /**
                     * 数据源账号的SecretKey
                     */
                    std::string m_srcSecretKey;
                    bool m_srcSecretKeyHasBeenSet;

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
                     * 数据源服务商。COS: 腾讯云COS，OSS: 阿里云OSS，OBS:华为云OBS
                     */
                    std::string m_srcService;
                    bool m_srcServiceHasBeenSet;

                    /**
                     * 数据源桶名称，名称和地址至少有一个
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * 数据源桶地域
                     */
                    std::string m_bucketRegion;
                    bool m_bucketRegionHasBeenSet;

                    /**
                     * 数据源桶地址，名称和地址至少有一个
                     */
                    std::string m_bucketAddress;
                    bool m_bucketAddressHasBeenSet;

                    /**
                     * 清单地址，迁移方式为清单迁移时必填
                     */
                    std::string m_listAddress;
                    bool m_listAddressHasBeenSet;

                    /**
                     * 目标文件系统名称
                     */
                    std::string m_fsName;
                    bool m_fsNameHasBeenSet;

                    /**
                     * 源桶路径，默认为/
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

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CREATEMIGRATIONTASKREQUEST_H_
