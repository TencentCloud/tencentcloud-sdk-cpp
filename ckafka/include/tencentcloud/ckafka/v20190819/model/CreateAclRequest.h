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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEACLREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEACLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * CreateAcl请求参数结构体
                */
                class CreateAclRequest : public AbstractModel
                {
                public:
                    CreateAclRequest();
                    ~CreateAclRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ckafka集群实例Id
                     * @return InstanceId ckafka集群实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ckafka集群实例Id
                     * @param _instanceId ckafka集群实例Id
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
                     * 获取Acl资源类型，(2:TOPIC，3:GROUP，4:CLUSTER)
                     * @return ResourceType Acl资源类型，(2:TOPIC，3:GROUP，4:CLUSTER)
                     * 
                     */
                    int64_t GetResourceType() const;

                    /**
                     * 设置Acl资源类型，(2:TOPIC，3:GROUP，4:CLUSTER)
                     * @param _resourceType Acl资源类型，(2:TOPIC，3:GROUP，4:CLUSTER)
                     * 
                     */
                    void SetResourceType(const int64_t& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取Acl操作方式，(2:ALL，3:READ，4:WRITE，5:CREATE，6:DELETE，7:ALTER，8:DESCRIBE，9:CLUSTER_ACTION，10:DESCRIBE_CONFIGS，11:ALTER_CONFIGS，12:IDEMPOTENT_WRITE)
                     * @return Operation Acl操作方式，(2:ALL，3:READ，4:WRITE，5:CREATE，6:DELETE，7:ALTER，8:DESCRIBE，9:CLUSTER_ACTION，10:DESCRIBE_CONFIGS，11:ALTER_CONFIGS，12:IDEMPOTENT_WRITE)
                     * 
                     */
                    int64_t GetOperation() const;

                    /**
                     * 设置Acl操作方式，(2:ALL，3:READ，4:WRITE，5:CREATE，6:DELETE，7:ALTER，8:DESCRIBE，9:CLUSTER_ACTION，10:DESCRIBE_CONFIGS，11:ALTER_CONFIGS，12:IDEMPOTENT_WRITE)
                     * @param _operation Acl操作方式，(2:ALL，3:READ，4:WRITE，5:CREATE，6:DELETE，7:ALTER，8:DESCRIBE，9:CLUSTER_ACTION，10:DESCRIBE_CONFIGS，11:ALTER_CONFIGS，12:IDEMPOTENT_WRITE)
                     * 
                     */
                    void SetOperation(const int64_t& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取权限类型，(2:DENY，3:ALLOW)，当前ckafka支持ALLOW(相当于白名单)，其它用于后续兼容开源kafka的acl时使用
                     * @return PermissionType 权限类型，(2:DENY，3:ALLOW)，当前ckafka支持ALLOW(相当于白名单)，其它用于后续兼容开源kafka的acl时使用
                     * 
                     */
                    int64_t GetPermissionType() const;

                    /**
                     * 设置权限类型，(2:DENY，3:ALLOW)，当前ckafka支持ALLOW(相当于白名单)，其它用于后续兼容开源kafka的acl时使用
                     * @param _permissionType 权限类型，(2:DENY，3:ALLOW)，当前ckafka支持ALLOW(相当于白名单)，其它用于后续兼容开源kafka的acl时使用
                     * 
                     */
                    void SetPermissionType(const int64_t& _permissionType);

                    /**
                     * 判断参数 PermissionType 是否已赋值
                     * @return PermissionType 是否已赋值
                     * 
                     */
                    bool PermissionTypeHasBeenSet() const;

                    /**
                     * 获取资源名称，和resourceType相关，如当resourceType为TOPIC时，则该字段表示topic名称，当resourceType为GROUP时，该字段表示group名称，当resourceType为CLUSTER时，该字段可为空。
                     * @return ResourceName 资源名称，和resourceType相关，如当resourceType为TOPIC时，则该字段表示topic名称，当resourceType为GROUP时，该字段表示group名称，当resourceType为CLUSTER时，该字段可为空。
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置资源名称，和resourceType相关，如当resourceType为TOPIC时，则该字段表示topic名称，当resourceType为GROUP时，该字段表示group名称，当resourceType为CLUSTER时，该字段可为空。
                     * @param _resourceName 资源名称，和resourceType相关，如当resourceType为TOPIC时，则该字段表示topic名称，当resourceType为GROUP时，该字段表示group名称，当resourceType为CLUSTER时，该字段可为空。
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取默认为*，表示任何host都可以访问。支持填写IP或网段，支持“;”分隔。
                     * @return Host 默认为*，表示任何host都可以访问。支持填写IP或网段，支持“;”分隔。
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置默认为*，表示任何host都可以访问。支持填写IP或网段，支持“;”分隔。
                     * @param _host 默认为*，表示任何host都可以访问。支持填写IP或网段，支持“;”分隔。
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取用户列表，默认为User:*，表示任何user都可以访问，当前用户只能是用户列表中包含的用户。传入时需要加 User: 前缀,如用户A则传入User:A。
                     * @return Principal 用户列表，默认为User:*，表示任何user都可以访问，当前用户只能是用户列表中包含的用户。传入时需要加 User: 前缀,如用户A则传入User:A。
                     * 
                     */
                    std::string GetPrincipal() const;

                    /**
                     * 设置用户列表，默认为User:*，表示任何user都可以访问，当前用户只能是用户列表中包含的用户。传入时需要加 User: 前缀,如用户A则传入User:A。
                     * @param _principal 用户列表，默认为User:*，表示任何user都可以访问，当前用户只能是用户列表中包含的用户。传入时需要加 User: 前缀,如用户A则传入User:A。
                     * 
                     */
                    void SetPrincipal(const std::string& _principal);

                    /**
                     * 判断参数 Principal 是否已赋值
                     * @return Principal 是否已赋值
                     * 
                     */
                    bool PrincipalHasBeenSet() const;

                    /**
                     * 获取资源名称列表,Json字符串格式。ResourceName和resourceNameList只能指定其中一个。
                     * @return ResourceNameList 资源名称列表,Json字符串格式。ResourceName和resourceNameList只能指定其中一个。
                     * 
                     */
                    std::string GetResourceNameList() const;

                    /**
                     * 设置资源名称列表,Json字符串格式。ResourceName和resourceNameList只能指定其中一个。
                     * @param _resourceNameList 资源名称列表,Json字符串格式。ResourceName和resourceNameList只能指定其中一个。
                     * 
                     */
                    void SetResourceNameList(const std::string& _resourceNameList);

                    /**
                     * 判断参数 ResourceNameList 是否已赋值
                     * @return ResourceNameList 是否已赋值
                     * 
                     */
                    bool ResourceNameListHasBeenSet() const;

                private:

                    /**
                     * ckafka集群实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Acl资源类型，(2:TOPIC，3:GROUP，4:CLUSTER)
                     */
                    int64_t m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Acl操作方式，(2:ALL，3:READ，4:WRITE，5:CREATE，6:DELETE，7:ALTER，8:DESCRIBE，9:CLUSTER_ACTION，10:DESCRIBE_CONFIGS，11:ALTER_CONFIGS，12:IDEMPOTENT_WRITE)
                     */
                    int64_t m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 权限类型，(2:DENY，3:ALLOW)，当前ckafka支持ALLOW(相当于白名单)，其它用于后续兼容开源kafka的acl时使用
                     */
                    int64_t m_permissionType;
                    bool m_permissionTypeHasBeenSet;

                    /**
                     * 资源名称，和resourceType相关，如当resourceType为TOPIC时，则该字段表示topic名称，当resourceType为GROUP时，该字段表示group名称，当resourceType为CLUSTER时，该字段可为空。
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 默认为*，表示任何host都可以访问。支持填写IP或网段，支持“;”分隔。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 用户列表，默认为User:*，表示任何user都可以访问，当前用户只能是用户列表中包含的用户。传入时需要加 User: 前缀,如用户A则传入User:A。
                     */
                    std::string m_principal;
                    bool m_principalHasBeenSet;

                    /**
                     * 资源名称列表,Json字符串格式。ResourceName和resourceNameList只能指定其中一个。
                     */
                    std::string m_resourceNameList;
                    bool m_resourceNameListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEACLREQUEST_H_
