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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATERESOURCEFOLDERREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATERESOURCEFOLDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * CreateResourceFolder请求参数结构体
                */
                class CreateResourceFolderRequest : public AbstractModel
                {
                public:
                    CreateResourceFolderRequest();
                    ~CreateResourceFolderRequest() = default;
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
                     * 获取父文件夹绝对路径, 取值示例 /wedata/test, 根目录,请使用/即可
                     * @return ParentFolderPath 父文件夹绝对路径, 取值示例 /wedata/test, 根目录,请使用/即可
                     * 
                     */
                    std::string GetParentFolderPath() const;

                    /**
                     * 设置父文件夹绝对路径, 取值示例 /wedata/test, 根目录,请使用/即可
                     * @param _parentFolderPath 父文件夹绝对路径, 取值示例 /wedata/test, 根目录,请使用/即可
                     * 
                     */
                    void SetParentFolderPath(const std::string& _parentFolderPath);

                    /**
                     * 判断参数 ParentFolderPath 是否已赋值
                     * @return ParentFolderPath 是否已赋值
                     * 
                     */
                    bool ParentFolderPathHasBeenSet() const;

                    /**
                     * 获取文件夹名称
                     * @return FolderName 文件夹名称
                     * 
                     */
                    std::string GetFolderName() const;

                    /**
                     * 设置文件夹名称
                     * @param _folderName 文件夹名称
                     * 
                     */
                    void SetFolderName(const std::string& _folderName);

                    /**
                     * 判断参数 FolderName 是否已赋值
                     * @return FolderName 是否已赋值
                     * 
                     */
                    bool FolderNameHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 父文件夹绝对路径, 取值示例 /wedata/test, 根目录,请使用/即可
                     */
                    std::string m_parentFolderPath;
                    bool m_parentFolderPathHasBeenSet;

                    /**
                     * 文件夹名称
                     */
                    std::string m_folderName;
                    bool m_folderNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATERESOURCEFOLDERREQUEST_H_
