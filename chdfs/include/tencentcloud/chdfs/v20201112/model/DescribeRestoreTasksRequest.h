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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_DESCRIBERESTORETASKSREQUEST_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_DESCRIBERESTORETASKSREQUEST_H_

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
                * DescribeRestoreTasks请求参数结构体
                */
                class DescribeRestoreTasksRequest : public AbstractModel
                {
                public:
                    DescribeRestoreTasksRequest();
                    ~DescribeRestoreTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件系统ID
                     * @return FileSystemId 文件系统ID
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置文件系统ID
                     * @param _fileSystemId 文件系统ID
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
                     * 获取起始回热任务ID标记
                     * @return RestoreTaskIdMarker 起始回热任务ID标记
                     * 
                     */
                    uint64_t GetRestoreTaskIdMarker() const;

                    /**
                     * 设置起始回热任务ID标记
                     * @param _restoreTaskIdMarker 起始回热任务ID标记
                     * 
                     */
                    void SetRestoreTaskIdMarker(const uint64_t& _restoreTaskIdMarker);

                    /**
                     * 判断参数 RestoreTaskIdMarker 是否已赋值
                     * @return RestoreTaskIdMarker 是否已赋值
                     * 
                     */
                    bool RestoreTaskIdMarkerHasBeenSet() const;

                private:

                    /**
                     * 文件系统ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 起始回热任务ID标记
                     */
                    uint64_t m_restoreTaskIdMarker;
                    bool m_restoreTaskIdMarkerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_DESCRIBERESTORETASKSREQUEST_H_
