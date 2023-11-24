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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TASKCONFIG_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TASKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/TaskGroupConfig.h>
#include <tencentcloud/cfg/v20210820/model/TagWithCreate.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 从经验模板创建演练时需要配置的任务参数
                */
                class TaskConfig : public AbstractModel
                {
                public:
                    TaskConfig();
                    ~TaskConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取动作组配置，需要保证配置个数和经验中的动作组个数一致
                     * @return TaskGroupsConfig 动作组配置，需要保证配置个数和经验中的动作组个数一致
                     * 
                     */
                    std::vector<TaskGroupConfig> GetTaskGroupsConfig() const;

                    /**
                     * 设置动作组配置，需要保证配置个数和经验中的动作组个数一致
                     * @param _taskGroupsConfig 动作组配置，需要保证配置个数和经验中的动作组个数一致
                     * 
                     */
                    void SetTaskGroupsConfig(const std::vector<TaskGroupConfig>& _taskGroupsConfig);

                    /**
                     * 判断参数 TaskGroupsConfig 是否已赋值
                     * @return TaskGroupsConfig 是否已赋值
                     * 
                     */
                    bool TaskGroupsConfigHasBeenSet() const;

                    /**
                     * 获取更改后的演练名称，不填则默认取经验名称
                     * @return TaskTitle 更改后的演练名称，不填则默认取经验名称
                     * 
                     */
                    std::string GetTaskTitle() const;

                    /**
                     * 设置更改后的演练名称，不填则默认取经验名称
                     * @param _taskTitle 更改后的演练名称，不填则默认取经验名称
                     * 
                     */
                    void SetTaskTitle(const std::string& _taskTitle);

                    /**
                     * 判断参数 TaskTitle 是否已赋值
                     * @return TaskTitle 是否已赋值
                     * 
                     */
                    bool TaskTitleHasBeenSet() const;

                    /**
                     * 获取更改后的演练描述，不填则默认取经验描述
                     * @return TaskDescription 更改后的演练描述，不填则默认取经验描述
                     * 
                     */
                    std::string GetTaskDescription() const;

                    /**
                     * 设置更改后的演练描述，不填则默认取经验描述
                     * @param _taskDescription 更改后的演练描述，不填则默认取经验描述
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
                     * 获取演练执行模式：1----手工执行/ 2 ---自动执行，不填则默认取经验执行模式
                     * @return TaskMode 演练执行模式：1----手工执行/ 2 ---自动执行，不填则默认取经验执行模式
                     * 
                     */
                    uint64_t GetTaskMode() const;

                    /**
                     * 设置演练执行模式：1----手工执行/ 2 ---自动执行，不填则默认取经验执行模式
                     * @param _taskMode 演练执行模式：1----手工执行/ 2 ---自动执行，不填则默认取经验执行模式
                     * 
                     */
                    void SetTaskMode(const uint64_t& _taskMode);

                    /**
                     * 判断参数 TaskMode 是否已赋值
                     * @return TaskMode 是否已赋值
                     * 
                     */
                    bool TaskModeHasBeenSet() const;

                    /**
                     * 获取演练自动暂停时间，单位分钟, 不填则默认取经验自动暂停时间
                     * @return TaskPauseDuration 演练自动暂停时间，单位分钟, 不填则默认取经验自动暂停时间
                     * 
                     */
                    uint64_t GetTaskPauseDuration() const;

                    /**
                     * 设置演练自动暂停时间，单位分钟, 不填则默认取经验自动暂停时间
                     * @param _taskPauseDuration 演练自动暂停时间，单位分钟, 不填则默认取经验自动暂停时间
                     * 
                     */
                    void SetTaskPauseDuration(const uint64_t& _taskPauseDuration);

                    /**
                     * 判断参数 TaskPauseDuration 是否已赋值
                     * @return TaskPauseDuration 是否已赋值
                     * 
                     */
                    bool TaskPauseDurationHasBeenSet() const;

                    /**
                     * 获取演练标签信息，不填则默认取经验标签
                     * @return Tags 演练标签信息，不填则默认取经验标签
                     * 
                     */
                    std::vector<TagWithCreate> GetTags() const;

                    /**
                     * 设置演练标签信息，不填则默认取经验标签
                     * @param _tags 演练标签信息，不填则默认取经验标签
                     * 
                     */
                    void SetTags(const std::vector<TagWithCreate>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取护栏处理方式，1--顺序回滚，2--演练暂停
                     * @return PolicyDealType 护栏处理方式，1--顺序回滚，2--演练暂停
                     * 
                     */
                    int64_t GetPolicyDealType() const;

                    /**
                     * 设置护栏处理方式，1--顺序回滚，2--演练暂停
                     * @param _policyDealType 护栏处理方式，1--顺序回滚，2--演练暂停
                     * 
                     */
                    void SetPolicyDealType(const int64_t& _policyDealType);

                    /**
                     * 判断参数 PolicyDealType 是否已赋值
                     * @return PolicyDealType 是否已赋值
                     * 
                     */
                    bool PolicyDealTypeHasBeenSet() const;

                private:

                    /**
                     * 动作组配置，需要保证配置个数和经验中的动作组个数一致
                     */
                    std::vector<TaskGroupConfig> m_taskGroupsConfig;
                    bool m_taskGroupsConfigHasBeenSet;

                    /**
                     * 更改后的演练名称，不填则默认取经验名称
                     */
                    std::string m_taskTitle;
                    bool m_taskTitleHasBeenSet;

                    /**
                     * 更改后的演练描述，不填则默认取经验描述
                     */
                    std::string m_taskDescription;
                    bool m_taskDescriptionHasBeenSet;

                    /**
                     * 演练执行模式：1----手工执行/ 2 ---自动执行，不填则默认取经验执行模式
                     */
                    uint64_t m_taskMode;
                    bool m_taskModeHasBeenSet;

                    /**
                     * 演练自动暂停时间，单位分钟, 不填则默认取经验自动暂停时间
                     */
                    uint64_t m_taskPauseDuration;
                    bool m_taskPauseDurationHasBeenSet;

                    /**
                     * 演练标签信息，不填则默认取经验标签
                     */
                    std::vector<TagWithCreate> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 护栏处理方式，1--顺序回滚，2--演练暂停
                     */
                    int64_t m_policyDealType;
                    bool m_policyDealTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TASKCONFIG_H_
