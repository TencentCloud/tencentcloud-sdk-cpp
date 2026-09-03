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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CHECKPOINTMOUNTINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CHECKPOINTMOUNTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Checkpoint 挂载摘要
                */
                class CheckpointMountInfo : public AbstractModel
                {
                public:
                    CheckpointMountInfo();
                    ~CheckpointMountInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>存储类型：COS / CFS / CFS_TURBO / GOOSEFS</p>
                     * @return StorageType <p>存储类型：COS / CFS / CFS_TURBO / GOOSEFS</p>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>存储类型：COS / CFS / CFS_TURBO / GOOSEFS</p>
                     * @param _storageType <p>存储类型：COS / CFS / CFS_TURBO / GOOSEFS</p>
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
                     * 获取<p>容器内挂载路径</p>
                     * @return MountPath <p>容器内挂载路径</p>
                     * 
                     */
                    std::string GetMountPath() const;

                    /**
                     * 设置<p>容器内挂载路径</p>
                     * @param _mountPath <p>容器内挂载路径</p>
                     * 
                     */
                    void SetMountPath(const std::string& _mountPath);

                    /**
                     * 判断参数 MountPath 是否已赋值
                     * @return MountPath 是否已赋值
                     * 
                     */
                    bool MountPathHasBeenSet() const;

                    /**
                     * 获取<p>COS key 前缀 或 CFS/GooseFS 子路径</p>
                     * @return VolumeSubPath <p>COS key 前缀 或 CFS/GooseFS 子路径</p>
                     * 
                     */
                    std::string GetVolumeSubPath() const;

                    /**
                     * 设置<p>COS key 前缀 或 CFS/GooseFS 子路径</p>
                     * @param _volumeSubPath <p>COS key 前缀 或 CFS/GooseFS 子路径</p>
                     * 
                     */
                    void SetVolumeSubPath(const std::string& _volumeSubPath);

                    /**
                     * 判断参数 VolumeSubPath 是否已赋值
                     * @return VolumeSubPath 是否已赋值
                     * 
                     */
                    bool VolumeSubPathHasBeenSet() const;

                    /**
                     * 获取<p>实际访问的 COS bucket</p>
                     * @return Bucket <p>实际访问的 COS bucket</p>
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置<p>实际访问的 COS bucket</p>
                     * @param _bucket <p>实际访问的 COS bucket</p>
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取<p>COS region</p>
                     * @return Region <p>COS region</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>COS region</p>
                     * @param _region <p>COS region</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>是否平台托管桶（影响凭证选择）</p>
                     * @return PlatformManaged <p>是否平台托管桶（影响凭证选择）</p>
                     * 
                     */
                    bool GetPlatformManaged() const;

                    /**
                     * 设置<p>是否平台托管桶（影响凭证选择）</p>
                     * @param _platformManaged <p>是否平台托管桶（影响凭证选择）</p>
                     * 
                     */
                    void SetPlatformManaged(const bool& _platformManaged);

                    /**
                     * 判断参数 PlatformManaged 是否已赋值
                     * @return PlatformManaged 是否已赋值
                     * 
                     */
                    bool PlatformManagedHasBeenSet() const;

                    /**
                     * 获取<p>快照在平台 COS 桶中的 key（仅 CFS/GooseFS 有值）</p>
                     * @return SnapshotKey <p>快照在平台 COS 桶中的 key（仅 CFS/GooseFS 有值）</p>
                     * 
                     */
                    std::string GetSnapshotKey() const;

                    /**
                     * 设置<p>快照在平台 COS 桶中的 key（仅 CFS/GooseFS 有值）</p>
                     * @param _snapshotKey <p>快照在平台 COS 桶中的 key（仅 CFS/GooseFS 有值）</p>
                     * 
                     */
                    void SetSnapshotKey(const std::string& _snapshotKey);

                    /**
                     * 判断参数 SnapshotKey 是否已赋值
                     * @return SnapshotKey 是否已赋值
                     * 
                     */
                    bool SnapshotKeyHasBeenSet() const;

                private:

                    /**
                     * <p>存储类型：COS / CFS / CFS_TURBO / GOOSEFS</p>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>容器内挂载路径</p>
                     */
                    std::string m_mountPath;
                    bool m_mountPathHasBeenSet;

                    /**
                     * <p>COS key 前缀 或 CFS/GooseFS 子路径</p>
                     */
                    std::string m_volumeSubPath;
                    bool m_volumeSubPathHasBeenSet;

                    /**
                     * <p>实际访问的 COS bucket</p>
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * <p>COS region</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>是否平台托管桶（影响凭证选择）</p>
                     */
                    bool m_platformManaged;
                    bool m_platformManagedHasBeenSet;

                    /**
                     * <p>快照在平台 COS 桶中的 key（仅 CFS/GooseFS 有值）</p>
                     */
                    std::string m_snapshotKey;
                    bool m_snapshotKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CHECKPOINTMOUNTINFO_H_
