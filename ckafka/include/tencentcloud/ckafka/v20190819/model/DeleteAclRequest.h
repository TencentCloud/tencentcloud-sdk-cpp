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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DELETEACLREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DELETEACLREQUEST_H_

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
                * DeleteAcl请求参数结构体
                */
                class DeleteAclRequest : public AbstractModel
                {
                public:
                    DeleteAclRequest();
                    ~DeleteAclRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ckafka集群实例Id，可通过<a href="https://cloud.tencent.com/document/product/597/40835">DescribeInstances</a>接口获取</p>
                     * @return InstanceId <p>ckafka集群实例Id，可通过<a href="https://cloud.tencent.com/document/product/597/40835">DescribeInstances</a>接口获取</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>ckafka集群实例Id，可通过<a href="https://cloud.tencent.com/document/product/597/40835">DescribeInstances</a>接口获取</p>
                     * @param _instanceId <p>ckafka集群实例Id，可通过<a href="https://cloud.tencent.com/document/product/597/40835">DescribeInstances</a>接口获取</p>
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
                     * 获取<p>Acl资源类型，(2:TOPIC，3:GROUP，4:CLUSTER)</p>
                     * @return ResourceType <p>Acl资源类型，(2:TOPIC，3:GROUP，4:CLUSTER)</p>
                     * 
                     */
                    int64_t GetResourceType() const;

                    /**
                     * 设置<p>Acl资源类型，(2:TOPIC，3:GROUP，4:CLUSTER)</p>
                     * @param _resourceType <p>Acl资源类型，(2:TOPIC，3:GROUP，4:CLUSTER)</p>
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
                     * 获取<p>资源名称，和resourceType相关，如当resourceType为TOPIC时，则该字段表示topic名称，当resourceType为GROUP时，该字段表示group名称，当resourceType为CLUSTER时，该字段可为空。</p>
                     * @return ResourceName <p>资源名称，和resourceType相关，如当resourceType为TOPIC时，则该字段表示topic名称，当resourceType为GROUP时，该字段表示group名称，当resourceType为CLUSTER时，该字段可为空。</p>
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置<p>资源名称，和resourceType相关，如当resourceType为TOPIC时，则该字段表示topic名称，当resourceType为GROUP时，该字段表示group名称，当resourceType为CLUSTER时，该字段可为空。</p>
                     * @param _resourceName <p>资源名称，和resourceType相关，如当resourceType为TOPIC时，则该字段表示topic名称，当resourceType为GROUP时，该字段表示group名称，当resourceType为CLUSTER时，该字段可为空。</p>
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
                     * 获取<p>Acl操作方式</p><p>枚举值：</p><ul><li>2： ALL</li><li>3： READ</li><li>4： WRITE</li><li>5： CREATE</li><li>6： DELETE</li><li>7： ALTER</li><li>8： DESCRIBE</li><li>9： CLUSTER_ACTION</li><li>10： DESCRIBE_CONFIGS</li><li>11： ALTER_CONFIGS</li><li>12： IDEMPOTENT_WRITE</li></ul><p>合法取值与 ResourceType 相关，传入组合以外的值将返回参数错误。本参数必须与 PermissionType 同时传入</p><ul><li>ResourceType=2（TOPIC）：2、3、4、5、6、7、8、10、11</li><li>ResourceType=3（GROUP）：2、3、6、8</li><li>ResourceType=4（CLUSTER）：2、5、7、8、9、10、11、12</li></ul>
                     * @return Operation <p>Acl操作方式</p><p>枚举值：</p><ul><li>2： ALL</li><li>3： READ</li><li>4： WRITE</li><li>5： CREATE</li><li>6： DELETE</li><li>7： ALTER</li><li>8： DESCRIBE</li><li>9： CLUSTER_ACTION</li><li>10： DESCRIBE_CONFIGS</li><li>11： ALTER_CONFIGS</li><li>12： IDEMPOTENT_WRITE</li></ul><p>合法取值与 ResourceType 相关，传入组合以外的值将返回参数错误。本参数必须与 PermissionType 同时传入</p><ul><li>ResourceType=2（TOPIC）：2、3、4、5、6、7、8、10、11</li><li>ResourceType=3（GROUP）：2、3、6、8</li><li>ResourceType=4（CLUSTER）：2、5、7、8、9、10、11、12</li></ul>
                     * 
                     */
                    int64_t GetOperation() const;

                    /**
                     * 设置<p>Acl操作方式</p><p>枚举值：</p><ul><li>2： ALL</li><li>3： READ</li><li>4： WRITE</li><li>5： CREATE</li><li>6： DELETE</li><li>7： ALTER</li><li>8： DESCRIBE</li><li>9： CLUSTER_ACTION</li><li>10： DESCRIBE_CONFIGS</li><li>11： ALTER_CONFIGS</li><li>12： IDEMPOTENT_WRITE</li></ul><p>合法取值与 ResourceType 相关，传入组合以外的值将返回参数错误。本参数必须与 PermissionType 同时传入</p><ul><li>ResourceType=2（TOPIC）：2、3、4、5、6、7、8、10、11</li><li>ResourceType=3（GROUP）：2、3、6、8</li><li>ResourceType=4（CLUSTER）：2、5、7、8、9、10、11、12</li></ul>
                     * @param _operation <p>Acl操作方式</p><p>枚举值：</p><ul><li>2： ALL</li><li>3： READ</li><li>4： WRITE</li><li>5： CREATE</li><li>6： DELETE</li><li>7： ALTER</li><li>8： DESCRIBE</li><li>9： CLUSTER_ACTION</li><li>10： DESCRIBE_CONFIGS</li><li>11： ALTER_CONFIGS</li><li>12： IDEMPOTENT_WRITE</li></ul><p>合法取值与 ResourceType 相关，传入组合以外的值将返回参数错误。本参数必须与 PermissionType 同时传入</p><ul><li>ResourceType=2（TOPIC）：2、3、4、5、6、7、8、10、11</li><li>ResourceType=3（GROUP）：2、3、6、8</li><li>ResourceType=4（CLUSTER）：2、5、7、8、9、10、11、12</li></ul>
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
                     * 获取<p>权限类型，当前ckafka支持ALLOW(相当于白名单)，其它用于后续兼容开源kafka的acl时使用</p><p>枚举值：</p><ul><li>2： DENY</li><li>3： ALLOW</li></ul><p>本参数必须与 Operation 同时传入</p>
                     * @return PermissionType <p>权限类型，当前ckafka支持ALLOW(相当于白名单)，其它用于后续兼容开源kafka的acl时使用</p><p>枚举值：</p><ul><li>2： DENY</li><li>3： ALLOW</li></ul><p>本参数必须与 Operation 同时传入</p>
                     * 
                     */
                    int64_t GetPermissionType() const;

                    /**
                     * 设置<p>权限类型，当前ckafka支持ALLOW(相当于白名单)，其它用于后续兼容开源kafka的acl时使用</p><p>枚举值：</p><ul><li>2： DENY</li><li>3： ALLOW</li></ul><p>本参数必须与 Operation 同时传入</p>
                     * @param _permissionType <p>权限类型，当前ckafka支持ALLOW(相当于白名单)，其它用于后续兼容开源kafka的acl时使用</p><p>枚举值：</p><ul><li>2： DENY</li><li>3： ALLOW</li></ul><p>本参数必须与 Operation 同时传入</p>
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
                     * 获取<p>默认为*，表示任何host都可以访问，当前ckafka不支持host为*，但是后面开源kafka的产品化会直接支持</p><p>删除时与 Principal、Operation、PermissionType 一起参与精确匹配</p>
                     * @return Host <p>默认为*，表示任何host都可以访问，当前ckafka不支持host为*，但是后面开源kafka的产品化会直接支持</p><p>删除时与 Principal、Operation、PermissionType 一起参与精确匹配</p>
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>默认为*，表示任何host都可以访问，当前ckafka不支持host为*，但是后面开源kafka的产品化会直接支持</p><p>删除时与 Principal、Operation、PermissionType 一起参与精确匹配</p>
                     * @param _host <p>默认为*，表示任何host都可以访问，当前ckafka不支持host为*，但是后面开源kafka的产品化会直接支持</p><p>删除时与 Principal、Operation、PermissionType 一起参与精确匹配</p>
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
                     * 获取<p>用户列表，默认为User:*，表示任何user都可以访问，当前用户只能是用户列表中包含的用户</p><p>删除时不校验该用户是否仍存在，允许清理已删除用户的残留策略；该参数与 Host、Operation、PermissionType 一起参与精确匹配</p>
                     * @return Principal <p>用户列表，默认为User:*，表示任何user都可以访问，当前用户只能是用户列表中包含的用户</p><p>删除时不校验该用户是否仍存在，允许清理已删除用户的残留策略；该参数与 Host、Operation、PermissionType 一起参与精确匹配</p>
                     * 
                     */
                    std::string GetPrincipal() const;

                    /**
                     * 设置<p>用户列表，默认为User:*，表示任何user都可以访问，当前用户只能是用户列表中包含的用户</p><p>删除时不校验该用户是否仍存在，允许清理已删除用户的残留策略；该参数与 Host、Operation、PermissionType 一起参与精确匹配</p>
                     * @param _principal <p>用户列表，默认为User:*，表示任何user都可以访问，当前用户只能是用户列表中包含的用户</p><p>删除时不校验该用户是否仍存在，允许清理已删除用户的残留策略；该参数与 Host、Operation、PermissionType 一起参与精确匹配</p>
                     * 
                     */
                    void SetPrincipal(const std::string& _principal);

                    /**
                     * 判断参数 Principal 是否已赋值
                     * @return Principal 是否已赋值
                     * 
                     */
                    bool PrincipalHasBeenSet() const;

                private:

                    /**
                     * <p>ckafka集群实例Id，可通过<a href="https://cloud.tencent.com/document/product/597/40835">DescribeInstances</a>接口获取</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Acl资源类型，(2:TOPIC，3:GROUP，4:CLUSTER)</p>
                     */
                    int64_t m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>资源名称，和resourceType相关，如当resourceType为TOPIC时，则该字段表示topic名称，当resourceType为GROUP时，该字段表示group名称，当resourceType为CLUSTER时，该字段可为空。</p>
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * <p>Acl操作方式</p><p>枚举值：</p><ul><li>2： ALL</li><li>3： READ</li><li>4： WRITE</li><li>5： CREATE</li><li>6： DELETE</li><li>7： ALTER</li><li>8： DESCRIBE</li><li>9： CLUSTER_ACTION</li><li>10： DESCRIBE_CONFIGS</li><li>11： ALTER_CONFIGS</li><li>12： IDEMPOTENT_WRITE</li></ul><p>合法取值与 ResourceType 相关，传入组合以外的值将返回参数错误。本参数必须与 PermissionType 同时传入</p><ul><li>ResourceType=2（TOPIC）：2、3、4、5、6、7、8、10、11</li><li>ResourceType=3（GROUP）：2、3、6、8</li><li>ResourceType=4（CLUSTER）：2、5、7、8、9、10、11、12</li></ul>
                     */
                    int64_t m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * <p>权限类型，当前ckafka支持ALLOW(相当于白名单)，其它用于后续兼容开源kafka的acl时使用</p><p>枚举值：</p><ul><li>2： DENY</li><li>3： ALLOW</li></ul><p>本参数必须与 Operation 同时传入</p>
                     */
                    int64_t m_permissionType;
                    bool m_permissionTypeHasBeenSet;

                    /**
                     * <p>默认为*，表示任何host都可以访问，当前ckafka不支持host为*，但是后面开源kafka的产品化会直接支持</p><p>删除时与 Principal、Operation、PermissionType 一起参与精确匹配</p>
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>用户列表，默认为User:*，表示任何user都可以访问，当前用户只能是用户列表中包含的用户</p><p>删除时不校验该用户是否仍存在，允许清理已删除用户的残留策略；该参数与 Host、Operation、PermissionType 一起参与精确匹配</p>
                     */
                    std::string m_principal;
                    bool m_principalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DELETEACLREQUEST_H_
