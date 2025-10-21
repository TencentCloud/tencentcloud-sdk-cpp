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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEPROJECTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/ProjectRequest.h>
#include <tencentcloud/wedata/v20250806/model/DLCClusterInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * CreateProject请求参数结构体
                */
                class CreateProjectRequest : public AbstractModel
                {
                public:
                    CreateProjectRequest();
                    ~CreateProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目基本信息
                     * @return Project 项目基本信息
                     * 
                     */
                    ProjectRequest GetProject() const;

                    /**
                     * 设置项目基本信息
                     * @param _project 项目基本信息
                     * 
                     */
                    void SetProject(const ProjectRequest& _project);

                    /**
                     * 判断参数 Project 是否已赋值
                     * @return Project 是否已赋值
                     * 
                     */
                    bool ProjectHasBeenSet() const;

                    /**
                     * 获取DLC绑定集群信息
                     * @return DLCInfo DLC绑定集群信息
                     * 
                     */
                    DLCClusterInfo GetDLCInfo() const;

                    /**
                     * 设置DLC绑定集群信息
                     * @param _dLCInfo DLC绑定集群信息
                     * 
                     */
                    void SetDLCInfo(const DLCClusterInfo& _dLCInfo);

                    /**
                     * 判断参数 DLCInfo 是否已赋值
                     * @return DLCInfo 是否已赋值
                     * 
                     */
                    bool DLCInfoHasBeenSet() const;

                    /**
                     * 获取绑定资源组的id列表
                     * @return ResourceIds 绑定资源组的id列表
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置绑定资源组的id列表
                     * @param _resourceIds 绑定资源组的id列表
                     * 
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                private:

                    /**
                     * 项目基本信息
                     */
                    ProjectRequest m_project;
                    bool m_projectHasBeenSet;

                    /**
                     * DLC绑定集群信息
                     */
                    DLCClusterInfo m_dLCInfo;
                    bool m_dLCInfoHasBeenSet;

                    /**
                     * 绑定资源组的id列表
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEPROJECTREQUEST_H_
