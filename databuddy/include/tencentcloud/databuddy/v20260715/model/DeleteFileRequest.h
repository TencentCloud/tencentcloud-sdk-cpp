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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_DELETEFILEREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_DELETEFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * DeleteFile请求参数结构体
                */
                class DeleteFileRequest : public AbstractModel
                {
                public:
                    DeleteFileRequest();
                    ~DeleteFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>工作空间 ID。来源：ListWorkspaces 接口返回的 WorkspaceId</p>
                     * @return WorkspaceId <p>工作空间 ID。来源：ListWorkspaces 接口返回的 WorkspaceId</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>工作空间 ID。来源：ListWorkspaces 接口返回的 WorkspaceId</p>
                     * @param _workspaceId <p>工作空间 ID。来源：ListWorkspaces 接口返回的 WorkspaceId</p>
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
                     * 获取<p>文件 ID。来源：CreateFile / ListFiles / GetFile 接口返回的 FileId</p>
                     * @return FileId <p>文件 ID。来源：CreateFile / ListFiles / GetFile 接口返回的 FileId</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>文件 ID。来源：CreateFile / ListFiles / GetFile 接口返回的 FileId</p>
                     * @param _fileId <p>文件 ID。来源：CreateFile / ListFiles / GetFile 接口返回的 FileId</p>
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取<p>文件类型。取值：FILE（普通文件/脚本）、NOTEBOOK_FILE（Notebook）、SQL_FILE（SQL文件）。对应 common/domain/entity.proto EntityType</p>
                     * @return FileType <p>文件类型。取值：FILE（普通文件/脚本）、NOTEBOOK_FILE（Notebook）、SQL_FILE（SQL文件）。对应 common/domain/entity.proto EntityType</p>
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置<p>文件类型。取值：FILE（普通文件/脚本）、NOTEBOOK_FILE（Notebook）、SQL_FILE（SQL文件）。对应 common/domain/entity.proto EntityType</p>
                     * @param _fileType <p>文件类型。取值：FILE（普通文件/脚本）、NOTEBOOK_FILE（Notebook）、SQL_FILE（SQL文件）。对应 common/domain/entity.proto EntityType</p>
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                private:

                    /**
                     * <p>工作空间 ID。来源：ListWorkspaces 接口返回的 WorkspaceId</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>文件 ID。来源：CreateFile / ListFiles / GetFile 接口返回的 FileId</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>文件类型。取值：FILE（普通文件/脚本）、NOTEBOOK_FILE（Notebook）、SQL_FILE（SQL文件）。对应 common/domain/entity.proto EntityType</p>
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_DELETEFILEREQUEST_H_
