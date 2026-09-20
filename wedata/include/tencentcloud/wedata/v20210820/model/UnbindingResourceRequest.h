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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_UNBINDINGRESOURCEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_UNBINDINGRESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/BundleResource.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * UnbindingResource请求参数结构体
                */
                class UnbindingResourceRequest : public AbstractModel
                {
                public:
                    UnbindingResourceRequest();
                    ~UnbindingResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
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
                     * 获取资源列表
                     * @return ResourceList 资源列表
                     * 
                     */
                    std::vector<BundleResource> GetResourceList() const;

                    /**
                     * 设置资源列表
                     * @param _resourceList 资源列表
                     * 
                     */
                    void SetResourceList(const std::vector<BundleResource>& _resourceList);

                    /**
                     * 判断参数 ResourceList 是否已赋值
                     * @return ResourceList 是否已赋值
                     * 
                     */
                    bool ResourceListHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 资源列表
                     */
                    std::vector<BundleResource> m_resourceList;
                    bool m_resourceListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_UNBINDINGRESOURCEREQUEST_H_
