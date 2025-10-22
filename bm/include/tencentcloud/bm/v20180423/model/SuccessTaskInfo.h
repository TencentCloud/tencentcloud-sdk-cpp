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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_SUCCESSTASKINFO_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_SUCCESSTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * 成功运行的自定义脚本信息
                */
                class SuccessTaskInfo : public AbstractModel
                {
                public:
                    SuccessTaskInfo();
                    ~SuccessTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取运行脚本的设备ID
                     * @return InstanceId 运行脚本的设备ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置运行脚本的设备ID
                     * @param _instanceId 运行脚本的设备ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取黑石异步任务ID
                     * @return TaskId 黑石异步任务ID
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置黑石异步任务ID
                     * @param _taskId 黑石异步任务ID
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取黑石自定义脚本运行任务ID
                     * @return CmdTaskId 黑石自定义脚本运行任务ID
                     * 
                     */
                    std::string GetCmdTaskId() const;

                    /**
                     * 设置黑石自定义脚本运行任务ID
                     * @param _cmdTaskId 黑石自定义脚本运行任务ID
                     * 
                     */
                    void SetCmdTaskId(const std::string& _cmdTaskId);

                    /**
                     * 判断参数 CmdTaskId 是否已赋值
                     * @return CmdTaskId 是否已赋值
                     * 
                     */
                    bool CmdTaskIdHasBeenSet() const;

                private:

                    /**
                     * 运行脚本的设备ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 黑石异步任务ID
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 黑石自定义脚本运行任务ID
                     */
                    std::string m_cmdTaskId;
                    bool m_cmdTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_SUCCESSTASKINFO_H_
