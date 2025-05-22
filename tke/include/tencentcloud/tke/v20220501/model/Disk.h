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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_DISK_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_DISK_H_

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
        namespace V20220501
        {
            namespace Model
            {
                /**
                * 节点系统盘和数据盘配置
                */
                class Disk : public AbstractModel
                {
                public:
                    Disk();
                    ~Disk() = default;
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
                     * 获取文件系统
                     * @return FileSystem 文件系统
                     * 
                     */
                    std::string GetFileSystem() const;

                    /**
                     * 设置文件系统
                     * @param _fileSystem 文件系统
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
                     * 获取云盘ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskId 云盘ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置云盘ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diskId 云盘ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     * 
                     */
                    bool DiskIdHasBeenSet() const;

                private:

                    /**
                     * 云盘类型
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

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
                     * 文件系统
                     */
                    std::string m_fileSystem;
                    bool m_fileSystemHasBeenSet;

                    /**
                     * 挂载目录
                     */
                    std::string m_mountTarget;
                    bool m_mountTargetHasBeenSet;

                    /**
                     * 云盘ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_DISK_H_
