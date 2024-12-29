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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEGOVERNANCESERVICESREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEGOVERNANCESERVICESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/Metadata.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DescribeGovernanceServices请求参数结构体
                */
                class DescribeGovernanceServicesRequest : public AbstractModel
                {
                public:
                    DescribeGovernanceServicesRequest();
                    ~DescribeGovernanceServicesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取按照服务名过滤，精确匹配。
                     * @return Name 按照服务名过滤，精确匹配。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置按照服务名过滤，精确匹配。
                     * @param _name 按照服务名过滤，精确匹配。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取按照命名空间过滤，精确匹配。
                     * @return Namespace 按照命名空间过滤，精确匹配。
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置按照命名空间过滤，精确匹配。
                     * @param _namespace 按照命名空间过滤，精确匹配。
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
                     * 获取使用元数据过滤，目前只支持一组元组数，若传了多条，只会使用第一条元数据过滤。
                     * @return Metadatas 使用元数据过滤，目前只支持一组元组数，若传了多条，只会使用第一条元数据过滤。
                     * 
                     */
                    std::vector<Metadata> GetMetadatas() const;

                    /**
                     * 设置使用元数据过滤，目前只支持一组元组数，若传了多条，只会使用第一条元数据过滤。
                     * @param _metadatas 使用元数据过滤，目前只支持一组元组数，若传了多条，只会使用第一条元数据过滤。
                     * 
                     */
                    void SetMetadatas(const std::vector<Metadata>& _metadatas);

                    /**
                     * 判断参数 Metadatas 是否已赋值
                     * @return Metadatas 是否已赋值
                     * 
                     */
                    bool MetadatasHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为20，最大值为100。
                     * @return Limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。
                     * @param _limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

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
                     * 获取服务所属部门。
                     * @return Department 服务所属部门。
                     * 
                     */
                    std::string GetDepartment() const;

                    /**
                     * 设置服务所属部门。
                     * @param _department 服务所属部门。
                     * 
                     */
                    void SetDepartment(const std::string& _department);

                    /**
                     * 判断参数 Department 是否已赋值
                     * @return Department 是否已赋值
                     * 
                     */
                    bool DepartmentHasBeenSet() const;

                    /**
                     * 获取服务所属业务。
                     * @return Business 服务所属业务。
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置服务所属业务。
                     * @param _business 服务所属业务。
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取服务中实例的ip，用来过滤服务。
                     * @return Host 服务中实例的ip，用来过滤服务。
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置服务中实例的ip，用来过滤服务。
                     * @param _host 服务中实例的ip，用来过滤服务。
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
                     * 获取是否只查询存在健康实例的服务
                     * @return OnlyExistHealthyInstance 是否只查询存在健康实例的服务
                     * 
                     */
                    bool GetOnlyExistHealthyInstance() const;

                    /**
                     * 设置是否只查询存在健康实例的服务
                     * @param _onlyExistHealthyInstance 是否只查询存在健康实例的服务
                     * 
                     */
                    void SetOnlyExistHealthyInstance(const bool& _onlyExistHealthyInstance);

                    /**
                     * 判断参数 OnlyExistHealthyInstance 是否已赋值
                     * @return OnlyExistHealthyInstance 是否已赋值
                     * 
                     */
                    bool OnlyExistHealthyInstanceHasBeenSet() const;

                    /**
                     * 获取是否开启同步到全局注册中心	
                     * @return SyncToGlobalRegistry 是否开启同步到全局注册中心	
                     * 
                     */
                    std::string GetSyncToGlobalRegistry() const;

                    /**
                     * 设置是否开启同步到全局注册中心	
                     * @param _syncToGlobalRegistry 是否开启同步到全局注册中心	
                     * 
                     */
                    void SetSyncToGlobalRegistry(const std::string& _syncToGlobalRegistry);

                    /**
                     * 判断参数 SyncToGlobalRegistry 是否已赋值
                     * @return SyncToGlobalRegistry 是否已赋值
                     * 
                     */
                    bool SyncToGlobalRegistryHasBeenSet() const;

                private:

                    /**
                     * 按照服务名过滤，精确匹配。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 按照命名空间过滤，精确匹配。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 使用元数据过滤，目前只支持一组元组数，若传了多条，只会使用第一条元数据过滤。
                     */
                    std::vector<Metadata> m_metadatas;
                    bool m_metadatasHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * tse 实例 id。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 服务所属部门。
                     */
                    std::string m_department;
                    bool m_departmentHasBeenSet;

                    /**
                     * 服务所属业务。
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 服务中实例的ip，用来过滤服务。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 是否只查询存在健康实例的服务
                     */
                    bool m_onlyExistHealthyInstance;
                    bool m_onlyExistHealthyInstanceHasBeenSet;

                    /**
                     * 是否开启同步到全局注册中心	
                     */
                    std::string m_syncToGlobalRegistry;
                    bool m_syncToGlobalRegistryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEGOVERNANCESERVICESREQUEST_H_
