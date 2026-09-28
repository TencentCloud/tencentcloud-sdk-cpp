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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEFOLDERREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEFOLDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/FolderLocator.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * UpdateFolder请求参数结构体
                */
                class UpdateFolderRequest : public AbstractModel
                {
                public:
                    UpdateFolderRequest();
                    ~UpdateFolderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>工作空间ID</p>
                     * @return WorkspaceId <p>工作空间ID</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>工作空间ID</p>
                     * @param _workspaceId <p>工作空间ID</p>
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
                     * 获取<p>待更新文件夹</p>
                     * @return Folder <p>待更新文件夹</p>
                     * 
                     */
                    FolderLocator GetFolder() const;

                    /**
                     * 设置<p>待更新文件夹</p>
                     * @param _folder <p>待更新文件夹</p>
                     * 
                     */
                    void SetFolder(const FolderLocator& _folder);

                    /**
                     * 判断参数 Folder 是否已赋值
                     * @return Folder 是否已赋值
                     * 
                     */
                    bool FolderHasBeenSet() const;

                    /**
                     * 获取<p>操作类型</p><p>枚举值：</p><ul><li>1： 重命名</li><li>2： 移动</li></ul>
                     * @return OperationType <p>操作类型</p><p>枚举值：</p><ul><li>1： 重命名</li><li>2： 移动</li></ul>
                     * 
                     */
                    std::string GetOperationType() const;

                    /**
                     * 设置<p>操作类型</p><p>枚举值：</p><ul><li>1： 重命名</li><li>2： 移动</li></ul>
                     * @param _operationType <p>操作类型</p><p>枚举值：</p><ul><li>1： 重命名</li><li>2： 移动</li></ul>
                     * 
                     */
                    void SetOperationType(const std::string& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                    /**
                     * 获取<p>重命名后的文件名，OperationType = 1时生效</p>
                     * @return FolderName <p>重命名后的文件名，OperationType = 1时生效</p>
                     * 
                     */
                    std::string GetFolderName() const;

                    /**
                     * 设置<p>重命名后的文件名，OperationType = 1时生效</p>
                     * @param _folderName <p>重命名后的文件名，OperationType = 1时生效</p>
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
                     * 获取<p>移动的目的文件夹，OperationType = 2时生效</p>
                     * @return TargetParent <p>移动的目的文件夹，OperationType = 2时生效</p>
                     * 
                     */
                    FolderLocator GetTargetParent() const;

                    /**
                     * 设置<p>移动的目的文件夹，OperationType = 2时生效</p>
                     * @param _targetParent <p>移动的目的文件夹，OperationType = 2时生效</p>
                     * 
                     */
                    void SetTargetParent(const FolderLocator& _targetParent);

                    /**
                     * 判断参数 TargetParent 是否已赋值
                     * @return TargetParent 是否已赋值
                     * 
                     */
                    bool TargetParentHasBeenSet() const;

                private:

                    /**
                     * <p>工作空间ID</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>待更新文件夹</p>
                     */
                    FolderLocator m_folder;
                    bool m_folderHasBeenSet;

                    /**
                     * <p>操作类型</p><p>枚举值：</p><ul><li>1： 重命名</li><li>2： 移动</li></ul>
                     */
                    std::string m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * <p>重命名后的文件名，OperationType = 1时生效</p>
                     */
                    std::string m_folderName;
                    bool m_folderNameHasBeenSet;

                    /**
                     * <p>移动的目的文件夹，OperationType = 2时生效</p>
                     */
                    FolderLocator m_targetParent;
                    bool m_targetParentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEFOLDERREQUEST_H_
