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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBECFSFILESYSTEMSRESPONSE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBECFSFILESYSTEMSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/FileSystemInfo.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeCfsFileSystems返回参数结构体
                */
                class DescribeCfsFileSystemsResponse : public AbstractModel
                {
                public:
                    DescribeCfsFileSystemsResponse();
                    ~DescribeCfsFileSystemsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取文件系统信息
                     * @return FileSystems 文件系统信息
                     * 
                     */
                    std::vector<FileSystemInfo> GetFileSystems() const;

                    /**
                     * 判断参数 FileSystems 是否已赋值
                     * @return FileSystems 是否已赋值
                     * 
                     */
                    bool FileSystemsHasBeenSet() const;

                    /**
                     * 获取文件系统总数
                     * @return TotalCount 文件系统总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 文件系统信息
                     */
                    std::vector<FileSystemInfo> m_fileSystems;
                    bool m_fileSystemsHasBeenSet;

                    /**
                     * 文件系统总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBECFSFILESYSTEMSRESPONSE_H_
