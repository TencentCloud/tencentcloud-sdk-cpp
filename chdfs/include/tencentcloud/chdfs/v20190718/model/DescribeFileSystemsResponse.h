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

#ifndef TENCENTCLOUD_CHDFS_V20190718_MODEL_DESCRIBEFILESYSTEMSRESPONSE_H_
#define TENCENTCLOUD_CHDFS_V20190718_MODEL_DESCRIBEFILESYSTEMSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chdfs/v20190718/model/FileSystem.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20190718
        {
            namespace Model
            {
                /**
                * DescribeFileSystems返回参数结构体
                */
                class DescribeFileSystemsResponse : public AbstractModel
                {
                public:
                    DescribeFileSystemsResponse();
                    ~DescribeFileSystemsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取文件系统列表
                     * @return FileSystems 文件系统列表
                     * 
                     */
                    std::vector<FileSystem> GetFileSystems() const;

                    /**
                     * 判断参数 FileSystems 是否已赋值
                     * @return FileSystems 是否已赋值
                     * 
                     */
                    bool FileSystemsHasBeenSet() const;

                private:

                    /**
                     * 文件系统列表
                     */
                    std::vector<FileSystem> m_fileSystems;
                    bool m_fileSystemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20190718_MODEL_DESCRIBEFILESYSTEMSRESPONSE_H_
