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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_UPDATEPROJECTREQUEST_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_UPDATEPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tag
    {
        namespace V20180813
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
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取项目名称
                     * @return ProjectName 项目名称
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名称
                     * @param _projectName 项目名称
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
                     * 获取禁用项目，1，禁用，0，启用
                     * @return Disable 禁用项目，1，禁用，0，启用
                     * 
                     */
                    int64_t GetDisable() const;

                    /**
                     * 设置禁用项目，1，禁用，0，启用
                     * @param _disable 禁用项目，1，禁用，0，启用
                     * 
                     */
                    void SetDisable(const int64_t& _disable);

                    /**
                     * 判断参数 Disable 是否已赋值
                     * @return Disable 是否已赋值
                     * 
                     */
                    bool DisableHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Info 备注
                     * 
                     */
                    std::string GetInfo() const;

                    /**
                     * 设置备注
                     * @param _info 备注
                     * 
                     */
                    void SetInfo(const std::string& _info);

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 项目名称
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 禁用项目，1，禁用，0，启用
                     */
                    int64_t m_disable;
                    bool m_disableHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_info;
                    bool m_infoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_UPDATEPROJECTREQUEST_H_
