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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATEFOLDERREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATEFOLDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/FolderLocator.h>
#include <tencentcloud/databuddy/v20260715/model/GitRepoConfig.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * CreateFolder请求参数结构体
                */
                class CreateFolderRequest : public AbstractModel
                {
                public:
                    CreateFolderRequest();
                    ~CreateFolderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>工作空间名称</p>
                     * @return WorkspaceId <p>工作空间名称</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>工作空间名称</p>
                     * @param _workspaceId <p>工作空间名称</p>
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取<p>文件夹名称</p>
                     * @return FolderName <p>文件夹名称</p>
                     * 
                     */
                    std::string GetFolderName() const;

                    /**
                     * 设置<p>文件夹名称</p>
                     * @param _folderName <p>文件夹名称</p>
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
                     * 获取<p>文件夹类型</p><p>枚举值：</p><ul><li>FOLDER： 文件夹</li><li>GIT_FOLDER： git文件夹</li></ul>
                     * @return FolderType <p>文件夹类型</p><p>枚举值：</p><ul><li>FOLDER： 文件夹</li><li>GIT_FOLDER： git文件夹</li></ul>
                     * 
                     */
                    std::string GetFolderType() const;

                    /**
                     * 设置<p>文件夹类型</p><p>枚举值：</p><ul><li>FOLDER： 文件夹</li><li>GIT_FOLDER： git文件夹</li></ul>
                     * @param _folderType <p>文件夹类型</p><p>枚举值：</p><ul><li>FOLDER： 文件夹</li><li>GIT_FOLDER： git文件夹</li></ul>
                     * 
                     */
                    void SetFolderType(const std::string& _folderType);

                    /**
                     * 判断参数 FolderType 是否已赋值
                     * @return FolderType 是否已赋值
                     * 
                     */
                    bool FolderTypeHasBeenSet() const;

                    /**
                     * 获取<p>父节点</p>
                     * @return ParentFolder <p>父节点</p>
                     * 
                     */
                    FolderLocator GetParentFolder() const;

                    /**
                     * 设置<p>父节点</p>
                     * @param _parentFolder <p>父节点</p>
                     * 
                     */
                    void SetParentFolder(const FolderLocator& _parentFolder);

                    /**
                     * 判断参数 ParentFolder 是否已赋值
                     * @return ParentFolder 是否已赋值
                     * 
                     */
                    bool ParentFolderHasBeenSet() const;

                    /**
                     * 获取<p>git配置，FolderType=GIT_FOLDER 时必填</p>
                     * @return GitConfig <p>git配置，FolderType=GIT_FOLDER 时必填</p>
                     * 
                     */
                    GitRepoConfig GetGitConfig() const;

                    /**
                     * 设置<p>git配置，FolderType=GIT_FOLDER 时必填</p>
                     * @param _gitConfig <p>git配置，FolderType=GIT_FOLDER 时必填</p>
                     * 
                     */
                    void SetGitConfig(const GitRepoConfig& _gitConfig);

                    /**
                     * 判断参数 GitConfig 是否已赋值
                     * @return GitConfig 是否已赋值
                     * 
                     */
                    bool GitConfigHasBeenSet() const;

                private:

                    /**
                     * <p>工作空间名称</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>文件夹名称</p>
                     */
                    std::string m_folderName;
                    bool m_folderNameHasBeenSet;

                    /**
                     * <p>文件夹类型</p><p>枚举值：</p><ul><li>FOLDER： 文件夹</li><li>GIT_FOLDER： git文件夹</li></ul>
                     */
                    std::string m_folderType;
                    bool m_folderTypeHasBeenSet;

                    /**
                     * <p>父节点</p>
                     */
                    FolderLocator m_parentFolder;
                    bool m_parentFolderHasBeenSet;

                    /**
                     * <p>git配置，FolderType=GIT_FOLDER 时必填</p>
                     */
                    GitRepoConfig m_gitConfig;
                    bool m_gitConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATEFOLDERREQUEST_H_
