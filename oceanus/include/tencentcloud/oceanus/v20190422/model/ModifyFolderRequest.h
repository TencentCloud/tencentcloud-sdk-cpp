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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_MODIFYFOLDERREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_MODIFYFOLDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * ModifyFolder请求参数结构体
                */
                class ModifyFolderRequest : public AbstractModel
                {
                public:
                    ModifyFolderRequest();
                    ~ModifyFolderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件夹ID（必填）
                     * @return SourceFolderId 文件夹ID（必填）
                     * 
                     */
                    std::string GetSourceFolderId() const;

                    /**
                     * 设置文件夹ID（必填）
                     * @param _sourceFolderId 文件夹ID（必填）
                     * 
                     */
                    void SetSourceFolderId(const std::string& _sourceFolderId);

                    /**
                     * 判断参数 SourceFolderId 是否已赋值
                     * @return SourceFolderId 是否已赋值
                     * 
                     */
                    bool SourceFolderIdHasBeenSet() const;

                    /**
                     * 获取如需拖拽文件夹，需传入目标文件夹ID
                     * @return TargetFolderId 如需拖拽文件夹，需传入目标文件夹ID
                     * 
                     */
                    std::string GetTargetFolderId() const;

                    /**
                     * 设置如需拖拽文件夹，需传入目标文件夹ID
                     * @param _targetFolderId 如需拖拽文件夹，需传入目标文件夹ID
                     * 
                     */
                    void SetTargetFolderId(const std::string& _targetFolderId);

                    /**
                     * 判断参数 TargetFolderId 是否已赋值
                     * @return TargetFolderId 是否已赋值
                     * 
                     */
                    bool TargetFolderIdHasBeenSet() const;

                    /**
                     * 获取如需修改文件夹名，需传入FolderName字段
                     * @return FolderName 如需修改文件夹名，需传入FolderName字段
                     * 
                     */
                    std::string GetFolderName() const;

                    /**
                     * 设置如需修改文件夹名，需传入FolderName字段
                     * @param _folderName 如需修改文件夹名，需传入FolderName字段
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
                     * 获取文件夹类型，0是任务文件夹，1是依赖文件夹
                     * @return FolderType 文件夹类型，0是任务文件夹，1是依赖文件夹
                     * 
                     */
                    int64_t GetFolderType() const;

                    /**
                     * 设置文件夹类型，0是任务文件夹，1是依赖文件夹
                     * @param _folderType 文件夹类型，0是任务文件夹，1是依赖文件夹
                     * 
                     */
                    void SetFolderType(const int64_t& _folderType);

                    /**
                     * 判断参数 FolderType 是否已赋值
                     * @return FolderType 是否已赋值
                     * 
                     */
                    bool FolderTypeHasBeenSet() const;

                    /**
                     * 获取批量移动的作业serial id 列表
                     * @return SourceJobIds 批量移动的作业serial id 列表
                     * 
                     */
                    std::vector<std::string> GetSourceJobIds() const;

                    /**
                     * 设置批量移动的作业serial id 列表
                     * @param _sourceJobIds 批量移动的作业serial id 列表
                     * 
                     */
                    void SetSourceJobIds(const std::vector<std::string>& _sourceJobIds);

                    /**
                     * 判断参数 SourceJobIds 是否已赋值
                     * @return SourceJobIds 是否已赋值
                     * 
                     */
                    bool SourceJobIdsHasBeenSet() const;

                    /**
                     * 获取工作空间 SerialId
                     * @return WorkSpaceId 工作空间 SerialId
                     * 
                     */
                    std::string GetWorkSpaceId() const;

                    /**
                     * 设置工作空间 SerialId
                     * @param _workSpaceId 工作空间 SerialId
                     * 
                     */
                    void SetWorkSpaceId(const std::string& _workSpaceId);

                    /**
                     * 判断参数 WorkSpaceId 是否已赋值
                     * @return WorkSpaceId 是否已赋值
                     * 
                     */
                    bool WorkSpaceIdHasBeenSet() const;

                private:

                    /**
                     * 文件夹ID（必填）
                     */
                    std::string m_sourceFolderId;
                    bool m_sourceFolderIdHasBeenSet;

                    /**
                     * 如需拖拽文件夹，需传入目标文件夹ID
                     */
                    std::string m_targetFolderId;
                    bool m_targetFolderIdHasBeenSet;

                    /**
                     * 如需修改文件夹名，需传入FolderName字段
                     */
                    std::string m_folderName;
                    bool m_folderNameHasBeenSet;

                    /**
                     * 文件夹类型，0是任务文件夹，1是依赖文件夹
                     */
                    int64_t m_folderType;
                    bool m_folderTypeHasBeenSet;

                    /**
                     * 批量移动的作业serial id 列表
                     */
                    std::vector<std::string> m_sourceJobIds;
                    bool m_sourceJobIdsHasBeenSet;

                    /**
                     * 工作空间 SerialId
                     */
                    std::string m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_MODIFYFOLDERREQUEST_H_
