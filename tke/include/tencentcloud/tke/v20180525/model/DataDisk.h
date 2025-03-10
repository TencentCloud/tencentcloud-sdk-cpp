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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DATADISK_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DATADISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 描述了k8s节点数据盘相关配置与信息。
                */
                class DataDisk : public AbstractModel
                {
                public:
                    DataDisk();
                    ~DataDisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云盘类型
                     * @return DiskType 云盘类型
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置云盘类型
                     * @param _diskType 云盘类型
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取文件系统(ext3/ext4/xfs)
                     * @return FileSystem 文件系统(ext3/ext4/xfs)
                     * 
                     */
                    std::string GetFileSystem() const;

                    /**
                     * 设置文件系统(ext3/ext4/xfs)
                     * @param _fileSystem 文件系统(ext3/ext4/xfs)
                     * 
                     */
                    void SetFileSystem(const std::string& _fileSystem);

                    /**
                     * 判断参数 FileSystem 是否已赋值
                     * @return FileSystem 是否已赋值
                     * 
                     */
                    bool FileSystemHasBeenSet() const;

                    /**
                     * 获取云盘大小(G）
                     * @return DiskSize 云盘大小(G）
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置云盘大小(G）
                     * @param _diskSize 云盘大小(G）
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取是否自动化格式盘并挂载
                     * @return AutoFormatAndMount 是否自动化格式盘并挂载
                     * 
                     */
                    bool GetAutoFormatAndMount() const;

                    /**
                     * 设置是否自动化格式盘并挂载
                     * @param _autoFormatAndMount 是否自动化格式盘并挂载
                     * 
                     */
                    void SetAutoFormatAndMount(const bool& _autoFormatAndMount);

                    /**
                     * 判断参数 AutoFormatAndMount 是否已赋值
                     * @return AutoFormatAndMount 是否已赋值
                     * 
                     */
                    bool AutoFormatAndMountHasBeenSet() const;

                    /**
                     * 获取挂载目录
                     * @return MountTarget 挂载目录
                     * 
                     */
                    std::string GetMountTarget() const;

                    /**
                     * 设置挂载目录
                     * @param _mountTarget 挂载目录
                     * 
                     */
                    void SetMountTarget(const std::string& _mountTarget);

                    /**
                     * 判断参数 MountTarget 是否已赋值
                     * @return MountTarget 是否已赋值
                     * 
                     */
                    bool MountTargetHasBeenSet() const;

                    /**
                     * 获取挂载设备名或分区名，当且仅当添加已有节点时需要
                     * @return DiskPartition 挂载设备名或分区名，当且仅当添加已有节点时需要
                     * 
                     */
                    std::string GetDiskPartition() const;

                    /**
                     * 设置挂载设备名或分区名，当且仅当添加已有节点时需要
                     * @param _diskPartition 挂载设备名或分区名，当且仅当添加已有节点时需要
                     * 
                     */
                    void SetDiskPartition(const std::string& _diskPartition);

                    /**
                     * 判断参数 DiskPartition 是否已赋值
                     * @return DiskPartition 是否已赋值
                     * 
                     */
                    bool DiskPartitionHasBeenSet() const;

                private:

                    /**
                     * 云盘类型
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 文件系统(ext3/ext4/xfs)
                     */
                    std::string m_fileSystem;
                    bool m_fileSystemHasBeenSet;

                    /**
                     * 云盘大小(G）
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 是否自动化格式盘并挂载
                     */
                    bool m_autoFormatAndMount;
                    bool m_autoFormatAndMountHasBeenSet;

                    /**
                     * 挂载目录
                     */
                    std::string m_mountTarget;
                    bool m_mountTargetHasBeenSet;

                    /**
                     * 挂载设备名或分区名，当且仅当添加已有节点时需要
                     */
                    std::string m_diskPartition;
                    bool m_diskPartitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DATADISK_H_
