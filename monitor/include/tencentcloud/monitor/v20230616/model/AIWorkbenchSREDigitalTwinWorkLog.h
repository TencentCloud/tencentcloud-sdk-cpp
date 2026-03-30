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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_AIWORKBENCHSREDIGITALTWINWORKLOG_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_AIWORKBENCHSREDIGITALTWINWORKLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * AI工作台SRE数字分身工作日志
                */
                class AIWorkbenchSREDigitalTwinWorkLog : public AbstractModel
                {
                public:
                    AIWorkbenchSREDigitalTwinWorkLog();
                    ~AIWorkbenchSREDigitalTwinWorkLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取唯一标识符
                     * @return ID 唯一标识符
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置唯一标识符
                     * @param _iD 唯一标识符
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedAt 创建时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间
                     * @param _createdAt 创建时间
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取所属数字分身ID
                     * @return TwinID 所属数字分身ID
                     * 
                     */
                    uint64_t GetTwinID() const;

                    /**
                     * 设置所属数字分身ID
                     * @param _twinID 所属数字分身ID
                     * 
                     */
                    void SetTwinID(const uint64_t& _twinID);

                    /**
                     * 判断参数 TwinID 是否已赋值
                     * @return TwinID 是否已赋值
                     * 
                     */
                    bool TwinIDHasBeenSet() const;

                    /**
                     * 获取所属数字分身任务ID
                     * @return TaskID 所属数字分身任务ID
                     * 
                     */
                    uint64_t GetTaskID() const;

                    /**
                     * 设置所属数字分身任务ID
                     * @param _taskID 所属数字分身任务ID
                     * 
                     */
                    void SetTaskID(const uint64_t& _taskID);

                    /**
                     * 判断参数 TaskID 是否已赋值
                     * @return TaskID 是否已赋值
                     * 
                     */
                    bool TaskIDHasBeenSet() const;

                    /**
                     * 获取分析时间
                     * @return StartTime 分析时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置分析时间
                     * @param _startTime 分析时间
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
                     * 获取分析状态
                     * @return Status 分析状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置分析状态
                     * @param _status 分析状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取分析结果摘要
                     * @return Result 分析结果摘要
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置分析结果摘要
                     * @param _result 分析结果摘要
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取所属任务名称
                     * @return TaskName 所属任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置所属任务名称
                     * @param _taskName 所属任务名称
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
                     * 获取所属任务类型
                     * @return TaskType 所属任务类型
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置所属任务类型
                     * @param _taskType 所属任务类型
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                private:

                    /**
                     * 唯一标识符
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 所属数字分身ID
                     */
                    uint64_t m_twinID;
                    bool m_twinIDHasBeenSet;

                    /**
                     * 所属数字分身任务ID
                     */
                    uint64_t m_taskID;
                    bool m_taskIDHasBeenSet;

                    /**
                     * 分析时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 分析状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 分析结果摘要
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 所属任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 所属任务类型
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_AIWORKBENCHSREDIGITALTWINWORKLOG_H_
