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

#ifndef TENCENTCLOUD_MONGODB_V20180408_MODEL_ASSIGNPROJECTREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20180408_MODEL_ASSIGNPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20180408
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
                     * 获取实例 ID 列表。格式如：cmgo-p8vn****，与云数据库控制台页面中显示的实例 ID 相同。
                     * @return InstanceIds 实例 ID 列表。格式如：cmgo-p8vn****，与云数据库控制台页面中显示的实例 ID 相同。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例 ID 列表。格式如：cmgo-p8vn****，与云数据库控制台页面中显示的实例 ID 相同。
                     * @param _instanceIds 实例 ID 列表。格式如：cmgo-p8vn****，与云数据库控制台页面中显示的实例 ID 相同。
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
                     * 获取项目ID。项目 ID 具有唯一性，请[登录 MongoDB 控制台](https://console.cloud.tencent.com/mongodb)，在右上角的账户信息的下拉菜单中，选择**项目管理**，即可获取项目ID。
                     * @return ProjectId 项目ID。项目 ID 具有唯一性，请[登录 MongoDB 控制台](https://console.cloud.tencent.com/mongodb)，在右上角的账户信息的下拉菜单中，选择**项目管理**，即可获取项目ID。
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目ID。项目 ID 具有唯一性，请[登录 MongoDB 控制台](https://console.cloud.tencent.com/mongodb)，在右上角的账户信息的下拉菜单中，选择**项目管理**，即可获取项目ID。
                     * @param _projectId 项目ID。项目 ID 具有唯一性，请[登录 MongoDB 控制台](https://console.cloud.tencent.com/mongodb)，在右上角的账户信息的下拉菜单中，选择**项目管理**，即可获取项目ID。
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
                     * 实例 ID 列表。格式如：cmgo-p8vn****，与云数据库控制台页面中显示的实例 ID 相同。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 项目ID。项目 ID 具有唯一性，请[登录 MongoDB 控制台](https://console.cloud.tencent.com/mongodb)，在右上角的账户信息的下拉菜单中，选择**项目管理**，即可获取项目ID。
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20180408_MODEL_ASSIGNPROJECTREQUEST_H_
