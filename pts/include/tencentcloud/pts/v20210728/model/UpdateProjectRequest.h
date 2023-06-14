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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_UPDATEPROJECTREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_UPDATEPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/TagSpec.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
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
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
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
                     * 获取项目名
                     * @return Name 项目名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置项目名
                     * @param _name 项目名
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
                     * 获取项目描述
                     * @return Description 项目描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置项目描述
                     * @param _description 项目描述
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
                     * 获取项目状态，默认传递1
                     * @return Status 项目状态，默认传递1
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置项目状态，默认传递1
                     * @param _status 项目状态，默认传递1
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取标签数组
                     * @return Tags 标签数组
                     * 
                     */
                    std::vector<TagSpec> GetTags() const;

                    /**
                     * 设置标签数组
                     * @param _tags 标签数组
                     * 
                     */
                    void SetTags(const std::vector<TagSpec>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 项目名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 项目描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 项目状态，默认传递1
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 标签数组
                     */
                    std::vector<TagSpec> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_UPDATEPROJECTREQUEST_H_
