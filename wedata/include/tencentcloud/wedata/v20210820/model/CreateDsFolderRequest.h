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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEDSFOLDERREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEDSFOLDERREQUEST_H_

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
                * CreateDsFolder请求参数结构体
                */
                class CreateDsFolderRequest : public AbstractModel
                {
                public:
                    CreateDsFolderRequest();
                    ~CreateDsFolderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param _projectId 项目Id
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
                     * 获取父文件夹ID
                     * @return ParentsFolderId 父文件夹ID
                     * 
                     */
                    std::string GetParentsFolderId() const;

                    /**
                     * 设置父文件夹ID
                     * @param _parentsFolderId 父文件夹ID
                     * 
                     */
                    void SetParentsFolderId(const std::string& _parentsFolderId);

                    /**
                     * 判断参数 ParentsFolderId 是否已赋值
                     * @return ParentsFolderId 是否已赋值
                     * 
                     */
                    bool ParentsFolderIdHasBeenSet() const;

                    /**
                     * 获取文件夹来源 template管理，orchestrationSpace 编排空间
                     * @return FolderForm 文件夹来源 template管理，orchestrationSpace 编排空间
                     * 
                     */
                    std::string GetFolderForm() const;

                    /**
                     * 设置文件夹来源 template管理，orchestrationSpace 编排空间
                     * @param _folderForm 文件夹来源 template管理，orchestrationSpace 编排空间
                     * 
                     */
                    void SetFolderForm(const std::string& _folderForm);

                    /**
                     * 判断参数 FolderForm 是否已赋值
                     * @return FolderForm 是否已赋值
                     * 
                     */
                    bool FolderFormHasBeenSet() const;

                private:

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 文件夹名称
                     */
                    std::string m_folderName;
                    bool m_folderNameHasBeenSet;

                    /**
                     * 父文件夹ID
                     */
                    std::string m_parentsFolderId;
                    bool m_parentsFolderIdHasBeenSet;

                    /**
                     * 文件夹来源 template管理，orchestrationSpace 编排空间
                     */
                    std::string m_folderForm;
                    bool m_folderFormHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEDSFOLDERREQUEST_H_
