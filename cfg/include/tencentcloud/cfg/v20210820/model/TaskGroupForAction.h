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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUPFORACTION_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUPFORACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 演练动作组简易配置
                */
                class TaskGroupForAction : public AbstractModel
                {
                public:
                    TaskGroupForAction();
                    ~TaskGroupForAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取动作ID
                     * @return TaskActionId 动作ID
                     * 
                     */
                    int64_t GetTaskActionId() const;

                    /**
                     * 设置动作ID
                     * @param _taskActionId 动作ID
                     * 
                     */
                    void SetTaskActionId(const int64_t& _taskActionId);

                    /**
                     * 判断参数 TaskActionId 是否已赋值
                     * @return TaskActionId 是否已赋值
                     * 
                     */
                    bool TaskActionIdHasBeenSet() const;

                    /**
                     * 获取{"ActionTimeout":1800}
                     * @return TaskActionGeneralConfiguration {"ActionTimeout":1800}
                     * 
                     */
                    std::string GetTaskActionGeneralConfiguration() const;

                    /**
                     * 设置{"ActionTimeout":1800}
                     * @param _taskActionGeneralConfiguration {"ActionTimeout":1800}
                     * 
                     */
                    void SetTaskActionGeneralConfiguration(const std::string& _taskActionGeneralConfiguration);

                    /**
                     * 判断参数 TaskActionGeneralConfiguration 是否已赋值
                     * @return TaskActionGeneralConfiguration 是否已赋值
                     * 
                     */
                    bool TaskActionGeneralConfigurationHasBeenSet() const;

                    /**
                     * 获取{"ip": "0.0.0.0"}
                     * @return TaskActionCustomConfiguration {"ip": "0.0.0.0"}
                     * 
                     */
                    std::string GetTaskActionCustomConfiguration() const;

                    /**
                     * 设置{"ip": "0.0.0.0"}
                     * @param _taskActionCustomConfiguration {"ip": "0.0.0.0"}
                     * 
                     */
                    void SetTaskActionCustomConfiguration(const std::string& _taskActionCustomConfiguration);

                    /**
                     * 判断参数 TaskActionCustomConfiguration 是否已赋值
                     * @return TaskActionCustomConfiguration 是否已赋值
                     * 
                     */
                    bool TaskActionCustomConfigurationHasBeenSet() const;

                private:

                    /**
                     * 动作ID
                     */
                    int64_t m_taskActionId;
                    bool m_taskActionIdHasBeenSet;

                    /**
                     * {"ActionTimeout":1800}
                     */
                    std::string m_taskActionGeneralConfiguration;
                    bool m_taskActionGeneralConfigurationHasBeenSet;

                    /**
                     * {"ip": "0.0.0.0"}
                     */
                    std::string m_taskActionCustomConfiguration;
                    bool m_taskActionCustomConfigurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUPFORACTION_H_
