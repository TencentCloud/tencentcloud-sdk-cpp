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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_ASSIGNPROJECTREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_ASSIGNPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * AssignProject请求参数结构体
                */
                class AssignProjectRequest : public AbstractModel
                {
                public:
                    AssignProjectRequest();
                    ~AssignProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID 列表，请登录[MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     * @return InstanceIds 实例 ID 列表，请登录[MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例 ID 列表，请登录[MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     * @param _instanceIds 实例 ID 列表，请登录[MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取项目ID，用户已创建项目的唯一ID。请在控制台账号中心的[项目管理](https://console.cloud.tencent.com/project)中复制项目 ID。
                     * @return ProjectId 项目ID，用户已创建项目的唯一ID。请在控制台账号中心的[项目管理](https://console.cloud.tencent.com/project)中复制项目 ID。
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目ID，用户已创建项目的唯一ID。请在控制台账号中心的[项目管理](https://console.cloud.tencent.com/project)中复制项目 ID。
                     * @param _projectId 项目ID，用户已创建项目的唯一ID。请在控制台账号中心的[项目管理](https://console.cloud.tencent.com/project)中复制项目 ID。
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 实例 ID 列表，请登录[MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 项目ID，用户已创建项目的唯一ID。请在控制台账号中心的[项目管理](https://console.cloud.tencent.com/project)中复制项目 ID。
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_ASSIGNPROJECTREQUEST_H_
