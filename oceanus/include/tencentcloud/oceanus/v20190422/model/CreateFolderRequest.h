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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_CREATEFOLDERREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_CREATEFOLDERREQUEST_H_

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
                * CreateFolder请求参数结构体
                */
                class CreateFolderRequest : public AbstractModel
                {
                public:
                    CreateFolderRequest();
                    ~CreateFolderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取新建文件夹名
                     * @return FolderName 新建文件夹名
                     * 
                     */
                    std::string GetFolderName() const;

                    /**
                     * 设置新建文件夹名
                     * @param _folderName 新建文件夹名
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
                     * 获取新建文件夹的父目录ID（根目录为"root"）
                     * @return ParentId 新建文件夹的父目录ID（根目录为"root"）
                     * 
                     */
                    std::string GetParentId() const;

                    /**
                     * 设置新建文件夹的父目录ID（根目录为"root"）
                     * @param _parentId 新建文件夹的父目录ID（根目录为"root"）
                     * 
                     */
                    void SetParentId(const std::string& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

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
                     * 新建文件夹名
                     */
                    std::string m_folderName;
                    bool m_folderNameHasBeenSet;

                    /**
                     * 新建文件夹的父目录ID（根目录为"root"）
                     */
                    std::string m_parentId;
                    bool m_parentIdHasBeenSet;

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

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_CREATEFOLDERREQUEST_H_
