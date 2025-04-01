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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBECLOUDSTORAGEAISERVICETASKREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBECLOUDSTORAGEAISERVICETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * DescribeCloudStorageAIServiceTask请求参数结构体
                */
                class DescribeCloudStorageAIServiceTaskRequest : public AbstractModel
                {
                public:
                    DescribeCloudStorageAIServiceTaskRequest();
                    ~DescribeCloudStorageAIServiceTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务 ID
                     * @return TaskId 任务 ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务 ID
                     * @param _taskId 任务 ID
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
                     * 获取下载 URL 的过期时间。

若传入该参数，则响应中将包含所有文件的下载 URL
                     * @return FileURLExpireTime 下载 URL 的过期时间。

若传入该参数，则响应中将包含所有文件的下载 URL
                     * 
                     */
                    int64_t GetFileURLExpireTime() const;

                    /**
                     * 设置下载 URL 的过期时间。

若传入该参数，则响应中将包含所有文件的下载 URL
                     * @param _fileURLExpireTime 下载 URL 的过期时间。

若传入该参数，则响应中将包含所有文件的下载 URL
                     * 
                     */
                    void SetFileURLExpireTime(const int64_t& _fileURLExpireTime);

                    /**
                     * 判断参数 FileURLExpireTime 是否已赋值
                     * @return FileURLExpireTime 是否已赋值
                     * 
                     */
                    bool FileURLExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 任务 ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 下载 URL 的过期时间。

若传入该参数，则响应中将包含所有文件的下载 URL
                     */
                    int64_t m_fileURLExpireTime;
                    bool m_fileURLExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBECLOUDSTORAGEAISERVICETASKREQUEST_H_
