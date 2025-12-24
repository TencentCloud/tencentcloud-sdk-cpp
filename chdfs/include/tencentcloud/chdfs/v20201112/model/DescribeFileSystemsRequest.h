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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_DESCRIBEFILESYSTEMSREQUEST_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_DESCRIBEFILESYSTEMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20201112
        {
            namespace Model
            {
                /**
                * DescribeFileSystems请求参数结构体
                */
                class DescribeFileSystemsRequest : public AbstractModel
                {
                public:
                    DescribeFileSystemsRequest();
                    ~DescribeFileSystemsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取起始文件系统ID标记
                     * @return FileSystemIdMarker 起始文件系统ID标记
                     * 
                     */
                    std::string GetFileSystemIdMarker() const;

                    /**
                     * 设置起始文件系统ID标记
                     * @param _fileSystemIdMarker 起始文件系统ID标记
                     * 
                     */
                    void SetFileSystemIdMarker(const std::string& _fileSystemIdMarker);

                    /**
                     * 判断参数 FileSystemIdMarker 是否已赋值
                     * @return FileSystemIdMarker 是否已赋值
                     * 
                     */
                    bool FileSystemIdMarkerHasBeenSet() const;

                private:

                    /**
                     * 起始文件系统ID标记
                     */
                    std::string m_fileSystemIdMarker;
                    bool m_fileSystemIdMarkerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_DESCRIBEFILESYSTEMSREQUEST_H_
