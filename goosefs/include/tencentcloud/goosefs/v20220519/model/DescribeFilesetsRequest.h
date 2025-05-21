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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DESCRIBEFILESETSREQUEST_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DESCRIBEFILESETSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * DescribeFilesets请求参数结构体
                */
                class DescribeFilesetsRequest : public AbstractModel
                {
                public:
                    DescribeFilesetsRequest();
                    ~DescribeFilesetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件系统id
                     * @return FileSystemId 文件系统id
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置文件系统id
                     * @param _fileSystemId 文件系统id
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
                     * 获取FsetId列表
                     * @return FilesetIds FsetId列表
                     * 
                     */
                    std::vector<std::string> GetFilesetIds() const;

                    /**
                     * 设置FsetId列表
                     * @param _filesetIds FsetId列表
                     * 
                     */
                    void SetFilesetIds(const std::vector<std::string>& _filesetIds);

                    /**
                     * 判断参数 FilesetIds 是否已赋值
                     * @return FilesetIds 是否已赋值
                     * 
                     */
                    bool FilesetIdsHasBeenSet() const;

                    /**
                     * 获取FsetDir列表
                     * @return FilesetDirs FsetDir列表
                     * 
                     */
                    std::vector<std::string> GetFilesetDirs() const;

                    /**
                     * 设置FsetDir列表
                     * @param _filesetDirs FsetDir列表
                     * 
                     */
                    void SetFilesetDirs(const std::vector<std::string>& _filesetDirs);

                    /**
                     * 判断参数 FilesetDirs 是否已赋值
                     * @return FilesetDirs 是否已赋值
                     * 
                     */
                    bool FilesetDirsHasBeenSet() const;

                private:

                    /**
                     * 文件系统id
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * FsetId列表
                     */
                    std::vector<std::string> m_filesetIds;
                    bool m_filesetIdsHasBeenSet;

                    /**
                     * FsetDir列表
                     */
                    std::vector<std::string> m_filesetDirs;
                    bool m_filesetDirsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DESCRIBEFILESETSREQUEST_H_
