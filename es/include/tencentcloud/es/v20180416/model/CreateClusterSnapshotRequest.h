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
                     * 获取实例名称
                     * @return InstanceId 实例名称
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例名称
                     * @param _instanceId 实例名称
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
                     * 获取索引名称
                     * @return Indices 索引名称
                     * 
                     */
                    std::string GetIndices() const;

                    /**
                     * 设置索引名称
                     * @param _indices 索引名称
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
                     * 获取0 腾讯云仓库; 1 客户仓库
                     * @return EsRepositoryType 0 腾讯云仓库; 1 客户仓库
                     * 
                     */
                    uint64_t GetEsRepositoryType() const;

                    /**
                     * 设置0 腾讯云仓库; 1 客户仓库
                     * @param _esRepositoryType 0 腾讯云仓库; 1 客户仓库
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
                     * 获取客户快照仓库名称
                     * @return UserEsRepository 客户快照仓库名称
                     * 
                     */
                    std::string GetUserEsRepository() const;

                    /**
                     * 设置客户快照仓库名称
                     * @param _userEsRepository 客户快照仓库名称
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
                     * 获取快照存储周期 单位天，范围[0, INF), 如果没有设置则默认7天
                     * @return StorageDuration 快照存储周期 单位天，范围[0, INF), 如果没有设置则默认7天
                     * 
                     */
                    uint64_t GetStorageDuration() const;

                    /**
                     * 设置快照存储周期 单位天，范围[0, INF), 如果没有设置则默认7天
                     * @param _storageDuration 快照存储周期 单位天，范围[0, INF), 如果没有设置则默认7天
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
                     * 获取备份锁定 0 不锁定; 1 锁定
                     * @return CosRetention 备份锁定 0 不锁定; 1 锁定
                     * 
                     */
                    uint64_t GetCosRetention() const;

                    /**
                     * 设置备份锁定 0 不锁定; 1 锁定
                     * @param _cosRetention 备份锁定 0 不锁定; 1 锁定
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
                     * 获取锁定截止日期 2022-12-10T08:34:48.000Z
                     * @return RetainUntilDate 锁定截止日期 2022-12-10T08:34:48.000Z
                     * 
                     */
                    std::string GetRetainUntilDate() const;

                    /**
                     * 设置锁定截止日期 2022-12-10T08:34:48.000Z
                     * @param _retainUntilDate 锁定截止日期 2022-12-10T08:34:48.000Z
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
                     * 获取锁定宽限期,单位天
                     * @return RetentionGraceTime 锁定宽限期,单位天
                     * 
                     */
                    uint64_t GetRetentionGraceTime() const;

                    /**
                     * 设置锁定宽限期,单位天
                     * @param _retentionGraceTime 锁定宽限期,单位天
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
                     * 获取跨地域备份 0 不跨地域; 1 跨地域
                     * @return RemoteCos 跨地域备份 0 不跨地域; 1 跨地域
                     * 
                     */
                    uint64_t GetRemoteCos() const;

                    /**
                     * 设置跨地域备份 0 不跨地域; 1 跨地域
                     * @param _remoteCos 跨地域备份 0 不跨地域; 1 跨地域
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
                     * 获取跨地域备份地域名称 ap-guangzhou
                     * @return RemoteCosRegion 跨地域备份地域名称 ap-guangzhou
                     * 
                     */
                    std::string GetRemoteCosRegion() const;

                    /**
                     * 设置跨地域备份地域名称 ap-guangzhou
                     * @param _remoteCosRegion 跨地域备份地域名称 ap-guangzhou
                     * 
                     */
                    void SetRemoteCosRegion(const std::string& _remoteCosRegion);

                    /**
                     * 判断参数 RemoteCosRegion 是否已赋值
                     * @return RemoteCosRegion 是否已赋值
                     * 
                     */
                    bool RemoteCosRegionHasBeenSet() const;

                private:

                    /**
                     * 实例名称
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 快照名称
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * 索引名称
                     */
                    std::string m_indices;
                    bool m_indicesHasBeenSet;

                    /**
                     * 0 腾讯云仓库; 1 客户仓库
                     */
                    uint64_t m_esRepositoryType;
                    bool m_esRepositoryTypeHasBeenSet;

                    /**
                     * 客户快照仓库名称
                     */
                    std::string m_userEsRepository;
                    bool m_userEsRepositoryHasBeenSet;

                    /**
                     * 快照存储周期 单位天，范围[0, INF), 如果没有设置则默认7天
                     */
                    uint64_t m_storageDuration;
                    bool m_storageDurationHasBeenSet;

                    /**
                     * 备份锁定 0 不锁定; 1 锁定
                     */
                    uint64_t m_cosRetention;
                    bool m_cosRetentionHasBeenSet;

                    /**
                     * 锁定截止日期 2022-12-10T08:34:48.000Z
                     */
                    std::string m_retainUntilDate;
                    bool m_retainUntilDateHasBeenSet;

                    /**
                     * 锁定宽限期,单位天
                     */
                    uint64_t m_retentionGraceTime;
                    bool m_retentionGraceTimeHasBeenSet;

                    /**
                     * 跨地域备份 0 不跨地域; 1 跨地域
                     */
                    uint64_t m_remoteCos;
                    bool m_remoteCosHasBeenSet;

                    /**
                     * 跨地域备份地域名称 ap-guangzhou
                     */
                    std::string m_remoteCosRegion;
                    bool m_remoteCosRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_CREATECLUSTERSNAPSHOTREQUEST_H_
