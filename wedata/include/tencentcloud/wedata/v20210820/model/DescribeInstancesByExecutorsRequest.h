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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINSTANCESBYEXECUTORSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINSTANCESBYEXECUTORSREQUEST_H_

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
                * DescribeInstancesByExecutors请求参数结构体
                */
                class DescribeInstancesByExecutorsRequest : public AbstractModel
                {
                public:
                    DescribeInstancesByExecutorsRequest();
                    ~DescribeInstancesByExecutorsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>项目ID</p>
                     * @return ProjectId <p>项目ID</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目ID</p>
                     * @param _projectId <p>项目ID</p>
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
                     * 获取<p>执行资源组ID</p>
                     * @return ExecutorGroupIdList <p>执行资源组ID</p>
                     * 
                     */
                    std::vector<std::string> GetExecutorGroupIdList() const;

                    /**
                     * 设置<p>执行资源组ID</p>
                     * @param _executorGroupIdList <p>执行资源组ID</p>
                     * 
                     */
                    void SetExecutorGroupIdList(const std::vector<std::string>& _executorGroupIdList);

                    /**
                     * 判断参数 ExecutorGroupIdList 是否已赋值
                     * @return ExecutorGroupIdList 是否已赋值
                     * 
                     */
                    bool ExecutorGroupIdListHasBeenSet() const;

                private:

                    /**
                     * <p>项目ID</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>执行资源组ID</p>
                     */
                    std::vector<std::string> m_executorGroupIdList;
                    bool m_executorGroupIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINSTANCESBYEXECUTORSREQUEST_H_
