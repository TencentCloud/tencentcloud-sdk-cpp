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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERESOURCEMANAGEPATHTREESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERESOURCEMANAGEPATHTREESREQUEST_H_

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
                * DescribeResourceManagePathTrees请求参数结构体
                */
                class DescribeResourceManagePathTreesRequest : public AbstractModel
                {
                public:
                    DescribeResourceManagePathTreesRequest();
                    ~DescribeResourceManagePathTreesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
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
                     * 获取名字，供搜索
                     * @return Name 名字，供搜索
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名字，供搜索
                     * @param _name 名字，供搜索
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
                     * 获取文件类型
                     * @return FileType 文件类型
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置文件类型
                     * @param _fileType 文件类型
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
                     * 获取文件路径
                     * @return FilePath 文件路径
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置文件路径
                     * @param _filePath 文件路径
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
personal 个人
project 项目
resource 资源
                     * @return DirType 文件夹类型
personal 个人
project 项目
resource 资源
                     * 
                     */
                    std::string GetDirType() const;

                    /**
                     * 设置文件夹类型
personal 个人
project 项目
resource 资源
                     * @param _dirType 文件夹类型
personal 个人
project 项目
resource 资源
                     * 
                     */
                    void SetDirType(const std::string& _dirType);

                    /**
                     * 判断参数 DirType 是否已赋值
                     * @return DirType 是否已赋值
                     * 
                     */
                    bool DirTypeHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 名字，供搜索
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 文件类型
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 文件路径
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * 文件夹类型
personal 个人
project 项目
resource 资源
                     */
                    std::string m_dirType;
                    bool m_dirTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERESOURCEMANAGEPATHTREESREQUEST_H_
