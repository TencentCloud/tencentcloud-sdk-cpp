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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_CREATELIFECYCLEDATATASKREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_CREATELIFECYCLEDATATASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateLifecycleDataTask请求参数结构体
                */
                class CreateLifecycleDataTaskRequest : public AbstractModel
                {
                public:
                    CreateLifecycleDataTaskRequest();
                    ~CreateLifecycleDataTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>文件系统唯一 ID</p>
                     * @return FileSystemId <p>文件系统唯一 ID</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>文件系统唯一 ID</p>
                     * @param _fileSystemId <p>文件系统唯一 ID</p>
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
                     * 获取<p>生命周期任务类型；archive：沉降；restore：预热；release：数据释放；metaload：元数据加载</p>
                     * @return Type <p>生命周期任务类型；archive：沉降；restore：预热；release：数据释放；metaload：元数据加载</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>生命周期任务类型；archive：沉降；restore：预热；release：数据释放；metaload：元数据加载</p>
                     * @param _type <p>生命周期任务类型；archive：沉降；restore：预热；release：数据释放；metaload：元数据加载</p>
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
                     * 获取<p>需要沉降的路径或文件，仅支持传入1个路径，不允许为空。</p>
                     * @return TaskPath <p>需要沉降的路径或文件，仅支持传入1个路径，不允许为空。</p>
                     * 
                     */
                    std::string GetTaskPath() const;

                    /**
                     * 设置<p>需要沉降的路径或文件，仅支持传入1个路径，不允许为空。</p>
                     * @param _taskPath <p>需要沉降的路径或文件，仅支持传入1个路径，不允许为空。</p>
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
                     * 获取<p>数据流动 ID ，该接口可以通过 DescribeDataFlow 查询</p>
                     * @return DataFlowId <p>数据流动 ID ，该接口可以通过 DescribeDataFlow 查询</p>
                     * 
                     */
                    std::string GetDataFlowId() const;

                    /**
                     * 设置<p>数据流动 ID ，该接口可以通过 DescribeDataFlow 查询</p>
                     * @param _dataFlowId <p>数据流动 ID ，该接口可以通过 DescribeDataFlow 查询</p>
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
                     * 获取<p>当CFSTurbo内的文件和外置存储存在同名情况时，是否覆盖。  ture：覆盖  false：不覆盖（同时也不会释放热存数据）  为空时，默认为false</p>
                     * @return IsOverwrite <p>当CFSTurbo内的文件和外置存储存在同名情况时，是否覆盖。  ture：覆盖  false：不覆盖（同时也不会释放热存数据）  为空时，默认为false</p>
                     * 
                     */
                    bool GetIsOverwrite() const;

                    /**
                     * 设置<p>当CFSTurbo内的文件和外置存储存在同名情况时，是否覆盖。  ture：覆盖  false：不覆盖（同时也不会释放热存数据）  为空时，默认为false</p>
                     * @param _isOverwrite <p>当CFSTurbo内的文件和外置存储存在同名情况时，是否覆盖。  ture：覆盖  false：不覆盖（同时也不会释放热存数据）  为空时，默认为false</p>
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
                     * <p>文件系统唯一 ID</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>生命周期任务类型；archive：沉降；restore：预热；release：数据释放；metaload：元数据加载</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>任务名称</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>需要沉降的路径或文件，仅支持传入1个路径，不允许为空。</p>
                     */
                    std::string m_taskPath;
                    bool m_taskPathHasBeenSet;

                    /**
                     * <p>数据流动 ID ，该接口可以通过 DescribeDataFlow 查询</p>
                     */
                    std::string m_dataFlowId;
                    bool m_dataFlowIdHasBeenSet;

                    /**
                     * <p>当CFSTurbo内的文件和外置存储存在同名情况时，是否覆盖。  ture：覆盖  false：不覆盖（同时也不会释放热存数据）  为空时，默认为false</p>
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

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CREATELIFECYCLEDATATASKREQUEST_H_
