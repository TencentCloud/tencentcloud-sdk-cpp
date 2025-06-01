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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_UPDATECFSFILESYSTEMNAMEREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_UPDATECFSFILESYSTEMNAMEREQUEST_H_

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
                * UpdateCfsFileSystemName请求参数结构体
                */
                class UpdateCfsFileSystemNameRequest : public AbstractModel
                {
                public:
                    UpdateCfsFileSystemNameRequest();
                    ~UpdateCfsFileSystemNameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件系统 ID,通过[查询文件系统接口](https://cloud.tencent.com/document/api/582/38170)获取
                     * @return FileSystemId 文件系统 ID,通过[查询文件系统接口](https://cloud.tencent.com/document/api/582/38170)获取
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置文件系统 ID,通过[查询文件系统接口](https://cloud.tencent.com/document/api/582/38170)获取
                     * @param _fileSystemId 文件系统 ID,通过[查询文件系统接口](https://cloud.tencent.com/document/api/582/38170)获取
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取用户自定义文件系统名称，64字节内的中文字母数字或者 _,-,与CreationToken 至少填一个
                     * @return FsName 用户自定义文件系统名称，64字节内的中文字母数字或者 _,-,与CreationToken 至少填一个
                     * 
                     */
                    std::string GetFsName() const;

                    /**
                     * 设置用户自定义文件系统名称，64字节内的中文字母数字或者 _,-,与CreationToken 至少填一个
                     * @param _fsName 用户自定义文件系统名称，64字节内的中文字母数字或者 _,-,与CreationToken 至少填一个
                     * 
                     */
                    void SetFsName(const std::string& _fsName);

                    /**
                     * 判断参数 FsName 是否已赋值
                     * @return FsName 是否已赋值
                     * 
                     */
                    bool FsNameHasBeenSet() const;

                private:

                    /**
                     * 文件系统 ID,通过[查询文件系统接口](https://cloud.tencent.com/document/api/582/38170)获取
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 用户自定义文件系统名称，64字节内的中文字母数字或者 _,-,与CreationToken 至少填一个
                     */
                    std::string m_fsName;
                    bool m_fsNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_UPDATECFSFILESYSTEMNAMEREQUEST_H_
