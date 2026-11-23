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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CREATEGOVERNANCEINSTANCESREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CREATEGOVERNANCEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/GovernanceInstanceInput.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * CreateGovernanceInstances请求参数结构体
                */
                class CreateGovernanceInstancesRequest : public AbstractModel
                {
                public:
                    CreateGovernanceInstancesRequest();
                    ~CreateGovernanceInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>tse实例id。</p>
                     * @return InstanceId <p>tse实例id。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>tse实例id。</p>
                     * @param _instanceId <p>tse实例id。</p>
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
                     * 获取<p>服务实例信息。</p>
                     * @return GovernanceInstances <p>服务实例信息。</p>
                     * 
                     */
                    std::vector<GovernanceInstanceInput> GetGovernanceInstances() const;

                    /**
                     * 设置<p>服务实例信息。</p>
                     * @param _governanceInstances <p>服务实例信息。</p>
                     * 
                     */
                    void SetGovernanceInstances(const std::vector<GovernanceInstanceInput>& _governanceInstances);

                    /**
                     * 判断参数 GovernanceInstances 是否已赋值
                     * @return GovernanceInstances 是否已赋值
                     * 
                     */
                    bool GovernanceInstancesHasBeenSet() const;

                private:

                    /**
                     * <p>tse实例id。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>服务实例信息。</p>
                     */
                    std::vector<GovernanceInstanceInput> m_governanceInstances;
                    bool m_governanceInstancesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CREATEGOVERNANCEINSTANCESREQUEST_H_
