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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBECLIENTCONNECTIONSRESPONSE_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBECLIENTCONNECTIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/ClientConnection.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeClientConnections返回参数结构体
                */
                class DescribeClientConnectionsResponse : public AbstractModel
                {
                public:
                    DescribeClientConnectionsResponse();
                    ~DescribeClientConnectionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取客户端连接信息，包括客户端 IP 和对应 IP 的连接数量。
                     * @return Clients 客户端连接信息，包括客户端 IP 和对应 IP 的连接数量。
                     * 
                     */
                    std::vector<ClientConnection> GetClients() const;

                    /**
                     * 判断参数 Clients 是否已赋值
                     * @return Clients 是否已赋值
                     * 
                     */
                    bool ClientsHasBeenSet() const;

                    /**
                     * 获取满足条件的记录总条数，可用于分页查询。
                     * @return TotalCount 满足条件的记录总条数，可用于分页查询。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 客户端连接信息，包括客户端 IP 和对应 IP 的连接数量。
                     */
                    std::vector<ClientConnection> m_clients;
                    bool m_clientsHasBeenSet;

                    /**
                     * 满足条件的记录总条数，可用于分页查询。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBECLIENTCONNECTIONSRESPONSE_H_
