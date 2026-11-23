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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEGOVERNANCEINSTANCESREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEGOVERNANCEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/Metadata.h>
#include <tencentcloud/tse/v20201207/model/Location.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DescribeGovernanceInstances请求参数结构体
                */
                class DescribeGovernanceInstancesRequest : public AbstractModel
                {
                public:
                    DescribeGovernanceInstancesRequest();
                    ~DescribeGovernanceInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例所在的服务名。</p>
                     * @return Service <p>实例所在的服务名。</p>
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置<p>实例所在的服务名。</p>
                     * @param _service <p>实例所在的服务名。</p>
                     * 
                     */
                    void SetService(const std::string& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取<p>实例所在命名空间名。</p>
                     * @return Namespace <p>实例所在命名空间名。</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>实例所在命名空间名。</p>
                     * @param _namespace <p>实例所在命名空间名。</p>
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
                     * 获取<p>tse实例id。</p>
                     * @return InstanceId <p>tse实例id。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>tse实例id。</p>
                     * @param _instanceId <p>tse实例id。</p>
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
                     * 获取<p>根据实例ip过滤，多个ip使用英文逗号分隔。</p>
                     * @return Host <p>根据实例ip过滤，多个ip使用英文逗号分隔。</p>
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>根据实例ip过滤，多个ip使用英文逗号分隔。</p>
                     * @param _host <p>根据实例ip过滤，多个ip使用英文逗号分隔。</p>
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
                     * 获取<p>根据实例版本过滤。</p>
                     * @return InstanceVersion <p>根据实例版本过滤。</p>
                     * 
                     */
                    std::string GetInstanceVersion() const;

                    /**
                     * 设置<p>根据实例版本过滤。</p>
                     * @param _instanceVersion <p>根据实例版本过滤。</p>
                     * 
                     */
                    void SetInstanceVersion(const std::string& _instanceVersion);

                    /**
                     * 判断参数 InstanceVersion 是否已赋值
                     * @return InstanceVersion 是否已赋值
                     * 
                     */
                    bool InstanceVersionHasBeenSet() const;

                    /**
                     * 获取<p>根据实例协议过滤。</p>
                     * @return Protocol <p>根据实例协议过滤。</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>根据实例协议过滤。</p>
                     * @param _protocol <p>根据实例协议过滤。</p>
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取<p>根据实例健康状态过滤。false：表示不健康，true：表示健康。</p>
                     * @return HealthStatus <p>根据实例健康状态过滤。false：表示不健康，true：表示健康。</p>
                     * 
                     */
                    bool GetHealthStatus() const;

                    /**
                     * 设置<p>根据实例健康状态过滤。false：表示不健康，true：表示健康。</p>
                     * @param _healthStatus <p>根据实例健康状态过滤。false：表示不健康，true：表示健康。</p>
                     * 
                     */
                    void SetHealthStatus(const bool& _healthStatus);

                    /**
                     * 判断参数 HealthStatus 是否已赋值
                     * @return HealthStatus 是否已赋值
                     * 
                     */
                    bool HealthStatusHasBeenSet() const;

                    /**
                     * 获取<p>根据实例隔离状态过滤。false：表示非隔离，true：表示隔离中。</p>
                     * @return Isolate <p>根据实例隔离状态过滤。false：表示非隔离，true：表示隔离中。</p>
                     * 
                     */
                    bool GetIsolate() const;

                    /**
                     * 设置<p>根据实例隔离状态过滤。false：表示非隔离，true：表示隔离中。</p>
                     * @param _isolate <p>根据实例隔离状态过滤。false：表示非隔离，true：表示隔离中。</p>
                     * 
                     */
                    void SetIsolate(const bool& _isolate);

                    /**
                     * 判断参数 Isolate 是否已赋值
                     * @return Isolate 是否已赋值
                     * 
                     */
                    bool IsolateHasBeenSet() const;

                    /**
                     * 获取<p>根据元数据信息过滤。目前只支持一组元数据键值，若传了多个键值对，只会以第一个过滤。</p>
                     * @return Metadatas <p>根据元数据信息过滤。目前只支持一组元数据键值，若传了多个键值对，只会以第一个过滤。</p>
                     * 
                     */
                    std::vector<Metadata> GetMetadatas() const;

                    /**
                     * 设置<p>根据元数据信息过滤。目前只支持一组元数据键值，若传了多个键值对，只会以第一个过滤。</p>
                     * @param _metadatas <p>根据元数据信息过滤。目前只支持一组元数据键值，若传了多个键值对，只会以第一个过滤。</p>
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
                     * 获取<p>地域</p>
                     * @return Location <p>地域</p>
                     * 
                     */
                    Location GetLocation() const;

                    /**
                     * 设置<p>地域</p>
                     * @param _location <p>地域</p>
                     * 
                     */
                    void SetLocation(const Location& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                private:

                    /**
                     * <p>实例所在的服务名。</p>
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * <p>实例所在命名空间名。</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>tse实例id。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>根据实例ip过滤，多个ip使用英文逗号分隔。</p>
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>根据实例版本过滤。</p>
                     */
                    std::string m_instanceVersion;
                    bool m_instanceVersionHasBeenSet;

                    /**
                     * <p>根据实例协议过滤。</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>根据实例健康状态过滤。false：表示不健康，true：表示健康。</p>
                     */
                    bool m_healthStatus;
                    bool m_healthStatusHasBeenSet;

                    /**
                     * <p>根据实例隔离状态过滤。false：表示非隔离，true：表示隔离中。</p>
                     */
                    bool m_isolate;
                    bool m_isolateHasBeenSet;

                    /**
                     * <p>根据元数据信息过滤。目前只支持一组元数据键值，若传了多个键值对，只会以第一个过滤。</p>
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
                     * <p>地域</p>
                     */
                    Location m_location;
                    bool m_locationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEGOVERNANCEINSTANCESREQUEST_H_
