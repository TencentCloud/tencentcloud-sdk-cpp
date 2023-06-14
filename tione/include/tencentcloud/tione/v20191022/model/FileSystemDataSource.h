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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_FILESYSTEMDATASOURCE_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_FILESYSTEMDATASOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            namespace Model
            {
                /**
                * 文件系统输入数据源
                */
                class FileSystemDataSource : public AbstractModel
                {
                public:
                    FileSystemDataSource();
                    ~FileSystemDataSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件系统目录
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DirectoryPath 文件系统目录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDirectoryPath() const;

                    /**
                     * 设置文件系统目录
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _directoryPath 文件系统目录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDirectoryPath(const std::string& _directoryPath);

                    /**
                     * 判断参数 DirectoryPath 是否已赋值
                     * @return DirectoryPath 是否已赋值
                     * 
                     */
                    bool DirectoryPathHasBeenSet() const;

                    /**
                     * 获取文件系统类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileSystemType 文件系统类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileSystemType() const;

                    /**
                     * 设置文件系统类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileSystemType 文件系统类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileSystemType(const std::string& _fileSystemType);

                    /**
                     * 判断参数 FileSystemType 是否已赋值
                     * @return FileSystemType 是否已赋值
                     * 
                     */
                    bool FileSystemTypeHasBeenSet() const;

                    /**
                     * 获取文件系统访问模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileSystemAccessMode 文件系统访问模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileSystemAccessMode() const;

                    /**
                     * 设置文件系统访问模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileSystemAccessMode 文件系统访问模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileSystemAccessMode(const std::string& _fileSystemAccessMode);

                    /**
                     * 判断参数 FileSystemAccessMode 是否已赋值
                     * @return FileSystemAccessMode 是否已赋值
                     * 
                     */
                    bool FileSystemAccessModeHasBeenSet() const;

                    /**
                     * 获取文件系统ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileSystemId 文件系统ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置文件系统ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileSystemId 文件系统ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                private:

                    /**
                     * 文件系统目录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_directoryPath;
                    bool m_directoryPathHasBeenSet;

                    /**
                     * 文件系统类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileSystemType;
                    bool m_fileSystemTypeHasBeenSet;

                    /**
                     * 文件系统访问模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileSystemAccessMode;
                    bool m_fileSystemAccessModeHasBeenSet;

                    /**
                     * 文件系统ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_FILESYSTEMDATASOURCE_H_
