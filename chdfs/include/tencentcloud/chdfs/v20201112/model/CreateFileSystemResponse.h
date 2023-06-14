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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_CREATEFILESYSTEMRESPONSE_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_CREATEFILESYSTEMRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chdfs/v20201112/model/FileSystem.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20201112
        {
            namespace Model
            {
                /**
                * CreateFileSystem返回参数结构体
                */
                class CreateFileSystemResponse : public AbstractModel
                {
                public:
                    CreateFileSystemResponse();
                    ~CreateFileSystemResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取文件系统
                     * @return FileSystem 文件系统
                     * 
                     */
                    FileSystem GetFileSystem() const;

                    /**
                     * 判断参数 FileSystem 是否已赋值
                     * @return FileSystem 是否已赋值
                     * 
                     */
                    bool FileSystemHasBeenSet() const;

                private:

                    /**
                     * 文件系统
                     */
                    FileSystem m_fileSystem;
                    bool m_fileSystemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_CREATEFILESYSTEMRESPONSE_H_
