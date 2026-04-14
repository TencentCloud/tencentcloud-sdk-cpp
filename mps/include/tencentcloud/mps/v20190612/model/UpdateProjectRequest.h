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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_UPDATEPROJECTREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_UPDATEPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/TermBase.h>
#include <tencentcloud/mps/v20190612/model/Speakers.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * UpdateProject请求参数结构体
                */
                class UpdateProjectRequest : public AbstractModel
                {
                public:
                    UpdateProjectRequest();
                    ~UpdateProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>项目id</p>
                     * @return ProjectId <p>项目id</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目id</p>
                     * @param _projectId <p>项目id</p>
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
                     * 获取<p>项目名称</p>
                     * @return ProjectName <p>项目名称</p>
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置<p>项目名称</p>
                     * @param _projectName <p>项目名称</p>
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
                     * 获取<p>项目术语表</p>
                     * @return TermBase <p>项目术语表</p>
                     * 
                     */
                    std::vector<TermBase> GetTermBase() const;

                    /**
                     * 设置<p>项目术语表</p>
                     * @param _termBase <p>项目术语表</p>
                     * 
                     */
                    void SetTermBase(const std::vector<TermBase>& _termBase);

                    /**
                     * 判断参数 TermBase 是否已赋值
                     * @return TermBase 是否已赋值
                     * 
                     */
                    bool TermBaseHasBeenSet() const;

                    /**
                     * 获取<p>项目描述</p>
                     * @return Description <p>项目描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>项目描述</p>
                     * @param _description <p>项目描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>角色列表</p>
                     * @return Speakers <p>角色列表</p>
                     * 
                     */
                    std::vector<Speakers> GetSpeakers() const;

                    /**
                     * 设置<p>角色列表</p>
                     * @param _speakers <p>角色列表</p>
                     * 
                     */
                    void SetSpeakers(const std::vector<Speakers>& _speakers);

                    /**
                     * 判断参数 Speakers 是否已赋值
                     * @return Speakers 是否已赋值
                     * 
                     */
                    bool SpeakersHasBeenSet() const;

                private:

                    /**
                     * <p>项目id</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>项目名称</p>
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * <p>项目术语表</p>
                     */
                    std::vector<TermBase> m_termBase;
                    bool m_termBaseHasBeenSet;

                    /**
                     * <p>项目描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>角色列表</p>
                     */
                    std::vector<Speakers> m_speakers;
                    bool m_speakersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_UPDATEPROJECTREQUEST_H_
