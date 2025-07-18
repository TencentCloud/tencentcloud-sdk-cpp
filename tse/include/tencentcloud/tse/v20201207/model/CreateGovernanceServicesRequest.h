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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CREATEGOVERNANCESERVICESREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CREATEGOVERNANCESERVICESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/GovernanceServiceInput.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * CreateGovernanceServices请求参数结构体
                */
                class CreateGovernanceServicesRequest : public AbstractModel
                {
                public:
                    CreateGovernanceServicesRequest();
                    ~CreateGovernanceServicesRequest() = default;
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
                     * 获取服务信息。
                     * @return GovernanceServices 服务信息。
                     * 
                     */
                    std::vector<GovernanceServiceInput> GetGovernanceServices() const;

                    /**
                     * 设置服务信息。
                     * @param _governanceServices 服务信息。
                     * 
                     */
                    void SetGovernanceServices(const std::vector<GovernanceServiceInput>& _governanceServices);

                    /**
                     * 判断参数 GovernanceServices 是否已赋值
                     * @return GovernanceServices 是否已赋值
                     * 
                     */
                    bool GovernanceServicesHasBeenSet() const;

                private:

                    /**
                     * tse 实例 id。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 服务信息。
                     */
                    std::vector<GovernanceServiceInput> m_governanceServices;
                    bool m_governanceServicesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CREATEGOVERNANCESERVICESREQUEST_H_
