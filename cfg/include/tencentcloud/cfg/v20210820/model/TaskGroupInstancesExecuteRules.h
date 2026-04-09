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
                     * 获取<p>实例选取模式</p><p>枚举值：</p><ul><li>1： 全部注入</li><li>2： 随机选取指定比例注入</li><li>3： 随机选取指定数量注入</li></ul>
                     * @return TaskGroupInstancesExecuteMode <p>实例选取模式</p><p>枚举值：</p><ul><li>1： 全部注入</li><li>2： 随机选取指定比例注入</li><li>3： 随机选取指定数量注入</li></ul>
                     * 
                     */
                    int64_t GetTaskGroupInstancesExecuteMode() const;

                    /**
                     * 设置<p>实例选取模式</p><p>枚举值：</p><ul><li>1： 全部注入</li><li>2： 随机选取指定比例注入</li><li>3： 随机选取指定数量注入</li></ul>
                     * @param _taskGroupInstancesExecuteMode <p>实例选取模式</p><p>枚举值：</p><ul><li>1： 全部注入</li><li>2： 随机选取指定比例注入</li><li>3： 随机选取指定数量注入</li></ul>
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
                     * 获取<p>按比例选取模式下选取比例</p>
                     * @return TaskGroupInstancesExecutePercent <p>按比例选取模式下选取比例</p>
                     * 
                     */
                    int64_t GetTaskGroupInstancesExecutePercent() const;

                    /**
                     * 设置<p>按比例选取模式下选取比例</p>
                     * @param _taskGroupInstancesExecutePercent <p>按比例选取模式下选取比例</p>
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
                     * 获取<p>按数量选取模式下选取数量</p>
                     * @return TaskGroupInstancesExecuteNum <p>按数量选取模式下选取数量</p>
                     * 
                     */
                    int64_t GetTaskGroupInstancesExecuteNum() const;

                    /**
                     * 设置<p>按数量选取模式下选取数量</p>
                     * @param _taskGroupInstancesExecuteNum <p>按数量选取模式下选取数量</p>
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
                     * <p>实例选取模式</p><p>枚举值：</p><ul><li>1： 全部注入</li><li>2： 随机选取指定比例注入</li><li>3： 随机选取指定数量注入</li></ul>
                     */
                    int64_t m_taskGroupInstancesExecuteMode;
                    bool m_taskGroupInstancesExecuteModeHasBeenSet;

                    /**
                     * <p>按比例选取模式下选取比例</p>
                     */
                    int64_t m_taskGroupInstancesExecutePercent;
                    bool m_taskGroupInstancesExecutePercentHasBeenSet;

                    /**
                     * <p>按数量选取模式下选取数量</p>
                     */
                    int64_t m_taskGroupInstancesExecuteNum;
                    bool m_taskGroupInstancesExecuteNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUPINSTANCESEXECUTERULES_H_
