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
                     * 获取<p>任务id</p>
                     * @return TaskId <p>任务id</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务id</p>
                     * @param _taskId <p>任务id</p>
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
                     * 获取<p>任务状态</p><p>枚举值：</p><ul><li>init： 排队中</li><li>running： 执行中</li><li>finished： 已完成</li><li>failed： 失败</li><li>stopping： 停止中</li><li>stopped： 已停止</li></ul>
                     * @return TaskStatus <p>任务状态</p><p>枚举值：</p><ul><li>init： 排队中</li><li>running： 执行中</li><li>finished： 已完成</li><li>failed： 失败</li><li>stopping： 停止中</li><li>stopped： 已停止</li></ul>
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置<p>任务状态</p><p>枚举值：</p><ul><li>init： 排队中</li><li>running： 执行中</li><li>finished： 已完成</li><li>failed： 失败</li><li>stopping： 停止中</li><li>stopped： 已停止</li></ul>
                     * @param _taskStatus <p>任务状态</p><p>枚举值：</p><ul><li>init： 排队中</li><li>running： 执行中</li><li>finished： 已完成</li><li>failed： 失败</li><li>stopping： 停止中</li><li>stopped： 已停止</li></ul>
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
                     * 获取<p>任务创建时间</p>
                     * @return CreationTime <p>任务创建时间</p>
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置<p>任务创建时间</p>
                     * @param _creationTime <p>任务创建时间</p>
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
                     * 获取<p>任务结束时间</p>
                     * @return FinishTime <p>任务结束时间</p>
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置<p>任务结束时间</p>
                     * @param _finishTime <p>任务结束时间</p>
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
                     * 获取<p>文件总数</p>
                     * @return FileTotalCount <p>文件总数</p>
                     * 
                     */
                    uint64_t GetFileTotalCount() const;

                    /**
                     * 设置<p>文件总数</p>
                     * @param _fileTotalCount <p>文件总数</p>
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
                     * 获取<p>处理成功文件数量</p>
                     * @return FileSuccessedCount <p>处理成功文件数量</p>
                     * 
                     */
                    uint64_t GetFileSuccessedCount() const;

                    /**
                     * 设置<p>处理成功文件数量</p>
                     * @param _fileSuccessedCount <p>处理成功文件数量</p>
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
                     * 获取<p>当前已经失败的文件数</p>
                     * @return FileFailedCount <p>当前已经失败的文件数</p>
                     * 
                     */
                    uint64_t GetFileFailedCount() const;

                    /**
                     * 设置<p>当前已经失败的文件数</p>
                     * @param _fileFailedCount <p>当前已经失败的文件数</p>
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
                     * 获取<p>文件容量，单位Byte</p>
                     * @return FileTotalSize <p>文件容量，单位Byte</p>
                     * 
                     */
                    uint64_t GetFileTotalSize() const;

                    /**
                     * 设置<p>文件容量，单位Byte</p>
                     * @param _fileTotalSize <p>文件容量，单位Byte</p>
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
                     * 获取<p>已处理完成的文件容量，单位Byte</p>
                     * @return FileSuccessedSize <p>已处理完成的文件容量，单位Byte</p>
                     * 
                     */
                    uint64_t GetFileSuccessedSize() const;

                    /**
                     * 设置<p>已处理完成的文件容量，单位Byte</p>
                     * @param _fileSuccessedSize <p>已处理完成的文件容量，单位Byte</p>
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
                     * 获取<p>已处理失败文件容量，单位Byte</p>
                     * @return FileFailedSize <p>已处理失败文件容量，单位Byte</p>
                     * 
                     */
                    uint64_t GetFileFailedSize() const;

                    /**
                     * 设置<p>已处理失败文件容量，单位Byte</p>
                     * @param _fileFailedSize <p>已处理失败文件容量，单位Byte</p>
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
                     * 获取<p>总文件列表</p>
                     * @return FileTotalList <p>总文件列表</p>
                     * 
                     */
                    std::string GetFileTotalList() const;

                    /**
                     * 设置<p>总文件列表</p>
                     * @param _fileTotalList <p>总文件列表</p>
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
                     * 获取<p>成功的文件列表</p>
                     * @return FileSuccessedList <p>成功的文件列表</p>
                     * 
                     */
                    std::string GetFileSuccessedList() const;

                    /**
                     * 设置<p>成功的文件列表</p>
                     * @param _fileSuccessedList <p>成功的文件列表</p>
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
                     * 获取<p>失败文件的列表</p>
                     * @return FileFailedList <p>失败文件的列表</p>
                     * 
                     */
                    std::string GetFileFailedList() const;

                    /**
                     * 设置<p>失败文件的列表</p>
                     * @param _fileFailedList <p>失败文件的列表</p>
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
                     * 获取<p>FileSystemId</p>
                     * @return FileSystemId <p>FileSystemId</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>FileSystemId</p>
                     * @param _fileSystemId <p>FileSystemId</p>
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
                     * 获取<p>任务名称</p>
                     * @return TaskName <p>任务名称</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>任务名称</p>
                     * @param _taskName <p>任务名称</p>
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
                     * 获取<p>任务路径</p>
                     * @return TaskPath <p>任务路径</p>
                     * 
                     */
                    std::string GetTaskPath() const;

                    /**
                     * 设置<p>任务路径</p>
                     * @param _taskPath <p>任务路径</p>
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
                     * 获取<p>任务类型,archive:表示沉降任务，restore：表示拉取任务</p>
                     * @return Type <p>任务类型,archive:表示沉降任务，restore：表示拉取任务</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>任务类型,archive:表示沉降任务，restore：表示拉取任务</p>
                     * @param _type <p>任务类型,archive:表示沉降任务，restore：表示拉取任务</p>
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
                     * 获取<p>数据流动Id</p>
                     * @return DataFlowId <p>数据流动Id</p>
                     * 
                     */
                    std::string GetDataFlowId() const;

                    /**
                     * 设置<p>数据流动Id</p>
                     * @param _dataFlowId <p>数据流动Id</p>
                     * 
                     */
                    void SetDataFlowId(const std::string& _dataFlowId);

                    /**
                     * 判断参数 DataFlowId 是否已赋值
                     * @return DataFlowId 是否已赋值
                     * 
                     */
                    bool DataFlowIdHasBeenSet() const;

                    /**
                     * 获取<p>当CFSTurbo内的文件和外置存储存在同名情况时，是否覆盖。</p><p>ture：覆盖</p><p>false：不覆盖（同时也不会释放热存数据）<br>为空时，默认为false</p>
                     * @return IsOverwrite <p>当CFSTurbo内的文件和外置存储存在同名情况时，是否覆盖。</p><p>ture：覆盖</p><p>false：不覆盖（同时也不会释放热存数据）<br>为空时，默认为false</p>
                     * 
                     */
                    bool GetIsOverwrite() const;

                    /**
                     * 设置<p>当CFSTurbo内的文件和外置存储存在同名情况时，是否覆盖。</p><p>ture：覆盖</p><p>false：不覆盖（同时也不会释放热存数据）<br>为空时，默认为false</p>
                     * @param _isOverwrite <p>当CFSTurbo内的文件和外置存储存在同名情况时，是否覆盖。</p><p>ture：覆盖</p><p>false：不覆盖（同时也不会释放热存数据）<br>为空时，默认为false</p>
                     * 
                     */
                    void SetIsOverwrite(const bool& _isOverwrite);

                    /**
                     * 判断参数 IsOverwrite 是否已赋值
                     * @return IsOverwrite 是否已赋值
                     * 
                     */
                    bool IsOverwriteHasBeenSet() const;

                    /**
                     * 获取<p>【新增】数据清单文件路径，清单文件内每行一条待处理文件的完整路径。与 TaskPath 二选一。路径必须以 /cfs 开头，且必须为 CFS 文件系统内已存在的文件。示例值：/cfs/lists/archive_list.txt</p>
                     * @return ListPath <p>【新增】数据清单文件路径，清单文件内每行一条待处理文件的完整路径。与 TaskPath 二选一。路径必须以 /cfs 开头，且必须为 CFS 文件系统内已存在的文件。示例值：/cfs/lists/archive_list.txt</p>
                     * 
                     */
                    std::string GetListPath() const;

                    /**
                     * 设置<p>【新增】数据清单文件路径，清单文件内每行一条待处理文件的完整路径。与 TaskPath 二选一。路径必须以 /cfs 开头，且必须为 CFS 文件系统内已存在的文件。示例值：/cfs/lists/archive_list.txt</p>
                     * @param _listPath <p>【新增】数据清单文件路径，清单文件内每行一条待处理文件的完整路径。与 TaskPath 二选一。路径必须以 /cfs 开头，且必须为 CFS 文件系统内已存在的文件。示例值：/cfs/lists/archive_list.txt</p>
                     * 
                     */
                    void SetListPath(const std::string& _listPath);

                    /**
                     * 判断参数 ListPath 是否已赋值
                     * @return ListPath 是否已赋值
                     * 
                     */
                    bool ListPathHasBeenSet() const;

                private:

                    /**
                     * <p>任务id</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务状态</p><p>枚举值：</p><ul><li>init： 排队中</li><li>running： 执行中</li><li>finished： 已完成</li><li>failed： 失败</li><li>stopping： 停止中</li><li>stopped： 已停止</li></ul>
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * <p>任务创建时间</p>
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * <p>任务结束时间</p>
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * <p>文件总数</p>
                     */
                    uint64_t m_fileTotalCount;
                    bool m_fileTotalCountHasBeenSet;

                    /**
                     * <p>处理成功文件数量</p>
                     */
                    uint64_t m_fileSuccessedCount;
                    bool m_fileSuccessedCountHasBeenSet;

                    /**
                     * <p>当前已经失败的文件数</p>
                     */
                    uint64_t m_fileFailedCount;
                    bool m_fileFailedCountHasBeenSet;

                    /**
                     * <p>文件容量，单位Byte</p>
                     */
                    uint64_t m_fileTotalSize;
                    bool m_fileTotalSizeHasBeenSet;

                    /**
                     * <p>已处理完成的文件容量，单位Byte</p>
                     */
                    uint64_t m_fileSuccessedSize;
                    bool m_fileSuccessedSizeHasBeenSet;

                    /**
                     * <p>已处理失败文件容量，单位Byte</p>
                     */
                    uint64_t m_fileFailedSize;
                    bool m_fileFailedSizeHasBeenSet;

                    /**
                     * <p>总文件列表</p>
                     */
                    std::string m_fileTotalList;
                    bool m_fileTotalListHasBeenSet;

                    /**
                     * <p>成功的文件列表</p>
                     */
                    std::string m_fileSuccessedList;
                    bool m_fileSuccessedListHasBeenSet;

                    /**
                     * <p>失败文件的列表</p>
                     */
                    std::string m_fileFailedList;
                    bool m_fileFailedListHasBeenSet;

                    /**
                     * <p>FileSystemId</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>任务名称</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>任务路径</p>
                     */
                    std::string m_taskPath;
                    bool m_taskPathHasBeenSet;

                    /**
                     * <p>任务类型,archive:表示沉降任务，restore：表示拉取任务</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>数据流动Id</p>
                     */
                    std::string m_dataFlowId;
                    bool m_dataFlowIdHasBeenSet;

                    /**
                     * <p>当CFSTurbo内的文件和外置存储存在同名情况时，是否覆盖。</p><p>ture：覆盖</p><p>false：不覆盖（同时也不会释放热存数据）<br>为空时，默认为false</p>
                     */
                    bool m_isOverwrite;
                    bool m_isOverwriteHasBeenSet;

                    /**
                     * <p>【新增】数据清单文件路径，清单文件内每行一条待处理文件的完整路径。与 TaskPath 二选一。路径必须以 /cfs 开头，且必须为 CFS 文件系统内已存在的文件。示例值：/cfs/lists/archive_list.txt</p>
                     */
                    std::string m_listPath;
                    bool m_listPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_LIFECYCLEDATATASKINFO_H_
