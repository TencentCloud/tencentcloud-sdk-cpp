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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DBURL_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DBURL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * 数据库实例 URI 形式的连接串访问地址示例。
                */
                class DbURL : public AbstractModel
                {
                public:
                    DbURL();
                    ~DbURL() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指 URI 类别，包括：，
- CLUSTER_ALL：指通过该 URI 连接库实例的主节点，可读写。
- CLUSTER_READ_READONLY：指通过该 URI 连接实例只读节点。
- CLUSTER_READ_SECONDARY：指通过该 URI 连接实例从节点。
- CLUSTER_READ_SECONDARY_AND_READONLY：指通过该 URI 连接实例只读从节点。
- CLUSTER_PRIMARY_AND_SECONDARY：指通过该 URI 连接实例 主节点与从节点。
- MONGOS_ALL：指通过该  URI 连接每个 Mongos 节点，可读写。
- MONGOS_READ_READONLY：指通过该 URI 连接 Mongos 的只读节点。
- MONGOS_READ_SECONDARY：指通过该 URI 连接 Mongos 的从节点。
- MONGOS_READ_PRIMARY_AND_SECONDARY：指通过该URI 连接 Mongos 的主节点与从节点。
- MONGOS_READ_SECONDARY_AND_READONLY：指通过该URI 连接 Mongos 的从节点与只读节点。
                     * @return URLType 指 URI 类别，包括：，
- CLUSTER_ALL：指通过该 URI 连接库实例的主节点，可读写。
- CLUSTER_READ_READONLY：指通过该 URI 连接实例只读节点。
- CLUSTER_READ_SECONDARY：指通过该 URI 连接实例从节点。
- CLUSTER_READ_SECONDARY_AND_READONLY：指通过该 URI 连接实例只读从节点。
- CLUSTER_PRIMARY_AND_SECONDARY：指通过该 URI 连接实例 主节点与从节点。
- MONGOS_ALL：指通过该  URI 连接每个 Mongos 节点，可读写。
- MONGOS_READ_READONLY：指通过该 URI 连接 Mongos 的只读节点。
- MONGOS_READ_SECONDARY：指通过该 URI 连接 Mongos 的从节点。
- MONGOS_READ_PRIMARY_AND_SECONDARY：指通过该URI 连接 Mongos 的主节点与从节点。
- MONGOS_READ_SECONDARY_AND_READONLY：指通过该URI 连接 Mongos 的从节点与只读节点。
                     * 
                     */
                    std::string GetURLType() const;

                    /**
                     * 设置指 URI 类别，包括：，
- CLUSTER_ALL：指通过该 URI 连接库实例的主节点，可读写。
- CLUSTER_READ_READONLY：指通过该 URI 连接实例只读节点。
- CLUSTER_READ_SECONDARY：指通过该 URI 连接实例从节点。
- CLUSTER_READ_SECONDARY_AND_READONLY：指通过该 URI 连接实例只读从节点。
- CLUSTER_PRIMARY_AND_SECONDARY：指通过该 URI 连接实例 主节点与从节点。
- MONGOS_ALL：指通过该  URI 连接每个 Mongos 节点，可读写。
- MONGOS_READ_READONLY：指通过该 URI 连接 Mongos 的只读节点。
- MONGOS_READ_SECONDARY：指通过该 URI 连接 Mongos 的从节点。
- MONGOS_READ_PRIMARY_AND_SECONDARY：指通过该URI 连接 Mongos 的主节点与从节点。
- MONGOS_READ_SECONDARY_AND_READONLY：指通过该URI 连接 Mongos 的从节点与只读节点。
                     * @param _uRLType 指 URI 类别，包括：，
- CLUSTER_ALL：指通过该 URI 连接库实例的主节点，可读写。
- CLUSTER_READ_READONLY：指通过该 URI 连接实例只读节点。
- CLUSTER_READ_SECONDARY：指通过该 URI 连接实例从节点。
- CLUSTER_READ_SECONDARY_AND_READONLY：指通过该 URI 连接实例只读从节点。
- CLUSTER_PRIMARY_AND_SECONDARY：指通过该 URI 连接实例 主节点与从节点。
- MONGOS_ALL：指通过该  URI 连接每个 Mongos 节点，可读写。
- MONGOS_READ_READONLY：指通过该 URI 连接 Mongos 的只读节点。
- MONGOS_READ_SECONDARY：指通过该 URI 连接 Mongos 的从节点。
- MONGOS_READ_PRIMARY_AND_SECONDARY：指通过该URI 连接 Mongos 的主节点与从节点。
- MONGOS_READ_SECONDARY_AND_READONLY：指通过该URI 连接 Mongos 的从节点与只读节点。
                     * 
                     */
                    void SetURLType(const std::string& _uRLType);

                    /**
                     * 判断参数 URLType 是否已赋值
                     * @return URLType 是否已赋值
                     * 
                     */
                    bool URLTypeHasBeenSet() const;

                    /**
                     * 获取实例 URI 形式的连接串访问地址示例。
                     * @return Address 实例 URI 形式的连接串访问地址示例。
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置实例 URI 形式的连接串访问地址示例。
                     * @param _address 实例 URI 形式的连接串访问地址示例。
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                private:

                    /**
                     * 指 URI 类别，包括：，
- CLUSTER_ALL：指通过该 URI 连接库实例的主节点，可读写。
- CLUSTER_READ_READONLY：指通过该 URI 连接实例只读节点。
- CLUSTER_READ_SECONDARY：指通过该 URI 连接实例从节点。
- CLUSTER_READ_SECONDARY_AND_READONLY：指通过该 URI 连接实例只读从节点。
- CLUSTER_PRIMARY_AND_SECONDARY：指通过该 URI 连接实例 主节点与从节点。
- MONGOS_ALL：指通过该  URI 连接每个 Mongos 节点，可读写。
- MONGOS_READ_READONLY：指通过该 URI 连接 Mongos 的只读节点。
- MONGOS_READ_SECONDARY：指通过该 URI 连接 Mongos 的从节点。
- MONGOS_READ_PRIMARY_AND_SECONDARY：指通过该URI 连接 Mongos 的主节点与从节点。
- MONGOS_READ_SECONDARY_AND_READONLY：指通过该URI 连接 Mongos 的从节点与只读节点。
                     */
                    std::string m_uRLType;
                    bool m_uRLTypeHasBeenSet;

                    /**
                     * 实例 URI 形式的连接串访问地址示例。
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DBURL_H_
