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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_INSPECTIONTASKSETTINGS_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_INSPECTIONTASKSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/TaskSettings.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 设置巡检任务配置
                */
                class InspectionTaskSettings : public AbstractModel
                {
                public:
                    InspectionTaskSettings();
                    ~InspectionTaskSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取巡检任务的唯一标记
                     * @return TaskType 巡检任务的唯一标记
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置巡检任务的唯一标记
                     * @param _taskType 巡检任务的唯一标记
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
                     * 获取巡检任务组名称
                     * @return Group 巡检任务组名称
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置巡检任务组名称
                     * @param _group 巡检任务组名称
                     * 
                     */
                    void SetGroup(const std::string& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取巡检任务名称
                     * @return Name 巡检任务名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置巡检任务名称
                     * @param _name 巡检任务名称
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
                     * 获取巡检任务参数设置
                     * @return TaskSettings 巡检任务参数设置
                     * 
                     */
                    std::vector<TaskSettings> GetTaskSettings() const;

                    /**
                     * 设置巡检任务参数设置
                     * @param _taskSettings 巡检任务参数设置
                     * 
                     */
                    void SetTaskSettings(const std::vector<TaskSettings>& _taskSettings);

                    /**
                     * 判断参数 TaskSettings 是否已赋值
                     * @return TaskSettings 是否已赋值
                     * 
                     */
                    bool TaskSettingsHasBeenSet() const;

                    /**
                     * 获取是否选中，”true“ ”false“
                     * @return Selected 是否选中，”true“ ”false“
                     * 
                     */
                    std::string GetSelected() const;

                    /**
                     * 设置是否选中，”true“ ”false“
                     * @param _selected 是否选中，”true“ ”false“
                     * 
                     */
                    void SetSelected(const std::string& _selected);

                    /**
                     * 判断参数 Selected 是否已赋值
                     * @return Selected 是否已赋值
                     * 
                     */
                    bool SelectedHasBeenSet() const;

                    /**
                     * 获取是否开启监控
                     * @return Enable 是否开启监控
                     * 
                     */
                    std::string GetEnable() const;

                    /**
                     * 设置是否开启监控
                     * @param _enable 是否开启监控
                     * 
                     */
                    void SetEnable(const std::string& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取事件Json模板
                     * @return SettingsJson 事件Json模板
                     * 
                     */
                    std::string GetSettingsJson() const;

                    /**
                     * 设置事件Json模板
                     * @param _settingsJson 事件Json模板
                     * 
                     */
                    void SetSettingsJson(const std::string& _settingsJson);

                    /**
                     * 判断参数 SettingsJson 是否已赋值
                     * @return SettingsJson 是否已赋值
                     * 
                     */
                    bool SettingsJsonHasBeenSet() const;

                private:

                    /**
                     * 巡检任务的唯一标记
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 巡检任务组名称
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * 巡检任务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 巡检任务参数设置
                     */
                    std::vector<TaskSettings> m_taskSettings;
                    bool m_taskSettingsHasBeenSet;

                    /**
                     * 是否选中，”true“ ”false“
                     */
                    std::string m_selected;
                    bool m_selectedHasBeenSet;

                    /**
                     * 是否开启监控
                     */
                    std::string m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 事件Json模板
                     */
                    std::string m_settingsJson;
                    bool m_settingsJsonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_INSPECTIONTASKSETTINGS_H_
