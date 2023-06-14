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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_MANAGEEXTERNALENDPOINTREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_MANAGEEXTERNALENDPOINTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * ManageExternalEndpoint请求参数结构体
                */
                class ManageExternalEndpointRequest : public AbstractModel
                {
                public:
                    ManageExternalEndpointRequest();
                    ~ManageExternalEndpointRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例Id
                     * @return RegistryId 实例Id
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置实例Id
                     * @param _registryId 实例Id
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取操作（Create/Delete）
                     * @return Operation 操作（Create/Delete）
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作（Create/Delete）
                     * @param _operation 操作（Create/Delete）
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                private:

                    /**
                     * 实例Id
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 操作（Create/Delete）
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_MANAGEEXTERNALENDPOINTREQUEST_H_
