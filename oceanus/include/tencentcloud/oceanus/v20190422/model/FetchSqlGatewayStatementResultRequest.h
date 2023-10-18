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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_FETCHSQLGATEWAYSTATEMENTRESULTREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_FETCHSQLGATEWAYSTATEMENTRESULTREQUEST_H_

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
                * FetchSqlGatewayStatementResult请求参数结构体
                */
                class FetchSqlGatewayStatementResultRequest : public AbstractModel
                {
                public:
                    FetchSqlGatewayStatementResultRequest();
                    ~FetchSqlGatewayStatementResultRequest() = default;
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
                     * 获取Sql Gateway会话ID
                     * @return SessionId Sql Gateway会话ID
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置Sql Gateway会话ID
                     * @param _sessionId Sql Gateway会话ID
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取sql的查询id
                     * @return OperationHandleId sql的查询id
                     * 
                     */
                    std::string GetOperationHandleId() const;

                    /**
                     * 设置sql的查询id
                     * @param _operationHandleId sql的查询id
                     * 
                     */
                    void SetOperationHandleId(const std::string& _operationHandleId);

                    /**
                     * 判断参数 OperationHandleId 是否已赋值
                     * @return OperationHandleId 是否已赋值
                     * 
                     */
                    bool OperationHandleIdHasBeenSet() const;

                    /**
                     * 获取下一条结果的获取url，首次获取执行结果时可以为空，当获取下一批查询结果时需要传递
                     * @return ResultUri 下一条结果的获取url，首次获取执行结果时可以为空，当获取下一批查询结果时需要传递
                     * 
                     */
                    std::string GetResultUri() const;

                    /**
                     * 设置下一条结果的获取url，首次获取执行结果时可以为空，当获取下一批查询结果时需要传递
                     * @param _resultUri 下一条结果的获取url，首次获取执行结果时可以为空，当获取下一批查询结果时需要传递
                     * 
                     */
                    void SetResultUri(const std::string& _resultUri);

                    /**
                     * 判断参数 ResultUri 是否已赋值
                     * @return ResultUri 是否已赋值
                     * 
                     */
                    bool ResultUriHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Sql Gateway会话ID
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * sql的查询id
                     */
                    std::string m_operationHandleId;
                    bool m_operationHandleIdHasBeenSet;

                    /**
                     * 下一条结果的获取url，首次获取执行结果时可以为空，当获取下一批查询结果时需要传递
                     */
                    std::string m_resultUri;
                    bool m_resultUriHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_FETCHSQLGATEWAYSTATEMENTRESULTREQUEST_H_
