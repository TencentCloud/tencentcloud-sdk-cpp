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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEGOVERNANCESERVICECONTRACTSREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEGOVERNANCESERVICECONTRACTSREQUEST_H_

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
                * DescribeGovernanceServiceContracts请求参数结构体
                */
                class DescribeGovernanceServiceContractsRequest : public AbstractModel
                {
                public:
                    DescribeGovernanceServiceContractsRequest();
                    ~DescribeGovernanceServiceContractsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取北极星引擎实例ID
                     * @return InstanceId 北极星引擎实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置北极星引擎实例ID
                     * @param _instanceId 北极星引擎实例ID
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
                     * 获取分页偏移量
                     * @return Offset 分页偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量
                     * @param _offset 分页偏移量
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页条数
                     * @return Limit 分页条数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页条数
                     * @param _limit 分页条数
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

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

                    /**
                     * 获取契约名称
                     * @return Name 契约名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置契约名称
                     * @param _name 契约名称
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
                     * 获取契约版本
                     * @return ContractVersion 契约版本
                     * 
                     */
                    std::string GetContractVersion() const;

                    /**
                     * 设置契约版本
                     * @param _contractVersion 契约版本
                     * 
                     */
                    void SetContractVersion(const std::string& _contractVersion);

                    /**
                     * 判断参数 ContractVersion 是否已赋值
                     * @return ContractVersion 是否已赋值
                     * 
                     */
                    bool ContractVersionHasBeenSet() const;

                    /**
                     * 获取契约协议
                     * @return Protocol 契约协议
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置契约协议
                     * @param _protocol 契约协议
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
                     * 获取是否只展示基本信息
                     * @return Brief 是否只展示基本信息
                     * 
                     */
                    bool GetBrief() const;

                    /**
                     * 设置是否只展示基本信息
                     * @param _brief 是否只展示基本信息
                     * 
                     */
                    void SetBrief(const bool& _brief);

                    /**
                     * 判断参数 Brief 是否已赋值
                     * @return Brief 是否已赋值
                     * 
                     */
                    bool BriefHasBeenSet() const;

                private:

                    /**
                     * 北极星引擎实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 分页偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页条数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

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

                    /**
                     * 契约名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 契约版本
                     */
                    std::string m_contractVersion;
                    bool m_contractVersionHasBeenSet;

                    /**
                     * 契约协议
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 是否只展示基本信息
                     */
                    bool m_brief;
                    bool m_briefHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEGOVERNANCESERVICECONTRACTSREQUEST_H_
