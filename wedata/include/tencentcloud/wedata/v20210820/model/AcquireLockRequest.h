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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_ACQUIRELOCKREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_ACQUIRELOCKREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * AcquireLock请求参数结构体
                */
                class AcquireLockRequest : public AbstractModel
                {
                public:
                    AcquireLockRequest();
                    ~AcquireLockRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源唯一路径
                     * @return ResourcePath 资源唯一路径
                     * 
                     */
                    std::string GetResourcePath() const;

                    /**
                     * 设置资源唯一路径
                     * @param _resourcePath 资源唯一路径
                     * 
                     */
                    void SetResourcePath(const std::string& _resourcePath);

                    /**
                     * 判断参数 ResourcePath 是否已赋值
                     * @return ResourcePath 是否已赋值
                     * 
                     */
                    bool ResourcePathHasBeenSet() const;

                    /**
                     * 获取TASK/FILE
                     * @return ResourceType TASK/FILE
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置TASK/FILE
                     * @param _resourceType TASK/FILE
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

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

                private:

                    /**
                     * 资源唯一路径
                     */
                    std::string m_resourcePath;
                    bool m_resourcePathHasBeenSet;

                    /**
                     * TASK/FILE
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_ACQUIRELOCKREQUEST_H_
