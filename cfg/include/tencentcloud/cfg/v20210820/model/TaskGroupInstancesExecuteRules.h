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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUPINSTANCESEXECUTERULES_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUPINSTANCESEXECUTERULES_H_

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
                * 机器选取规则
                */
                class TaskGroupInstancesExecuteRules : public AbstractModel
                {
                public:
                    TaskGroupInstancesExecuteRules();
                    ~TaskGroupInstancesExecuteRules() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例选取模式
                     * @return TaskGroupInstancesExecuteMode 实例选取模式
                     * 
                     */
                    int64_t GetTaskGroupInstancesExecuteMode() const;

                    /**
                     * 设置实例选取模式
                     * @param _taskGroupInstancesExecuteMode 实例选取模式
                     * 
                     */
                    void SetTaskGroupInstancesExecuteMode(const int64_t& _taskGroupInstancesExecuteMode);

                    /**
                     * 判断参数 TaskGroupInstancesExecuteMode 是否已赋值
                     * @return TaskGroupInstancesExecuteMode 是否已赋值
                     * 
                     */
                    bool TaskGroupInstancesExecuteModeHasBeenSet() const;

                    /**
                     * 获取按比例选取模式下选取比例
                     * @return TaskGroupInstancesExecutePercent 按比例选取模式下选取比例
                     * 
                     */
                    int64_t GetTaskGroupInstancesExecutePercent() const;

                    /**
                     * 设置按比例选取模式下选取比例
                     * @param _taskGroupInstancesExecutePercent 按比例选取模式下选取比例
                     * 
                     */
                    void SetTaskGroupInstancesExecutePercent(const int64_t& _taskGroupInstancesExecutePercent);

                    /**
                     * 判断参数 TaskGroupInstancesExecutePercent 是否已赋值
                     * @return TaskGroupInstancesExecutePercent 是否已赋值
                     * 
                     */
                    bool TaskGroupInstancesExecutePercentHasBeenSet() const;

                    /**
                     * 获取按数量选取模式下选取数量
                     * @return TaskGroupInstancesExecuteNum 按数量选取模式下选取数量
                     * 
                     */
                    int64_t GetTaskGroupInstancesExecuteNum() const;

                    /**
                     * 设置按数量选取模式下选取数量
                     * @param _taskGroupInstancesExecuteNum 按数量选取模式下选取数量
                     * 
                     */
                    void SetTaskGroupInstancesExecuteNum(const int64_t& _taskGroupInstancesExecuteNum);

                    /**
                     * 判断参数 TaskGroupInstancesExecuteNum 是否已赋值
                     * @return TaskGroupInstancesExecuteNum 是否已赋值
                     * 
                     */
                    bool TaskGroupInstancesExecuteNumHasBeenSet() const;

                private:

                    /**
                     * 实例选取模式
                     */
                    int64_t m_taskGroupInstancesExecuteMode;
                    bool m_taskGroupInstancesExecuteModeHasBeenSet;

                    /**
                     * 按比例选取模式下选取比例
                     */
                    int64_t m_taskGroupInstancesExecutePercent;
                    bool m_taskGroupInstancesExecutePercentHasBeenSet;

                    /**
                     * 按数量选取模式下选取数量
                     */
                    int64_t m_taskGroupInstancesExecuteNum;
                    bool m_taskGroupInstancesExecuteNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUPINSTANCESEXECUTERULES_H_
