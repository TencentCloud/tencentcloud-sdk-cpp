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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATECATALOGREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATECATALOGREQUEST_H_

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
                * CreateCatalog请求参数结构体
                */
                class CreateCatalogRequest : public AbstractModel
                {
                public:
                    CreateCatalogRequest();
                    ~CreateCatalogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>catalog名称</p>
                     * @return Name <p>catalog名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>catalog名称</p>
                     * @param _name <p>catalog名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>catalog类型, 可选值TABLE、MODEL、VOLUME</p>
                     * @return Type <p>catalog类型, 可选值TABLE、MODEL、VOLUME</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>catalog类型, 可选值TABLE、MODEL、VOLUME</p>
                     * @param _type <p>catalog类型, 可选值TABLE、MODEL、VOLUME</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>工作空间唯一id</p>
                     * @return WorkspaceId <p>工作空间唯一id</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>工作空间唯一id</p>
                     * @param _workspaceId <p>工作空间唯一id</p>
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
                     * 获取<p>描述</p>
                     * @return Comment <p>描述</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _comment <p>描述</p>
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取<p>connection 的 ID，通过ListConnections接口获取</p>
                     * @return ConnectionId <p>connection 的 ID，通过ListConnections接口获取</p>
                     * 
                     */
                    std::string GetConnectionId() const;

                    /**
                     * 设置<p>connection 的 ID，通过ListConnections接口获取</p>
                     * @param _connectionId <p>connection 的 ID，通过ListConnections接口获取</p>
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
                     * 获取<p>数据目录来源，可选（融合版新增字段），取值参考 CatalogSourceEnum：METALAKE（专业版）/ CONNECTION（分析版），不传时默认按 METALAKE 处理</p>
                     * @return CatalogSource <p>数据目录来源，可选（融合版新增字段），取值参考 CatalogSourceEnum：METALAKE（专业版）/ CONNECTION（分析版），不传时默认按 METALAKE 处理</p>
                     * 
                     */
                    std::string GetCatalogSource() const;

                    /**
                     * 设置<p>数据目录来源，可选（融合版新增字段），取值参考 CatalogSourceEnum：METALAKE（专业版）/ CONNECTION（分析版），不传时默认按 METALAKE 处理</p>
                     * @param _catalogSource <p>数据目录来源，可选（融合版新增字段），取值参考 CatalogSourceEnum：METALAKE（专业版）/ CONNECTION（分析版），不传时默认按 METALAKE 处理</p>
                     * 
                     */
                    void SetCatalogSource(const std::string& _catalogSource);

                    /**
                     * 判断参数 CatalogSource 是否已赋值
                     * @return CatalogSource 是否已赋值
                     * 
                     */
                    bool CatalogSourceHasBeenSet() const;

                    /**
                     * 获取<p>连接侧数据目录名或数据库名，三段式数据源必填，二段式数据源（如 MySQL）不填。Doris/StarRocks/TChouse-D 等 MySQL 内核三段式数据源填写 external catalog 名称；PostgreSQL/Tencent PG/GaussDB/Hologres 等 PG 内核三段式数据源填写 databaseName；MySQL 等二段式数据源不填。</p>
                     * @return ConnectionCatalogName <p>连接侧数据目录名或数据库名，三段式数据源必填，二段式数据源（如 MySQL）不填。Doris/StarRocks/TChouse-D 等 MySQL 内核三段式数据源填写 external catalog 名称；PostgreSQL/Tencent PG/GaussDB/Hologres 等 PG 内核三段式数据源填写 databaseName；MySQL 等二段式数据源不填。</p>
                     * 
                     */
                    std::string GetConnectionCatalogName() const;

                    /**
                     * 设置<p>连接侧数据目录名或数据库名，三段式数据源必填，二段式数据源（如 MySQL）不填。Doris/StarRocks/TChouse-D 等 MySQL 内核三段式数据源填写 external catalog 名称；PostgreSQL/Tencent PG/GaussDB/Hologres 等 PG 内核三段式数据源填写 databaseName；MySQL 等二段式数据源不填。</p>
                     * @param _connectionCatalogName <p>连接侧数据目录名或数据库名，三段式数据源必填，二段式数据源（如 MySQL）不填。Doris/StarRocks/TChouse-D 等 MySQL 内核三段式数据源填写 external catalog 名称；PostgreSQL/Tencent PG/GaussDB/Hologres 等 PG 内核三段式数据源填写 databaseName；MySQL 等二段式数据源不填。</p>
                     * 
                     */
                    void SetConnectionCatalogName(const std::string& _connectionCatalogName);

                    /**
                     * 判断参数 ConnectionCatalogName 是否已赋值
                     * @return ConnectionCatalogName 是否已赋值
                     * 
                     */
                    bool ConnectionCatalogNameHasBeenSet() const;

                private:

                    /**
                     * <p>catalog名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>catalog类型, 可选值TABLE、MODEL、VOLUME</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>工作空间唯一id</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>connection 的 ID，通过ListConnections接口获取</p>
                     */
                    std::string m_connectionId;
                    bool m_connectionIdHasBeenSet;

                    /**
                     * <p>数据目录来源，可选（融合版新增字段），取值参考 CatalogSourceEnum：METALAKE（专业版）/ CONNECTION（分析版），不传时默认按 METALAKE 处理</p>
                     */
                    std::string m_catalogSource;
                    bool m_catalogSourceHasBeenSet;

                    /**
                     * <p>连接侧数据目录名或数据库名，三段式数据源必填，二段式数据源（如 MySQL）不填。Doris/StarRocks/TChouse-D 等 MySQL 内核三段式数据源填写 external catalog 名称；PostgreSQL/Tencent PG/GaussDB/Hologres 等 PG 内核三段式数据源填写 databaseName；MySQL 等二段式数据源不填。</p>
                     */
                    std::string m_connectionCatalogName;
                    bool m_connectionCatalogNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATECATALOGREQUEST_H_
