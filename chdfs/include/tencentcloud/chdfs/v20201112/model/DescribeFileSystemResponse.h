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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_DESCRIBEFILESYSTEMRESPONSE_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_DESCRIBEFILESYSTEMRESPONSE_H_

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
                * DescribeFileSystem返回参数结构体
                */
                class DescribeFileSystemResponse : public AbstractModel
                {
                public:
                    DescribeFileSystemResponse();
                    ~DescribeFileSystemResponse() = default;
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

                    /**
                     * 获取文件系统已使用容量（byte）
                     * @return CapacityUsed 文件系统已使用容量（byte）
                     * 
                     */
                    uint64_t GetCapacityUsed() const;

                    /**
                     * 判断参数 CapacityUsed 是否已赋值
                     * @return CapacityUsed 是否已赋值
                     * 
                     */
                    bool CapacityUsedHasBeenSet() const;

                    /**
                     * 获取已使用COS归档存储容量（byte）
                     * @return ArchiveCapacityUsed 已使用COS归档存储容量（byte）
                     * 
                     */
                    uint64_t GetArchiveCapacityUsed() const;

                    /**
                     * 判断参数 ArchiveCapacityUsed 是否已赋值
                     * @return ArchiveCapacityUsed 是否已赋值
                     * 
                     */
                    bool ArchiveCapacityUsedHasBeenSet() const;

                    /**
                     * 获取已使用COS标准存储容量（byte）
                     * @return StandardCapacityUsed 已使用COS标准存储容量（byte）
                     * 
                     */
                    uint64_t GetStandardCapacityUsed() const;

                    /**
                     * 判断参数 StandardCapacityUsed 是否已赋值
                     * @return StandardCapacityUsed 是否已赋值
                     * 
                     */
                    bool StandardCapacityUsedHasBeenSet() const;

                    /**
                     * 获取已使用COS低频存储容量（byte）
                     * @return DegradeCapacityUsed 已使用COS低频存储容量（byte）
                     * 
                     */
                    uint64_t GetDegradeCapacityUsed() const;

                    /**
                     * 判断参数 DegradeCapacityUsed 是否已赋值
                     * @return DegradeCapacityUsed 是否已赋值
                     * 
                     */
                    bool DegradeCapacityUsedHasBeenSet() const;

                    /**
                     * 获取已使用COS深度归档存储容量（byte）
                     * @return DeepArchiveCapacityUsed 已使用COS深度归档存储容量（byte）
                     * 
                     */
                    uint64_t GetDeepArchiveCapacityUsed() const;

                    /**
                     * 判断参数 DeepArchiveCapacityUsed 是否已赋值
                     * @return DeepArchiveCapacityUsed 是否已赋值
                     * 
                     */
                    bool DeepArchiveCapacityUsedHasBeenSet() const;

                    /**
                     * 获取已使用COS智能分层存储容量（byte）
                     * @return IntelligentCapacityUsed 已使用COS智能分层存储容量（byte）
                     * 
                     */
                    uint64_t GetIntelligentCapacityUsed() const;

                    /**
                     * 判断参数 IntelligentCapacityUsed 是否已赋值
                     * @return IntelligentCapacityUsed 是否已赋值
                     * 
                     */
                    bool IntelligentCapacityUsedHasBeenSet() const;

                private:

                    /**
                     * 文件系统
                     */
                    FileSystem m_fileSystem;
                    bool m_fileSystemHasBeenSet;

                    /**
                     * 文件系统已使用容量（byte）
                     */
                    uint64_t m_capacityUsed;
                    bool m_capacityUsedHasBeenSet;

                    /**
                     * 已使用COS归档存储容量（byte）
                     */
                    uint64_t m_archiveCapacityUsed;
                    bool m_archiveCapacityUsedHasBeenSet;

                    /**
                     * 已使用COS标准存储容量（byte）
                     */
                    uint64_t m_standardCapacityUsed;
                    bool m_standardCapacityUsedHasBeenSet;

                    /**
                     * 已使用COS低频存储容量（byte）
                     */
                    uint64_t m_degradeCapacityUsed;
                    bool m_degradeCapacityUsedHasBeenSet;

                    /**
                     * 已使用COS深度归档存储容量（byte）
                     */
                    uint64_t m_deepArchiveCapacityUsed;
                    bool m_deepArchiveCapacityUsedHasBeenSet;

                    /**
                     * 已使用COS智能分层存储容量（byte）
                     */
                    uint64_t m_intelligentCapacityUsed;
                    bool m_intelligentCapacityUsedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_DESCRIBEFILESYSTEMRESPONSE_H_
