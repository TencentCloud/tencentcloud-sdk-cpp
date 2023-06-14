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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_LAYER4RULE_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_LAYER4RULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/SourceServer.h>
#include <tencentcloud/antiddos/v20200309/model/InstanceRelation.h>
#include <tencentcloud/antiddos/v20200309/model/RuleInstanceRelation.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * 4层转发规则
                */
                class Layer4Rule : public AbstractModel
                {
                public:
                    Layer4Rule();
                    ~Layer4Rule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源站端口，取值1~65535
                     * @return BackendPort 源站端口，取值1~65535
                     * 
                     */
                    uint64_t GetBackendPort() const;

                    /**
                     * 设置源站端口，取值1~65535
                     * @param _backendPort 源站端口，取值1~65535
                     * 
                     */
                    void SetBackendPort(const uint64_t& _backendPort);

                    /**
                     * 判断参数 BackendPort 是否已赋值
                     * @return BackendPort 是否已赋值
                     * 
                     */
                    bool BackendPortHasBeenSet() const;

                    /**
                     * 获取转发端口，取值1~65535
                     * @return FrontendPort 转发端口，取值1~65535
                     * 
                     */
                    uint64_t GetFrontendPort() const;

                    /**
                     * 设置转发端口，取值1~65535
                     * @param _frontendPort 转发端口，取值1~65535
                     * 
                     */
                    void SetFrontendPort(const uint64_t& _frontendPort);

                    /**
                     * 判断参数 FrontendPort 是否已赋值
                     * @return FrontendPort 是否已赋值
                     * 
                     */
                    bool FrontendPortHasBeenSet() const;

                    /**
                     * 获取转发协议，取值[
TCP(TCP协议)
UDP(UDP协议)
]
                     * @return Protocol 转发协议，取值[
TCP(TCP协议)
UDP(UDP协议)
]
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置转发协议，取值[
TCP(TCP协议)
UDP(UDP协议)
]
                     * @param _protocol 转发协议，取值[
TCP(TCP协议)
UDP(UDP协议)
]
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
                     * 获取源站列表
                     * @return RealServers 源站列表
                     * 
                     */
                    std::vector<SourceServer> GetRealServers() const;

                    /**
                     * 设置源站列表
                     * @param _realServers 源站列表
                     * 
                     */
                    void SetRealServers(const std::vector<SourceServer>& _realServers);

                    /**
                     * 判断参数 RealServers 是否已赋值
                     * @return RealServers 是否已赋值
                     * 
                     */
                    bool RealServersHasBeenSet() const;

                    /**
                     * 获取资源实例
                     * @return InstanceDetails 资源实例
                     * 
                     */
                    std::vector<InstanceRelation> GetInstanceDetails() const;

                    /**
                     * 设置资源实例
                     * @param _instanceDetails 资源实例
                     * 
                     */
                    void SetInstanceDetails(const std::vector<InstanceRelation>& _instanceDetails);

                    /**
                     * 判断参数 InstanceDetails 是否已赋值
                     * @return InstanceDetails 是否已赋值
                     * 
                     */
                    bool InstanceDetailsHasBeenSet() const;

                    /**
                     * 获取规则所属的资源实例
                     * @return InstanceDetailRule 规则所属的资源实例
                     * 
                     */
                    std::vector<RuleInstanceRelation> GetInstanceDetailRule() const;

                    /**
                     * 设置规则所属的资源实例
                     * @param _instanceDetailRule 规则所属的资源实例
                     * 
                     */
                    void SetInstanceDetailRule(const std::vector<RuleInstanceRelation>& _instanceDetailRule);

                    /**
                     * 判断参数 InstanceDetailRule 是否已赋值
                     * @return InstanceDetailRule 是否已赋值
                     * 
                     */
                    bool InstanceDetailRuleHasBeenSet() const;

                private:

                    /**
                     * 源站端口，取值1~65535
                     */
                    uint64_t m_backendPort;
                    bool m_backendPortHasBeenSet;

                    /**
                     * 转发端口，取值1~65535
                     */
                    uint64_t m_frontendPort;
                    bool m_frontendPortHasBeenSet;

                    /**
                     * 转发协议，取值[
TCP(TCP协议)
UDP(UDP协议)
]
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 源站列表
                     */
                    std::vector<SourceServer> m_realServers;
                    bool m_realServersHasBeenSet;

                    /**
                     * 资源实例
                     */
                    std::vector<InstanceRelation> m_instanceDetails;
                    bool m_instanceDetailsHasBeenSet;

                    /**
                     * 规则所属的资源实例
                     */
                    std::vector<RuleInstanceRelation> m_instanceDetailRule;
                    bool m_instanceDetailRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_LAYER4RULE_H_
