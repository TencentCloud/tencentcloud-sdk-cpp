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
                     * 获取<p>迁移方式标志位，默认为0。0：桶迁移；1：清单迁移</p>
                     * @return MigrationType <p>迁移方式标志位，默认为0。0：桶迁移；1：清单迁移</p>
                     * 
                     */
                    uint64_t GetMigrationType() const;

                    /**
                     * 设置<p>迁移方式标志位，默认为0。0：桶迁移；1：清单迁移</p>
                     * @param _migrationType <p>迁移方式标志位，默认为0。0：桶迁移；1：清单迁移</p>
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
                     * 获取<p>数据源账号的 SecretId</p>
                     * @return SrcSecretId <p>数据源账号的 SecretId</p>
                     * 
                     */
                    std::string GetSrcSecretId() const;

                    /**
                     * 设置<p>数据源账号的 SecretId</p>
                     * @param _srcSecretId <p>数据源账号的 SecretId</p>
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
                     * 获取<p>数据源账号的 SecretKey</p>
                     * @return SrcSecretKey <p>数据源账号的 SecretKey</p>
                     * 
                     */
                    std::string GetSrcSecretKey() const;

                    /**
                     * 设置<p>数据源账号的 SecretKey</p>
                     * @param _srcSecretKey <p>数据源账号的 SecretKey</p>
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
                     * 获取<p>文件系统实例 ID，通过查询文件系统 <a href="https://cloud.tencent.com/document/product/582/38170">DescribeCfsFileSystems</a> 获取</p>
                     * @return FileSystemId <p>文件系统实例 ID，通过查询文件系统 <a href="https://cloud.tencent.com/document/product/582/38170">DescribeCfsFileSystems</a> 获取</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>文件系统实例 ID，通过查询文件系统 <a href="https://cloud.tencent.com/document/product/582/38170">DescribeCfsFileSystems</a> 获取</p>
                     * @param _fileSystemId <p>文件系统实例 ID，通过查询文件系统 <a href="https://cloud.tencent.com/document/product/582/38170">DescribeCfsFileSystems</a> 获取</p>
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

                    /**
                     * 获取<p>数据源桶名称；桶迁移时，BucketName 和 BucketAddress 必填其一，清单迁移时无需填写此参数</p>
                     * @return BucketName <p>数据源桶名称；桶迁移时，BucketName 和 BucketAddress 必填其一，清单迁移时无需填写此参数</p>
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置<p>数据源桶名称；桶迁移时，BucketName 和 BucketAddress 必填其一，清单迁移时无需填写此参数</p>
                     * @param _bucketName <p>数据源桶名称；桶迁移时，BucketName 和 BucketAddress 必填其一，清单迁移时无需填写此参数</p>
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
                     * 获取<p>数据源桶地址；桶迁移时，BucketName 和 BucketAddress 必填其一，清单迁移时无需填写此参数</p>
                     * @return BucketAddress <p>数据源桶地址；桶迁移时，BucketName 和 BucketAddress 必填其一，清单迁移时无需填写此参数</p>
                     * 
                     */
                    std::string GetBucketAddress() const;

                    /**
                     * 设置<p>数据源桶地址；桶迁移时，BucketName 和 BucketAddress 必填其一，清单迁移时无需填写此参数</p>
                     * @param _bucketAddress <p>数据源桶地址；桶迁移时，BucketName 和 BucketAddress 必填其一，清单迁移时无需填写此参数</p>
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
                     * 获取<p>清单地址，迁移方式为清单迁移时必填</p>
                     * @return ListAddress <p>清单地址，迁移方式为清单迁移时必填</p>
                     * 
                     */
                    std::string GetListAddress() const;

                    /**
                     * 设置<p>清单地址，迁移方式为清单迁移时必填</p>
                     * @param _listAddress <p>清单地址，迁移方式为清单迁移时必填</p>
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
                     * 获取<p>目标文件系统名称</p>
                     * @return FsName <p>目标文件系统名称</p>
                     * 
                     */
                    std::string GetFsName() const;

                    /**
                     * 设置<p>目标文件系统名称</p>
                     * @param _fsName <p>目标文件系统名称</p>
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
                     * 获取<p>源桶路径，默认为 /</p>
                     * @return BucketPath <p>源桶路径，默认为 /</p>
                     * 
                     */
                    std::string GetBucketPath() const;

                    /**
                     * 设置<p>源桶路径，默认为 /</p>
                     * @param _bucketPath <p>源桶路径，默认为 /</p>
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
                     * 获取<p>迁移方向；0：对象存储迁移至文件系统，1：文件系统迁移至对象存储。默认为0</p>
                     * @return Direction <p>迁移方向；0：对象存储迁移至文件系统，1：文件系统迁移至对象存储。默认为0</p>
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置<p>迁移方向；0：对象存储迁移至文件系统，1：文件系统迁移至对象存储。默认为0</p>
                     * @param _direction <p>迁移方向；0：对象存储迁移至文件系统，1：文件系统迁移至对象存储。默认为0</p>
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
                     * <p>迁移任务名称</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>迁移方式标志位，默认为0。0：桶迁移；1：清单迁移</p>
                     */
                    uint64_t m_migrationType;
                    bool m_migrationTypeHasBeenSet;

                    /**
                     * <p>迁移模式，默认为0。0: 全量迁移</p>
                     */
                    uint64_t m_migrationMode;
                    bool m_migrationModeHasBeenSet;

                    /**
                     * <p>数据源账号的 SecretId</p>
                     */
                    std::string m_srcSecretId;
                    bool m_srcSecretIdHasBeenSet;

                    /**
                     * <p>数据源账号的 SecretKey</p>
                     */
                    std::string m_srcSecretKey;
                    bool m_srcSecretKeyHasBeenSet;

                    /**
                     * <p>文件系统实例 ID，通过查询文件系统 <a href="https://cloud.tencent.com/document/product/582/38170">DescribeCfsFileSystems</a> 获取</p>
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
                     * <p>数据源服务商</p><p>枚举值：</p><ul><li>COS： 腾讯云COS</li><li>OSS： 阿里云OSS</li><li>OBS： 华为云OBS</li><li>BOS： 百度云BOS</li><li>TOS： 火山引擎TOS</li></ul>
                     */
                    std::string m_srcService;
                    bool m_srcServiceHasBeenSet;

                    /**
                     * <p>数据源桶名称；桶迁移时，BucketName 和 BucketAddress 必填其一，清单迁移时无需填写此参数</p>
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * <p>数据源桶地域</p>
                     */
                    std::string m_bucketRegion;
                    bool m_bucketRegionHasBeenSet;

                    /**
                     * <p>数据源桶地址；桶迁移时，BucketName 和 BucketAddress 必填其一，清单迁移时无需填写此参数</p>
                     */
                    std::string m_bucketAddress;
                    bool m_bucketAddressHasBeenSet;

                    /**
                     * <p>清单地址，迁移方式为清单迁移时必填</p>
                     */
                    std::string m_listAddress;
                    bool m_listAddressHasBeenSet;

                    /**
                     * <p>目标文件系统名称</p>
                     */
                    std::string m_fsName;
                    bool m_fsNameHasBeenSet;

                    /**
                     * <p>源桶路径，默认为 /</p>
                     */
                    std::string m_bucketPath;
                    bool m_bucketPathHasBeenSet;

                    /**
                     * <p>迁移方向；0：对象存储迁移至文件系统，1：文件系统迁移至对象存储。默认为0</p>
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CREATEMIGRATIONTASKREQUEST_H_
