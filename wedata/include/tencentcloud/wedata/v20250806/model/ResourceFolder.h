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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCEFOLDER_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCEFOLDER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 资源文件夹详情
                */
                class ResourceFolder : public AbstractModel
                {
                public:
                    ResourceFolder();
                    ~ResourceFolder() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源文件夹ID
                     * @return FolderId 资源文件夹ID
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置资源文件夹ID
                     * @param _folderId 资源文件夹ID
                     * 
                     */
                    void SetFolderId(const std::string& _folderId);

                    /**
                     * 判断参数 FolderId 是否已赋值
                     * @return FolderId 是否已赋值
                     * 
                     */
                    bool FolderIdHasBeenSet() const;

                    /**
                     * 获取创建人ID
                     * @return CreateUserUin 创建人ID
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置创建人ID
                     * @param _createUserUin 创建人ID
                     * 
                     */
                    void SetCreateUserUin(const std::string& _createUserUin);

                    /**
                     * 判断参数 CreateUserUin 是否已赋值
                     * @return CreateUserUin 是否已赋值
                     * 
                     */
                    bool CreateUserUinHasBeenSet() const;

                    /**
                     * 获取创建人名称
                     * @return CreateUserName 创建人名称
                     * 
                     */
                    std::string GetCreateUserName() const;

                    /**
                     * 设置创建人名称
                     * @param _createUserName 创建人名称
                     * 
                     */
                    void SetCreateUserName(const std::string& _createUserName);

                    /**
                     * 判断参数 CreateUserName 是否已赋值
                     * @return CreateUserName 是否已赋值
                     * 
                     */
                    bool CreateUserNameHasBeenSet() const;

                    /**
                     * 获取文件夹路径
                     * @return FolderPath 文件夹路径
                     * 
                     */
                    std::string GetFolderPath() const;

                    /**
                     * 设置文件夹路径
                     * @param _folderPath 文件夹路径
                     * 
                     */
                    void SetFolderPath(const std::string& _folderPath);

                    /**
                     * 判断参数 FolderPath 是否已赋值
                     * @return FolderPath 是否已赋值
                     * 
                     */
                    bool FolderPathHasBeenSet() const;

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
                     * 资源文件夹ID
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * 创建人ID
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * 创建人名称
                     */
                    std::string m_createUserName;
                    bool m_createUserNameHasBeenSet;

                    /**
                     * 文件夹路径
                     */
                    std::string m_folderPath;
                    bool m_folderPathHasBeenSet;

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

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCEFOLDER_H_
