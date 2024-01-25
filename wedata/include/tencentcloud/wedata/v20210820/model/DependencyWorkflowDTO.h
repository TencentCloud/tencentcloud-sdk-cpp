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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DEPENDENCYWORKFLOWDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DEPENDENCYWORKFLOWDTO_H_

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
                * 【项目克隆】依赖工作流信息
                */
                class DependencyWorkflowDTO : public AbstractModel
                {
                public:
                    DependencyWorkflowDTO();
                    ~DependencyWorkflowDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取已选工作流id
                     * @return SelectedWorkflowId 已选工作流id
                     * 
                     */
                    std::string GetSelectedWorkflowId() const;

                    /**
                     * 设置已选工作流id
                     * @param _selectedWorkflowId 已选工作流id
                     * 
                     */
                    void SetSelectedWorkflowId(const std::string& _selectedWorkflowId);

                    /**
                     * 判断参数 SelectedWorkflowId 是否已赋值
                     * @return SelectedWorkflowId 是否已赋值
                     * 
                     */
                    bool SelectedWorkflowIdHasBeenSet() const;

                    /**
                     * 获取已选工作流名称
                     * @return SelectedWorkflowName 已选工作流名称
                     * 
                     */
                    std::string GetSelectedWorkflowName() const;

                    /**
                     * 设置已选工作流名称
                     * @param _selectedWorkflowName 已选工作流名称
                     * 
                     */
                    void SetSelectedWorkflowName(const std::string& _selectedWorkflowName);

                    /**
                     * 判断参数 SelectedWorkflowName 是否已赋值
                     * @return SelectedWorkflowName 是否已赋值
                     * 
                     */
                    bool SelectedWorkflowNameHasBeenSet() const;

                    /**
                     * 获取依赖工作流id
                     * @return DependencyWorkflowId 依赖工作流id
                     * 
                     */
                    std::string GetDependencyWorkflowId() const;

                    /**
                     * 设置依赖工作流id
                     * @param _dependencyWorkflowId 依赖工作流id
                     * 
                     */
                    void SetDependencyWorkflowId(const std::string& _dependencyWorkflowId);

                    /**
                     * 判断参数 DependencyWorkflowId 是否已赋值
                     * @return DependencyWorkflowId 是否已赋值
                     * 
                     */
                    bool DependencyWorkflowIdHasBeenSet() const;

                    /**
                     * 获取依赖工作流名称
                     * @return DependencyWorkflowName 依赖工作流名称
                     * 
                     */
                    std::string GetDependencyWorkflowName() const;

                    /**
                     * 设置依赖工作流名称
                     * @param _dependencyWorkflowName 依赖工作流名称
                     * 
                     */
                    void SetDependencyWorkflowName(const std::string& _dependencyWorkflowName);

                    /**
                     * 判断参数 DependencyWorkflowName 是否已赋值
                     * @return DependencyWorkflowName 是否已赋值
                     * 
                     */
                    bool DependencyWorkflowNameHasBeenSet() const;

                    /**
                     * 获取依赖工作流是否跨项目
                     * @return CrossProject 依赖工作流是否跨项目
                     * 
                     */
                    bool GetCrossProject() const;

                    /**
                     * 设置依赖工作流是否跨项目
                     * @param _crossProject 依赖工作流是否跨项目
                     * 
                     */
                    void SetCrossProject(const bool& _crossProject);

                    /**
                     * 判断参数 CrossProject 是否已赋值
                     * @return CrossProject 是否已赋值
                     * 
                     */
                    bool CrossProjectHasBeenSet() const;

                    /**
                     * 获取依赖工作流对应项目id
                     * @return DependencyProjectId 依赖工作流对应项目id
                     * 
                     */
                    std::string GetDependencyProjectId() const;

                    /**
                     * 设置依赖工作流对应项目id
                     * @param _dependencyProjectId 依赖工作流对应项目id
                     * 
                     */
                    void SetDependencyProjectId(const std::string& _dependencyProjectId);

                    /**
                     * 判断参数 DependencyProjectId 是否已赋值
                     * @return DependencyProjectId 是否已赋值
                     * 
                     */
                    bool DependencyProjectIdHasBeenSet() const;

                    /**
                     * 获取依赖工作流对应项目名称
                     * @return DependencyProjectName 依赖工作流对应项目名称
                     * 
                     */
                    std::string GetDependencyProjectName() const;

                    /**
                     * 设置依赖工作流对应项目名称
                     * @param _dependencyProjectName 依赖工作流对应项目名称
                     * 
                     */
                    void SetDependencyProjectName(const std::string& _dependencyProjectName);

                    /**
                     * 判断参数 DependencyProjectName 是否已赋值
                     * @return DependencyProjectName 是否已赋值
                     * 
                     */
                    bool DependencyProjectNameHasBeenSet() const;

                private:

                    /**
                     * 已选工作流id
                     */
                    std::string m_selectedWorkflowId;
                    bool m_selectedWorkflowIdHasBeenSet;

                    /**
                     * 已选工作流名称
                     */
                    std::string m_selectedWorkflowName;
                    bool m_selectedWorkflowNameHasBeenSet;

                    /**
                     * 依赖工作流id
                     */
                    std::string m_dependencyWorkflowId;
                    bool m_dependencyWorkflowIdHasBeenSet;

                    /**
                     * 依赖工作流名称
                     */
                    std::string m_dependencyWorkflowName;
                    bool m_dependencyWorkflowNameHasBeenSet;

                    /**
                     * 依赖工作流是否跨项目
                     */
                    bool m_crossProject;
                    bool m_crossProjectHasBeenSet;

                    /**
                     * 依赖工作流对应项目id
                     */
                    std::string m_dependencyProjectId;
                    bool m_dependencyProjectIdHasBeenSet;

                    /**
                     * 依赖工作流对应项目名称
                     */
                    std::string m_dependencyProjectName;
                    bool m_dependencyProjectNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DEPENDENCYWORKFLOWDTO_H_
