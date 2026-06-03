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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEARCHIVEFLOWTASKREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEARCHIVEFLOWTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/CreateArchiveFlow.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateArchiveFlowTask请求参数结构体
                */
                class CreateArchiveFlowTaskRequest : public AbstractModel
                {
                public:
                    CreateArchiveFlowTaskRequest();
                    ~CreateArchiveFlowTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>执行本接口操作的员工信息。注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * @return Operator <p>执行本接口操作的员工信息。注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置<p>执行本接口操作的员工信息。注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * @param _operator <p>执行本接口操作的员工信息。注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * 
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取<p>归档合同列表，一次最多支持50个合同</p>
                     * @return ArchiveFlows <p>归档合同列表，一次最多支持50个合同</p>
                     * 
                     */
                    std::vector<CreateArchiveFlow> GetArchiveFlows() const;

                    /**
                     * 设置<p>归档合同列表，一次最多支持50个合同</p>
                     * @param _archiveFlows <p>归档合同列表，一次最多支持50个合同</p>
                     * 
                     */
                    void SetArchiveFlows(const std::vector<CreateArchiveFlow>& _archiveFlows);

                    /**
                     * 判断参数 ArchiveFlows 是否已赋值
                     * @return ArchiveFlows 是否已赋值
                     * 
                     */
                    bool ArchiveFlowsHasBeenSet() const;

                private:

                    /**
                     * <p>执行本接口操作的员工信息。注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>归档合同列表，一次最多支持50个合同</p>
                     */
                    std::vector<CreateArchiveFlow> m_archiveFlows;
                    bool m_archiveFlowsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEARCHIVEFLOWTASKREQUEST_H_
