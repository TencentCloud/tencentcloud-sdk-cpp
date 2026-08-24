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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_PROJECTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_PROJECTREQUEST_H_

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
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 项目信息
                */
                class ProjectRequest : public AbstractModel
                {
                public:
                    ProjectRequest();
                    ~ProjectRequest() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>项目标识，英文名，以字母开头，可包含字母、数字和下划线，不能超过32个字符</p>
                     * @return ProjectName <p>项目标识，英文名，以字母开头，可包含字母、数字和下划线，不能超过32个字符</p>
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置<p>项目标识，英文名，以字母开头，可包含字母、数字和下划线，不能超过32个字符</p>
                     * @param _projectName <p>项目标识，英文名，以字母开头，可包含字母、数字和下划线，不能超过32个字符</p>
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取<p>项目显示名称，可以为中文名，以字母开头，可包含字母、数字和下划线，不能超过32个字符</p>
                     * @return DisplayName <p>项目显示名称，可以为中文名，以字母开头，可包含字母、数字和下划线，不能超过32个字符</p>
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置<p>项目显示名称，可以为中文名，以字母开头，可包含字母、数字和下划线，不能超过32个字符</p>
                     * @param _displayName <p>项目显示名称，可以为中文名，以字母开头，可包含字母、数字和下划线，不能超过32个字符</p>
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取<p>项目模式，SIMPLE（默认）：简单模式 STANDARD：标准模式</p>
                     * @return ProjectModel <p>项目模式，SIMPLE（默认）：简单模式 STANDARD：标准模式</p>
                     * 
                     */
                    std::string GetProjectModel() const;

                    /**
                     * 设置<p>项目模式，SIMPLE（默认）：简单模式 STANDARD：标准模式</p>
                     * @param _projectModel <p>项目模式，SIMPLE（默认）：简单模式 STANDARD：标准模式</p>
                     * 
                     */
                    void SetProjectModel(const std::string& _projectModel);

                    /**
                     * 判断参数 ProjectModel 是否已赋值
                     * @return ProjectModel 是否已赋值
                     * 
                     */
                    bool ProjectModelHasBeenSet() const;

                    /**
                     * 获取<p>项目调度模式，task：任务模式 workflow：工作流模式</p>
                     * @return ScheduleMode <p>项目调度模式，task：任务模式 workflow：工作流模式</p>
                     * 
                     */
                    std::string GetScheduleMode() const;

                    /**
                     * 设置<p>项目调度模式，task：任务模式 workflow：工作流模式</p>
                     * @param _scheduleMode <p>项目调度模式，task：任务模式 workflow：工作流模式</p>
                     * 
                     */
                    void SetScheduleMode(const std::string& _scheduleMode);

                    /**
                     * 判断参数 ScheduleMode 是否已赋值
                     * @return ScheduleMode 是否已赋值
                     * 
                     */
                    bool ScheduleModeHasBeenSet() const;

                private:

                    /**
                     * <p>项目标识，英文名，以字母开头，可包含字母、数字和下划线，不能超过32个字符</p>
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * <p>项目显示名称，可以为中文名，以字母开头，可包含字母、数字和下划线，不能超过32个字符</p>
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * <p>项目模式，SIMPLE（默认）：简单模式 STANDARD：标准模式</p>
                     */
                    std::string m_projectModel;
                    bool m_projectModelHasBeenSet;

                    /**
                     * <p>项目调度模式，task：任务模式 workflow：工作流模式</p>
                     */
                    std::string m_scheduleMode;
                    bool m_scheduleModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_PROJECTREQUEST_H_
