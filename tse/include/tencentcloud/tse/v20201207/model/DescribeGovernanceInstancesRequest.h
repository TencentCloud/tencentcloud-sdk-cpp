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
                     * 获取实例所在的服务名。
                     * @return Service 实例所在的服务名。
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置实例所在的服务名。
                     * @param _service 实例所在的服务名。
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
                     * 获取实例所在命名空间名。
                     * @return Namespace 实例所在命名空间名。
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置实例所在命名空间名。
                     * @param _namespace 实例所在命名空间名。
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
                     * 获取tse实例id。
                     * @return InstanceId tse实例id。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置tse实例id。
                     * @param _instanceId tse实例id。
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
                     * 获取根据实例ip过滤，多个ip使用英文逗号分隔。
                     * @return Host 根据实例ip过滤，多个ip使用英文逗号分隔。
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置根据实例ip过滤，多个ip使用英文逗号分隔。
                     * @param _host 根据实例ip过滤，多个ip使用英文逗号分隔。
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
                     * 获取根据实例版本过滤。
                     * @return InstanceVersion 根据实例版本过滤。
                     * 
                     */
                    std::string GetInstanceVersion() const;

                    /**
                     * 设置根据实例版本过滤。
                     * @param _instanceVersion 根据实例版本过滤。
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
                     * 获取根据实例协议过滤。
                     * @return Protocol 根据实例协议过滤。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置根据实例协议过滤。
                     * @param _protocol 根据实例协议过滤。
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
                     * 获取根据实例健康状态过滤。false：表示不健康，true：表示健康。
                     * @return HealthStatus 根据实例健康状态过滤。false：表示不健康，true：表示健康。
                     * 
                     */
                    bool GetHealthStatus() const;

                    /**
                     * 设置根据实例健康状态过滤。false：表示不健康，true：表示健康。
                     * @param _healthStatus 根据实例健康状态过滤。false：表示不健康，true：表示健康。
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
                     * 获取根据实例隔离状态过滤。false：表示非隔离，true：表示隔离中。
                     * @return Isolate 根据实例隔离状态过滤。false：表示非隔离，true：表示隔离中。
                     * 
                     */
                    bool GetIsolate() const;

                    /**
                     * 设置根据实例隔离状态过滤。false：表示非隔离，true：表示隔离中。
                     * @param _isolate 根据实例隔离状态过滤。false：表示非隔离，true：表示隔离中。
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
                     * 获取根据元数据信息过滤。目前只支持一组元数据键值，若传了多个键值对，只会以第一个过滤。
                     * @return Metadatas 根据元数据信息过滤。目前只支持一组元数据键值，若传了多个键值对，只会以第一个过滤。
                     * 
                     */
                    std::vector<Metadata> GetMetadatas() const;

                    /**
                     * 设置根据元数据信息过滤。目前只支持一组元数据键值，若传了多个键值对，只会以第一个过滤。
                     * @param _metadatas 根据元数据信息过滤。目前只支持一组元数据键值，若传了多个键值对，只会以第一个过滤。
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
                     * 获取地域
                     * @return Location 地域
                     * 
                     */
                    Location GetLocation() const;

                    /**
                     * 设置地域
                     * @param _location 地域
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
                     * 实例所在的服务名。
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * 实例所在命名空间名。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * tse实例id。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 根据实例ip过滤，多个ip使用英文逗号分隔。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 根据实例版本过滤。
                     */
                    std::string m_instanceVersion;
                    bool m_instanceVersionHasBeenSet;

                    /**
                     * 根据实例协议过滤。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 根据实例健康状态过滤。false：表示不健康，true：表示健康。
                     */
                    bool m_healthStatus;
                    bool m_healthStatusHasBeenSet;

                    /**
                     * 根据实例隔离状态过滤。false：表示非隔离，true：表示隔离中。
                     */
                    bool m_isolate;
                    bool m_isolateHasBeenSet;

                    /**
                     * 根据元数据信息过滤。目前只支持一组元数据键值，若传了多个键值对，只会以第一个过滤。
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
                     * 地域
                     */
                    Location m_location;
                    bool m_locationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEGOVERNANCEINSTANCESREQUEST_H_
