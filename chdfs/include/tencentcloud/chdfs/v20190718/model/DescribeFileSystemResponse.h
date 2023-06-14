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

#ifndef TENCENTCLOUD_CHDFS_V20190718_MODEL_DESCRIBEFILESYSTEMRESPONSE_H_
#define TENCENTCLOUD_CHDFS_V20190718_MODEL_DESCRIBEFILESYSTEMRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chdfs/v20190718/model/FileSystem.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20190718
        {
            namespace Model
            {
                /**
                * DescribeFileSystem返回参数结构体
                */
                class DescribeFileSystemResponse : public AbstractModel
                {
                public:
                    DescribeFileSystemResponse();
                    ~DescribeFileSystemResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取文件系统
                     * @return FileSystem 文件系统
                     * 
                     */
                    FileSystem GetFileSystem() const;

                    /**
                     * 判断参数 FileSystem 是否已赋值
                     * @return FileSystem 是否已赋值
                     * 
                     */
                    bool FileSystemHasBeenSet() const;

                    /**
                     * 获取文件系统已使用容量（已弃用）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileSystemCapacityUsed 文件系统已使用容量（已弃用）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFileSystemCapacityUsed() const;

                    /**
                     * 判断参数 FileSystemCapacityUsed 是否已赋值
                     * @return FileSystemCapacityUsed 是否已赋值
                     * 
                     */
                    bool FileSystemCapacityUsedHasBeenSet() const;

                    /**
                     * 获取已使用容量（byte），包括标准和归档存储
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CapacityUsed 已使用容量（byte），包括标准和归档存储
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCapacityUsed() const;

                    /**
                     * 判断参数 CapacityUsed 是否已赋值
                     * @return CapacityUsed 是否已赋值
                     * 
                     */
                    bool CapacityUsedHasBeenSet() const;

                    /**
                     * 获取已使用归档存储容量（byte）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ArchiveCapacityUsed 已使用归档存储容量（byte）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetArchiveCapacityUsed() const;

                    /**
                     * 判断参数 ArchiveCapacityUsed 是否已赋值
                     * @return ArchiveCapacityUsed 是否已赋值
                     * 
                     */
                    bool ArchiveCapacityUsedHasBeenSet() const;

                private:

                    /**
                     * 文件系统
                     */
                    FileSystem m_fileSystem;
                    bool m_fileSystemHasBeenSet;

                    /**
                     * 文件系统已使用容量（已弃用）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_fileSystemCapacityUsed;
                    bool m_fileSystemCapacityUsedHasBeenSet;

                    /**
                     * 已使用容量（byte），包括标准和归档存储
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_capacityUsed;
                    bool m_capacityUsedHasBeenSet;

                    /**
                     * 已使用归档存储容量（byte）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_archiveCapacityUsed;
                    bool m_archiveCapacityUsedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20190718_MODEL_DESCRIBEFILESYSTEMRESPONSE_H_
