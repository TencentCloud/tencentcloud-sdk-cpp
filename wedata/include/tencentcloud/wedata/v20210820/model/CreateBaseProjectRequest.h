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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEBASEPROJECTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEBASEPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/BaseProject.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CreateBaseProject请求参数结构体
                */
                class CreateBaseProjectRequest : public AbstractModel
                {
                public:
                    CreateBaseProjectRequest();
                    ~CreateBaseProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目信息
                     * @return Project 项目信息
                     * 
                     */
                    BaseProject GetProject() const;

                    /**
                     * 设置项目信息
                     * @param _project 项目信息
                     * 
                     */
                    void SetProject(const BaseProject& _project);

                    /**
                     * 判断参数 Project 是否已赋值
                     * @return Project 是否已赋值
                     * 
                     */
                    bool ProjectHasBeenSet() const;

                private:

                    /**
                     * 项目信息
                     */
                    BaseProject m_project;
                    bool m_projectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEBASEPROJECTREQUEST_H_
