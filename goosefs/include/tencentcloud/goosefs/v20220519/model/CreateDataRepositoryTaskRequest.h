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
                     * 获取<p>数据流通任务类型, FS_TO_COS(文件系统到COS Bucket),或者COS_TO_FS(COS Bucket到文件系统)</p>
                     * @return TaskType <p>数据流通任务类型, FS_TO_COS(文件系统到COS Bucket),或者COS_TO_FS(COS Bucket到文件系统)</p>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置<p>数据流通任务类型, FS_TO_COS(文件系统到COS Bucket),或者COS_TO_FS(COS Bucket到文件系统)</p>
                     * @param _taskType <p>数据流通任务类型, FS_TO_COS(文件系统到COS Bucket),或者COS_TO_FS(COS Bucket到文件系统)</p>
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
                     * 获取<p>COS存储桶名</p>
                     * @return Bucket <p>COS存储桶名</p>
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置<p>COS存储桶名</p>
                     * @param _bucket <p>COS存储桶名</p>
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
                     * 获取<p>文件系统ID</p>
                     * @return FileSystemId <p>文件系统ID</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>文件系统ID</p>
                     * @param _fileSystemId <p>文件系统ID</p>
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
                     * 获取<p>对于FS_TO_COS, TaskPath是Bucket映射目录的相对路径, 对于COS_TO_FS是COS上的路径。如果置为空, 则表示全部数据</p>
                     * @return TaskPath <p>对于FS_TO_COS, TaskPath是Bucket映射目录的相对路径, 对于COS_TO_FS是COS上的路径。如果置为空, 则表示全部数据</p>
                     * 
                     */
                    std::string GetTaskPath() const;

                    /**
                     * 设置<p>对于FS_TO_COS, TaskPath是Bucket映射目录的相对路径, 对于COS_TO_FS是COS上的路径。如果置为空, 则表示全部数据</p>
                     * @param _taskPath <p>对于FS_TO_COS, TaskPath是Bucket映射目录的相对路径, 对于COS_TO_FS是COS上的路径。如果置为空, 则表示全部数据</p>
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
                     * 获取<p>任务路径是否表示绝对路径（暂时仅支持沉降使用）</p>
                     * @return IsTaskPathAbsolute <p>任务路径是否表示绝对路径（暂时仅支持沉降使用）</p>
                     * 
                     */
                    bool GetIsTaskPathAbsolute() const;

                    /**
                     * 设置<p>任务路径是否表示绝对路径（暂时仅支持沉降使用）</p>
                     * @param _isTaskPathAbsolute <p>任务路径是否表示绝对路径（暂时仅支持沉降使用）</p>
                     * 
                     */
                    void SetIsTaskPathAbsolute(const bool& _isTaskPathAbsolute);

                    /**
                     * 判断参数 IsTaskPathAbsolute 是否已赋值
                     * @return IsTaskPathAbsolute 是否已赋值
                     * 
                     */
                    bool IsTaskPathAbsoluteHasBeenSet() const;

                    /**
                     * 获取<p>数据流通方式 MSP_AFM 手动加载  RAW_AFM 按需加载</p>
                     * @return RepositoryType <p>数据流通方式 MSP_AFM 手动加载  RAW_AFM 按需加载</p>
                     * 
                     */
                    std::string GetRepositoryType() const;

                    /**
                     * 设置<p>数据流通方式 MSP_AFM 手动加载  RAW_AFM 按需加载</p>
                     * @param _repositoryType <p>数据流通方式 MSP_AFM 手动加载  RAW_AFM 按需加载</p>
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
                     * 获取<p>文件列表下载地址，以http开头</p>
                     * @return TextLocation <p>文件列表下载地址，以http开头</p>
                     * 
                     */
                    std::string GetTextLocation() const;

                    /**
                     * 设置<p>文件列表下载地址，以http开头</p>
                     * @param _textLocation <p>文件列表下载地址，以http开头</p>
                     * 
                     */
                    void SetTextLocation(const std::string& _textLocation);

                    /**
                     * 判断参数 TextLocation 是否已赋值
                     * @return TextLocation 是否已赋值
                     * 
                     */
                    bool TextLocationHasBeenSet() const;

                    /**
                     * 获取<p>是否开启自定义路径(暂时仅供预热使用)</p>
                     * @return EnableDataFlowSubPath <p>是否开启自定义路径(暂时仅供预热使用)</p>
                     * @deprecated
                     */
                    bool GetEnableDataFlowSubPath() const;

                    /**
                     * 设置<p>是否开启自定义路径(暂时仅供预热使用)</p>
                     * @param _enableDataFlowSubPath <p>是否开启自定义路径(暂时仅供预热使用)</p>
                     * @deprecated
                     */
                    void SetEnableDataFlowSubPath(const bool& _enableDataFlowSubPath);

                    /**
                     * 判断参数 EnableDataFlowSubPath 是否已赋值
                     * @return EnableDataFlowSubPath 是否已赋值
                     * @deprecated
                     */
                    bool EnableDataFlowSubPathHasBeenSet() const;

                    /**
                     * 获取<p>自定义路径(暂时仅供预热使用)</p>
                     * @return DataFlowSubPath <p>自定义路径(暂时仅供预热使用)</p>
                     * @deprecated
                     */
                    std::string GetDataFlowSubPath() const;

                    /**
                     * 设置<p>自定义路径(暂时仅供预热使用)</p>
                     * @param _dataFlowSubPath <p>自定义路径(暂时仅供预热使用)</p>
                     * @deprecated
                     */
                    void SetDataFlowSubPath(const std::string& _dataFlowSubPath);

                    /**
                     * 判断参数 DataFlowSubPath 是否已赋值
                     * @return DataFlowSubPath 是否已赋值
                     * @deprecated
                     */
                    bool DataFlowSubPathHasBeenSet() const;

                    /**
                     * 获取<p>是否开启自定义目的路径（预热任务表示本地路径，沉降任务表示COS桶前缀）</p>
                     * @return EnableCustomDestPath <p>是否开启自定义目的路径（预热任务表示本地路径，沉降任务表示COS桶前缀）</p>
                     * 
                     */
                    bool GetEnableCustomDestPath() const;

                    /**
                     * 设置<p>是否开启自定义目的路径（预热任务表示本地路径，沉降任务表示COS桶前缀）</p>
                     * @param _enableCustomDestPath <p>是否开启自定义目的路径（预热任务表示本地路径，沉降任务表示COS桶前缀）</p>
                     * 
                     */
                    void SetEnableCustomDestPath(const bool& _enableCustomDestPath);

                    /**
                     * 判断参数 EnableCustomDestPath 是否已赋值
                     * @return EnableCustomDestPath 是否已赋值
                     * 
                     */
                    bool EnableCustomDestPathHasBeenSet() const;

                    /**
                     * 获取<p>自定义目的路径（预热任务表示本地路径，沉降任务表示COS桶前缀）</p>
                     * @return CustomDestPath <p>自定义目的路径（预热任务表示本地路径，沉降任务表示COS桶前缀）</p>
                     * 
                     */
                    std::string GetCustomDestPath() const;

                    /**
                     * 设置<p>自定义目的路径（预热任务表示本地路径，沉降任务表示COS桶前缀）</p>
                     * @param _customDestPath <p>自定义目的路径（预热任务表示本地路径，沉降任务表示COS桶前缀）</p>
                     * 
                     */
                    void SetCustomDestPath(const std::string& _customDestPath);

                    /**
                     * 判断参数 CustomDestPath 是否已赋值
                     * @return CustomDestPath 是否已赋值
                     * 
                     */
                    bool CustomDestPathHasBeenSet() const;

                private:

                    /**
                     * <p>数据流通任务类型, FS_TO_COS(文件系统到COS Bucket),或者COS_TO_FS(COS Bucket到文件系统)</p>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>COS存储桶名</p>
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * <p>文件系统ID</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>对于FS_TO_COS, TaskPath是Bucket映射目录的相对路径, 对于COS_TO_FS是COS上的路径。如果置为空, 则表示全部数据</p>
                     */
                    std::string m_taskPath;
                    bool m_taskPathHasBeenSet;

                    /**
                     * <p>任务名称</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>任务路径是否表示绝对路径（暂时仅支持沉降使用）</p>
                     */
                    bool m_isTaskPathAbsolute;
                    bool m_isTaskPathAbsoluteHasBeenSet;

                    /**
                     * <p>数据流通方式 MSP_AFM 手动加载  RAW_AFM 按需加载</p>
                     */
                    std::string m_repositoryType;
                    bool m_repositoryTypeHasBeenSet;

                    /**
                     * <p>文件列表下载地址，以http开头</p>
                     */
                    std::string m_textLocation;
                    bool m_textLocationHasBeenSet;

                    /**
                     * <p>是否开启自定义路径(暂时仅供预热使用)</p>
                     */
                    bool m_enableDataFlowSubPath;
                    bool m_enableDataFlowSubPathHasBeenSet;

                    /**
                     * <p>自定义路径(暂时仅供预热使用)</p>
                     */
                    std::string m_dataFlowSubPath;
                    bool m_dataFlowSubPathHasBeenSet;

                    /**
                     * <p>是否开启自定义目的路径（预热任务表示本地路径，沉降任务表示COS桶前缀）</p>
                     */
                    bool m_enableCustomDestPath;
                    bool m_enableCustomDestPathHasBeenSet;

                    /**
                     * <p>自定义目的路径（预热任务表示本地路径，沉降任务表示COS桶前缀）</p>
                     */
                    std::string m_customDestPath;
                    bool m_customDestPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CREATEDATAREPOSITORYTASKREQUEST_H_
