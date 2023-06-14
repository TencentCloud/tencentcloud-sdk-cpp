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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_USERCMDTASK_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_USERCMDTASK_H_

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
                * 自定义脚本任务信息
                */
                class UserCmdTask : public AbstractModel
                {
                public:
                    UserCmdTask();
                    ~UserCmdTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
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
                     * 获取任务状态ID，取值: -1(进行中) 0(结束)
                     * @return Status 任务状态ID，取值: -1(进行中) 0(结束)
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置任务状态ID，取值: -1(进行中) 0(结束)
                     * @param _status 任务状态ID，取值: -1(进行中) 0(结束)
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取脚本名称
                     * @return Alias 脚本名称
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置脚本名称
                     * @param _alias 脚本名称
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取脚本ID
                     * @return CmdId 脚本ID
                     * 
                     */
                    std::string GetCmdId() const;

                    /**
                     * 设置脚本ID
                     * @param _cmdId 脚本ID
                     * 
                     */
                    void SetCmdId(const std::string& _cmdId);

                    /**
                     * 判断参数 CmdId 是否已赋值
                     * @return CmdId 是否已赋值
                     * 
                     */
                    bool CmdIdHasBeenSet() const;

                    /**
                     * 获取运行实例数量
                     * @return InstanceCount 运行实例数量
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置运行实例数量
                     * @param _instanceCount 运行实例数量
                     * 
                     */
                    void SetInstanceCount(const uint64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取运行成功数量
                     * @return SuccessCount 运行成功数量
                     * 
                     */
                    uint64_t GetSuccessCount() const;

                    /**
                     * 设置运行成功数量
                     * @param _successCount 运行成功数量
                     * 
                     */
                    void SetSuccessCount(const uint64_t& _successCount);

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取运行失败数量
                     * @return FailureCount 运行失败数量
                     * 
                     */
                    uint64_t GetFailureCount() const;

                    /**
                     * 设置运行失败数量
                     * @param _failureCount 运行失败数量
                     * 
                     */
                    void SetFailureCount(const uint64_t& _failureCount);

                    /**
                     * 判断参数 FailureCount 是否已赋值
                     * @return FailureCount 是否已赋值
                     * 
                     */
                    bool FailureCountHasBeenSet() const;

                    /**
                     * 获取执行开始时间
                     * @return RunBeginTime 执行开始时间
                     * 
                     */
                    std::string GetRunBeginTime() const;

                    /**
                     * 设置执行开始时间
                     * @param _runBeginTime 执行开始时间
                     * 
                     */
                    void SetRunBeginTime(const std::string& _runBeginTime);

                    /**
                     * 判断参数 RunBeginTime 是否已赋值
                     * @return RunBeginTime 是否已赋值
                     * 
                     */
                    bool RunBeginTimeHasBeenSet() const;

                    /**
                     * 获取执行结束时间
                     * @return RunEndTime 执行结束时间
                     * 
                     */
                    std::string GetRunEndTime() const;

                    /**
                     * 设置执行结束时间
                     * @param _runEndTime 执行结束时间
                     * 
                     */
                    void SetRunEndTime(const std::string& _runEndTime);

                    /**
                     * 判断参数 RunEndTime 是否已赋值
                     * @return RunEndTime 是否已赋值
                     * 
                     */
                    bool RunEndTimeHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务状态ID，取值: -1(进行中) 0(结束)
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 脚本名称
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 脚本ID
                     */
                    std::string m_cmdId;
                    bool m_cmdIdHasBeenSet;

                    /**
                     * 运行实例数量
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 运行成功数量
                     */
                    uint64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * 运行失败数量
                     */
                    uint64_t m_failureCount;
                    bool m_failureCountHasBeenSet;

                    /**
                     * 执行开始时间
                     */
                    std::string m_runBeginTime;
                    bool m_runBeginTimeHasBeenSet;

                    /**
                     * 执行结束时间
                     */
                    std::string m_runEndTime;
                    bool m_runEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_USERCMDTASK_H_
