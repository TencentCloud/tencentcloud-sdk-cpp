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
                     * 获取项目标识，英文名，以字母开头，可包含字母、数字和下划线，不能超过32个字符
                     * @return ProjectName 项目标识，英文名，以字母开头，可包含字母、数字和下划线，不能超过32个字符
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目标识，英文名，以字母开头，可包含字母、数字和下划线，不能超过32个字符
                     * @param _projectName 项目标识，英文名，以字母开头，可包含字母、数字和下划线，不能超过32个字符
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
                     * 获取项目显示名称，可以为中文名，以字母开头，可包含字母、数字和下划线，不能超过32个字符
                     * @return DisplayName 项目显示名称，可以为中文名，以字母开头，可包含字母、数字和下划线，不能超过32个字符
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置项目显示名称，可以为中文名，以字母开头，可包含字母、数字和下划线，不能超过32个字符
                     * @param _displayName 项目显示名称，可以为中文名，以字母开头，可包含字母、数字和下划线，不能超过32个字符
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
                     * 获取项目模式，SIMPLE（默认）：简单模式 STANDARD：标准模式
                     * @return ProjectModel 项目模式，SIMPLE（默认）：简单模式 STANDARD：标准模式
                     * 
                     */
                    std::string GetProjectModel() const;

                    /**
                     * 设置项目模式，SIMPLE（默认）：简单模式 STANDARD：标准模式
                     * @param _projectModel 项目模式，SIMPLE（默认）：简单模式 STANDARD：标准模式
                     * 
                     */
                    void SetProjectModel(const std::string& _projectModel);

                    /**
                     * 判断参数 ProjectModel 是否已赋值
                     * @return ProjectModel 是否已赋值
                     * 
                     */
                    bool ProjectModelHasBeenSet() const;

                private:

                    /**
                     * 项目标识，英文名，以字母开头，可包含字母、数字和下划线，不能超过32个字符
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 项目显示名称，可以为中文名，以字母开头，可包含字母、数字和下划线，不能超过32个字符
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 项目模式，SIMPLE（默认）：简单模式 STANDARD：标准模式
                     */
                    std::string m_projectModel;
                    bool m_projectModelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_PROJECTREQUEST_H_
