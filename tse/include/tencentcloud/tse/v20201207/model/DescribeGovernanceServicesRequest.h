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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEGOVERNANCESERVICESREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEGOVERNANCESERVICESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/Metadata.h>
#include <tencentcloud/tse/v20201207/model/Filter.h>


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
                     * 获取<p>按照服务名过滤，精确匹配。</p>
                     * @return Name <p>按照服务名过滤，精确匹配。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>按照服务名过滤，精确匹配。</p>
                     * @param _name <p>按照服务名过滤，精确匹配。</p>
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
                     * 获取<p>按照命名空间过滤，精确匹配。</p>
                     * @return Namespace <p>按照命名空间过滤，精确匹配。</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>按照命名空间过滤，精确匹配。</p>
                     * @param _namespace <p>按照命名空间过滤，精确匹配。</p>
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
                     * 获取<p>使用元数据过滤，目前只支持一组元组数，若传了多条，只会使用第一条元数据过滤。</p>
                     * @return Metadatas <p>使用元数据过滤，目前只支持一组元组数，若传了多条，只会使用第一条元数据过滤。</p>
                     * 
                     */
                    std::vector<Metadata> GetMetadatas() const;

                    /**
                     * 设置<p>使用元数据过滤，目前只支持一组元组数，若传了多条，只会使用第一条元数据过滤。</p>
                     * @param _metadatas <p>使用元数据过滤，目前只支持一组元组数，若传了多条，只会使用第一条元数据过滤。</p>
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
                     * 获取<p>偏移量，默认为0。</p>
                     * @return Offset <p>偏移量，默认为0。</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认为0。</p>
                     * @param _offset <p>偏移量，默认为0。</p>
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
                     * 获取<p>返回数量，默认为20，最大值为100。</p>
                     * @return Limit <p>返回数量，默认为20，最大值为100。</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认为20，最大值为100。</p>
                     * @param _limit <p>返回数量，默认为20，最大值为100。</p>
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
                     * 获取<p>tse 实例 id。</p>
                     * @return InstanceId <p>tse 实例 id。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>tse 实例 id。</p>
                     * @param _instanceId <p>tse 实例 id。</p>
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
                     * 获取<p>服务所属部门。</p>
                     * @return Department <p>服务所属部门。</p>
                     * 
                     */
                    std::string GetDepartment() const;

                    /**
                     * 设置<p>服务所属部门。</p>
                     * @param _department <p>服务所属部门。</p>
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
                     * 获取<p>服务所属业务。</p>
                     * @return Business <p>服务所属业务。</p>
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置<p>服务所属业务。</p>
                     * @param _business <p>服务所属业务。</p>
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
                     * 获取<p>服务中实例的ip，用来过滤服务。</p>
                     * @return Host <p>服务中实例的ip，用来过滤服务。</p>
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>服务中实例的ip，用来过滤服务。</p>
                     * @param _host <p>服务中实例的ip，用来过滤服务。</p>
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
                     * 获取<p>是否只查询存在健康实例的服务</p>
                     * @return OnlyExistHealthyInstance <p>是否只查询存在健康实例的服务</p>
                     * 
                     */
                    bool GetOnlyExistHealthyInstance() const;

                    /**
                     * 设置<p>是否只查询存在健康实例的服务</p>
                     * @param _onlyExistHealthyInstance <p>是否只查询存在健康实例的服务</p>
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
                     * 获取<p>是否开启同步到全局注册中心</p>
                     * @return SyncToGlobalRegistry <p>是否开启同步到全局注册中心</p>
                     * 
                     */
                    std::string GetSyncToGlobalRegistry() const;

                    /**
                     * 设置<p>是否开启同步到全局注册中心</p>
                     * @param _syncToGlobalRegistry <p>是否开启同步到全局注册中心</p>
                     * 
                     */
                    void SetSyncToGlobalRegistry(const std::string& _syncToGlobalRegistry);

                    /**
                     * 判断参数 SyncToGlobalRegistry 是否已赋值
                     * @return SyncToGlobalRegistry 是否已赋值
                     * 
                     */
                    bool SyncToGlobalRegistryHasBeenSet() const;

                    /**
                     * 获取<p>过滤筛选条件</p>
                     * @return StatusFilter <p>过滤筛选条件</p>
                     * 
                     */
                    std::vector<Filter> GetStatusFilter() const;

                    /**
                     * 设置<p>过滤筛选条件</p>
                     * @param _statusFilter <p>过滤筛选条件</p>
                     * 
                     */
                    void SetStatusFilter(const std::vector<Filter>& _statusFilter);

                    /**
                     * 判断参数 StatusFilter 是否已赋值
                     * @return StatusFilter 是否已赋值
                     * 
                     */
                    bool StatusFilterHasBeenSet() const;

                    /**
                     * 获取<p>服务类型</p><p>枚举值：</p><ul><li>0： 微服务（默认）</li><li>1： MCP Server</li><li>2： AI Agent</li></ul>
                     * @return Type <p>服务类型</p><p>枚举值：</p><ul><li>0： 微服务（默认）</li><li>1： MCP Server</li><li>2： AI Agent</li></ul>
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置<p>服务类型</p><p>枚举值：</p><ul><li>0： 微服务（默认）</li><li>1： MCP Server</li><li>2： AI Agent</li></ul>
                     * @param _type <p>服务类型</p><p>枚举值：</p><ul><li>0： 微服务（默认）</li><li>1： MCP Server</li><li>2： AI Agent</li></ul>
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * <p>按照服务名过滤，精确匹配。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>按照命名空间过滤，精确匹配。</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>使用元数据过滤，目前只支持一组元组数，若传了多条，只会使用第一条元数据过滤。</p>
                     */
                    std::vector<Metadata> m_metadatas;
                    bool m_metadatasHasBeenSet;

                    /**
                     * <p>偏移量，默认为0。</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回数量，默认为20，最大值为100。</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>tse 实例 id。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>服务所属部门。</p>
                     */
                    std::string m_department;
                    bool m_departmentHasBeenSet;

                    /**
                     * <p>服务所属业务。</p>
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * <p>服务中实例的ip，用来过滤服务。</p>
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>是否只查询存在健康实例的服务</p>
                     */
                    bool m_onlyExistHealthyInstance;
                    bool m_onlyExistHealthyInstanceHasBeenSet;

                    /**
                     * <p>是否开启同步到全局注册中心</p>
                     */
                    std::string m_syncToGlobalRegistry;
                    bool m_syncToGlobalRegistryHasBeenSet;

                    /**
                     * <p>过滤筛选条件</p>
                     */
                    std::vector<Filter> m_statusFilter;
                    bool m_statusFilterHasBeenSet;

                    /**
                     * <p>服务类型</p><p>枚举值：</p><ul><li>0： 微服务（默认）</li><li>1： MCP Server</li><li>2： AI Agent</li></ul>
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEGOVERNANCESERVICESREQUEST_H_
