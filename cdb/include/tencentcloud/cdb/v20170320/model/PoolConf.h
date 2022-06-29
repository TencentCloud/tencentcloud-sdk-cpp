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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_POOLCONF_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_POOLCONF_H_

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
                * 数据库代理连接池规格配置
                */
                class PoolConf : public AbstractModel
                {
                public:
                    PoolConf();
                    ~PoolConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取连接池类型：SessionConnectionPool（会话级别连接池
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConnectionPoolType 连接池类型：SessionConnectionPool（会话级别连接池
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetConnectionPoolType() const;

                    /**
                     * 设置连接池类型：SessionConnectionPool（会话级别连接池
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ConnectionPoolType 连接池类型：SessionConnectionPool（会话级别连接池
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConnectionPoolType(const std::string& _connectionPoolType);

                    /**
                     * 判断参数 ConnectionPoolType 是否已赋值
                     * @return ConnectionPoolType 是否已赋值
                     */
                    bool ConnectionPoolTypeHasBeenSet() const;

                    /**
                     * 获取最大可保持连接阈值：单位（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxPoolConnectionTimeOut 最大可保持连接阈值：单位（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetMaxPoolConnectionTimeOut() const;

                    /**
                     * 设置最大可保持连接阈值：单位（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MaxPoolConnectionTimeOut 最大可保持连接阈值：单位（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMaxPoolConnectionTimeOut(const int64_t& _maxPoolConnectionTimeOut);

                    /**
                     * 判断参数 MaxPoolConnectionTimeOut 是否已赋值
                     * @return MaxPoolConnectionTimeOut 是否已赋值
                     */
                    bool MaxPoolConnectionTimeOutHasBeenSet() const;

                    /**
                     * 获取最小可保持连接阈值：单位（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinPoolConnectionTimeOut 最小可保持连接阈值：单位（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetMinPoolConnectionTimeOut() const;

                    /**
                     * 设置最小可保持连接阈值：单位（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MinPoolConnectionTimeOut 最小可保持连接阈值：单位（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMinPoolConnectionTimeOut(const int64_t& _minPoolConnectionTimeOut);

                    /**
                     * 判断参数 MinPoolConnectionTimeOut 是否已赋值
                     * @return MinPoolConnectionTimeOut 是否已赋值
                     */
                    bool MinPoolConnectionTimeOutHasBeenSet() const;

                private:

                    /**
                     * 连接池类型：SessionConnectionPool（会话级别连接池
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_connectionPoolType;
                    bool m_connectionPoolTypeHasBeenSet;

                    /**
                     * 最大可保持连接阈值：单位（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxPoolConnectionTimeOut;
                    bool m_maxPoolConnectionTimeOutHasBeenSet;

                    /**
                     * 最小可保持连接阈值：单位（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_minPoolConnectionTimeOut;
                    bool m_minPoolConnectionTimeOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_POOLCONF_H_
