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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_GETINPUTTEMPLATEFILEREQUEST_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_GETINPUTTEMPLATEFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * GetInputTemplateFile请求参数结构体
                */
                class GetInputTemplateFileRequest : public AbstractModel
                {
                public:
                    GetInputTemplateFileRequest();
                    ~GetInputTemplateFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>运行参数模板ID</p>
                     * @return InputTemplateId <p>运行参数模板ID</p>
                     * 
                     */
                    std::string GetInputTemplateId() const;

                    /**
                     * 设置<p>运行参数模板ID</p>
                     * @param _inputTemplateId <p>运行参数模板ID</p>
                     * 
                     */
                    void SetInputTemplateId(const std::string& _inputTemplateId);

                    /**
                     * 判断参数 InputTemplateId 是否已赋值
                     * @return InputTemplateId 是否已赋值
                     * 
                     */
                    bool InputTemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>项目ID</p>
                     * @return ProjectId <p>项目ID</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目ID</p>
                     * @param _projectId <p>项目ID</p>
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>运行应用版本ID</p>
                     * @return ApplicationVersionId <p>运行应用版本ID</p>
                     * 
                     */
                    std::string GetApplicationVersionId() const;

                    /**
                     * 设置<p>运行应用版本ID</p>
                     * @param _applicationVersionId <p>运行应用版本ID</p>
                     * 
                     */
                    void SetApplicationVersionId(const std::string& _applicationVersionId);

                    /**
                     * 判断参数 ApplicationVersionId 是否已赋值
                     * @return ApplicationVersionId 是否已赋值
                     * 
                     */
                    bool ApplicationVersionIdHasBeenSet() const;

                    /**
                     * 获取<p>运行应用ID</p>
                     * @return ApplicationId <p>运行应用ID</p>
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置<p>运行应用ID</p>
                     * @param _applicationId <p>运行应用ID</p>
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                private:

                    /**
                     * <p>运行参数模板ID</p>
                     */
                    std::string m_inputTemplateId;
                    bool m_inputTemplateIdHasBeenSet;

                    /**
                     * <p>项目ID</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>运行应用版本ID</p>
                     */
                    std::string m_applicationVersionId;
                    bool m_applicationVersionIdHasBeenSet;

                    /**
                     * <p>运行应用ID</p>
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_GETINPUTTEMPLATEFILEREQUEST_H_
