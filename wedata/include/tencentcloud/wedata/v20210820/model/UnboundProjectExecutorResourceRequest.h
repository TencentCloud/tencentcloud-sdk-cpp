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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_UNBOUNDPROJECTEXECUTORRESOURCEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_UNBOUNDPROJECTEXECUTORRESOURCEREQUEST_H_

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
                * UnboundProjectExecutorResource请求参数结构体
                */
                class UnboundProjectExecutorResourceRequest : public AbstractModel
                {
                public:
                    UnboundProjectExecutorResourceRequest();
                    ~UnboundProjectExecutorResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执行资源组id
                     * @return ExecutorGroupId 执行资源组id
                     * 
                     */
                    std::string GetExecutorGroupId() const;

                    /**
                     * 设置执行资源组id
                     * @param _executorGroupId 执行资源组id
                     * 
                     */
                    void SetExecutorGroupId(const std::string& _executorGroupId);

                    /**
                     * 判断参数 ExecutorGroupId 是否已赋值
                     * @return ExecutorGroupId 是否已赋值
                     * 
                     */
                    bool ExecutorGroupIdHasBeenSet() const;

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
                     * 获取可选: 需要绑定的多个项目id, 若申明将带上ProjectId一起绑定
                     * @return ProjectIdList 可选: 需要绑定的多个项目id, 若申明将带上ProjectId一起绑定
                     * 
                     */
                    std::vector<std::string> GetProjectIdList() const;

                    /**
                     * 设置可选: 需要绑定的多个项目id, 若申明将带上ProjectId一起绑定
                     * @param _projectIdList 可选: 需要绑定的多个项目id, 若申明将带上ProjectId一起绑定
                     * 
                     */
                    void SetProjectIdList(const std::vector<std::string>& _projectIdList);

                    /**
                     * 判断参数 ProjectIdList 是否已赋值
                     * @return ProjectIdList 是否已赋值
                     * 
                     */
                    bool ProjectIdListHasBeenSet() const;

                    /**
                     * 获取需要绑定项目的资源包id集合，为空则绑定整个资源组
                     * @return ExecutorResourcePackageIds 需要绑定项目的资源包id集合，为空则绑定整个资源组
                     * 
                     */
                    std::vector<std::string> GetExecutorResourcePackageIds() const;

                    /**
                     * 设置需要绑定项目的资源包id集合，为空则绑定整个资源组
                     * @param _executorResourcePackageIds 需要绑定项目的资源包id集合，为空则绑定整个资源组
                     * 
                     */
                    void SetExecutorResourcePackageIds(const std::vector<std::string>& _executorResourcePackageIds);

                    /**
                     * 判断参数 ExecutorResourcePackageIds 是否已赋值
                     * @return ExecutorResourcePackageIds 是否已赋值
                     * 
                     */
                    bool ExecutorResourcePackageIdsHasBeenSet() const;

                private:

                    /**
                     * 执行资源组id
                     */
                    std::string m_executorGroupId;
                    bool m_executorGroupIdHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 可选: 需要绑定的多个项目id, 若申明将带上ProjectId一起绑定
                     */
                    std::vector<std::string> m_projectIdList;
                    bool m_projectIdListHasBeenSet;

                    /**
                     * 需要绑定项目的资源包id集合，为空则绑定整个资源组
                     */
                    std::vector<std::string> m_executorResourcePackageIds;
                    bool m_executorResourcePackageIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_UNBOUNDPROJECTEXECUTORRESOURCEREQUEST_H_
