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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_CREATECLUSTERSNAPSHOTREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_CREATECLUSTERSNAPSHOTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * CreateClusterSnapshot请求参数结构体
                */
                class CreateClusterSnapshotRequest : public AbstractModel
                {
                public:
                    CreateClusterSnapshotRequest();
                    ~CreateClusterSnapshotRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例名称</p>
                     * @return InstanceId <p>实例名称</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _instanceId <p>实例名称</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

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
                     * 获取<p>索引名称</p>
                     * @return Indices <p>索引名称</p>
                     * 
                     */
                    std::string GetIndices() const;

                    /**
                     * 设置<p>索引名称</p>
                     * @param _indices <p>索引名称</p>
                     * 
                     */
                    void SetIndices(const std::string& _indices);

                    /**
                     * 判断参数 Indices 是否已赋值
                     * @return Indices 是否已赋值
                     * 
                     */
                    bool IndicesHasBeenSet() const;

                    /**
                     * 获取<p>0 腾讯云仓库; 1 客户仓库</p>
                     * @return EsRepositoryType <p>0 腾讯云仓库; 1 客户仓库</p>
                     * 
                     */
                    uint64_t GetEsRepositoryType() const;

                    /**
                     * 设置<p>0 腾讯云仓库; 1 客户仓库</p>
                     * @param _esRepositoryType <p>0 腾讯云仓库; 1 客户仓库</p>
                     * 
                     */
                    void SetEsRepositoryType(const uint64_t& _esRepositoryType);

                    /**
                     * 判断参数 EsRepositoryType 是否已赋值
                     * @return EsRepositoryType 是否已赋值
                     * 
                     */
                    bool EsRepositoryTypeHasBeenSet() const;

                    /**
                     * 获取<p>客户快照仓库名称</p>
                     * @return UserEsRepository <p>客户快照仓库名称</p>
                     * 
                     */
                    std::string GetUserEsRepository() const;

                    /**
                     * 设置<p>客户快照仓库名称</p>
                     * @param _userEsRepository <p>客户快照仓库名称</p>
                     * 
                     */
                    void SetUserEsRepository(const std::string& _userEsRepository);

                    /**
                     * 判断参数 UserEsRepository 是否已赋值
                     * @return UserEsRepository 是否已赋值
                     * 
                     */
                    bool UserEsRepositoryHasBeenSet() const;

                    /**
                     * 获取<p>快照存储周期 单位天，范围[0, INF), 如果没有设置则默认7天</p>
                     * @return StorageDuration <p>快照存储周期 单位天，范围[0, INF), 如果没有设置则默认7天</p>
                     * 
                     */
                    uint64_t GetStorageDuration() const;

                    /**
                     * 设置<p>快照存储周期 单位天，范围[0, INF), 如果没有设置则默认7天</p>
                     * @param _storageDuration <p>快照存储周期 单位天，范围[0, INF), 如果没有设置则默认7天</p>
                     * 
                     */
                    void SetStorageDuration(const uint64_t& _storageDuration);

                    /**
                     * 判断参数 StorageDuration 是否已赋值
                     * @return StorageDuration 是否已赋值
                     * 
                     */
                    bool StorageDurationHasBeenSet() const;

                    /**
                     * 获取<p>备份锁定 0 不锁定; 1 锁定</p>
                     * @return CosRetention <p>备份锁定 0 不锁定; 1 锁定</p>
                     * 
                     */
                    uint64_t GetCosRetention() const;

                    /**
                     * 设置<p>备份锁定 0 不锁定; 1 锁定</p>
                     * @param _cosRetention <p>备份锁定 0 不锁定; 1 锁定</p>
                     * 
                     */
                    void SetCosRetention(const uint64_t& _cosRetention);

                    /**
                     * 判断参数 CosRetention 是否已赋值
                     * @return CosRetention 是否已赋值
                     * 
                     */
                    bool CosRetentionHasBeenSet() const;

                    /**
                     * 获取<p>锁定截止日期 2022-12-10T08:34:48.000Z</p>
                     * @return RetainUntilDate <p>锁定截止日期 2022-12-10T08:34:48.000Z</p>
                     * 
                     */
                    std::string GetRetainUntilDate() const;

                    /**
                     * 设置<p>锁定截止日期 2022-12-10T08:34:48.000Z</p>
                     * @param _retainUntilDate <p>锁定截止日期 2022-12-10T08:34:48.000Z</p>
                     * 
                     */
                    void SetRetainUntilDate(const std::string& _retainUntilDate);

                    /**
                     * 判断参数 RetainUntilDate 是否已赋值
                     * @return RetainUntilDate 是否已赋值
                     * 
                     */
                    bool RetainUntilDateHasBeenSet() const;

                    /**
                     * 获取<p>锁定宽限期,单位天</p>
                     * @return RetentionGraceTime <p>锁定宽限期,单位天</p>
                     * 
                     */
                    uint64_t GetRetentionGraceTime() const;

                    /**
                     * 设置<p>锁定宽限期,单位天</p>
                     * @param _retentionGraceTime <p>锁定宽限期,单位天</p>
                     * 
                     */
                    void SetRetentionGraceTime(const uint64_t& _retentionGraceTime);

                    /**
                     * 判断参数 RetentionGraceTime 是否已赋值
                     * @return RetentionGraceTime 是否已赋值
                     * 
                     */
                    bool RetentionGraceTimeHasBeenSet() const;

                    /**
                     * 获取<p>跨地域备份 0 不跨地域; 1 跨地域</p>
                     * @return RemoteCos <p>跨地域备份 0 不跨地域; 1 跨地域</p>
                     * 
                     */
                    uint64_t GetRemoteCos() const;

                    /**
                     * 设置<p>跨地域备份 0 不跨地域; 1 跨地域</p>
                     * @param _remoteCos <p>跨地域备份 0 不跨地域; 1 跨地域</p>
                     * 
                     */
                    void SetRemoteCos(const uint64_t& _remoteCos);

                    /**
                     * 判断参数 RemoteCos 是否已赋值
                     * @return RemoteCos 是否已赋值
                     * 
                     */
                    bool RemoteCosHasBeenSet() const;

                    /**
                     * 获取<p>跨地域备份地域名称 ap-guangzhou</p>
                     * @return RemoteCosRegion <p>跨地域备份地域名称 ap-guangzhou</p>
                     * 
                     */
                    std::string GetRemoteCosRegion() const;

                    /**
                     * 设置<p>跨地域备份地域名称 ap-guangzhou</p>
                     * @param _remoteCosRegion <p>跨地域备份地域名称 ap-guangzhou</p>
                     * 
                     */
                    void SetRemoteCosRegion(const std::string& _remoteCosRegion);

                    /**
                     * 判断参数 RemoteCosRegion 是否已赋值
                     * @return RemoteCosRegion 是否已赋值
                     * 
                     */
                    bool RemoteCosRegionHasBeenSet() const;

                    /**
                     * 获取<p>cos多AZ备份 0 单AZ; 1 多AZ</p>
                     * @return MultiAz <p>cos多AZ备份 0 单AZ; 1 多AZ</p>
                     * 
                     */
                    uint64_t GetMultiAz() const;

                    /**
                     * 设置<p>cos多AZ备份 0 单AZ; 1 多AZ</p>
                     * @param _multiAz <p>cos多AZ备份 0 单AZ; 1 多AZ</p>
                     * 
                     */
                    void SetMultiAz(const uint64_t& _multiAz);

                    /**
                     * 判断参数 MultiAz 是否已赋值
                     * @return MultiAz 是否已赋值
                     * 
                     */
                    bool MultiAzHasBeenSet() const;

                    /**
                     * 获取<p>快照创建速率（单位mb）</p>
                     * @return MaxSnapshotPerSec <p>快照创建速率（单位mb）</p>
                     * 
                     */
                    std::string GetMaxSnapshotPerSec() const;

                    /**
                     * 设置<p>快照创建速率（单位mb）</p>
                     * @param _maxSnapshotPerSec <p>快照创建速率（单位mb）</p>
                     * 
                     */
                    void SetMaxSnapshotPerSec(const std::string& _maxSnapshotPerSec);

                    /**
                     * 判断参数 MaxSnapshotPerSec 是否已赋值
                     * @return MaxSnapshotPerSec 是否已赋值
                     * 
                     */
                    bool MaxSnapshotPerSecHasBeenSet() const;

                private:

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>快照名称</p>
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * <p>索引名称</p>
                     */
                    std::string m_indices;
                    bool m_indicesHasBeenSet;

                    /**
                     * <p>0 腾讯云仓库; 1 客户仓库</p>
                     */
                    uint64_t m_esRepositoryType;
                    bool m_esRepositoryTypeHasBeenSet;

                    /**
                     * <p>客户快照仓库名称</p>
                     */
                    std::string m_userEsRepository;
                    bool m_userEsRepositoryHasBeenSet;

                    /**
                     * <p>快照存储周期 单位天，范围[0, INF), 如果没有设置则默认7天</p>
                     */
                    uint64_t m_storageDuration;
                    bool m_storageDurationHasBeenSet;

                    /**
                     * <p>备份锁定 0 不锁定; 1 锁定</p>
                     */
                    uint64_t m_cosRetention;
                    bool m_cosRetentionHasBeenSet;

                    /**
                     * <p>锁定截止日期 2022-12-10T08:34:48.000Z</p>
                     */
                    std::string m_retainUntilDate;
                    bool m_retainUntilDateHasBeenSet;

                    /**
                     * <p>锁定宽限期,单位天</p>
                     */
                    uint64_t m_retentionGraceTime;
                    bool m_retentionGraceTimeHasBeenSet;

                    /**
                     * <p>跨地域备份 0 不跨地域; 1 跨地域</p>
                     */
                    uint64_t m_remoteCos;
                    bool m_remoteCosHasBeenSet;

                    /**
                     * <p>跨地域备份地域名称 ap-guangzhou</p>
                     */
                    std::string m_remoteCosRegion;
                    bool m_remoteCosRegionHasBeenSet;

                    /**
                     * <p>cos多AZ备份 0 单AZ; 1 多AZ</p>
                     */
                    uint64_t m_multiAz;
                    bool m_multiAzHasBeenSet;

                    /**
                     * <p>快照创建速率（单位mb）</p>
                     */
                    std::string m_maxSnapshotPerSec;
                    bool m_maxSnapshotPerSecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_CREATECLUSTERSNAPSHOTREQUEST_H_
