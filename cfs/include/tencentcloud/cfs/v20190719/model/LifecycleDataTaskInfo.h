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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_LIFECYCLEDATATASKINFO_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_LIFECYCLEDATATASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 生命周期任务
                */
                class LifecycleDataTaskInfo : public AbstractModel
                {
                public:
                    LifecycleDataTaskInfo();
                    ~LifecycleDataTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务id
                     * @return TaskId 任务id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务id
                     * @param _taskId 任务id
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
                     * 获取任务状态.
init：未执行
running：执行中，finished：已完成
,failed：失败
,stopping：停止中,stopped：已停止
                     * @return TaskStatus 任务状态.
init：未执行
running：执行中，finished：已完成
,failed：失败
,stopping：停止中,stopped：已停止
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置任务状态.
init：未执行
running：执行中，finished：已完成
,failed：失败
,stopping：停止中,stopped：已停止
                     * @param _taskStatus 任务状态.
init：未执行
running：执行中，finished：已完成
,failed：失败
,stopping：停止中,stopped：已停止
                     * 
                     */
                    void SetTaskStatus(const std::string& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取任务创建时间
                     * @return CreationTime 任务创建时间
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置任务创建时间
                     * @param _creationTime 任务创建时间
                     * 
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取任务结束时间
                     * @return FinishTime 任务结束时间
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置任务结束时间
                     * @param _finishTime 任务结束时间
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取文件总数
                     * @return FileTotalCount 文件总数
                     * 
                     */
                    uint64_t GetFileTotalCount() const;

                    /**
                     * 设置文件总数
                     * @param _fileTotalCount 文件总数
                     * 
                     */
                    void SetFileTotalCount(const uint64_t& _fileTotalCount);

                    /**
                     * 判断参数 FileTotalCount 是否已赋值
                     * @return FileTotalCount 是否已赋值
                     * 
                     */
                    bool FileTotalCountHasBeenSet() const;

                    /**
                     * 获取处理成功文件数量
                     * @return FileSuccessedCount 处理成功文件数量
                     * 
                     */
                    uint64_t GetFileSuccessedCount() const;

                    /**
                     * 设置处理成功文件数量
                     * @param _fileSuccessedCount 处理成功文件数量
                     * 
                     */
                    void SetFileSuccessedCount(const uint64_t& _fileSuccessedCount);

                    /**
                     * 判断参数 FileSuccessedCount 是否已赋值
                     * @return FileSuccessedCount 是否已赋值
                     * 
                     */
                    bool FileSuccessedCountHasBeenSet() const;

                    /**
                     * 获取当前已经失败的文件数
                     * @return FileFailedCount 当前已经失败的文件数
                     * 
                     */
                    uint64_t GetFileFailedCount() const;

                    /**
                     * 设置当前已经失败的文件数
                     * @param _fileFailedCount 当前已经失败的文件数
                     * 
                     */
                    void SetFileFailedCount(const uint64_t& _fileFailedCount);

                    /**
                     * 判断参数 FileFailedCount 是否已赋值
                     * @return FileFailedCount 是否已赋值
                     * 
                     */
                    bool FileFailedCountHasBeenSet() const;

                    /**
                     * 获取文件容量，单位Byte


                     * @return FileTotalSize 文件容量，单位Byte


                     * 
                     */
                    uint64_t GetFileTotalSize() const;

                    /**
                     * 设置文件容量，单位Byte


                     * @param _fileTotalSize 文件容量，单位Byte


                     * 
                     */
                    void SetFileTotalSize(const uint64_t& _fileTotalSize);

                    /**
                     * 判断参数 FileTotalSize 是否已赋值
                     * @return FileTotalSize 是否已赋值
                     * 
                     */
                    bool FileTotalSizeHasBeenSet() const;

                    /**
                     * 获取已处理完成的文件容量，单位Byte


                     * @return FileSuccessedSize 已处理完成的文件容量，单位Byte


                     * 
                     */
                    uint64_t GetFileSuccessedSize() const;

                    /**
                     * 设置已处理完成的文件容量，单位Byte


                     * @param _fileSuccessedSize 已处理完成的文件容量，单位Byte


                     * 
                     */
                    void SetFileSuccessedSize(const uint64_t& _fileSuccessedSize);

                    /**
                     * 判断参数 FileSuccessedSize 是否已赋值
                     * @return FileSuccessedSize 是否已赋值
                     * 
                     */
                    bool FileSuccessedSizeHasBeenSet() const;

                    /**
                     * 获取已处理失败文件容量，单位Byte

                     * @return FileFailedSize 已处理失败文件容量，单位Byte

                     * 
                     */
                    uint64_t GetFileFailedSize() const;

                    /**
                     * 设置已处理失败文件容量，单位Byte

                     * @param _fileFailedSize 已处理失败文件容量，单位Byte

                     * 
                     */
                    void SetFileFailedSize(const uint64_t& _fileFailedSize);

                    /**
                     * 判断参数 FileFailedSize 是否已赋值
                     * @return FileFailedSize 是否已赋值
                     * 
                     */
                    bool FileFailedSizeHasBeenSet() const;

                    /**
                     * 获取总文件列表
                     * @return FileTotalList 总文件列表
                     * 
                     */
                    std::string GetFileTotalList() const;

                    /**
                     * 设置总文件列表
                     * @param _fileTotalList 总文件列表
                     * 
                     */
                    void SetFileTotalList(const std::string& _fileTotalList);

                    /**
                     * 判断参数 FileTotalList 是否已赋值
                     * @return FileTotalList 是否已赋值
                     * 
                     */
                    bool FileTotalListHasBeenSet() const;

                    /**
                     * 获取成功的文件列表
                     * @return FileSuccessedList 成功的文件列表
                     * 
                     */
                    std::string GetFileSuccessedList() const;

                    /**
                     * 设置成功的文件列表
                     * @param _fileSuccessedList 成功的文件列表
                     * 
                     */
                    void SetFileSuccessedList(const std::string& _fileSuccessedList);

                    /**
                     * 判断参数 FileSuccessedList 是否已赋值
                     * @return FileSuccessedList 是否已赋值
                     * 
                     */
                    bool FileSuccessedListHasBeenSet() const;

                    /**
                     * 获取失败文件的列表
                     * @return FileFailedList 失败文件的列表
                     * 
                     */
                    std::string GetFileFailedList() const;

                    /**
                     * 设置失败文件的列表
                     * @param _fileFailedList 失败文件的列表
                     * 
                     */
                    void SetFileFailedList(const std::string& _fileFailedList);

                    /**
                     * 判断参数 FileFailedList 是否已赋值
                     * @return FileFailedList 是否已赋值
                     * 
                     */
                    bool FileFailedListHasBeenSet() const;

                    /**
                     * 获取FileSystemId
                     * @return FileSystemId FileSystemId
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置FileSystemId
                     * @param _fileSystemId FileSystemId
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
                     * 获取任务路径
                     * @return TaskPath 任务路径
                     * 
                     */
                    std::string GetTaskPath() const;

                    /**
                     * 设置任务路径
                     * @param _taskPath 任务路径
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
                     * 获取任务类型,archive:表示沉降任务，restore：表示拉取任务
                     * @return Type 任务类型,archive:表示沉降任务，restore：表示拉取任务
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置任务类型,archive:表示沉降任务，restore：表示拉取任务
                     * @param _type 任务类型,archive:表示沉降任务，restore：表示拉取任务
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取数据流动Id
                     * @return DataFlowId 数据流动Id
                     * 
                     */
                    std::string GetDataFlowId() const;

                    /**
                     * 设置数据流动Id
                     * @param _dataFlowId 数据流动Id
                     * 
                     */
                    void SetDataFlowId(const std::string& _dataFlowId);

                    /**
                     * 判断参数 DataFlowId 是否已赋值
                     * @return DataFlowId 是否已赋值
                     * 
                     */
                    bool DataFlowIdHasBeenSet() const;

                private:

                    /**
                     * 任务id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务状态.
init：未执行
running：执行中，finished：已完成
,failed：失败
,stopping：停止中,stopped：已停止
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 任务创建时间
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 任务结束时间
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * 文件总数
                     */
                    uint64_t m_fileTotalCount;
                    bool m_fileTotalCountHasBeenSet;

                    /**
                     * 处理成功文件数量
                     */
                    uint64_t m_fileSuccessedCount;
                    bool m_fileSuccessedCountHasBeenSet;

                    /**
                     * 当前已经失败的文件数
                     */
                    uint64_t m_fileFailedCount;
                    bool m_fileFailedCountHasBeenSet;

                    /**
                     * 文件容量，单位Byte


                     */
                    uint64_t m_fileTotalSize;
                    bool m_fileTotalSizeHasBeenSet;

                    /**
                     * 已处理完成的文件容量，单位Byte


                     */
                    uint64_t m_fileSuccessedSize;
                    bool m_fileSuccessedSizeHasBeenSet;

                    /**
                     * 已处理失败文件容量，单位Byte

                     */
                    uint64_t m_fileFailedSize;
                    bool m_fileFailedSizeHasBeenSet;

                    /**
                     * 总文件列表
                     */
                    std::string m_fileTotalList;
                    bool m_fileTotalListHasBeenSet;

                    /**
                     * 成功的文件列表
                     */
                    std::string m_fileSuccessedList;
                    bool m_fileSuccessedListHasBeenSet;

                    /**
                     * 失败文件的列表
                     */
                    std::string m_fileFailedList;
                    bool m_fileFailedListHasBeenSet;

                    /**
                     * FileSystemId
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 任务路径
                     */
                    std::string m_taskPath;
                    bool m_taskPathHasBeenSet;

                    /**
                     * 任务类型,archive:表示沉降任务，restore：表示拉取任务
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 数据流动Id
                     */
                    std::string m_dataFlowId;
                    bool m_dataFlowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_LIFECYCLEDATATASKINFO_H_
