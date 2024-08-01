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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEDMSSQLHISTORYREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEDMSSQLHISTORYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeDmsSqlHistory请求参数结构体
                */
                class DescribeDmsSqlHistoryRequest : public AbstractModel
                {
                public:
                    DescribeDmsSqlHistoryRequest();
                    ~DescribeDmsSqlHistoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询节点ip
                     * @return QueryNode 查询节点ip
                     * 
                     */
                    std::vector<std::string> GetQueryNode() const;

                    /**
                     * 设置查询节点ip
                     * @param _queryNode 查询节点ip
                     * 
                     */
                    void SetQueryNode(const std::vector<std::string>& _queryNode);

                    /**
                     * 判断参数 QueryNode 是否已赋值
                     * @return QueryNode 是否已赋值
                     * 
                     */
                    bool QueryNodeHasBeenSet() const;

                    /**
                     * 获取运行状态
                     * @return QueryStatus 运行状态
                     * 
                     */
                    std::vector<std::string> GetQueryStatus() const;

                    /**
                     * 设置运行状态
                     * @param _queryStatus 运行状态
                     * 
                     */
                    void SetQueryStatus(const std::vector<std::string>& _queryStatus);

                    /**
                     * 判断参数 QueryStatus 是否已赋值
                     * @return QueryStatus 是否已赋值
                     * 
                     */
                    bool QueryStatusHasBeenSet() const;

                    /**
                     * 获取模糊搜索sql
                     * @return QuerySql 模糊搜索sql
                     * 
                     */
                    std::string GetQuerySql() const;

                    /**
                     * 设置模糊搜索sql
                     * @param _querySql 模糊搜索sql
                     * 
                     */
                    void SetQuerySql(const std::string& _querySql);

                    /**
                     * 判断参数 QuerySql 是否已赋值
                     * @return QuerySql 是否已赋值
                     * 
                     */
                    bool QuerySqlHasBeenSet() const;

                    /**
                     * 获取根据报错原因搜索
                     * @return QueryErrMsg 根据报错原因搜索
                     * 
                     */
                    std::string GetQueryErrMsg() const;

                    /**
                     * 设置根据报错原因搜索
                     * @param _queryErrMsg 根据报错原因搜索
                     * 
                     */
                    void SetQueryErrMsg(const std::string& _queryErrMsg);

                    /**
                     * 判断参数 QueryErrMsg 是否已赋值
                     * @return QueryErrMsg 是否已赋值
                     * 
                     */
                    bool QueryErrMsgHasBeenSet() const;

                private:

                    /**
                     * 查询节点ip
                     */
                    std::vector<std::string> m_queryNode;
                    bool m_queryNodeHasBeenSet;

                    /**
                     * 运行状态
                     */
                    std::vector<std::string> m_queryStatus;
                    bool m_queryStatusHasBeenSet;

                    /**
                     * 模糊搜索sql
                     */
                    std::string m_querySql;
                    bool m_querySqlHasBeenSet;

                    /**
                     * 根据报错原因搜索
                     */
                    std::string m_queryErrMsg;
                    bool m_queryErrMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEDMSSQLHISTORYREQUEST_H_
