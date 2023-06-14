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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_UPDATECFSFILESYSTEMNAMERESPONSE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_UPDATECFSFILESYSTEMNAMERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * UpdateCfsFileSystemName返回参数结构体
                */
                class UpdateCfsFileSystemNameResponse : public AbstractModel
                {
                public:
                    UpdateCfsFileSystemNameResponse();
                    ~UpdateCfsFileSystemNameResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用户自定义文件系统名称
                     * @return CreationToken 用户自定义文件系统名称
                     * 
                     */
                    std::string GetCreationToken() const;

                    /**
                     * 判断参数 CreationToken 是否已赋值
                     * @return CreationToken 是否已赋值
                     * 
                     */
                    bool CreationTokenHasBeenSet() const;

                    /**
                     * 获取文件系统ID
                     * @return FileSystemId 文件系统ID
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取用户自定义文件系统名称
                     * @return FsName 用户自定义文件系统名称
                     * 
                     */
                    std::string GetFsName() const;

                    /**
                     * 判断参数 FsName 是否已赋值
                     * @return FsName 是否已赋值
                     * 
                     */
                    bool FsNameHasBeenSet() const;

                private:

                    /**
                     * 用户自定义文件系统名称
                     */
                    std::string m_creationToken;
                    bool m_creationTokenHasBeenSet;

                    /**
                     * 文件系统ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 用户自定义文件系统名称
                     */
                    std::string m_fsName;
                    bool m_fsNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_UPDATECFSFILESYSTEMNAMERESPONSE_H_
