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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DELETEGOVERNANCEINSTANCESBYHOSTREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DELETEGOVERNANCEINSTANCESBYHOSTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/GovernanceInstanceUpdate.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DeleteGovernanceInstancesByHost请求参数结构体
                */
                class DeleteGovernanceInstancesByHostRequest : public AbstractModel
                {
                public:
                    DeleteGovernanceInstancesByHostRequest();
                    ~DeleteGovernanceInstancesByHostRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取tse实例id。
                     * @return InstanceId tse实例id。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置tse实例id。
                     * @param _instanceId tse实例id。
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
                     * 获取要删除的服务实例信息。
                     * @return GovernanceInstances 要删除的服务实例信息。
                     * 
                     */
                    std::vector<GovernanceInstanceUpdate> GetGovernanceInstances() const;

                    /**
                     * 设置要删除的服务实例信息。
                     * @param _governanceInstances 要删除的服务实例信息。
                     * 
                     */
                    void SetGovernanceInstances(const std::vector<GovernanceInstanceUpdate>& _governanceInstances);

                    /**
                     * 判断参数 GovernanceInstances 是否已赋值
                     * @return GovernanceInstances 是否已赋值
                     * 
                     */
                    bool GovernanceInstancesHasBeenSet() const;

                private:

                    /**
                     * tse实例id。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 要删除的服务实例信息。
                     */
                    std::vector<GovernanceInstanceUpdate> m_governanceInstances;
                    bool m_governanceInstancesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DELETEGOVERNANCEINSTANCESBYHOSTREQUEST_H_
