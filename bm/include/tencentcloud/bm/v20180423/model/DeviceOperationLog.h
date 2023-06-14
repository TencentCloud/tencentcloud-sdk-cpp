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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DEVICEOPERATIONLOG_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DEVICEOPERATIONLOG_H_

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
                * 设备操作日志
                */
                class DeviceOperationLog : public AbstractModel
                {
                public:
                    DeviceOperationLog();
                    ~DeviceOperationLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志的ID
                     * @return Id 日志的ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置日志的ID
                     * @param _id 日志的ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取设备ID
                     * @return InstanceId 设备ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置设备ID
                     * @param _instanceId 设备ID
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
                     * 获取日志对应的操作任务ID
                     * @return TaskId 日志对应的操作任务ID
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置日志对应的操作任务ID
                     * @param _taskId 日志对应的操作任务ID
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
                     * 获取操作任务名称
                     * @return TaskName 操作任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置操作任务名称
                     * @param _taskName 操作任务名称
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
                     * 获取操作任务中文名称
                     * @return TaskDescription 操作任务中文名称
                     * 
                     */
                    std::string GetTaskDescription() const;

                    /**
                     * 设置操作任务中文名称
                     * @param _taskDescription 操作任务中文名称
                     * 
                     */
                    void SetTaskDescription(const std::string& _taskDescription);

                    /**
                     * 判断参数 TaskDescription 是否已赋值
                     * @return TaskDescription 是否已赋值
                     * 
                     */
                    bool TaskDescriptionHasBeenSet() const;

                    /**
                     * 获取操作开始时间
                     * @return StartTime 操作开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置操作开始时间
                     * @param _startTime 操作开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取操作结束时间
                     * @return EndTime 操作结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置操作结束时间
                     * @param _endTime 操作结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取操作状态，0: 正在执行中；1：任务成功； 2: 任务失败。
                     * @return Status 操作状态，0: 正在执行中；1：任务成功； 2: 任务失败。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置操作状态，0: 正在执行中；1：任务成功； 2: 任务失败。
                     * @param _status 操作状态，0: 正在执行中；1：任务成功； 2: 任务失败。
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取操作者
                     * @return OpUin 操作者
                     * 
                     */
                    std::string GetOpUin() const;

                    /**
                     * 设置操作者
                     * @param _opUin 操作者
                     * 
                     */
                    void SetOpUin(const std::string& _opUin);

                    /**
                     * 判断参数 OpUin 是否已赋值
                     * @return OpUin 是否已赋值
                     * 
                     */
                    bool OpUinHasBeenSet() const;

                    /**
                     * 获取操作描述
                     * @return LogDescription 操作描述
                     * 
                     */
                    std::string GetLogDescription() const;

                    /**
                     * 设置操作描述
                     * @param _logDescription 操作描述
                     * 
                     */
                    void SetLogDescription(const std::string& _logDescription);

                    /**
                     * 判断参数 LogDescription 是否已赋值
                     * @return LogDescription 是否已赋值
                     * 
                     */
                    bool LogDescriptionHasBeenSet() const;

                private:

                    /**
                     * 日志的ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 设备ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 日志对应的操作任务ID
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 操作任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 操作任务中文名称
                     */
                    std::string m_taskDescription;
                    bool m_taskDescriptionHasBeenSet;

                    /**
                     * 操作开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 操作结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 操作状态，0: 正在执行中；1：任务成功； 2: 任务失败。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 操作者
                     */
                    std::string m_opUin;
                    bool m_opUinHasBeenSet;

                    /**
                     * 操作描述
                     */
                    std::string m_logDescription;
                    bool m_logDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DEVICEOPERATIONLOG_H_
