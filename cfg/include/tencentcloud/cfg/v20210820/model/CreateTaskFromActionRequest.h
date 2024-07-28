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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_CREATETASKFROMACTIONREQUEST_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_CREATETASKFROMACTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateTaskFromAction请求参数结构体
                */
                class CreateTaskFromActionRequest : public AbstractModel
                {
                public:
                    CreateTaskFromActionRequest();
                    ~CreateTaskFromActionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取动作ID，可从动作列表接口DescribeActionLibraryList获取
                     * @return TaskActionId 动作ID，可从动作列表接口DescribeActionLibraryList获取
                     * 
                     */
                    uint64_t GetTaskActionId() const;

                    /**
                     * 设置动作ID，可从动作列表接口DescribeActionLibraryList获取
                     * @param _taskActionId 动作ID，可从动作列表接口DescribeActionLibraryList获取
                     * 
                     */
                    void SetTaskActionId(const uint64_t& _taskActionId);

                    /**
                     * 判断参数 TaskActionId 是否已赋值
                     * @return TaskActionId 是否已赋值
                     * 
                     */
                    bool TaskActionIdHasBeenSet() const;

                    /**
                     * 获取参与演练的实例ID
                     * @return TaskInstances 参与演练的实例ID
                     * 
                     */
                    std::vector<std::string> GetTaskInstances() const;

                    /**
                     * 设置参与演练的实例ID
                     * @param _taskInstances 参与演练的实例ID
                     * 
                     */
                    void SetTaskInstances(const std::vector<std::string>& _taskInstances);

                    /**
                     * 判断参数 TaskInstances 是否已赋值
                     * @return TaskInstances 是否已赋值
                     * 
                     */
                    bool TaskInstancesHasBeenSet() const;

                    /**
                     * 获取演练名称，不填则默认取动作名称
                     * @return TaskTitle 演练名称，不填则默认取动作名称
                     * 
                     */
                    std::string GetTaskTitle() const;

                    /**
                     * 设置演练名称，不填则默认取动作名称
                     * @param _taskTitle 演练名称，不填则默认取动作名称
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
                     * 获取演练描述，不填则默认取动作描述
                     * @return TaskDescription 演练描述，不填则默认取动作描述
                     * 
                     */
                    std::string GetTaskDescription() const;

                    /**
                     * 设置演练描述，不填则默认取动作描述
                     * @param _taskDescription 演练描述，不填则默认取动作描述
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
                     * 获取动作通用参数，需要json序列化传入，可以从动作详情接口DescribeActionFieldConfigList获取，不填默认使用动作默认参数
                     * @return TaskActionGeneralConfiguration 动作通用参数，需要json序列化传入，可以从动作详情接口DescribeActionFieldConfigList获取，不填默认使用动作默认参数
                     * 
                     */
                    std::string GetTaskActionGeneralConfiguration() const;

                    /**
                     * 设置动作通用参数，需要json序列化传入，可以从动作详情接口DescribeActionFieldConfigList获取，不填默认使用动作默认参数
                     * @param _taskActionGeneralConfiguration 动作通用参数，需要json序列化传入，可以从动作详情接口DescribeActionFieldConfigList获取，不填默认使用动作默认参数
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
                     * 获取动作自定义参数，需要json序列化传入，可以从动作详情接口DescribeActionFieldConfigList获取，不填默认使用动作默认参数，注意：必填参数，是没有默认值的 ，务必保证传入有效值
                     * @return TaskActionCustomConfiguration 动作自定义参数，需要json序列化传入，可以从动作详情接口DescribeActionFieldConfigList获取，不填默认使用动作默认参数，注意：必填参数，是没有默认值的 ，务必保证传入有效值
                     * 
                     */
                    std::string GetTaskActionCustomConfiguration() const;

                    /**
                     * 设置动作自定义参数，需要json序列化传入，可以从动作详情接口DescribeActionFieldConfigList获取，不填默认使用动作默认参数，注意：必填参数，是没有默认值的 ，务必保证传入有效值
                     * @param _taskActionCustomConfiguration 动作自定义参数，需要json序列化传入，可以从动作详情接口DescribeActionFieldConfigList获取，不填默认使用动作默认参数，注意：必填参数，是没有默认值的 ，务必保证传入有效值
                     * 
                     */
                    void SetTaskActionCustomConfiguration(const std::string& _taskActionCustomConfiguration);

                    /**
                     * 判断参数 TaskActionCustomConfiguration 是否已赋值
                     * @return TaskActionCustomConfiguration 是否已赋值
                     * 
                     */
                    bool TaskActionCustomConfigurationHasBeenSet() const;

                    /**
                     * 获取演练自动暂停时间，单位分钟, 不填则默认为60
                     * @return TaskPauseDuration 演练自动暂停时间，单位分钟, 不填则默认为60
                     * 
                     */
                    uint64_t GetTaskPauseDuration() const;

                    /**
                     * 设置演练自动暂停时间，单位分钟, 不填则默认为60
                     * @param _taskPauseDuration 演练自动暂停时间，单位分钟, 不填则默认为60
                     * 
                     */
                    void SetTaskPauseDuration(const uint64_t& _taskPauseDuration);

                    /**
                     * 判断参数 TaskPauseDuration 是否已赋值
                     * @return TaskPauseDuration 是否已赋值
                     * 
                     */
                    bool TaskPauseDurationHasBeenSet() const;

                private:

                    /**
                     * 动作ID，可从动作列表接口DescribeActionLibraryList获取
                     */
                    uint64_t m_taskActionId;
                    bool m_taskActionIdHasBeenSet;

                    /**
                     * 参与演练的实例ID
                     */
                    std::vector<std::string> m_taskInstances;
                    bool m_taskInstancesHasBeenSet;

                    /**
                     * 演练名称，不填则默认取动作名称
                     */
                    std::string m_taskTitle;
                    bool m_taskTitleHasBeenSet;

                    /**
                     * 演练描述，不填则默认取动作描述
                     */
                    std::string m_taskDescription;
                    bool m_taskDescriptionHasBeenSet;

                    /**
                     * 动作通用参数，需要json序列化传入，可以从动作详情接口DescribeActionFieldConfigList获取，不填默认使用动作默认参数
                     */
                    std::string m_taskActionGeneralConfiguration;
                    bool m_taskActionGeneralConfigurationHasBeenSet;

                    /**
                     * 动作自定义参数，需要json序列化传入，可以从动作详情接口DescribeActionFieldConfigList获取，不填默认使用动作默认参数，注意：必填参数，是没有默认值的 ，务必保证传入有效值
                     */
                    std::string m_taskActionCustomConfiguration;
                    bool m_taskActionCustomConfigurationHasBeenSet;

                    /**
                     * 演练自动暂停时间，单位分钟, 不填则默认为60
                     */
                    uint64_t m_taskPauseDuration;
                    bool m_taskPauseDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_CREATETASKFROMACTIONREQUEST_H_
