/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTVIEWSREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTVIEWSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/FetchOption.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * ListViews请求参数结构体
                */
                class ListViewsRequest : public AbstractModel
                {
                public:
                    ListViewsRequest();
                    ~ListViewsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>数据目录名</p>
                     * @return CatalogName <p>数据目录名</p>
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置<p>数据目录名</p>
                     * @param _catalogName <p>数据目录名</p>
                     * 
                     */
                    void SetCatalogName(const std::string& _catalogName);

                    /**
                     * 判断参数 CatalogName 是否已赋值
                     * @return CatalogName 是否已赋值
                     * 
                     */
                    bool CatalogNameHasBeenSet() const;

                    /**
                     * 获取<p>数据库名</p>
                     * @return SchemaName <p>数据库名</p>
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置<p>数据库名</p>
                     * @param _schemaName <p>数据库名</p>
                     * 
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                    /**
                     * 获取<p>调用时所在workspace唯一id</p>
                     * @return WorkspaceId <p>调用时所在workspace唯一id</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>调用时所在workspace唯一id</p>
                     * @param _workspaceId <p>调用时所在workspace唯一id</p>
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取<p>最大结果条数，默认10</p>
                     * @return MaxResults <p>最大结果条数，默认10</p>
                     * 
                     */
                    int64_t GetMaxResults() const;

                    /**
                     * 设置<p>最大结果条数，默认10</p>
                     * @param _maxResults <p>最大结果条数，默认10</p>
                     * 
                     */
                    void SetMaxResults(const int64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取<p>分页token</p>
                     * @return PageToken <p>分页token</p>
                     * 
                     */
                    std::string GetPageToken() const;

                    /**
                     * 设置<p>分页token</p>
                     * @param _pageToken <p>分页token</p>
                     * 
                     */
                    void SetPageToken(const std::string& _pageToken);

                    /**
                     * 判断参数 PageToken 是否已赋值
                     * @return PageToken 是否已赋值
                     * 
                     */
                    bool PageTokenHasBeenSet() const;

                    /**
                     * 获取<p>数据获取选项，可选，控制是否返回权限信息及按权限过滤</p>
                     * @return FetchOption <p>数据获取选项，可选，控制是否返回权限信息及按权限过滤</p>
                     * 
                     */
                    FetchOption GetFetchOption() const;

                    /**
                     * 设置<p>数据获取选项，可选，控制是否返回权限信息及按权限过滤</p>
                     * @param _fetchOption <p>数据获取选项，可选，控制是否返回权限信息及按权限过滤</p>
                     * 
                     */
                    void SetFetchOption(const FetchOption& _fetchOption);

                    /**
                     * 判断参数 FetchOption 是否已赋值
                     * @return FetchOption 是否已赋值
                     * 
                     */
                    bool FetchOptionHasBeenSet() const;

                    /**
                     * 获取<p>数据源连接ID，可选（融合版新增字段）。非空→走分析版路径，空/缺省→走专业版TcLake路径。可通过 ListConnections 获取</p>
                     * @return ConnectionId <p>数据源连接ID，可选（融合版新增字段）。非空→走分析版路径，空/缺省→走专业版TcLake路径。可通过 ListConnections 获取</p>
                     * 
                     */
                    std::string GetConnectionId() const;

                    /**
                     * 设置<p>数据源连接ID，可选（融合版新增字段）。非空→走分析版路径，空/缺省→走专业版TcLake路径。可通过 ListConnections 获取</p>
                     * @param _connectionId <p>数据源连接ID，可选（融合版新增字段）。非空→走分析版路径，空/缺省→走专业版TcLake路径。可通过 ListConnections 获取</p>
                     * 
                     */
                    void SetConnectionId(const std::string& _connectionId);

                    /**
                     * 判断参数 ConnectionId 是否已赋值
                     * @return ConnectionId 是否已赋值
                     * 
                     */
                    bool ConnectionIdHasBeenSet() const;

                    /**
                     * 获取<p>数据目录来源，可选（Setats融合新增字段）。取值：METALAKE（专业版tclake）/ CONNECTION（分析版Linked Catalog）/ SETATS（Setats元数据）。路由优先级：显式非空CatalogSource &gt; 非空ConnectionId（视为CONNECTION）&gt; 默认METALAKE；CatalogSource非空时ConnectionId将被忽略。</p>
                     * @return CatalogSource <p>数据目录来源，可选（Setats融合新增字段）。取值：METALAKE（专业版tclake）/ CONNECTION（分析版Linked Catalog）/ SETATS（Setats元数据）。路由优先级：显式非空CatalogSource &gt; 非空ConnectionId（视为CONNECTION）&gt; 默认METALAKE；CatalogSource非空时ConnectionId将被忽略。</p>
                     * 
                     */
                    std::string GetCatalogSource() const;

                    /**
                     * 设置<p>数据目录来源，可选（Setats融合新增字段）。取值：METALAKE（专业版tclake）/ CONNECTION（分析版Linked Catalog）/ SETATS（Setats元数据）。路由优先级：显式非空CatalogSource &gt; 非空ConnectionId（视为CONNECTION）&gt; 默认METALAKE；CatalogSource非空时ConnectionId将被忽略。</p>
                     * @param _catalogSource <p>数据目录来源，可选（Setats融合新增字段）。取值：METALAKE（专业版tclake）/ CONNECTION（分析版Linked Catalog）/ SETATS（Setats元数据）。路由优先级：显式非空CatalogSource &gt; 非空ConnectionId（视为CONNECTION）&gt; 默认METALAKE；CatalogSource非空时ConnectionId将被忽略。</p>
                     * 
                     */
                    void SetCatalogSource(const std::string& _catalogSource);

                    /**
                     * 判断参数 CatalogSource 是否已赋值
                     * @return CatalogSource 是否已赋值
                     * 
                     */
                    bool CatalogSourceHasBeenSet() const;

                private:

                    /**
                     * <p>数据目录名</p>
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                    /**
                     * <p>数据库名</p>
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * <p>调用时所在workspace唯一id</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>最大结果条数，默认10</p>
                     */
                    int64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * <p>分页token</p>
                     */
                    std::string m_pageToken;
                    bool m_pageTokenHasBeenSet;

                    /**
                     * <p>数据获取选项，可选，控制是否返回权限信息及按权限过滤</p>
                     */
                    FetchOption m_fetchOption;
                    bool m_fetchOptionHasBeenSet;

                    /**
                     * <p>数据源连接ID，可选（融合版新增字段）。非空→走分析版路径，空/缺省→走专业版TcLake路径。可通过 ListConnections 获取</p>
                     */
                    std::string m_connectionId;
                    bool m_connectionIdHasBeenSet;

                    /**
                     * <p>数据目录来源，可选（Setats融合新增字段）。取值：METALAKE（专业版tclake）/ CONNECTION（分析版Linked Catalog）/ SETATS（Setats元数据）。路由优先级：显式非空CatalogSource &gt; 非空ConnectionId（视为CONNECTION）&gt; 默认METALAKE；CatalogSource非空时ConnectionId将被忽略。</p>
                     */
                    std::string m_catalogSource;
                    bool m_catalogSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTVIEWSREQUEST_H_
