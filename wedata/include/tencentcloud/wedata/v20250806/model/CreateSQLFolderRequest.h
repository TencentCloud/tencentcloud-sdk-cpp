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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATESQLFOLDERREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATESQLFOLDERREQUEST_H_

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
                * CreateSQLFolder请求参数结构体
                */
                class CreateSQLFolderRequest : public AbstractModel
                {
                public:
                    CreateSQLFolderRequest();
                    ~CreateSQLFolderRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取父文件夹path，/aaa/bbb/ccc，路径头需带斜杠，查询根目录传/
                     * @return ParentFolderPath 父文件夹path，/aaa/bbb/ccc，路径头需带斜杠，查询根目录传/
                     * 
                     */
                    std::string GetParentFolderPath() const;

                    /**
                     * 设置父文件夹path，/aaa/bbb/ccc，路径头需带斜杠，查询根目录传/
                     * @param _parentFolderPath 父文件夹path，/aaa/bbb/ccc，路径头需带斜杠，查询根目录传/
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
                     * 获取权限范围：SHARED, PRIVATE
                     * @return AccessScope 权限范围：SHARED, PRIVATE
                     * 
                     */
                    std::string GetAccessScope() const;

                    /**
                     * 设置权限范围：SHARED, PRIVATE
                     * @param _accessScope 权限范围：SHARED, PRIVATE
                     * 
                     */
                    void SetAccessScope(const std::string& _accessScope);

                    /**
                     * 判断参数 AccessScope 是否已赋值
                     * @return AccessScope 是否已赋值
                     * 
                     */
                    bool AccessScopeHasBeenSet() const;

                private:

                    /**
                     * 文件夹名称
                     */
                    std::string m_folderName;
                    bool m_folderNameHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 父文件夹path，/aaa/bbb/ccc，路径头需带斜杠，查询根目录传/
                     */
                    std::string m_parentFolderPath;
                    bool m_parentFolderPathHasBeenSet;

                    /**
                     * 权限范围：SHARED, PRIVATE
                     */
                    std::string m_accessScope;
                    bool m_accessScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATESQLFOLDERREQUEST_H_
