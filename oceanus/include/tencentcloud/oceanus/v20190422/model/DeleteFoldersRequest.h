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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_DELETEFOLDERSREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_DELETEFOLDERSREQUEST_H_

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
                * DeleteFolders请求参数结构体
                */
                class DeleteFoldersRequest : public AbstractModel
                {
                public:
                    DeleteFoldersRequest();
                    ~DeleteFoldersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需删除的文件夹唯一ID
                     * @return FolderIds 需删除的文件夹唯一ID
                     * 
                     */
                    std::vector<std::string> GetFolderIds() const;

                    /**
                     * 设置需删除的文件夹唯一ID
                     * @param _folderIds 需删除的文件夹唯一ID
                     * 
                     */
                    void SetFolderIds(const std::vector<std::string>& _folderIds);

                    /**
                     * 判断参数 FolderIds 是否已赋值
                     * @return FolderIds 是否已赋值
                     * 
                     */
                    bool FolderIdsHasBeenSet() const;

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
                     * 需删除的文件夹唯一ID
                     */
                    std::vector<std::string> m_folderIds;
                    bool m_folderIdsHasBeenSet;

                    /**
                     * 文件夹类型，0是任务文件夹，1是依赖文件夹
                     */
                    int64_t m_folderType;
                    bool m_folderTypeHasBeenSet;

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

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_DELETEFOLDERSREQUEST_H_
