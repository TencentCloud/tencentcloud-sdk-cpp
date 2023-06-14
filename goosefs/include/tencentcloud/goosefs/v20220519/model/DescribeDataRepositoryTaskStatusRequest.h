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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DESCRIBEDATAREPOSITORYTASKSTATUSREQUEST_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DESCRIBEDATAREPOSITORYTASKSTATUSREQUEST_H_

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
                * DescribeDataRepositoryTaskStatus请求参数结构体
                */
                class DescribeDataRepositoryTaskStatusRequest : public AbstractModel
                {
                public:
                    DescribeDataRepositoryTaskStatusRequest();
                    ~DescribeDataRepositoryTaskStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取task id
                     * @return TaskId task id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置task id
                     * @param _taskId task id
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取file system id
                     * @return FileSystemId file system id
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置file system id
                     * @param _fileSystemId file system id
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                private:

                    /**
                     * task id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * file system id
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DESCRIBEDATAREPOSITORYTASKSTATUSREQUEST_H_
