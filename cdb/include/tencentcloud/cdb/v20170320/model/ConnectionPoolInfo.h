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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CONNECTIONPOOLINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CONNECTIONPOOLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 连接池信息
                */
                class ConnectionPoolInfo : public AbstractModel
                {
                public:
                    ConnectionPoolInfo();
                    ~ConnectionPoolInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启了连接池
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConnectionPool 是否开启了连接池
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetConnectionPool() const;

                    /**
                     * 设置是否开启了连接池
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ConnectionPool 是否开启了连接池
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConnectionPool(const bool& _connectionPool);

                    /**
                     * 判断参数 ConnectionPool 是否已赋值
                     * @return ConnectionPool 是否已赋值
                     */
                    bool ConnectionPoolHasBeenSet() const;

                    /**
                     * 获取连接池类型：SessionConnectionPool（会话级别连接池）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConnectionPoolType 连接池类型：SessionConnectionPool（会话级别连接池）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetConnectionPoolType() const;

                    /**
                     * 设置连接池类型：SessionConnectionPool（会话级别连接池）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ConnectionPoolType 连接池类型：SessionConnectionPool（会话级别连接池）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConnectionPoolType(const std::string& _connectionPoolType);

                    /**
                     * 判断参数 ConnectionPoolType 是否已赋值
                     * @return ConnectionPoolType 是否已赋值
                     */
                    bool ConnectionPoolTypeHasBeenSet() const;

                    /**
                     * 获取连接池保持阈值：单位（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PoolConnectionTimeOut 连接池保持阈值：单位（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetPoolConnectionTimeOut() const;

                    /**
                     * 设置连接池保持阈值：单位（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PoolConnectionTimeOut 连接池保持阈值：单位（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPoolConnectionTimeOut(const int64_t& _poolConnectionTimeOut);

                    /**
                     * 判断参数 PoolConnectionTimeOut 是否已赋值
                     * @return PoolConnectionTimeOut 是否已赋值
                     */
                    bool PoolConnectionTimeOutHasBeenSet() const;

                private:

                    /**
                     * 是否开启了连接池
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_connectionPool;
                    bool m_connectionPoolHasBeenSet;

                    /**
                     * 连接池类型：SessionConnectionPool（会话级别连接池）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_connectionPoolType;
                    bool m_connectionPoolTypeHasBeenSet;

                    /**
                     * 连接池保持阈值：单位（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_poolConnectionTimeOut;
                    bool m_poolConnectionTimeOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CONNECTIONPOOLINFO_H_
