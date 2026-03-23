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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_DELETEAGENTAPPMODELSERVICESREQUEST_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_DELETEAGENTAPPMODELSERVICESREQUEST_H_

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
                * DeleteAgentAppModelServices请求参数结构体
                */
                class DeleteAgentAppModelServicesRequest : public AbstractModel
                {
                public:
                    DeleteAgentAppModelServicesRequest();
                    ~DeleteAgentAppModelServicesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceID 实例ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置实例ID
                     * @param _instanceID 实例ID
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
                     * 获取应用ID
                     * @return ID 应用ID
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置应用ID
                     * @param _iD 应用ID
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
                     * 获取关联的model service id
                     * @return ModelServiceIDs 关联的model service id
                     * 
                     */
                    std::vector<std::string> GetModelServiceIDs() const;

                    /**
                     * 设置关联的model service id
                     * @param _modelServiceIDs 关联的model service id
                     * 
                     */
                    void SetModelServiceIDs(const std::vector<std::string>& _modelServiceIDs);

                    /**
                     * 判断参数 ModelServiceIDs 是否已赋值
                     * @return ModelServiceIDs 是否已赋值
                     * 
                     */
                    bool ModelServiceIDsHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 应用ID
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 关联的model service id
                     */
                    std::vector<std::string> m_modelServiceIDs;
                    bool m_modelServiceIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_DELETEAGENTAPPMODELSERVICESREQUEST_H_
