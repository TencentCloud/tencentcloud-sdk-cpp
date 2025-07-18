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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEGOVERNANCESERVICECONTRACTVERSIONSREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEGOVERNANCESERVICECONTRACTVERSIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DescribeGovernanceServiceContractVersions请求参数结构体
                */
                class DescribeGovernanceServiceContractVersionsRequest : public AbstractModel
                {
                public:
                    DescribeGovernanceServiceContractVersionsRequest();
                    ~DescribeGovernanceServiceContractVersionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取引擎实例ID
                     * @return InstanceId 引擎实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置引擎实例ID
                     * @param _instanceId 引擎实例ID
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
                     * 获取命名空间
                     * @return Namespace 命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间
                     * @param _namespace 命名空间
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取服务名
                     * @return Service 服务名
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置服务名
                     * @param _service 服务名
                     * 
                     */
                    void SetService(const std::string& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                private:

                    /**
                     * 引擎实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 服务名
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEGOVERNANCESERVICECONTRACTVERSIONSREQUEST_H_
