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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_BINDDEVICERESOURCEREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_BINDDEVICERESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * BindDeviceResource请求参数结构体
                */
                class BindDeviceResourceRequest : public AbstractModel
                {
                public:
                    BindDeviceResourceRequest();
                    ~BindDeviceResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资产ID集合
                     * @return DeviceIdSet 资产ID集合
                     * 
                     */
                    std::vector<uint64_t> GetDeviceIdSet() const;

                    /**
                     * 设置资产ID集合
                     * @param _deviceIdSet 资产ID集合
                     * 
                     */
                    void SetDeviceIdSet(const std::vector<uint64_t>& _deviceIdSet);

                    /**
                     * 判断参数 DeviceIdSet 是否已赋值
                     * @return DeviceIdSet 是否已赋值
                     * 
                     */
                    bool DeviceIdSetHasBeenSet() const;

                    /**
                     * 获取堡垒机服务ID
                     * @return ResourceId 堡垒机服务ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置堡垒机服务ID
                     * @param _resourceId 堡垒机服务ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取网络域ID
                     * @return DomainId 网络域ID
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置网络域ID
                     * @param _domainId 网络域ID
                     * 
                     */
                    void SetDomainId(const std::string& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取K8S集群托管账号维度。1-集群，2-命名空间，3-工作负载
                     * @return ManageDimension K8S集群托管账号维度。1-集群，2-命名空间，3-工作负载
                     * 
                     */
                    uint64_t GetManageDimension() const;

                    /**
                     * 设置K8S集群托管账号维度。1-集群，2-命名空间，3-工作负载
                     * @param _manageDimension K8S集群托管账号维度。1-集群，2-命名空间，3-工作负载
                     * 
                     */
                    void SetManageDimension(const uint64_t& _manageDimension);

                    /**
                     * 判断参数 ManageDimension 是否已赋值
                     * @return ManageDimension 是否已赋值
                     * 
                     */
                    bool ManageDimensionHasBeenSet() const;

                    /**
                     * 获取K8S集群托管账号id
                     * @return ManageAccountId K8S集群托管账号id
                     * 
                     */
                    int64_t GetManageAccountId() const;

                    /**
                     * 设置K8S集群托管账号id
                     * @param _manageAccountId K8S集群托管账号id
                     * 
                     */
                    void SetManageAccountId(const int64_t& _manageAccountId);

                    /**
                     * 判断参数 ManageAccountId 是否已赋值
                     * @return ManageAccountId 是否已赋值
                     * 
                     */
                    bool ManageAccountIdHasBeenSet() const;

                    /**
                     * 获取K8S集群托管账号名称
                     * @return ManageAccount K8S集群托管账号名称
                     * 
                     */
                    std::string GetManageAccount() const;

                    /**
                     * 设置K8S集群托管账号名称
                     * @param _manageAccount K8S集群托管账号名称
                     * 
                     */
                    void SetManageAccount(const std::string& _manageAccount);

                    /**
                     * 判断参数 ManageAccount 是否已赋值
                     * @return ManageAccount 是否已赋值
                     * 
                     */
                    bool ManageAccountHasBeenSet() const;

                    /**
                     * 获取K8S集群托管账号凭证
                     * @return ManageKubeconfig K8S集群托管账号凭证
                     * 
                     */
                    std::string GetManageKubeconfig() const;

                    /**
                     * 设置K8S集群托管账号凭证
                     * @param _manageKubeconfig K8S集群托管账号凭证
                     * 
                     */
                    void SetManageKubeconfig(const std::string& _manageKubeconfig);

                    /**
                     * 判断参数 ManageKubeconfig 是否已赋值
                     * @return ManageKubeconfig 是否已赋值
                     * 
                     */
                    bool ManageKubeconfigHasBeenSet() const;

                    /**
                     * 获取K8S集群托管的namespace
                     * @return Namespace K8S集群托管的namespace
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置K8S集群托管的namespace
                     * @param _namespace K8S集群托管的namespace
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
                     * 获取K8S集群托管的workload
                     * @return Workload K8S集群托管的workload
                     * 
                     */
                    std::string GetWorkload() const;

                    /**
                     * 设置K8S集群托管的workload
                     * @param _workload K8S集群托管的workload
                     * 
                     */
                    void SetWorkload(const std::string& _workload);

                    /**
                     * 判断参数 Workload 是否已赋值
                     * @return Workload 是否已赋值
                     * 
                     */
                    bool WorkloadHasBeenSet() const;

                private:

                    /**
                     * 资产ID集合
                     */
                    std::vector<uint64_t> m_deviceIdSet;
                    bool m_deviceIdSetHasBeenSet;

                    /**
                     * 堡垒机服务ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 网络域ID
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * K8S集群托管账号维度。1-集群，2-命名空间，3-工作负载
                     */
                    uint64_t m_manageDimension;
                    bool m_manageDimensionHasBeenSet;

                    /**
                     * K8S集群托管账号id
                     */
                    int64_t m_manageAccountId;
                    bool m_manageAccountIdHasBeenSet;

                    /**
                     * K8S集群托管账号名称
                     */
                    std::string m_manageAccount;
                    bool m_manageAccountHasBeenSet;

                    /**
                     * K8S集群托管账号凭证
                     */
                    std::string m_manageKubeconfig;
                    bool m_manageKubeconfigHasBeenSet;

                    /**
                     * K8S集群托管的namespace
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * K8S集群托管的workload
                     */
                    std::string m_workload;
                    bool m_workloadHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_BINDDEVICERESOURCEREQUEST_H_
