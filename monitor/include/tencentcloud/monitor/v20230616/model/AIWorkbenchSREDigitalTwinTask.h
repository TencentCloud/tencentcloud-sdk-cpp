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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_AIWORKBENCHSREDIGITALTWINTASK_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_AIWORKBENCHSREDIGITALTWINTASK_H_

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
                * AI工作台SRE数字分身任务
                */
                class AIWorkbenchSREDigitalTwinTask : public AbstractModel
                {
                public:
                    AIWorkbenchSREDigitalTwinTask();
                    ~AIWorkbenchSREDigitalTwinTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务名称
                     * @return Name 任务名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置任务名称
                     * @param _name 任务名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取任务类型
                     * @return TaskType 任务类型
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型
                     * @param _taskType 任务类型
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
                     * 获取任务配置
                     * @return TaskConfig 任务配置
                     * 
                     */
                    std::string GetTaskConfig() const;

                    /**
                     * 设置任务配置
                     * @param _taskConfig 任务配置
                     * 
                     */
                    void SetTaskConfig(const std::string& _taskConfig);

                    /**
                     * 判断参数 TaskConfig 是否已赋值
                     * @return TaskConfig 是否已赋值
                     * 
                     */
                    bool TaskConfigHasBeenSet() const;

                    /**
                     * 获取唯一标识
                     * @return ID 唯一标识
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置唯一标识
                     * @param _iD 唯一标识
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

                private:

                    /**
                     * 任务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 任务类型
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 任务配置
                     */
                    std::string m_taskConfig;
                    bool m_taskConfigHasBeenSet;

                    /**
                     * 唯一标识
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_AIWORKBENCHSREDIGITALTWINTASK_H_
