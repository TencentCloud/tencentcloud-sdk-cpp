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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CREATEDATAREPOSITORYTASKREQUEST_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CREATEDATAREPOSITORYTASKREQUEST_H_

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
                * CreateDataRepositoryTask请求参数结构体
                */
                class CreateDataRepositoryTaskRequest : public AbstractModel
                {
                public:
                    CreateDataRepositoryTaskRequest();
                    ~CreateDataRepositoryTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据流通任务类型, FS_TO_COS(文件系统到COS Bucket),或者COS_TO_FS(COS Bucket到文件系统)
                     * @return TaskType 数据流通任务类型, FS_TO_COS(文件系统到COS Bucket),或者COS_TO_FS(COS Bucket到文件系统)
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置数据流通任务类型, FS_TO_COS(文件系统到COS Bucket),或者COS_TO_FS(COS Bucket到文件系统)
                     * @param _taskType 数据流通任务类型, FS_TO_COS(文件系统到COS Bucket),或者COS_TO_FS(COS Bucket到文件系统)
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取COS存储桶名
                     * @return Bucket COS存储桶名
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置COS存储桶名
                     * @param _bucket COS存储桶名
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

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
                     * 获取对于FS_TO_COS, TaskPath是Bucket映射目录的相对路径, 对于COS_TO_FS是COS上的路径。如果置为空, 则表示全部数据
                     * @return TaskPath 对于FS_TO_COS, TaskPath是Bucket映射目录的相对路径, 对于COS_TO_FS是COS上的路径。如果置为空, 则表示全部数据
                     * 
                     */
                    std::string GetTaskPath() const;

                    /**
                     * 设置对于FS_TO_COS, TaskPath是Bucket映射目录的相对路径, 对于COS_TO_FS是COS上的路径。如果置为空, 则表示全部数据
                     * @param _taskPath 对于FS_TO_COS, TaskPath是Bucket映射目录的相对路径, 对于COS_TO_FS是COS上的路径。如果置为空, 则表示全部数据
                     * 
                     */
                    void SetTaskPath(const std::string& _taskPath);

                    /**
                     * 判断参数 TaskPath 是否已赋值
                     * @return TaskPath 是否已赋值
                     * 
                     */
                    bool TaskPathHasBeenSet() const;

                    /**
                     * 获取任务名称
                     * @return TaskName 任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
                     * @param _taskName 任务名称
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取数据流通方式 MSP_AFM 手动加载  RAW_AFM 按需加载
                     * @return RepositoryType 数据流通方式 MSP_AFM 手动加载  RAW_AFM 按需加载
                     * 
                     */
                    std::string GetRepositoryType() const;

                    /**
                     * 设置数据流通方式 MSP_AFM 手动加载  RAW_AFM 按需加载
                     * @param _repositoryType 数据流通方式 MSP_AFM 手动加载  RAW_AFM 按需加载
                     * 
                     */
                    void SetRepositoryType(const std::string& _repositoryType);

                    /**
                     * 判断参数 RepositoryType 是否已赋值
                     * @return RepositoryType 是否已赋值
                     * 
                     */
                    bool RepositoryTypeHasBeenSet() const;

                    /**
                     * 获取文件列表下载地址，以http开头
                     * @return TextLocation 文件列表下载地址，以http开头
                     * 
                     */
                    std::string GetTextLocation() const;

                    /**
                     * 设置文件列表下载地址，以http开头
                     * @param _textLocation 文件列表下载地址，以http开头
                     * 
                     */
                    void SetTextLocation(const std::string& _textLocation);

                    /**
                     * 判断参数 TextLocation 是否已赋值
                     * @return TextLocation 是否已赋值
                     * 
                     */
                    bool TextLocationHasBeenSet() const;

                private:

                    /**
                     * 数据流通任务类型, FS_TO_COS(文件系统到COS Bucket),或者COS_TO_FS(COS Bucket到文件系统)
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * COS存储桶名
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * 文件系统ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 对于FS_TO_COS, TaskPath是Bucket映射目录的相对路径, 对于COS_TO_FS是COS上的路径。如果置为空, 则表示全部数据
                     */
                    std::string m_taskPath;
                    bool m_taskPathHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 数据流通方式 MSP_AFM 手动加载  RAW_AFM 按需加载
                     */
                    std::string m_repositoryType;
                    bool m_repositoryTypeHasBeenSet;

                    /**
                     * 文件列表下载地址，以http开头
                     */
                    std::string m_textLocation;
                    bool m_textLocationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CREATEDATAREPOSITORYTASKREQUEST_H_
