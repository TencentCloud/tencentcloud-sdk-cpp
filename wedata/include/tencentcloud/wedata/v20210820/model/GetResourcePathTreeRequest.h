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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_GETRESOURCEPATHTREEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_GETRESOURCEPATHTREEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * GetResourcePathTree请求参数结构体
                */
                class GetResourcePathTreeRequest : public AbstractModel
                {
                public:
                    GetResourcePathTreeRequest();
                    ~GetResourcePathTreeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取资源名称
                     * @return Name 资源名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置资源名称
                     * @param _name 资源名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取资源文件类型
                     * @return FileType 资源文件类型
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置资源文件类型
                     * @param _fileType 资源文件类型
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取资源路径
                     * @return FilePath 资源路径
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置资源路径
                     * @param _filePath 资源路径
                     * 
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取文件夹类型
                     * @return DirectoryType 文件夹类型
                     * 
                     */
                    std::string GetDirectoryType() const;

                    /**
                     * 设置文件夹类型
                     * @param _directoryType 文件夹类型
                     * 
                     */
                    void SetDirectoryType(const std::string& _directoryType);

                    /**
                     * 判断参数 DirectoryType 是否已赋值
                     * @return DirectoryType 是否已赋值
                     * 
                     */
                    bool DirectoryTypeHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 资源名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 资源文件类型
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 资源路径
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * 文件夹类型
                     */
                    std::string m_directoryType;
                    bool m_directoryTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_GETRESOURCEPATHTREEREQUEST_H_
