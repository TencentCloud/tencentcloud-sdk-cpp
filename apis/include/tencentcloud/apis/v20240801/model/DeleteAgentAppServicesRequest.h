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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_DELETEAGENTAPPSERVICESREQUEST_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_DELETEAGENTAPPSERVICESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * DeleteAgentAppServices请求参数结构体
                */
                class DeleteAgentAppServicesRequest : public AbstractModel
                {
                public:
                    DeleteAgentAppServicesRequest();
                    ~DeleteAgentAppServicesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceID <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceID <p>实例ID</p>
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取<p>应用ID</p>
                     * @return ID <p>应用ID</p>
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置<p>应用ID</p>
                     * @param _iD <p>应用ID</p>
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>服务IDs</p>
                     * @return ServiceIDs <p>服务IDs</p>
                     * 
                     */
                    std::vector<std::string> GetServiceIDs() const;

                    /**
                     * 设置<p>服务IDs</p>
                     * @param _serviceIDs <p>服务IDs</p>
                     * 
                     */
                    void SetServiceIDs(const std::vector<std::string>& _serviceIDs);

                    /**
                     * 判断参数 ServiceIDs 是否已赋值
                     * @return ServiceIDs 是否已赋值
                     * 
                     */
                    bool ServiceIDsHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>应用ID</p>
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>服务IDs</p>
                     */
                    std::vector<std::string> m_serviceIDs;
                    bool m_serviceIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_DELETEAGENTAPPSERVICESREQUEST_H_
