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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_FILESYSTEMBYPOLICY_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_FILESYSTEMBYPOLICY_H_

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
                * 绑定快照策略的文件系统信息
                */
                class FileSystemByPolicy : public AbstractModel
                {
                public:
                    FileSystemByPolicy();
                    ~FileSystemByPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件系统名称
                     * @return CreationToken 文件系统名称
                     * 
                     */
                    std::string GetCreationToken() const;

                    /**
                     * 设置文件系统名称
                     * @param _creationToken 文件系统名称
                     * 
                     */
                    void SetCreationToken(const std::string& _creationToken);

                    /**
                     * 判断参数 CreationToken 是否已赋值
                     * @return CreationToken 是否已赋值
                     * 
                     */
                    bool CreationTokenHasBeenSet() const;

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
                     * 获取文件系统大小，单位Byte
                     * @return SizeByte 文件系统大小，单位Byte
                     * 
                     */
                    uint64_t GetSizeByte() const;

                    /**
                     * 设置文件系统大小，单位Byte
                     * @param _sizeByte 文件系统大小，单位Byte
                     * 
                     */
                    void SetSizeByte(const uint64_t& _sizeByte);

                    /**
                     * 判断参数 SizeByte 是否已赋值
                     * @return SizeByte 是否已赋值
                     * 
                     */
                    bool SizeByteHasBeenSet() const;

                    /**
                     * 获取存储类型，HP：通用性能型；SD：通用标准型；TP:turbo性能型；TB：turbo标准型；THP：吞吐型
                     * @return StorageType 存储类型，HP：通用性能型；SD：通用标准型；TP:turbo性能型；TB：turbo标准型；THP：吞吐型
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置存储类型，HP：通用性能型；SD：通用标准型；TP:turbo性能型；TB：turbo标准型；THP：吞吐型
                     * @param _storageType 存储类型，HP：通用性能型；SD：通用标准型；TP:turbo性能型；TB：turbo标准型；THP：吞吐型
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
                     * 获取快照总大小，单位GiB
                     * @return TotalSnapshotSize 快照总大小，单位GiB
                     * 
                     */
                    uint64_t GetTotalSnapshotSize() const;

                    /**
                     * 设置快照总大小，单位GiB
                     * @param _totalSnapshotSize 快照总大小，单位GiB
                     * 
                     */
                    void SetTotalSnapshotSize(const uint64_t& _totalSnapshotSize);

                    /**
                     * 判断参数 TotalSnapshotSize 是否已赋值
                     * @return TotalSnapshotSize 是否已赋值
                     * 
                     */
                    bool TotalSnapshotSizeHasBeenSet() const;

                    /**
                     * 获取文件系统创建时间
                     * @return CreationTime 文件系统创建时间
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置文件系统创建时间
                     * @param _creationTime 文件系统创建时间
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
                     * 获取文件系统所在区ID
                     * @return ZoneId 文件系统所在区ID
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置文件系统所在区ID
                     * @param _zoneId 文件系统所在区ID
                     * 
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                private:

                    /**
                     * 文件系统名称
                     */
                    std::string m_creationToken;
                    bool m_creationTokenHasBeenSet;

                    /**
                     * 文件系统ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 文件系统大小，单位Byte
                     */
                    uint64_t m_sizeByte;
                    bool m_sizeByteHasBeenSet;

                    /**
                     * 存储类型，HP：通用性能型；SD：通用标准型；TP:turbo性能型；TB：turbo标准型；THP：吞吐型
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 快照总大小，单位GiB
                     */
                    uint64_t m_totalSnapshotSize;
                    bool m_totalSnapshotSizeHasBeenSet;

                    /**
                     * 文件系统创建时间
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 文件系统所在区ID
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_FILESYSTEMBYPOLICY_H_
