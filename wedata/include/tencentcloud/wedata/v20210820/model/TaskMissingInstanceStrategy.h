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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKMISSINGINSTANCESTRATEGY_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKMISSINGINSTANCESTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 单任务的缺失实例处理策略
                */
                class TaskMissingInstanceStrategy : public AbstractModel
                {
                public:
                    TaskMissingInstanceStrategy();
                    ~TaskMissingInstanceStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务ID</p>
                     * @return TaskId <p>任务ID</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务ID</p>
                     * @param _taskId <p>任务ID</p>
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
                     * 获取<p>缺失实例处理策略</p>
                     * @return MissingInstanceStrategy <p>缺失实例处理策略</p>
                     * 
                     */
                    std::string GetMissingInstanceStrategy() const;

                    /**
                     * 设置<p>缺失实例处理策略</p>
                     * @param _missingInstanceStrategy <p>缺失实例处理策略</p>
                     * 
                     */
                    void SetMissingInstanceStrategy(const std::string& _missingInstanceStrategy);

                    /**
                     * 判断参数 MissingInstanceStrategy 是否已赋值
                     * @return MissingInstanceStrategy 是否已赋值
                     * 
                     */
                    bool MissingInstanceStrategyHasBeenSet() const;

                private:

                    /**
                     * <p>任务ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>缺失实例处理策略</p>
                     */
                    std::string m_missingInstanceStrategy;
                    bool m_missingInstanceStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKMISSINGINSTANCESTRATEGY_H_
