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
                     * 获取文件系统唯一 ID
                     * @return FileSystemId 文件系统唯一 ID
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置文件系统唯一 ID
                     * @param _fileSystemId 文件系统唯一 ID
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
                     * 获取生命周期任务类型；archive：沉降；restore：预热；release：数据释放；metaload：元数据加载
                     * @return Type 生命周期任务类型；archive：沉降；restore：预热；release：数据释放；metaload：元数据加载
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置生命周期任务类型；archive：沉降；restore：预热；release：数据释放；metaload：元数据加载
                     * @param _type 生命周期任务类型；archive：沉降；restore：预热；release：数据释放；metaload：元数据加载
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
                     * 获取需要沉降的路径或文件，仅支持传入1个路径，不允许为空。
                     * @return TaskPath 需要沉降的路径或文件，仅支持传入1个路径，不允许为空。
                     * 
                     */
                    std::string GetTaskPath() const;

                    /**
                     * 设置需要沉降的路径或文件，仅支持传入1个路径，不允许为空。
                     * @param _taskPath 需要沉降的路径或文件，仅支持传入1个路径，不允许为空。
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
                     * 获取数据流动 ID ，该接口可以通过 DescribeDataFlow 查询
                     * @return DataFlowId 数据流动 ID ，该接口可以通过 DescribeDataFlow 查询
                     * 
                     */
                    std::string GetDataFlowId() const;

                    /**
                     * 设置数据流动 ID ，该接口可以通过 DescribeDataFlow 查询
                     * @param _dataFlowId 数据流动 ID ，该接口可以通过 DescribeDataFlow 查询
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
                     * 获取	 当CFSTurbo内的文件和外置存储存在同名情况时，是否覆盖。  ture：覆盖  false：不覆盖（同时也不会释放热存数据）  为空时，默认为false
                     * @return IsOverwrite 	 当CFSTurbo内的文件和外置存储存在同名情况时，是否覆盖。  ture：覆盖  false：不覆盖（同时也不会释放热存数据）  为空时，默认为false
                     * 
                     */
                    bool GetIsOverwrite() const;

                    /**
                     * 设置	 当CFSTurbo内的文件和外置存储存在同名情况时，是否覆盖。  ture：覆盖  false：不覆盖（同时也不会释放热存数据）  为空时，默认为false
                     * @param _isOverwrite 	 当CFSTurbo内的文件和外置存储存在同名情况时，是否覆盖。  ture：覆盖  false：不覆盖（同时也不会释放热存数据）  为空时，默认为false
                     * 
                     */
                    void SetIsOverwrite(const bool& _isOverwrite);

                    /**
                     * 判断参数 IsOverwrite 是否已赋值
                     * @return IsOverwrite 是否已赋值
                     * 
                     */
                    bool IsOverwriteHasBeenSet() const;

                private:

                    /**
                     * 文件系统唯一 ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 生命周期任务类型；archive：沉降；restore：预热；release：数据释放；metaload：元数据加载
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 需要沉降的路径或文件，仅支持传入1个路径，不允许为空。
                     */
                    std::string m_taskPath;
                    bool m_taskPathHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 数据流动 ID ，该接口可以通过 DescribeDataFlow 查询
                     */
                    std::string m_dataFlowId;
                    bool m_dataFlowIdHasBeenSet;

                    /**
                     * 	 当CFSTurbo内的文件和外置存储存在同名情况时，是否覆盖。  ture：覆盖  false：不覆盖（同时也不会释放热存数据）  为空时，默认为false
                     */
                    bool m_isOverwrite;
                    bool m_isOverwriteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CREATELIFECYCLEDATATASKREQUEST_H_
