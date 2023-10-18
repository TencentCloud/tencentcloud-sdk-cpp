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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_RUNSQLGATEWAYSTATEMENTREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_RUNSQLGATEWAYSTATEMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * RunSqlGatewayStatement请求参数结构体
                */
                class RunSqlGatewayStatementRequest : public AbstractModel
                {
                public:
                    RunSqlGatewayStatementRequest();
                    ~RunSqlGatewayStatementRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取需要执行的sql，该sql会被Sql Gateway执行，当前支持的是paimon修改需求，因此主要是DDL语句
                     * @return Sql 需要执行的sql，该sql会被Sql Gateway执行，当前支持的是paimon修改需求，因此主要是DDL语句
                     * 
                     */
                    std::string GetSql() const;

                    /**
                     * 设置需要执行的sql，该sql会被Sql Gateway执行，当前支持的是paimon修改需求，因此主要是DDL语句
                     * @param _sql 需要执行的sql，该sql会被Sql Gateway执行，当前支持的是paimon修改需求，因此主要是DDL语句
                     * 
                     */
                    void SetSql(const std::string& _sql);

                    /**
                     * 判断参数 Sql 是否已赋值
                     * @return Sql 是否已赋值
                     * 
                     */
                    bool SqlHasBeenSet() const;

                    /**
                     * 获取Sql Gateway会话ID，可不填，如果不填则会自动创建一个会话ID，每个会话ID都有一个存活时间，测试环境为10分钟，线上默认是30分钟
                     * @return SessionId Sql Gateway会话ID，可不填，如果不填则会自动创建一个会话ID，每个会话ID都有一个存活时间，测试环境为10分钟，线上默认是30分钟
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置Sql Gateway会话ID，可不填，如果不填则会自动创建一个会话ID，每个会话ID都有一个存活时间，测试环境为10分钟，线上默认是30分钟
                     * @param _sessionId Sql Gateway会话ID，可不填，如果不填则会自动创建一个会话ID，每个会话ID都有一个存活时间，测试环境为10分钟，线上默认是30分钟
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 需要执行的sql，该sql会被Sql Gateway执行，当前支持的是paimon修改需求，因此主要是DDL语句
                     */
                    std::string m_sql;
                    bool m_sqlHasBeenSet;

                    /**
                     * Sql Gateway会话ID，可不填，如果不填则会自动创建一个会话ID，每个会话ID都有一个存活时间，测试环境为10分钟，线上默认是30分钟
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_RUNSQLGATEWAYSTATEMENTREQUEST_H_
