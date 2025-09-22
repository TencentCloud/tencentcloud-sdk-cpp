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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_KILLTASKINSTANCESASYNCREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_KILLTASKINSTANCESASYNCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * KillTaskInstancesAsync请求参数结构体
                */
                class KillTaskInstancesAsyncRequest : public AbstractModel
                {
                public:
                    KillTaskInstancesAsyncRequest();
                    ~KillTaskInstancesAsyncRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param _projectId 项目Id
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
                     * 获取实例id列表,可以从ListInstances中获取
                     * @return InstanceKeyList 实例id列表,可以从ListInstances中获取
                     * 
                     */
                    std::vector<std::string> GetInstanceKeyList() const;

                    /**
                     * 设置实例id列表,可以从ListInstances中获取
                     * @param _instanceKeyList 实例id列表,可以从ListInstances中获取
                     * 
                     */
                    void SetInstanceKeyList(const std::vector<std::string>& _instanceKeyList);

                    /**
                     * 判断参数 InstanceKeyList 是否已赋值
                     * @return InstanceKeyList 是否已赋值
                     * 
                     */
                    bool InstanceKeyListHasBeenSet() const;

                private:

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 实例id列表,可以从ListInstances中获取
                     */
                    std::vector<std::string> m_instanceKeyList;
                    bool m_instanceKeyListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_KILLTASKINSTANCESASYNCREQUEST_H_
