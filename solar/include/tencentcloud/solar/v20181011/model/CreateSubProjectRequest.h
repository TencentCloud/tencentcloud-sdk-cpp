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

#ifndef TENCENTCLOUD_SOLAR_V20181011_MODEL_CREATESUBPROJECTREQUEST_H_
#define TENCENTCLOUD_SOLAR_V20181011_MODEL_CREATESUBPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Solar
    {
        namespace V20181011
        {
            namespace Model
            {
                /**
                * CreateSubProject请求参数结构体
                */
                class CreateSubProjectRequest : public AbstractModel
                {
                public:
                    CreateSubProjectRequest();
                    ~CreateSubProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取所属项目id
                     * @return ProjectId 所属项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置所属项目id
                     * @param _projectId 所属项目id
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
                     * 获取子项目名称
                     * @return SubProjectName 子项目名称
                     * 
                     */
                    std::string GetSubProjectName() const;

                    /**
                     * 设置子项目名称
                     * @param _subProjectName 子项目名称
                     * 
                     */
                    void SetSubProjectName(const std::string& _subProjectName);

                    /**
                     * 判断参数 SubProjectName 是否已赋值
                     * @return SubProjectName 是否已赋值
                     * 
                     */
                    bool SubProjectNameHasBeenSet() const;

                private:

                    /**
                     * 所属项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 子项目名称
                     */
                    std::string m_subProjectName;
                    bool m_subProjectNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SOLAR_V20181011_MODEL_CREATESUBPROJECTREQUEST_H_
