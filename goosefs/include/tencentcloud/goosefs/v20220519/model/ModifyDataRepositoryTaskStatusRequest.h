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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_MODIFYDATAREPOSITORYTASKSTATUSREQUEST_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_MODIFYDATAREPOSITORYTASKSTATUSREQUEST_H_

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
                * ModifyDataRepositoryTaskStatus请求参数结构体
                */
                class ModifyDataRepositoryTaskStatusRequest : public AbstractModel
                {
                public:
                    ModifyDataRepositoryTaskStatusRequest();
                    ~ModifyDataRepositoryTaskStatusRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>数据流动任务ID</p>
                     * @return TaskId <p>数据流动任务ID</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>数据流动任务ID</p>
                     * @param _taskId <p>数据流动任务ID</p>
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
                     * 获取<p>修改数据流动任务目标状态对应的类型，仅支持任务暂停和恢复（暂停对应pause，恢复对应resume）</p><p>枚举值：</p><ul><li>pause： 暂停</li><li>resume： 恢复</li></ul>
                     * @return ModifyType <p>修改数据流动任务目标状态对应的类型，仅支持任务暂停和恢复（暂停对应pause，恢复对应resume）</p><p>枚举值：</p><ul><li>pause： 暂停</li><li>resume： 恢复</li></ul>
                     * 
                     */
                    std::string GetModifyType() const;

                    /**
                     * 设置<p>修改数据流动任务目标状态对应的类型，仅支持任务暂停和恢复（暂停对应pause，恢复对应resume）</p><p>枚举值：</p><ul><li>pause： 暂停</li><li>resume： 恢复</li></ul>
                     * @param _modifyType <p>修改数据流动任务目标状态对应的类型，仅支持任务暂停和恢复（暂停对应pause，恢复对应resume）</p><p>枚举值：</p><ul><li>pause： 暂停</li><li>resume： 恢复</li></ul>
                     * 
                     */
                    void SetModifyType(const std::string& _modifyType);

                    /**
                     * 判断参数 ModifyType 是否已赋值
                     * @return ModifyType 是否已赋值
                     * 
                     */
                    bool ModifyTypeHasBeenSet() const;

                private:

                    /**
                     * <p>文件系统ID</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>数据流动任务ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>修改数据流动任务目标状态对应的类型，仅支持任务暂停和恢复（暂停对应pause，恢复对应resume）</p><p>枚举值：</p><ul><li>pause： 暂停</li><li>resume： 恢复</li></ul>
                     */
                    std::string m_modifyType;
                    bool m_modifyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_MODIFYDATAREPOSITORYTASKSTATUSREQUEST_H_
