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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATESCHEMAREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATESCHEMAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * UpdateSchema请求参数结构体
                */
                class UpdateSchemaRequest : public AbstractModel
                {
                public:
                    UpdateSchemaRequest();
                    ~UpdateSchemaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>数据目录名称，必填</p>
                     * @return CatalogName <p>数据目录名称，必填</p>
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置<p>数据目录名称，必填</p>
                     * @param _catalogName <p>数据目录名称，必填</p>
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
                     * 获取<p>schema名称，必填</p>
                     * @return SchemaName <p>schema名称，必填</p>
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置<p>schema名称，必填</p>
                     * @param _schemaName <p>schema名称，必填</p>
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
                     * 获取<p>调用时所在workspace唯一id，必填</p>
                     * @return WorkspaceId <p>调用时所在workspace唯一id，必填</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>调用时所在workspace唯一id，必填</p>
                     * @param _workspaceId <p>调用时所在workspace唯一id，必填</p>
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
                     * 获取<p>新描述，可选，为空表示不修改注释</p>
                     * @return NewComment <p>新描述，可选，为空表示不修改注释</p>
                     * 
                     */
                    std::string GetNewComment() const;

                    /**
                     * 设置<p>新描述，可选，为空表示不修改注释</p>
                     * @param _newComment <p>新描述，可选，为空表示不修改注释</p>
                     * 
                     */
                    void SetNewComment(const std::string& _newComment);

                    /**
                     * 判断参数 NewComment 是否已赋值
                     * @return NewComment 是否已赋值
                     * 
                     */
                    bool NewCommentHasBeenSet() const;

                    /**
                     * 获取<p>数据源连接ID，可选。分析版catalog不支持写操作，传入非空时返回错误。可通过 ListConnections 获取</p>
                     * @return ConnectionId <p>数据源连接ID，可选。分析版catalog不支持写操作，传入非空时返回错误。可通过 ListConnections 获取</p>
                     * 
                     */
                    std::string GetConnectionId() const;

                    /**
                     * 设置<p>数据源连接ID，可选。分析版catalog不支持写操作，传入非空时返回错误。可通过 ListConnections 获取</p>
                     * @param _connectionId <p>数据源连接ID，可选。分析版catalog不支持写操作，传入非空时返回错误。可通过 ListConnections 获取</p>
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
                     * <p>数据目录名称，必填</p>
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                    /**
                     * <p>schema名称，必填</p>
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * <p>调用时所在workspace唯一id，必填</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>新描述，可选，为空表示不修改注释</p>
                     */
                    std::string m_newComment;
                    bool m_newCommentHasBeenSet;

                    /**
                     * <p>数据源连接ID，可选。分析版catalog不支持写操作，传入非空时返回错误。可通过 ListConnections 获取</p>
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

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATESCHEMAREQUEST_H_
