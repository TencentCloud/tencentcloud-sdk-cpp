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

#ifndef TENCENTCLOUD_CHDFS_V20190718_MODEL_CREATERESTORETASKSREQUEST_H_
#define TENCENTCLOUD_CHDFS_V20190718_MODEL_CREATERESTORETASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chdfs/v20190718/model/RestoreTask.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20190718
        {
            namespace Model
            {
                /**
                * CreateRestoreTasks请求参数结构体
                */
                class CreateRestoreTasksRequest : public AbstractModel
                {
                public:
                    CreateRestoreTasksRequest();
                    ~CreateRestoreTasksRequest() = default;
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
                     * 获取多个回热任务，上限为10
                     * @return RestoreTasks 多个回热任务，上限为10
                     * 
                     */
                    std::vector<RestoreTask> GetRestoreTasks() const;

                    /**
                     * 设置多个回热任务，上限为10
                     * @param _restoreTasks 多个回热任务，上限为10
                     * 
                     */
                    void SetRestoreTasks(const std::vector<RestoreTask>& _restoreTasks);

                    /**
                     * 判断参数 RestoreTasks 是否已赋值
                     * @return RestoreTasks 是否已赋值
                     * 
                     */
                    bool RestoreTasksHasBeenSet() const;

                private:

                    /**
                     * 文件系统ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 多个回热任务，上限为10
                     */
                    std::vector<RestoreTask> m_restoreTasks;
                    bool m_restoreTasksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20190718_MODEL_CREATERESTORETASKSREQUEST_H_
