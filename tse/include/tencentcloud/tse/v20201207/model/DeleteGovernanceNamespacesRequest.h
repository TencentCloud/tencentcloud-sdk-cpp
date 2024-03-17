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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DELETEGOVERNANCENAMESPACESREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DELETEGOVERNANCENAMESPACESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/GovernanceNamespaceInput.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DeleteGovernanceNamespaces请求参数结构体
                */
                class DeleteGovernanceNamespacesRequest : public AbstractModel
                {
                public:
                    DeleteGovernanceNamespacesRequest();
                    ~DeleteGovernanceNamespacesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取tse 实例 id。
                     * @return InstanceId tse 实例 id。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置tse 实例 id。
                     * @param _instanceId tse 实例 id。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取命名空间信息。
                     * @return GovernanceNamespaces 命名空间信息。
                     * 
                     */
                    std::vector<GovernanceNamespaceInput> GetGovernanceNamespaces() const;

                    /**
                     * 设置命名空间信息。
                     * @param _governanceNamespaces 命名空间信息。
                     * 
                     */
                    void SetGovernanceNamespaces(const std::vector<GovernanceNamespaceInput>& _governanceNamespaces);

                    /**
                     * 判断参数 GovernanceNamespaces 是否已赋值
                     * @return GovernanceNamespaces 是否已赋值
                     * 
                     */
                    bool GovernanceNamespacesHasBeenSet() const;

                private:

                    /**
                     * tse 实例 id。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 命名空间信息。
                     */
                    std::vector<GovernanceNamespaceInput> m_governanceNamespaces;
                    bool m_governanceNamespacesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DELETEGOVERNANCENAMESPACESREQUEST_H_
