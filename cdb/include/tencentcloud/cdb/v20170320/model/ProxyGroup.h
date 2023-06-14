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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_PROXYGROUP_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_PROXYGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/BaseGroupInfo.h>
#include <tencentcloud/cdb/v20170320/model/Address.h>
#include <tencentcloud/cdb/v20170320/model/ConnectionPoolInfo.h>
#include <tencentcloud/cdb/v20170320/model/ProxyNodeInfo.h>
#include <tencentcloud/cdb/v20170320/model/RWInfo.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 数据代理组信息
                */
                class ProxyGroup : public AbstractModel
                {
                public:
                    ProxyGroup();
                    ~ProxyGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取代理基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BaseGroup 代理基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BaseGroupInfo GetBaseGroup() const;

                    /**
                     * 设置代理基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _baseGroup 代理基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBaseGroup(const BaseGroupInfo& _baseGroup);

                    /**
                     * 判断参数 BaseGroup 是否已赋值
                     * @return BaseGroup 是否已赋值
                     * 
                     */
                    bool BaseGroupHasBeenSet() const;

                    /**
                     * 获取代理地址信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Address 代理地址信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Address> GetAddress() const;

                    /**
                     * 设置代理地址信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _address 代理地址信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAddress(const std::vector<Address>& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取代理连接池信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConnectionPoolInfo 代理连接池信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ConnectionPoolInfo GetConnectionPoolInfo() const;

                    /**
                     * 设置代理连接池信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _connectionPoolInfo 代理连接池信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConnectionPoolInfo(const ConnectionPoolInfo& _connectionPoolInfo);

                    /**
                     * 判断参数 ConnectionPoolInfo 是否已赋值
                     * @return ConnectionPoolInfo 是否已赋值
                     * 
                     */
                    bool ConnectionPoolInfoHasBeenSet() const;

                    /**
                     * 获取代理节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxyNode 代理节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ProxyNodeInfo> GetProxyNode() const;

                    /**
                     * 设置代理节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _proxyNode 代理节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProxyNode(const std::vector<ProxyNodeInfo>& _proxyNode);

                    /**
                     * 判断参数 ProxyNode 是否已赋值
                     * @return ProxyNode 是否已赋值
                     * 
                     */
                    bool ProxyNodeHasBeenSet() const;

                    /**
                     * 获取代理路由信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RWInstInfo 代理路由信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RWInfo GetRWInstInfo() const;

                    /**
                     * 设置代理路由信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rWInstInfo 代理路由信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRWInstInfo(const RWInfo& _rWInstInfo);

                    /**
                     * 判断参数 RWInstInfo 是否已赋值
                     * @return RWInstInfo 是否已赋值
                     * 
                     */
                    bool RWInstInfoHasBeenSet() const;

                private:

                    /**
                     * 代理基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaseGroupInfo m_baseGroup;
                    bool m_baseGroupHasBeenSet;

                    /**
                     * 代理地址信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Address> m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 代理连接池信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ConnectionPoolInfo m_connectionPoolInfo;
                    bool m_connectionPoolInfoHasBeenSet;

                    /**
                     * 代理节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ProxyNodeInfo> m_proxyNode;
                    bool m_proxyNodeHasBeenSet;

                    /**
                     * 代理路由信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RWInfo m_rWInstInfo;
                    bool m_rWInstInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_PROXYGROUP_H_
