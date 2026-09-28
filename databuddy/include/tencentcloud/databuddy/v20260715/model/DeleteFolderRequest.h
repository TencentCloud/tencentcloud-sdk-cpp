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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_DELETEFOLDERREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_DELETEFOLDERREQUEST_H_

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
                * DeleteFolder请求参数结构体
                */
                class DeleteFolderRequest : public AbstractModel
                {
                public:
                    DeleteFolderRequest();
                    ~DeleteFolderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>工作空间id</p>
                     * @return WorkspaceId <p>工作空间id</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>工作空间id</p>
                     * @param _workspaceId <p>工作空间id</p>
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
                     * 获取<p>待删除的文件夹</p>
                     * @return Folder <p>待删除的文件夹</p>
                     * 
                     */
                    FolderLocator GetFolder() const;

                    /**
                     * 设置<p>待删除的文件夹</p>
                     * @param _folder <p>待删除的文件夹</p>
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
                     * 获取<p>软删除还是从回收站硬删除</p><p>枚举值：</p><ul><li>false： 软删除到回收站</li><li>true： 从回收站硬删除</li></ul>
                     * @return ForceDelete <p>软删除还是从回收站硬删除</p><p>枚举值：</p><ul><li>false： 软删除到回收站</li><li>true： 从回收站硬删除</li></ul>
                     * 
                     */
                    bool GetForceDelete() const;

                    /**
                     * 设置<p>软删除还是从回收站硬删除</p><p>枚举值：</p><ul><li>false： 软删除到回收站</li><li>true： 从回收站硬删除</li></ul>
                     * @param _forceDelete <p>软删除还是从回收站硬删除</p><p>枚举值：</p><ul><li>false： 软删除到回收站</li><li>true： 从回收站硬删除</li></ul>
                     * 
                     */
                    void SetForceDelete(const bool& _forceDelete);

                    /**
                     * 判断参数 ForceDelete 是否已赋值
                     * @return ForceDelete 是否已赋值
                     * 
                     */
                    bool ForceDeleteHasBeenSet() const;

                private:

                    /**
                     * <p>工作空间id</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>待删除的文件夹</p>
                     */
                    FolderLocator m_folder;
                    bool m_folderHasBeenSet;

                    /**
                     * <p>软删除还是从回收站硬删除</p><p>枚举值：</p><ul><li>false： 软删除到回收站</li><li>true： 从回收站硬删除</li></ul>
                     */
                    bool m_forceDelete;
                    bool m_forceDeleteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_DELETEFOLDERREQUEST_H_
