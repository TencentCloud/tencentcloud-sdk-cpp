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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBECDBPROXYRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBECDBPROXYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/BaseGroupInfo.h>
#include <tencentcloud/cdb/v20170320/model/Address.h>
#include <tencentcloud/cdb/v20170320/model/ProxyNodeInfo.h>
#include <tencentcloud/cdb/v20170320/model/RWInfo.h>
#include <tencentcloud/cdb/v20170320/model/ConnectionPoolInfo.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeCDBProxy返回参数结构体
                */
                class DescribeCDBProxyResponse : public AbstractModel
                {
                public:
                    DescribeCDBProxyResponse();
                    ~DescribeCDBProxyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取代理组基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BaseGroup 代理组基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaseGroupInfo GetBaseGroup() const;

                    /**
                     * 判断参数 BaseGroup 是否已赋值
                     * @return BaseGroup 是否已赋值
                     */
                    bool BaseGroupHasBeenSet() const;

                    /**
                     * 获取代理组地址信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Address 代理组地址信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Address GetAddress() const;

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取代理组节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxyNode 代理组节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ProxyNodeInfo GetProxyNode() const;

                    /**
                     * 判断参数 ProxyNode 是否已赋值
                     * @return ProxyNode 是否已赋值
                     */
                    bool ProxyNodeHasBeenSet() const;

                    /**
                     * 获取读写分析信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RWInstInfo 读写分析信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RWInfo GetRWInstInfo() const;

                    /**
                     * 判断参数 RWInstInfo 是否已赋值
                     * @return RWInstInfo 是否已赋值
                     */
                    bool RWInstInfoHasBeenSet() const;

                    /**
                     * 获取连接池信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConnectionPoolInfo 连接池信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ConnectionPoolInfo GetConnectionPoolInfo() const;

                    /**
                     * 判断参数 ConnectionPoolInfo 是否已赋值
                     * @return ConnectionPoolInfo 是否已赋值
                     */
                    bool ConnectionPoolInfoHasBeenSet() const;

                private:

                    /**
                     * 代理组基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaseGroupInfo m_baseGroup;
                    bool m_baseGroupHasBeenSet;

                    /**
                     * 代理组地址信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Address m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 代理组节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ProxyNodeInfo m_proxyNode;
                    bool m_proxyNodeHasBeenSet;

                    /**
                     * 读写分析信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RWInfo m_rWInstInfo;
                    bool m_rWInstInfoHasBeenSet;

                    /**
                     * 连接池信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ConnectionPoolInfo m_connectionPoolInfo;
                    bool m_connectionPoolInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBECDBPROXYRESPONSE_H_
